//
//  main.cpp
//  c_17_data_structure
//
//  Created by zhihuanglai on 14-8-22.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

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
    
    
    return 0;
}
