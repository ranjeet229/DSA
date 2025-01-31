
            //Problems on linkedList....>>>>>

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* convertArr2DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

//Ques 1: Find Middle of the linked list...>>>>

Node* MiddleLL(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

// ques 2: Find the Reverse of the linkedList....>>>> Tortoise and hare algorithm...

Node* ReverseLL(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while( temp!=NULL){
        Node* front= temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

//Ques 3: Detect a loop or cycle in a LinkedList.....>>>>>Tortoise and hare algorithm >>>

bool DetectCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow== fast){
            return true;
        }
    }
    return false;
}

//Ques 4: Starting Node of a loop or cycle in linked list.......>>>>>

Node* StartingNodeofCYCle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            slow=head;

            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

//Ques 5:
int main(){
    vector<int> arr={12, 5, 8 ,7};
    Node* head=convertArr2DLL(arr);
    // head=MiddleLL(head);
    // head=ReverseLL(head);
    // DetectCycle(head);
    // head=StartingNodeofCYCle(head);
    print(head);
}