#include <bits/stdc++.h>
using namespace std;
void paranthesis(string ans, int n ,int open_count,int close_count)
{
    //base caes
    if(ans.length() == 2*n){
        cout<<ans<<endl;
    }

    //recursive case

    //two things to check here --->
    //1 check for open_count< n
    if(open_count < n){
        paranthesis(ans+"(",n,open_count+1,close_count);
    }

    //check for count of closing_brackets
    if(close_count < open_count)
     {
     paranthesis(ans+")",n,open_count,close_count+1);}

}

int main()
{
    int n=3;
    //cin>>n;

    string ans={};
    paranthesis(ans,n,0,0);

    return 0;
}

    