#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {


   // #1.code to check whether system is 32 bit or 64 bit
       // printf("It's %ld bit system \n", sizeof(void *) * 8);

    // //#2.code to print maximum and minimum value of unsigned int
    //     int k = ~(-0);
    //     printf("%u",k);
        
    //     printf("\n");
    //     k=(~1);
            
    //     printf("-");
    //     printf("%u",k);

    // #3.
    
        // little endian if true
       // cout<<*(char *)&n;
    //    int n = 1;
    //    int *a =&n;
    //    char *p = (char*)a; 
    //    //cout<<(char)*p<<endl;
    //              if(*p == 1) {
    //                 cout<< "little endian";}
    //             else
    //                 cout<< "big endian";



//int check = INT

// #4.program to check whether stack is growing upwards or downwards??

//   stack<int> s;
//   s.push(4);
//   s.push(5);
//   int *p =&s.top();s.pop();
//   int *l=&s.top();
//   if(p>l)
//    cout<<"growing upwards ";
//   else
//    cout<<"growing downwards";


int n=rand();
cout<<n<<endl;
n=n^(n%2);
cout<<n;

 return 0;

}




