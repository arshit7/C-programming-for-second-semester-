#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> A(4, 0);
    vector<int> B(3, 1);

    A.resize(8, 2);

    for (int i = 0; i < B.size(); i++)
    {
        A[i] = B[i] + 2;
    }

    A = B;

    // Print final vector A
    cout << "Final elements of A: ";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}