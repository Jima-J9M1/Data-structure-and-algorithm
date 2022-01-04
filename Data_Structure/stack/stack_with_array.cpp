#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top=-1;

void push()
{
    int x;
    cout<<"enter the data"<<endl;
    cin>>x;
    if (top==N-1)
    cout<<"OverFlow"<<endl;
    else
    {
        top++;
        stack[top]=x;
        cout<<stack[top]<<endl;
    }
}
void pop()
{
    int item;
    if(top==-1)
    cout<<"Underflow"<<endl;
    else
    {
        item=stack[top];
        top--;
        cout<<item<<endl;
        cout<<stack[top]<<endl;
    }
}
void peek()
{
    int item;
    if(top==-1)
    cout<<"No file exist"<<endl;
    else
    cout<<stack[top]<<endl;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int choice;
    do{
    cout<<"1.push()\n2.pop()\n3.peek()\n4.display()\n0.to exit\n";
    cin>>choice;
 switch(choice)
 {
     case 1:push();
         break;
    case 2:pop();
         break;
    case 3:peek();
         break;
    case 4:display();
         break;
    default:
        cout<<"Invalid input"<<endl;
        break;
 }
    }while(choice!=0);
}
