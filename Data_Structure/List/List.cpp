#include<iostream>

using namespace std;

class Alist : public list{
private:
  int maxSize;
  int listSize;
  int curr;
  int listArray;

public:
  Alist(int size=DefaultlistSize)
  {
    maxSize=size;
    listSize=curr=0;
    listArray= new int [maxSize];
  }
  ~Alist(){
    delete [] listArray;
  }
  void clear () {
    delete [] listArray;
    listSize = curr=0;
    listArray = new int [maxSize];
  }
  void setStart() {
    curr=0;
  }
  void setEnd() {curr = listSize;}
  void prev() {
    if(curr!=0 curr--;)
  }
  void next() { if(curr<=listSize)
    curr++;
     }
  int length() {return listSize;}
  bool setPos(int pos) {
    if((pos>=0)&& (pos <= listSize))
       curr=pos;
    return (pos>=0) && (pos <= listSize);
  }
  // Get current value
  bool getValue() {
    if(listSize ==0) return false;
    else
    int it = listArray[curr];
    return true;
  }
  //Insert at current position

  bool insert (int item) {
    if(listSize == maxSize) return false;
    for(int i=listSize;i>curr;i--)
        listArray[i] = listArray[i-1];

        listArray[curr] = item;
        listSize++;
        return true;
  }
  //Append element to end of the listSize
  bool append(int item){
    if(listArray == maxSize) return false;
    listArray[listSize++] = item;
    return true;
  }
  //Remove and return curr element

  bool remove() {
    if(length()==0) return false;
    it = listArray[curr];
    for(int i= curr; i<listSize-1;i++)
    listArray[i] = listArray[i+1];
    listSize--;
    return true;
  }
}
