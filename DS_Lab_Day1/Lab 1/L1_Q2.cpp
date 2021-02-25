#include<iostream>
#include<stdio.h>
using namespace std;
class Student{
  public:
    char name[100];
    int roll_no;
    char grade;

  // method to read details of student
    void read()
    {
        cout<<"Enter name of Student: ";
        cin>>name;
        fflush(stdin);
        cout<<"Enter RollNo of Student: ";
        cin>>roll_no;
        fflush(stdin);
        cout<<"Enter grade of Student: ";
        cin>>grade;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
        cout<<"Grade :"<<grade<<endl;

    }
};
// method to sort students based on grade
Student *sortStudents(Student *s,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].roll_no > s[j+1].roll_no)
            {
                Student temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the number of Students: "<<endl;
    cin>>n;
    fflush(stdin);
    Student *s = new Student[5];
    for(int i=0;i<n;i++){
        s[i].read();
        fflush(stdin);
    }

    s = sortStudents(s,n);
    cout<<"Student details after sorting according to grade:\n";
    for(int i =0;i<n;i++)
        s[i].display();

}
