#include <iostream.h>
#include <conio.h>
#include <fstream.h>
void main(){
int i;
char name[80],course[80],result[80];
clrscr();
cout<<"FILE OPERATION :\n";
ofstream outfile("prithiv.txt");
cout<<"Enter Name,Course and Result of Three Students :\n";
for(i=1;i<=3;i++){
cin>>name>>course>>result;
outfile<<name<<" "<<course<<" "<<result<<"\n";
}
outfile.close();
ifstream infile("prithiv.txt");
cout<<"The Content of File is : \n";
for(i=1;i<=3;i++){
infile>>name;
infile>>course;
infile>>result;
cout<<name<< " "<<course<<" "<<result<<"\n";
}
infile.close();
getch();
}
