#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 3, 1, 2 };
    cout << binary_search(arr, arr+3, 2) << endl;
}
