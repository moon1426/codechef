# Container With Most Water

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return  *the maximum amount of water a container can store*.

 **Notice**  that you may not slant the container.

 

 **Example 1:** 

```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

```

 **Example 2:** 

```
Input: height = [1,1]
Output: 1

```

 

 **Constraints:** 

- n == height.length
- 2 <= n <= 105
- 0 <= height[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 63 MB (beats 10.94%)  
**Submitted:** 2026-07-11T03:13:10.214Z  

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right=height.size()-1;
        int maxwater=0;
        while(left<right)
        {
            int width = right-left;
            int currentheight=min(height[left],height[right]);
            int currentwater=width*currentheight;
            maxwater=max(maxwater,currentwater);
            //
            if (height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }

            }
            return maxwater;
        }
        
    
};
```

---

[View on LeetCode](https://leetcode.com/problems/container-with-most-water/)