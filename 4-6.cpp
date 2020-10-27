#include <iostream>
#include <iomanip>
using namespace std;
class Person{
protected:
    string name;
    int age;
public:
    Person();
    Person (string p_name, int p_age):name(p_name),age(p_age){}
    void display () {cout<<name<<":"<<age<<endl;}
};
class Student:public Person{
public:
    int ID;//学号
    float cpp_score;//cpp上机成绩
    float cpp_count;//cpp上机考勤
    float cpp_grade;//cpp总评成绩
    //总评成绩计算规则：cpp_grade = cpp_score * 0.9 + cpp_count * 2;学生姓名 学号 年龄 cpp成绩 cpp考勤
    Student();
    Student(string s_name, int sid,int s_age, float sc, float co):Person(s_name,s_age),ID(sid),cpp_score(sc),cpp_count(co){}
    void print() {cpp_grade = cpp_score * 0.9 + cpp_count * 2;cout << ID << " " << name << " " << fixed << setprecision(1)<<cpp_grade <<'\n'; }
};
int main() {
    while (1){
        string s_name;
        int sid,s_age;
        float sc,  co;
        cin >> s_name;
        if (*(s_name.c_str()) == '0' )
            break;
        cin >> sid >> s_age >> sc >> co;
        Student s1(s_name,sid,s_age,sc,co);
        s1.print();
    }
    return 0;
}
