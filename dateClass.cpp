#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class DateClass
{
private:
    int year, month, day;

public:
    DateClass()
    {
        year = 1970;
        month = 1;
        day = 1;
    };
    DateClass(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    };
    int getYear()
    {
        return year;
    };
    int getMonth()
    {
        return month;
    };
    int getDay()
    {
        return day;
    };
    void setDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    };
    void setYear(int y)
    {
        year = y;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
};
int main()
{
    DateClass date1;
    cout << date1.getYear() << "/" << date1.getMonth() << "/" << date1.getDay() << endl;

    DateClass date2(2022, 5, 13);
    cout << date2.getYear() << "/" << date2.getMonth() << "/" << date2.getDay() << endl;
    int y, m, d;
    cin >> y >> m >> d;
    DateClass date3(y, m, d);
    cout << date3.getYear() << "/" << date3.getMonth() << "/" << date3.getDay() << endl;
    DateClass date4;
    cin >> y;
    date4.setYear(y);
    cout << date4.getYear() << "/" << date4.getMonth() << "/" << date4.getDay() << endl;
    return 0;
}
