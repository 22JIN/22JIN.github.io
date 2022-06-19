#include <iostream>
using namespace std;

int main(int argc, char** argv){

	freopen("input.txt", "r", stdin);

for(int test_case = 1; test_case <= 10; ++test_case)
	{
    	int change = 0;
        cin >> change;

        int box[100] = {0,};
        for(int i=0; i<100; i++)
            cin >> box[i];

        int gap = 0;
        int max_index=0, min_index=0;
        int max = 1, min = 100;
        for(int j=0; j<=change+1; j++){
        
            gap = max - min;
            if(gap == 0 or gap == 1){
                break;
            }

            //find max and min
            max = 1, min = 100;
            for(int i=0; i<100; i++){
                if(box[i] >= max){
                    max = box[i];
                    max_index = i;
                }

                if(box[i] <= min){
                    min = box[i];
                    min_index = i;
                }
            }
            box[max_index]--;
            box[min_index]++;
        }
        cout << "#" << test_case << " " << gap << "\n";
	}   
	return 0;
}