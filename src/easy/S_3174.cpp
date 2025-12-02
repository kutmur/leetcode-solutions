#include "S_3174.h"

//{
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        char temp = s[i];
//        int ascii = int(temp);
//
//        if (ascii > 47 && ascii < 58)
//        {
//            s.erase(s.begin() + i);
//            i--;
//            int count = i;
//
//            while (count >= 0)
//            {
//                temp = s[count];
//                ascii = int(temp);
//
//                if (ascii > 96 && ascii < 123)
//                {
//                    s.erase(s.begin() + count);
//                    i--;
//                    break;
//                }
//                count--;
//            }
//        }
//    }
//    return s;
//    }