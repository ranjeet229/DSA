

        //Linear search... using recursion 


// #include<iostream>
// using namespace std;

// bool LinarSerach(int *arr, int size, int key ){
//     //base case
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     bool remaing = LinarSerach(arr+1, size-1, key);
//     return remaing;
// }
// int main(){
//     int arr[]={3,4,1,5,6};
//     int size=5;
//     int key=4 ;

//     bool ans =LinarSerach(arr, size, key);
//     if(ans){
//         cout<<"key found "<<endl;
//     }else{
//         cout<<"key not found "<<endl;
//     }
// }

        //Binary search...using recursion 


// #include<iostream>
// using namespace std;

// bool binarySearch(int *arr, int s,int e, int key ){
//     //base case 

//     //element not found 
//     if(s>e){
//         return false;
//     }
//     int mid=s+(e-s)/2;
//     //element found 
//     if(arr[mid]==key){
//         return true;
//     }

//     if(arr[mid]<key){
//         return binarySearch(arr, mid+1, e, key);
//     }else{
//         return binarySearch(arr,s, mid-1, key);
//     }
// }

// int main(){
//     int arr[]={3,5,1,2,6};
//     int size= 5;
//     int key=16;
//     int s=0;
//     int e=size-1;
//     bool ans= binarySearch(arr,s,e,key);
//     if(ans){
//         cout<<"key found"<<endl;
//     }else{
//         cout<<"key not found"<<endl;
//     }
// }

