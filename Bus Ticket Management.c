#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <conio.h>

struct node {
	char name[20];
	char phone[20];
	char busnumber[5];
	struct node* next;
}*head;
struct user {
	char username[20];
	char password[20];
};

int n = 2;
struct user u[100];

 void login();
 void exitapp();
 void SignUp ();
void Reserve();
void view();

 int main()
 {
     head=NULL;
     start();
 }
void login()
{
    char username[15];
    char password[12];


   printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                       ENTER USERNAME:-");
    scanf("%s",&username);

   printf(" \n                       ENTER PASSWORD:-");
    scanf("%s",&password);

    if(strcmp(username, username)==0){
        if(strcmp(password, password)==0){

       menu();


        }else
        {
    printf("\nwrong password");
         }
    }else
    {
    printf("\nUser doesn't exist");
    }


}
void start() {

	printf("1.Sign-in     2.Sign-up     3.About     4.Exit\n");

	int a=0;
	int c;
	scanf("%d",&c);
	switch (c)
	{
	case 1: login();
		break;
	case 2: SignUp();
		break;
	case 4: exitapp();
		break;

	default:
	    {
	        printf("\n\nInvalid Entry\n\n");
	        a=1;
	    }
	}
	if (a==1) start();

}

void exitapp()
 {

	printf("** THANK YOU **\n\n");
	exit(0);
}

void menu()
{
	 printf("\nWelcome.Login Success!\n");
        printf("\n=================================\n");
	printf("    BUS Ticket MANAGEMENT SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available bus");
	printf("\n------------------------");
	printf("\n3>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	int c;
	scanf("%d",&c);

	switch (c)
	{
	case 1: Reserve();
		break;
	case 2: view();
		break;
	case 4: exitapp();
		break;

	default:
		printf("\nInvalid Entry\n");
		printf("\n\n");
		menu();
		printf("\n\n");
	}
}


void SignUp()
{

	printf("Enter New Username and Password To Register\n\n");
	printf("Username: ");
	scanf("%s",&u[n].username);
	printf("\nPassword: ");
	scanf("%s",&u[n].password);
	n++;
	printf("\n\nSignUp Successfull!\n\n");
	start();
}
void Reserve() {
	char na[20],ph[20],gr[5],da[20];
	struct node *p,*no;
	p = head;
	no = (struct node*)malloc(sizeof(struct node));
	printf("Enter New Passenger's Data\n\n");

	printf("Name: ");
	scanf("%s",&na);
    no->name[20] = na;

	printf("\nPhone No: ");
	scanf("%s",&ph);
	no->phone[20] = ph;

	printf("\nBus Number: ");
	scanf("%s",&gr);
	no->busnumber[20] = gr;


	no->next = NULL;

	if (head == NULL) {head = no;}

	else {
		while (p->next != NULL)
        {p = p->next;}

        p->next = no;
	}
	printf("Record Saved\n\n");
	menu();
}
void view() {

	printf("1001\t\tHanif Paribahan \t Dhaka to Khulna\n");
	printf("1002\t\t Ena \t Dhaka to Mymensingh\n");
	printf("1003\t\t Star Line \t Dhaka to Cox's Bazar\n");
	menu();
}
