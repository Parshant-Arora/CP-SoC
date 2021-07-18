#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;





int main(){
int t;
cin>>t;


int n;


while(t--){

cin>>n;
string a,b;
cin>>a;
cin>>b;
int* tag=new int [n];
tag[0]=-1;
int a_1=0,b_1=0;
bool no=false;
int sum_a=0,l=1,sum_b=0;
for (int i = 0; a[i]!='\0'; ++i)
{	if(a[i]=='0')sum_a++;
	if(a[i]=='1')sum_a--;
	if(b[i]=='0')sum_b++;
	if(b[i]=='1')sum_b--;
	if(sum_a==0 && sum_b==0){tag[l]=i;l++;}
	if(sum_a==0 && sum_b!=0){cout<<"NO\n";no=true;break;}
	if(sum_a!=0 && sum_b==0){cout<<"NO\n";no=true;break;}
	if(a[i]=='1')a_1++;
	if(b[i]=='1')b_1++;
}
if(a_1!=b_1 && !no){cout<<"NO\n";continue;}
if(no)continue;
for (int i = 0; i < l; ++i)
{//cout<<tag[i]<<" ";
	/* code */
}

tag[l]=n;
int i=0;
for (int j = 0; j < n; ++j)
{
	if(j>tag[i+1])i++;
	if(a[j]!=b[j]){
		if(a[tag[i+1]]==b[tag[i+1]]){no=true;break;}

	}
	if(a[j]==b[j]){
		if(a[tag[i+1]]!=b[tag[i+1]]){no=true;break;}

	}		
}
if(no){cout<<"NO\n";continue;}
cout<<"YES\n";


}

}



