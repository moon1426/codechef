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