#include <stdio.h>
#include <stdlib.h>

int passed=0,failed=0,sum=0,max,min;

int main() {
    int size=10,minGrade=50,maxGrade=100,avg;
    int class1[size],class2[size],class3[size];
    for(int i=0;i<size;i++)
    {
        class1[i]=rand()%maxGrade;
        printf("%d\n",class1[i]);
        max=class1[i];
        min=class1[i];

        class2[i]=rand()%maxGrade;
        printf("%d\n",class2[i]);
        if (class2[i]>max)
            max=class2[i];
        if (class2[i]<min)
            min=class2[i];

        class3[i]=rand()%maxGrade;
        printf("%d\n",class3[i]);
        if (class3[i]>max)
            max=class3[i];
        if (class3[i]<min)
            min=class3[i];

        sum=class1[i]+class2[i]+class3[i];
        if( (class1[i]>=minGrade)  )
            passed++;
        else if((class1[i]<minGrade))
            failed++;
        if( (class2[i]>=minGrade)  )
            passed++;
        else if((class2[i]<minGrade))
            failed++;
        if( (class3[i]>=minGrade)  )
            passed++;
        else if((class3[i]<minGrade))
            failed++;

    }

    avg=( (sum) / (size*3) );
    printf("avg = %d\n",avg);
    printf("max = %d\n",max);
    printf("min = %d",min);

    return 0;
}