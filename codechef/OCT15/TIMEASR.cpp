#include<bits/stdc++.h>
using namespace std;
string printsd(int h){
		if(h==0)return "00";if(h==1)return "01";if(h==2)return "02";if(h==3)return "03";if(h==4)return "04";if(h==5)return "05";if(h==6)return "06";if(h==7)return "07";if(h==8)return "08";if(h==9)return "09";}
int main(){
	int N;
	cin>>N;
	while(N--){
		int h=0,m;
		double forh=60.0,form=11.0,half=0.50;
		//cout<<forh<<" "<<form<<" "<<half;
		double angle;
		cin>>angle;
		for(;h<12;h++){
			m=0;
			for(;m<60;m++){
				double g;
				g = half*(abs(forh*(double)h-form*(double)m));
				if(g - 180.00000 >0.00000){
					g = 360.00000 - g;
				    //    cout<<g<<endl;
				}//cout<<"1st";
				if(120.0*abs(g - angle)<1.0){
					if(h<10 && h>=0)cout<<printsd(h)<<":";
					else cout<<h<<":";
					if(m<10 && m>=0)cout<<printsd(m)<<endl;
					else cout<<m<<endl;}
				}
			}
		}
	return 0;}
