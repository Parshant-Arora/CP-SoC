#include<bits/stdc++.h>
using namespace std;

#define f(i,x,n) for (int i=x;i<n;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define mt make_tuple

/* 
ifstream file;
ofstream outfile; 
#define cin file
#define cout outfile
*/


typedef long long int ll ;
typedef vector<int> vi ;

typedef vector<vector<int>> vvi ;
typedef pair<int,int> pii;

string s;

bool possible(int a,int b){
    if(b==a)return true;
    string p = s;
    int in = -1;
    for (int i = a; i<=b ; ++i)
    {
        if(p[i]!='?'){
            in = i;
            break;
        }
    }
    if(in==-1)return true;

    if(p[a]=='?'){
        if((in-a)%2==0)p[a]=p[in];
        if((in-a)%2!=0)p[a]='1' + '0' - p[in];
    }




    for (int i = a+1; i<=b ; ++i)
    {
        if(p[i]==p[i-1])return false;
        p[i] = '1' + '0' - p[i-1];
    }

    return true;
    


}


ll binary(int i,int &last){
    int a = i;
    if(possible(last,i))return i-last+1;
    while(possible(a,i) && a>last)a/=2;
    for (int k = a; k<=2*a+1 && k<=i ; ++k)
    {
        if(possible(k,i)){
            last = k;
            return i-k+1;
        }
    }

}


void solve(){

cin>>s;
ll sum = 1;
int last = 0;
bool aaya= false;
if(s[0]!='?')aaya=true;
for (int i = 1; i < s.size(); ++i)
{
    /*if(s[i]!='?')aaya=true;
    //sum = sum + binary(i);
    if(s[i]=='?'){
        sum+=i-last+1;
        //if(aaya)s[i]='1'+'0'-s[i-1];
    }
    
    else if(s[i]==s[i-1]){
        last = i;
        sum++;
    }
    else if(s[i]+s[i-1]=='1'+'0')sum+=i-last+1;
    else if(s[i-1]=='?')sum+=binary(i,last);
    //cout<<sum<<"\n";*/
    sum+=binary(i);
}
cout<<sum<<"\n";

}





int main(){
/*
file.open("input.txt");
outfile.open("output.txt");
*/
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
cin>>t;
while(t--){
    solve();

}

}