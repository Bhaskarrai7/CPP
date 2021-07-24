#include <bits/stdc++.h>
using namespace std;

class numbers{
public:
int a;
int b;
int *c;

numbers(int a1,int b1){
    a=a1;
    b =b1;
    c = &b;
}
numbers(numbers &x){
   a = x.a;
   b = x.b;
   c = &b;

}

int add(){
    return (a+b);
}

int add(int a,int b){
    return a-b;
}

// ~numbers(){
//     cout<<"inside destructor of numbers class"<<endl;
// }


};


int main(){

numbers *A= new numbers(3,7);

numbers *B = A;

delete B;

cout<<(A->c)<<endl;
//cout<<A.add(8,8);
cout<<(B->c)<<endl;

//numbers *i = new numbers(9,5);
//cout<< i->a<<" "<< i->b;
//delete i;

return 0;

}


