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
        for(q=0; q<10; q++)
        {
            fscanf(fr,"%d",&a[q]);
        }
        
        for(w=0;w<9; w++)
            for(q=0; q<9-w; q++)
            {
                if(a[q]>a[q+1])
                {
                    e=a[q];
                    a[q]=a[q+1];
                    a[q+1]=e;
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
    
    return 0;
    
    
}
