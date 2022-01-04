#include<iostream>

using namespace std;

int Simple_search_name(string list[],int size,string key)
{
  int index=-1;
  for(int i=0;i<size;i++)
  {
    if(key==list[i])
        index=i;
  }
  return index;
}
int main()
{
  int index;
  string keyChar;
  cin>>keyChar;
  string list[]={"Jima","Daniel","Dube","Tujuma"};
  int size=sizeof(list)/sizeof(list[0]);
  index=Simple_search_name(list,size,keyChar);
  if(index==-1)
      cout<<"Not found";
  else
    {
      cout<<"Postion found at "<<index+1<<endl;
      cout<<"Value is "<<list[index];
    }
}
