#include <iostream>

using namespace std;

struct Node {
    int info;
    Node *next;
};

class List1 {
public:
    Node *First = nullptr;
    Node *Last  = nullptr;
    void AddNode(int);
    void DelNode(int);
    void Print();
};

void List1::AddNode(int item) {
    Node *p = new Node;
    p -> info = item;
    p -> next = NULL;

    if(First == NULL){
        First = p;
        Last = p;
    }
    else {
        Last -> next = p;
        Last = p;
    }
}

void List1::DelNode(int item) {
    if(First == nullptr){
        cout<<"List is empty"<<endl;
    }
    else{
        Node *q = new Node;
        Node *p = new Node;
        p = First;
        while (p != nullptr){
            if (p -> info == item && p == First){
                First = First -> next;
            }else if (p -> info == item && p != First){
                q -> next = p -> next;
            }else if (p -> info == item && p == Last){
                Last = q;
                q -> next = nullptr;
            }
            q = p;
            p = p -> next;
        }
    }
}

void List1::Print() {
    if (First == nullptr) {
        cout << "List is empty" << endl;
    } else{
        for(Node *p = First ; p != nullptr ; p = p -> next){
            cout<< p -> info <<"\t";
        }
        cout<<"\n";
    }
}