#include <iostream.h>
#include <conio.h>
class cadd{
private:
int a,b,sum;
public:
void getdata(){
a=10;
b=20;
}
void adddata(){
sum=a+b;
cout<<"The result="<<sum;
}
};
void main(){
cadd obj1;
clrscr;
cout<<"Implementation of Class and Object:\n";
obj1.getdata();
obj1.adddata();
getch();
}
