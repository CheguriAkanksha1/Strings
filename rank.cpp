#include <bits/stdc++.h>
using namespace std;

long long fact[21];

void computefact(){
   fact[0] = 1;
   for(int i=1;i<21;i++){
    fact[i] = fact[i-1]*i;
   }
}

long long findRank(string s){
    int n = s.size();
    long long rank = 1;
    for(int i=0;i<n;i++){
        int smaller = 0;
        for(int j= i+1;j<n;j++){
            if(s[j]<s[i]) smaller++;
        }
        rank += 1LL*smaller*fact[n-i-1];
    }
    return rank;
}

int main() {

    computefact();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        cout<<findRank(s)<<endl;      
    }       
    return 0;
}
