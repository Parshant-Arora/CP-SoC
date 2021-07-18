#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int first_digit(int n){
 int dig=0;
 while(!(n%10==0 && n/10==0)){
	//count++;
	dig=n;
	n/=10;
}
return dig;
}

int power(int a,int b){
	int s=1;
	for (int i = 0; i < b; ++i)
	{
		s*=a;
	}
	return s;
}


int solve(int dig, int count, int n){
  cout<<dig<<" "<<count<<" "<<n<<"\n";
 /*std::vector< > v;
 int temp;
 for (int i = 0; i < n; ++i)
 {
 	cin>>temp;
 	v.push_back(temp);
 }*/
 if(count==0 || n==0){
 	return 0;
 }
 if(dig>1){
 return power(2,count)-1;
 }

 if(dig==1){
 	//cout<<"dig 1 of "<<n<<"\n";
   return power(2,count-1)-1+1+solve(first_digit(n-dig*power(10,count-1)),count-1,n-dig*power(10,count-1));
 }

 if(dig==0){
 	return solve(first_digit(n-dig*power(10,count-1)),count-1,n-dig*power(10,count-1));
 }
 



 

 

}




int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t=1;
//cin>>t;
int n,m;
cin>>n;
m=n;
if(n==1){cout<<"1\n";
		 return 0;
		}
int count=0,dig;
while(!(n%10==0 && n/10==0)){
	count++;
	dig=n;
	n/=10;
}
//cout<<dig<<" "<<count<<"\n";
while(t--){
	cout<<solve(dig,count,m)<<"\n";

}

}