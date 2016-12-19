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


int n[] = {11,2,2,6,8,4,5,1,15,85};
vector<int> dataSource(n,n+10);

class Solution {
    
    public:
    void quickSort(vector<int> &v,int left,int right) {
        
        
        if (left < right) {
            
            int i = left,j = right;
            int temp = v[left];
            
            while (i != j) {
                
                while (v[j] >= temp && i < j) {
                    --j;
                }
                v[i] = v[j];
                
                while (v[i] <= temp && i < j) {
                    ++i;
                }
                v[j] = v[i];
                
            }
            
            v[i] = temp;
            quickSort(v, left, i-1);
            quickSort(v, i+1, right);
        }

    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int size = (int)dataSource.size();
    
    Solution a;
    
    vector<int> cp(dataSource);
    
    a.quickSort(cp, 0, 9);
    
    for (int i = 0; i < size; i++) {
        cout << cp[i] << "\n";
    }
    
    for (int i = 0; i < size; i++) {
        cout << dataSource[i] << "\n";
    }
    
    return 0;
}
