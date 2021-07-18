#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int*a=new int [n+2];
cin>>a[1]>>a[2];
a[n+1]=a[1];
int d=abs(a[2]-a[1]);
int i=1;
for(int j=3;j<n+1;j++){
cin>>a[j];
//cout<<"taken input "<<a[j]<<" erlier d "<<d<<endl;
if(abs(a[j]-a[j-1])<d) {d=abs(a[j]-a[j-1]);
	//cout<<"our d "<<d<<"\n";
	i=j-1;}

}
if(abs(a[n+1]-a[n])<d) {i=n;}
cout<<i;
if(i==n)cout<<" "<<1<<"\n";
else cout<<" "<<i+1<<"\n";
}
/*6
744 359 230 586 944 442*/