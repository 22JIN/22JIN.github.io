#include <iostream>
#include <stdio.h>


using namespace std;

//find Max from index day
int findMax(int* cost, int index, int day){
    int max = 0;
    int max_index = 0;
    for(int i=index; i<day; i++){
        if(cost[i] > max){
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
        cout << "day: " << day << endl;
        
        int nums[day];

        for(int i=0; i<day; i++)
            cin >> nums[i];
            
        int max_day = 0;
        int max_day1 = 0;
        
        int sum = 0;
        int count = 0;
        while(1){
            count ++;
            if(count == 10)
                break;

            int benefit = 0;
            max_day1 = findMax(nums, max_day, day);
            cout << "maxday1: " << max_day1 << ",maxday: " << max_day << endl;
            
            if(max_day == max_day1 )
                break;
            
            for(int i=0; i<(day-max_day1); i++){
                benefit =+ nums[i];
            }
            cout << "benefit: " << benefit << endl;
            benefit = nums[max_day1]*(max_day1-max_day-1) - benefit; 
            sum =+ benefit;

            if(max_day1 == day-1 )
                break;
            
            
        }

        cout << "#" << test_case << " " << sum << endl;


	}
	return 0;
    
}