#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int class_need = 0;
        cin >> class_need;

        int class_week[7] = {0,};
        int first_day = -1;
        int class_day = 0;
        for(int i=0; i<7; i++){
            cin >> class_week[i];

            if(class_week[i]==1)
                class_day++;
        }

        int start_day[class_day] = {0,};
        int count = 0;
        for(int j=0; j<7; j++){
            if(class_week[j] == 1){
                start_day[count] = j;
                count++;
            }
        }

        int attend_need = 0;
        int attend_need_min = 700000;

        for(int j=0; j<class_day; j++){
            attend_need = 0;
            count = 0;
            int day = start_day[j];
                
            while(1){
                attend_need++;
                if(class_week[day] == 1)
                    count ++;

                if(count == class_need)
                    break;
                if(day == 6)
                    day = 0;
                else
                    day++;
            }
            
            if(attend_need < class_need)
                continue;
            if(attend_need <= attend_need_min)
                attend_need_min = attend_need;
        }
        cout << "#" << test_case << " " << attend_need_min << endl;
	}   
	return 0;
}