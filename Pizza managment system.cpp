#include<stdio.h>
#include<string.h>
#include<conio.h>
void display(int f);
int main()
{
  printf("\n\t\t\t**************************************************************");
  printf("\n\t\t\t-------------------------------------------------------------");
  printf("\n\t\t\t<<<<<<<<<<<<----------------------------------->>>>>>>>>>>>>>>");
  printf("\n\t\t\t<-------->   WELCOME TO   VINOD PIZZA SHOP       <---------->");
  printf("\n\t\t\t<<<<<<<<<<<<------PREPARED BY VINOD ------------>>>>>>>>>>>>>>>");
  printf("\n\t\t\t--------------------------------------------------------------");
  printf("\n\t\t\t**************************************************************\n");
char username[50],password[50];
int a;
printf("!!!!!!!!enter  the user name!!!!!!!!!!!!!:\n");
gets(username);
printf("!!!!!!!!enter the password!!!!!!!!!!!!!!:\n");
gets(password);
if(strcmp(username,"vinod")==0)
{
	if(strcmp(password,"vinod123")==0)
	{
		printf("\n \t \t \t @@@@@@@@\\t login succesful....@@@@@@@@\n\n");
		printf("\t \t@@@@@@@ Welocome to VINOD PIZZA SHOP @@@@@@");
		a=1;
	}
	else
	{
	printf("$$$$$$$$$$ \tpassword is incorrect$$$$$$$$$$$ \t:\n");
	printf("\t\t \t @@@@ Please enter the correct UserName and PassWord@@@@@@@@@");
	}
}
else
{
printf("username is incorrect:\n");
}
if(a==1)
{
	int n,total=0;
	printf("\n");
	printf("\n");
	x:
	printf("choose the option  \n 1:margherita\n2:cheese margherita \n3:Italian pizza \n4:peppy paneer\n5:Mexican Green Wave\n6:Deluxue veggie\n7:Cheese and corn \n8: Veggie Paradise\n9:Paneer N onion\n10:coke\n");
    scanf("%d",&n);
    switch(n)
    {
    
    case 1:
         int l;
    printf(" one margherita  =140\n");
    printf("how many margherita u want ");
    scanf("%d",&l);
    total =total+140*l;
    printf("do u want to continue press 1 else 0:\n");
    scanf("%d",&l);
    if(l==1)
    {
    	goto x;
	}
	else
	{
    break;
}
    case 2:
    	int m;
    printf(" one cheese margherita @ 99\n");
    printf("how many boxes u want ");
    scanf("%d",&m);
    total=total+99*m;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&m);
    if(m==1)
    {
    	goto x;
	}
	else
	{
    break;
    }
    case 3:
    	int n;
    printf(" one Italian pizaa @149\n");
    printf("how many italian pizza u want ");
    scanf("%d",&n);
    total=total+149*n;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&n);
    if(n==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 4:
    	int o;
    printf("one peppy paneer  @ 299\n");
    printf("how many peppy panner u want ");
    scanf("%d",&o);
     total=total+299*o;
      printf("do u want to continue press 1 else 0:");
    scanf("%d",&o);
    if(o==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 5:
    	int p;
    printf("one Mexican Green Wave@ 199\n");
    printf("how many Mexican Green wave u want ");
    scanf("%d",&p);
    total=total+199*p;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&p);
    if(p==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 6:
    	int q;
    printf("one Deluxe  Veggie@ 145\n");
    printf("how many Deluxue veggie u want ");
    scanf("%d",&q);
    total=total+145*q;
    printf("do u want to continue press 1 else 0:");
    scanf("%d",&q);
    if(q==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 7:
    	int r;
    printf("one Cheese and corn @ 160\n");
    printf("how many cheese and corn  u want ");
    scanf("%d",&r);
    total=total+160*r;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&r);
    if(r==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 8:
    	int s;
    printf("one Veggie Paradise @ 185\n");
    printf("how many Veggie Paradise u want ");
    scanf("%d",&s);
    total=total+185*s;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&s);
    if(s==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 9:
    	int t;
    printf("one Paneer N onion @ 100\n");
    printf("how many Paneer N onion u want ");
    scanf("%d",&t);
    total=total+100*t;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&t);
    if(t==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    case 10:
    	int x;
    printf(" one coke is @ 20\n");
    printf("how many cokes   u want ");
    scanf("%d",&x);
    total=total+20*x;
     printf("do u want to continue press 1 else 0:");
    scanf("%d",&x);
    if(x==1)
    {
    	goto x;
	}
	else
	{
    break;
	}
    	default:
			printf("invalid");
			break;
	}
	printf("\n");
	
      display(total);
}
}
void display(int total)
{
int gst;
gst=0.05*total;
total=total+gst;
printf("the total amount is %d",total );
printf("\n");
printf("\n\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
  printf("\n\t\t\t-------------------------------------------------------------");
  printf("\n\t\t\t<<<<<<<<<<<<----------------------------------->>>>>>>>>>>>>>>");
  printf("\n\t\t\t<----------------> THANK YOU! VISIT AGAIN <---------------->");
  printf("\n\t\t\t<<<<<<<<<<<<----------------------------------->>>>>>>>>>>>>>>");
  printf("\n\t\t\t-------------------------------------------------------------");
  printf("\n\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    }
