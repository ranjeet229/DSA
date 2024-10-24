// #include<iostream>
// using namespace std;



// void update1(int n){
//     n++; // n update nahi hua b/c ye copy bana diya hai call by value hua hai 
// }

// void update2(int& n){
//     n++; // create a refrence variable so that we can update the value of n 
// }

// int main(){
      
//     /*
//     int i=5;
//     //create a ref variable
//     int &j=i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     */
//    int n=5;
//    cout<<"before "<<n<<endl;
//    update2(n);
//    cout<<"after "<<n<<endl;
// }


            //heap memory

#include<iostream>
using namespace std;

int main(){
    char ch='q';

    cout<<sizeof(ch)<<endl;
    char*c=&ch;
    cout<<sizeof(c)<<endl;

    return 0;
}
