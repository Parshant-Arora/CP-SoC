#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
//vector<int> v;
//cin>>v;
int n;
cin>>n;
int *a=new int [n+1];
int *b=new int [n+1];
for (int i = 1; i <= n; ++i)
{cin>>a[i];
b[a[i]]=i;
}
for (int i = 1; i <=n; ++i)
{
	cout<<b[i]<<" ";
}
}