#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       string n;
       int p;
       cin>>n>>p;
       long long res = 0;
       for(char c:n){
        int digit = c -'0';
        res = (res*10+digit)%p;
       }
       cout<<res<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
