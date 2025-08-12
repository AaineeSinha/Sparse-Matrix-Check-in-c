#include <stdio.h>
int main(){
    int r,c;scanf("%d%d",&r,&c);
    int a[r][c],i,j,z=0;for(i=0;i<r;i++)for(j=0;j<c;j++){scanf("%d",&a[i][j]);if(a[i][j]==0)z++;}
    printf("%d",z>(r*c)/2);
}
