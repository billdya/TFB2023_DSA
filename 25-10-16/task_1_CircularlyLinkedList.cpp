#include <iostream>
using namespace std;
struct Node {
    string data;
    Node* next_ptr;
};
int main() {
    Node node1, node2, node3;
    node1.data = "test1";
    node2.data = "test2";
    node3.data = "test3";

    node1.next_ptr = &node2;
    node2.next_ptr = &node3;
    node3.next_ptr = &node1;

    Node* current = &node1;

    int n;
    cout << "How many times do you wish to traverse: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << current->data << " ";
        current = current->next_ptr;
    }
    cout << endl;
    return 0;
}
