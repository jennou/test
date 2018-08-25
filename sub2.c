//
//  sub2.c
//  project7
//
//  Created by branny on 2018/6/8.
//  Copyright © 2018年 branny. All rights reserved.
//

#include <stdlib.h>
void person(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("資工1A\n");
            break;
        case 2:
            printf("資工1Ｂ\n");
            break;
        case 3:
            printf("資工2Ａ\n");
            break;
        case 4:
            printf("資工2B\n");
            break;
        case 5:
            printf("資工3A\n");
            break;
        case 6:
            printf("資工3B\n");
            break;
        case 7:
            printf("資工4A\n");
            break;
        case 8:
            printf("資工4B\n");
            break;
    }
    int b;
    b=(rand()%10000000)+1000000;
    printf("學號：10");
    printf("%d\n",b);
    int c,d,e;
    printf("身高/體重：\n");
    scanf("%d %d",&c,&d);
    printf("電話：\n");
    scanf("%d",&e);
}
void score(int *c0,int *c1,int *c2,int *c3,int *j0,int *j1,int *j2,int *j3,int *d0,int *d1,int *d2,int *d3,int *e0,int *e1,int *e2,int *e3){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("C語言\n");
            *c0=(rand()%100)+1;;
            printf("平時成績：%d\n",*c0);
            *c1=(rand()%100)+1;
            printf("期中成績：%d\n",*c1);
            printf("期末成績：");
            scanf("%d",*&c2);
            *c3=(int)(0.3 * *c0+0.3 * *c1+0.4 * *c2);
            printf("總成績：%d\n",*c3);
            break;
        case 2:
            printf("Java程式\n");
            *j0=(rand()%100)+1;;
            printf("平時成績：%d\n",*j0);
            *j1=(rand()%100)+1;
            printf("期中成績：%d\n",*j1);
            printf("期末成績：");
            scanf("%d",*&j2);
            *j3=(int)(0.3 * *j0+0.3 * *j1+0.4 * *j2);
            printf("總成績：%d\n",*j3);
            break;
        case 3:
            printf("計概\n");
            *d0=(rand()%100)+1;;
            printf("平時成績：%d\n",*d0);
            *d1=(rand()%100)+1;
            printf("期中成績：%d\n",*d1);
            printf("期末成績：");
            scanf("%d",*&d2);
            *d3=(int)(0.3 * *d0+0.3 * *d1+0.4 * *d2);
            printf("總成績：%d\n",*d3);
            break;
        case 4:
            printf("英文\n");
            *e0=(rand()%100)+1;;
            printf("平時成績：%d\n",*e0);
            *e1=(rand()%100)+1;
            printf("期中成績：%d\n",*e1);
            printf("期末成績：");
            scanf("%d",*&e2);
            *e3=(int)(0.3 * *e0+0.3 * *e1+0.4 * *e2);
            printf("總成績：%d\n",*e3);
            break;
    }
    
}
void sort(int *c0,int *c1,int *c2,int *c3,int *j0,int *j1,int *j2,int *j3,int *d0,int *d1,int *d2,int *d3,int *e0,int *e1,int *e2,int *e3){
    int a[4]={*c3,*j3,*d3,*e3};
    int i,j,t;
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            if(a[j]<a[i]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("各科總成績排序:");
    for(i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int max=0;
    int min=100;
    int b[4]={*c1,*j1,*d1,*e1};
    for(i=0;i<4;i++){
        if(b[i]>max)
            max=b[i];
        if(b[i]<min)
            min=b[i];
    }
    printf("最高與最低期中成績:%d %d\n",max,min);
    int c[4]={*c2,*j2,*d2,*e2};
    int ma=0;
    int mi=100;
    for(i=0;i<4;i++){
        if(c[i]>ma)
            ma=c[i];
        if(c[i]<mi)
            mi=c[i];
    }
    printf("最高與最低期末成績:%d %d\n",ma,mi);
    int mx=0;
    int mn=100;
    for(i=0;i<4;i++){
        if(a[i]>mx)
            mx=a[i];
        if(a[i]<mn)
            mn=a[i];
    }
    printf("最高與最低總成績:%d %d\n",mx,mn);
}
