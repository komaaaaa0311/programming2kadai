# include <stdio.h>
int main(){
    int a,b,c;
    printf("変数を３つ入力してください。\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%dです。\n",a/b*c);
    return 0;
}