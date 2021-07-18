#include<bits/stdc++.h>
using namespace std;

bool possible(int a,int b,int x,int y,char p[][15],int n){
    if(a<0 ||a>=n || b<0 || b>=n)return false;
    if(a==x && b==y)return true;
    if(p[a][b]=='W')return false;
    else return possible(a-1,b,x,y,p,n) || possible(a+1,b,x,y,p,n) || possible(a,b-1,x,y,p,n) || possible(a,b+1,x,y,p,n);

}






int main(){
int n;
cin>>n;
char p[15][15];
int a,b,x,y;



for (int i = 0; i<n ; ++i)
{
    for (int j = 0; j<n ; ++j)
    {
    cin>>p[i][j];
    }
}
cin>>a>>b>>x>>y;

if(possible(a,b,x,y,p,n))cout<<"ESCAPES\n";
else cout<<"DIES\n";

}