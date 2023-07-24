class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k==0)
        {return 0;}

            if(numOnes==0)
            {
                if(numZeros>k)
                    return 0;
                else
                    return numZeros-k;


            }


        if(numOnes==0)
        {return 0;}

        if(numOnes+numZeros<k)
        {  int s=  numOnes-(k-(numZeros+numOnes)  );
            return s;
        }

        if(numOnes>=k)
        {
            return k;
        }
        else{
               return numOnes; 

        }
    }
};
