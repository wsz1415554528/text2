
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char time[10],gps,latitude1,longitude1,year[10],s[5];
    double latitude,longitude,v,course;
    FILE *fp2,*fp1;
    char Time[10],Latitude1,Longitude1,moon[10],S[5],altitude[10];
    double Latitude,Longitude;
    int Gps;
    fp1=fopen("//Users//w20161104602//Desktop//text2//maopao.txt","w+");
    fp2=fopen("//Users//w20161104602//Desktop//text2//GPS170510.log","r");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件可能不存在");
    }
    else
    {
        while(fscanf(fp2,"$GPRMC,%6s,%c,%lf,%c,%lf,%c,%lf,%lf,%6s,,%3s\n$GPGGA,%6s,%lf,%c,%lf,%c,%d,%2s,,%4s,M,,M,,%s\n",time,&gps,&latitude,&latitude1,&longitude,&longitude1,&v,&course,year,s,Time,&Latitude,&Latitude1,&Longitude,&Longitude1,&Gps,moon,altitude,S)!=EOF)
        {
            if(gps=='A')
            {
                fprintf(fp1,"当前是%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[4],year[5],year[2],year[3],year[0],year[1],time[0],time[1],time[2],time[3],time[4],time[5]);
                printf("当前是%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[4],year[5],year[2],year[3],year[0],year[1],time[0],time[1],time[2],time[3],time[4],time[5]);
                if(latitude1=='N')
                {
                    fprintf(fp1,"该车位于北纬%lf度\n",latitude);
                    printf("该车位于北纬%lf度\n",latitude);
                }
                else
                {
                    fprintf(fp1,"该车位于南纬%lf度\n",latitude);
                    printf("该车位于南纬%lf度\n",latitude);
                }
                if(longitude1=='E')
                {
                    fprintf(fp1,"该车位于东经%lf度\n",longitude);
                    printf("该车位于东经%lf度\n",longitude);
                }
                else
                {
                    fprintf(fp1,"该车位于西经%lf度\n",longitude);
                    printf("该车位于西经%lf度\n",longitude);
                }
                fprintf(fp1,"地面速率是%lf节，地面航向是%lf度\n",v,course);
                printf("地面速率是%lf节，地面航向是%lf度\n",v,course);
                
            }
            else
            {
                fprintf(fp1,"GPRMC无效定位\n");
                printf("GPRMC无效定位\n");
            }
            fprintf(fp1,"GPS状态是：");
            printf("GPS状态是：");
            switch (Gps)
            {
                case 0:
                    fprintf(fp1,"初始化\n");
                    printf("初始化\n");
                    break;
                case 1:
                    fprintf(fp1,"单点定位\n");
                    printf("单点定位\n");
                    break;
                case 2:
                    fprintf(fp1,"码差分\n");
                    printf("码差分\n");
                    break;
                case 3:
                    fprintf(fp1,"无效PPS\n");
                    printf("无效PPS\n");
                    break;
                case 4:
                    fprintf(fp1,"固定解\n");
                    printf("固定解\n");
                    break;
                case 5:
                    fprintf(fp1,"浮点解\n");
                    printf("浮点解\n");
                    break;
                case 6:
                    fprintf(fp1,"正在估算\n");
                    printf("正在估算\n");
                    break;
                case 7:
                    fprintf(fp1,"人工输入固定值\n");
                    printf("人工输入固定值\n");
                    break;
                case 8:
                    fprintf(fp1,"模拟模式\n");
                    printf("模拟模式\n");
                    break;
                case 9:
                    fprintf(fp1,"WAAS差分\n");
                    printf("WAAS差分\n");
                    break;
                default:
                    break;
            }
            fprintf(fp1,"使用卫星数量:%2s\n",moon);
            fprintf(fp1,"海拔高度:%4s\n",altitude);
            printf("使用卫星数量:%2s\n",moon);
            printf("海拔高度:%4s\n",altitude);
            printf("\n");
            fprintf(fp1,"\n");
            
            
        }
        
    }
    
    fclose(fp1);
    fclose(fp2);
}
