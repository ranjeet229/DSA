
//Ques 1: Longest Substring without reapeating characters....>>>>

// #include<bits/stdc++.h>
// using namespace std;

// int lengthOfLongSubstring(string s){
//     int hash[256];
//     fill(begin(hash), end(hash),-1);

//     int n=s.size();
//     int l=0,r=0,maxLen=0;

//     while(r<n){
//         if(hash[s[r]]!=-1){
//             if(hash[s[r]]>=l){
//                 l=hash[s[r]]+1;
//             }
//         }
//         int len=r-l+1;
//         maxLen=max(len, maxLen);
//         hash[s[r]]=r;
//         r++;
//     }
//     return maxLen;
// }

// int main(){
//     string s;
//     cin>>s;
//     cout<<lengthOfLongSubstring(s);
// }

//Ques 2: Max consecutive ones lll ...............>>>>>

#include<bits/stdc++.h>
using namespace std;

// using brute force tc:- O(n^2) sc:- O(1).....>>>>>
int longestOnes_BruteForce(int arr[], int k, int n){
    int maxlen=0;
    for(int i=0;i<n;i++){
        int zero=0;

        for(int j=i;j<n;j++){
            if(arr[j]==0){
                zero++;
            }
            if(zero<=k){
                int len=j-i+1;
                maxlen=max(maxlen, len);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}

//Optimal soln:- using sliding windown two pointer l and r
//tc:-nearly O(n) and sc:- O(1);

int longestOnes_optimalSol(int arr[], int k , int n){
    int l=0, r=0, maxlen=0, zero=0;
    while(r<n){
        if(arr[r]==0){
            zero++;
        }
        while(zero>k){
            if(arr[l]==0){
                zero--;
            }
            l++;
        }
            int len=r-l+1;
            maxlen=max(maxlen, len);
            r++;
    }
    return maxlen;
}

// Ques 3: Fruits into basket............>>>>>>
int totalFruits(int arr[], int n){
    int l=0, r=0, maxlen=0,k=2;
    unordered_map<int, int> mpp;
    while(r<n){
        mpp[arr[r]]++;
        while(mpp.size() > k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0){
                mpp.erase(mpp[l]);
            }
            l++;
        }
        int len=r-l+1;
        maxlen=max(maxlen, len);
        r++;
    }
    return maxlen;
}

//ques 4:- Longest Reapeating character replacement...>>>

int characterReplacement(string s, int k){
    int l=0, r=0, maxlen=0, maxf=0;
    unordered_map<char, int> mpp;

    while(r<s.length()){
        mpp[s[r]]++;
        maxf=max(maxf, mpp[s[r]]);

        while((r-l+1)-maxf >k){
            mpp[s[l]]--;
            l++;
        }
        maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}
int main() {
    string s;
    cin >> s; 

    int k;
    cin >> k; 

    cout << characterReplacement(s, k) << endl; // Call function with correct parameters
    return 0;
}
