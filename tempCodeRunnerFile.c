int auth(int oID, int password) {   
    printf("Enter your oID: ");
    scanf("%d", &oID);
    printf("Enter your password: ");
    scanf("%d", &password);
    if (oID == 123 && password == 2026) {
      printf("Authentication successful!\n"); // Authentication successful
      return 1;
    } else {
        printf("Authentication failed. Please try again.\n"); // Authentication failed
        return 0;
    }
}



int invauth(float height, float length, float breadth, float weight) {
    printf("Enter the dimensions of the item in cm:\n");
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    printf("Enter the weight of the item in kg:");
    scanf("%f", &weight);
    if(height <= 0 || length <= 0 || breadth <= 0 || weight <= 0) {
        printf("Invalid input. Dimensions and weight must be positive values.\n"); // Invalid input
        return 0;
    }
    else if(height <= 150 && length <= 150 && breadth <= 150 && weight <= 250) {
        return 1;
    } else {
        printf("Item exceeds the maximum allowed dimensions or weight.\n"); // Item exceeds the maximum allowed dimensions or weight
        printf("max limit for dimensions is 150cm and for weight is 250kg.\n");
        return 0;
    }
}