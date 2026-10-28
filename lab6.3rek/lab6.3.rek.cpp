#include <iostream>
using namespace std;

// Прототип звичайної функції
int Count(int* a, const int size, int i);

// Прототип шаблонної функції
template <typename T>
int Count(T* a, const int size, int i);

int main()
{
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Виклик звичайної функції
    int k1 = Count(a, n, 0);
    cout << "Count(a, n, 0) [standart int] = " << k1 << endl;

    // Виклик шаблонної функції для типу int
    int k2 = Count<int>(a, n, 0);
    cout << "Count(a, n, 0) [shablonne int] = " << k2 << endl;

    // Масив типів long для демонстрації шаблонної функції
    long b[n] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 101 };
    int k3 = Count(b, n, 0);
    cout << "Count(b, n, 0) [shablonne long] = " << k3 << endl;

    return 0;
}

// Звичайна рекурсивна функція
int Count(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] % 2 == 0)
            return 1 + Count(a, size, i + 1);
        else
            return Count(a, size, i + 1);
    }
    else
        return 0;
}

// Шаблонна рекурсивна функція
template <typename T>
int Count(T* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] % 2 == 0)
            return 1 + Count(a, size, i + 1);
        else
            return Count(a, size, i + 1);
    }
    else
        return 0;
}