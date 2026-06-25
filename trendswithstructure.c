// Roll no-106 Even no- Trend Invoice using Structure
#include<stdio.h>
struct Item
{
    int ID;
    int MRP;
    int stock;
    int offer;
};
int main()
{
    struct Item item[10]={
        {1011,99,4,9},
        {1021,199,6,13},
        {1031,299,9,4},
        {1041,399,4,55},
        {1051,499,5,50},
        {1061,599,7,33},
        {1071,699,8,44},
        {1081,799,36,65},
        {1091,899,33,56},
        {1101,999,10,65}
    };
    int choice,purchase;
    int quantity=0;
    int total=0;
    int found;
    int k=0;
    do
    {
        printf("\n--------- Trend Invoice ---------\n");
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
                           item[i].ID,
                           item[i].offer,
                           item[i].MRP,
                           item[i].stock);
                }
                break;
            case 2:
                printf("Purchase Item With ID: ");
                scanf("%d",&purchase);
                found=0;
                for(int j=0;j<10;j++)
                {
                    if(purchase==item[j].ID)
                    {
                    found=1;
                        printf("Item Available\n");
                        printf("Enter Quantity: ");
                        scanf("%d",&quantity);
                        if(quantity<=item[j].stock)
                        {
                            item[j].stock-=quantity;
                            total=item[j].MRP*quantity;
                            k=item[j].ID;
                            printf("Item Added Successfully\n");
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
                printf("\n--------- Invoice ---------\n");
                printf("Purchased Item ID : %d\n",k);
                printf("Purchased Quantity: %d\n",quantity);
                printf("Total Amount : %d\n",total);
                printf("Thank You for Shopping!\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }while(choice!=3);
    return 0;
}