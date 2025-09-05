#include <iostream>
using namespace std;
struct Element
{
    int row, col, val;
};
struct Sparse
{
    int rows, cols, nonZero;
    Element *data;
};
Sparse createSparse()
{
    Sparse s;
    cout << "Enter rows, cols and number of non-zero elements: ";
    cin >> s.rows >> s.cols >> s.nonZero;
    s.data = new Element[s.nonZero];

    cout << "Enter row col value for each non-zero element:\n";
    for (int i = 0; i < s.nonZero; i++)
    {
        cin >> s.data[i].row >> s.data[i].col >> s.data[i].val;
    }
    return s;
}
void display(const Sparse &s)
{
    cout << "\nRow Col Val\n";
    for (int i = 0; i < s.nonZero; i++)
    {
        cout << s.data[i].row << "   "
             << s.data[i].col << "   "
             << s.data[i].val << "\n";
    }
}
Sparse transpose(const Sparse &s)
{
    Sparse t;
    t.rows = s.cols;
    t.cols = s.rows;
    t.nonZero = s.nonZero;
    t.data = new Element[t.nonZero];

    for (int i = 0; i < s.nonZero; i++)
    {
        t.data[i].row = s.data[i].col;
        t.data[i].col = s.data[i].row;
        t.data[i].val = s.data[i].val;
    }
    for (int i = 0; i < t.nonZero - 1; i++)
    {
        for (int j = i + 1; j < t.nonZero; j++)
        {
            if (t.data[i].row > t.data[j].row ||
                (t.data[i].row == t.data[j].row && t.data[i].col > t.data[j].col))
            {
                swap(t.data[i], t.data[j]);
            }
        }
    }
    return t;
}
int main()
{
    cout << "Create Matrix A\n";
    Sparse A = createSparse();
    cout << "\nMatrix A:";
    display(A);
    cout << "\nTranspose of A:";
    Sparse T = transpose(A);
    display(T);
    return 0;
}