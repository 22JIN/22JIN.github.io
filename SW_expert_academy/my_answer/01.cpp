#include<iostream>
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
        int sum = 0;
        for(int i=0; i<10; i++){
            cin >> nums[i];
            if(0<nums[i]<=10000){
                //if num is odd
                if(nums[i]%2 == 1)
                    sum += nums[i];
            }
        }
        cout << "#" << test_case << " " << sum << endl;

	}
	return 0;
    
}