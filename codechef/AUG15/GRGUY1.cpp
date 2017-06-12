#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
using namespace std;
int main(){
	int T,i,j,gswitch1=0,gswitch2=0,N,state,flag;
	cin>>T;
	string S1,S2;
	while(T--){
	cin>>S1;
	cin>>S2;
	//cout<<S1[0];
	N = S1.length();
	if(S1[0]=='#' && S2[0]=='#')cout<<"No"<<endl;
	if(S1[0]=='.' && S2[0]=='.'){
		i=0;j=0;state=1;
		while(i<N-1 && j<N-1){
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
						cout<<"No"<<endl;goto k;
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
                                                cout<<"No"<<endl;goto k;
                                        }

                                }
                                }
			}
	i=0;j=0;state=2;
	while(i<N-1 && j<N-1){
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
			cout<<"No"<<endl;goto k;
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
                                                cout<<"No"<<endl;goto k;
                                        }

                                }
                                }
            }
        if(gswitch1<gswitch2)cout<<gswitch1<<endl;
        else cout<<gswitch2<<endl;
        k:
        flag=0;
    }
    if(S1[0]=='.' && S2[0]=='#'){
		i=0;j=0;state=1;
		while(i<N-1 && j<N-1){
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
						cout<<"No"<<endl;goto j;
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
                                                cout<<"No"<<endl;goto j;
                                        }

                                }
                                }
			}
        cout<<gswitch1<<endl;
        j:
        flag=0;

    }
    if(S1[0]=='#' && S2[0]=='.'){
		i=0;j=0,state=2;
		while(i<N-1 && j<N-1){
			if(state==1){
				if(S1[i+1]=='.'){//cout<<"1"<<endl;
					i++;j++;
				}
				else {  if(S2[j]=='.'){
                                                state=2;gswitch1++;
                                        }
					else if(S2[j+1]=='.'){
						i++;j++;state=2;gswitch1++;
					}
					else{
						cout<<"No"<<endl;goto p;
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
                                                cout<<"No1"<<S1[i+1]<<endl;goto p;
                                        }

                                }
                                }
			}
        cout<<gswitch1<<endl;
        p:
        flag=0;
    }

}
return 0;
}
