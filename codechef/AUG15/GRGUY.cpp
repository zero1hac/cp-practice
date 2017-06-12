#include<iostream.h>
#include<cstdio>
#include<math.h>
#include<string>
using namespace std;
int main(){
	int T,i,j,gswitch1=0,gswitch2=0;
	cin>>T;
	string S1,S2;
	if(S1[0]=='#' && S2[0]=='#')cout<<"No"<<endl;
	if(S1[0]=='.' && S2[0]=='.'){
		i=0;j=0,state=1;
		while(i<N && j<N){
			if(state==1){
				if(S1[i+1]=='.'){
					i++;j++;
				}
				else {  if(S2[j]=='.'){
                                                state=2;gswitch1++;
                                        }
					else if(S2[j+1]=='.'){
						i++;j++;state=2;gswitch1++;
					}
					else{
						cout<<"No"<<endl;break;
					}
				
				}
				}
			if(state==2){
                                if(S2[j+1]=='.'){
                                        i++;j++;
                                }
                                else {  if(S1[i]=='.'){
                                                state=1;gswitch1++;
                                        }
                                        else if(S1[i+1]=='.'){
                                                i++;j++;state=1;gswitch1++;
                                        }
                                        else{
                                                cout<<"No"<<endl;break;
                                        }

                                }
                                }
			}
	i=0;j=0;state=2;
	while(i<N && j<N){
	    if(state==1){
		if(S1[i+1]=='.'){
		    i++;j++;
		}
		else {  if(S2[j]=='.'){
						state=2;gswitch2++;
					}
		    else if(S2[j+1]=='.'){
			i++;j++;state=2;gswitch2++;
		    }
		    else{
			cout<<"No"<<endl;break;
		    }

                }
                }
            if(state==2){
                                if(S2[j+1]=='.'){
                                        i++;j++;
                                }
                                else {  if(S1[i]=='.'){
                                                state=1;gswitch2++;
                                        }
                                        else if(S1[i+1]=='.'){
                                                i++;j++;state=1;gswitch2++;
                                        }
                                        else{   flag=1;
                                                cout<<"No"<<endl;break;
                                        }

                                }
                                }
            }
        if(gswitch1<gswitch2)cout<<gswitch1<<endl;
        else cout<<gswitch2<<endl;
    }
