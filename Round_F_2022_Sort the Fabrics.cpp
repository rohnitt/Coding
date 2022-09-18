#include <bits/stdc++.h>
#include<vector>
using namespace std;
bool comp1(pair<string,pair<int,int>> &pair1,pair<string,pair<int,int>>&pair2)
{
    if(pair1.second.first!=pair2.second.first)
     return (pair1.second.first < pair2.second.first);
     else
     return (pair1.second.second < pair2.second.second);

}
bool comp2(pair<string,pair<int,int>> &pair3,pair<string,pair<int,int>>&pair4)
{
    if(pair3.first!=pair4.first)
     return (pair3.first < pair4.first);
     else
      return (pair3.second.second < pair4.second.second);

}

int main() {

    int t,i=1;
    cin>>t;
    while(i<=t)
    {
        int n;
        cin>>n;
        int DesiredOutput=0;
        vector<pair<string,pair<int,int>>>m;
         vector<pair<string,pair<int,int>>>r;

        for(int i=0;i<n;i++)
        {
        string c;
        int d,u;
        cin>>c;
        cin>>d>>u;
        m.push_back(make_pair(c, make_pair(d, u)));
        }
        r=m;
        sort(m.begin(),m.end(),comp2);
        sort(r.begin(),r.end(),comp1);
         for(int i=0;i<n;i++)
         {
             if(r[i]==m[i])
             DesiredOutput++;
         }
        cout<<"Case #"<<i<<':'<<" "<<DesiredOutput<<endl;
         i++;
    }
    return 0;
}
