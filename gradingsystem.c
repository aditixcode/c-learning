#include <stdio.h>
int calculateTotal(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}
float calculateAverage(int total) {
    return total / 3.0;
}
char findGrade(float avg) {
    if (a >= 90) 
        return 'A';
     else if (avg >= 75) 
        return 'B';
    else if (avg >= 60) 
        return 'C';
     else 
        return 'D'; 
}
int main() {
    int m1, m2, m3;
    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    
    int total = calculateTotal(m1, m2, m3);
    float avg = calculateAverage(total);
    char grade = findGrade(avg);
    
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);
    
    return 0;
}