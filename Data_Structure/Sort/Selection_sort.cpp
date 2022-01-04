#include<iostream>

using namespace std;

void Insertion_sort(string list[],int size)
{
  int min_index;
  string temp;
  for(int i=0;i<size-1;i++) {
    min_index=i;
    for(int j=i+1;j<size;j++)
    {
      if(list[j]<list[min_index])
         min_index=j;
    }
    if(min_index!=i)
    {
      temp=list[i];
      list[i]=list[min_index];
      list[min_index]=temp;
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
  Insertion_sort(list,size);
  display(list,size);
}
