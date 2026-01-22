#include <iostream.h>
#include <conio.h>
#include <process.h>
#define MAXSIZE 10
class Queue{
int arr[MAXSIZE];
int front,rear;
public:
Queue(){
front=-1;
rear=-1;
}
void enqueue (int num)
{
if (rear==MAXSIZE-1){
cout<<"\nQueue is FULL";
}
else
{
rear++;
if(front==-1){
front=rear;
}
arr[rear]=num;
}
}
void delqueue(){
int item;
if(front>rear)
{
cout<<"\nQueue is EMPTY";
}
else
{
item=arr[front];
cout<<"\nItem deleted is "<<item;
front++;
}
}
void display(){
int i=front;
cout<<"\nQueue Elements \n";
if(i==-1){
i=0;
}
while(i<=rear){
cout<<" "<<arr[i];
i++;
}
}
};
int main()
{
Queue Q1;
int choice,item;
clrscr();
do{
cout<<"\n1.Insert item in Queue";
cout<<"\n2.Delete item from Queue";
cout<<"\n3.Display Queue Element ";
cout<<"\n4.Exit Program";
cout<<"\n Enter your choice ";
cin>>choice;
switch(choice){
case 1:
cout<<"\nEnter item to be inserted:";
cin>>item;
Q1.enqueue(item);
break;
case 2:
Q1.delqueue();
break;
case 3:
Q1.display();
break;
case 4:
cout<<"\nExiting Program...";
getch();
return 0;
}
}while (1);
return 0;
}
