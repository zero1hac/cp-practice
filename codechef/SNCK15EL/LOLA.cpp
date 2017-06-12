#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#define gc getchar_unlocked
#define fori(i,a,b) for(int i=a;i<b;i++)
#define ll long long int
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void scanintl(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main() {
    char S[100001];
    cin >> S;
    ll a,b;
    cin >> a;
    char modifiedstr[100001];
    int i,j,k,l;
    ll result;
    fori(b,0,a){
        scanint(i);scanint(j);scanint(k);scanint(l);
         fori(x,0,S.length()){
            if (x >= i - 1 && x <= j - 1) {
                modifiedstr[x] = S[j - 1 - x + i - 1];
            }
            else {
                modifiedstr[x] = S[x];
            }
        }
        result = 1;
        while (k < l) {
            if (modifiedstr[k - 1] != modifiedstr[l - 1]) {
                result = 0;
                break;
            }
            k+=1;
            l-=1;
        }
        if (result == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

