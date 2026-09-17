#include<stdio.h>
#include<string.h>
int order_more;
int amount=0;
char food_name[20][30];
int qty[20];
int price[20];
int count=0;
int main(){
   
  // to print menu card
    printf("-------------------------------\n");
    printf("menu card\n");
    printf("-------------------------------\n");
      printf("1.idli-RS 50\n");
       printf("2.dosa-RS 50\n");
       printf("3.idiyappam-RS 60\n");
       printf("4.chappati-RS 40\n");
       printf("5.onion dosa-RS 140\n");
       printf("6.rava dosa-RS 110\n");
       printf("7.mini idli-RS 75\n");
       printf("8.pongal-RS 80\n");
       printf("9.onion uthappam-RS 100\n");
       printf("10.uthappam-RS 95\n");
       printf("11.vada - RS 80\n");
       printf("12.puri-RS 90\n");
       printf("13.chola puri-RS 100\n");
       printf("14.mini meals-RS 100\n");
       printf("15.meals-RS 110\n");
       printf("16.smabar rice-RS 120\n");
       printf("17.curd rice-RS 130\n");
       printf("18.veg biriyani-RS 125\n");
       printf("19.south indian tali-RS 110\n");
       printf("20.chicken biriyani-RS 150\n");

     printf("-------------------------------\n");
    
    //getting details of the customer to generate bill
    char customer_name[50];
    printf("enter customer name:");
    scanf("%49s",&customer_name);

    int phone_no[11];
    printf("enter phone number :");
    scanf("%10s",&phone_no);
   
    int table_no;
    printf("enter table number:");
    scanf("%d",&table_no);
    
    char order_food;
    printf("\nwant to order ?\n'y'-yes\n'n'-no\n");
    scanf("%10s",&order_food);
     if(order_food=='y'){
      order();
     }

  //looping to take order
    while(order_food=='y'){
    printf("want to order more?\n'y'-yes\n'n'-no\n");
    scanf("%10s",&order_more);
    if(order_more=='y'){
     order();
    }
    else {
       break;
    }
  
  } 

// calculation of GST
float GST=0.0;
if(amount>1000){
  GST=amount*(0.5);
}
// payment
int payment;
printf("enter payment method\n 1-cash \n 2-card \n 3-Gpay\n");
scanf("%d",&payment);
char payment_method[20];
switch(payment){
  case 1:strcpy(payment_method,"cash");
         break;
  case 2:strcpy(payment_method,"card");
         break;
  case 3:strcpy(payment_method,"Gpay");
         break;
}
int bill_no;
printf("enter bill no:");
scanf("%d",&bill_no);

// bill generation
printf("....................................................\n");
printf(".........................\n");
printf("                THE WANDERERS PLATE                 \n");
printf("                   chennai-56                       \n");
printf("....................................................\n");
printf("..........................\n");
printf("Bill No    :%d\n",bill_no);
printf("order no   : 1\n");
printf("customer Name  :%s\n",customer_name);
printf("Table No   :%d\n",table_no);

printf("----------------------------------------------------\n");
printf(".........................\n");
printf("item\t\tQty\t\tPrice\t\tAmount\n");
printf("----------------------------------------------------\n");
printf("-------------------------\n");
for(int i=0;i<count;i++){
  printf("%-15s %d\t\t %d\t\t %d\t\t %d\n",food_name[i],qty[i],price[i],qty[i]*price[i]);

}
printf("----------------------------------------------------\n");
printf("-------------------------\n");
printf("subtotal - Rs.%d\n",amount);
printf("GST- RS.%.2f\n",GST);
printf("Grand Total-Rs.%d\n",(int)GST+amount);
printf("....................................................\n");
printf(".........................\n");
printf("payment method:%s\n",payment_method);
printf("....................................................\n");
printf(".........................\n");
printf("\t\t\t  THANK YOU! VISIT AGAIN \n");
printf("\t\t\t  have a wonderful day \n");
printf("....................................................\n");
printf(".........................\n");
return 0;
}
//order taking 
order(){
int order;
printf("enter your order no:");
scanf("%d",&order); 

int quantity;
printf("enter quatity of order:");
scanf("%d",&quantity);

switch(order){
   case 1: amount=amount+50*quantity;
   strcpy(food_name[count],"idli");
   qty[count]=quantity;
   price[count]=50;
   count++;
   printf("idli added to bill\n");
               break;

   case 2: amount+=50*quantity;
   strcpy(food_name[count],"dosa");
   qty[count]=quantity;
   price[count]=50;
   count++;
   printf("dosa added to bill\n");
               break;

   case 3: amount+=60*quantity;
   strcpy(food_name[count],"idiyappam");
   qty[count]=quantity;
   price[count]=60;
   count++;
   printf("idiyappam added to bill\n");
              break;

   case 4: amount+=40*quantity;
   strcpy(food_name[count],"chappati");
   qty[count]=quantity;
   price[count]=40;
   count++;
   printf("chappati added to bill\n");
               break;

   case 5: amount+=140*quantity;
   
   strcpy(food_name[count],"onion dosa");
   qty[count]=quantity;
   price[count]=140;
   count++;
   printf("onion dosa added to bill\n");
               break;

   case 6:amount+=110*quantity;
   strcpy(food_name[count],"rava dosa");
   qty[count]=quantity;
   price[count]=110;
   count++;
   printf("rava dosa added to bill\n");
              break;

   case 7: amount+=75*quantity;
   strcpy(food_name[count],"mini idli");
   qty[count]=quantity;
   price[count]=75;
   count++;
   printf(" mini idli added to bill\n");
               break;

   case 8: amount+=80*quantity;
   strcpy(food_name[count],"pongal");
   qty[count]=quantity;
   price[count]=80;
   count++;
   printf("pongal added to bill\n");
               break;

   case 9: amount+=100*quantity;
   strcpy(food_name[count],"onion uthappam");
   qty[count]=quantity;
   price[count]=100;
   count++;
   printf("onion uthappam added to bill\n");
               break;

   case 10: amount+=95*quantity;
   strcpy(food_name[count],"uthappam");
   qty[count]=quantity;
   price[count]=95;
   count++;
   printf(" uthappam added to bill\n");
               break;

   case 11: amount+=80*quantity;
   strcpy(food_name[count],"vada ");
   qty[count]=quantity;
   price[count]=80;
   count++;
   printf("vada added to bill\n");
               break;

   case 12: amount+=90*quantity;
   strcpy(food_name[count],"puri");
   qty[count]=quantity;
   price[count]=90;
   count++;
   printf("puri added to bill\n");
               break;

   case 13: amount+=100*quantity;
   strcpy(food_name[count],"chola puri");
   qty[count]=quantity;
   price[count]=100;
   count++;
   printf("chola puri added to bill\n");
               break;

   case 14: amount+=100*quantity;
   strcpy(food_name[count],"mini meals");
   qty[count]=quantity;
   price[count]=100;
   count++;
   printf("mini meals added to bill\n");
               break;

   case 15: amount+=110*quantity;
   strcpy(food_name[count],"meals");
   qty[count]=quantity;
   price[count]=110;
   count++;
   printf("meals added to bill\n");
               break;

  case 16: amount+=120*quantity;
  strcpy(food_name[count],"smabar rice");
   qty[count]=quantity;
   price[count]=120;
   count++;
   printf("smabar rice added to bill\n");
               break;

   case 17: amount+=130*quantity;
   strcpy(food_name[count],"curd rice");
   qty[count]=quantity;
   price[count]=130;
   count++;
   printf("curd rice added to bill\n");
               break;

   case 18: amount+=125*quantity;
   strcpy(food_name[count],"veg biriyani");
   qty[count]=quantity;
   price[count]=125;
   count++;
   printf("veg biriyani added to bill\n");
               break;

   case 19: amount+=110*quantity;
   strcpy(food_name[count],"south indian tali");
   qty[count]=quantity;
   price[count]=110;
   count++;
   printf("south indian tali added to bill\n");
               break;

   case 20: amount+=150*quantity;
   strcpy(food_name[count],"chicken biriyani");
   qty[count]=quantity;
   price[count]=150;
   count++;
   printf("chicken biriyani added to bill\n");
               break;

}
}


