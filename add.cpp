//  Addition-of-two-user-define-array-
// A C++ program that dynamically allocates memory for two user-defined arrays, adds their corresponding elements, and displays the result. It demonstrates pointers, loops, input validation, and dynamic memory management.
#include<iostream>
using namespace std;

int main()
{
    int i, n , *arr , *arr1 , *arr2;

    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> n;

    if( n <= 0 )
    {
        cout<<"Sorry! invalid input"<<endl;
        return 1;
    }
    // Insert elements of first array
    else
    {
        arr = new int[n];
        arr1 = new int[n];
        arr2 = new int[n];
        cout << "Enter the first array element: "<<endl;
        for(i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" of the first array";
            cin >> arr1[i];
        }

        // Insert elements of second array

        for(i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" of the second array";
            cin >> arr2[i];
        }
        //addition of two array elements
        for(i = 0; i < n; i++)
        {
            arr[i] = arr1[i]+arr2[i];
        }

        // Display merged array
        cout << "Addition of two array is: ";

        for(i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        delete[] arr;
        delete[] arr1;
        delete[] arr2;
    }

    return 0;
}
