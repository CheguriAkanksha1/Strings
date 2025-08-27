#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int c[26] = {0};
        char first  = '.';
        for(int i=0;i<str.length();i++){
          c[str[i]-'a']++;
        }
        for(int i=0;i<str.length();i++){
            if(c[str[i]-'a']>1){
                first = str[i];
                break;
            }
        }
        cout<<first<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;

}
