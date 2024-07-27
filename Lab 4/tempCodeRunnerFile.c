	int basic_salary = 40000,conveyance_allowance,medical,house_rent,gross_salary,tax,net_salary;
        printf("Enter Basic salary : ");
        scanf("%d",&basic_salary);
    	conveyance_allowance = (((float)10 / 100) * basic_salary);
    	medical= (((float)15 / 100) * basic_salary);
    	house_rent= (((float)45 / 100) * basic_salary);
    	gross_salary = basic_salary+conveyance_allowance + medical + house_rent;
    	    
    	printf("Basic Salary = %d \n", basic_salary);
    	printf("Conveyance Allowance = %d \n", conveyance_allowance);
    	printf("Medical Allowance= %d \n", medical);
    	printf("House Rent= %d \n", house_rent);
    	printf("Gross Salary = %d \n", gross_salary);
       // gross_salary=gross_salary*12;
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