#include<iostream>

using namespace std;

int simple_search(int list[],int value,int size)
{

  int index=-1;
  for(int i=0;i<size;i++)
  {
    if(list[i]==value)
    {
       index=i;
    }
  }

    return index;

}

int main()
{
  int value,size;
  int list[size];
  cin>>value;
  cin>>size;
  for(int i=0;i<size;i++)
      cin>>list[i];
  int index;
  index=simple_search(list,value,size);
if(index==-1)
    cout<<"Not found";
else
    {
      cout<<"The value is found at "<<index+1<<" postion"<<endl;
  cout<<"The value is "<<list[index];
}
}
