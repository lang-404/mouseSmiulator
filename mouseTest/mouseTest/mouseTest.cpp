// test.cpp : �������̨Ӧ�ó������ڵ㡣
//


//#include "uSensWindowsAPI.h"

#include "MouseSimulator.h"
#include <iostream>



int main()
{
	//POINT Screen;
	int x, y, k;
	int index;

	//getScreen(Screen);

	MouseSimulator mSimulator;
	
	while (true)
	{
		printf("*************   �˵�    **************\n");
		printf("*******      ��ѡ�����        *******\n");
		printf("*******     ����ض�λ�ã�1         **\n");
		printf("*******     ������¼���2         **\n");
		printf("*******   �˳��밴:���������       **\n");
		printf("**************************************\n");
		printf("\n");
		std::cin >> index;
		if (index == 1)
		{
			printf("�������λ�ã�X Y\n");
			std::cin >> x >> y;
			mSimulator.setMouseMoveEvent(x, y);
		}
		else if (index == 2)
        {
				printf("****************************************\n");
				printf("*********    ������¼�   *********\n");
				printf("*****        1���������        *****\n");
				printf("*****        2�����˫��        *****\n");
				printf("*****        3���������        *****\n");
				printf("*****        4���������        *****\n");
				printf("*****        5���Ҽ�����        *****\n");
				printf("*****        6����������        *****\n");
				printf("****************************************\n");

				std::cin >> k;

				switch (k)
				{
				case 1:
					mSimulator.LeftClickEvent();
					break;
				case 2:
					mSimulator.LeftDubbleClickEvent();
					break;
				case 3:
					mSimulator.MouseLeftDown();
					break;
				case 4:
					mSimulator.MouseLeftUP();
					break;
				case 5:
					mSimulator.RightClickEvent();
					break;
				case 6:
					mSimulator.MouseRollerClick();
					break;
				default:
					break;
				}
		}
		else
		{
			exit(0);
		}
	}






}

