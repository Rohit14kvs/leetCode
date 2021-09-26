#include <iostream>
using namespace std;

int lds(int input1, int input2[])
{
	int lds[input1];
	int i, j, max = 0;

	for (i = 0; i < input1; i++) {
		lds[i] = 1;
    }
	for (i = 1; i < input1; i++) {
		for (j = 0; j < i; j++) {
			if (input2[i] < input2[j] && lds[i] < lds[j] + 1)
				lds[i] = lds[j] + 1;
        }
    }
	for (i = 0; i < input1; i++) {
		if (max < lds[i]) {
			max = lds[i];
        }
    }
	return max;
}

int main()
{
	int arr[] = { 15, 27, 14, 38, 63, 55, 46, 65, 85 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Length of LDS is " << lds(n, arr)<<endl;
	return 0;
}
