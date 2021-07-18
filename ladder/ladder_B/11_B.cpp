#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;





int main(){
long long n;
cin>>n;
//string 
//vector<int> v;
//int temp;

long long fst,scd;
cin>>fst;
long long sum=2*n-1 +fst;
  
for (int i = 1; i < n; ++i)
{   //cout<<"i "<<i<<endl;
	cin>>scd;
	//cout<<"scd "<<scd<<endl;
	sum+=abs(scd-fst);
	//cout<<"added "<<abs(scd-fst)<<" ";
	fst=scd;
	//cout<<"sum "<<sum<<endl;
}

cout<<sum<<"\n";




}