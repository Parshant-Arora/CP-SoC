#include<iostream>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>&v, vector<string> name){
 string s;
 cin>>s;
 int ind;
 if(s[0]=='S'){ind=0;}
 if(s[0]=='M'){ind=1;}
 if(s[0]=='L'){ind=2;}
 if(s[0]=='X'){
 	if(s[1]=='L')ind=3;
 	else ind=4;
 }
 //cout<<"its value "<<name[ind]<<"\n";
 
 if(v[ind]!=0){
 	cout<<name[ind]<<"\n";
 	v[ind]--;
 	return;
 }
 else {
 int diff=1;
 while(1){
 	if(ind-diff<0){
 		for (int i = ind+diff; i < 5; ++i)
 		{
 			if(v[i]!=0){v[i]--;
 				cout<<name[i]<<"\n";
 				return;
 			  }
 		}
 	}
 	
 	if(ind+diff>4){
 		for (int i = ind-diff; i>=0; i--)
 		{
 			if(v[i]!=0){v[i]--;
 				cout<<name[i]<<"\n";
 				return;
 			  }
 		}
 	}



 	if(v[ind-diff]!=0 && v[ind+diff]==0){
 		v[ind-diff]--;
 		cout<<name[ind-diff]<<"\n";
 		return;
 	}

 	if(v[ind+diff]!=0){
 		v[ind+diff]--;
 		cout<<name[ind+diff]<<"\n";
 		return;
 	}

    if(v[ind-diff]==0 && v[ind+diff]==0){diff++;}
 
 }
}


}




int main(){

vector<int>size;
vector<string>name(5);
name[0]='S';
name[1]='M';
name[2]='L';
name[3]="XL";
name[4]="XXL";

int temp;
for (int i = 0; i < 5; ++i)
{
	cin>>temp;
	size.push_back(temp);
}

int t;
cin>>t;
while(t--){
	solve(size,name);

}

}