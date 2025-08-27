#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        if(a.length() != b.length()){
            cout<<"False"<<"\n";
            continue;
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(a==b) cout<<"True"<<"\n";
        else cout<<"False"<<"\n";

    }
      
    return 0;
}
