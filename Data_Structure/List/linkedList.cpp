#include<iostream>

using namespace std;

struct node {
  int roll;
  string name;
  string dep;
  int marks;
  node*next;
}
node *head=NULL;

bool check(int roll)
{
  if(head==NULL)
     return false;
      node* p;
      p =head;
    while(node!==NULL)
    {
      if(p->roll==roll)
          return true;
          p=p->next;
    }
    return false;

}
void inset_Record(int roll,string name;string dept,int marks)
{
  if(check(roll)
{
  cout<<"It's already exist"<<endl;
  return;
  }
  node* stud=head;
  stud->roll=roll;
  stud->name=name;
  stud->dept=dept;
  stud->marks=marks;
  stud->next=NULL;
  Insert_Record(stud);
}

void insert_B(node*s)
{
  if(head==NULL)
     head=s;
  else
   {
     node*temp=head;
     head=s;
     s->next=temp;
   }
}

int main()
{
    head = NULL;
    string Name, Course;
    int Roll, Marks;

    // Menu-driven program
    while (true) {
        cout << "\n\t\tWelcome to Student Record "
                "Management System\n\n\tPress\n\t1 to "
                "create a new Record\n\t2 to delete a "
                "student record\n\t3 to Search a Student "
                "Record\n\t4 to view all students "
                "record\n\t5 to Exit\n";
        cout << "\nEnter your Choice\n";
        int Choice;

        // Enter Choice
        cin >> Choice;
        if (Choice == 1) {
            cout << "Enter Name of Student\n";
            cin >> Name;
            cout << "Enter Roll Number of Student\n";
            cin >> Roll;
            cout << "Enter Course of Student \n";
            cin >> Course;
            cout << "Enter Total Marks of Student\n";
            cin >> Marks;
            Insert_Record(Roll, Name, Course, Marks);
        }
      }
