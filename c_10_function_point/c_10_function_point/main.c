//
//  main.c
//  c_10_function_point
//
//  Created by zhihuanglai on 14-7-4.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

void sayHiPoint() {
    printf("hi point\n");
}

int main(int argc, const char * argv[])
{
    //传统的调用指针的方法
    sayHiPoint();
    
    //定义函数指针，没有malloc的操作，故没有free的操作
    void(*p)();
    
    //将函数指针，指向定义的方法,
    p=sayHiPoint;
    
    //执行方法
    p();
    
    return 0;
}

