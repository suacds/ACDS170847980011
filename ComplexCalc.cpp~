
#include<iostream.h>
#include<conio.h>
struct complex
{
	int real,img;

} num1,num2;

void add(complex,complex);
void subtract(complex,complex);
void multiply(complex,complex);
void divide(complex,complex);

void main ()
{
	clrscr();
	int x;
	cout<<"\n Enter first complex number (Real & Imaginary)  : \t ";
	cin>>num1.real>>num1.img;
	cout<<"\n Enter second complex number (Real & Imaginary) : \t ";
	cin>>num2.real>>num2.img;

	cout<<"\n\t Select Operation \n\n\t 1. Addition \n\t 2. Substraction \n\t 3. Multiplication \n\t 4. Division \n\n \t\t";
	cin>>x;

	switch(x)
	{
		case 1: add(num1,num2);
		break;
		case 2: subtract(num1,num2);
		break;
		case 3: multiply(num1,num2);
		break;
		case 4: divide(num1,num2);
		break;
		default : cout<<"\n Wrong Choice :";
	}
	
	getch();
}

void add(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real+num2.real;
	num3.img=num1.img+num2.img;
	cout<<"\n\n Result : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}

void subtract(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real-num2.real;
	num3.img=num1.img-num2.img;
	cout<<"\n\n Result : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}
void multiply(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real*num2.real;
	num3.img=num1.img*num2.img;
	cout<<"\n\n Result : \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}
void divide(complex num1,complex num2)
{
	complex num3;

	num3.real=num1.real/num2.real;
	num3.img=num1.img/num2.img;
	cout<<"\n\n Result: \t\t  "<<num3.real<<" + "<<num3.img<<" i \n";
	
}


