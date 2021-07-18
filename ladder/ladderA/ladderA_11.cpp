#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
int*a=new int[n];
int f[3]={0,0,0};
for (int i = 0; i <n; ++i)
{
	cin>>a[i];
	f[i%3]+=a[i];
}
int max1=max(f[0],max(f[1],f[2]));
if(max1==f[0])cout<<"chest";
if(max1==f[1])cout<<"biceps";
if(max1==f[2])cout<<"back";
}