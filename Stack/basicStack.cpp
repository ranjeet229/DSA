
//Implement stack using array .......>>>>>

#include<bits/stdc++.h>
using namespace std;

//Implement stack using array .......>>>>>
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
void MyStack ::push(int x) {
    if(top>=1000){
        return ;
    }
    top=top+1;
    arr[top]=x;
}

int MyStack ::pop() {

    // Your Code
    if(top==-1){
        return -1;
    }

    return arr[top--];
}

//Implement Queue using array......>>>>>>

class MyQueue {
    private:
        int arr[100005];
        int front;
        int rear;
    public :
        MyQueue(){front=0;rear=0;}
        void push(int);
        int pop();
    };

    void MyQueue ::push(int x) {
        if(rear<100005){
            arr[rear++]=x;
        }
    }
    int MyQueue ::pop() {
        // Your Code
        if(rear==front){
            return -1;
        }
        return arr[front++];
    }

//Implement stack using queue....>>>>>>

class MyStack {
private:
    queue<int> q1 , q2;

public:
    MyStack() {}

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int topElement = q1.front();
        q1.pop();
        swap(q1, q2);
        return topElement;
    }

    int top() {
            while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int topElement = q1.front();
        q2.push(q1.front());
        q1.pop();
        swap(q1, q2);
        return topElement;
    }
    bool empty() {
        return q1.empty();
    }
};

//Implement Queue using stack...>>>>>>>

class MyQueue {
private:
   stack<int> s1, s2;

public:
    MyQueue() {};

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int frontElement = s2.top();
        s2.pop();
        return frontElement;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

//stack using linked list ....>>>>>>

struct Node{
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=NULL;
    }
};

class Stack{
    private:
    Node* top;

    public:
    Stack() {top = NULL; };

    void push(int x){
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
    }
    int pop(){
        if(top==nullptr){
            return -1;
        }
        Node* temp=top;
        int popvalue=temp->data;
        top=temp->next;
        delete temp;

        return popvalue;
    }
};

//Queue using linked list........>>>>

struct Node {
    int data;
    Node* next;
    
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Queue {
private:
    Node *front, *rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void push(int x) {
        Node* temp = new Node(x);
        if (!rear) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    int pop() {
        if (!front) {
            return -1;
        }
        int poppedValue = front->data;
        Node* temp = front;
        front = front->next;

        if (!front) {
            rear = nullptr;
        }

        delete temp;
        return poppedValue;
    }
};

// balanced parentheses....>>>>

bool isValid(string s){
    stack<char> st;

    for(char c : s){

        if(c=='('|| c=='{'|| c=='['){
            st.push(c);
        }else{
            if(st.empty()){
                return false;
            }

            char ch=st.top();
            if((c==')' && ch=='(') || (c=='}' && ch=='{') || (c==']' && ch=='[')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

//Implement Min Stack........>>>>>>

