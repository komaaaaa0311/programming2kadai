# include <stdio.h>
int main(){
    double a,b,c;
    printf("3つの実数を入力してください。\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("3つ実数の平均は%dです。\n",(int)(a+b+c)/3);
    return 0;
}