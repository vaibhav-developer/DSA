#include <iostream>
#include <cstring>
using namespace std;
#define size 20
class heap
{
public:
    void accept()
    {
        int n;
        cout << ".. .. .. .. .. .. .. .. .. .. .. " << endl;
        cout << ": ENTER NUMBER OF STUDENTS = ";
        cin >> n;
        int a[size];
        cout << ": ENTER MARKS OF EACH STUDENTS :" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "Roll NO. " << i << " = ";
            cin >> a[i];
        }
        heapsort(a, n);
        display(a, n);
    }
    void max_heapify(int a[], int i, int n)
    {
        int temp, left, right, large;
        large = 0;
        left = 2 * i;
        right = 2 * i + 1;
        if ((left <= n) && (a[left] > a[i]))
            large = left;
        else
            large = i;
        if ((right <= n) && (a[right] > a[large]))
            large = right;
        if (large != i)
        {
            temp = a[i];
            a[i] = a[large];
            a[large] = temp;
            max_heapify(a, large, n);
        }
    }
    void heapsort(int a[], int n)
    {
        for (int k = n / 2; k >= 1; k--)
        {
            max_heapify(a, k, n);
        }
        int temp;
        for (int i = n; i >= 2; i--)
        {
            temp = a[1];
            a[1] = a[i];
            a[i] = temp;
            max_heapify(a, 1, i - 1);
        }
    }
    void display(int a[], int n)
    {
        cout << "\n MINIMUM MARKS = " << a[1];
        cout << "\n MAXIMUM MARKS = " << a[n] << endl;
    }
};
int main()
{
    heap h;
    h.accept();
    return 0;
}