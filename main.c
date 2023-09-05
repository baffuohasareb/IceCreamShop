#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order = 0, time = 0;
    float cost = 0;

    printf("\t\t      ::::::::::: ::::::::  ::::::::::          ::::::::  :::::::::  ::::::::::     :::       :::   ::: \n");
    printf("\t\t         :+:    :+:    :+: :+:                :+:    :+: :+:    :+: :+:          :+: :+:    :+:+: :+:+: \n");
    printf("\t\t        +:+    +:+        +:+                +:+        +:+    +:+ +:+         +:+   +:+  +:+ +:+:+ +:+ \n");
    printf("\t\t       +#+    +#+        +#++:++#           +#+        +#++:++#:  +#++:++#   +#++:++#++: +#+  +:+  +#+  \n");
    printf("\t\t      +#+    +#+        +#+                +#+        +#+    +#+ +#+        +#+     +#+ +#+       +#+   \n");
    printf("\t\t     #+#    #+#    #+# #+#                #+#    #+# #+#    #+# #+#        #+#     #+# #+#       #+#    \n");
    printf("\t\t########### ######### ##########          ######### ###    ### ########## ###     ### ###       ###     \n");
    printf("\n");
    printf("\t\t\t                      ::::::::  :::    :::  ::::::::  :::::::::                                                         \n");
    printf("\t\t\t                    :+:    :+: :+:    :+: :+:    :+: :+:    :+:                                                         \n");
    printf("\t\t\t                   +:+        +:+    +:+ +:+    +:+ +:+    +:+                                                          \n");
    printf("\t\t\t                   #++:++#+  +#++:++#++ +#+    +:+ +#++:++#+                                                            \n");
    printf("\t\t\t                        +#+ +#+    +#+ +#+    +#+ +#+                                                                   \n");
    printf("\t\t\t                #+#    #+# #+#    #+# #+#    #+# #+#                                                                    \n");
    printf("\t\t\t                ########  ###    ###  ########  ###                                                                     \n\n");

    printf("\n\t\t\t\t ______________________________________________________________\n");
    printf("\t\t\t\t|                                                              |");
    printf("\n\t\t\t\t|\t\t\t  MENU                                 |\n");
    printf("\t\t\t\t|                                                              |\n");
    printf("\t\t\t\t| \tFlavor                 Small          Large            |\n");
    printf("\t\t\t\t| \t1. Vanilla             GHS 5.00       GHS 8.00         |\n");
    printf("\t\t\t\t| \t2. Strawberry          GHS 5.00       GHS 8.00         |\n");
    printf("\t\t\t\t| \t3. Chocolate           GHS 6.00       GHS 9.00         |\n");
    printf("\t\t\t\t| \t4. Mnago               GHS 7.00       GHS 10.00        |\n");
    printf("\t\t\t\t|                                                              |\n");
    printf("\t\t\t\t| \tToppings               Cost                            |\n");
    printf("\t\t\t\t| \t1. Sprinkles           GHS 2.00                        |\n");
    printf("\t\t\t\t| \t2. Whipped Cream       GHS 3.00                        |\n");
    printf("\t\t\t\t| \t3. Chopped Nuts        GHS 4.00                        |\n");
    printf("\t\t\t\t| \t4. Coconut Shavings    GHS 5.00                        |\n");
    printf("\t\t\t\t|______________________________________________________________|\n");


    do{
        int flavour = 0, topping = 0, size = 0;

        // prints out list of flavors available
        printf("\nWhat flavor would you like to order?\n1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n");
        printf("Enter the number that corresponds to your choice.\n");

        // receive user's flavor choice
        scanf("%d", &flavour);

        // prints out the sizes
        printf("\n1 - Small\n2 - Large\n");
        printf("Enter the number that corresponds to your choice.\n");

        // receives user's size choice
        scanf("%d", &size);

        // checks the flavor and size selected and calculates the price of the order
        if (flavour == 1){
            if (size == 1){
                printf("\nFlavor: Vanilla\nSize: Small\n");
                cost += 5;
                time += 2;
            }

            else if(size == 2){
                printf("\nFlavor: Vanilla\nSize: Large\n");
                cost += 8;
                time += 3;
            }

            else printf("\nInvalid size entry");
        }

        else if(flavour == 2){
            if (size == 1){
                printf("\nFlavor: Strawberry\nSize: Small\n");
                cost += 5;
                time += 2;
            }

            else if(size == 2){
                printf("\nFlavor: Strawberry\nSize: Large\n");
                cost += 8;
                time += 3;
            }

            else printf("\nInvalid size entry");
        }

        else if(flavour == 3){
            if (size == 1){
                printf("\nFlavor: Chocolate\nSize: Small\n");
                cost += 6;
                time += 2;
            }

            else if(size == 2){
                printf("\nFlavor: Chocolate\nSize: Large\n");
                cost += 9;
                time += 3;
            }

            else printf("\nInvalid size entry");
        }

        else if(flavour == 4){
            if (size == 1){
                printf("\nFlavor: Mango\nSize: Small\n");
                cost += 7;
                time += 2;
            }

            else if(size == 2){
                printf("\nFlavor: Mango\nSize: Large\n");
                cost += 10;
                time += 3;
            }

            else printf("\nInvalid size entry");
        }

        else if(flavour == 5){
            printf("\nA customer service agent will be with you soon\n");
        }

        else printf("Invalid flavor entry.\n");

        // do-while loop for toppings
        int toppings = 0;

        do{
            // displays toppings menu
            printf("\nWhich topping would you like to order\?\n");
            printf("1 - Sprinkles\n2 - Whipped Cream\n3 - Chopped Nuts\n4 - Coconut Shavings\n");
            printf("Enter the number that corresponds to your choice.\n");

            // receives user's topping choice
            scanf("%d", &topping);

            if(topping == 1){
                cost += 2;
                time += 1;
                printf("\nTopping: Sprinkles\n");
            }

            else if(topping == 2){
                cost += 3;
                time += 2;
                printf("\nTopping: Whipped Cream\n");
            }

            else if(topping == 3){
                cost += 4;
                time += 3;
                printf("\nTopping: Chopped Nuts\n");
            }

            else if(topping == 4){
                cost += 5;
                time += 4;
                printf("\nTopping: Coconut Shavings\n");
            }

            else if(topping == 5){
                toppings = 0;
            }

            else printf("Invalid topping entry\n");
        }

        while(toppings > 0);

        // asks user for any more orders
        int anotherOrder = 0;
        printf("\nWould you like to order anything else\?\n");
        printf("1 - Yes\n2 - No\n");
        printf("Enter the number that corresponds to your choice.\n");

        // takes user input for another order
        scanf("%d", &anotherOrder);

        if(anotherOrder == 1) {
            order += 1;
        }

        else if(anotherOrder == 2){
            order = 0;
            printf("\nTotal Cost: GHS% .2f\nYour order will be ready in %d mins\n", cost, time);
        }
    }

    while(order > 0);

    printf("Kindly wait for your order.\n\n\n");
    printf("Here is your order\nThank you for visiting Baffuoh's Ice Cream Shop\n");
    return 0;
}

