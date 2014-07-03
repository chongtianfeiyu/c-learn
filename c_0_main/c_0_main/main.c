//
//  c语言程序入口，main.c
//  c_0
//
//  Created by zhihuanglai on 14-7-3.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

//argc 命令行输入的参数大小
//argv 命令行输入的参数数组
int main(int argc, const char * argv[])
{
    
    for(int i=0; i<argc; i++) {
        printf("%s\n",argv[i]);
    }
    
    // insert code here...
    printf("Hello, C!\n");
    
    //程序退出的错误的代码
    return 0;
}

