// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return sum(n-1)+n;
//     }

// }

// int main(){
//     int n ;
//     cin>>n;
//     cout<<sum(5)<<endl;
// }

//sum of n number using for loops

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int fun(int n){
//     if(n>100)
//     return n-10;
//     return fun(fun(n+11));
// }

// int power(int m , int n){
//     if(n==0){
//         return 1;
//     }
//     return power(m,n-1)*m;
// }
// //taylor series

// double e(int x, int n){
//     static double p=1, f=1;
//     double r;
//     if(n==0){
//         return 1;
//     }
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
// }
// int main(){
//     int x,n;
//     cin>>x>>n;
//    // cout<<sum(n)<<endl;
//     //cout<<power(m,n)<<endl;
//     cout<<e(x,n)<<endl;
// }

            //fibonacci

// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans=fib(n-2)+fib(n-1);
//     return ans;
// }
// //ncr

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return fact(n-1)*n;
// }
// int nCr(int n, int r){
//     int num, den;
//     num=fact(n);
//     den=fact(r)*fact(n-r);
//     return num/den;
// }
// int NCR(int n , int r){
//     if(n==r || r==0){
//         return 1;
//     }
//     return NCR(n-1, r-1)+NCR(n-1,r);
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     //cout<<fib(n)<<endl;
//     cout<<NCR(n,r)<<endl;

// }

// insertion and deletion in an array...

//Merge sort...

// #include<bits/stdc++.h>
// using namespace std;

// class Array{
//     private:
//         int *A;
//         int size;
//         int length;
//     public:
//     Array(int size, int length, bool sorted=false){
//         this->size=size;
//         this->length=length;

//         A=new int[size];

//         if(sorted){
//             cout<<"Enter ints in sorted manner";
//             for(int i=0;i<length;i++){
//                 cout<<"Enter Elements "<<i<<flush;
//                 cin>>A[i];
//             }
//         }
//         else {
//             for(int i=0;i<length;i++){
//                 int val;
//                 val=rand()%100;
//             }
//         }
//     }

// }

//bubble sort
// #include<bits/stdc++.h>
// using namespace std;

// void bubbleSort(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i= 0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubbleSort(arr, n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//finding min and max in array

// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(int arr[],int n ){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// int smallestElement(int arr[], int n){
//     int smallest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     return smallest;
// }
// //finding missing in an array...
// int MissingElement(int arr[], int n){
//     int sum=n*(n+1)/2;
//     int s2=0;
//     for(int i=0;i<n;i++){
//         s2+=arr[i];
//     }
//     return sum-s2;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // cout<< largestElement(arr, n)<<endl;
//     // cout<< smallestElement(arr,n)<<endl;
//     cout<<MissingElement(arr,n)<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n, int m){
//     return n+m;
// }
// int multiply(int n, int m){
//     return n*m;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     cout<<"Sum of "<< n <<" and "<<m <<" is: "<<sum(n,m)<<endl;
//     cout<<"Multiplication of " <<n<<" and " <<m <<" is: "<< multiply(n, m)<<endl;

// }

        //Pass by value ...

// #include<bits/stdc++.h>
// using namespace std;

// void MOdify(int x){
//     x+=5;
//     cout<<"Inside function : "<<x<<endl;
// }
// void Modify_ref(int &x){ //pass by references...
//     x+=5;
//     cout<<"Inside function : "<<x<<endl;
// }
// int main(){
//     int num=10;
//     //MOdify(num);
//     Modify_ref(num);
//     //cout<<"outside the function : "<<num<<endl;
//     cout<<"Outside the function: "<<num<<endl;
// }

//pass by reference:- function receives the actual arguments instead of copy its value. its directly modify the actual value.

//swaping using third variable..

// #include<bits/stdc++.h>
// using namespace std;

// int swapElement(int &n , int &m){ // pass by reference
//     int temp;
//     temp=n;
//     n=m;
//     m=temp;

// }

// int main(){
//     int n, m;
//     cin>>n>>m;
//     cout<<"Before swapping: "<<n<<" "<<m<<endl;
//     swapElement(n,m);
//     cout<<"After swapping : "<< n <<" "<< m<<endl;
// }

/* Pass by pointer: address of actual arguments of function receive a pointer to a original variable using pointer function can modify the actual data stored at that 
memory address*/

// #include<bits/stdc++.h>
// using namespace std;

// int swapElement(int *n , int *m){ // pass by pointer
//     int temp;
//     temp=*n;
//     *n=*m;
//     *m=temp;

// }

// int main(){
//     int n, m;
//     cin>>n>>m;
//     cout<<"Before swapping: "<<n<<" "<<m<<endl;
//     swapElement(&n,&m);
//     cout<<"After swapping : "<< n <<" "<< m<<endl;
// }


//without using third variable...
// #include<bits/stdc++.h>
// using namespace std;

// int swapElement(int &n , int &m){ // pass by reference
//     n=n+m;
//     m=n-m;
//     n=n-m;

// }

// int main(){
//     int n, m;
//     cin>>n>>m;
//     cout<<"Before swapping: "<<n<<" "<<m<<endl;
//     swapElement(n,m);
//     cout<<"After swapping : "<< n <<" "<< m<<endl;
// }

// Inline function is a function that is extended in place at the point of call rather than being called as function it is used to reduce the overhead of the function call
//eg- square

// #include<bits/stdc++.h>
// using namespace std;

// inline int square(int n){
//     return n*n;
// }
// void greet(string name = "guest", int age=20){
//     cout<<"Hello, "<<name<<"you are : "<<age<<" old "<<endl;
// }
// int main(){
//     greet();
//     greet("LPU");
//     greet("LPU",20);
//     return 0;
// }

                                        //Function overloading : same function with different parameters

// #include<bits/stdc++.h>
// using namespace std;
// int add(int a, int b){
//     return a+b;
// }
// int maxi(int a , int b){
//     return (a>b)?a :b;
// }
// int maxiThree(int a, int b, int c){
//     return (a>b)?(a>c?a:c):(b>c?b:c);
// }
// int add(int a, int b , int c){
//     return a+b+c;
// }
// int add(float a, float b){
//     return a+b;
// }
// int main(){

//     // cout<<add(2,3)<<endl;
//     // cout<<add(4,5,3)<<endl;
//     // cout<<add(2.10f, 3.10f)<<endl;
//     cout<<maxi(4,5)<<endl;
//     cout<<maxiThree(7,5,6)<<endl;

// }
/*operator overloading :-  it allows us to redefined the way operator work for user-defined data type like class it provides the ability to specify
how operator behaves when used as object */

/*operator overloading doesnot change the precendenc / associativity
imp:
1. overloading is typically implemented using member function or*/

//question: complex number.....
// #include<bits/stdc++.h>
// using namespace std;

// class complex{
//     private:
//         float real, img;
//     public:
//         complex(float r=0, float i =0):real(r), img(i){}
//         complex operator+(const complex& obj){
//             complex temp;
//             temp.real=real+obj.real;
//             temp.img=img+obj.img;
//             return temp;
//         }
// };

//TOWER OF HANOI...
#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char source, char target, char aux){
    if(n==1){
        cout<<"Move Disk 1 from "<<source<<" to "<<target<<endl;
        return;
    }
    TOH(n-1, source, aux, target);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<target<<endl;
    TOH(n-1,aux, target, source);
}

int main(){
    int n;
    cin>>n;
    TOH(n, 'A','C','B');

}
