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
		printf("*******      退出请按:    0         **\n");
		printf("**************************************\n");
		printf("\n");
		std::cin >> index;
		switch (index)
		{
			case 1:{
				printf("输入鼠标位置：X,Y\n");
				std::cin >> x>>y;
				printf("输入鼠标位置：Y\n");
				std::cin >> y;
				setMouseMove(x, y);

				//POINT P;
				//GetCursorPos(&P);
				//printf("当前坐标为：x=%d,y = %d\n", P.x, P.y);

				break;
			}
			case 2: {
				printf(" 请输入要进行的事件ID: 单击：0，双击：1\n");
				std::cin >> k;

				MouseClick(k);
				break;
			}
			case 0:
			{
				exit(0);
			}
			default: {
				continue;
			}
		}
	}






}

