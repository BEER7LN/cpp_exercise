#include <iostream>
#include <cstring>

using namespace std;
class Date{
protected:
    int year;
    int month;
    int day;
public:
    Date(int d1, int d2, int d3):year(d1),month(d2),day(d3){}
};
class Time{
protected:
    int hour;
    int minute;
    int second;
public:
    Time(int t1,int t2,int t3):hour(t1),minute(t2),second(t3){}
};
class Schedule:public Date,public Time{
private:
    int ID;
public:
    Schedule(int sid,int s1,int s2,int s3,int s4,int s5, int s6):ID(sid),Date(s1,s2,s3),Time(s4,s5,s6){}
    bool operator < (const Schedule & s2);
    void display();
};
void Schedule::display(){//2014/6/27 8:0:1
    cout << "The urgent schedule is No." << ID << ": "<<year <<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<'\n';
}
bool Schedule::operator < (const Schedule & s2){
    if(year > s2.year)
        return false;
    else if(year < s2.year)
        return true;
    else if(month > s2.month)
        return false;
    else if(month < s2.month)
        return true;
    else if(day > s2.day)
        return false;
    else if(day < s2.day)
        return true;
    else if(hour > s2.hour)
        return false;
    else if(hour < s2.hour)
        return true;
    else if(minute > s2.minute)
        return false;
    else if (minute < s2.minute)
        return true;
    else if(second > s2.second)
        return false;
    else if(second < s2.second)
        return true;
    else
        return false;
}
int main() {
    int n1,n2,n3,n4,n5,n6,n7,i;
    char the_date[11],the_time[9],hav_4[5],hav_2[3];
    //Schedule urgent();
    cin >> n1 >> the_date>> the_time;
    for(i = 0; i < 4;i++)
        hav_4[i] = the_date[i];
    n2 = atoi(hav_4);
    for(i = 5; i < 7; i++)
        hav_2[i-5] = the_date[i];
    n3 = atoi(hav_2);
    for(i = 8; i < 10; i++)
        hav_2[i-8] = the_date[i];
    n4 = atoi(hav_2);
    for(i = 0; i < 2; i++)
        hav_2[i] = the_time[i];
    n5 = atoi(hav_2);
    for(i = 3; i < 5; i++)
        hav_2[i-3] = the_time[i];
    n6 = atoi(hav_2);
    for(i = 6; i < 8; i++)
        hav_2[i-6] = the_time[i];
    n7 = atoi(hav_2);
    Schedule shi1(n1,n2,n3,n4,n5,n6,n7);
    while (1){
        cin >> n1;
        if(n1 == 0)
            break;
        cin >> the_date>> the_time ;
        for(i = 0; i < 4;i++)
            hav_4[i] = the_date[i];
        n2 = atoi(hav_4);
        for(i = 5; i < 7; i++)
            hav_2[i-5] = the_date[i];
        n3 = atoi(hav_2);
        for(i = 8; i < 10; i++)
            hav_2[i-8] = the_date[i];
        n4 = atoi(hav_2);
        for(i = 0; i < 2; i++)
            hav_2[i] = the_time[i];
        n5 = atoi(hav_2);
        for(i = 3; i < 5; i++)
            hav_2[i-3] = the_time[i];
        n6 = atoi(hav_2);
        for(i = 6; i < 8; i++)
            hav_2[i-6] = the_time[i];
        n7 = atoi(hav_2);
        Schedule shi2(n1,n2,n3,n4,n5,n6,n7);
        if(shi2 < shi1)
            shi1 = shi2;
    }
    shi1.display();
    return 0;
}
