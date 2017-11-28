#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define STRING_SIZE 20

void total_gst(int total,float gst){
	
	float sum=total-(total*(gst/3)*0.01);
	
		if(sum<10){	printf("\t  %c Total Amount Payable %c    %.1f Rs     %c\n",186,186,sum,186);	}
			
		else if(sum<100){	printf("\t  %c Total Amount Payable %c    %.1f Rs    %c\n",186,186,sum,186);	}
			
		else if(sum<1000){	printf("\t  %c Total Amount Payable %c    %.1f Rs   %c\n",186,186,sum,186);	}
			
		else{	printf("\t  %c Total Amount Payable %c    %.1f Rs  %c\n",186,186,sum,186);	}
			
		return ;
	
}

void menu_open(int i){
	
	for(i=0;i<58;i++){	if(i==0)	printf("%c",201);	printf("%c",205);	if(i==57)	printf("%c",187);	}
		
	printf("\n  %c    \t  \t\t   \tMENU \t\t\t     %c",186,186);
	printf("\n  ");
		
	for(i=0;i<55;i++){	if(i==0)	printf("%c",204);	printf("%c",205);	if(i==21||i==37||i==48) 	printf("%c",203);	if(i==54)	printf("%c",185);	}
		
	printf("\n  %c      CATEGORIES      %c      NAME      %c   PRICE   %c  ID  %c",186,186,186,186,186);
	printf("\n  ");
		
	for(i=0;i<55;i++){	if(i==0)	printf("%c",204);	printf("%c",205);	if(i==21||i==37||i==48) 	printf("%c",206);	if(i==54)	printf("%c",185);	}
		
	printf("\n  %c                      %c  %cMILK%c        %c   10 Rs   %c  1A  %c\n",186,186,254,251,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c       GROCERIES      %c  %cSUGAR%c       %c   20 Rs   %c  2A  %c\n",186,186,254,253,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c                      %c  %cGHEE%c        %c   30 Rs   %c  3A  %c",186,186,254,251,186,186,186);
	printf("\n  ");	
	
	for(i=0;i<55;i++){	if(i==0)	printf("%c",204);	printf("%c",205);	if(i==21||i==37||i==48)		printf("%c",206);	if(i==54)	printf("%c",185);	}
		
	printf("\n  %c                      %c  %cCOMPUTER     %c   40 Rs   %c  1B  %c\n",186,186,254,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c        LUXURY        %c  %cCAR          %c   50 Rs   %c  2B  %c\n",186,186,254,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c                      %c  %cCIGARETTE    %c   60 Rs   %c  3B  %c",186,186,254,186,186,186);
	printf("\n  ");	
	
	for(i=0;i<55;i++){	if(i==0)	printf("%c",204);	printf("%c",205);	if(i==21||i==37||i==48)		printf("%c",206);	if(i==54)	printf("%c",185);	}
	
	printf("\n  %c                      %c  %cHOTEL        %c   70 Rs   %c  1C  %c\n",186,186,254,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c       SERVICES       %c  %cAIRPLANE     %c   80 Rs   %c  2C  %c\n",186,186,254,186,186,186);
	printf("  %c                      %c                %c           %c      %c\n",186,186,186,186,186);
	printf("  %c                      %c  %cMEDICAL      %c   90 Rs   %c  3C  %c",186,186,254,186,186,186);
	printf("\n  ");	
	
	for(i=0;i<55;i++){	if(i==0)	printf("%c",200);	printf("%c",205);	if(i==21||i==37||i==48)		printf("%c",202);	if(i==54)	printf("%c",188);	}	
		
	printf("\n\t\t\t\t\t   %cper Kg, %cper Liter",253,251);
	
	return;
	
}

end(){
	
	printf("\n--------------------------------");
	printf("\n\t  %cThank You %c",7,1);
	exit(0);
	
}

struct item{
	
	int product_quantity;
		
}*pointer;

struct{
	
	char product_id[3];
	
}id;

int count_bill_no=0;

main(){
	
	int i;

		printf("  ");
		
		for(i=0;i<58;i++){	if(i==0)	printf("%c",218);	printf("%c",196);	if(i==57)	printf("%c",191);	}
		
		printf("\n  %c\t \t \tGST CALCULATOR\t\t\t     %c\n",179,179);
		
		printf("  ");
		
		for(i=0;i<58;i++){	if(i==0)	printf("%c",192);	printf("%c",196);	if(i==57)	printf("%c",217);	}
				
		printf("\n\n\n");
		
	char customer_name_first[30],customer_name_last[30];
		
		printf("%c   Enter Your Name | ",207);
		scanf("%s",customer_name_first);
		
		if(scanf("%[^\n]s",customer_name_last))		strcat(customer_name_first,customer_name_last);
	
	int count_ugst=0,count_igst=0;
	char state[5];
		
		printf("\n%c%c   Are You a Resident of Union Territory? | ",7,207);
		scanf("%s",state);
			
		if((!strcmp("yes",state))||(!strcmp("YES",state))||(!strcmp("Yes",state))){
			
			count_ugst++;
			
		}
		
		printf("\n%c%c   Is this a Inter-State Transaction? | ",7,207);
		scanf("%s",state);
			
		if((!strcmp("yes",state))||(!strcmp("YES",state))||(!strcmp("Yes",state))){
			
			count_igst++;
			
		}
			
		printf("\n\n\n  ");
		
//menu					
		
		menu_open(i);
				
//menu

		printf("\n\n");
		
		printf("Press Any Key to Continue . . .");
		
		getch();
		
		printf("%c\n\n  ",7);
		
//selection bucket

		for(i=0;i<40;i++){	if(i==0)	printf("%c",218);	printf("%c",196);	if(i==39)	printf("%c",191);	}
		
		printf("\n  %c     \tSELECTION BUCKET \t   %c\n",179,179);
		
		printf("  ");
		
		for(i=0;i<40;i++){	if(i==0)	printf("%c",192);	printf("%c",196);	if(i==39)	printf("%c",217);	}
		
		printf("\n  ");
		
	char temp,*product_name,product_name_show[3][STRING_SIZE];
	
		product_name=(char *)malloc(sizeof(char));
		
		pointer=(struct item*)malloc(3*sizeof(struct item));
		
		for(i=0;i<3;i++){
			
			int j=0;
			
				printf("\n%c %cEnter name of the item [%d] | ",207,218,i+1);
			
				getchar();
			
				while((temp=getchar())!='\n'){
					
					realloc(product_name,sizeof(char));
					product_name[j++]=temp;
					
				}
			
				product_name[j]='\0';
				strcpy(product_name_show[i],product_name);
				
				printf("%c  %c%cEnter product Quantity    | ",7,195,196);
				scanf("%d",&(pointer+i)->product_quantity);
				
				printf("%c  %c%cEnter product ID          | ",7,192,196);
				scanf("%s",&id.product_id);				
			
				printf("\n");
			
	}
	
//selection bucket
		
		printf("\n  ");
		
//bill

		for(i=0;i<58;i++){	if(i==0)	printf("%c",218);	printf("%c",196);	if(i==57)	printf("%c",191);	}
		
		printf("\n  %c\t\t      ANIRUDDHA PVT. LTD.%c\t\t     %c\n",179,184,179);
		
		printf("  ");
		
		for(i=0;i<58;i++){	if(i==0)	printf("%c",192);	printf("%c",196);	if(i==57)	printf("%c",217);	}
				
		printf("\n\n\n\n");
		
		printf("\t   NAME     | %s\n",customer_name_first);
		printf("\t   DATE     | ");
		
		time_t t = time(NULL);
		
	struct tm tm = *localtime(&t);
		
		printf("%d/%d/%d\n",tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900);
		
		printf("\t   BILL No. | %d\n",++count_bill_no);
		
		printf("\n\t  ");
		
		for(i=0;i<41;i++){	if(i==0)	printf("%c",201);	if(i==22||i==27||i==36)	printf("%c",203);	printf("%c",205);	if(i==40)	printf("%c",187);	}
		
		printf("\n\t  %c         ITEM         %c QNT%c%c  PRICE  %c GST %c\n\t  ",186,186,251,186,186,186);
		
		for(i=0;i<41;i++){	if(i==0)	printf("%c",204);	if(i==22||i==27||i==36)	printf("%c",206);	printf("%c",205);	if(i==40)	printf("%c",185);	}
		
		printf("\n");
		
	int total=0,count_cess=0;
	float gst=0;
		
		for(i=0;i<3;i++){
			
			if((!strcmp("milk",product_name_show[i]))||(!strcmp("MILK",product_name_show[i]))||(!strcmp("Milk",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<10){
					
					printf("\t  %c \t    MILK \t %c  %d  %c   %d Rs %c  0%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*10,186,186);
					total+=((pointer+i)->product_quantity*10);
					gst+=0;
					
				}else{
					
					printf("\t  %c \t    MILK \t %c  %d %c  %d Rs %c  0%% %c\n",186,186,10,186,10*10,186,186);
					total+=(10*10);
					gst+=0;
					
				}
	
			}else if((!strcmp("sugar",product_name_show[i]))||(!strcmp("SUGAR",product_name_show[i]))||(!strcmp("Sugar",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<5){
					
					printf("\t  %c \t    SUGAR\t %c  %d  %c   %d Rs %c  5%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*20,186,186);
					total+=((pointer+i)->product_quantity*20);
					gst+=5;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c \t    SUGAR\t %c  %d  %c  %d Rs %c  5%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*20,186,186);
					total+=((pointer+i)->product_quantity*20);
					gst+=5;
					
				}else{
					
					printf("\t  %c \t    SUGAR\t %c  %d %c  %d Rs %c  5%% %c\n",186,186,10,186,10*20,186,186);
					total+=(10*20);
					gst+=5;
					
				}
				
			}else if((!strcmp("ghee",product_name_show[i]))||(!strcmp("GHEE",product_name_show[i]))||(!strcmp("Ghee",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<4){
					
					printf("\t  %c \t    GHEE \t %c  %d  %c   %d Rs %c 12%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*30,186,186);
					total+=((pointer+i)->product_quantity*30);
					gst+=12;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c \t    GHEE \t %c  %d  %c  %d Rs %c 12%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*30,186,186);
					total+=((pointer+i)->product_quantity*30);
					gst+=12;
					
				}else{
					
					printf("\t  %c \t    GHEE \t %c  %d %c  %d Rs %c 12%% %c\n",186,186,10,186,10*30,186,186);
					total+=(10*30);
					gst+=12;
					
				}
				
			}else if((!strcmp("computer",product_name_show[i]))||(!strcmp("COMPUTER",product_name_show[i]))||(!strcmp("Computer",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<3){
					
					printf("\t  %c\t   COMPUTER      %c  %d  %c   %d Rs %c 18%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*40,186,186);
					total+=((pointer+i)->product_quantity*40);
					gst+=18;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c\t   COMPUTER      %c  %d  %c  %d Rs %c 18%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*40,186,186);
					total+=((pointer+i)->product_quantity*40);
					gst+=18;
					
				}else{
					
					printf("\t  %c\t   COMPUTER      %c  %d %c  %d Rs %c 18%% %c\n",186,186,10,186,10*40,186,186);
					total+=(10*40);
					gst+=18;
					
				}
				
			}else if((!strcmp("car",product_name_show[i]))||(!strcmp("CAR",product_name_show[i]))||(!strcmp("Car",product_name_show[i]))){
				
				count_cess++;
				
				if((pointer+i)->product_quantity<2){
					
					printf("\t  %c  \t    CAR \t %c  %d  %c   %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*50,186,186);
					total+=((pointer+i)->product_quantity*50);
					gst+=28;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c  \t    CAR \t %c  %d  %c  %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*50,186,186);
					total+=((pointer+i)->product_quantity*50);
					gst+=28;
					
				}else{
					
					printf("\t  %c  \t    CAR \t %c  %d %c  %d Rs %c 28%% %c\n",186,186,10,186,10*50,186,186);
					total+=(10*50);
					gst+=28;
					
				}
				
			}else if((!strcmp("cigarette",product_name_show[i]))||(!strcmp("CIGARETTE",product_name_show[i]))||(!strcmp("Cigarette",product_name_show[i]))){
				
				count_cess++;
				
				if((pointer+i)->product_quantity<2){
					
					printf("\t  %c       CIGARETTE      %c  %d  %c   %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*60,186,186);
					total+=((pointer+i)->product_quantity*60);
					gst+=28;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c       CIGARETTE      %c  %d  %c  %d Rs %c 12%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*60,186,186);
					total+=((pointer+i)->product_quantity*60);
					gst+=28;
					
				}else{
					
					printf("\t  %c       CIGARETTE      %c  %d %c  %d Rs %c 28%% %c\n",186,186,10,186,10*60,186,186);
					total+=(10*60);
					gst+=28;
					
				}
				
			}else if((!strcmp("hotel",product_name_show[i]))||(!strcmp("HOTEL",product_name_show[i]))||(!strcmp("Hotel",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<2){
					
					printf("\t  %c \t    HOTEL\t %c  %d  %c   %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*70,186,186);
					total+=((pointer+i)->product_quantity*70);
					gst+=28;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c \t    HOTEL\t %c  %d  %c  %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*70,186,186);
					total+=((pointer+i)->product_quantity*70);
					gst+=28;
					
				}else{
					
					printf("\t  %c \t    HOTEL\t %c  %d %c  %d Rs %c 28%% %c\n",186,186,10,186,10*70,186,186);
					total+=(10*70);
					gst+=28;
					
				}
				
			}else if((!strcmp("airplane",product_name_show[i]))||(!strcmp("AIRPLANE",product_name_show[i]))||(!strcmp("Airplane",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<2){
					
					printf("\t  %c\t    AIRPLANE     %c  %d  %c   %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*80,186,186);
					total+=((pointer+i)->product_quantity*80);
					gst+=28;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c\t    AIRPLANE     %c  %d  %c  %d Rs %c 28%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*80,186,186);
					total+=((pointer+i)->product_quantity*80);
					gst+=28;
					
				}else{
					
					printf("\t  %c\t    AIRPLANE     %c  %d %c  %d Rs %c 28%% %c\n",186,186,10,186,10*80,186,186);
					total+=(10*80);
					gst+=28;
					
				}
				
			}else if((!strcmp("medical",product_name_show[i]))||(!strcmp("MEDICAL",product_name_show[i]))||(!strcmp("Medical",product_name_show[i]))){
				
				if((pointer+i)->product_quantity<2){
					
					printf("\t  %c\t    MEDICAL      %c  %d  %c   %d Rs %c  0%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*90,186,186);
					total+=((pointer+i)->product_quantity*90);
					gst+=0;
					
				}else if((pointer+i)->product_quantity<10){
					
					printf("\t  %c\t    MEDICAL      %c  %d  %c  %d Rs %c  0%% %c\n",186,186,(pointer+i)->product_quantity,186,(pointer+i)->product_quantity*90,186,186);
					total+=((pointer+i)->product_quantity*90);
					gst+=0;
					
				}else{
					
					printf("\t  %c\t    MEDICAL      %c  %d %c  %d Rs %c  0%% %c\n",186,186,10,186,10*90,186,186);
					total+=(10*90);
					gst+=0;
					
				}
				
			}
			
			printf("\t  %c      \t\t %c     %c \t %c     %c\n",186,186,186,186,186);
			
		}	
		
		printf("\t  ");
		
		for(i=0;i<41;i++){	if(i==0)	printf("%c",204);	if(i==22||i==36)	printf("%c",206);	if(i==27)	printf("%c",202);	printf("%c",205);	if(i==40)	printf("%c",188);	}
		
		printf("\n\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
						
		if(total<10){	printf("\t  %c   TOTAL        \t %c      %d Rs     %c\n",186,186,total,186);	}
		
		else if(total<100){		printf("\t  %c   TOTAL              %c      %d Rs    %c\n",186,186,total,186);	}
		
		else if(total<1000){	printf("\t  %c   TOTAL              %c     %d Rs    %c\n",186,186,total,186);	}
		
		else{	printf("\t  %c   TOTAL              %c    %d Rs    %c\n",186,186,total,186);	}
		
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		
		if(gst/3<10){
			
			if((total*(gst/3)*0.01)<10){	printf("\t  %c   GST @%.1f%%          %c     %.1f Rs    %c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}//save
			 
			else if((total*(gst/3)*0.01)<100){		printf("\t  %c   GST @%.1f%%          %c     %.1f Rs   %c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}//save
			
			else if((total*(gst/3)*0.01)<1000){		printf("\t  %c   GST @%.1f%%          %c    %.1f Rs  3%c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}
			
			else{	printf("\t  %c   GST @%.1f%%          %c    %.1f Rs 4%c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}
			
			printf("\t  %c  %c%c%c%c%c%c%c%c%c%c%c         %c               %c\n",186,192,196,196,196,194,196,196,196,196,196,217,186,186);
			
		}else{
		
			if((total*(gst/3)*0.01)<10){	printf("\t  %c   GST @%.1f%%         %c     %.1f Rs    5%c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}
			
			else if((total*(gst/3)*0.01)<100){		printf("\t  %c   GST @%.1f%%         %c    %.1f Rs    %c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}//save
			
			else if((total*(gst/3)*0.01)<1000){		printf("\t  %c   GST @%.1f%%         %c    %.1f Rs   %c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}//save
			
			else{	printf("\t  %c   GST @%.1f%%         %c   %.1f Rs  8%c\n",186,gst/3,186,(total*(gst/3)*0.01),186);	}	
								
			printf("\t  %c  %c%c%c%c%c%c%c%c%c%c%c%c        %c               %c\n",186,192,196,196,196,194,196,196,196,196,196,196,217,186,186);
			
		}
		
		printf("\t  %c      %c               %c               %c\n",186,179,186,186);
		
		if(count_ugst==1&&count_igst==1){
			
			if((gst/3)/2<10){
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%%  %c               %c\n",186,195,196,196,196,(gst/3)/2,186,186);
								
			}else{
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%% %c               %c\n",186,195,196,196,196,(gst/3)/2,186,186);
								
			}
					
			printf("\t  %c      %c               %c               %c\n",186,179,186,186);

			if(count_cess>=0){
				
				if((gst/3)/2<10){
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%%  %c               %c\n",186,192,196,194,196,(gst/3)/2,186,186);
									
				}else{
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%% %c               %c\n",186,192,196,194,196,(gst/3)/2,186,186);
									
				}
				
				printf("\t  %c        %c             %c               %c\n",186,179,186,186);
				printf("\t  %c        %c%cCESS @15%%   %c               %c\n",186,192,196,186,186);
				
			}else{
				
				if((gst/3)/2<10){
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%%  %c               %c\n",186,192,196,194,196,(gst/3)/2,186,186);
									
				}else{
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%% %c               %c\n",186,192,196,194,196,(gst/3)/2,186,186);
									
				}

				printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
				printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
							
			}
						
		}else if(count_ugst==1){
			
			if((gst/3)/2<10){
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%%  %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);
								
			}else{
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%% %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);
								
			}
			
			if((gst/3)/2<10){
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%%  %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);
								
			}else{
				
				printf("\t  %c      %c%c%c%cUGST @%.1f%% %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);
								
			}
					

			printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
			printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
			
		}else if(count_igst==1){
			
			if(count_cess>=0){
				
				if(gst/3<10){
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%%  %c               %c\n",186,192,196,194,196,gst/3,186,186);
									
				}else{
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%% %c               %c\n",186,192,196,194,196,gst/3,186,186);
									
				}
								
				printf("\t  %c        %c             %c               %c\n",186,179,186,186);
				printf("\t  %c        %c%cCESS @15%%   %c               %c\n",186,192,196,186,186);
				
			}else{
				
				if(gst/3<10){
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%%  %c               %c\n",186,192,196,194,196,gst/3,186,186);
									
				}else{
					
					printf("\t  %c      %c%c%c%cIGST @%.1f%% %c               %c\n",186,192,196,194,196,gst/3,186,186);
									
				}
				
				printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
				printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
							
			}
									
		}else{
			
			if((gst/3)/2<10){
				
				printf("\t  %c      %c%c%c%cCGST @%.1f%%  %c               %c\n",186,195,196,196,196,(gst/3)/2,186,186);
				printf("\t  %c      %c               %c               %c\n",186,179,186,186);
				printf("\t  %c      %c%c%c%cSGST @%.1f%%  %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);
									
			}else{
					
				printf("\t  %c      %c%c%c%cCGST @%.1f%% %c               %c\n",186,195,196,196,196,(gst/3)/2,186,186);
				printf("\t  %c      %c               %c               %c\n",186,179,186,186);
				printf("\t  %c      %c%c%c%cSGST @%.1f%% %c               %c\n",186,192,196,196,196,(gst/3)/2,186,186);	
												
			}
		
		}
		
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  %c  \t\t\t %c   \t\t %c\n",186,186,186);
		printf("\t  ");
	
		for(i=0;i<37;i++){	if(i==0)	printf("%c",204);	if(i==22)	printf("%c",206);	printf("%c",205);	if(i==36)	printf("%c",185);	}
		
		printf("\n");

//total
		
		total_gst(total,gst);
		
//total
							
		printf("\t  ");
		
		for(i=0;i<37;i++){	if(i==0)	printf("%c",200);	if(i==22)	printf("%c",202);	printf("%c",205);	if(i==36)	printf("%c",188);	}
		
		printf("\n\t\t\t   %cQNT. cannot exceeds 10",251);
		
		printf("\n");
		
//bill

	char decision[5];

		printf("\n\n%c%c   Shop Again? | ",7,207);
		scanf("%s",decision);
		
		if((!strcmp("yes",decision))||(!strcmp("YES",decision))||(!strcmp("Yes",decision))){
			
			printf("\n\n");
			for(i=0;i<65;i++){		printf("%c",177);	}
			printf("\n\n");
			main();
			
		}
		
		end();

}
