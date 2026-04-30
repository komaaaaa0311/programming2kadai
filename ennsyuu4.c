# include <stdio.h>
int main(){
    int a,b,c;
    printf("クラスの人数と野球1チーム(9人)とバレー1チーム(6人)のチーム数を入力してください。\n");
    scanf(" %d %d %d", &a, &b, &c);
    if (b*9+c*6 < a){
        printf("参加できない人数は%d人です。\n\n",a-(b*9+c*6));
    } else {
        printf("あと%d人必要です。\n\n",-(a-(b*9+c*6)));
    }
    return 0;
}