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

    head=removehead(head);
    printdlist(head);

    head=removeTail(head);
    printdlist(head);

    head=removekel(head,1);
    printdlist(head);

    removeNode(head->next->next);
    printdlist(head);

   

    return 0;
}