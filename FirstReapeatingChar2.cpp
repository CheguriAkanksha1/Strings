#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int c[26] = {0};
        char first = '.';
        for(int i=0;i<str.size();i++){
            c[str[i]-'a']++;
            if(c[str[i]-'a'] == 2){
                first = str[i];
                break;
            }
        }
        cout<<first<<endl;
    }
    
    return 0;
}
