//
//  main.cpp
//  c_16_sort
//
//  Created by zhihuanglai on 14-8-18.
//  Copyright (c) 2014年 kojavaee. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int book[1001],i,j,t,n;
    
    for (i=0; i<=1000; i++) {
        book[i] = 0;
    }
    
    scanf("%d",&n);
    
    for (i=1; i<=n; i++) {
        scanf("%d",&t);
        book[t]++;
    }
    
    for (i=1000; i>=0; i--) {
        for (j=1; j<=book[i]; j++) {
            printf("%d ",i);
        }
    }
    
    getchar();
    getchar();

    return 0;
}

