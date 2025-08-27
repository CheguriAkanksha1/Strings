#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int countmonotonous(string& s,int n){
    int c=1;
    long long total = 0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) c++;
        else{
            total = (total + 1LL*c*(c+1)/2)%M;
            c=1;
        }
    }
        total = (total +1LL *c*(c+1)/2) %M;
    
    return total;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<countmonotonous(s,n)<<endl;

    }
    return 0;
}
