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