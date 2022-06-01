#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int test_case = 0;
	int T = 0;

	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int nums[10];
        int max = 0;
        for(int i=0; i<10; i++){
            cin >> nums[i];
            if(nums[i]>max)
                max = nums[i];
        }   
        cout << "#" << test_case << " " << max << endl;

	}
	return 0;
    
}