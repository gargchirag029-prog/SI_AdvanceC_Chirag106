#include<stdio.h>
int main(){
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==b[i][j])
            {
                count++;
            }
        }
    }
    if(count==9)
    {
        printf("Equal");
    }
    return 0;
}