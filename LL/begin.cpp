#include <iostream>
#include <vector>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    
    Node(int data, Node* next = nullptr) {
        this->data = data;
        this->next = next; 
    }
};

Node* cnvrtarr2ll(vector<int> &arr) {
    
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* deleteHead(Node* head) {
    if (head == nullptr) return nullptr;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeel(Node* head, int x) {
    if (head == nullptr) return nullptr;

   
    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp; 
        return head;
    }

    Node* temp = head;
    Node* prevtemp = nullptr;
    while (temp) {
        if (temp->data == x) {
            prevtemp->next = temp->next;
            delete temp;
            break;
        }
        prevtemp = temp;
        temp = temp->next;
    }
    return head;
}

Node* deletetail(Node* head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* insertHead(Node* head, int x) {
    
    Node* temp = new Node(x, head);
    return temp;
}

Node* insertTail(Node* head, int x){
    if(head==NULL)return head;
    Node* temp=head;
    Node* temp1=new Node(x);
    while(temp->next!=NULL){
        
        temp=temp->next;

    }
    temp->next=temp1;
    return temp;
}

Node* insertatk(Node* head,int x,int k){
    if(head==NULL){
        if(k==1)return new Node(x);
        else return head;
    }
    if(k==1){
        Node* temp=new Node(x,head);
        return temp;
    }
    Node* temp=head;
    int ct=0;
    while(temp){
        ct++;
        if(ct==k-1){
            temp->next=new Node(x,temp->next);
            return head;
        }
        temp=temp->next;
    }

    return head;

    
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> arr = {12, 3, 2, 4, 5};
    Node* head = cnvrtarr2ll(arr);

    cout << "Original List:" << endl;
    printList(head);

    cout << "\nInserting 100 at Head:" << endl;
    head = insertHead(head, 100);
    printList(head);

    cout << "\nRemoving element 2:" << endl;
    head = removeel(head, 2);
    printList(head);

    cout<<"\n Inserting 10 at the tail:"<<endl;
    insertTail(head,10);
    printList(head);

    cout<<"\nInserting 11 at 3rd position:"<<endl;
    insertatk(head,11,3);
    printList(head);

    return 0;
}
