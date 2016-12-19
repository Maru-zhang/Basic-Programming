//
//  main.cpp
//  BasicSort
//
//  Created by Maru on 2016/12/19.
//  Copyright © 2016年 Maru. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


int n[] = {11,2,7,6,8,4,5,1,15,85};
vector<int> dataSource(n,n+10);

class Solution {
    
    public:
    void quickSort(vector<int> &v,int left,int right) {
       
        if(left < right){
            int key = v[left];
            int low = left;
            int high = right;
            
            while(low < high){
                while(low < high && v[high] > key){
                    high--;
                }
                v[low] = v[high];
                while(low < high && v[low] < key){
                    low++;
                }
                v[high] = v[low];
            }
            
            v[low] = key;
            quickSort(v,left,low-1);
            quickSort(v,low+1,right);
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int size = (int)dataSource.size();
    
    Solution a;
    
    a.quickSort(dataSource, 0, 9);
    
    for (int i = 0; i < size; i++) {
        cout << dataSource[i] << "\n";
    }
    
    return 0;
}
