/* A simple hospital management system that allows users to add patients, view total bills, and exit the system.
It tracks patient count, disease type, and estimated bills. */

#include <stdio.h>
int main()
{
    int choice,patient_count=0,age,disease_code;
    float bill,total_bill=0;
    do
    {
        printf("\n--------------Hospital menu------------\n");
        printf("1. Add patient\n");
        printf("2. View total bill\n");
        printf("3. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            patient_count++;
            printf("Enter the patient age: ");
            scanf("%d",&age);
            printf("Enter disease type: \n");
            printf("1. Fever\n");
            printf("2. Infection\n");
            printf("3. Surgery\n");
            printf("Enter disease code(1-3): ");
            scanf("%d",&disease_code);
            printf("Enter estimated bill: ");
            scanf("%f",&bill);
            if(disease_code==1)
            {
                printf("Disease Fever\n");
            }
            else if(disease_code==2)
            {
                printf("Disease Infection\n");
            }
            else if(disease_code==3)
            {
                printf("Disease Surgery\n");
            }
            else
            {
                printf("Invalid code, Enter between (1-3)");
            }
            total_bill+=bill;
            printf("Patient added successfully");
        }
        else if(choice==2)
        {
           printf("\nTotal patients: %d\n",patient_count);
           printf("Total hospital bill: %.2f\n",total_bill);
        }
        else if(choice==3)
        {
            printf("Thank you for visiting\n");
        }
        else
        {
            printf("Invalid choice, Try again!!!");
        }
    }
    while(choice!=3);
    return 0;
}
