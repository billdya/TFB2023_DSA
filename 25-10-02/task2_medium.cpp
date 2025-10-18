#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int mat[10][10];
    cout << "\nEnter the matrix elements(1 2 3):" << endl;
    for (int i = 1; i <= rows; i++) {
        cout << "Row " << i << ": ";
        for (int j = 1; j <= cols; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "\nYour matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int rotated[10][10];
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=cols; j++) {
            rotated[cols-j+1][i] = mat[i][j];
            //New row = cols - j + 1; New column = i
        }
    }
    cout << "\nRotated 90° Counterclockwise:" << endl;
    //Original: rows × cols; Rotated: cols × rows
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= rows; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}
