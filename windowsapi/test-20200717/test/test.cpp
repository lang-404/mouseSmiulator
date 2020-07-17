// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "uSensWindowsAPI.h"



int main()
{
	POINT Screen;
	int x, y, k;
	int index;

	getScreen(Screen);

	printf("当前屏幕分辨率：X = %d,y = %d\n", Screen.x, Screen.y);
	while (true)
	{
		printf("*************   菜单    **************\n");
		printf("*******      请选择操作        *******\n");
		printf("*******     鼠标重定位置：1         **\n");
		printf("*******     鼠标点击事件：2         **\n");
		printf("*******   退出请按:其他任意键       **\n");
		printf("**************************************\n");
		printf("\n");
		std::cin >> index;
		if (index == 1)
		{
			printf("输入鼠标位置：X Y\n");
			std::cin >> x >> y;
			setMouseMove(x, y);
		}
		else if (index == 2)
        {
				printf("****************************************\n");
				printf("*********    鼠标点击事件   *********\n");
				printf("*****        1、左键单击        *****\n");
				printf("*****        2、左键双击        *****\n");
				printf("*****        3、左键按下        *****\n");
				printf("*****        4、左键弹起        *****\n");
				printf("*****        5、右键单击        *****\n");
				printf("*****        6、单击滚轮        *****\n");
				printf("****************************************\n");

				std::cin >> k;

				MouseClick(k);
		}
		else
		{
			exit(0);
		}
	}






}

