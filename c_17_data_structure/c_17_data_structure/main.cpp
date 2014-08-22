//
//  main.cpp
//  c_17_data_structure
//
//  Created by zhihuanglai on 14-8-22.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

struct queue {
    int data[100];
    int head;
    int tail;
};

int main(int argc, const char * argv[]) {
    
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
    
    //---------------------------------
    
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
    
    return 0;
}
