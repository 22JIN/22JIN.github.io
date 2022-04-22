#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int nums[10] = {0,};
        
        for(int i=0; i<10; i++)
            cin >> nums[i];

        int max = 0;
        int min = 10000;
        int sum = 0;
        int count = 0;

        for(int i=0; i<10; i++){
            if(nums[i] >= max)
                max = nums[i];
            if(nums[i] <= min)
                min = nums[i];
        }
        for(int i=0; i<10; i++){
            if(nums[i]!=max && nums[i]!=min){
                sum += nums[i];
                count++;
            }
        }
        cout << "#" << test_case << " " << round((float)sum/count) << endl;
	}
	return 0;
}