
//Ques 1: Longest Substring without reapeating characters....>>>>

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongSubstring(string s){
    int hash[256];
    fill(begin(hash), end(hash),-1);

    int n=s.size();
    int l=0,r=0,maxLen=0;

    while(r<n){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }
        int len=r-l+1;
        maxLen=max(len, maxLen);
        hash[s[r]]=r;
        r++;
    }
    return maxLen;
}

int main(){
    string s;
    cin>>s;
    cout<<lengthOfLongSubstring(s);
}