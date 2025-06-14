class Solution {
public:
//string v="";
//int c=0;
  //   void permutate(string s,int l,int r,int k)
    //{
    //  if(l==r)
      //  {
        //    c++;
          //  if(c==k)
        //{
          //  v=s;
        //}
        //return ;
    //}
      //  for(int i=l;i<r;i++)
        //{
          //  swap(s[l],s[i]);
            //permutate(s,l+1,r,k);
            //swap(s[i],s[l]);
        //}
    //}
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++)
        {
            s+=(i+'0');
        }
        for (int i = 1; i < k; i++) {
            next_permutation(s.begin(), s.end());
        }
        
        return s;
    }
};