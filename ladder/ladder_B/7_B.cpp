#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
int n;
cin>>n;
//string 
int a[n+1];
for (int i = 1; i <= n; ++i)
{
	cin>>a[i];
}
bool present[n+1];
for (int i = 1; i <=n; ++i)
{
present[i]=false;
}
int count=0;

for (int i = 1; i <= n; ++i)
{
	if(a[i]>n)continue;
	if(!present[a[i]]){
			present[a[i]]=true;
			count++;}

}
cout<<n-count<<"\n";



}