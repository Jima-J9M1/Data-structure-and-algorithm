#include<iostream>

using namespace std;

void Bubble_sort(string name[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-(i+1);j++)
       {
         if(name[j]>name[j+1])
         {
           string temp=name[j];
           name[j]=name[j+1];
           name[j+1]=temp;
         }
       }
  }
}
void display(string name[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<name[i]<<" ";
  }
}
int main()
{
  string list[]={"Jima","Daniel","Dube","Tujuma"};
  int size=sizeof(list)/sizeof(list[0]);
  Bubble_sort(list,size);
  display(list,size);
}
