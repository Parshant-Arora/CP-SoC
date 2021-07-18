#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<bits/stdc++.h>

using namespace std;



int main(){

 int n;
 cin>>n;
 int m;
 cin>>m;

 int* temp = new int[n];
 int count_1=0;
 for (int i = 0; i < n; ++i)
{
	cin>>temp[i];
    //if(temp==1)count_1++;
}

 sort(temp,temp+n);
 int a=0,b=n-1;
 while(a<=b){
 if(a==b)break;
 int k=(a+b)/2;
 if(temp[k]==-1){a=k+1;}
 else b=k-1;
}
 cout<<a<<"\n";

 int r,l;
 int count_minus_1=a+1;
 count_1=n-count_minus_1;
 while(m--){
  
   cin>>l>>r;
   int k=r-l+1;
   //if(k%2!=0){cout<<"0\n";continue;}
   if(k%2==0 && count_1>=k/2 && count_minus_1>=k/2){
   cout<<"1\n";continue;
  }
   else {cout<<"0\n";continue;}

}

}