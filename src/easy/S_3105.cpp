#include "S_3105.h"

 //{
 //    if (nums.empty()) return 0;
 //
 //    int increasing = 1;
 //    int decreasing = 1;
 //    int i = 1;
 //
 //    while (i < nums.size())
 //    {
 //        int counter = 1;
 //
 //        while (i < nums.size() && nums[i] > nums[i - 1])
 //        {
 //            counter++;
 //            i++;
 //        }
 //        if (counter > increasing)
 //            increasing = counter;
 //
 //        counter = 1;
 //
 //        while (i < nums.size() && nums[i] < nums[i - 1])
 //        {
 //            counter++;
 //            i++;
 //        }
 //        if (counter > decreasing)
 //            decreasing = counter;
 //
 //        while (i < nums.size() && nums[i] == nums[i - 1])
 //        {
 //            i++;
 //        }
 //    }
 //
 //    return max(increasing, decreasing);
 //   }