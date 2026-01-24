#include <iostream.h>
#include <conio.h>
class cadd{
private:
int a,b,sum;
public:
cadd(){
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
cout<<"Implementation of Constructor:\n";
obj1.adddata();
getch();
}
