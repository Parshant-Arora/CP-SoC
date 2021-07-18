#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;





int main(){
int n;
ifstream infile("input.txt");
ofstream outfile("output.txt");
int k;

infile>>n>>k;
int h[n+1];
h[0]=-1;


for (int i = 1; i <= n; ++i)
{
	infile>>h[i];
    
}
int t[n+1];
for (int i = 0; i <=n; ++i)
{
	t[i]=h[i];
}

sort(t,t+n+1);
outfile<<t[n-k+1]<<"\n";
bool p[k];
for (int i = 0; i <= n; ++i)
{
	p[i]=false;
}
for (int i = 1; i <=n; ++i)
{
	for (int j = n-k+1; j<=n; j++)
	{
		if(h[i]==t[j] && p[j]==false){p[j]=true;outfile<<i<<" ";break;}
	}
}


outfile<<"\n";
}