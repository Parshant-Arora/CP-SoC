//#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
//vector<int> v;
//int k;
//v.push_back(k);
//sort(v.begin(), v.end());
int *a= new int[n];
for (int i = 0; i < n; ++i)
{cin>>a[i];
	/* code */
}
sort(a,a+n);
int sum=0;
for(int i=0;i<m && i<n;i++){
if(a[i]>0)break;
else sum+=a[i];
}
cout<<-sum<<"\n";
}