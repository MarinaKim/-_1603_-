#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>
#include<string.h>
#include "Header.h"

using namespace std;

enum city { Almaty, Astana };
#define MAX50 50
#define MAX12 12

struct address
{
	city city;
	char region[MAX50];
	char streetName[MAX50];
	int house;
	int app;
	int zip;
};
struct student
{
	char fName[MAX50];
	char lName[MAX50];
	char dateOfBirth[MAX12];
	int age;
	struct address address;
};

void sl(int age)
{
	if (age < 18)
		printf("���������");
}

void PrintStudentInfo(struct student*student)//��������� �� ���������
{
	printf("���������� � ��������: \n");
	sl(student->age);
	printf("\n");
}
//
//void PrintStudentInfo(struct student*student)//��������� �� ���������
//{
//	printf("���������� � ��������: \n");
//	printf("--> %s %s \n", student->fName, student->lName);// ����������� ���-�� �� ��������
//	printf("\n\n---------------------------------------------------------\n\n");
//}

void PrintStudentInfo(struct student student)//���������� ��� ���������, �������� ����� �����
{

	printf("���������� � ��������: \n");
	printf("--> %s %s \n", student.fName, student.lName);
	printf("\n\n---------------------------------------------------------\n\n");

}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;

	do
	{
		printf("������� ����� �������: ");
		scanf("%d", &n);
		cin.get();
		switch (n) {
			//������� ��������
		case 1: {
			struct student students[2];//������� ������ ��������

			students[1].address.city = Almaty;
			strcpy(students[1].address.region, "alm obl");
			strcpy(students[1].address.streetName, "Tole bi 12");

			int count = 0;
			int index;
			printf("������� ��� ��������\n");
			while (count < 2
				&& gets_s(students[count].fName) != NULL
				&& gets_s(students[0].fName) != '\0') ///������� �� ������ ���� ������ ������
			{
				printf("������� ������� ��������\n");
				gets_s(students[count].lName);

				printf("������� �������\n");
				scanf("%d", &students[count].age);

				while (getchar() != '\n')
					continue;

				count++;

				if (count < 2)
					printf("������� ��� ��������\n");
			}

			printf("\n\n---------------------------------------------------------\n\n");
			if (count > 0)
			{
				printf("������ �����������: \n");
				for (int i = 0;i < 2;i++)
				{
					printf("--> #%d. %s %s \n", i, students[i].fName, students[i].lName);
				}
				printf("\n\n---------------------------------------------------------\n\n");
				printf("�����: %d ����������� \n", count);
			}

		} break;

			// ������������� ��������:
		case 2: {

			struct student Vova //student-polzovatelskii tip dannyx

			{
				"Vova",
					"Ten",
					"13.05.1983",
					34,

					Almaty
			};

			struct student ivan;
			ivan.age = 23;// ��������� � ���������

			printf("Student #1 %c %s - %d\n", Vova.fName[0], Vova.lName, Vova.age);

		} break;

		case 3: {
			struct football players[4];
			players[0].age = 25 + rand() % 15;;
			strcpy(players[0].sname, "Jocker");
			players[0].amplua = vratar;
			players[0].games = 1 + rand() % 4;
			players[0].balls = 1 + rand() % 9;

			players[1].age = 25 + rand() % 15;
			strcpy(players[1].sname, "Borat");
			players[1].amplua = forvard;
			players[1].games = 1 + rand() % 4;
			players[1].balls = 1 + rand() % 9;

			players[2].age = 25 + rand() % 15;
			strcpy(players[2].sname, "Ronaldo");
			players[2].amplua = forvard;
			players[2].games = 1 + rand() % 4;
			players[2].balls = 1 + rand() % 9;

			players[3].age = 25 + rand() % 15;
			strcpy(players[3].sname, "Arshav");
			players[3].amplua = forvard;
			players[3].games = 1 + rand() % 4;
			players[3].balls = 1 + rand() % 9;

			betterForvard(players, 4);

		}break;
		case 4: {
			struct study people[3];
			for (int i = 0;i < 3;i++)
			{
				gets_s(people[i].sName);
				people[i].gruppa = rand() % 2;
				people[i].fiz = 2+rand() % 8;
				people[i].hist = 2+rand() % 8;
				people[i].inf = 2+rand() % 8;
			}

			for (int i = 0;i < 3;i++)
			{
				people[i]=
			}




		}break;

		}
	} while (n > 0);
}