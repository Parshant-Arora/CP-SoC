#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;




int main(){
int n;
cin>>n;
int k=0;
while((n-4*k)%7!=0 && n-4*k>=0){k++;}
if((n-4*k)%7!=0 || n-4*k<0){cout<<"-1\n";return 0;}

int j= (n-4*k)/7;
//cout<<"k,j "<<k<<" "<<j<<"\n";
//while(4*j<=n){k-=4; j+=7;}
for (int i = 0; i < k; ++i)
	{
		cout<<"4";
	}	

for (int i = 0; i < j; ++i)
{
	cout<<"7";
}
cout<<"\n";
}