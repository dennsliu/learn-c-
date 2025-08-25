#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d);
    int getYear();
    int getMonth();
    int getDay();
    void setDate(int y, int m, int d);
    void print();
    void addOneDay();
};
Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void Date::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
/**
 * 打印日期的函数
 * 按照年/月/日的格式输出日期，其中月和日不足两位时前面补0
 */
void Date::print()
{
    cout << year << "/" << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << endl; // 输出格式化的日期
}
void Date::addOneDay()
{
    int days0[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days1[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int *dp = days0;
    if (month == 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        dp = days1;
    }
    day++;
    if (day > dp[month])
    {
        day = day - dp[month];
        month++;
    }
    if (month > 12)
    {
        month = month - 12;
        year++;
    }
}
int main()
{
    int t;
    int y, m, d;
    cin >> t;
    while (t--)
    {
        cin >> y >> m >> d;
        Date a(y, m, d);
        cout << "Today is: ";
        a.print();
        a.addOneDay();
        cout << "Tomorrow is: ";
        a.print();
    }
    return 0;
}
