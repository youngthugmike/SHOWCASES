//Array implementation of stack
#include <iostream>

#define MAX_SIZE 101;
int A[MAX_SIZE];
int top = -1;

void Push(int x) {
    if (top == MAX_SIZE -1) { //overflow
        return;
    }
    top ++;
    A[top] = x;
}

void Pop() {
    if (top == -1) { // no elements to pop
        return;
    }
    top --;
}

void Top() {
    return A[top];
}

int main() {

}

//Linked list implementation of stack
#include <iostream>

struct Node {
    int data;
    Node* link;
}

Node* top = new Node();

void Push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->link = top; //top is pointing to NULL at the begining
    top = temp;
}

void Pop() {
    Node* temp = new Node();
    if (top == NULL) { //stack is empty
        return;
    }
    temp = top;
    top = top->link;
    delete top;
}

//using stack to reverse
#include <stack>
int main() {
    char C[51];
}

void Reverse(char *C, int n) {
    stack<chat> S;
    for (int i = 0; i < n; i++) {
        S.push(C[i]); //push into the array
    }

    for (int i = 0; i < n; i++) {
        C[i] = S.top(); //overwrite the character at index i
        S.pop();
    }
}

//using linked list to Reverse
stack<Node*> S;

struct Node* {
    int data;
    Node* next;
}

Node* temp = head;
while (temp != NULL) {
    S.push(temp);
    temp = temp->next;
}

Node* temp = S.top(); // end of S
head = temp;
S.pop();

while(!S.empty()){
    temp->next = S.top();
    S.pop();
    temp = temp->next;
}

temp->next = NULL;
