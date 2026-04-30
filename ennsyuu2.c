# include <stdio.h>
int main(){
    int a,b,c;
    printf("3つの実数を入力してください。\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("3つ実数の平均は%dです。\n",(a+b+c)/3);
    return 0;
}