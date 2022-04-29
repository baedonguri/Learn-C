#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Well allgned structure */
    // 템플릿
    struct Aligned{
        int a;
        float b;
        double c;
    };
    /*
    0 1 2 3 4 5 6 7 | 8 9 10 11 12 13 14 15|
    |int a  |float b| double c             |
    4 + 4 + 8 = 16
    */
   
   // 메모리는 구조체 변수를 선언할 때 할당됨
   struct Aligned a1, a2;


    printf("struct Aligned a1\n");
    printf("Sizeof %zd\n", sizeof(struct Aligned));
    printf("%lld\n", (long long)& a1);
    printf("%lld\n", (long long)& a1.a);
    printf("%lld\n", (long long)& a1.b);
    printf("%lld\n", (long long)& a1.c);

    printf("struct Aligned a2\n");
    printf("Sizeof %zd\n", sizeof(a2));
    printf("%lld\n", (long long)& a2);
    printf("%lld\n", (long long)& a2.a);
    printf("%lld\n", (long long)& a2.b);
    printf("%lld\n", (long long)& a2.c);

    
    // size padding에 관한 설명
    struct Padded1{
        char a;
        float b;
        double c;
    };

    /* Without padding
    |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16
    |a|float b| double c        | ???
    1 + 4 + 8 = 13 이것이 우리가 기대한 값
    */

   /* With padding
    |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16
    |char a| float b|double c             |
    4(char?) + 4 + 8 = 16
    // 빈공간을 채워줌
    // 왜 그럴까? 
    // padding (struct member alignment)
        - 1 word : 4 bytes in x86, 8byte in x64 
        -> 메모리와 cpu가 데이터를 주고 받을 때, 한번에 4 or 8byte씩 주고 받음
        -> 어차피 뒷부분에 빈공간이 생길거라면 가급적이면 앞쪽에 메모리를 채워서 보내는 것이 더욱 효율적적일 것이다.
        -> 메모리를 채워서 보내면 cpu가 깔끔하게 받을 수 있음
   */   
    struct Padded1 p1;

    printf("\nstruct Padded1 p1\n");
    printf("Sizeof %zd\n", sizeof(p1));
    printf("%lld\n", (long long)& p1);
    printf("%lld\n", (long long)& p1.a);
    printf("%lld\n", (long long)& p1.b);
    printf("%lld\n", (long long)& p1.c);


    /* Without padding
    |0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|24
    |float a        |double b             | char c                |
    8 (float?) + 8(double) + 8(char?) = 24
    double이 자르지 않고 보내기 위해 자동으로 padding을 한 모습
    비효율적인 형상을 띈다
    */
    struct Padded2{
        float b;
        double c;
        char a;
    };
    struct Padded2 p2;
    printf("\nstruct Padded1 p2\n");
    printf("Sizeof %zd\n", sizeof(p2));
    printf("%lld\n", (long long)& p2);
    printf("%lld\n", (long long)& p2.a);
    printf("%lld\n", (long long)& p2.b);
    printf("%lld\n", (long long)& p2.c);


    struct Person {
        char name[41]; // member
        int age;    // member
        float height; // member
    };

    struct Person mommy;

    printf("\nstruct Person\n");
    printf("%lld\n", (long long)& mommy.name[0]);
    printf("%lld\n", (long long)& mommy.age);
    printf("%lld\n", (long long)& mommy.height);
    printf("Sizeof %zd\n", sizeof(mommy)); // 41 + 4 + 4 = 49?


    // 구조체의 배열을 만들었을 때 메모리 공간은?
    struct Person f[4];
    printf("Sizeof a structure array %zd\n", sizeof(f));
    /*
    |f[0].name          | f[0].age  | f[0].height | ... ... |f[3].name          | f[3].age  | f[3].height |
    */

    // padding은 컴파일러가 결정함
    // 세팅 가능
    return 0;
}