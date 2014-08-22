//
//  main.cpp
//  c_17_data_structure
//
//  Created by zhihuanglai on 14-8-22.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>
#include <string.h>

void deQueue() {
    //需要解密的字符串
    int q[101] = {0,6,3,1,7,5,8,9,2,4};
    
    //队首，队尾
    int head,tail;
    head = 1;
    tail = 10; //队列有9个元素了，tail指向队尾的后一个位置
    
    while (head<tail) {
        
        printf("%d ",q[head]);
        head ++;
        
        q[tail] = q[head];
        tail++;
        head++;
    }
    
    getchar();
    getchar();

}

struct queue {
    int data[100];
    int head;
    int tail;
};

void sQueue() {
    struct queue sq;
    int i;
    sq.head = 1;
    sq.tail = 1;
    
    for (i=1; i<=9; i++) {
        scanf("%d",&sq.data[sq.tail]);
        sq.tail++;
    }
    
    while (sq.head<sq.tail) {
        printf("%d",sq.data[sq.head]);
        sq.head++;
        
        sq.data[sq.tail] = sq.data[sq.head];
        sq.tail++;
        
        sq.head++;
    }
    
    getchar();
    getchar();
}

void deStack() {
    char a[101],s[101];
    int i,len,mid,next,top;
    
    gets(a); //读入一行
    len = strlen(a);
    mid = len/2 - 1;
    
    top = 0;
    for (i=0; i<=mid; i++) {
        s[++top] = a[i];
    }
    
    if (len%2 == 0) {
        next = mid + 1;
    } else {
        next = mid + 2;
    }
    
    for (i=next; i<=len - 1; i++) {
        if (a[i] != s[top] ) {
            break;
        }
        top --;
    }
    
    if (top == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    getchar();
    getchar();
}

int main(int argc, const char * argv[]) {
    
    //---------------------------------
//    deQueue(); //output 6 1 5 9 4 7 2 8 3
//    sQueue();
    deStack();
    
    return 0;
}
