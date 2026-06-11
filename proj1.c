#include<stdio.h>
#include<string.h>


// int auth(int oID, int password) {   
//     printf("Enter your oID: ");
//     scanf("%d", &oID);
//     printf("Enter your password: ");
//     scanf("%d", &password);
//     if (oID == 123 && password == 2026) {
//       printf("Authentication successful!\n"); // Authentication successful
//       return 1;
//     } else {
//         printf("Authentication failed. Please try again.\n"); // Authentication failed
//         return 0;
//     }
// }

// int invauth(float height, float length, float breadth, float *weight) {
//     printf("Enter the dimensions of the item in cm:\n");
//     printf("Enter height: ");
//     scanf("%f", &height);
//     printf("Enter length: ");
//     scanf("%f", &length);
//     printf("Enter breadth: ");
//     scanf("%f", &breadth);
//     printf("Enter the weight of the item in kg:");
//     scanf("%f", weight);
//     if(height <= 0 || length <= 0 || breadth <= 0 || *weight <= 0) {
//         printf("Invalid input. Dimensions and weight must be positive values.\n"); // Invalid input
//         return 0;
//     }
//     else if(height <= 150 && length <= 150 && breadth <= 150 && *weight <= 250) {
//         return 1; // Item is accepted for shipping
//     } else {
//         printf("Item exceeds the maximum allowed dimensions or weight.\n"); // Item exceeds the maximum allowed dimensions or weight
//         printf("max limit for dimensions is 150cm and for weight is 250kg.\n");
//         return 0;
//     }
// }

// int zoneauth(float weight,float price) {
//     char domestic = 'D';
//     char international = 'I';
//     char zone;  
//     printf("Enter the destination zone (Domestic or International): ");
//     scanf(" %c", &zone);
    
//     if (zone == domestic) {
//         printf("Domestic shipping selected.\n");
//         if (weight <= 5) {
//         price = weight * 50;
//         printf("Shipping cost: %.2f\n", price);        
//         }
//          else if (weight > 5 && weight <= 20) {
//         price = ((weight - 5) * 40) + (5 * 50);
//         printf("Shipping cost: %.2f\n", price);
//         }
//          else if (weight > 20) {
//         price = ((weight - 20) * 30) + (15 * 40) + (5 * 50);
//         printf("Shipping cost: %.2f\n", price);
//         }
//         return price;

//     } else if (zone == international) {
//         printf("International shipping selected.\n");

//         if (weight <= 5) {
//         price = weight * 150;
//         printf("Shipping cost: %.2f\n", price);        
//         }
//         else if (weight > 5 && weight <= 20) {
//         price = ((weight - 5) * 120) + (5 * 150);
//         printf("Shipping cost: %.2f\n", price);
//         } 
//         else if (weight > 20) {
//         price = ((weight - 20) * 90) + (15 * 120) + (5 * 150);
//         printf("Shipping cost: %.2f\n",price);
//         }
//         return price;
//         } else {
//         printf("Invalid zone selection. Please enter 'D' for Domestic or 'I' for International.\n");
//         zoneauth(weight, price); // Recursive call for invalid input
//         return 0;
//         }
// }

// int fastdel(float price) {
//     printf("Would you like to ship it fast (1for yes, 0 for no):\n");
//         int fast_ship;
//         scanf("%d", &fast_ship);
//         if (fast_ship == 1) {
//             price = price + 500; // Additional cost for fast shipping
//             printf("Shipping cost: %.2f\n", price);
//         }
// }

// int fuleprim(float distance, float price) {
//     printf("enter the distance in km:");
//         scanf("%f", &distance);
//         if (distance > 1000) {
//             price = price + 1500; // Additional cost for long distance
//             printf("Shipping cost: %.2f\n", price);
//         }
// }

int hashing(int *sum, int *trackcode) {
    printf("Enter a 5 digit batch code:");
    int batch_code, tempbc;
    scanf("%d", &batch_code);
   
    if (batch_code < 10000 || batch_code > 99999) {
        printf("Invalid input. Please enter a 5 digit batch code.\n");
        hashing(sum, trackcode); // Recursive call for invalid input
        return 0;
    }    
    else {
        tempbc = batch_code;
        *sum = 0;
        while (tempbc > 0) {
            *sum += tempbc % 10; // Add the last digit to sum
            tempbc /= 10; // Remove the last digit
        }
            printf("tempbc is %d\n", *sum);

        if (*sum % 2 == 0) {
        *trackcode = (*sum * 10);     
        } else {
        *trackcode = (*sum * 10) + 1;
        }
    
        printf("trackcode is %d\n", *trackcode);
    }
    
}

int main() {
    int oID, password, sum, trackcode;
    float height, length, breadth;
    float weight,base_price, distance;

      
    hashing(&sum, &trackcode);  
   


    // for (int attempts = 3; attempts >= 1; attempts--) {
    //     printf("%d attempts left of 3\n", attempts);

    //     if (auth(oID, password)) {
    //         printf("Welcome!\n");

    //     if (invauth(height, length, breadth, &weight)) {
    //         printf("Item is accepted for shipping.\n");
            
    //         base_price = zoneauth(weight, base_price);
    //         printf("test price: %.2f\n", base_price);
            
    //         fastdel(base_price);
    //         fuleprim(distance, base_price);
    //     }
    //         return 0;
    //     }
    // }

    // printf("Maximum attempts exceeded.\n");
    return 0;
}
