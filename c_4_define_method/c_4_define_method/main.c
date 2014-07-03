//
//  main.c
//  c_4_define_method
//
//  Created by zhihuanglai on 14-7-3.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

//编译期就将运算过程执行完毕，运算效率高

#define MAX(A,B) A>B?A:B

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, %d!\n",MAX(10, 20));
    printf("Hello, %f!\n",MAX(10.1, 20.2));

    return 0;
}

