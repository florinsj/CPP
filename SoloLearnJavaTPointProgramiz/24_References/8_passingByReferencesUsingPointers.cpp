// programiz.com
#include <iostream>
using namespace std;

void swap(int *, int *); // function prototype with pointer as parameters

int main()
{
    int a = 1;
    int b = 2;
    cout << "Before swapping a=" << a << " , b= " << b << endl;
    swap(&a, &b);
    cout << " After swapping a=" << a << " , b= " << b << endl;
    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}