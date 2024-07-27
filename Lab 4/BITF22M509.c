#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    // Task No. 1

    int basic_salary, conveyance_allowance, medical, house_rent, gross_salary, tax, net_salary;
    printf("Enter Basic salary : ");
    scanf_s("%d", &basic_salary);
    conveyance_allowance = (((float)10 / 100) * basic_salary);
    medical = (((float)15 / 100) * basic_salary);
    house_rent = (((float)45 / 100) * basic_salary);
    gross_salary = basic_salary + conveyance_allowance + medical + house_rent;

    printf("Basic Salary = %d \n", basic_salary);
    printf("Conveyance Allowance = %d \n", conveyance_allowance);
    printf("Medical Allowance= %d \n", medical);
    printf("House Rent= %d \n", house_rent);
    printf("Gross Salary = %d \n", gross_salary);
    int annual_gross_salary = gross_salary * 12;
    printf("Annual Gross salary = %d\n", annual_gross_salary);
    if (gross_salary <= 20000)
    {
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }
    else if (gross_salary > 20000 && gross_salary <= 40000)
    {
        tax = (((float)10 / 100) * gross_salary);
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }
    else if (gross_salary > 40000 && gross_salary <= 60000)
    {
        tax = (((float)15 / 100) * gross_salary);
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }
    else if (gross_salary > 60000 && gross_salary <= 80000)
    {
        tax = (((float)20 / 100) * gross_salary);
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }
    else if (gross_salary > 80000)
    {
        tax = (((float)25 / 100) * gross_salary);
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }

    // Task 02

    int amount_deposit;
    printf("Enter amount : ");
    scanf("%d",&amount_deposit);
    printf("Amount Deposited : %d\n",amount_deposit);
    if(amount_deposit<=500000)
    {
        amount_deposit+=(((float)7/100)*amount_deposit);
        printf("Amount after 1 year : %d\n",amount_deposit);
        amount_deposit += (((float)7 / 100) * amount_deposit);
        printf("Amount after 2 year : %d\n", amount_deposit);
        amount_deposit += (((float)7 / 100) * amount_deposit);
        printf("Amount after 3 year : %d\n", amount_deposit);
    }
    else{
        amount_deposit+=(((float)10/100)*amount_deposit);
        printf("Amount after 1 year : %d\n",amount_deposit);
        amount_deposit += (((float)10 / 100) * amount_deposit);
        printf("Amount after 2 year : %d\n", amount_deposit);
        amount_deposit += (((float)10 / 100) * amount_deposit);
        printf("Amount after 3 year : %d\n", amount_deposit);
    }

    // Task No. 3
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Number is : %d\n",num);
    if(num==0)
    printf("Number %d in English is zero",num);
    else if (num == 1)
    printf("Number %d in English is one",num);
    else if (num == 2)
    printf("Number %d in English is two",num);
    else if (num == 3)
    printf("Number %d in English is three",num);
    else if (num == 4)
    printf("Number %d in English is four",num);
    else if (num == 5)
    printf("Number %d in English is five",num);
    else if (num == 6)
    printf("Number %d in English is six",num);
    else if (num == 7)
    printf("Number %d in English is seven",num);
    else if (num == 8)
    printf("Number %d in English is eight",num);
    else if (num == 9)
    printf("Number %d in English is nine",num);
    else if (num == 10)
    printf("Number %d in English is ten",num);
    else if (num == 11)
    printf("Number %d in English is eleven",num);
    else if (num == 12)
    printf("Number %d in English is twelve",num);
    else if (num == 13)
    printf("Number %d in English is thirteen",num);
    else if (num == 14)
    printf("Number %d in English is fourteen",num);
    else if (num == 15)
printf("Number %d in English is fifteen",num);
    else if (num == 16)
printf("Number %d in English is sixteen",num);
    else if (num == 17)
    printf("Number %d in English is seventeen",num);
    else if (num == 18)
    printf("Number %d in English is eighteen",num);
    else if (num == 19)
    printf("Number %d in English is nineteen",num);
    else
    printf("Number %d in English is twenty",num);

    return 0;
}