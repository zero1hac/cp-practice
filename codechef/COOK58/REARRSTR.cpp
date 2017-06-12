/*Dushyant Kumar Mishra
zerooenhacker
Mathematics and Computing
IIT BHU
*/
    
#include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		string a;
    		cin>>a;
    		pair<int,int> arr[26];
    		for(int i =0;i<26;i++){
    			arr[i]= make_pair(0,0);
    		}
    		for(int i =0;i<a.size();i++){
    			int k = ((int)a[i])-97;
    			arr[k].first= arr[k].first +1;
    			arr[k].second= (int)a[i];
    		}
    		sort(arr,arr+26);
    		int l1 = arr[25].first;
    		long int count =0;
    		for(int i =0;i<25;i++){
    			count += arr[i].first;
    		}
    		if(count >=l1-1){
    			int e =0;
    			vector <int> arr6[l1];
    			for(int i =24;i>=0;i-- ){
    				if (arr[i].first==l1){
    					for(int j = 0;j<l1;j++){
    						arr6[j].push_back(arr[i].second);
    					}
    				}
    				else {
    					for(int j = 0;j<arr[i].first;j++){
    						arr6[e].push_back(arr[i].second);
    						e++;
    						e = e%l1;
     
    					}	
    				}
    			}
    			for(int i =0;i<l1;i++){
    				cout<<(char)(arr[25].second);
    				for(int j =0;j<arr6[i].size();j++){
    					cout<<(char)(arr6[i][j]);
    				}
    			}
    			cout<<endl;
    		}
    		else cout<<-1<<endl;
    	}
    }
