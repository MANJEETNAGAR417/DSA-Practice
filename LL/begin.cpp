#include<iostream>
#include<vector>
using namespace std;
struct Node{
public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            next=nullptr;
        }        
};
Node* cnvrtarr2ll(vector<int> &arr){
            Node* head=new Node(arr[0]);
            Node* mover=head;
            if(arr.empty()) return NULL;
            for(int i=1;i<arr.size();i++){
                Node* temp=new Node(arr[i]);
                mover->next=temp;
                mover=temp;
            }
            cout<<endl;
            return head;
        }
int main(){
        
        vector<int> arr={12,3,2,4,5};
        Node* head=cnvrtarr2ll(arr);
        cout << "----------------------" << endl;
        cout << "  LINKED LIST START   " << endl;
        cout << "  Head Value: " << head->data << endl;
        cout << "----------------------" << endl;
        
        Node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

}
