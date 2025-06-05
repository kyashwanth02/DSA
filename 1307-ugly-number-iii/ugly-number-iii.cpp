class Solution {
public:
    long long lcm(long long a,long long b)
    {
        return (a*b)/__gcd(a,b);
    }
    long long count(long long n,long long a,long long b,long long c)
    {
        long long ab=lcm(a,b);
        long long ac=lcm(a,c);
        long long bc=lcm(b,c);
        long long abc=lcm(a,bc);
        return n / a + n / b + n / c - n / ab - n / bc - n / ac + n / abc;    
    }
    long long nthUglyNumber(long long n, long long a, long long b, long long c) {
        long long l=1;
        long long h=2e9;
        while(l<=h)
        {
            long long mid=(l+h)/2 ;
            if(count(mid,a,b,c)<n)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
            
        }
        return l;
    }
};