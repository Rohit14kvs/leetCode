#include<iostream>
#include<vector> 
using namespace std;


void startingpoint(int input1, int input2[]) {
    for (int i = 1; i <= input1; ++i) {
	    	for (int j = 1; j < i; ++j) {
	    		if(i % j == 0)
	    		{
	    			input2[i-1] -= input2[j-1];
	    		}
	    	}
	    }
	for (int i=0; i < input1; i++) cout<<input2[i]<<" ";
}

int main() {
    int arr[] = {1,2,3};
    startingpoint(3, arr);
    return 0;
}