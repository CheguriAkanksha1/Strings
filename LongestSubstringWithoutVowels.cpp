#include <bits/stdc++.h>
#include<string>
using namespace std;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
 int longest_substring(const string& s){
    int curlen =0, maxlen=0;
    for(char c:s){
        if(!isVowel(c)){
            curlen ++;
            maxlen = max(maxlen,curlen);
        }
        else{
            curlen=0;
        }
    }
    return maxlen;
 }


int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<longest_substring(s)<<endl;
    }
    return 0;
}
