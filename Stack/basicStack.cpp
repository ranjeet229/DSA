// #include <bits/stdc++.h>
// using namespace std;

// class Myqueue {
//     int* arr;
//     int f, r, capacity, sz;

// public:
//     Myqueue(int c) {
//         capacity = c;
//         sz = 0;
//         f = 0;
//         r = -1;
//         arr = new int[capacity];
//     }

//     void enqueue(int x) {
//         if (sz != capacity) {
//             r = (r + 1) % capacity;
//             arr[r] = x;
//             sz++;
//         } else {
//             cout << "Overflow" << endl;
//         }
//     }

//     void dequeue() {
//         if (sz != 0) {
//             f = (f + 1) % capacity;
//             sz--;
//         } else {
//             cout << "Underflow" << endl;
//         }
//     }

//     int front() {
//         return (sz != 0) ? arr[f] : -1;
//     }

//     int size() {
//         return sz;
//     }

//     bool empty() {
//         return sz == 0;
//     }

//     ~Myqueue() {
//         delete[] arr;
//     }
// };

// int main() {
//     Myqueue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);

//     q.enqueue(60);
//     cout << "Front element: " << q.front() << endl;

//     q.dequeue();
//     q.dequeue();
//     cout << "Front element after two dequeues: " << q.front() << endl;

//     cout << "Queue size: " << q.size() << endl;

//     cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

//     return 0;
// }

// make stack using linked list.....>>>

// #include <iostream>

// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class Stack {
// private:
//     Node* top;

// public:
//     Stack() {
//         top = nullptr;
//     }

//     void push(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode;
//         cout << value << " pushed onto stack\n";
//     }

//     void pop() {
//         if (top == nullptr) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         Node* temp = top;
//         top = top->next; // Move top to the next node
//         cout << temp->data << " popped from stack\n";
//         delete temp; // Free memory
//     }

//     int peek() {
//         if (top == nullptr) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return top->data;
//     }

//     bool isEmpty() {
//         return top == nullptr;
//     }

//     void display() {
//         if (top == nullptr) {
//             cout << "Stack is empty\n";
//             return;
//         }
//         Node* temp = top;
//         cout << "Stack elements: ";
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     ~Stack() {
//         while (!isEmpty()) {
//             pop();
//         }
//     }
// };

// int main() {
//     Stack stack;

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);
//     stack.display();

//     cout << "Top element is: " << stack.peek() << endl;

//     stack.pop();
//     stack.display();

//     return 0;
// }

//Tree.....>>>>>

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
}


int main(){

}