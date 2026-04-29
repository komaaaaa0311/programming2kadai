# include <stdio.h>
int main(){
    double a,b,c;
    int d,e,f;
    int class_a,baseball_b,volleyball_c;
    printf("3つの実数を入力してください。\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("3つ実数の平均は%lfです。\n",(a+b+c)/3);
    printf("3つの実数の平均は%dです。\n\n",(int)((a+b+c)/3));
    printf("リンゴ1個の値段は税込み100円、オレンジ1個の値段は税込み88円、苺1パックの値段は税込み398円です。\n");
    printf("リンゴの個数とオレンジの個数と苺のパック数を入力してください。\n");
    scanf(" %d %d %d", &d, &e, &f);
    printf("合計金額は%d円(税込み)です。\n\n",d*100+e*88+f*398);
    printf("クラスの人数と野球1チーム(9人)とバレー1チーム(6人)のチーム数を入力してください。\n");
    scanf(" %d %d %d", &class_a, &baseball_b, &volleyball_c);
    printf("参加できない人数は%d人です。\n\n",class_a-(baseball_b*9+volleyball_c*6));
    return 0;
}