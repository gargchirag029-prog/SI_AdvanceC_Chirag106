// Roll no-106 even no- Trend Invoice
#include<stdio.h>
int main()
{
    int choice;
    int ID[10]={1011,1021,1031,1041,1051,1061,1071,1081,1091,1101};
    int MRP[10]={99,199,299,399,499,599,699,799,899,999};
    int stock[10]={4,6,9,4,5,7,8,36,33,10};
    int offer[10]={9,13,4,55,50,33,44,65,56,65};
    int purchase, k=0, total=0, quantity=0, found;
    do
    {
        printf("\n---------Trend Invoice---------\n");
        printf("1. View Inventory Stock\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout & Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nID\tOffer\tMRP\tStock\n");
                for(int i=0;i<10;i++)
                {
                    printf("%d\t%d\t%d\t%d\n",
                           ID[i],offer[i],MRP[i],stock[i]);
                }
                break;
            case 2:
                printf("Purchase Item With ID: ");
                scanf("%d",&purchase);
                found=0;
                for(int j=0;j<10;j++)
                {
                    if(purchase==ID[j])
                    {
                        found=1;
                        printf("Item Available\n");
                        printf("Enter quantity to purchase: ");
                        scanf("%d",&quantity);
                        if(quantity<=stock[j])
                        {
                            stock[j]-=quantity;
                            total=MRP[j]*quantity;
                            k=ID[j];

                            printf("Item added to cart successfully\n");
                        }
                        else
                        {
                            printf("Insufficient Stock\n");
                        }
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item Not Found\n");
                }
                break;
            case 3:
                printf("\n------ Invoice ------\n");
                printf("Purchased Item ID : %d\n",k);
                printf("Purchased Quantity: %d\n",quantity);
                printf("Total MRP : %d\n",total);
                printf("Thank You to purchase!\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }while(choice!=3);
    return 0;
}