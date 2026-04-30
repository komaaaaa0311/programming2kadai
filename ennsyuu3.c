# include <stdio.h>
int main(){
    int a,b,c;
    printf("リンゴ1個の値段は税込み100円、オレンジ1個の値段は税込み88円、苺1パックの値段は税込み398円です。\n");
    printf("リンゴの個数とオレンジの個数と苺のパック数を入力してください。\n");
    scanf(" %d %d %d", &a, &b, &c);
    printf("合計金額は%d円(税込み)です。\n\n",a*100+b*88+c*398);
    return 0;
}