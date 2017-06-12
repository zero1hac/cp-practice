#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
	{
		int T,chefpoint,otherpoint;
		string S;
		int flag=1;
		cin>>T;
		while(T--){
			cin>>S;
			flag=1;chefpoint=0;otherpoint=0;
			for(int i=0;i<S.length();i++)
			{
				if(S[i]=='1')chefpoint++;
				else otherpoint++;
				if(chefpoint == 10 && otherpoint == 10){
					for(;i<S.length();i++){
						if(S[i]=='1')chefpoint++;
						else otherpoint++;
						if(otherpoint-chefpoint == 2){flag = 0;break;
					}else if(chefpoint - otherpoint == 2){flag =1;break;}}for(;i<S.length();i++);}
				else {if(otherpoint == 11){flag = 0;break;}if(chefpoint == 11){flag=1;break;}}
			}
		if(flag==1)cout<<"WON"<<endl;
		else cout<<"LOSE"<<endl;}
	return 0;
	}
