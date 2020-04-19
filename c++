#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int mat1(int matris_one[][100],int r,int y){
    int i,j;
    printf("please enter numbrs matris one:\n");
    for(i=0;i<r;i++){
        for(j=0;j<y;j++)
            scanf("%d",&matris_one[i][j]);
        printf("\n");
    }
    system("cls");

}
int mat2(int matris_two[][100],int w,int o){
    int i,j;
    printf("please enter numbrs matris tow:\n");
    for(i=0;i<w;i++){
        for(j=0;j<o;j++)
            scanf("%d",&matris_two[i][j]);
        printf("\n");
    }
}
int print_one(int matris_one[][100],int r,int y){
    int i,j;
    system("cls");
    printf("matris_one:\n");
    for(i=0;i<r;i++){
        for(j=0;j<y;j++)
            printf("%d\t",matris_one[i][j]);
        printf("\n");
    }
}
int print_two(int matris_two[][100],int w,int o){
    int i,j;
    //system("cls");
    printf("matris_two:\n");
    for(i=0;i<w;i++){
        for(j=0;j<o;j++)
            printf("%d\t",matris_two[i][j]);
        printf("\n");
    }

}
int zarb(int res[][100],int matris_one[][100],int matris_two[][100],int r,int o,int k){
    int i,j;
    //while(r==o){
    for(i=0;i<r;i++)
        for(j=0;j<o;j++){
            res[i][j]=0;
            for(k=0;k<r;k++)
                res[i][j]=res[i][j]+matris_one[i][k]*matris_two[k][j];
        }
    //}
    printf("result zarb to matris:\n");
    for(i=0;i<r;i++){
        for(j=0;j<o;j++)
            printf("%d\t",res[i][j]);
        printf("\n");
    }
}
int main()
{
    int mati1[100][100];
    int mati2[100][100];
    int result[100][100];
    int m,p;
    int n,q;
    int b;
    printf("\t**hello**\n\n");
    printf("please enter size of matris one:");
    scanf("%d%d",&m,&p);
    system("cls");
    printf("please enter size of matris tow:");
    scanf("%d%d",&n,&q);
    system("cls");
    mat1(&mati1,m,p);
    mat2(&mati2,n,q);
    print_one(&mati1,m,p);
    print_two(&mati2,n,q);
    zarb(&result,&mati1,&mati2,m,q,b);
    //   print_p();
    getch();
    return 0;
}
