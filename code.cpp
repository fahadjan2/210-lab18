// COMSC-210 | Lab 18 | Fahad Fawad Ahmad 
// IDE used: Visual Studio
#include <iostream>
using namespace std;

struct MovieReviews {
    double rating;
    string comment;

    MovieReviews * next;
};

void output(MovieReviews *);

int main() {
    MovieReviews * head = nullptr;

    //Asks User which linked list method to use
    int entry;
    cout << "test3" << endl;
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
    MovieReviews * previous = nullptr;
    char continueKey = 'Y';
    while (continueKey == 'Y') { 
        MovieReviews * newVal = new MovieReviews;

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
        if (entry == 1) { //add to head
            if (!head) { //if first
                head = newVal;
                newVal->next = nullptr;
            }
            else { //if second or more
                newVal->next = head;
                head = newVal;
            }
        } 
        else if (entry == 2) { //add to tail
            if (!head) { //if first
                head = newVal;
                previous = newVal;
                newVal->next = nullptr;
            }
            else { //if second or more
                previous->next = newVal;
                previous = newVal;
                newVal->next = nullptr;
            }
        }
    }

    output(head);
}

void output(MovieReviews * head) {
    if (!head) {
        cout << "Empty list" << endl;
        return;
    }

    MovieReviews * current = head;
    int count = 1;
    int sum = 0;
    while (current) {
        sum += current->rating;
        cout << "Review #" << count++ << ": " << current->rating << ": " << current->comment << endl;
        current = current->next;
    }

    cout << "Average: " << sum / (count - 1) << endl;
}