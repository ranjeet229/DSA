// #include<bits/stdc++.h>
// using namespace std;

// int Countdigit(int n){

//     // int cnt=0;
//     // while(n>0){
//     //     // int lastdigit=n%10;
//     //     cnt+=1;
//     //     n/=10;
//     // }
//     // return cnt;

//     // another method to solve this question 
//     //weknow log10(n) approxmaitly 3.89 +1 =(int) 4.89 =4

//     int cnt=(int)(log10(n)+1);
//     return cnt;
// }

// int main(){

//     int n ;
//     cin>>n;

//    cout<<Countdigit(n)<<endl;
// }

            // Reverse the digit

// #include<bits/stdc++.h>
// using namespace std;

// int reverseDigit(int n){
//     int revNo=0;
//     while(n>0){
//         int ld=n%10;
//         revNo=(revNo*10)+ld;
//         n=n/10;
//     }
//     return revNo;
// }
// int main(){

//     int n;
//     cin>>n;

//     cout<<reverseDigit(n)<<endl;
// }

                                //Check Plaindrome 

// #include<bits/stdc++.h>
// using namespace std;

// bool isPlaindrome(int n){
//     int rev=0;
//     int original =n;
//     while(n>0){
//         int ld=n%10;
//         rev=(rev*10)+ld;
//         n/=10;
//     }
//     return rev==original;
// }

// int main(){
//     int n;
//     cin>>n;

//     if(isPlaindrome(n)){
//         cout<<"is a plaindrome no "<<endl;
//     }else{
//         cout<<"no"<<endl;
//     }
// }

                        //ArmStrong number....

#include<bits/stdc++.h>
using namespace std;
//armstrong number is the number that 371=3^3+7^3+1^3=371 is a armstrong number cube and summiation of each number 
bool isArmStrong(int n){
    int sum=0;
    int original =n;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n/=10;
    }
    return sum==original;
}

int main(){
    int n;
    cin>>n;

    if(isArmStrong(n)){
        cout<<"is a armstrong number "<<endl;
    }else{
        cout<<"is not a armstrong number "<<endl;
    }
}