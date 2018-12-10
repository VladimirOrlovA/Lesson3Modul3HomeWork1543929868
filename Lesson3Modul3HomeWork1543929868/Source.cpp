#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>


void Task1()
{
	printf("\n ---------------------------------------------------------------------\n Task1 \n\n");
	
	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
	scanf_s("%d", &b);

	if (a != b)
	{
		if (a > b) {printf("\n Введенные числа в порядке возрастания: %d %d", a,b);}

		else { printf("\n Введенные числа в порядке возрастания: %d %d", b, a); }

	}



}

void Task2()
{
	printf("\n ---------------------------------------------------------------------\n Task2 \n\n");

	int a, b, c, d, e;
	float average=0;

	printf(" Введите 5 оценок студента из табеля: \n");
	
	printf("\n 1 => ");
	scanf_s("%d", &a);

	printf(" 2 => ");
	scanf_s("%d", &b);

	printf(" 3 => ");
	scanf_s("%d", &c);

	printf(" 4 => ");
	scanf_s("%d", &d);

	printf(" 5 => ");
	scanf_s("%d", &e);

	average = (float)(a + b + c + d + e) / 5;

	if (average >= 4) { printf("\n Средний бал студента: %.1f \n Студент допущен к экзамену\n", average); }
	else { printf("\n Средний бал студента: %.1f \n Студент не допущен к экзамену", average); }
	
}


void Task3()
{
	printf("\n ---------------------------------------------------------------------\n Task3 \n\n");

	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
	scanf_s("%d", &b);

}

void Task4()
{
	printf("\n ---------------------------------------------------------------------\n Task4 \n\n");

	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
	scanf_s("%d", &b);

}

void Task5()
{
	printf("\n ---------------------------------------------------------------------\n Task5 \n\n");

	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
	scanf_s("%d", &b);

}

void Task6()
{
	printf("\n ---------------------------------------------------------------------\n Task6 \n\n");

	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
	scanf_s("%d", &b);

}

void Task7()
{
	printf("\n ---------------------------------------------------------------------\n Task7 \n\n");

	int a, b;

	printf(" Введите число a => ");
	scanf_s("%d", &a);

	printf(" Введите число b => ");
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