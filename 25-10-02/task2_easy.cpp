//Given a binary 2D array, where each row is sorted. Find the row with the maximum number of 1s. 
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int mat[10][10];
    cout << "\nEnter the binary matrix (0s and 1s):" << endl;
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
    cout << endl;
    int maxones=0;
    int maxrow=0;;
    for (int i=1; i<=rows;i++){
        int count=0;
        for(int j=1; j<=cols; j++){
            if (mat[i][j]==1){
                count++;
            }
        }
        if (count>maxones){
            maxrow=i;
            maxones=count;
        }
    }
    if (maxrow==0){
        cout << "None of the rows has one" << endl;
    } else{
    cout << "Row " << maxrow << " has the maximum num of ones" << endl;
    cout << "Number of ones: " << maxones << endl;
    }
}
