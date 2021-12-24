#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *nptr;
};

struct Node *START=NULL;   //variable to point first node

struct Node* createNode(){
    struct Node *temp=new struct Node;
    return temp;
}

void insertNode(int data){
    struct Node *np;
    struct Node *temp=createNode();
    temp->data=data;
    if(START==NULL){
        START=temp;
        //temp->nptr==NULL;
    }
    else{
        np=START;
        while(np->nptr!=NULL){
            np=np->nptr;
            np->nptr=temp;
        }
        //temp->nptr=NULL;
    }
    //cout << "Value 65 is added to the latest node" << endl;
}

int main(){
    insertNode(65);
}