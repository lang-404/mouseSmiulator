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
		printf("*******      �˳��밴:    0         **\n");
		printf("**************************************\n");
		printf("\n");
		std::cin >> index;
		switch (index)
		{
			case 1:{
				printf("�������λ�ã�X,Y\n");
				std::cin >> x>>y;
				printf("�������λ�ã�Y\n");
				std::cin >> y;
				setMouseMove(x, y);

				//POINT P;
				//GetCursorPos(&P);
				//printf("��ǰ����Ϊ��x=%d,y = %d\n", P.x, P.y);

				break;
			}
			case 2: {
				printf(" ������Ҫ���е��¼�ID: ������0��˫����1\n");
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

