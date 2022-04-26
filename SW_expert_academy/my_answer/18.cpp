#include <iostream>
using namespace std;

int* findMax(string str, int start_index, int end_index){
    int max = 0;
    int index_max[2] = {0,};
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num >= max){
            max = num;
            index_max[0] = i;
            for(int j=i; j<=0; j--){
                int num2 = str[j] - '0';
                if(num2 <= max)
                    index_max[1] = j;
            }
        }
    }
    return index_max;
}

int* findMin(string str, int start_index, int end_index){
    int min = 9;
    int index_min[2] = {0,};
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num <= min && num != 0){
            min = num;
            index_min[0] = i;
            for(int j=0; j<i; j++){
                int num2 = str[j] - '0';
                if(num2 <= min)
                    index_min[1] = j;
            }
        }
    }
    return index_min;
}

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num = 0;
        cin >> num;

        string num_str = to_string(num);
        int len = num_str.length(); 

        char tmp;
        string num_min = num_str;
        for(int i=0; i<len; i++){
            int* index = findMin(num_min, i, len);
            if(num_min[index[0]] == 0)
                continue;

            if(index[0] <= i)
                continue;
            else{
                tmp = num_min[i];
                num_min[i] = num_min[index[0]];
                num_min[index[0]] = tmp;
                break;
            }
        }
        
        string num_max = num_str;
        for(int i=0; i<len; i++){
            int* index = findMax(num_max, i, len);
            if(index[0] <= i)
                continue;
            else{
                tmp = num_max[i];
                num_max[i] = num_max[index[0]];
                num_max[index[0]] = tmp;
                break;
            }
        }
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
	return 0;
}