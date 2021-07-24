#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "123";
    vector<string> ans;
   // if(s.length()==0)cout<<"\0";
     
     ans.push_back("");
    for(int i =0;i<s.size();i++)
    { 
      int k = ans.size();
      for(int j=0;j<k;j++)
      {
          ans.push_back(ans[j]+s[i]);
      }


    }
    cout<<'\t';
    for(auto x:ans)cout<<x<<" ";
    return 0;
}