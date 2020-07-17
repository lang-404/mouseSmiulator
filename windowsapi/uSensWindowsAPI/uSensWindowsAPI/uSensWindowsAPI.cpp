#include "uSensWindowsAPI.h"



void getScreen(POINT &Screen)
{
	Screen.x = GetSystemMetrics(SM_CXSCREEN);// ��
	Screen.y = GetSystemMetrics(SM_CYSCREEN);// ��
}

void setMouseMove(int x, int y)
{
	// 1���������
	POINT Screen;

	// 2��������ʼ��
	Screen.x = 0;
	Screen.y = 0;

	// 3����ȡ��Ļ�ֱ���
	getScreen(Screen);

	// 4����������߽��ж�
	x < 0 ? 0 : x;
	x > Screen.x ? Screen.x : x;
	y < 0 ? 0 : y;
	y > Screen.y ? Screen.y : y;

	// 5������ض�λ������λ��
	SetCursorPos(x, y);
}

void MouseClick(int eventID)
{
	// 1���������
	POINT MousePos;

	// 2��������ʼ��
	MousePos.x = 0;
	MousePos.y = 0;

	// 2����ȡ��ǰ���λ������
	GetCursorPos(&MousePos);

	// 3���������
	if (eventID == 1)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);

	}// 4�����˫��
	else if (eventID == 2)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);

	}// ����������
	else if (eventID == 3)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, MousePos.x, MousePos.y, 0, 0);

	}// ����������
	else if (eventID == 4)
	{
		mouse_event(MOUSEEVENTF_LEFTUP, MousePos.x, MousePos.y, 0, 0);
	}
	else if (eventID == 5)
	{
		mouse_event(MOUSEEVENTF_RIGHTDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
		mouse_event(MOUSEEVENTF_RIGHTUP, MousePos.x, MousePos.y, 0, 0);
	}
	else if (eventID == 6)
	{
		mouse_event(MOUSEEVENTF_MIDDLEDOWN, MousePos.x, MousePos.y, 0, 0);
		Sleep(10);//Ҫ����ĳЩӦ�õķ�Ӧʱ�� 
		mouse_event(MOUSEEVENTF_MIDDLEUP, MousePos.x, MousePos.y, 0, 0);
	}
}