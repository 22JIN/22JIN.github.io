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
        string num_min = num_str;
        int i=0;

        index_min = findMin(num_min, i, len);
        cout << "i: " << i << ", index_min: " << index_min << endl;
        int start = 0;
        if((int)num_min[index_min] == '0')
            start = 1;
        for(int j=start; j<index_min; j++){
            cout << "j: " << j << ", num[index_min]: " << num_min[index_min] << ", num[j]: " << num_min[j]  << endl;
            if((int)num_min[index_min] < (int)num_min[j]){
                i=j;
                break;
            }
            i=index_min;
        }

         tmp = num_min[i];
        num_min[i] = num_min[index_min];
        num_min[index_min] = tmp;

        int index_max = 0;
        string num_max = num_str;
        i = 0;
        index_max = findMax(num_max, i, len);
                
        for(int j=0; j<=index_max; j++){
            if((int)num_max[index_max] > (int)num_max[j]){
                i=j;
                break;
            }
            i=index_max;
        }        
        tmp = num_max[i];
        num_max[i] = num_max[index_max];
        num_max[index_max] = tmp;
        
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
    
	return 0;
}


/*
        for(int i=0; i<len; i++){
            index_min = findMin(num_min, i, len);
            //cout << "i: " << i << ", index_min: " << index_min << endl;
            if((int)num_min[index_min] == '0' && i == 0)
                continue;
            if(index_min <= i)
                continue;
            else{
                int start = 0;
                if((int)num_min[index_min] == '0')
                    start = 1;
                for(int j=start; j<len-1; j++){
                    //cout << "j: " << j << ", num[index_min]: " << num_min[index_min] << ", num[j]: " << num_min[j]  << endl;
                    if((int)num_min[index_min] < (int)num_min[j]){
                        i=j;
                        break;
                    }
                }

                tmp = num_min[i];
                num_min[i] = num_min[index_min];
                num_min[index_min] = tmp;
                break;
            }
        }
        */
