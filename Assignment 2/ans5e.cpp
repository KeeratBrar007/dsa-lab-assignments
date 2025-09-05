#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;
    int size = n * (n + 1) / 2;
    int A[size];
    for (int i = 0; i < size; i++){
        A[i] = 0;
    }
    cout << "Enter lower triangular part (including diagonal):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int x; cin >> x;
            A[i * (i + 1) / 2 + j] = x;
        }
    }
    cout << "Symmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j){
                cout << A[i * (i + 1) / 2 + j] << " ";
            }
            else{
                cout << A[j * (j + 1) / 2 + i] << " ";
            }
        }
        cout << endl;
    }
}