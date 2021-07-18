#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;





int main(){
int d,n;

cin>>d>>n;
int m[n];
int sum=0;
for (int i = 0; i < n; ++i)
{
	cin>>m[i];
sum+=m[i];
}
sum-=m[n-1];
cout<<(n-1)*d-sum<<"\n";



}