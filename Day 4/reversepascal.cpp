#include <iostream>
using namespace std;

int main() {
    int rows;

    
    cout << "Enter the number of rows: ";
    cin >> rows;

    
    int pascal[rows][rows];

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            }
            
            else {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    
    cout << "\nReverse Pascal's Triangle:" << endl;
    for (int i = rows - 1; i >= 0; i--) {
       
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }
        
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
