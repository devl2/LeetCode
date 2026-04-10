class Solution {
public:
    int romanNum(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;

        return 0;
    }

    int romanToInt(string s) {
        int res = 0;

        for (int i = 0; i < s.size(); i++){
            int curr = romanNum(s[i]);
            int next = romanNum(s[i+1]);

            if(curr < next){
                res -= curr;
            } else{
                res += curr;
            }
        }

        return res;
    }
};
