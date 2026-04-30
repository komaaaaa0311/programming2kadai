# include <stdio.h>
int main(){
    double a,b,c;
    double height,base;
    int d,e,f;
    int g,h,i;
    int class_a,baseball_b,volleyball_c;
    printf("3つの実数を入力してください。\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("【演習1】3つ実数の平均は%lfです。\n",(a+b+c)/3.0);
    printf("3つの実数を入力してください。\n");
    scanf("%d %d %d",&d,&e,&f);
    printf("【演習2】3つの実数の平均は%dです。\n\n",(int)((d+e+f)/3));
    printf("リンゴ1個の値段は税込み100円、オレンジ1個の値段は税込み88円、苺1パックの値段は税込み398円です。\n");
    printf("リンゴの個数とオレンジの個数と苺のパック数を入力してください。\n");
    scanf(" %d %d %d", &g, &h, &i);
    printf("【演習3】合計金額は%d円(税込み)です。\n\n",g*100+h*88+i*398);
    printf("クラスの人数と野球1チーム(9人)とバレー1チーム(6人)のチーム数を入力してください。\n");
    scanf(" %d %d %d", &class_a, &baseball_b, &volleyball_c);
    if (baseball_b*9+volleyball_c*6 < class_a){
        printf("【演習4】参加できない人数は%d人です。\n\n",class_a-(baseball_b*9+volleyball_c*6));
    } else {
        printf("【演習4】あと%d人必要です。\n\n",-(class_a-(baseball_b*9+volleyball_c*6)));
    }
    printf("三角形の高さ(cm)と底辺(cm)を入力してください。\n");
    scanf(" %lf %lf", &height, &base);
    printf("【演習5】三角形の面積は%lfcm^2です。\n\n", height * base / 2.0);
    return 0;
}