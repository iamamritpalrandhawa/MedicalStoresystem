#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <dos.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
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
		printf("\n \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOGIN   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\  ");
		printf(" \n\n                        USERNAME=");
		scanf("%s", &uname);
		printf(" \n\n                        PASSWORD=");
		while (i < 10)
		{
			pword[i] = getch();
			c = pword[i];
			if (c == 13)
				break;
			else
				printf("*");
			i++;
		}
		pword[i] = '\0';
		// char code=pword;
		i = 0;
		// scanf("%s",&pword);
		if (strcmp(uname, "admin") == 0 && strcmp(pword, "admin") == 0)
		{
			printf("  \n\n\n       WELCOME TO CP MEDICAL STORE MANAGEMENT SYSTEM !!!! YOUR LOGIN IS SUCCESSFUL");
			printf("\n\n\n\t\t\tPress any key to continue...");
			getch(); // holds the screen
			break;
		}
		else
		{
			
			printf("\n\n            SORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;
            Sleep(2000);
	//		getch(); // holds the screen
		}
	} while (a <= 2);
	if (a > 2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();
	}
	system("cls");
	// box1();
	
	//main_menu();
}

void temp_menu(){
		printf("\t\t\t--------------------------------\t\t\t\t\t\t\t\t\t\t\t");
	gotoxy(25,1);
	printf("Medical Store Management System\n ");
	printf("\t\t\t--------------------------------\n\n");
	printf("\t\t\t\t *Customer Info\n\n");
	printf("\t\t\t\t *Medicine Info \n\n");
	printf("\t\t\t\t *Bill Info\n\n");
	printf("\t\t\t\t *Exit\n\n");
}
void main_menu()
{
	char ch;
	int i=1;
	while(i<=1){
	login();
	break;
	}
	printf("\t\t\t--------------------------------\t\t\t\t\t\t\t\t\t\t\t");
	gotoxy(25,1);
	printf("Medical Store Management System\n ");
	printf("\t\t\t--------------------------------\n\n");
	printf("\t\t\t\t *Customer Info\n\n");
	printf("\t\t\t\t *Medicine Info \n\n");
	printf("\t\t\t\t *Bill Info\n\n");
	printf("\t\t\t\t *Exit\n\n");
	do{
	printf("\n\t\t\tFirst Character for further Menu:  ");

		ch=toupper(getche());
		switch(ch)
		{
			
			case 'C':
				 break;
			case 'M':
				 break;
			case 'B':;
				 break;
			case 'E':
			printf("\n\n\t\t\tDo you want to exit now? Y/N :");
			Sleep(100);
			ch=(getche());
			ch=toupper(ch);
			if(ch=='Y')
			{
				
				system("cls");
				printf(" \t\t\tPlease wait.....");
				Sleep(2000);
				exit(0);
			}
			else
			{
				main_menu();
			}

			default:
			printf("\n\n\t\t\tPlese Enter right character ONLY (C,M,B,E).");
			Sleep(2000);
			system("cls");
			temp_menu();
	//		getch();
		}
	}while(ch!='E');
	getch();
}
int main()
{
	system("cls");
	 main_menu();
	//login();
	return 0;
}
