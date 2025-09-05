#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of diagonal matrix: ";
    cin >> n;

    int A[n];
    for(int i=0;i<n;i++){
        A[i]=0;
    }
    cout << "Enter diagonal elements:\n";
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    cout << "Diagonal Matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j){
                cout << A[i] << " ";
            }
            else{ 
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}