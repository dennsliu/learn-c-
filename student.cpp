#include <iostream>
#include <string>
using namespace std;

class myDate
{
private:
    int year;
    int month;
    int day;

public:
    myDate()
    {
        year = 1970;
        month = 1;
        day = 1;
    }
    myDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void setDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void setDate(myDate d)
    {
        cout << "setDate : " << d.year << endl;
        year = d.year;
        month = d.month;
        day = d.day;
    }
    void setYear(int y)
    {
        year = y;
    }
    void printDate()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};
class Student
{
    // 包含私有数据成员：姓名和生日，姓名是字符串类型，生日是日期类型，用之前的myDate类定义
private:
    string sname;
    myDate birthdate;

public:
    void setName(string name)
    {
        sname = name;
    }
    string getName()
    {
        return sname;
    }
    void setStudent(string s, myDate d)
    {
        sname = s;
        birthdate.setDate(d);
    }
    void setBirthdate(myDate d)
    {
        birthdate = d;
    }
    myDate getBirthdate()
    {
        return birthdate;
    }
    void printStudent()
    {
        cout << sname << " ";
        birthdate.printDate();
    }
};
int main()
{
    Student ss;
    string name;
    int y, m, d;

    cin >> name >> y >> m >> d;
    myDate m1(y, m, d);
    m1.printDate();
    ss.setStudent(name, m1);
    ss.printStudent();

    cin >> y >> m >> d;
    myDate m2(y, m, d);
    ss.setBirthdate(m2);
    ss.printStudent();

    cin >> name;
    ss.setName(name);
    ss.printStudent();

    return 0;
}