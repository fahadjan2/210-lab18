#include <iostream>
using namespace std;

struct Node {
    double rating;
    string comment;

    Node * next;
};

void nodeAddHead(Node *&);
void nodeAddTail(Node *&);
void output(Node *);

int main() {
    int entry;
    cout << "test1" << endl;
    cout << "Which linked list method would you like to use?" << endl;
    cout << "[1] New nodes at the head of the linked list\n[2] New nodes at the tail of the linked list" << endl;
    cout << "Choice: ";
    cin >> entry;
    cout << endl;

    while (entry != 1 && entry != 2) {
        cout << "Enter a valid choice [1] or [2]" << endl;
        cout << "Choice: ";
        cin >> entry;
        cout << endl;
    }

    Node * head = nullptr;
    cout << "Enter Review Ratings" << endl;
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