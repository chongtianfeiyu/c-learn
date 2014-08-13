//
//  main.c
//  c_2_method
//
//  Created by zhihuanglai on 14-7-3.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

int maxValue(int a, int b)
{
    return a>b ? a : b;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("%d\n",maxValue(10,12));
    return 0;
}

