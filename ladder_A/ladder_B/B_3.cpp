#include<iostream>
using namespace std;

int main(){
int n,x;
cin>>n>>x;
int *a=new int [n];
int *b=new int [n];
int left,right;
cin>>a[0]>>b[0];
int temp;
temp=a[0];
a[0]=min(a[0],b[0]);
b[0]=temp+b[0]-a[0];
left=a[0];
right=b[0];

for (int i = 1; i < n; ++i)
{
cin>>a[i]>>b[i];
if(a[i]>b[i]){
temp=a[i];
a[i]=min(a[i],b[i]);
b[i]=temp+b[i]-a[i];
}
if(a[i]>left)left=a[i];
if(b[i]<right)right=b[i];
}

if(left>right)cout<<"-1";
else if(x<left)cout<<left-x;
else if(x>right)cout<<x-right;
else cout<<"0";
cout<<endl;
}


