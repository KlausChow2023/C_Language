#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//С��Ϸ�����Բ���һ����1 - 100�����������������¡�

void menu()
{
	printf("---------------��������Ϸ---------------\n");
	printf("----------------------------------------\n");
	printf("-----------------1.Play-----------------\n");
	printf("-----------------0.Exit-----------------\n");
	printf("----------------------------------------\n");
	//�����Ϸ�˵�
}
void game()
{	
	int input2 = 0;
	int i = 0;
	int rdm = rand()%100 + 1;		/*����������ĺ�������������һ���� 0 �� RAND_MAX ������,�����32767*/
	//�κ����� ȡģ 100���ó������϶���0 �� 99���ټ���1 ��������Ҫ�� 1 �� 100
	//����һ�������
	printf("�²������Ƕ��٣�\n");
	while (1)
	{
		scanf("%d", &input2);
		i++;
		if (input2 < rdm)
		{
			printf("��������е�С���ٲ²¿�\n\n");
		}
		else if (input2 > rdm)
		{
			printf("��������е���ٲ²¿�\n\n");
		}
		else
		{
			printf("��ϲ�㣬����""%d""�Σ����ڲ¶��ˣ�\n\n", i);
			break;
		}
	}	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//srand ��������ʽΪ srand( unsigned int a ),��Ҫͷ�ļ�Ϊ #include <stdlib.h>
	//time����,������ָ�룬 NULL Ϊ��ָ�룬���� 0 ����Ҫͷ�ļ�Ϊ #include <time.h>
	//ʱ���
	do
	{
		menu();
		printf("��ѡ��(��������1 �� 0) >>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();		//��Ϸ�������߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ֻ���������� 1 �� 0 ������\n\n");
			Sleep(1000);
			break;
		}
	} while (input);
	return 0;
}