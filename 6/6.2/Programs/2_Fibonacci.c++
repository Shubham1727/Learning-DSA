#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 1; i <= num; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    fibonacci(n);

    return 0;
}