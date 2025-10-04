// COMSC-210 | Lab 18 | Fahad Fawad Ahmad 
// IDE used: Visual Studio
#include <iostream>
using namespace std;

struct MovieReviews {
    double rating;
    string comment;

    MovieReviews * next;
};

void nodeAddHead(MovieReviews *&);
void nodeAddTail(MovieReviews *&);
void output(MovieReviews *);

int main() {
    MovieReviews * head = nullptr;

    //Asks User which linked list method to use
    int entry;
    cout << "test2" << endl;
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

    //Asks for User input on each movie
    MovieReviews * newVal = new MovieReviews;
    char continueKey = 'Y';

    while (continueKey == 'Y') { 
        cout << "Enter review rating 0-5: ";
        cin >> newVal->rating;
        while (newVal->rating > 5 || newVal->rating < 0) {
            cout << "Enter a valid rating from 0-5: ";
            cin >> newVal->rating;
        }

        cout << "Enter review comments: ";
        cin >> newVal->comment;
        cout << endl;

        cout << "Enter another review? Y/N: ";
        cin >> continueKey;
        while (continueKey != 'Y' && continueKey != 'N' && continueKey != 'y' && continueKey != 'n') {
            cout << "Enter a valid option Y/N: ";
            cin >> continueKey;
        }

        //Whether to add it to the head or tail
        if (entry == 1) {
            if (!head) { //if first
                head = newVal;
                newVal->next = nullptr;
                newVal->
            }
        } 
        else if (entry == 2) { //if second or more

        }
    }
}

void nodeAddHead(MovieReviews *&head) {

}

void nodeAddTail(MovieReviews *&head) {

}

void output(MovieReviews * head) {
    if (!head) {
        cout << "Empty list" << endl;
        return;
    }

    MovieReviews * current = head;
    int count = 1;
    while (current) {
        cout << "Review #" << count++ << ": " << current->rating << ": " << current->comment << endl;
        current = current->next;
    }
}