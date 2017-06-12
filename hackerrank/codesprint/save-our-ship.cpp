#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char Str[100],N[100];
	int Num,S,count=0;
	cin>>Str;
	for(int i=0;i<100;i+=3){N[i] = 'S';N[i+1] = 'O';N[i+2] = 'S';}
	N[100] = '\0';
	for(int i=0;i<strlen(Str);i++){

		if(Str[i] == N[i])
			continue;
		else count++;
	}
	cout<<count;
	return 0;
	}
