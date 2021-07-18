#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;





int main(){

string s;
cin>>s;
int k;
cin>>k; 
//int temp
int w[27];
w[0]=0;
for (int i = 1; i <=26 ; ++i)
{
	cin>>w[i];
}
int j=0,sum=0;
for (; s[j]!='\0'; ++j)
{	//cout<<"inc "<<(j+1) * w[s[j]-96]<<"\n";
	sum+=(j+1) * w[s[j]-96];
}
sort(w,w+27);
for (int i = 27-k; i < 27; ++i)
{   //cout<<"inc "<<w[26]<<"\n";
	sum+=(j+1) * w[26];
	j++;
}

cout<<sum<<"\n";
}