#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>


void Task1()
{
	printf("\n ---------------------------------------------------------------------\n Task1 \n\n");
	
	int a, b;

	printf(" ������� ����� a => ");
	scanf_s("%d", &a);

	printf(" ������� ����� b => ");
	scanf_s("%d", &b);

	if (a != b)
	{
		if (a > b) {printf("\n ��������� ����� � ������� �����������: %d %d", a,b);}

		else { printf("\n ��������� ����� � ������� �����������: %d %d", b, a); }

	}



}

void Task2()
{
	printf("\n ---------------------------------------------------------------------\n Task2 \n\n");

	int a, b, c, d, e;
	float average=0;

	printf(" ������� 5 ������ �������� �� ������ �� 1 �� 5 ������: \n");
	
	do
	{
		printf("\n 1 => ");
		scanf_s("%d", &a);
		if (a == 0 || a > 5) { printf("	�� ������ ����, ���������� ��� ���..."); }
	} while (a == 0 || a > 5);
	
	do
	{
		printf("\n 2 => ");
		scanf_s("%d", &b);
		if (b == 0 || b > 5) { printf("	�� ������ ����, ���������� ��� ���..."); }
	} while (b == 0 || b > 5);

	do
	{
		printf("\n 3 => ");
		scanf_s("%d", &c);
		if (c == 0 || c > 5) { printf("	�� ������ ����, ���������� ��� ���..."); }
	} while (c == 0 || c > 5);

	do
	{
		printf("\n 4 => ");
		scanf_s("%d", &d);
		if (d == 0 || d > 5) { printf("	�� ������ ����, ���������� ��� ���..."); }
	} while (d == 0 || d > 5);

	do
	{
		printf("\n 5 => ");
		scanf_s("%d", &e);
		if (e == 0 || e > 5) { printf("	�� ������ ����, ���������� ��� ���..."); }
	} while (e == 0 || e > 5);

	average = (float)(a + b + c + d + e) / 5;

	if (average >= 4) { printf("\n ������� ��� ��������: %.1f \n ������� ������� � ��������\n", average); }
	else { printf("\n ������� ��� ��������: %.1f \n ������� �� ������� � ��������", average); }
	
}


void Task3()
{
	printf("\n ---------------------------------------------------------------------\n Task3 \n\n");

	printf(" ������� 3 � 2 ���������� :) ");
	switch (2)
	{
	case 2: {Task2(); } break;
	}

}

void Task4()
{
	printf("\n ---------------------------------------------------------------------\n Task4 \n\n");

	int a, b=1234567890, operation=0, result;

	printf(" ����������� \n\n ����� => ");
	scanf_s("%d", &a);

	printf("\n �������� ��������: ");
	printf("\n (1) -  \"+\"");
	printf("\n (2) -  \"-\"");
	printf("\n (3) -  \"*\"");
	printf("\n (4) -  \"/\"");
	printf("\n  ");

	start:
	scanf_s("%d",&operation);
	if (operation < 1 || operation > 4) { printf("\n ��������� �����. ���������� ��� ���... "); printf("\n  "); goto start; }

	printf("\n ����� => ");
	scanf_s("%d", &b);
	
		switch (operation)
		{
		case 1: {result = a + b; printf("\n ��������� %d", result); } break;
		case 2: {result = a - b; printf("\n ��������� %d", result); } break;
		case 3: {result = a * b; printf("\n ��������� %d", result); } break;
		case 4: 
		{
			if (a ==0 || b == 0)	{ printf("\n ������� �� ����!"); }
			else { result = a / b; printf("\n ��������� %d", result);  }
		} break;

		}

}

void Task5()
{
	printf("\n ---------------------------------------------------------------------\n Task5 \n\n");

	int a, b, c;

	printf("\n �������� ����� ����� ��� ���� � ��� ������: \n");
	printf("\n 0 � ������");
	printf("\n 1 � �����");
	printf("\n 2 � �������");
	printf("\n 3 � �������");
	printf("\n 4 � �������");
	printf("\n 5 � ���������");
	printf("\n 6 � ������");
	printf("\n 7 � �����");
	printf("\n 8 � �����");
	printf("\n 9 � ����� - �����");
	printf("\n 10 � ������ - �������");
	printf("\n 11 � ������ - �������");
	printf("\n 12 � ������ - �������");
	printf("\n 13 � ������ - ���������");
	printf("\n 14 � ������ - ������");
	printf("\n 15 � ���� - �����");


	do
	{
		printf("\n\n ���� ���� �� 0 �� 14 => ");
		scanf_s("%d", &a);

		switch (a)
		{
		case 0:		{ printf("\n 0 � ������");				} break;
		case 1:		{ printf("\n 1 � �����");				} break;
		case 2:		{ printf("\n 2 � �������");				} break;
		case 3:		{ printf("\n 3 � �������");				} break;
		case 4:		{ printf("\n 4 � �������");				} break;
		case 5:		{ printf("\n 5 � ���������");			} break;
		case 6:		{ printf("\n 6 � ������");				} break;
		case 7:		{ printf("\n 7 � �����");				} break;
		case 8:		{ printf("\n 8 � �����");				} break;
		case 9:		{ printf("\n 9 � ����� - �����");		} break;
		case 10:	{ printf("\n 10 � ������ - �������");	} break;
		case 11:	{ printf("\n 11 � ������ - �������");	} break;
		case 12:	{ printf("\n 12 � ������ - �������");	} break;
		case 13:	{ printf("\n 13 � ������ - ���������"); } break;
		case 14:	{ printf("\n 14 � ������ - ������");	} break;
		case 15:	{ printf("\n 15 � ���� - �����");		} break;
		}

		printf("\n\n ���� ������ �� 0 �� 15 => ");
		scanf_s("%d", &b);

		switch (b)
		{
		case 0:		{ printf("\n 0 � ������");				} break;
		case 1:		{ printf("\n 1 � �����");				} break;
		case 2:		{ printf("\n 2 � �������");				} break;
		case 3:		{ printf("\n 3 � �������");				} break;
		case 4:		{ printf("\n 4 � �������");				} break;
		case 5:		{ printf("\n 5 � ���������");			} break;
		case 6:		{ printf("\n 6 � ������");				} break;
		case 7:		{ printf("\n 7 � �����");				} break;
		case 8:		{ printf("\n 8 � �����");				} break;
		case 9:		{ printf("\n 9 � ����� - �����");		} break;
		case 10:	{ printf("\n 10 � ������ - �������");	} break;
		case 11:	{ printf("\n 11 � ������ - �������");	} break;
		case 12:	{ printf("\n 12 � ������ - �������");	} break;
		case 13:	{ printf("\n 13 � ������ - ���������"); } break;
		case 14:	{ printf("\n 14 � ������ - ������");	} break;
		case 15:	{ printf("\n 15 � ���� - �����");		} break;
		}

		if (a == b)
		{
			printf("\n\n ��� � ���� ������� �����������. �� ������ �� ������� :). \n ���������� ��� ���...");
			//a = 0;
			//b = 1;
		}

	} while (a == b);
		
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (a << 4) | b);
	
	printf("\n\n ��������� ��������� \n");
		
}

void Task6()
{
	printf("\n ---------------------------------------------------------------------\n Task6 \n\n");

	int n, x;

	printf(" ������� ����� N => ");
	scanf_s("%d", &n);
	printf("\n");

	for (int i = 0; i < 8; i++)
	{
		x=pow(n, i);
		printf(" ����� %d^%d = %d \n", n, i, x);
	}
		

}

void Task7()
{
	printf("\n ---------------------------------------------------------------------\n Task7 \n\n");

	int t1c, t2c, t3c, i=0;
	float sum, average, res;
	int t1 = 50 + rand() % 30;
	int t2 = 50 + rand() % 30;
	int t3 = 50 + rand() % 30;

	printf("\n ���-�� ���c������ � ������ ���������� �����: %d \n",t1);
	printf(" ���-�� ���c������ � ������ ���������� �����: %d \n",t2);
	printf(" ���-�� ��c������� � ������ ���������� �����: %d \n\n",t3);
	printf(" ����� ���������� : %d \n\n", (t1+t2+t3));

	average = (float)(t1 + t2 + t3) / 3;

	
	t1 = t2 = t3 = average;
	
	res = (average - t1) * 3;

	if (res != 0 && res < 1.1 && res < 2.0) { t1 = t1 + 1; }
	if (res > 1.1 && res < 2.0) { t1 = t1 + 1; t2 = t2 + 1;}

	printf(" ���-�� ���c������ � ������ ���������� ����� ����� ���������: %d \n", t1);
	printf(" ���-�� ���c������ � ������ ���������� ����� ����� ���������: %d \n", t2);
	printf(" ���-�� ��c������� � ������ ���������� ����� ����� ���������: %d \n\n", t3);
	printf(" ���-��  ����������� : %d \n\n", (t1+t2+t3));

}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int choise=0, flag, i;
	
	do
	{
		printf("\n Enter number of task => ");
		scanf_s("%d", &choise);
		
		switch (choise)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		
		}
				
		printf("\n\n\n Do You want to continue? 1/0 => ");
		scanf_s("%d", &flag);
		
		system("color 07");  // ��������� ������� ���� = 0  � ������ 7

	} while (choise < 0 || choise > 7 || flag==1);

		
	printf("\n");

	system("pause");
}