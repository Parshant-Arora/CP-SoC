#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;





int main(){
int n,m;
cin>>n>>m;

std::vector<int> v;
int temp;
v.push_back(1);
for (int i = 0; i < m; ++i)
{
	cin>>temp;
	v.push_back(temp);

}
long long sum=0;
for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
{	//cout<<"i "<<*i<<"\n";
	if(i+1==v.end())break;
	sum+=(*(i+1)-*(i));	
	if(*i>*(i+1))sum+=n;
	//cout<<sum<<"\n";
}
cout<<sum<<"\n";

}