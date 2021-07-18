#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
using namespace std;




int main(){
long long int n,m;
cin>>n>>m;

std::vector<int> dor;

long long int sum=0,temp;

dor.push_back(0);
for (long long int i = 1; i < n; ++i)
{
	
	cin>>temp;
	sum+=temp;
	dor.push_back(sum);	
	
	
}



cin>>temp; //useless input
for (long long int i = 0; i < m; ++i)
{
	cin>>temp;
	long long int ind=n-1;
	if(temp>dor[ind]){
		cout<<n<<" "<<temp-dor[ind]<<"\n";
		continue;
	}
	//cout<<" sum "<<dor[ind]<<" "<<temp<<"\n";
	while(dor[ind]>=temp){ind/=2;}
    //cout<<"input "<<temp<<" index "<<ind<<"\n";
	for (long long int j = ind; j <2*ind+1 ; ++j)
	{
		if(dor[j]<temp && dor[j+1]>=temp){cout<<j+1<<" "<<temp-dor[j]<<"\n";break;}
	}
	//cout<<" ind "<<ind;
}


}