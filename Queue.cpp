//array implementation
int A[10];
int front = -1;
int rear = -1;

bool IsEmpty() {
    if (front == -1 && rear == -1) {
        return true;
    } else {
        return false;
    }
}

void Enqueue(x) { // insert into the queue
    // codes in the comments are implementation of circular array
    if (rear == A.size() -1) { //if ((rear + 1) % A.size() == front) {
        return; // this array is full
    }
    else if (IsEmpty()) {
        front = 0;
        rear = 0;
    }
    else {
        rear += 1; // rear = (rear + 1) % A.size();
    }
    A[rear] = x;
}

void Dequeue(x) { // delete from the queue
    // codes the comments are implementation of circular array
    if (IsEmpty()) {
        return;
    }
    else if (front == rear) { // only one element in the queue
        front = -1;
        rear = -1;
    }
    else {
        front += 1; // since front is on the left
        //front = (front + 1) % A.size();
    }
}


//linked list implementation
