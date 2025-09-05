#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;
    int size = 3*n - 2;
    int A[size];
    for(int i=0;i<size;i++){
        A[i] = 0;
    }
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int x; cin >> x;
            if(i-j==1) {
                A[i-1] = x;
            }
            else if(i==j) {
                A[n-1+i] = x;
            }
            else if(j-i==1) {
                A[2*n-1+i] = x;
            }
        }
    }
    cout << "Tri-diagonal Matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i-j==1) cout << A[i-1] << " ";
            else if(i==j) cout << A[n-1+i] << " ";
            else if(j-i==1) cout << A[2*n-1+i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}