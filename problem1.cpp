#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        unordered_set<char> chars(a.begin(),a.end());
        string res;
        for(char c : b ){
            if(!chars.count(c)){
                res.push_back(c);
            }
        }
        cout<<res<<endl;


    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
