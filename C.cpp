#include <bits/stdc++.h>

using namespace std;

int main()
{

    double n,l,x,r;
    double w;
    
    while(cin>>n>>l>>w)
    {
        vector<pair<double,double> > v;
        while(n--)
        {
            cin>>x>>r;
            if(r>(w/2.0))
               {
                   double d=sqrt(r*r-(w*w/4.0));
                   v.push_back(make_pair(x-d,x+d));
                   
               }
        }
        sort(v.begin(),v.end());
        
      
        double en=0,st=0,ct=0;
        for(int i=0;i<v.size() && en<=l;)
        {
            if(v[i].first<=0 && v[i].second>=l){
                en=l;
                ct=1;
                break;
            }
            while(i<v.size()&& v[i].first<=en){

                st=max(v[i].second,st);
                i++;
            }
            if(st>en)
            {
                en=st;
                ct++;
            }
            else
                break;
        }
        if(en<l)
            cout<<-1<<endl;
        else
            cout<<ct<<endl;

    }

    return 0;
}
