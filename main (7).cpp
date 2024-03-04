// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Function to check if two arrays are equal
// Parameters:
//   a: First array
//   a_size: Size of the first array
//   b: Second array
//   b_size: Size of the second array
// Returns:
//   true if arrays are equal, false otherwise

#include <iostream>

using namespace std;

bool equals(int a[], int a_size, int b[], int b_size) {
    // Check if the sizes of the arrays are different
    if (a_size != b_size) {
        // If the sizes are different, arrays are not equal
        return false;
    }

    // Iterate through each element of the arrays
    for (int i = 0; i < a_size; i++) {
        // Check if the corresponding elements are different
        if (a[i] != b[i]) {
            // If elements are different, arrays are not equal
            return false;
        }
    }

    // If sizes and elements of the arrays are the same, they are equal
    return true;
}

int main() {
    // Define and initialize the first array (a)
    int a[] = {1, 2, 3};
    // Specify the size of the first array
    int a_size = 3;

    // Define and initialize the second array (b)
    int b[] = {1, 2, 3};
    // Specify the size of the second array
    int b_size = 3;

    // Call the equals function and output the result
    cout << "Are the arrays equal? " << equals(a, a_size, b, b_size) << endl;

    return 0;
}

