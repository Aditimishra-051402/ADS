// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int info;
//     Node *next;
//     Node(int i){
//         info=i;
//         next=NULL;
//     }
// };
// Node *front, *rear;
// bool isEmpty(){
//     return front==NULL;
// }
// void transverse(){
//     if(isEmpty()){
//         cout<<"Queue is empty"<<endl;
//         return;
//     }
//     Node *temp=front;
//     while(temp!=NULL){
//         cout<<temp->info<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// void enqueue(int i){
//     Node *temp=new Node(i);
//     if(isEmpty()){
//         front=rear=temp;
//     }
//     else{
//         rear->next=temp;
//         rear=temp;
//     }
//     cout<<i<<" enqueued to queue"<<endl;
// }   
// void dequeue({
//     int info;
//     if(front==NULL){
//         cout<<"Queue is empty"<<endl;
//         return -1;
//     }
//     info=front->info;
//     Node *temp=front;
//     if(front==rear){
//         front=rear=NULL;
//     }
//     else{
//         front=front->next;
//     }
// }
// int main(){
//     front=rear=NULL;
//     enqueue(5);
//     enqueue(10);
//     enqueue(15);
//     cout<<"Queue elements: ";
//     transverse();
//     cout<<"Dequeued element: "<<dequeue()<<endl;
//     cout<<"Queue elements after dequeue: ";
//     dequeue();
//     transverse();
//     return 0;
// }

// program to check if the given no. a palandrom using stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, original;
    stack<int> s;

    cout << "Enter a number: ";
    cin >> n;

    original = n;
    while (n > 0) {
        s.push(n % 10);
        n = n / 10;
    }

    int reversed = 0;
    while (!s.empty()) {
        reversed = reversed * 10 + s.top();
        s.pop();
    }

    if (original == reversed)
        cout << original << " is a Palindrome";
    else
        cout << original << " is not a Palindrome";

    return 0;
}

