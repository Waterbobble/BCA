#include <stdio.h>

typedef struct {
    int *pointerRoll;
    char *pointerName;
    float *pointergrade;  

}studentlinkers;

int main(void){
    int i;
    studentlinkers actualstudents[3];
    char Studentname [3][50];
    int StudentRoll[3];
    float StudentGrade[3];
    for (i=0;i<3;i++){
        printf("Enter Student %d Name: \n ",i);
        scanf("%s",Studentname[i]);

        printf("Enter Student %d Roll: \n ",i);
        scanf("%d",&StudentRoll[i]);

        printf("Enter Student %d Grade: \n ",i);
        scanf("%f",&StudentGrade[i]);

        actualstudents[i].pointerName=Studentname[i];
        actualstudents[i].pointerRoll=&StudentRoll[i];
        actualstudents[i].pointergrade=&StudentGrade[i];
    }
    for (i=0;i<3;i++){
        printf("Student at %d is name %s roll %d grade %f \n ",i,
            actualstudents[i].pointerName,
            *actualstudents[i].pointerRoll,
            *actualstudents[i].pointergrade);
    }
    return 0; 
}
 
 
 
 

