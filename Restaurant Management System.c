#include <stdio.h>
#include <stdlib.h>  

void staff() 
{
    int ss;  // ss = staff select
    char line[100];  // Assuming a maximum line length of 100 characters
	int choice;
	printf("Select Day :\n1: Monday\n2: Tuesday\n3: Wednesday\n4: Thursday\n5: Friday\n");
	printf("enter your choice");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1:
			
					printf("\n------Welcome--------\n1. Breakfast Customer list\n2. Lunch Customer List\n3. Dinner Customer List\n4.. Event Customer List\nEnter Your Choice : ");
		    		scanf("%d", &ss);
		
		    if (ss == 1) 
			{
		        
		        printf("\n.....Breakfast List........\n");
		        FILE *staff_file = fopen("D:\\monday_breakfast_Staff.txt", "r");
		        if (staff_file == NULL) 
				{
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_file)) 
				{
		            printf("%s", line);
		        }
		        fclose(staff_file);
		    }
		
		    if (ss == 2) 
			{
		        
		        printf("\n----------Lunch List-----------\n");
		        FILE *staff_lunch_file = fopen("D:\\monday_Staff_lunch.txt", "r");
		        if (staff_lunch_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_lunch_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_lunch_file);
		    }
		
		    if (ss == 3) 
			{
		       
		        printf("\n----------Dinner List-----------\n");
		        FILE *staff_dinner_file = fopen("D:\\monday_Staff_dinner.txt", "r");
		        if (staff_dinner_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_dinner_file)) 
				{
		            printf("%s", line);
		        }
		        fclose(staff_dinner_file);
		    }
		    if (ss == 4) {
		        
		        printf("\n.....Events Record........\n");
		        FILE *staffevent = fopen("D:\\Staffevent.txt", "r");
		        if (staffevent  == NULL) 
				{
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staffevent )) 
				{
		            printf("%s", line);
		        }
		        fclose(staffevent );
		    }
					break;
					//////
					/////////////////
					////////////
					/////////////
		case 2:
			
					printf("\n------Welcome--------\n1. Breakfast Customer list\n2. Lunch Customer List\n3. Dinner Customer List\n4.. Event Customer List\nEnter Your Choice : ");
		    		scanf("%d", &ss);
			if (ss == 1) {
		        
		        printf("\n.....Breakfast List........\n");
		        FILE *staff_file = fopen("D:\\tuesday_breakfast_Staff.txt", "r");
		        if (staff_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_file);
		    }
		    if (ss == 2) {
		        
		        printf("\n----------Lunch List-----------\n");
		        FILE *staff_lunch_file = fopen("D:\\tuesday_Staff_lunch.txt", "r");
		        if (staff_lunch_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_lunch_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_lunch_file);
		    }
		    if (ss == 3) {
		       
		        printf("\n----------Dinner List-----------\n");
		        FILE *staff_dinner_file = fopen("D:\\tuesday_Staff_dinner.txt", "r");
		        if (staff_dinner_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_dinner_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_dinner_file);
		    }
		    if (ss == 4) {
		        
		        printf("\n.....Events Record........\n");
		        FILE *staffevent = fopen("D:\\Staffevent.txt", "r");
		        if (staffevent  == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staffevent )) {
		            printf("%s", line);
		        }
		        fclose(staffevent );
		    }
					break;
					//////////////
					///////////////
					//////////////
					
		case 3:
			
					printf("\n------Welcome--------\n1. Breakfast Customer list\n2. Lunch Customer List\n3. Dinner Customer List\n4.. Event Customer List\nEnter Your Choice : ");
		    		scanf("%d", &ss);
		
		    if (ss == 1) {
		        
		        printf("\n.....Breakfast List........\n");
		        FILE *staff_file = fopen("D:\\wednesday_breakfast_Staff.txt", "r");
		        if (staff_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_file);
		    }
		
		    if (ss == 2) {
		        
		        printf("\n----------Lunch List-----------\n");
		        FILE *staff_lunch_file = fopen("D:\\wednesday_Staff_lunch.txt", "r");
		        if (staff_lunch_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_lunch_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_lunch_file);
		    }
		
		    if (ss == 3) {
		       
		        printf("\n----------Dinner List-----------\n");
		        FILE *staff_dinner_file = fopen("D:\\wednesday_Staff_dinner.txt", "r");
		        if (staff_dinner_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_dinner_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_dinner_file);
		    }
		    if (ss == 4) {
		        
		        printf("\n.....Events Record........\n");
		        FILE *staffevent = fopen("D:\\Staffevent.txt", "r");
		        if (staffevent  == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staffevent )) {
		            printf("%s", line);
		        }
		        fclose(staffevent );
		    }
					break;
					//////
					/////////////////
					////////////
		case 4:
			
					printf("\n------Welcome--------\n1. Breakfast Customer list\n2. Lunch Customer List\n3. Dinner Customer List\n4.. Event Customer List\nEnter Your Choice : ");
		    		scanf("%d", &ss);
		
		    if (ss == 1) {
		        
		        printf("\n.....Breakfast List........\n");
		        FILE *staff_file = fopen("D:\\thursday_breakfast_Staff.txt", "r");
		        if (staff_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_file);
		    }
		
		    if (ss == 2) {
		        
		        printf("\n----------Lunch List-----------\n");
		        FILE *staff_lunch_file = fopen("D:\\thursday_Staff_lunch.txt", "r");
		        if (staff_lunch_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_lunch_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_lunch_file);
		    }
		
		    if (ss == 3) {
		       
		        printf("\n----------Dinner List-----------\n");
		        FILE *staff_dinner_file = fopen("D:\\thursday_Staff_dinner.txt", "r");
		        if (staff_dinner_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_dinner_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_dinner_file);
		    }
		    if (ss == 4) {
		        
		        printf("\n.....Events Record........\n");
		        FILE *staffevent = fopen("D:\\Staffevent.txt", "r");
		        if (staffevent  == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staffevent )) {
		            printf("%s", line);
		        }
		        fclose(staffevent );
		    }
					break;
					//////
					/////////////////
					////////////
		case 5:
			
					printf("\n------Welcome--------\n1. Breakfast Customer list\n2. Lunch Customer List\n3. Dinner Customer List\n4.. Event Customer List\nEnter Your Choice : ");
		    		scanf("%d", &ss);
		
		    if (ss == 1) {
		        
		        printf("\n.....Breakfast List........\n");
		        FILE *staff_file = fopen("D:\\friday_breakfast_Staff.txt", "r");
		        if (staff_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_file);
		    }
		
		    if (ss == 2) {
		        
		        printf("\n----------Lunch List-----------\n");
		        FILE *staff_lunch_file = fopen("D:\\friday_Staff_lunch.txt", "r");
		        if (staff_lunch_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_lunch_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_lunch_file);
		    }
		
		    if (ss == 3) {
		       
		        printf("\n----------Dinner List-----------\n");
		        FILE *staff_dinner_file = fopen("D:\\friday_Staff_dinner.txt", "r");
		        if (staff_dinner_file == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staff_dinner_file)) {
		            printf("%s", line);
		        }
		        fclose(staff_dinner_file);
		    }
		    if (ss == 4) {
		        
		        printf("\n.....Events Record........\n");
		        FILE *staffevent = fopen("D:\\Staffevent.txt", "r");
		        if (staffevent  == NULL) {
		            printf("File not found\n");
		            return;
		        }
		        while (fgets(line, sizeof(line), staffevent )) {
		            printf("%s", line);
		        }
		        fclose(staffevent );
		    }
					break;
					//////
					/////////////////
					////////////
					
							
		}
   
	}
	void monday() {
    FILE *mondayFile;
    int mc, is, ba;
    int tea = 0, omlet = 0, paratha = 0, bill = 0;
    
    mondayFile = fopen("D://Monday.txt", "a");  

    if (mondayFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    printf("\n1: Breakfast\n2: Lunch\n3: Dinner\n");
    scanf("%d", &mc);

    if (mc == 1) {
        do {
            
            printf("//.....breakfast........\n");
            printf("1: Tea Rs.30\n2: Omlet Rs.30\n3: Paratha Rs.40\n");
            scanf("%d", &is); 

            if (is == 1) {
                fprintf(mondayFile, "1 Tea = 30 ");
                tea++;
                bill += 30;
            } else if (is == 2) {
                fprintf(mondayFile, "1 Omlet = 30 ");
                omlet++;
                bill += 30;
            } else if (is == 3) {
                fprintf(mondayFile, "1 Paratha = 40 ");
                paratha++;
                bill += 40;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(Any Key) Exit(0) :");
            scanf("%d", &ba);
            
        } while (ba != 0);

        printf("\n%d Tea : Rs%d\n", tea, tea * 30);
        printf("%d Omlet : Rs%d\n", omlet, omlet * 30);
        printf("%d Paratha : Rs%d\n", paratha, paratha * 40);
        printf("\nYour total Bill is : Rs%d\n", bill);

        FILE *staffFile = fopen("D:\\monday_breakfast_Staff.txt", "a");
        if (staffFile != NULL) {
            fprintf(staffFile, "Customer Bill %d\n", bill);
            fclose(staffFile);
        }
		else {
            printf("Error opening Staff file!\n");
        }
    }

    fclose(mondayFile);
   
    if (mc == 2) {
    		int lis,lba; //lis=luch meal ,choice lba=buy again
    int Korma=0,Roti=0,Baryani=0,lbill=0; 
        // Lunch
        FILE *monday_lunch;
        monday_lunch = fopen("D://Monday_lunch.txt", "a");
        if (monday_lunch == NULL) {
            printf("Error opening lunch file!\n");
            return;
        }

        do {
           
            printf("//.....Lunch........\n");
            printf("1: Korma Rs.150\n2: Roti Rs.30\n3: Baryani Rs.100\n");
            scanf("%d", &lis); 

            if (lis == 1) {
                fprintf(monday_lunch, "1 Korma = 150 ");
                Korma++;
                lbill += 150;
            } else if (lis == 2) {
                fprintf(monday_lunch, "1 Roti = 30 ");
                Roti++;
                lbill += 30;
            } else if (lis == 3) {
                fprintf(monday_lunch, "1 Baryani = 100 ");
                Baryani++;
                lbill += 100;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &lba);
            
        } while (lba != 0);

        printf("\n%d Korma : Rs%d\n", Korma, Korma * 150);
        printf("%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Baryani : Rs%d\n", Baryani, Baryani * 100);
        printf("\nYour total Lunch Bill is : Rs%d\n", lbill);

        FILE *staff_lunch = fopen("D:\\monday_Staff_lunch.txt", "a");
        if (staff_lunch != NULL) {
            fprintf(staff_lunch, "Customer Lunch Bill %d\n", lbill);
            fclose(staff_lunch);
        } else {
            printf("Error opening Staff lunch file!\n");
        }

        fclose(monday_lunch);

    } else if (mc == 3) {
    	int dis,dba,Roti=0,dbill=0,Chicken=0,Fish=0;
       
        FILE *monday_dinner;
        monday_dinner = fopen("D://Monday_dinner.txt", "a");
        if (monday_dinner == NULL) {
            printf("Error opening dinner file!\n");
            return;
        }

        do {
           
            printf("//.....Dinner........\n");
            printf("1: Roti Rs.30\n2: Chicken Rs.250\n3: Fish Rs.200\n");
            scanf("%d", &dis);
            
            if (dis == 1) {
                fprintf(monday_dinner, "1 Roti = 30 ");
                Roti++;
                dbill += 30;
            } else if (dis == 2) {
                fprintf(monday_dinner, "1 Chicken = 250 ");
                Chicken++;
                dbill += 250;
            } else if (dis == 3) {
                fprintf(monday_dinner, "1 Fish = 200 ");
                Fish++;
                dbill += 200;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &dba);
            
        } while (dba != 0);

        printf("\n%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Chicken : Rs%d\n", Chicken, Chicken * 250);
        printf("%d Fish : Rs%d\n", Fish, Fish * 200);
        printf("\nYour total Dinner Bill is : Rs%d\n", dbill);

        FILE *staff_dinner = fopen("D:\\monday_Staff_dinner.txt", "a");
        if (staff_dinner != NULL) {
            fprintf(staff_dinner, "Customer Dinner Bill %d\n", dbill);
            fclose(staff_dinner);
        } else {
            printf("Error opening Staff dinner file!\n");
        }

        fclose(monday_dinner);
    } else {
        printf("You entered a wrong number.\n");
    }
}
void tuesday() 
{
    FILE *tuesdayFile;
    int mc, is, ba;
    int tea = 0, chana = 0, paratha = 0, bill = 0;
    
    tuesdayFile = fopen("D://tuesday.txt", "a");  

    if (tuesdayFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    printf("\n1: Breakfast\n2: Lunch\n3: Dinner\n");
    scanf("%d", &mc);

    if (mc == 1) {
        do {
            
            printf("//.....breakfast........\n");
            printf("1: Tea Rs.30\n2: chana Rs.30\n3: Paratha Rs.40\n");
            scanf("%d", &is); 

            if (is == 1) {
                fprintf(tuesdayFile, "1 Tea = 30 ");
                tea++;
                bill += 30;
            } else if (is == 2) {
                fprintf(tuesdayFile, "1 chana  = 30 ");
                chana++;
                bill += 30;
            } else if (is == 3) {
                fprintf(tuesdayFile, "1 Paratha = 40 ");
                paratha++;
                bill += 40;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(Any Key) Exit(0) :");
            scanf("%d", &ba);
            
        } while (ba != 0);

        printf("\n%d Tea : Rs%d\n", tea, tea * 30);
        printf("%d chana : Rs%d\n", chana, chana * 30);
        printf("%d Paratha : Rs%d\n", paratha, paratha * 40);
        printf("\nYour total Bill is : Rs%d\n", bill);

        FILE *staffFile = fopen("D:\\tuesday_breakfast_Staff.txt", "a");
        if (staffFile != NULL) {
            fprintf(staffFile, "Customer Bill %d\n", bill);
            fclose(staffFile);
        }
		else {
            printf("Error opening Staff file!\n");
        }
    }

    fclose(tuesdayFile);
   
    if (mc == 2) {
    		int lis,lba; //lis=luch meal ,choice lba=buy again
    int rost=0,Roti=0,Baryani=0,lbill=0; 
        // Lunch
        FILE *tuesday_lunch;
        tuesday_lunch = fopen("D://tuesday_lunch.txt", "a");
        if (tuesday_lunch == NULL) {
            printf("Error opening lunch file!\n");
            return;
        }

        do {
           
            printf("//.....Lunch........\n");
            printf("1: rost Rs.150\n2: Roti Rs.30\n3: Baryani Rs.100\n");
            scanf("%d", &lis); 

            if (lis == 1) {
                fprintf(tuesday_lunch, "1 rost = 150 ");
                rost++;
                lbill += 150;
            } else if (lis == 2) {
                fprintf(tuesday_lunch, "1 Roti = 30 ");
                Roti++;
                lbill += 30;
            } else if (lis == 3) {
                fprintf(tuesday_lunch, "1 Baryani = 100 ");
                Baryani++;
                lbill += 100;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &lba);
            
        } while (lba != 0);

        printf("\n%d rost : Rs%d\n", rost, rost * 150);
        printf("%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Baryani : Rs%d\n", Baryani, Baryani * 100);
        printf("\nYour total Lunch Bill is : Rs%d\n", lbill);

        FILE *staff_lunch = fopen("D:\\tuesday_Staff_lunch.txt", "a");
        if (staff_lunch != NULL) {
            fprintf(staff_lunch, "Customer Lunch Bill %d\n", lbill);
            fclose(staff_lunch);
        } else {
            printf("Error opening Staff lunch file!\n");
        }

        fclose(tuesday_lunch);

    } else if (mc == 3) {
    	int dis,dba,Roti=0,dbill=0,Chicken=0,chinese=0;
       
        FILE *tuesday_dinner;
        tuesday_dinner = fopen("D://tuesday_dinner.txt", "a");
        if (tuesday_dinner == NULL) {
            printf("Error opening dinner file!\n");
            return;
        }

        do {
           
            printf("//.....Dinner........\n");
            printf("1: Roti Rs.30\n2: Chicken Rs.250\n3: chinese Rs.200\n");
            scanf("%d", &dis);
            
            if (dis == 1) {
                fprintf(tuesday_dinner, "1 Roti = 30 ");
                Roti++;
                dbill += 30;
            } else if (dis == 2) {
                fprintf(tuesday_dinner, "1 chinese = 250 ");
                chinese++;
                dbill += 250;
            } else if (dis == 3) {
                fprintf(tuesday_dinner, "1 chinese = 200 ");
                chinese++;
                dbill += 200;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &dba);
            
        } while (dba != 0);

        printf("\n%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Chicken : Rs%d\n", Chicken, Chicken * 250);
        printf("%d chinese : Rs%d\n", chinese, chinese * 200);
        printf("\nYour total Dinner Bill is : Rs%d\n", dbill);

        FILE *staff_dinner = fopen("D:\\tuesday_Staff_dinner.txt", "a");
        if (staff_dinner != NULL) {
            fprintf(staff_dinner, "Customer Dinner Bill %d\n", dbill);
            fclose(staff_dinner);
        } else {
            printf("Error opening Staff dinner file!\n");
        }

        fclose(tuesday_dinner);
    } else {
        printf("You entered a wrong number.\n");
    }
}
void wednesday() {
    FILE *wednesdayFile;
    int mc, is, ba;
    int tea = 0, omlet = 0, bread = 0, bill = 0;
    
    wednesdayFile = fopen("D://wednesday.txt", "a");  

    if (wednesdayFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    printf("\n1: Breakfast\n2: Lunch\n3: Dinner\n");
    scanf("%d", &mc);

    if (mc == 1) {
        do {
            
            printf("//.....breakfast........\n");
            printf("1: Tea Rs.30\n2: Omlet Rs.30\n3: bread Rs.40\n");
            scanf("%d", &is); 

            if (is == 1) {
                fprintf(wednesdayFile, "1 Tea = 30 ");
                tea++;
                bill += 30;
            } else if (is == 2) {
                fprintf(wednesdayFile, "1 Omlet = 30 ");
                omlet++;
                bill += 30;
            } else if (is == 3) {
                fprintf(wednesdayFile, "1 bread = 40 ");
                bread++;
                bill += 40;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(Any Key) Exit(0) :");
            scanf("%d", &ba);
            
        } while (ba != 0);

        printf("\n%d Tea : Rs%d\n", tea, tea * 30);
        printf("%d Omlet : Rs%d\n", omlet, omlet * 30);
        printf("%d Paratha : Rs%d\n", bread, bread * 40);
        printf("\nYour total Bill is : Rs%d\n", bill);

        FILE *staffFile = fopen("D:\\wednesday_breakfast_Staff.txt", "a");
        if (staffFile != NULL) {
            fprintf(staffFile, "Customer Bill %d\n", bill);
            fclose(staffFile);
        }
		else {
            printf("Error opening Staff file!\n");
        }
    }

    fclose(wednesdayFile);
   
    if (mc == 2) {
    		int lis,lba; //lis=luch meal ,choice lba=buy again
    int Korma=0,Roti=0,pulao=0,lbill=0; 
        // Lunch
        FILE *wednesday_lunch;
        wednesday_lunch = fopen("D://wednesday_lunch.txt", "a");
        if (wednesday_lunch == NULL) {
            printf("Error opening lunch file!\n");
            return;
        }

        do {
           
            printf("//.....Lunch........\n");
            printf("1: Korma Rs.150\n2: Roti Rs.30\n3: pulao Rs.100\n");
            scanf("%d", &lis); 

            if (lis == 1) {
                fprintf(wednesday_lunch, "1 Korma = 150 ");
                Korma++;
                lbill += 150;
            } else if (lis == 2) {
                fprintf(wednesday_lunch, "1 Roti = 30 ");
                Roti++;
                lbill += 30;
            } else if (lis == 3) {
                fprintf(wednesday_lunch, "1 pulao = 100 ");
                pulao++;
                lbill += 100;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &lba);
            
        } while (lba != 0);

        printf("\n%d Korma : Rs%d\n", Korma, Korma * 150);
        printf("%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d pulao : Rs%d\n", pulao, pulao * 100);
        printf("\nYour total Lunch Bill is : Rs%d\n", lbill);

        FILE *staff_lunch = fopen("D:\\wednesday_Staff_lunch.txt", "a");
        if (staff_lunch != NULL) {
            fprintf(staff_lunch, "Customer Lunch Bill %d\n", lbill);
            fclose(staff_lunch);
        } else {
            printf("Error opening Staff lunch file!\n");
        }

        fclose(wednesday_lunch);

    } else if (mc == 3) {
    	int dis,dba,beaf=0,dbill=0,Chicken=0,Fish=0;
       
        FILE *wednesday_dinner;
        wednesday_dinner = fopen("D://wednesday_dinner.txt", "a");
        if (wednesday_dinner == NULL) {
            printf("Error opening dinner file!\n");
            return;
        }

        do {
           
            printf("//.....Dinner........\n");
            printf("1: beaf Rs.30\n2: Chicken Rs.250\n3: Fish Rs.200\n");
            scanf("%d", &dis);
            
            if (dis == 1) {
                fprintf(wednesday_dinner, "1 beaf = 30 ");
                beaf++;
                dbill += 30;
            } else if (dis == 2) {
                fprintf(wednesday_dinner, "1 Chicken = 250 ");
                Chicken++;
                dbill += 250;
            } else if (dis == 3) {
                fprintf(wednesday_dinner, "1 Fish = 200 ");
                Fish++;
                dbill += 200;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &dba);
            
        } while (dba != 0);

        printf("\n%d beaf : Rs%d\n", beaf, beaf * 30);
        printf("%d Chicken : Rs%d\n", Chicken, Chicken * 250);
        printf("%d Fish : Rs%d\n", Fish, Fish * 200);
        printf("\nYour total Dinner Bill is : Rs%d\n", dbill);

        FILE *staff_dinner = fopen("D:\\wednesday_Staff_dinner.txt", "a");
        if (staff_dinner != NULL) {
            fprintf(staff_dinner, "Customer Dinner Bill %d\n", dbill);
            fclose(staff_dinner);
        } else {
            printf("Error opening Staff dinner file!\n");
        }

        fclose(wednesday_dinner);
    } else {
        printf("You entered a wrong number.\n");
    }
}
void thursday() {
    FILE *thursdayFile;
    int mc, is, ba;
    int coffee = 0, omlet = 0, paratha = 0, bill = 0;
    
    thursdayFile = fopen("D://thursday.txt", "a");  

    if (thursdayFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    printf("\n1: Breakfast\n2: Lunch\n3: Dinner\n");
    scanf("%d", &mc);

    if (mc == 1) {
        do {
            
            printf("//.....breakfast........\n");
            printf("1: coffee Rs.30\n2: Omlet Rs.30\n3: Paratha Rs.40\n");
            scanf("%d", &is); 

            if (is == 1) {
                fprintf(thursdayFile, "1 coffee = 30 ");
                coffee++;
                bill += 30;
            } else if (is == 2) {
                fprintf(thursdayFile, "1 Omlet = 30 ");
                omlet++;
                bill += 30;
            } else if (is == 3) {
                fprintf(thursdayFile, "1 Paratha = 40 ");
                paratha++;
                bill += 40;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(Any Key) Exit(0) :");
            scanf("%d", &ba);
            
        } while (ba != 0);

        printf("\n%d coffee : Rs%d\n", coffee, coffee * 30);
        printf("%d Omlet : Rs%d\n", omlet, omlet * 30);
        printf("%d Paratha : Rs%d\n", paratha, paratha * 40);
        printf("\nYour total Bill is : Rs%d\n", bill);

        FILE *staffFile = fopen("D:\\thursday_breakfast_Staff.txt", "a");
        if (staffFile != NULL) {
            fprintf(staffFile, "Customer Bill %d\n", bill);
            fclose(staffFile);
        }
		else {
            printf("Error opening Staff file!\n");
        }
    }

    fclose(thursdayFile);
   
    if (mc == 2) {
    		int lis,lba; //lis=luch meal ,choice lba=buy again
    int Korma=0,Roti=0,chinese=0,lbill=0; 
        // Lunch
        FILE *thursday_lunch;
        thursday_lunch = fopen("D://thursday_lunch.txt", "a");
        if (thursday_lunch == NULL) {
            printf("Error opening lunch file!\n");
            return;
        }

        do {
           
            printf("//.....Lunch........\n");
            printf("1: Korma Rs.150\n2: Roti Rs.30\n3: Baryani Rs.100\n");
            scanf("%d", &lis); 

            if (lis == 1) {
                fprintf(thursday_lunch, "1 Korma = 150 ");
                Korma++;
                lbill += 150;
            } else if (lis == 2) {
                fprintf(thursday_lunch, "1 Roti = 30 ");
                Roti++;
                lbill += 30;
            } else if (lis == 3) {
                fprintf(thursday_lunch, "1 chinese = 100 ");
                chinese++;
                lbill += 100;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &lba);
            
        } while (lba != 0);

        printf("\n%d Korma : Rs%d\n", Korma, Korma * 150);
        printf("%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d chinese : Rs%d\n", chinese, chinese * 100);
        printf("\nYour total Lunch Bill is : Rs%d\n", lbill);

        FILE *staff_lunch = fopen("D:\\thursday_lunch.txt", "a");
        if (staff_lunch != NULL) {
            fprintf(staff_lunch, "Customer Lunch Bill %d\n", lbill);
            fclose(staff_lunch);
        } else {
            printf("Error opening Staff lunch file!\n");
        }

        fclose(thursday_lunch);

    } else if (mc == 3) {
    	int dis,dba,Roti=0,dbill=0,Chicken=0,sajji=0;
       
        FILE *thursday_dinner;
        thursday_dinner = fopen("D://thursday_dinner.txt", "a");
        if (thursday_dinner == NULL) {
            printf("Error opening dinner file!\n");
            return;
        }

        do {
           
            printf("//.....Dinner........\n");
            printf("1: Roti Rs.30\n2: Chicken Rs.250\n3: sajji Rs.200\n");
            scanf("%d", &dis);
            
            if (dis == 1) {
                fprintf(thursday_dinner, "1 Roti = 30 ");
                Roti++;
                dbill += 30;
            } else if (dis == 2) {
                fprintf(thursday_dinner, "1 Chicken = 250 ");
                Chicken++;
                dbill += 250;
            } else if (dis == 3) {
                fprintf(thursday_dinner, "1 sajji = 200 ");
                sajji++;
                dbill += 200;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &dba);
            
        } while (dba != 0);

        printf("\n%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Chicken : Rs%d\n", Chicken, Chicken * 250);
        printf("%d sajji : Rs%d\n", sajji, sajji * 200);
        printf("\nYour total Dinner Bill is : Rs%d\n", dbill);

        FILE *staff_dinner = fopen("D:\\thursday_Staff_dinner.txt", "a");
        if (staff_dinner != NULL) {
            fprintf(staff_dinner, "Customer Dinner Bill %d\n", dbill);
            fclose(staff_dinner);
        } else {
            printf("Error opening Staff dinner file!\n");
        }

        fclose(thursday_dinner);
    } else {
        printf("You entered a wrong number.\n");
    }
}
void friday() {
    FILE *fridayFile;
    int mc, is, ba;
    int tea = 0, omlet = 0, paratha = 0, bill = 0;
    
    fridayFile = fopen("D://friday.txt", "a");  

    if (fridayFile == NULL) {
        printf("Error opening file!\n");
        return;
    }

   
    printf("\n1: Breakfast\n2: Lunch\n3: Dinner\n");
    scanf("%d", &mc);

    if (mc == 1) {
        do {
            
            printf("//.....breakfast........\n");
            printf("1: Tea Rs.30\n2: Omlet Rs.30\n3: Paratha Rs.40\n");
            scanf("%d", &is); 

            if (is == 1) {
                fprintf(fridayFile, "1 Tea = 30 ");
                tea++;
                bill += 30;
            } else if (is == 2) {
                fprintf(fridayFile, "1 Omlet = 30 ");
                omlet++;
                bill += 30;
            } else if (is == 3) {
                fprintf(fridayFile, "1 Paratha = 40 ");
                paratha++;
                bill += 40;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(Any Key) Exit(0) :");
            scanf("%d", &ba);
            
        } while (ba != 0);

        printf("\n%d Tea : Rs%d\n", tea, tea * 30);
        printf("%d Omlet : Rs%d\n", omlet, omlet * 30);
        printf("%d Paratha : Rs%d\n", paratha, paratha * 40);
        printf("\nYour total Bill is : Rs%d\n", bill);

        FILE *staffFile = fopen("D:\\friday_breakfast_Staff.txt", "a");
        if (staffFile != NULL) {
            fprintf(staffFile, "Customer Bill %d\n", bill);
            fclose(staffFile);
        }
		else {
            printf("Error opening Staff file!\n");
        }
    }

    fclose(fridayFile);
   
    if (mc == 2) {
    		int lis,lba; //lis=luch meal ,choice lba=buy again
    int Korma=0,Roti=0,Baryani=0,lbill=0; 
        // Lunch
        FILE *friday_lunch;
        friday_lunch = fopen("D://friday_lunch.txt", "a");
        if (friday_lunch == NULL) {
            printf("Error opening lunch file!\n");
            return;
        }

        do {
           
            printf("//.....Lunch........\n");
            printf("1: Korma Rs.150\n2: Roti Rs.30\n3: Baryani Rs.100\n");
            scanf("%d", &lis); 

            if (lis == 1) {
                fprintf(friday_lunch, "1 Korma = 150 ");
                Korma++;
                lbill += 150;
            } else if (lis == 2) {
                fprintf(friday_lunch, "1 Roti = 30 ");
                Roti++;
                lbill += 30;
            } else if (lis == 3) {
                fprintf(friday_lunch, "1 Baryani = 100 ");
                Baryani++;
                lbill += 100;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &lba);
            
        } while (lba != 0);

        printf("\n%d Korma : Rs%d\n", Korma, Korma * 150);
        printf("%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Baryani : Rs%d\n", Baryani, Baryani * 100);
        printf("\nYour total Lunch Bill is : Rs%d\n", lbill);

        FILE *staff_lunch = fopen("D:\\friday_Staff_lunch.txt", "a");
        if (staff_lunch != NULL) {
            fprintf(staff_lunch, "Customer Lunch Bill %d\n", lbill);
            fclose(staff_lunch);
        } else {
            printf("Error opening Staff lunch file!\n");
        }

        fclose(friday_lunch);

    } else if (mc == 3) {
    	int dis,dba,Roti=0,dbill=0,Chicken=0,Fish=0;
       
        FILE *friday_dinner;
        friday_dinner = fopen("D://friday_dinner.txt", "a");
        if (friday_dinner == NULL) {
            printf("Error opening dinner file!\n");
            return;
        }

        do {
           
            printf("//.....Dinner........\n");
            printf("1: Roti Rs.30\n2: Chicken Rs.250\n3: Fish Rs.200\n");
            scanf("%d", &dis);
            
            if (dis == 1) {
                fprintf(friday_dinner, "1 Roti = 30 ");
                Roti++;
                dbill += 30;
            } else if (dis == 2) {
                fprintf(friday_dinner, "1 Chicken = 250 ");
                Chicken++;
                dbill += 250;
            } else if (dis == 3) {
                fprintf(friday_dinner, "1 Fish = 200 ");
                Fish++;
                dbill += 200;
            } else {
                printf("Invalid choice! Please select again.\n");
                continue;
            }

            printf("Buy again(1) Exit(0) :");
            scanf("%d", &dba);
            
        } while (dba != 0);

        printf("\n%d Roti : Rs%d\n", Roti, Roti * 30);
        printf("%d Chicken : Rs%d\n", Chicken, Chicken * 250);
        printf("%d Fish : Rs%d\n", Fish, Fish * 200);
        printf("\nYour total Dinner Bill is : Rs%d\n", dbill);

        FILE *staff_dinner = fopen("D:\\friday_Staff_dinner.txt", "a");
        if (staff_dinner != NULL) {
            fprintf(staff_dinner, "Customer Dinner Bill %d\n", dbill);
            fclose(staff_dinner);
        } else {
            printf("Error opening Staff dinner file!\n");
        }

        fclose(friday_dinner);
    } else {
        printf("You entered a wrong number.\n");
    }
}



void customer() {
    int dc;
   
    printf("Select Day :\n1: Monday\n2: Tuesday\n3: Wednesday\n4: Thursday\n5: Friday\n");
    scanf("%d", &dc); 
    switch (dc) {
        case 1:
            monday();
            break;
        case 2:
            tuesday();  
            break;
        case 3:
             wednesday();
            break;
        case 4:
             thursday();
            break;
        case 5:
             friday();
            break;
        default:
            printf("You entered a wrong number.\n");
    }
}

void customerevent()
{
	int dis;
	int fish=0;int korma=0;int roti=0;int Baryani=0;int pulao=0;int chinese=0;int colddrinks=0;
	int reservedtable=30;
	int table,dt;
	int bill=0;
	int tablecharge=50;
	int tabledecorations=100;
	printf("entre no of table below 30  \n");
	scanf("%d",&table);
	printf("Table Decorated(1) Simple Table(0) \n");
	scanf("%d",&dt);
	if(table<=30){

	if(dt==1){
		tablecharge=(tablecharge*table)+(table*tabledecorations);
	}else{
		tablecharge=tablecharge*table;
	}
	}
		//\n2: Chicken Rs.250\n3: Fish Rs.200\n4: Korma Rs.250\n5: Barynai Rs.200\n6: colddrink Rs.100\n7: Pulao Rs.200\n")
 			printf("//.....Menu........\n");
            printf(" Quantity of Roti Rs.30: ");
            scanf("%d", &roti);
            bill+=roti*30;
            printf(" Quantity of Fish Rs.200: ");
            scanf("%d", &fish);
           bill+=fish*200;
            printf(" Quantity of Chinese Rs.250: ");
            scanf("%d", &chinese);
           bill+=chinese*250;
            printf(" Quantity of Korma Rs.250: ");
            scanf("%d", &korma);
           bill+=korma*250;
            printf(" Quantity of Barynai Rs.200: ");
            scanf("%d", &Baryani);
           bill+=Baryani*200;
            printf(" Quantity of  colddrink Rs.100: ");
            scanf("%d", &colddrinks);
         bill+=colddrinks*100;
            printf(" Quantity of  Pulao Rs.200: ");
            scanf("%d", &pulao);
         bill+=pulao*200;
            printf(" Your Total Bill is Rs : %d ",	tablecharge+bill);
  FILE *staffevent = fopen("D:\\Staffevent.txt", "a");
        if (staffevent!= NULL) {
            fprintf(staffevent, "Customer Bill %d\n", tablecharge+bill);  
            fclose(staffevent);
        }
		else {
            printf("Error opening Staff file!\n");
        }

}

int main() 
{
	int a;

    do {
        printf("\n.....Welcome........\n");
        printf("1: Staff\n2: Customer\n3: Events\n");
        scanf("%d", &a);

        switch (a) {
            case 1:
                staff();
                break;
            case 2:
                customer();
                break;
            case 3:
			   customerevent();   
			   break; 
            default:
                printf("\nYou entered a wrong number\n");
                break;
        }

        printf("\nExit(0) continue(1): ");
        scanf("%d", &a);
       
    } while (a != 0);

    return 0;
}