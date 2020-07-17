// MouseSimulator.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "MouseSimulator.h"
#include <windows.h>

// 这是导出变量的一个示例
MOUSESIMULATOR_API int nMouseSimulator=0;

// 这是导出函数的一个示例。
MOUSESIMULATOR_API int fnMouseSimulator(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 MouseSimulator.h
//---------------------------------------------------
MouseSimulator::MouseSimulator()
{
}

//---------------------------------------------------
MouseSimulator::~MouseSimulator()
{
}

//---------------------------------------------------
void MouseSimulator::GetNewCursor()
{
	POINT MousePos;
	GetCursorPos(&MousePos);
	mouseX = MousePos.x;
	mouseY = MousePos.y;
}

//---------------------------------------------------
void MouseSimulator::setMouseMoveEvent(int x, int y)
{
	int ScreenX = GetSystemMetrics(SM_CXSCREEN);// 宽
	int ScreenY = GetSystemMetrics(SM_CYSCREEN);// 高
	// 输入坐标边界判断
	x < 0 ? 0 : x;
	x > ScreenX ? ScreenX : x;
	y < 0 ? 0 : y;
	y > ScreenY ? ScreenY : y;

	// 鼠标重定位到输入位置
	SetCursorPos(x, y);
}

//---------------------------------------------------
void MouseSimulator::LeftClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//要留给某些应用的反应时间 
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
}

//---------------------------------------------------
void MouseSimulator::LeftDubbleClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//要留给某些应用的反应时间 
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
}

//------------------------------------------------------
void MouseSimulator::RightClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_RIGHTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//要留给某些应用的反应时间 
	mouse_event(MOUSEEVENTF_RIGHTUP, mouseX, mouseY, 0, 0);
}

//------------------------------------------------------
void MouseSimulator::MouseLeftDown()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
}

//-------------------------------------------------------
void MouseSimulator::MouseLeftUP()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_RIGHTUP, mouseX, mouseY, 0, 0);
}

//-------------------------------------------------------
void MouseSimulator::MouseRollerClick()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_MIDDLEDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//要留给某些应用的反应时间 
	mouse_event(MOUSEEVENTF_MIDDLEUP, mouseX, mouseY, 0, 0);
}
