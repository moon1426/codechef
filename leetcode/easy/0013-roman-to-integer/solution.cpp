class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int > romanval=
        {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
               {'C',100},
                  {'D',500},
                     {'M',1000},
        };
        int total =0;
        int n=s.length();
        for(int i=0; i<n;i++)
        {
            if (i+1<n && romanval[s[i]]<romanval[s[i+1]])
            { total -= romanval[s[i]];
            }
            //otherwisw
    else{
        total += romanval[s[i]];

    }    
    }
    return total;
    }
};
       

       
       
    