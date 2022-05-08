#include <stdio.h>
struct Date {
    int y,m,d;
};
typedef struct Date Date;
void uduriin_zuruu(Date a, Date b);
struct Date read();
int main(){
    struct Date dt1,dt2;
    printf("Toolj ehleh on sariig uduriig ni oruulna uu\n");
    dt1 = read();
    printf("Toolj duusah on sariig uduriig ni oruulna uu\n");
    dt2 = read();
    uduriin_zuruu(dt1,dt2);
}
struct Date read(){
    struct Date dt;
    scanf("%d%d%d", &dt.y, &dt.m, &dt.d);
    return dt;
}
void uduriin_zuruu(Date a, Date b){
    int day_diff,mon_diff,year_diff, udur;
    if(b.d < a.d)
    {
        if(b.m == 3)
        {
            if((b.y % 4 == 0 && b.y % 100 != 0) || (b.y % 400 == 0))
            {
                b.d += 29;
            }
            else
            {
                b.d += 28;
            }
        }
    else if(b.m == 5 || b.m == 7 || b.m == 10 || b.m == 12)
        {
            b.d +=30;
        } else
        {
            b.d += 31;
        }
        b.m=b.m-1;
    }
    if(b.m < a.m)
    {
        b.m += 12;
        b.y -= 1;
    }
    day_diff = b.d - a.d;
    mon_diff = b.m - a.m;
    year_diff = b.y -a.y;
    udur = day_diff + mon_diff * 30 + year_diff * 365;
    printf("%d udriin zuruutei baina", udur);
    //printf("%d jil %d sar %d udriin zoruutei baina.\n", year_diff, mon_diff,day_diff);
}
