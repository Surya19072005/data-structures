#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

void deleteNthNode(Node* head, int n) {
    Node* current = head;
    Node* temp;

    while (current->next != current) {
        for (int i = 1; i < n - 1; i++) {
            current = current->next;
        }

        temp = current->next;
        current->next = temp->next;
        std::cout << "Deleted Node: " << temp->data << std::endl;
        delete temp;
        current = current->next;
    }

    std::cout << "Deleted Node: " << current->data << std::endl;
    delete current;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;
    int n = 2;
    deleteNthNode(head, n);
    return 0;
}
