class Solution {
public:
    bool judgeCircle(string moves) {
        int l= 0,r= 0,u= 0,d = 0;
        for( int i=0; i<moves.length(); i++){
            if(moves[i] == 'L')
                l++;
            if(moves[i] == 'U')
                u++;
            if(moves[i] == 'R')
                r++;
            if(moves[i] == 'D')
                d++;
        }
        if ((l-r) == 0 && (u-d) == 0){
            return true;
        }
        return false;
    }
};

// Time Complexiyu : 0(n)
// Space Complexity: 0(1)
