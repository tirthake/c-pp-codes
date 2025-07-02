//search an element in a linked list
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;

    // constructor
    node(int newdata){
        data = newdata;
        next = NULL;
    }
};


//check whether key is present in the linked list
bool searchkey(node* head, int key) {
    node* current = head;
    while(current != NULL) {
        if(current->data == key) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main() {
    // created a hard coded linked list
    node* head = new node(14);
    head->next = new node(15);
    head->next->next = new node(16);
    head->next->next->next = new node(17);
    head->next->next->next->next = new node(18);

    int key = 200;
    if(searchkey(head, key))
        cout << "yes";
    else
        cout << "no";

    return 0;
}