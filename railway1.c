#include <stdio.h>

union ID {
    long long aadhaar;
    char passport[15];
    char voterID[15];
    char familyCard[15];
    char drivingLicense[15];
};

struct Passenger {
    char name[30];
    int idType; 
    union ID id;
};

int main() {
    struct Passenger p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("\nChoose ID type:\n");
    printf("1. Aadhaar\n2. Passport\n3. Voter ID\n4. Family Card\n5. Driving License\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &p.idType);

    switch (p.idType) {
        case 1:
            printf("Enter Aadhaar number: ");
            scanf("%lld", &p.id.aadhaar);
            break;
        case 2:
            printf("Enter Passport number: ");
            scanf("%s", p.id.passport);
            break;
        case 3:
            printf("Enter Voter ID: ");
            scanf("%s", p.id.voterID);
            break;
        case 4:
            printf("Enter Family Card number: ");
            scanf("%s", p.id.familyCard);
            break;
        case 5:
            printf("Enter Driving License number: ");
            scanf("%s", p.id.drivingLicense);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("\nPassenger Name: %s\n", p.name);
    printf("ID Type: ");
    switch (p.idType) {
        case 1:
            printf("Aadhaar - %lld\n", p.id.aadhaar);
            break;
        case 2:
            printf("Passport - %s\n", p.id.passport);
            break;
        case 3:
            printf("Voter ID - %s\n", p.id.voterID);
            break;
        case 4:
            printf("Family Card - %s\n", p.id.familyCard);
            break;
        case 5:
            printf("Driving License - %s\n", p.id.drivingLicense);
            break;
    }

    return 0;
}
