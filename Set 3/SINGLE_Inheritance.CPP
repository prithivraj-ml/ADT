#include <iostream.h>
#include <conio.h>
class B{
public:
int a;
public:
void geta(){
a=10;
}
};
class D:public B{
    private:
    int b,sum;
    public:
    void getb(){
        b=20;
    }
    void adddata(){
        sum=a+b;
        cout<<"The Result ="<<sum;
    }
};

void main(){
    D obj1;
    cout<<"Single Inheritance : \n";
    obj1.geta();
    obj1.getb();
    obj1.adddata();
    getch();
}