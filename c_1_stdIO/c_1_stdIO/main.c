//
//  main.c
//  c_1_stdIO
//
//  c的输入输出的函数说明：http://www.cplusplus.com/reference/cstdio/
//
//  Created by zhihuanglai on 14-7-3.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

void testGets()
{
    char string [256];
    printf("Insert your full address : ");
    gets(string);
    printf("your address is: %s\n",string);
}

void testScanf() {
    char str [80];
    int i;
    
    printf("Enter your name :");
    scanf("%79s",str);
    printf("Enter your age :");
    scanf("%d",&i);
    printf("Mr. %s, %d years old.\n",str,i);
}

int main(int argc, const char * argv[])
{
    testGets();
    
    testScanf();
    
    return 0;
}


