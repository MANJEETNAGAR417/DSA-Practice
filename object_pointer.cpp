#include<iostream>
using namespace std;
class Students{
public:
        string name;
        int rno;
        float marks;


        Students(){

        }


        Students(string s,int r,float m){
            name=s;
            rno=r;
            marks=m;

        }


};
int main(int argc, char const *argv[])
{
    // Students s1("Manjeet",13,56);
    // Students s2("Raj",14,67);

    // Students* p1=&s1;
    // cout<<(*p1).name<<endl;
    // (*p1).name="Ram";
    // cout<<(*p1).name;

    Students* s3=new Students("Ishaan",17,57);
    cout<<(*s3).name;



    return 0;
}

