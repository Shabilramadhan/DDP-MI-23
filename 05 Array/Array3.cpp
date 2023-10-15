#include <iostream>
using namespace std;

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* ukuran array dalam byte */
    int size = sizeof(array);

    /* banyaknya isi array */
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Panjang array: " << length << endl;

    return 0;
}