
#include <iostream>

/** binary_search function
 * \param [in] a array to sort
 * \param [in] r right hand limit = \f$n-1\f$
 * \param [in] key value to find
 * \returns index if T is found
 * \return -1 if T is not found
 */
int binary_search(int a[], int r, int key) {
    int l = 0;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (key == a[m])
            return m;
        else if (key < a[m])
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

/** main function */
int main(int argc, char const* argv[]) {
    int n, key;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    std::cout << "Enter the4 array elements: ";

    int* a = new int[n];

    // this loop use for store value in Array
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << "Enter search key: ";
    std::cin >> key;

    // this is use for find value in given array
    int res = binary_search(a, n - 1, key);
    if (res != -1)
        std::cout << key << " Found at index " << res << std::endl;
    else
        std::cout << key << "Sorry not found" << std::endl;

    delete[] a;
    return 0;
}