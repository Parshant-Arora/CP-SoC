#include<iostream>
using namespace std;

int main(){
int n,t;
cin>>n>>t;
string s;
cin>>s;
while(t--){//cout<<"at t "<<t<<"\n";
for(int i=0;i<n-1;i++){
	if(s[i]=='B' && s[i+1]=='G'){//cout<<"found i "<<i+1<<"\n";
		s[i]='G';
		s[i+1]='B';
		i++;
		//cout<<s<<endl;
		//break;
		}
		}

}
cout<<s;
}