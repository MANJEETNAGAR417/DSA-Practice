#include<iostream>
using namespace std;
class Vector{
public:
        int size;
        int capacity;
        int* arr;

        Vector(){
            size=0;
            capacity=1;
            arr=new int[1];
        }

        void add(int a){
            if(capacity>size){
                arr[size++]=a;
            }

            else{
                capacity*=2;
                int* arr2=new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i]=arr[i];
                }
                arr=arr2;
                arr[size++]=a;
            }
        }

        void del(int b){
            if(size==0){
                cout<<"Already empty";

            }
            else{
                size--;
            }
        }

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

        void get(int idx){
            if(size<0 || idx>=size){
                cout<<"INVALID INDEX"<<endl;
            }
        }

};

int main(int argc, char const *argv[])
{
    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(9);
    v1.print();
    v1.add(8);
    v1.print();
    v1.add(7);
    v1.print();
    v1.add(8);
    v1.print();
    

    return 0;
}
