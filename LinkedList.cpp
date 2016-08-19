//insert at end of the list
struct Node {
    int data;
    Node* link; //next
};

//head node pointer
Node* A;
A = NULL; //empty list

//to insert into the list if it's empty
Node* temp = new Node();
temp->data = 2;
temp->link = NULL;
A = temp;

//create new node
temp = new Node();
temp->data = 4;
temp->link = NULL;

//traversal
Node* temp1 = A;
while (temp1->link != NULL) {
    temp1 = temp1 -> link;
}
//insert into the table
temp1->link = temp;





//insert at begining of the list
#include <stdio.h>
#include <iostream>

struct Node {
    int data;
    Node* next;
};

struct Node* head;

Node* Insert(Node* head, int x) {
    Node* temp = new Node();
    temp.data = x;
    temp.next = NULL;
    // insert when there is no elements in the list
    head = temp;
    // insert when there are elements in the list
    if (head != NULL) {
        temp->next = head; // putting it in front of the head
    }
    head = temp; // temp become the new head
    return head;
}

void Print(Node* head) {
    while (head != NULL) {
        //print temp->data
        temp = temp->next;
    }
    //print \n
}




int main() {
    head = NULL;
}





//insert at any given position in a linked list

#include <stdio.h>
#include <iostream>

struct Node {
    int data;
    Node* next;
};

struct Node* head;

void Insert(int data, int n) {
    Node temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1) { //the list is empty
        temp1->next = NULL;
        head = temp1; // be the head
        return;
    }
    Node* temp2 = head;
    for (int i = 0; i <n-2; i++) {
        temp2 = temp2 -> next;
    }

    temp1->next = temp2->next;
    // since the first item is pointing to NULL
    // the new item needs to point to the same thing
    temp2->next = temp1;
    // now the old one points to the new one

}


int main() {
    head = NULL;
    Insert(2, 1); // 2
    Insert(3, 2); // 2, 3
    Insert(4,1);  // 4, 2, 3
}


//delete at any given position in a linked list
#include <stdio.h>
#include <iostream>

struct Node {
    int data;
    Node* next;
};

struct Node* head;

void Delete(int n) {
    struct Node* temp1 = head;
    if (n == 1) { //delete the head node
        head = temp1->next; //head node pointing to the second node
        delete temp1;
        return;
    }
    for (int i = 0; i!=n-2; i++) {
        temp1 = temp1->next; // the node in front the one we are deleting
    }
    struct Node* temp2 = temp1->next; // the node we are deleting
    temp1->next = temp2->next;
    delete temp2;
}

int main() {
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // the list is now: 2, 4, 6, 5
    int n;
    Delete(n); //delete the node at index n

}


// Reverse a linked list
void Reverse() {
    struct Node* current, prev, next;
    current = head;
    prev = NULL;
    while (current->next != NULL) {
        next = current->next;
        current->next = prev; //reverse the link
        prev = current; //move prev to the next item
        current = next; // move to the next item
    }
    head = prev; //prev is at end of the original list and now it's the new head
}

// Reverse a linked list using recursion
void Reverse(Node* p) {
    if (p->next == NULL) { // exit condition
        head = p; // making the last item the new head
        return;
    }
    reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}
