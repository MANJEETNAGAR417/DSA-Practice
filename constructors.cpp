#include<bits/stdc++.h>
using namespace std;
class Student{
public:
        string name;
        int rno;
        float gpa;

        
        Student(){//default constructor

        }


        Student(int r,string s,float g){
            name=s;
            rno=r;
            gpa=g;
        }
        

        Student(string s,int r,float g){//This is a parameterised constructor
            name=s;
            rno=r;
            gpa=g;
        }

};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(int argc, char const *argv[])
{
    Student s1("Manjeet",13,6.3);
    Student s2(11,"Tarun",6.2);
    Student s3;
        s3.name="Raghav";
        s3.gpa=7.3;
        s3.rno=18;
    Student s4=s3;//deep copy
        s4.name="Piyush";
    Student s5(s1);//copy constructor-deep copy
        s5.name="Tannu";
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    return 0;
}
