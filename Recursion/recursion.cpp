// Finding Factorial

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     //bsae case
//     if(n==0){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);

//     cout<<ans<<endl;
// }

                // finding 2^N

// #include<iostream>
// using namespace std;

// int power(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }else{
//         return 2*power(n-1);
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans =power(n);
//     cout<<ans<<endl;
// }

            // print counting 

// #include<iostream>
// using namespace std;

// void print(int n){
//     //base case
//     if(n==0){
//         return ;
//     }
//     print(n-1); //1 2 3 4 5 output
//     cout<<n<<endl;
//     // print(n-1); // 5 4 3 2 1
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(n);
// }

            // Fibonnaci series 

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     int ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }



// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Fibonacci of " << n << " is " << fib(n) << endl;
//     return 0;
// }

                // count ways until you reach nth position 

// #include<iostream>
// using namespace std;

// int countways(int n){

//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return -1;
//     }
//     int ans=countways(n-1)+countways(n-2);
//     return ans;
// }
// int main(){

//}

            //saydigit 

#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;

    sayDigit(n, arr);

    cout<<arr[digit]<<" ";

}

int main(){

    string arr[11]={"zero","one","two","three","four","five","six","severn",
    "eight","nine","ten"};

    int n;
    cin>>n;

    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
}