// #include <bits/stdc++.h>
// using namespace std;

// class HeapNode {
// public:
//     int data;
//     HeapNode* left;
//     HeapNode* right;
//     HeapNode* parent;

//     HeapNode(int x) {
//         data = x;
//         left = right = parent = nullptr;
//     }
// };

// class Heap {
//     HeapNode* root;
//     queue<HeapNode*> que; 

// public:
//     Heap() {
//         root = nullptr;
//     }

//     void insert(int x) {
//         HeapNode* temp = new HeapNode(x);

//         if (!root) {
//             root = temp;
//             que.push(temp);
//             return;
//         }

//         HeapNode* front = que.front();

//         if (!front->left) {
//             front->left = temp;
//             temp->parent = front;
//         } else if (!front->right) {
//             front->right = temp;
//             temp->parent = front;
//             que.pop();
//         }

//         que.push(temp);
//     }

//     void inorderTraversal(HeapNode* node) {
//         if (node) {
//             inorderTraversal(node->left);
//             cout << node->data << " ";
//             inorderTraversal(node->right);
//         }
//     }

//     void display() {
//         inorderTraversal(root);
//         cout << endl;
//     }
// };

// int main() {
//     Heap h;
//     h.insert(10);
//     h.insert(20);
//     h.insert(30);
//     h.insert(40);
//     h.insert(50);

//     h.display(); // Should print the elements in a sorted order

//     return 0;
// }
