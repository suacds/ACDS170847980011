#include<iostream.h>
#include<conio.h>

struct student
{
	int rollno;
	char name[50];
	float m1,m2,m3;
};
int main()
{
	clrscr();
	student s[10];
	for(int i=0;i<10;i++)
	{
		cout<<"\n Enter roll no \n";
		cin>>s[i].rollno;

		cout<<"\n Enter name \n";
		cin>>s[i].name;

		cout<<"\n Enter marks of the three subjects \n";
		cin>>s[i].m1>>s[i].m2>>s[i].m3;
	}

	cout<<"\n Student failed more than one subject \n";
	for(i=0;i<10;i++)
	{
		if(s[i].m1<50 && s[i].m2<50 || (s[i].m2<50 && s[i].m3<50) || (s[i].m1<50 && s[i].m3 < 50))
		cout<<s[i].rollno <<"\t" <<s[i].name <<"\n";
	}
       //	cout<<"\n "
	getch();
	return 0;
}