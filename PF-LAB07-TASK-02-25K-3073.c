#include <stdio.h>
int main() {
    int marks, pass[10], fail[10], p=0, f=0;
    float passSum=0, failSum=0;

    printf("Enter marks (-1 to stop):\n");
    while(1) {
        scanf("%d", &marks);
        if(marks == -1) break;
        if(marks >= 5 && marks <= 10) { pass[p] = marks; passSum += marks; p++; }
        else if(marks >= 0 && marks < 5) { fail[f] = marks; failSum += marks; f++; }
    }

    printf("\nPass Marks: ");
    for(int i=0;i<p;i++) printf("%d ", pass[i]);
    printf("\nFail Marks: ");
    for(int i=0;i<f;i++) printf("%d ", fail[i]);
    if(p>0) printf("\nAverage Pass Marks: %.2f", passSum/p);
    if(f>0) printf("\nAverage Fail Marks: %.2f", failSum/f);
}

