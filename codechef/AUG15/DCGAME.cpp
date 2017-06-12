#include <bits/stdc++.h>
using namespace std;
#define Foreach(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
#define rof(i,a,b) for(int (i)=(a);(i) > (b); --(i))
//template <typename T> using os =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int maxt = 1e6 + 100;
long long a[maxt], n,t, l[maxt], r[maxt], mans[maxt],m,sum,o,j,lol[maxt];
char w,y;
stack<long long > sx;
int main(){
    //scanf("%d",&t);
    //while(t--)
    //{
	scanf("%lld", &n);
	scanf("%lld",&m);
	For(i,1,n+1)
		scanf("%lld", a + i);
	fill(l, l + maxt, 0);
	fill(r, r + maxt, 0);
	For(i,1,n+1){
		while(!sx.empty() && a[sx.top()] <= a[i])
			sx.pop();
		if(!sx.empty())
			l[i] = sx.top();
			//l[i] = sx.top()********
        else //l[i]=0********
            l[i] = 0;
        l[i]=i-l[i];//******
		sx.push(i);
	}
	while(!sx.empty())
		sx.pop();
	rof(i,n,0){
		while(!sx.empty() && a[sx.top()] < a[i])
			sx.pop();
		if(!sx.empty())
			r[i] = sx.top();
			//r[i]=sx.top()******************
        else
            r[i] = n+1;
            //r[i]=n+1;***************
        r[i]-=i;//******************
		sx.push(i);
	}

	For(i,1,n+1){
        //printf("l:%lld  r:%lld\n",l[i],r[i]);
        mans[i] = (l[i]*r[i]);
        //l[i]*r[i]**************************
	}

    char bar[m+1];
    j=0;
    //long long sizes = sizeof(a)/sizeof(long long);
    vector<pair<long long,long long> > coun(sizes);
    for (long long i = 1; i < =n; i++)
		coun[i]=make_pair(a[i],mans[i]);
    //cout<<coun[0].first<<coun[0].second;
    sort(coun.begin(),coun.end());
    for(int i=2;i<=n;n++){
            mans[i]=mans[i]+mans[i-1];

            }
    while(m--)
    {

        //j=0;
        sum=0;
        cin>>w;
        cin>>o;
        cin>>y;

        if(w=='>')
        {
            For(i,1,n+1){
                //printf("%lld  ",a[i]);
                sum = sum + (a[i]>o?mans[i]:0);
                //printf("%lld  ",sum);
            }
            //printf("\n");
            if(sum%2==0)
            {
                if(y=='D')
                {
                    bar[j++]='C';
                }
                else
                {
                    bar[j++]='D';
                }
            }
            else
            {
                bar[j++]=y;
            }
        }
        //else if(c=='<')
        else if(w=='<')
        {
            For(i,1,n+1){
                if(a[i]<o)
                {
                    sum+=mans[i];
                }
            }
            //printf("%lld  ",sum);
            //printf("\n");
            if(sum%2==0)
            {
                if(y=='D')
                {
                    bar[j++]='C';
                }
                else
                {
                    bar[j++]='D';
                }
            }
            else
            {
                bar[j++]=y;
            }
        }
        else
        {
            For(i,1,n+1){
                //printf("%lld\n",a[i]);
                if(a[i]==o)
                {
                    sum+=mans[i];
                }
                //printf("%lld  ",sum);
            }
            //printf("\n");
            if(sum%2==0)
            {
                if(y=='D')
                {
                    bar[j++]='C';
                }
                else
                {
                    bar[j++]='D';
                }
            }
            else
            {
                bar[j++]=y;
            }
        }
    }
    bar[j]='\0';

    printf("%s\n",bar);
	//cout << endl;

	return 0;
}
