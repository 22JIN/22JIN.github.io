#include<iostream>
#include <stdio.h>
#include <cmath>
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
                sum += nums[i];
            }
        }
        cout << "#" << test_case << " " << round((float)sum/10) << endl;

	}
	return 0;
    
}