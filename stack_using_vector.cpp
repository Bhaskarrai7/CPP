#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack
{
    private:
     vector<int> v;
    
    public:
     void push(int data)
     {
         v.push_back(data);
     }
     
     bool empty()
     {
         return v.size()==0;
     }
     void pop()
     {
         if(!v.empty())v.pop_back();
     }

     int top()
     {
         return v[v.size()-1];
     }



};


int main()
{
    Stack s;

    for(int i =0; i< 7;i++)
     {
         s.push(i*7);
     }

     cout<<" are the items pushed ??"<<s.empty()<<endl;

     cout<<"check whether top will work or not ??";
     cout<<s.top();

     return 0;


}
