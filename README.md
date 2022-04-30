# 問2
## ソースコード
```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //実行のたびに順番を変えるため、時間を乱数決定に組み込む

    int data[16],k, l;
    srand((unsigned)time(NULL));

//randでランダムに数字を並べるが、重複しないように、重複した際は繰り返し数字を上げるようにする

    for (k = 0; k <=15; k++)
    {
        do
        {
            data[k] = rand() % 16 + 1;
            for (l = 0; l < k; l++)
            {
                if (data[k] == data[l]) break;
            }
        } while (k != l);
        printf("%d ",data[k]);
    }

    return 0;
}
```
## makefile
.PHONY : clean

kadai2.out : kadai2.c
    gcc -o kadai2.out kadai2.c
    
do :
    ./kadai2.out
    
clean :
    rm kadai2.out
## 出力
![](/images/2.png)
