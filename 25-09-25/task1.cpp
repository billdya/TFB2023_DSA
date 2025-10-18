#include <iostream>
#include <string>
using namespace std;
struct Student {
  int id;
  string name;
  string email;
};
int main() {
  int opt = 1;
  int num;
  while (opt != 2) {
    cout << "Enter number of students: ";
    cin >> num;
    Student student[num];
    for (int i = 0; i < num; i++) {
      cout << "\nStudent " << i + 1 << " Details:\n";
      cout << "Enter name: ";
      cin >> student[i].name;
      cout << "Enter id: ";
      cin >> student[i].id;
      cout << "Enter email: ";
      cin >> student[i].email;
    }
    for (int i =0; i <num; i++){
      cout << "\nStudent " << i + 1 << " Details:\n";
      cout << "Name: " << student[i].name << "\n";
      cout << "ID: " << student[i].id << "\n";
      cout << "Email: " << student[i].email << "\n\n";
    }
    cout << "Continue? (1 FOR YES, 2 FOR NO): ";
    cin >> opt;
  }
  return 0;
}
