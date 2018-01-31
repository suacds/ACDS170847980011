#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
	clrscr();
	char s1[10];
	int length;
	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING LENGTH \t \n";
	cout<<"\n------------------------------\n";
	cout<<"\n Enter string \n";
	cin>>s1;
	length=strlen(s1);
	cout<<"\n Entered string is ::"<<s1;
	cout<<"\n The length is ::"<<length;
	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING REVERSE \t \n";
	cout<<"\n------------------------------\n";
	char s2[10];
	cout<<"\n Enter string to reverse \n";
	cin>>s2;
	cout<<"\n Entered string is ::"<<s2;
	strrev(s2);
	cout<<"\n reverse of the string is::"<<s2;
	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING COMPARE \t \n";
	cout<<"\n------------------------------\n";
	char s3[10],s4[10];
	cout<<"\n Enter first string \n";
	cin>>s3;
	cout<<"\n First string is::"<<s3;
	cout<<"\n Enter second string \n";
	cin>>s4;
	cout<<"\n Second string is::"<<s4;
	if(strcmp(s3,s4)==0)
		cout<<"\n Entered string are equal \n";
	else
		cout<<"\n Entered string are not equal \n";


	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING CONCATENATION \t \n";
	cout<<"\n------------------------------\n";
	char str1[10],str2[10];
	cout<<"\n Enter first string \n";
	cin>>str1;
	cout<<"\n First string is ::"<<str1;
	cout<<"\n Enter second string \n";
	cin>>str2;
	cout<<"\n Second string is ::"<<str2;
	strcat(str1,str2);
	cout<<"\n CONCATENATION OF THE STRING IS ::"<<str1;
	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING UPPER CASE \t \n";
	cout<<"\n------------------------------\n";
	char str3[10];
	cout<<"\n Enter string \n";
	cin>>str3;
	strupr(str3);
	cout<<"\n upper case of the string is::"<<str3;
	cout<<"\n------------------------------\n";
	cout<<"\n \t STRING LOWERCASE \t \n";
	cout<<"\n------------------------------\n";
	char str4[10];
	cout<<"\n Enter the string to convert into lowercase \n";
	cin>>str4;
	strlwr(str4);
	cout<<"\n LOWERCASE OF THE ENTERED STRING IS ::"<<str4;
	getch();
	return 0;
}