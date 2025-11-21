#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct Student{
        int age;
        char first_name[50];
        char last_name[50];
        int standard;
    };
    Student st;
    scanf("%d %s %s %d", &st.age, st.first_name, st.last_name, &st.standard);
    printf("%d %s %s %d",st.age,st.first_name,st.last_name,st.standard);
    return 0;
}
