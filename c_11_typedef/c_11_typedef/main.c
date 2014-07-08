//
//  main.c
//  c_11_typedef
//
//  Created by zhihuanglai on 14-7-4.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

//定义一个struct
typedef struct {
    int age;
}Person;

void sayHello() {
    printf("hi c\n");
}

//定义一个函数指针
typedef void (*Func)();

int main(int argc, const char * argv[])
{
    Person p;
    p.age = 10;
    
    Func f = sayHello;
    f();
    
    // insert code here...
    return 0;
}

