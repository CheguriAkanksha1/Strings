#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--)  {
        string s;
        getline(cin,s);
        int w=0,v=0,c=0;
    for(char ch:s){
        if(isalpha(ch)){
            if(isVowel(ch)) v++;
            else c++;
        }
    }
    stringstream ss(s);
    string word;
    while(ss>>word){
        w++;
    }
    cout<<w<<" "<<v<<" "<<c<<endl;
    }
    return 0;
}
