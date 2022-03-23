#include<iostream>
using namespace std;

class student{
private:
     int reg_no;
     char name[20];
     int marks;
public:
     void get();
     void display();
};

void student::get()
{
cout<<"enter reg no,name of the students and marks:";
cin>>reg_no>>name>>marks;
}
 void student::disp()
{
cout<<"reg_no:"<<reg_no<<end1;
cout<<"name:"<<name<<end1;
cout<<"marks:"<<marks<<end1;
}
int main()
{
student obj;
obj.get();
obj.disp();
}
return 0;
}

