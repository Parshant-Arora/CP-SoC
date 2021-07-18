#include<iostream>
//#include<string>
//#include <stdlib.h>
//#include <stdio.h>
#include <bits/stdc++.h>
#include<iomanip>

using namespace std;

#define pi 3.1415926536




int main(){
int n;
cin>>n;
//string 
int r[n];
for (int i = 0; i < n; ++i)
{cin>>r[i];
	/* code */
}

sort(r,r+n);
double area=0;

for (int i = n-1; i>=0; i--)
{   
	if((i-n)%2!=0)area+=r[i]*r[i];
	else area-=r[i]*r[i];
}
cout<<fixed<<setprecision(6)<<area*3.1415926536<<"\n";
}