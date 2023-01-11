#include<stdio.h>

int main()
{
	char name[50];
	int phone_no;
	int cust_id;
	
	int soap;
	int cream;
	int spray;
	
	int sugar;
	int salt;
	int tea;
	int coffee;
	int rice;
	int wheat;
	
	int pepsi;
	int sprite;
	int slice;
	int coke;
	
	int total;
	int costmetics;
	int grocery;
	int beverage;
	
	printf("--------------\n");
	printf("BILLING SYSTEM\n");
	printf("--------------\n\n");
	printf("Customer Details\n\n");
	
	printf("Customer name: ");
	scanf("%s",&name);
	printf("Customer number: ");
	scanf("%d",&phone_no);	
	printf("Customer id: ");
	scanf("%d",&cust_id);
	
	printf("--------------\n\n");
	
	printf("COSMETICS\n\n");
	
	printf("Body Soap (Rs.10): ");
	scanf("%d",&soap);
	printf("Face Cream (Rs.25): ");
	scanf("%d",&cream);
	printf("Body Spray (Rs.50): ");
	scanf("%d",&spray);
	
	printf("--------------\n\n");
	
	printf("GROCERIES\n\n");
	
	printf("Sugar (Rs.40): ");
	scanf("%d",&sugar);
	printf("Salt (Rs.25): ");
	scanf("%d",&salt);
	printf("Tea (Rs.20): ");
	scanf("%d",&tea);
	printf("Coffee (Rs.50): ");
	scanf("%d",&coffee);
	printf("Rice (Rs.150): ");
	scanf("%d",&rice);
	printf("Wheat (Rs.160): ");
	scanf("%d",&wheat);
	
	printf("--------------\n\n");
	
	printf("BEVERAGES\n\n");
	
	printf("Pepsi (Rs.30): ");
	scanf("%d",&pepsi);
	printf("Sprite (Rs.35): ");
	scanf("%d",&sprite);
	printf("Slice (Rs.30): ");
	scanf("%d",&slice);
	printf("Coke (Rs.20): ");
	scanf("%d",&coke);
	
	printf("--------------\n\n");
	
	int sp = 10*soap;
	int cr = 25*cream;
	int spr = 50*spray;
	costmetics = sp + cr + spr;
	printf("Body Soap: Rs. %d\n",sp);
	printf("Face Cream: Rs. %d\n",cr);
	printf("Body Spray: Rs. %d\n",spr);
	printf("--------------------------\n");
	printf("Total Cosmetic price: Rs. %d\n\n",costmetics);
	
	int sgr = 40*sugar;
	int sal = 25*salt;
	int te = 20*tea;
	int coff = 50*coffee;
	int ric = 150*rice;
	int whe = 160*wheat;
	grocery = sgr + sal + te + coff + ric + whe;
	printf("Sugar: Rs. %d\n",sgr);
	printf("Salt: Rs. %d\n",sal);
	printf("Tea: Rs. %d\n",te);
	printf("Coffee: Rs. %d\n",coff);
	printf("Rice: Rs. %d\n",ric);
	printf("Wheat: Rs. %d\n",whe);
	printf("--------------------------\n");
	printf("Total Grocery price: Rs. %d\n\n",grocery);
	
	int peps = 30*pepsi;
	int sprit = 35*sprite;
	int sli = 30*slice;
	int cok = 20*coke;
	beverage = peps + sprit + sli + cok;
	printf("Pepsi: Rs. %d\n",peps);
	printf("Sprite: Rs. %d\n",sprit);
	printf("Slice: Rs. %d\n",sli);
	printf("coke: Rs. %d\n",cok);
	printf("-------------------------\n");
	printf("Total Beverage price: Rs. %d\n\n",beverage);
	
	printf("-------------------------\n");
	
	total = costmetics + grocery + beverage;
	printf("Total Amount: Rs. %d\n\n",total);
	printf("-----------------------------------------------------------\n");
	
	printf("              SUPER MARKET\n\n");
	printf("Customer Name   : %s\n",name);
	printf("Customer Number : %d\n",phone_no);
	printf("Customer ID     : %d\n\n",cust_id);
	
	printf("Product Name                 Quantity              Price\n\n");
	printf("Body Soap                     %5d                   %d10\n",soap,sp);
	printf("Face Cream                    %5d                   %d10\n",cream,cr);
	printf("Body Spray                    %5d                   %d10\n",spray,spr);
	printf("Sugar                         %5d                   %d10\n",sugar,sgr);
	printf("Salt                          %5d                   %d10\n",salt,sal);
	printf("Tea                           %5d                   %d10\n",tea,te);
	printf("Coffee                        %5d                   %d10\n",coffee,coff);
	printf("Rice                          %5d                   %d10\n",rice,ric);
	printf("Wheat                         %5d                   %d10\n",wheat,whe);
	printf("Pepsi                         %5d                   %d10\n",pepsi,peps);
	printf("Sprite                        %5d                   %d10\n",sprite,sprit);
	printf("Slice                         %5d                   %d10\n",slice,sli);
	printf("Coke                          %5d                   %d10\n\n",coke,cok);
	
	printf("Cosmetics Total price: %d\n\n",costmetics);
	printf("Grocery Total price:  %d\n\n",grocery);
	printf("Beverage Total price:  %d\n\n",beverage);	
	printf("Total Price:  %d\n\n",total);
	printf("-------------------------------------------------------\n");
	return 0;
}
