#include <stdio.h>

union ID {
    char aadhaar[10];
    char passport[10];
};

struct Passenger {
    char name[30];
    int idType;  
    union ID id;
};

int main() {
    struct Passenger p1;

    printf("Enter name: ");
    scanf("%s", p1.name);

    printf("Enter ID type (1 for local, 2 for foreigner): ");
    scanf("%d", &p1.idType);

    if (p1.idType == 1) {
        printf("Enter Aadhaar number: ");
        scanf("%s", &p1.id.aadhaar);
    } else {
        printf("Enter Passport number: ");
        scanf("%s", p1.id.passport);
    }

    // Output
    printf("\nPassenger Name: %s\n", p1.name);
    if (p1.idType == 1) {
        printf("Aadhaar: %s\n", p1.id.aadhaar);
    } else {
        printf("Passport: %s\n", p1.id.passport);
    }

    return 0;
}

