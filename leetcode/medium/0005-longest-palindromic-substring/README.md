# Longest Palindromic Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return  *the longest*   *palindromic*   *substring*  in `s`.

 

 **Example 1:** 

```
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

```

 **Example 2:** 

```
Input: s = "cbbd"
Output: "bb"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consist of only digits and English letters.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 86.55%)  
**Memory:** 9.2 MB (beats 92.38%)  
**Submitted:** 2026-07-02T09:57:29.148Z  

```cpp
class Solution {
public:
        std::string longestPalindrome(std::string s)
        {

    
        if(s.empty()) return "";
        int start =0, maxLength =0 ;
        auto expand =[&](int left , int right)
{ while(left >=0 && right <s.length() && s[left]== s[right])

{
    left--;
    right++;
}
int len = right-left-1;

if( len> maxLength)
{maxLength = len;
start =left+1;}
};
    
        
    
for (int i=0;i<s.length(); i++)
{expand(i, i);
expand(i,i+1);
}
return s.substr(start, maxLength);
}
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)