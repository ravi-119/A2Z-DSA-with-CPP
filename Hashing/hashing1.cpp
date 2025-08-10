#include <bits/stdc++.h>
using namespace std;
// brute force approach
f(char c, s){
    count = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == c)
        count++;
    }
    return count;
}



// optimized approach using hashing
int main(){
    string s;
    cin>>s;

    // Pre Computation 
    int hash[256] = {0};
    for(int i = 0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch 
        cout<<hash[c]<<endl;
    }
    return 0;
}




