/*
Problem No:3 If the marks obtained by a student in five different subjects are input through the keyboard. 
Find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum m.
*/

#include <stdio.h>

int main()
{
    // variable declaration
    int mathematics, English, Science, social_science, computer_science;
    int m;
    // taking input from user
    printf("Enter the marks of mathematics:");
    scanf("%d", &mathematics);
    printf("Enter the marks of English:");
    scanf("%d", &English);
    printf("Enter the marks of Science:");
    scanf("%d", &Science);
    printf("Enter the marks of social_science:");
    scanf("%d", &social_science);
    printf("Enter the marks of computer_science:");
    scanf("%d", &computer_science);
    printf("Enter maximum marks: ");
    scanf("%d", &m);
    // calculating agggregate marks
    int aggregateMarks = mathematics + English + Science + social_science + computer_science;
    // clculating percentage 
    float percentage = (aggregateMarks / (float)m) * 100.0;
    // printing output
    printf("Percentage obtained:%f\n", percentage);
    printf("Aggregate Marks obtained:%d", aggregateMarks);
    return 0;
}