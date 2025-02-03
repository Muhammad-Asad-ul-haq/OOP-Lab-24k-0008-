#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    
    cout << "Enter Number of Rows: " ;
    cin >> rows ;
    
    cout << "Enter Number of Columns: " ;
    cin >> columns ;

  
    int **A = new int*[rows];
    int **B = new int*[rows];
    int **C = new int*[rows];

    for (int i = 0; i < rows; i++) {
        A[i] = new int[columns];
        B[i] = new int[columns];
        C[i] = new int[columns];
    }


    cout << "Enter elements of Matrix 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "(" << i  << ")(" << j  << "): ";
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of Matrix 2:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "(" << i  << ")(" << j + 1 << "): ";
            cin >> B[i][j];
        }
    }

   
    cout << "\nAddition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "\nSubtraction:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    
    if (columns== rows) {
        cout << "\nMultiplication:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                C[i][j] = 0;
                for (int k = 0; k < columns; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMultiplication Can not happen ( size does not match )" << endl;
    }

   
    for (int i = 0; i < rows; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
