#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
int n;
cin>>n;
int d[n],a[n],b[n],c[n];
for (int i = 0; i < n; ++i)
{cin>>a[i]>>b[i]>>c[i]>>d[i];
	/* code */
}
bool t[n];
for (int i = 0; i < n; ++i)
{t[i]=true;
	/* code */
}

for (int i = 0; i < n; ++i)
{
for (int j = 0; j<n; ++j)
{
	if(b[i]<b[j] && c[i]<c[j] && a[i]<a[j]){t[i]=false;break;}
}
}



int min_d=0;
for (int i = 0; i < n; ++i)
{if(t[i]){min_d=i;break;}
	/* code */
}

for (int i = 0; i < n; ++i)
{
	//if(!t[i])continue;
	//cout<<"i "<<i<<" ";
	if(t[i] && d[i]<d[min_d])min_d=i;
	//cout<<"min d "<<min_d<<" ";
//if(t[i])cout<<d[i]<<" ";
}
cout<<min_d+1<<"\n";

}