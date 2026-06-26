// Roll no-106 Even no- Trend Invoice using Structure
#include<stdio.h>
struct Item
{
    int ID;
    int MRP;
    char Name[20];
    int stock;
    int offer;
};
int main()
{
    struct Item item[10]={
        {1011,99,"Tshirt",4,9},
        {1021,199,"Suits",6,13},
        {1031,299,"Pants",9,4},
        {1041,399,"Shirt",4,55},
        {1051,499,"Blazer",5,50},
        {1061,599,"jogger",7,33},
        {1071,699,"jeans",8,44},
        {1081,799,"Kurtas",36,65},
        {1091,899,"Trouser",33,56},
        {1101,999,"Bottoms",10,65}
    };
    int choice,purchase,quantity=0,total=0,found,k=0;
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

                printf("\nID\tName\tOffer\tMRP\tStock\n");
                for(int i=0;i<10;i++)
                {
                    printf("%d\t%s\t%d\t%d\t%d\n",
                           item[i].ID,
                           item[i].Name,
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
