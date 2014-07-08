//
//  main.c
//  c_9_struct_point
//
//  多个变量操作内存，c语言如何做到:
//  c语言的指针，malloc分配内存，feed释放内存
//
//
//  Created by zhihuanglai on 14-7-4.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Person {
    int age;
};

int main(int argc, const char * argv[])
{
    //malloc分配内存
    struct Person * p = malloc(sizeof(struct Person));
    //使用->来赋值
    p->age = 10;
    
    printf("p age %d\n",p->age);
    
    //定义第二个结构体指针
    struct Person * p1 = p;
    
    printf("p1 age %d\n",p1->age);
    
    //p的值修改了，p1的值也跟着修改，原理，是指针指向的内存地址都一样，内存地址对应的值修改了，对应的struct指针的值也修改了
    p->age = 11;
    
    printf("p age %d\n",p->age);
    printf("p1 age %d\n",p1->age);
    
    //必须使用free释放malloc分配的内存空间
    free(p);
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

