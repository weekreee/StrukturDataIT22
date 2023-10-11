#include <iostream>
using namespace std;

struct Node {
    int angka;
    Node* next;
};

void push(Node** head_ref, int angka_baru) {
    Node* new_node = new Node;
    new_node->angka = angka_baru;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    Node* head = nullptr;
    int input;
    
    while (true) {
        cin >> input;

        if (input == 0)
            break;

        push(&head, input);
    }

    
    Node* current = head;
    while (current != nullptr) {
        cout << current->angka << " ";
        current = current->next;
    }

    return 0;
}
