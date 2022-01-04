#include<iostream>

using namespace std;

void Insertion_sort(string list[],int size)
{
  string value;
  int hole;
  for(int i=1;i<size;i++)
  {
    value=list[i];
    hole=i;
    while(hole>0&&value<list[hole-1])
      {
        list[hole]=list[hole-1];
        hole--;
      }
      list[hole]=value;
  }
}
void PrintDisplay(string list[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<list[i]<<" ";
  }
}

int main()
{
  int size;
  string list[]={"Daniel","Jima","Tujuma","Dube"};
  size=sizeof(list)/sizeof(list[0]);
  Insertion_sort(list,size);
  PrintDisplay(list,size);

}
