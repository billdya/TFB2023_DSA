#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next_ptr;
    Node* prev_ptr;
};

int main() {
    Node node1, node2, node3;

    node1.data = "test1";
    node2.data = "test2";
    node3.data = "test3";

    node1.next_ptr = &node2;
    node2.next_ptr = &node3;
    node3.next_ptr = nullptr;

    node1.prev_ptr = nullptr;
    node2.prev_ptr = &node1;
    node3.prev_ptr = &node2;

    cout << "Forward traversal: ";
    Node* current = &node1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next_ptr;
    }
    cout << endl;
 
    cout << "Backward traversal: ";
    current = &node3;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev_ptr;
    }
    cout << endl;

    return 0;
}
