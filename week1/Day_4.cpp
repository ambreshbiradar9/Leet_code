/*Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
 

Constraints:

The given integer num is guaranteed to fit within the range of a 32-bit signed integer.
num >= 1
You could assume no leading zero bit in the integer’s binary representation.
This question is the same as 1009: https://leetcode.com/problems/complement-of-base-10-integer/
*/

class Solution {
public:
    int findComplement(int num) {
            vector<int> arr;
        int c;
        for (int i=0;num>0;i++)
        {
            c=num %2;
            arr.push_back(c);
            num=num/2;
            //cout<<arr[i];
        }
        int n=arr.size();
       // cout<<'\n';
        
        int sum=0;
        int p=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=1;
            }
            
            sum+=((arr[i])*p);
            if(i!=n-1)
            {
                p=p*2;
            }
        }
        return sum;
    }
};