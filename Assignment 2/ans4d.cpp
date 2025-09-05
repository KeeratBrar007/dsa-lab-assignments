#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    char str[20][50];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (str[i][k] != '\0' && str[j][k] != '\0' && str[i][k] == str[j][k]) {
                k++;
            }
            if (str[i][k] > str[j][k]) {  
                char temp[50];
                int p = 0;
                while (str[i][p] != '\0') { temp[p] = str[i][p]; p++; }
                temp[p] = '\0';

                p = 0;
                while (str[j][p] != '\0') { str[i][p] = str[j][p]; p++; }
                str[i][p] = '\0';

                p = 0;
                while (temp[p] != '\0') { str[j][p] = temp[p]; p++; }
                str[j][p] = '\0';
            }
        }
    }
    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}