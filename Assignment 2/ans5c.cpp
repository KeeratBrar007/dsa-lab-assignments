#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of lower triangular matrix: ";
    cin >> n;
    int size = n*(n+1)/2;
    int A[size];
    for(int i=0;i<size;i++){
        A[i]=0;
    }
    cout << "Enter elements: \n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            int x; cin >> x;
            int index = i*(i+1)/2 + j;
            A[index] = x;
        }
    }
    cout << "Lower Triangular Matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>=j) {
                int index = i*(i+1)/2 + j;
                cout << A[index] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}