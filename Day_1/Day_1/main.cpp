//
//  main.cpp
//  Day_1
//
//  Created by AADARSH RAJ on 03/05/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

class Solution {
public:
    int firstBadVersion(int n) {
       long long low=1,high=n,mid,result=n;
        //mid=n+1/2;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(isBadVersion(mid))
            {
                result=mid;
                high=mid-1;
            }
            else
                low=mid+1;
 
        }
        return result;
        
    }
};
