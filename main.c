#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <windows.h>

COORD coord = {0, 0};
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int i;
void box1();
void main_box();
void main_menu();
void login();


int main()
{
	system("cls");
	login();
	return 0;
}
void box1()
{

	gotoxy(55, 3);
	printf("%c", 201);
	for (int i = 1; i < 50; i++)
	{
		gotoxy(55 + i, 3);
		printf("%c", 205);
	}
	gotoxy(105, 3);
	printf("%c", 187);
	for (int i = 1; i < 5; i++)
	{
		gotoxy(55, 3 + i);
		printf("%c", 186);
	}
	for (int i = 1; i < 5; i++)
	{
		gotoxy(105, 3 + i);
		printf("%c", 186);
	}
}
void main_box()
{
	gotoxy(55, 8);
	printf("%c", 201);
	for (int i = 1; i < 50; i++)
	{
		gotoxy(55 + i, 8);
		printf("%c", 205);
	}
	gotoxy(105, 8);
	printf("%c", 187);
	gotoxy(55, 8);
	for (int i = 1; i < 25; i++)
	{
		gotoxy(55, 8 + i);
		printf("%c", 186);
	}
	gotoxy(55, 33);
	printf("%c", 200);
	for (int i = 1; i < 50; i++)
	{
		gotoxy(55 + i, 33);
		printf("%c", 205);
	}
	gotoxy(105, 33);
	printf("%c", 188);
	gotoxy(105, 33);
	for (int i = 1; i < 25; i++)
	{
		gotoxy(105, 33 - i);
		printf("%c", 186);
	}
}
void login()
{
	int a = 0, i = 0;
	char uname[10], c = ' ';
	char pword[10], code[10];
	char user[10] = "admin";
	char pass[10] = "admin";
	do
	{
		system("cls");
		main_box();
		box1();
		gotoxy(70, 5);
		printf("----------------------\n");
		gotoxy(70, 6);
		printf("\t      LOGIN\n ");
		gotoxy(70, 7);
		printf("----------------------\n\n\n\n\n");
		gotoxy(71, 14);
		printf("USERNAME=>");
		scanf("%s", &uname);
		gotoxy(71, 18);
		printf("PASSWORD=>");
		while (i < 10)
		{
			pword[i] = getch();
			c = pword[i];
			if (c == 13)
			{
				pword[i] = '\0';
				break;
			}
			else if (c == 8)
			{
				if (i > 0)
				{
					i--;
					printf("\b \b");
				}
			}
			else
			{
				printf("*");
				i++;
			}
		}
		i = 0;
		if (strcmp(uname, "admin") == 0 && strcmp(pword, "admin") == 0)
		{
			gotoxy(60, 23);
			printf("WELCOME TO MEDICAL STORE MANAGEMENT SYSTEM!\n\n\t\t\t\t\t\t\t\t     YOUR LOGIN IS SUCCESSFUL");
			gotoxy(65, 28);
			printf("Press any key to continue...");
			getch(); // holds the screen
			system("cls");
			main_menu();
			break;
		}
		else
		{
			system("cls");
			gotoxy(71, 17);
			printf("S");
			gotoxy(72, 17);
			printf("ORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;
			Sleep(2000);
		}
	} while (a <= 2);
	if (a > 2)
	{
		system("cls");
		gotoxy(59, 17);
		printf("S");
		gotoxy(60, 17);
		printf("orry you have entered the wrong username and password for four times!!!");
		Sleep(2000);
		exit(0);
	}
	system("cls");
}

void main_menu()
{
	char ch;
	system("cls");
	do
	{
		main_box();
		box1();
		gotoxy(65, 5);
		printf("--------------------------------\n");
		gotoxy(66, 6);
		printf("Medical Store Management System\n ");
		gotoxy(65, 7);
		printf("--------------------------------\n\n\n\n\n");
		gotoxy(70, 14);
		printf("*");
		gotoxy(71, 14);
		printf("Customer Info");
		gotoxy(70, 17);
		printf("*");
		gotoxy(71, 17);
		printf("Medicine Info");
		gotoxy(70, 20);
		printf("*");
		gotoxy(71, 20);
		printf("Bill Info");
		gotoxy(70, 23);
		printf("*");
		gotoxy(71, 23);
		printf("Exit");
		gotoxy(62, 27);
		printf("F");
		gotoxy(63, 27);
		printf("irst Character for further Menu:  ");

		ch = toupper(getche());
		switch (ch)
		{

		case 'C':
			break;
		case 'M':
			break;
		case 'B':
			break;
		case 'E':
			gotoxy(62, 29);
			printf("D");
			gotoxy(63, 29);
			printf("o you want to exit now? Y/N : ");
			Sleep(100);
			ch = (getche());
			ch = toupper(ch);
			if (ch == 'Y')
			{
				system("cls");
				gotoxy(71, 17);
				printf("P");
				gotoxy(72, 17);
				printf("lease wait.....");
				Sleep(2000);
				exit(0);
			}
			else
			{
				main_menu();
			}

		default:
			gotoxy(60, 29);
			printf("P");
			gotoxy(61, 29);
			printf("lese Enter right character ONLY (C,M,B,E).");
			Sleep(2000);
			system("cls");
		}
	} while (ch != 'E');
	getch();
}
