
#include<iostream.h>
#include<conio.h>

class TaxValue
{

	float incomevalue,taxrate;

	public:

  	void show(float i, float t)
	{
		cout << "\nEnter Income of person :";
  		cin >>incomevalue;
  		cout << "\nEnter Tax on Income : \t";
  		cin >> taxrate;
		
		i=income;
		t=taxrate;	
	}

	void display()
	{
		cout<<"\n\t Income of Employee : "<<incomevalue;
		cout<<"\n\t Total Tax on income: "<<taxrate; 	
	}

	void calculate()
	{
		float Income_tax;
		Income_tax=((incomevalue*taxrate)/100);
		cout<<"\n\t Total Income Tax: "<<Income_tax<<"\n";
	}
	
};

void main() 
{
	
	TaxValue T;
	T.show(15, 60);
	T.display();
	T.calculate();
    	getch();
}



