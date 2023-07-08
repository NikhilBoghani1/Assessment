#include<stdio.h>
main(){
	int qty,total=0,grandtotal=0,choice,i;
	char ch;
	do{
	lable:{
	printf("\npress 1 for burger and price is = 80");
	printf("\npress 2 for pizza and price is = 200");
	printf("\npress 3 for panipuri and price is = 30");
	printf("\npress 4 for vadapav and price is = 30");
	printf("\npress 5 for sandwich and price is = 130");
	printf("\npress 6 for frenky and price is = 60");

	printf("\nenter the choice=");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:{
			
			printf("\nyou are choose burger");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			for(i=1;i<=qty;i++){
				total=80*qty;
			}
			printf("Amount :%d",total);
			break;
		}
			
			
		
			
		case 2:
			printf("\nyou are choose pizza");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			
			for(i=1;i<=qty;i++){
				total=200*qty;
			}
			printf("Amount :%d",total);
			
			break;
			
		case 3:
			printf("\nyou are choose panipuri");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			
			for(i=1;i<=qty;i++){
				total=30*qty;
			}
			printf("Amount :%d",total);
			
			break;
			
		case 4:
			printf("\nyou are choose vadapav");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			
			for(i=1;i<=qty;i++){
				total=30*qty;
			}
			printf("Amount :%d",total);
			
			break;
			
		case 5:
			printf("\nyou are choose sandwich");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			
			for(i=1;i<=qty;i++){
				total=130*qty;
			}
			printf("Amount :%d",total);
			
			break;
			
		case 6:
			printf("\nyou are choose frenky");
			printf("\nplese Enter the qty:");
			scanf("%d",&qty);
			
			for(i=1;i<=qty;i++){
				total=60*qty;
			}
			printf("Amount :%d",total);
			
			break;
			
			default:{
				printf("Not exits in menu");
				printf("\n");
				goto lable;
				break;
			}
			
		}
	
	grandtotal+=total;
		printf("\n Total amount is=%d",grandtotal);
	
	printf("\n\nwould you like some other?=");
	scanf("%s",&ch);
}
}while(ch!='n');
	if(ch=='y'){
		goto lable;
	}
	else if(ch=='n'){
		
		printf("\n your Bill");
		
		printf("\n Total amount is=%d",grandtotal);
		printf("\n Thank you");
	}
	else{
		printf("Wrong charcter");
	}
	return 0;
	
}
