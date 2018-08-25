//
//  sub1.c
//  project7
//
//  Created by branny on 2018/6/8.
//  Copyright © 2018年 branny. All rights reserved.
//

//資工二Ｂ 410421854 歐穎璇 完成項：ＡＢＣＥ
char menu()
{
    char choice;
    printf("a:XXX,請輸入個人資料\n");
    printf("b:輸入使用者的成績資料\n");
    printf("c:計算成績資料的運算\n");
    printf("d(請輸入成績檔名),進入次要Menu\n");
    printf("e退出程式\n");
    printf("请输入你的選擇（a-e）：");
    scanf("%c",&choice);
    return choice;
}
