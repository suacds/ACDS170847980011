
#include<iostream.h>
#include<fstream.h>
void main()
{
	
	
  	ofstream file;
  	file.open ("out.txt");
  	file << "\n\n The desire to learn should be stronger than the desire to live\n";
  	file.close();
	cout<<"\n\n Output file operation is done  \n\n ";

	
	getch();
}


