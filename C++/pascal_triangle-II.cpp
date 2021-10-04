#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> r;
        vector<int> v;

        for(int i = 0; i<=rowIndex; i++){
            v.clear();
            
            for(int j = 0 ; j<= i; j++){
                if(i == j || j == 0){
                    v.push_back(1);
                }else{
                    v.push_back(r[i-1][j-1]+r[i-1][j]);
                }
            }
            
            r.push_back(data);
        }
        return data;
    }
};

