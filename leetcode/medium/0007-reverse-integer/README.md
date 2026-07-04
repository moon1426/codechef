# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 38.13%)  
**Memory:** 8.6 MB (beats 54.37%)  
**Submitted:** 2026-07-05T06:47:28.165Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        long reversed= 0;
        while (x !=0)
{ int paw=x%10;
reversed=(reversed*10)+ paw;
x/=10;
}
if (reversed> INT_MAX || reversed< INT_MIN)
{return 0;
}
return (int)reversed;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)