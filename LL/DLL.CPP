#include <iostream>
#include <vector>
using namespace std;

struct Node {
public:
    int data;
    Node* next;
    Node* back;

    
    Node(int data, Node* next = nullptr,Node* back=nullptr) {
        this->data = data;
        this->next = next;
        this->back=back; 
    }
};

Node* cnvrtarr2Dll(vector<int> &arr) {
    
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    
    Node* prev=head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
        temp=temp->next;
    }
    return head;
};
Node* removehead(Node* head){
    if(head==NULL || head->next==NULL) return nullptr;
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    prev->next=nullptr;
    delete temp;
    return head;
}
Node* removekel(Node* head,int k){
    if(head==nullptr)return head;
    if(head->next==nullptr && k==1) return nullptr;
    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        if(k==cnt){
            Node* prevnode=temp->back;
            Node* nextnode=temp->next;
            if(prevnode==nullptr)return removehead(head);
            if(nextnode==nullptr)return removeTail(head);
            prevnode->next=nextnode;
            nextnode->back=prevnode;
            delete temp;
            return head;
        }
        temp=temp->next;
    }
    return head;
}
void removeNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return ;
    }
    
    
    prev->next=front;
    front->back=prev;
    delete temp;
    

    
}
Node* insertbeforehead(Node* head,int val){
            Node* newHead=new Node(val,head,nullptr);
            head->back=newHead;
            return newHead;
}
Node* insertbeforetail(Node* head,int val){
    if(head==nullptr) return new Node(val);
    else if(head->next==nullptr){
        return insertbeforehead(head,val);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* prevtemp=temp->back;
    Node* newnode=new Node(val,temp,prevtemp);
    prevtemp->next=newnode;
    temp->back=newnode;
    return head;
}
Node* insertbeforeKthel(Node* head,int k,int val){
    if(k==1){return insertbeforehead(head,val);}
    Node* temp=head;
    int ct=0;
    while(temp){
        ct++;
        if(k==ct)break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
    
}



void printdlist(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main() {
    vector<int> arr = {12, 3, 2, 4, 5,6,8,13,25,29,30,18,67};
    Node* head = cnvrtarr2Dll(arr);
    printdlist(head);
    cout<<endl;

    head=insertbeforeKthel(head,5,16);
    printdlist(head);
    cout<<endl;

   

    return 0;
}