//1.Write a program in c++ using increment(Post and Pre) and decrement operators

#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int a=11,b;
	cout<<"\n The value of a is::\n"<<a;
	cout<<"\n----------------------------------------------\n";
	cout<<"\n PRE INCREMENT \n";
	b=++a;
	cout<<"\n The value of b is::\n"<<b;
	cout<<"\n---------------------------------------------\n";
	cout<<"\n POST INCREMENT \n";
	b=a++;
	cout<<"\n The value of b is::\n" <<b;
	cout<<"\n----------------------------------------------\n";
	cout<<"\n PRE DECREMENT \n";
	b=--a;
	cout<<"\n value of b is ::\n"<<b;
	cout<<"\n----------------------------------------------\n";
	cout<<"\n POST DECREMENT \n";
	b=a--;
	cout<<"\n The value of b is ::\n"<<b;
	cout<<"\n-----------------------------------------------\n"

	getch();
	return 0;


}

