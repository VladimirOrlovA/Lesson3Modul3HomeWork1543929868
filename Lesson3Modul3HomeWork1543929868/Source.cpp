#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>


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
			if (a != 0)	{result = a / b; printf("\n ��������� %d", result);	}
			else { printf("\n ������� �� ����!"); }
		} break;

		}

}

void Task5()
{
	printf("\n ---------------------------------------------------------------------\n Task5 \n\n");

	int a, b;

	printf(" ������� ����� a => ");
	scanf_s("%d", &a);

	printf(" ������� ����� b => ");
	scanf_s("%d", &b);

}

void Task6()
{
	printf("\n ---------------------------------------------------------------------\n Task6 \n\n");

	int a, b;

	printf(" ������� ����� a => ");
	scanf_s("%d", &a);

	printf(" ������� ����� b => ");
	scanf_s("%d", &b);

}

void Task7()
{
	printf("\n ---------------------------------------------------------------------\n Task7 \n\n");

	int a, b;

	printf(" ������� ����� a => ");
	scanf_s("%d", &a);

	printf(" ������� ����� b => ");
	scanf_s("%d", &b);

}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int choise, flag;
	
start:
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

	if (flag == 1)
		goto start;

	printf("\n");

	system("pause");
}