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

void insertNode(){
    struct Node *np;
    struct Node *temp=createNode();
    cout <<"Enter a number " ;
    cin >> temp->data;
    // if(START==NULL){
    //     // START=temp;
    //     temp->nptr=START;
        // START=temp;
    // }
    // else{
        temp->nptr=START;
        START=temp;
        // while(np->nptr!=NULL){
        //     np=np->nptr;
        //     np->nptr=temp;
        // }
        // temp->nptr=NULL;
    // }
}

void deleteNode(){               //deletion of first node
    struct Node *temp;
    if(START==NULL){
        cout<<"List is empty!"<< endl;
    }
    else{
        temp=START;
        START=START->nptr;
        delete(temp);
    }
}

void viewList(){
    struct Node* tem;
    if(START==NULL){
        cout << "List is Empty!"<<endl;
    }
    else{
        tem=START;
        while(tem!=NULL){
            cout << tem->data << endl;
            tem=tem->nptr;
        }
    }
}

int Choice(){
    int choice;
    cout << "Choose from the option." << endl;
    cout << "1. Insert Node" << endl
         << "2. Delete first Node."<<endl
         << "3. View List" << endl
         << "4. Exit" << endl;
    cin>>choice;
    return choice;
}

int main(){
    while(1){
        switch(Choice()){
        case 1:{
            insertNode();
            break;
        }
        case 2:{
            deleteNode();
            break;
        }
        case 3:{
            viewList();
            break;
        }
        case 4:{
            exit(0);
            break;
        }
        default:{
            cout << "Wrong Choice!" << endl;
            exit(0);
        }
        }
    }
}
