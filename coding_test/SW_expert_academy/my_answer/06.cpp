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
        cout << "day: " << day << endl;
        
        int nums[day][2];
        for(int i=0; i<day; i++){
            for(int j=0; j<2; j++)
                nums[i][j] = 0;
        }
        int max = 0;
        for(int i=0; i<day; i++){
            cin >> nums[i][0];
            if(nums[i][0] > max){
                max = nums[i][0];
                nums[i][1] = i;
            }
        }
        for(int i=0; i<day; i++){
            for(int j=0; j<2; j++){
                cout << i << "," << j << ": " << nums[i][j] << endl;
            }
        }
        cout << endl;

        int tmp = 0;
        int sum = 0;
        int index = 0;
        for(int i=0; i<day; i++){
            if(nums[i][1] != 0){
                if(int k=i; k<day; k++){
                    if(nums[i][1] != 0){
                     index = i;
                    }

                    if(index == 0){
                        sum = 0;
                        for(int j=index; j<tmp; j++){
                            sum += nums[j][0];
                        }
                        sum = nums[i][0]*(i-index) - sum;
                    }

                    if
                }
                tmp = i;

                sum = 0;
                for(int j=index; j<tmp; j++){
                    sum += nums[j][0];
                }
                sum = nums[i][0]*(i-index) - sum;
                index = i;
            }
        }

        cout << "#" << test_case << " " << sum << endl;


	}
	return 0;
    
}