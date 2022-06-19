#include <iostream>
using namespace std;

int main(int argc, char** argv){

	freopen("input.txt", "r", stdin);

for(int test_case = 1; test_case <= 10; ++test_case)
	{
    	int row = 0;
        cin >> row;

        int building[row] = {0,};
        for(int i=0; i<row; i++)
            cin >> building[i];
        
        int count = 0;
        for(int i=2; i<row-1; i++){      
            int flag[256] = {0,};

            if(building[i] <= building[i-1])
                continue;
            else{
                int gap = building[i] - building[i-1];

                for(int j=0; j<gap; j++)
                     flag[building[i]-j] += 1;

            }
            if(building[i] <= building[i-2])
                continue;
            else{
                int gap = building[i] - building[i-2];

                for(int j=0; j<gap; j++)
                    flag[building[i]-j] += 1;
            }
            if(building[i] <= building[i+1])
                continue;
            else{
                int gap = building[i] - building[i+1];

                for(int j=0; j<gap; j++)
                    flag[building[i]-j] += 1;

            }
            if(building[i] <= building[i+2])
                continue;
            else{
                int gap = building[i] - building[i+2];

                for(int j=0; j<gap; j++)
                    flag[building[i]-j] += 1;

            }
            for(int j=0; j<=255; j++){
                if(flag[j] == 4)
                    count++;
            }
            
        }
        cout << "#" << test_case << " " << count << "\n";
	}   
	return 0;
}