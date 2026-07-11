class Solution {
public:
    string intToRoman(int num) {
        vector<string> symbols ={"m","cm","d","cd","c","xc","l","xl","x","ix","v","iv","i"};
        vector<int>values ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string result ="";
        for (int i=0;i<values.size(); i++)
        {
            while (num>= values[i])
            {
                result += symbols[i];
            num -= values[i];
            }
        }
        return result;      
    }
};