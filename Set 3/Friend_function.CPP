#include <iostream.h>
#include <conio.h>

class sample{
private:
int a,b;

public:
void getdata(){
    a=10;
    b=20;
}
friend void mean(sample s);
};

void mean(sample s){
    float m;
    m=(s.a+s.b)/2.0;
    cout<<"The Mean="<<m;
}

void main(){
    sample x;
    clrscr();
    cout<<"Friend Function: \n";
    x.getdata();
    mean(x);
    getch();
}