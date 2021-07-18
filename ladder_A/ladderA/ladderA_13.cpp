#include<iostream>
using namespace std;

int main(){
int a[5][5];
int i,j;
bool found=false;
for(i=0;i<5;i++){
	for (j=0; j < 5; j++)
	{cin>>a[i][j];
		if(a[i][j]!=0){found=true;break;}
		/* code */
	}
if(found)break;
}
i++;
j++;
//cout<<i<<" "<<j<<"\n";
cout<<abs(i-3)+abs(j-3);
}