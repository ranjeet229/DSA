#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//check given brackets are balanced or not ...

int main(){
    queue<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.pop();
    
    while(!st.empty()){
        cout<<st.front()<<endl;
        st.pop();
    }
}

