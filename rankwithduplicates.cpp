#include <bits/stdc++.h>
using namespace std;

long long fact[21];

void computefact(){
    fact[0] = 1;
    for(int i=1;i<21;i++){
        fact[i] = fact[i-1]*i;
    }
}

long long countPermuattaions(vector<int>& freq,int rem){
    long long res = fact[rem];
    for(int f:freq){
        if(f>1) res = res/fact[f];
    }
    return res;
}
long long findRank(string & s){
    int n = s.size();
    vector<int> freq(26,0);

    for(char c: s) freq[c - 'a']++;
    long long rank = 1;

    for(int i=0;i<n;i++){
        int curr = s[i] - 'a';

        for(int ch = 0; ch<curr; ch++){
            if(freq[ch]>0){
                freq[ch]--;
                rank += countPermuattaions(freq,n-i-1);
                freq[ch]++;
            }
        }
        freq[curr]--;
        if(freq[curr]<0) return -1;
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
