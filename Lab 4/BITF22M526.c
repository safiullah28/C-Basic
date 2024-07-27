#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){


//Task No. 1

    	int basic_salary ,conveyance_allowance,medical,house_rent,gross_salary,tax,net_salary;
        printf("Enter Basic salary : ");
        scanf_s("%d",&basic_salary);
    	conveyance_allowance = (((float)10 / 100) * basic_salary);
    	medical= (((float)15 / 100) * basic_salary);
    	house_rent= (((float)45 / 100) * basic_salary);
    	gross_salary = basic_salary+conveyance_allowance + medical + house_rent;
    	    
    	printf("Basic Salary = %d \n", basic_salary);
    	printf("Conveyance Allowance = %d \n", conveyance_allowance);
    	printf("Medical Allowance= %d \n", medical);
    	printf("House Rent= %d \n", house_rent);
    	printf("Gross Salary = %d \n", gross_salary);
       int annual_gross_salary=gross_salary*12;
       printf("Annual Gross salary = %d\n",annual_gross_salary);
    if(gross_salary<=20000){
        printf("Tax = %d\n",tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }
    else if (gross_salary > 20000 &&gross_salary<=40000)
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
        net_salary= gross_salary-tax;
        printf("Net Salary = %d",net_salary);

    }
    else if (gross_salary > 80000 )
    {
        tax = (((float)25 / 100) * gross_salary);
        printf("Tax = %d\n", tax);
        net_salary = gross_salary - tax;
        printf("Net Salary = %d", net_salary);
    }




//Task 02

int amount,year=1;
printf("Enter amount : ");
scanf("%d",&amount);
printf("Amount Deposited : %d\n",amount);
if(amount<=500000)
{
    amount+=(((float)7/100)*amount);
    printf("Amount after 1 year : %d\n",amount);
    amount += (((float)7 / 100) * amount);
    printf("Amount after 2 year : %d\n", amount);
    amount += (((float)7 / 100) * amount);
    printf("Amount after 3 year : %d\n", amount);
}
else{
    amount+=(((float)10/100)*amount);
    printf("Amount after 1 year : %d\n",amount);
    amount += (((float)10 / 100) * amount);
    printf("Amount after 2 year : %d\n", amount);
    amount += (((float)10 / 100) * amount);
    printf("Amount after 3 year : %d\n", amount);
}


// Task No. 3
int num;
srand(time(0));
num=rand()%21;
printf("Number is : %d\n",num);
if(num==0)
printf("Zero");
else if (num == 1)
printf("One");
else if (num == 2)
printf("Two");
else if (num == 3)
printf("Three");
else if (num == 4)
printf("Four");
else if (num == 5)
printf("Five");
else if (num == 6)
printf("Six");
else if (num == 7)
printf("Seven");
else if (num == 8)
printf("Eight");
else if (num == 9)
printf("Nine");
else if (num == 10)
printf("Ten");
else if (num == 11)
printf("Eleven");
else if (num == 12)
printf("Twelve");
else if (num == 13)
printf("Thrteen");
else if (num == 14)
printf("Fourteen");
else if (num == 15)
printf("Fifteen");
else if (num == 16)
printf("Sixteen");
else if (num == 17)
printf("Seventeen");
else if (num == 18)
printf("Eighteen");
else if (num == 19)
printf("Nineteen");
else
printf("Twenty");



return 0;
}