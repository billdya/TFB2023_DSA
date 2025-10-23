#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next_ptr;
};

class Stack{
private:
    Node* top;

public:
    Stack(){
        top = nullptr;
    }

    void push(string value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next_ptr = top;
        top = newNode;
        cout << "Pushed: " << value << endl;
    }
    
    string pop(){
        if (isEmpty()) {
            cout << "Pushed: " << value << endl;
            return "";
        }
        Node* temp = top;
        string value = top->data;
        top = top->next_ptr;
        delete temp;
        cout << "Popped: " << value << endl;
        return value;
        }

    string peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return "";
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        
        cout << "Stack contents: ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next_ptr;
        }
        cout << endl;
    }
};
int main() {
    Stack stack;
    
    stack.push("test1");
    stack.push("test2");
    stack.push("test3");

    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    stack.display();

    stack.pop();
    stack.pop();

    return 0;
}
