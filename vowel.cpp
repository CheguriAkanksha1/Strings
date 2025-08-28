#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {
    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++){
        cin>>words[i];
    }

    vector<int> valid(n,0) , pre(n,0);
    for(int i=0;i<n;i++){
        if(isVowel(words[i][0]) && isVowel(words[i].back()))
        valid[i] = 1;
    }

    pre[0] = valid[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + valid[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans = pre[r] - ( l>0 ? pre[l-1] : 0);
    
    cout<<ans<<endl;
    }
       
    return 0;
}
