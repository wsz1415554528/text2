//
//  main.c
//  text2
//
//  Created by w20161104602 on 2017/6/19.
//  Copyright © 2017年 w20161104602. All rights reserved.
//

#include "main.h"
//
//  main.c
//  text2
//
//  Created by w20161104602 on 2017/6/13.
//  Copyright © 2017年 w20161104602. All rights reserved.
//

#include<stdio.h>

int main(int argc, const char * argv[])
{
    
    FILE *fr,*fw;
    fr=fopen("//Users//w20161104602//Desktop//text2//input.txt","r");
    fw=fopen("//Users//w20161104602//Desktop//text2//output.txt","w");
    int a[16];
    int q,w,e;
    if(fr==NULL)
    {
        printf("该文件不存在");
    }
    else
    {
        while(fscanf(fr,"%d",&q)!=EOF)
        {
            for(q=0; q<10; q++)
            {
                fscanf(fr,"%d",&a[q]);
            }
            
            for(w=0;w<9; w++)
            {
                for(q=0; q<9-w; q++)
                {
                    if(a[q]>a[q+1])
                    {
                        e=a[q];
                        a[q]=a[q+1];
                        a[q+1]=e;
                    }
                }
                
                
            }
            for(q=0;q<10;q++)
            {
                printf("%d ",a[q]);
                fprintf(fw,"%d ",a[q]);
            }
            fprintf(fw,"\n");
            printf("\n");
            
        }
        fclose(fr);
        fclose(fw);
    }
    
    return 0;
    
    
}
int main()
{
    FILE *fr;
    char str1[70];
    char str2[70];
    char lat[9];
    int i;
    fr=fopen("//Users//s20161104602//Desktop//text2//GPD","r");
    fscanf(fr,"%s%s",str1,str2");
           printf("结果：%是\n%s\n",str1,str2);
           for(i=0;i<8;i++)
           lat[i]=str1[i+16];
           lat[8]='\0';
           printf("纬度:%s\n",lat);
           fclose(fr);
           return 0;







}
































