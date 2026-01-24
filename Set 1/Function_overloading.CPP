#include <iostream.h>
int a,b,sum;
float a1,b1,sum1;
void add();
void add(int,int);
void add(double,double);
void main(){
add (5,15);
add ();
add(1.1,2.2);
}
void add(){
a=10;
b=20;
sum=a+b;
cout<<"\nThe result= "<<sum;
}
void add(int x,int y){
a=x;b=y;
sum=a+b;
cout<<"\nThe result="<<sum;
}
void add(double x,double y){
a1=x;
b1=y;
sum1=a1+b1;
cout<<"\nThe result="<<sum1;
}
