 #include<stdio.h>
#include<windows.h>


int main()
{
    int hour,minute,second;
    printf("Enter Hour Minute Second : ");
    scanf("%d %d %d",&hour,&minute,&second);


    int h=0,m=0,s=0;
    while(1)
          {
              printf("\r %.2d : %.2d : %.2d\n",h,m,s);
                if(h==hour && m==minute && s==second)
                {
                    break;
                }

                s++;
                Sleep(1000);
                if(s==5)
                {
                    m++;
                    s=0;
                }
                if(m==5)
                {
                    h++;
                    m=0;
                }
          }

    return 0;
}
