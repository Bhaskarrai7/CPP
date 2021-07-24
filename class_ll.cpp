//LL class creation


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;
    
    //constructor
    node(int d){
        data = d;
        next =NULL;
    }


};


void insertathead(node*& head,int data){
    

    if(head==NULL){head=new node(data);}
    
    else
    {node *n = new node(data);n->next=head;head=n;}


}

void print(node* head){

    if(head==NULL)return;
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}

int main(){

    node *head=NULL;
   node* temp = new node(9);
   cout<<temp->data;
    
    for(int i =0;i<5;i++){
      insertathead(head,i);  
    }
    

    //print(head);
    return 0;
}