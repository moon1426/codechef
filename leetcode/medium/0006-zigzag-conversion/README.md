# Zigzag Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R

```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

```
string convert(string s, int numRows);

```

 

 **Example 1:** 

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

```

 **Example 2:** 

```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

```

 **Example 3:** 

```
Input: s = "A", numRows = 1
Output: "A"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of English letters (lower-case and upper-case), ',' and '.'.
- 1 <= numRows <= 1000

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 47.35%)  
**Memory:** 14.1 MB (beats 40.51%)  
**Submitted:** 2026-07-04T06:11:57.497Z  

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
      if (numRows == 1 || s.length() <= numRows) return s;
      vector<string> rows(numRows);
      int currentrow =0;
      bool goingDown = false;
    for (char c : s)
    {
        rows[currentrow] += c;
        if (currentrow ==0 || currentrow == numRows -1)
        {
            goingDown =!goingDown;
        }
currentrow+=goingDown ? 1 : -1;
    }
string result = "";
for (string row:rows)

{
    result += row;
}    
return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/zigzag-conversion/)