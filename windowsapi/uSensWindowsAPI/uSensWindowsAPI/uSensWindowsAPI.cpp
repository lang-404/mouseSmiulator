#include "uSensWindowsAPI.h"



void getScreen(POINT &Screen)
{
	Screen.x = GetSystemMetrics(SM_CXSCREEN);// 宽
	Screen.y = GetSystemMetrics(SM_CYSCREEN);// 高
}

void setMouseMove(int x, int y)
{
	// 1、定义变量
	POINT Screen;

	// 2、变量初始化
	Screen.x = 0;
	Screen.y = 0;

	// 3、获取屏幕分辨率
	getScreen(Screen);

	// 4、输入坐标边界判断
	x < 0 ? 0 : x;
	x > Screen.x ? Screen.x : x;
	y < 0 ? 0 : y;
	y > Screen.y ? Screen.y : y;

	// 5、鼠标重定位到输入位置
	SetCursorPos(x, y);
}

void MouseClick(int eventID)
{
	// 1、定义变量
	POINT MousePos;

	// 2、变量初始化
	MousePos.x = 0;
	MousePos.y = 0;

	// 2、获取当前鼠标位置坐标
	GetCursorPos(&MousePos);

	// 3、左键单击
	if (eventID == 1)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//要留给某些应用的反应时间 
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);

	}// 4、左键双击
	else if (eventID == 2)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//要留给某些应用的反应时间 
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);

	}// 鼠标左键按下
	else if (eventID == 3)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);

	}// 鼠标左键弹起
	else if (eventID == 4)
	{
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);
	}
	else if (eventID == 5)
	{
		mouse_event(MOUSEEVENTF_RIGHTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//要留给某些应用的反应时间 
		mouse_event(MOUSEEVENTF_RIGHTUP, MousePos.x, MousePos.y, 0, 0);
	}
	else if (eventID == 6)
	{
		mouse_event(MOUSEEVENTF_MIDDLEDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//要留给某些应用的反应时间 
		mouse_event(MOUSEEVENTF_MIDDLEUP, MousePos.x, MousePos.y, 0, 0);
	}
}