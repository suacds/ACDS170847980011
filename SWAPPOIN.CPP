#include<iostream.h>
#include<conio.h>
void coc(int *a,int *b)
{
	 int *temp,i;
	 temp=&i;
	 *temp=*a;
	 *a=*b;
	 *b=*temp;
}

void main()
{
clrscr();
int i=5,j=10;
cout<<"Before swapping I= "<<i<<" J= "<<j<<endl;
coc(&i,&j);
cout<<"After swapping I= "<<i<<" J= "<<j<<endl;
getch();
}