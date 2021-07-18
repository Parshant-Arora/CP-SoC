#include<iostream>/*Author Parshant Arora*/
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
	int n,k,count=0,m=0;
	cin>>n>>k;
	char*a=new char [n+1];
	char*pos=new char [n+1];
	for(int i=1;i<=n;i++){cin>>a[i];
                            if(a[i]=='*')
                                    {pos[m]=i;m++;}
                         }


	int i=pos[0];
	int count=1;
    int index=0;
    int j;
    while(1){
    j=i+k;
    for(int p=1;p<=k;p++;){
        if(p+index>m-1)break;
        if(pos[p+index]>j){
                if(p==1)
                index+=p;i=pos[index];count++;break;}
    }
    if(index==)
    }
