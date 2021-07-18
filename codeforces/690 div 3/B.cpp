#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(){
int n;
cin>>n;
string s;
cin>>s;

if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
    cout<<"YES\n";
    return;
}
else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0'){
    cout<<"YES\n";
    return;
}
else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    cout<<"YES\n";
    return;
}
else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    cout<<"YES\n";
    return;
}

else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    cout<<"YES\n";
    return;
}
else cout<<"NO\n";
return;

 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}