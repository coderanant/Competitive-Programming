class Solution {
public:
    int fib(int N) {
        int a = 0, b = 1;
        if(N == 0)
            return 0;
        else if(N == 1)
            return 1;
        for(int i = 2; i <= N; i++)
        {
            b = a + b;
            a = b - a;
        }
        return b;
    }
};