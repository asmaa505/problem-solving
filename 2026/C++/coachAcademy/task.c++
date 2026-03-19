#include <iostream>
using namespace std;

int countEven(int arr[], int size)
{

    int count = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int numbers[5] = {1, 2, 4, 7, 10};

    int result = countEven(numbers, 5);

    cout << "The number of even numbers is: " << result;

    return 0;
}
