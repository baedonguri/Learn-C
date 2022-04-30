#include <stdio.h>
#define LEN 20

struct names
{
    char given[LEN];
    char family[LEN];
};


struct reservation
{
    struct names guest; // names 구조체를 사용
    struct names host;
    char food[LEN];
    char place[LEN];

    int year;
    int month;
    int day;
    int hours;
    int minutes;
};

int main(void){
    struct reservation res = {
        .guest = {"Nick", "Carraway"},
        .host = {"Jay", "Gatsby"},
        .place = {"the Gatsby mansion"},
        .food = {"Escargot"},
        .year = 1925,
        .month = 4,
        .day = 10,
        .hours = 18,
        .minutes = 30
    };
    
    // 문자열에 대한 포인터를 사용
    const char* formatted =
    "\
    Dear %s %s,\nI would like to serve you %s.\n\
    Plese visit %s on %d/%d/%d at %d:%d.\n\
    Sincerely,\n\
    % s %s\
    ";

    printf(formatted, res.guest.given, res.guest.family, res.food,
    res.place, res.day, res.month, res.year, res.hours, res.minutes,
    res.host.given, res.host.family);
    


    return 0;
}

// 재사용을 함으로써 코드가 간결해지고, 새로 생성하는 수고를 덜 수 있음
