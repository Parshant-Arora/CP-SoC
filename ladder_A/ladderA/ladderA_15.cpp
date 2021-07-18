#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
int*a=new int [n+1];
int*b=new int [n+1];
for (int i = 0; i < n; ++i)
{cin>>a[i];
 cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
//for (int i = 0; i < n; ++i)
//{cout<<a[i]<<" "<<b[i]<<"\n";
	/* code */
//}
int count=0;
int temp1=0,temp2=0;
for (int i = 0; i < n; ++i)
{if(i!=0 && a[i]==a[i-1])continue;
temp1=0;
temp2=0;
int pos;
for (int j = 0; a[i]>=b[j] && j<n; j++)
if(a[i]==b[j]){pos=j;temp1++;}
for(int j=0;temp1!=0 && a[j]<=b[pos] && j<n; j++)
{if(a[j]==b[pos]){temp2++;}}
//cout<<endl;
count+=temp1*temp2;
//cout<<"temp1 temp2"<<temp1<<" "<<temp2<<endl;
//if(max(temp1, temp2)!=0)cout<<"Temp for "<<a[i]<<" "<<max(temp1, temp2)<<"\n";
}
cout<<count<<"\n";
}