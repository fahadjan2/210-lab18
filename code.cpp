#include <iostream>
using namespace std;

void nodeAddHead(Node *&);
void nodeAddTail(Node *&);
void output(Node *);

struct Node {
    double rating;
    string comment;

    Node * next;
};

int main () {

}

void nodeAddHead(Node *&head) {

}

void nodeAddTail(Node *&head) {

}

void output(Node * head) {
    if (!head) {
        cout << "Empty list" << endl;
        return;
    }

    Node * current = head;
    int count = 1;
    while (current) {
        cout << "Review #" << count++ << ": " << current->rating << ": " << current->comment << endl;
        current = current->next;
    }
}