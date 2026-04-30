# include <stdio.h>
int main(){
    double a,b;
    printf("三角形の高さ(cm)と底辺(cm)を入力してください。\n");
    scanf(" %lf %lf", &a, &b);
    printf("三角形の面積は%lfcm^2です。\n\n", a * b / 2.0);
    return 0;
}