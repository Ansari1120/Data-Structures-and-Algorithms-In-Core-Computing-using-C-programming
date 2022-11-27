
#include <iostream>
using namespace std;
int findElement(int arr[], int n,
				int key);
int deleteElement(int arr[], int n,
				int key)
{
	int pos = findElement(arr, n, key);

	if (pos == - 1)
	{
		cout << "Element not found";
		return n;
	}

	// Deleting element
	int i;
	for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];

	return n - 1;
}

// Function to implement search operation
int findElement(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;

	return - 1;
}

// Driver code
int main()
{
	int i;
	int arr[] = {10, 50, 30, 40, 20};

	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 10;

	cout << "Array before deletion\n";
	for (i = 0; i < n; i++)
	cout << arr[i] <<" " ;

	n = deleteElement(arr, n, key);

	cout << "\n\nArray after deletion\n";
	for (i = 0; i < n; i++)
	cout << arr[i] << " ";

	return 0;
}



