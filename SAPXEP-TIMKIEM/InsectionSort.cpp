#include <iostream>
using namespace std;

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]:";
        cin >> arr[i];
    }
}
void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]:" << arr[i] << "    ";
    }
}
void InsertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n, arr[100];
    cout << "Nhap so luong mang:";
    cin >> n;
    nhapmang(arr, n);
    InsertionSort(arr, n);
    xuatmang(arr, n);
}