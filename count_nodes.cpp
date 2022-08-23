#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class linklist{
    private:
    node *head;
    node *tail;
    public:
    linklist(){
        head = NULL;
        tail = NULL;
    }
    void insertNode(int n){
        node * ptr = new node;
        ptr -> data = n;
        ptr -> next = NULL;
        if (head == NULL){
            head = ptr;
        }
        else{
            node *nodeptr;
            nodeptr = head;
            while (nodeptr -> next  != tail){
                nodeptr = nodeptr -> next;
            }
            nodeptr -> next = ptr;
        }
    }
    void display(){
        if(head == NULL){
            cout<<"Linklist is empty"<<endl;
        }
        else{
            node * i = head;
            while(i!= tail){
                cout<< i -> data<<"\t";
                i = i->next;
            }
        }
    }
    void count_nodes(){
        if(head == NULL){
            cout<<"Linklist is empty"<<endl;
        }
        else{
            int c = 0;
            node * i = head;
            while(i!= tail){
                c++;
                i = i->next;
            }
            cout<<"Total nodes in linklist are"<<" "<<c<<endl;
        }
    }


};
int main(){
    linklist l1;
    l1.insertNode(1);
    l1.insertNode(2);
    l1.insertNode(3);
    l1.insertNode(4);
    l1.display();
    cout<<endl;
    l1.count_nodes();
    return 0;}