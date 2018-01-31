//2.Write a program in c++ using all flow control statements (if, else, for , while //and switch)
 

//IF LOOP
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n;
	cout<<"Enter value of n \n";
	cin>>n;
	if(n%2==0)
	{
		cout<<"::Even number::";
	}
	else
	{
		cout<<"::odd number::";
	}
	getch();
	return 0;
}

//WHILE LOOP
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,reverse=0;
	cout<<"\n Enter a number to reverse \n";
	cin>>n;
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	cout<<"\n reverse of entered number is= \n"<<reverse;
	getch();
	return 0;


}

//FOR LOOP
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,fact=1;
	cout<<"::Enter value of n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"::factorial is ::"<<"\n"<<fact;
	getch();
	return 0;
}

//SWITCH CASE
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,ch;
	cout<<"\n Enter number \n";
	cin>>n;
	do
	{
		cout<<"\n 1.inc \n";
		cout<<"\n 2.dec \n";
		cout<<"\n 3.exit \n";
		cout<<"\n Enter your choice \n";
		cin>>ch;
		switch(ch)
		{

			case 1:
			cout<<"\n increment is:: \n";
			n++;
			cout<<n;
			break;

			case 2:
			cout<<"\n decrement is:: \n";
			n--;
			cout<<n;
			break;

		}

	}while(ch<3);
	getch();
	return 0;
}




