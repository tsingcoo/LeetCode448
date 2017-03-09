//
// Created by 王青龙 on 2017/3/8.
//

#include <iostream>
#include "solution.h"

std::vector<int> Solution::findDisappearedNumbers(std::vector<int> &nums) {
    
    for (auto &n:nums) {
//        n = n > 0 ? n : -n;//这种写法会把原先变负的数值变正
//        int m = n-1;
        int m = abs(n) - 1;
        nums[m] = nums[m] > 0 ? -nums[m] : nums[m];
    }

    std::vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            res.push_back(i + 1);
        }
    }
    return res;
}
