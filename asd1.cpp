#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
    Node(int i){
        info=i;
        next=NULL;
    }
};

void push(Node *&top,int i){
    Node *temp=new Node(i);
    temp->next=top;
    top=temp;
    cout<<item<<" pushed to stack"<<endl;
}
int pop(Node *&top){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    int item=top->info;
    Node *temp=top;
    top=top->next;
    delete temp;
    cout<<item<<" popped from stack"<<endl;
    return item;
}
