#include <iostream>
#include <string.h>
using namespace std;

int findMax(string str, int start_index, int end_index){
    int max = 0;
    int index_max = 0;
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num >= max){
            max = num;
            index_max = i;
        }
    }
    return index_max;
}

int findMin(string str, int start_index, int end_index){
    int min = 9;
    int index_min = 0;
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num <= min){
            min = num;
            index_min = i;
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
        int index_min = 0;
        int min = 9;
        string num_min = num_str;
        for(int i=len; i<0; i--){
            int num = num_min[i] - '0';
            
            if(num < min){
                min = num;
                index_min = i;
            }
        }

        for(int i=0; i<len; i++){
            if((int)num_min[index_min] == '0')
                i++;
            if((int)num_min[index_min] < (int)num_min[i]){
                char tmp = num_min[i];
                num_min[i] = num_min[index_min];
                num_min[index_min] = tmp;
                break;
            }
        }
        cout << "#" << test_case << " " << num_min << endl;
    }
    
/*
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num = 0;
        cin >> num;

        string num_str = to_string(num);
        int len = num_str.length(); 

        char tmp;
        int index_min = 0;
        string num_min = num_str;
        for(int i=0; i<len; i++){
            index_min = findMin(num_min, i, len);
            if((int)num_min[index_min] == '0' && i == 0)
                continue;
            if(index_min <= i)
                continue;
            else{
                //if num[i] is same as num[min], find different and the nearlest index
                if((int)num_min[index_min] == (int)num_min[i]){
                    for(int j=i+1; j<len; j++){
                        if((int)num_min[index_min] != (int)num_min[j]){
                            i=j;
                            break;
                        }
                    }
                }

                tmp = num_min[i];
                num_min[i] = num_min[index_min];
                num_min[index_min] = tmp;
                break;
            }
        }
        
        int index_max = 0;
        string num_max = num_str;
        for(int i=0; i<len; i++){
            index_max = findMax(num_max, i, len);
            if(index_max <= i)
                continue;
            else{
                int count = 0;
                for(int j=0; j<=i; j++){
                    count = i;
                    if(num_max[index_max] == num_max[j])
                        count++;
                }
                i = count;
                tmp = num_max[i];
                num_max[i] = num_max[index_max];
                num_max[index_max] = tmp;
                break;
            }
        }
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
    */
	return 0;
}