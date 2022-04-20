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
        int day = 0;
        cin >> day;        
        int nums[day];
        
        for(int i=0; i<day; i++)
            cin >> nums[i];
        
        int max = nums[day-1];
        int sum = 0;
        for(int i=day-2; i>=0; i--){
            if(max > nums[i])
                sum += max-nums[i];
            else if(max < nums[i])
                max = nums[i];
           // cout << "nums[" << i<< "]: " << nums[i] << ", max: " << max << ", sum: " << sum << endl;
        }
  
        cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}


/* useless due to speed (maybe)...
//find Max from index day
int findMax(int* cost, int index, int day){
    int max = 0;
    int max_index = 0;
    for(int i=index; i<day; i++){
        if(cost[i] >= max){
            max = cost[i];
            max_index = i;
        }
    }
    return max_index;
}

int main(int argc, char** argv)
{
	int test_case = 0;
	int T = 0;

	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int day = 0;
        cin >> day;        
        int nums[day];

        for(int i=0; i<day; i++)
            cin >> nums[i];
            
        int start_day = 0;
        int max_day = 0;
        int sum = 0;

        while(1){
            int benefit = 0;
            max_day = findMax(nums, start_day, day);

            //add price between start day and max day
            for(int i=start_day; i<max_day; i++)
                benefit += nums[i];
            
            benefit = nums[max_day]*(max_day-start_day) - benefit; 
            sum += benefit;
            start_day = max_day+1;

            //finish searching max day
            if(max_day == day-1 )
                break;            
        }
        cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}
*/