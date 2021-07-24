#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//reversing stack s1 using another stack s2 in O(n2) time

int main(){
stack<int> s1;


cout<<"     before reversal of original stack ====> "<<endl;
for(int i =0;i<5;i++)
{s1.push(i);
cout<<4-i<<endl;
}


cout<<endl;

cout<<"     after reversal of the stack ====> "<<endl;

   stack<int>s2;
   int n = s1.size();
   for(int i =0 ;i< n;i++){
   int x =s1.top();s1.pop();
  
        for(int j =0;j<(n-i-1);j++)
           { s2.push(s1.top());s1.pop();}
       
   
    
    s1.push(x);

        for(int j =0;j<(n-i-1);j++)
            {s1.push(s2.top());s2.pop();}
     
   }

while(!s1.empty())
{
    cout<<s1.top()<<endl;
    s1.pop();
}

return 0;




}