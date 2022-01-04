// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct node{
    int data;
    node*link;
};
struct node*top=NULL;
void push(int item)
{
    node*newNode;
    newNode=new node;
    newNode->data=item;
    newNode->link=top;
    top=newNode;
}
void peek()
{
    if(top==NULL)
    cout<<"UnderFlow"<<endl;
    else
    {
        cout<<top->data<<endl;
    }
}
void pop()
{
    node*temp;
    temp=top;
    if(top=NULL)
    cout<<"Underflow"<<endl;
    else
    {
        cout<<temp->data<<endl;
        top=temp->link;
        delete temp;
    }
}
void display()
{
    node*temp;
    temp=top;
    if(top==NULL)
    cout<<"No file exist"<<endl;
    else
    {
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
}
int main() {
    int choice;
    do{
    cout<<"1.push()\n2.pop()\n3.peek()\n4.display()\n0.to exit\n";
    cin>>choice;
 switch(choice)
 {
     case 1:
          { int number;
          cout<<"Enter the number to be inserted"<<endl;
          cin>>number;
         push(number);
         break;
          }
    case 2:pop();
         break;
    case 3:peek();
         break;
    case 4:display();
         break;
 }
    }while(choice!=0);
}
