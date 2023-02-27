class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 )
        {
            return false;
        }
       int n= matrix.size();
       int m=matrix[0].size();
       int l=0;
       int h=(n*m)-1;
       while(l<=m)
       {
          int mid = (l + h) >> 1;
           if(matrix[mid/m][mid%m]==target)
           {
               return true;
           }
           if(matrix[mid/m][mid%m]<target)
           {
               l=mid+1;
           }
           else
           {
               h=mid-1;
           }
       }
       return false;
    }
};
