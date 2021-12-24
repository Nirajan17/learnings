#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *nptr;
};

// struct Node *START=NULL;   //variable to point first node


/* this is the code when Node is not decleared as a global variable 😅😁*/

 Node* createNode(){
     Node *temp=new Node;
    return temp;
}

void insertNode(Node** START,int data){
  
     Node *temp=createNode();
    temp->data=data;
    temp->nptr=*START;
    *START = temp;

    // while(temp->nptr!=NULL){
    //     np=np->nptr;
    //     np->nptr=temp;
    // }
    // temp->nptr=NULL;
    
    //cout << "Value 65 is added to the latest node" << endl;
}
void dataInList(Node *START){
    // print the data available in a list 
    while(START!=NULL){
		cout << START->data <<" ";
		START = START->nptr;
	}

}
int main(){
    Node* START=NULL; 
    //passing refrence address of node as a parameter 
    insertNode(&START,65);
    dataInList(START);
}