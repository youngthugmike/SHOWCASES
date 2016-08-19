struct Node* {
    int data;
    Node* next;
    Node* prev;
}

Node* head = new Node*();

void InsertAtHead(int x) {
    Node* temp = new Node*(); //the node we are going to insert
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

//not sure if this works
void InsertAtN(int n, int x) {
    *Node temp = new Node*();
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    //if there is no item
    head = temp;
    //traversal
    Node* current = head;
    for (int i = 0; i <n-2; i++) {
        current = current -> next;
    }
    temp->next = current->next;
    current->next->prev = temp;
    current->next = temp;
    temp->prev = current;
}

void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

void Print() {
    Node* temp = head;
    if (temp == NULL) {
        return;
    }
    while (temp != NULL) {
        temp = temp->next;
    } //go to the end of this list
}

void ReversePrint() {
    Node* temp = head;
    if (temp == NULL) {
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    } //go to the end of this list
    while (temp != NULL) {
        temp = temp->prev; //travel backward
    }
}

int main() {

}
