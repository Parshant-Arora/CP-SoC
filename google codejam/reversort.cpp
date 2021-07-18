#include<iostream>
using namespace std;

void swap_it(int a[],int i,int j,int n){
int temp;
//if(j==i)
for(int k=i;k<i+(j-i+1)/2;k++){temp=a[k];a[k]=a[j-k+i];a[j-k+i]=temp;}


}

int main(){
int t;
cin>>t;
int T=t;
while(t--){
int n;
cin>>n;
int* a=new int[n];
for (int i = 0; i < n; ++i){cin>>a[i];}
int cost=0;
for(int i=0;i<n;i++){
int mini=i;
for(int k=0;k<n-i;k++){if(a[i+k]<a[mini])mini=k+i;}	
//cout<<"i "<<i<<" j "<<mini<<endl;
swap_it(a,i,mini,n);
cost+=mini-i+1;
//cout<<"cost "<<cost<<" j "<<mini<<"\n";
}
cout<<"Case #"<<T-t<<": "<<cost-1<<"\n";
}
}