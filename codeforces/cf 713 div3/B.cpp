#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;




int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
char** a = new char*[n];
for(int i = 0; i < n; ++i)
    a[i] = new char[n];
int i1[2],j1[2],count=0;
for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{
		cin>>a[i][j];
		if(a[i][j]=='*'){i1[count]=i;j1[count]=j;count++;}
	}
}
if(i1[0]==i1[1]){
if(i1[0]!=0){a[i1[0]-1][j1[0]]='*';a[i1[1]-1][j1[1]]='*';}
else {a[i1[0]+1][j1[0]]='*';a[i1[1]+1][j1[1]]='*';}
}
else if(j1[0]==j1[1]){
if(j1[0]!=0){a[i1[0]][j1[0]-1]='*';a[i1[1]][j1[1]-1]='*';}
else {a[i1[0]][j1[0]+1]='*';a[i1[1]][j1[1]+1]='*';}
}

else{
a[i1[0]][j1[1]]='*';
a[i1[1]][j1[0]]='*';
}

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{
		cout<<a[i][j];
	}
cout<<"\n";
}


}

}