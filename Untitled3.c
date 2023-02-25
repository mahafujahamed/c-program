#include<stdio.h>
int main()
{
    int x=12, y=13;
    while(x!=15 && y>=0){
        printf("%d%d ",x,y);

        if(y<13){
            x-=1;
            y-=4;
        }
        else{
            x+=1;
        }
    }
    y++;
}
