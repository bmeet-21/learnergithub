#include <stdio.h>
#include <string.h>

struct student{
    int rollno ;
    char name[100]; 
    float cgpa;
};
void studentdetail (struct student s1){
printf("%d\n",s1.rollno);
printf("%s\n",s1.name);
printf("%f\n",s1.cgpa);
}

int main(){
    struct student s1={12,"mitesh",7.7};
    struct student *ptr;
    ptr=&s1;
//printf("enter rthe student detail:\n");

studentdetail (s1);

}
