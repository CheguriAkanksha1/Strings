#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
   while(t--){
   string s;
   int k;
   cin>>s>>k;
   k = k%26;
   for(char &c:s){
    c = 'a' + (c -'a' +k)%26;
   }
   cout<<s<<endl;
}
    return 0;
}
