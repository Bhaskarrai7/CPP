#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int convert(string s, int idx)
{
    if(idx == 0)return(s[0]-'0');

    else
    {
        int digit = s[idx]-'0';
        int sa = convert(s,idx-1);
        return (sa*10)+digit; 
    }


}


int main()
{
    string s ="1234";
    //cout<<s.length();
     int n = convert(s,s.length()-1);  cout<<n;
}