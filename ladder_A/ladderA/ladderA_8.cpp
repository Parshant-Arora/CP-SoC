#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
int n;
cin>>n;
int*a=new int [n+1];
int min,max;
cin>>a[1];
min=1;
max=1;
for (int i = 2; i <= n ; ++i)
{cin>>a[i];
 if(a[i]>a[max])max=i;
 if(a[i]<=a[min])min=i;	
 
}
if(a[max]==a[min]){cout<<0;return 0;}
if(max<min)cout<<max-1+n-min;
else if(max>min)cout<<max-1+n-min-1;

}