// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include "uSensWindowsAPI.h"



int main()
{
	POINT Screen;
	int x, y, k;
	int index;

	getScreen(Screen);

	printf("��ǰ��Ļ�ֱ��ʣ�X = %d,y = %d\n", Screen.x, Screen.y);
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
			setMouseMove(x, y);
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

				MouseClick(k);
		}
		else
		{
			exit(0);
		}
	}






}

