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
Sparse multiply(const Sparse &a, const Sparse &b)
{
    if (a.cols != b.rows)
    {
        cout << "Multiplication not possible\n";
        return {0, 0, 0, nullptr};
    }

    Sparse prod;
    prod.rows = a.rows;
    prod.cols = b.cols;
    prod.data = new Element[a.nonZero * b.nonZero];
    int k = 0;

    for (int i = 0; i < a.nonZero; i++)
    {
        for (int j = 0; j < b.nonZero; j++)
        {
            if (a.data[i].col == b.data[j].row)
            {
                int r = a.data[i].row;
                int c = b.data[j].col;
                int v = a.data[i].val * b.data[j].val;
                int found = -1;
                for (int x = 0; x < k; x++)
                {
                    if (prod.data[x].row == r && prod.data[x].col == c)
                    {
                        found = x;
                        break;
                    }
                }

                if (found != -1)
                    prod.data[found].val += v;
                else
                    prod.data[k++] = {r, c, v};
            }
        }
    }
    prod.nonZero = k;
    return prod;
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
    cout << "\nA * B:";
    Sparse M = multiply(A, B);
    display(M);
}