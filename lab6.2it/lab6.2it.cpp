
#include <iostream>
#include <iomanip>
using namespace std;

// Введення елементів масиву
void InputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Виведення масиву в один рядок
void PrintArray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

// Обчислення суми елементів з непарними індексами
int SumOddIndices(const int a[], int n)
{
    int sum = 0;

    for (int i = 1; i < n; i += 2)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "The number of elements must be positive."
            << endl;
        return 1;
    }

    int* a = new int[n];

    InputArray(a, n);

    cout << "\nArray:" << endl;
    PrintArray(a, n);

    int result = SumOddIndices(a, n);

    cout << "Sum of elements with odd indices = "
        << result << endl;

    delete[] a;

    return 0;
}
