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

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    temp=NULL; 
    return head;
}

Node* removeel(Node* head,int x){
    Node* temp=head;
    Node* prevtemp=NULL;
    if(head==NULL)return NULL;
    while(temp){
        if(temp->data==x){
            prevtemp->next=temp->next;
            delete temp;
            break;
        }
        prevtemp=temp;
        temp=temp->next;
    }
    return head;
}

Node* deletetail(Node* head){
    Node* temp=head; 
    if(temp==NULL || temp->next==NULL)return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
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
