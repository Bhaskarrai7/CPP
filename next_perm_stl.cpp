#include <bits/stdc++.h>
using namespace std;

int main()
{
   string arr={'1','2','3'};
    //string arr ="123";
     for(auto x: arr)cout<<x<<" ";
    next_permutation(arr.begin(),arr.end());
    for(auto x: arr)cout<<x<<" ";
    return 0;
}

//from here we'll try backtracking code 