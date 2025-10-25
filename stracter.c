#include<stdio.h>
#include<strings.h>
struct student{
    char name[50];
    int rollno;
    int age;
}; 
int main(){
    struct student s1;
    s1.age=50;
    // s1.name="gourav";
    s1.rollno=123;
    printf("%d",s1.age);
    // printf("%d",s1.name);
    printf("%d",s1.rollno);
    
     
    
    

}