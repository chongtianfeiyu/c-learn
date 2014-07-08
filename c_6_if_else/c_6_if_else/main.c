//
//  main.c
//  c_6_if_else
//  c语言中得if else, switch，ms各个语言的，if else, switch都是一样的
//
//  Created by zhihuanglai on 14-7-3.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <stdio.h>

void testIfElse(int score) {
    if(score>=90) {
        printf("A : %d\n",score);
    } else if(score >= 80) {
        printf("B : %d\n", score);
    } else if(score >= 60) {
        printf("c : %d\n",score);
    } else {
        printf("D : %d\n",score);
    }
}

void testSwitch(int score) {
    switch (score/10) {
        case 9:
            printf("A : %d\n",score);
            break;
        case 8:
        case 7:
        case 6:
            printf("B C : %d\n",score);
            break;
        default:
            printf("D : %d\n",score);
            break;
    }
}

int main(int argc, const char * argv[])
{
    testIfElse(89);
    testSwitch(90);
    testSwitch(65);
    testSwitch(1);
    return 0;
}

