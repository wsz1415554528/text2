//
//  gps.c
//  text2
//
//  Created by w20161104602 on 2017/6/22.
//  Copyright © 2017年 w20161104602. All rights reserved.
//

#include "gps.h"
int main()
{
    FILE *fr;
    char str1[70];
    char str2[70];
    char lat[9];
    int i;
    fr=fopen("//Users//s20161104602//Desktop//text2//gps","r");
    fscanf(fr,"%s%s",str1,str2");
           printf("结果：%是\n%s\n",str1,str2);
           for(i=0;i<8;i++)
           lat[i]=str1[i+16];
           lat[8]='\0';
           printf("纬度:%s\n",lat);
           fclose(fr);
           return 0;
           
           
           
           
           
           
           
           }
           
