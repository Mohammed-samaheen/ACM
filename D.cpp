#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t,n,x;

    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ct=(n>1)?2:1;
        int sum=v[0];
        for(int i=1;i<n-1;i++){
            if(sum+v[i]<v[i+1]){
                ct++;
                sum+=v[i];
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
