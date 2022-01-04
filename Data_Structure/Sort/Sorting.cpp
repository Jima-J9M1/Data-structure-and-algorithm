#include<iostream>

using namespace std;

void swap_name(string name[],int size)
{
  for(int i=0;i<size-1;i++)
  {
    for(int j=i+1;j<size;j++)
       {
         if(name[i]>name[j])
         {
           string temp=name[i];
           name[i]=name[j];
           name[j]=temp;
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
  swap_name(list,size);
  display(list,size);
}
