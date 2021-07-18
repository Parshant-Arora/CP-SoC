#include<iostream>/*Author Parshant Arora*/
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
	int n,k,count=0;
	cin>>n>>k;
	char*a=new char [n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int i=1;
	for(;i<=n;i++){if(a[i]=='*'){/*cout<<"first at "<<i<<"\n"*/;break;}}
	count++;bool found=false;
	int j=i+k;
	while(1){
		int index=0,temp_i=i;
		for(;index<=k;index++){if(a[j-index]=='*'){/*cout<<"found next at "<<j-index<<"\n";*/
	                            //j+=k;

	                            i=j-index;
	                            //cout<<"new i "<<i<<" \n";
	                            if(i==temp_i){found=true;break;}
	                            j+=k;
	                            if(j>n)j=n;
	                            count++;
	                        break;}

	                   }

	if(found){/*cout<<"end found at "<<i<<endl;*/cout<<count<<"\n";break;}

}

}
}
