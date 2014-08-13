//
//  main.c
//  c_8_struct
//  c语言的结构体，可以看作是java的类，和java的类有相同用途
//  Created by zhihuanglai on 14-7-4.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

struct People {
    int age;
    char *name;
};

int main(int argc, const char * argv[])
{
    struct People p;
    p.age = 10;
    p.name = "KO";
    
    printf("p age: %d\n",p.age);
    
    //结构体的附值，p -> p1 是经过内存copy，p p1的值修改后不会相互影响
    struct People p1 = p;
    
    printf("p1 age : %d\n",p1.age);
    
    p1.age = 11;
    
    printf("update p1 age : %d \n",p1.age);
    printf("p age : %d \n",p.age);
    
    return 0;
}

