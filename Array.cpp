#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    int target;
    int count = 0;
    int first_occurrence = -1;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int first = 0;
    int last = size - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (array[mid] == target)
        {
            first_occurrence = mid;
            count++;
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    if (first_occurrence != -1)
    {
        cout << "First occurrence of the target value is at index: " << first_occurrence << endl;
        cout << "Number of occurrences of the target value is: " << count << endl;
    }
    else
    {
        cout << "Target value not found in the array" << endl;
    }

    return 0;
}
