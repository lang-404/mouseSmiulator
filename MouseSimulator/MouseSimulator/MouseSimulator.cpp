// MouseSimulator.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "MouseSimulator.h"
#include <windows.h>

// ���ǵ���������һ��ʾ��
MOUSESIMULATOR_API int nMouseSimulator=0;

// ���ǵ���������һ��ʾ����
MOUSESIMULATOR_API int fnMouseSimulator(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� MouseSimulator.h
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
	int ScreenX = GetSystemMetrics(SM_CXSCREEN);// ��
	int ScreenY = GetSystemMetrics(SM_CYSCREEN);// ��
	// ��������߽��ж�
	x < 0 ? 0 : x;
	x > ScreenX ? ScreenX : x;
	y < 0 ? 0 : y;
	y > ScreenY ? ScreenY : y;

	// ����ض�λ������λ��
	SetCursorPos(x, y);
}

//---------------------------------------------------
void MouseSimulator::LeftClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
}

//---------------------------------------------------
void MouseSimulator::LeftDubbleClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
	mouse_event(MOUSEEVENTF_LEFTUP, mouseX, mouseY, 0, 0);
}

//------------------------------------------------------
void MouseSimulator::RightClickEvent()
{
	GetNewCursor();
	mouse_event(MOUSEEVENTF_RIGHTDOWN, mouseX, mouseY, 0, 0);
	Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
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
	Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
	mouse_event(MOUSEEVENTF_MIDDLEUP, mouseX, mouseY, 0, 0);
}
