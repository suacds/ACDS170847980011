//3.Write a program using functions which accept two integers as an argument //and return its sum, sub, divide and multiply. Call all the functions from main( ) 

#include<iostream.h>
#include<conio.h>
int add(int a,int b)
{
	return(a+b);
}
int sub(int a,int b)
{
	return(a-b);
}
int div(int a,int b)
{
	return(a/b);
}
int mul(int a,int b)
{
	return(a*b);
}
int main()
{
	clrscr();
	int a,b;
	cout<<"Enter a and b"  ;
	cin>>a>>b;
	cout<<add(a,b);
	cout<<"\n";
	cout<<sub(a,b);
	cout<<"\n";
	cout<<div(a,b);
	cout<<"\n";
	cout<<mul(a,b);
	cout<<"\n";
	getch();
	return 0;
}


