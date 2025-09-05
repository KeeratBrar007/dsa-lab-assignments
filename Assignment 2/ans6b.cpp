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
Sparse add(const Sparse &a, const Sparse &b)
{
    if (a.rows != b.rows || a.cols != b.cols)
    {
        cout << "Addition not possible\n";
        return {0, 0, 0, nullptr};
    }

    Sparse sum;
    sum.rows = a.rows;
    sum.cols = a.cols;
    sum.data = new Element[a.nonZero + b.nonZero];
    int i = 0, j = 0, k = 0;

    while (i < a.nonZero && j < b.nonZero)
    {
        if (a.data[i].row == b.data[j].row && a.data[i].col == b.data[j].col)
        {
            int val = a.data[i].val + b.data[j].val;
            if (val != 0)
            {
                sum.data[k++] = {a.data[i].row, a.data[i].col, val};
            }
            i++;
            j++;
        }
        else if ((a.data[i].row < b.data[j].row) ||
                 (a.data[i].row == b.data[j].row && a.data[i].col < b.data[j].col))
        {
            sum.data[k++] = a.data[i++];
        }
        else
        {
            sum.data[k++] = b.data[j++];
        }
    }

    while (i < a.nonZero)
        sum.data[k++] = a.data[i++];
    while (j < b.nonZero)
        sum.data[k++] = b.data[j++];

    sum.nonZero = k;
    return sum;
}
int main()
{
    cout << "Create Matrix A\n";
    Sparse A = createSparse();
    cout << "\nMatrix A:";
    display(A);
    cout << "\nCreate Matrix B\n";
    Sparse B = createSparse();
    cout << "\nMatrix B:";
    display(B);
    cout << "\nA + B:";
    Sparse S = add(A, B);
    display(S);
}