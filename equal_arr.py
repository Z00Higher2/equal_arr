def arrays_equal(arr1, arr2):
    # Check if the lengths of the arrays are different
    if len(arr1) != len(arr2):
        # If the lengths are different, arrays are not equal
        return False

    # Iterate through each element of the arrays
    for i in range(len(arr1)):
        # Check if the corresponding elements are different
        if arr1[i] != arr2[i]:
            # If elements are different, arrays are not equal
            return False

    # If lengths and elements of the arrays are the same, they are equal
    return True

def main():
    # Define and initialize the first array (a)
    a = [1, 2, 3]

    # Define and initialize the second array (b)
    b = [1, 2, 3]

    # Call the arrays_equal function and output the result
    print("Are the arrays equal?", arrays_equal(a, b))

if __name__ == "__main__":
    main()
