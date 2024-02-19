#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#define MAX_DONORS 100
#define MAX_NAME_LENGTH 50
#define MAX_NUMBER_LENGTH 20
#define MAX_BLOOD_GROUP_LENGTH 5

// Define ANSI color codes for console text color
#define COLOR_RESET "\033[0m"
#define COLOR_BLUE "\033[34m"
#define COLOR_GREEN "\033[32m"
#define COLOR_RED "\033[31m"
#define COLOR_YELLOW "\033[33m"

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char number[MAX_NUMBER_LENGTH];
    char bloodGroup[MAX_BLOOD_GROUP_LENGTH];
} DONOR;

DONOR donors[MAX_DONORS];
int number_of_donors = 0;

// Function to clear console screen
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    printf("\033[H\033[J");
#endif
}

// Function to display a box-styled title
void displayTitle(const char *title) {
    printf(COLOR_BLUE "_________________________________________________________________\n");
    printf("\t* %s *\n", title);
    printf("_________________________________________________________________" COLOR_RESET "\n");
}

// Function to display a box-styled menu
void displayMenu(const char *menuTitle) {
    printf(COLOR_BLUE "_________________________________________________________________\n");
    printf("\t* %s *\n", menuTitle);
    printf("_________________________________________________________________" COLOR_RESET "\n");
}

// Function to display a box-styled message
void displayMessage(const char *message, const char *color) {
    printf("\n%s%s%s\n", color, message, COLOR_RESET);
}

// Function to save data to a file
void saveToFile(DONOR donor[]) {
    FILE *file = fopen("donors.txt", "w");
    if (file == NULL) {
        displayMessage("Error opening file for writing.", COLOR_RED);
        return;
    }

    for (int i = 0; i < number_of_donors; i++) {
        fprintf(file, "%s|%d|%s|%s\n",
                donor[i].name,
                donor[i].age,
                donor[i].number,
                donor[i].bloodGroup);
    }

    fclose(file);
    displayMessage("Data saved to file.", COLOR_GREEN);
}

// Function to load data from a file
void loadFromFile(DONOR donor[]) {
    FILE *file = fopen("donors.txt", "r");
    if (file == NULL) {
        displayMessage("Error opening file for reading.", COLOR_RED);
        return;
    }

    int i = 0;
    while (i < MAX_DONORS &&
           fscanf(file, "%49[^|]|%d|%19[^|]|%4[^\n]\n",
                donor[i].name,
                &donor[i].age,
                donor[i].number,
                donor[i].bloodGroup) == 4) {
        i++;
    }

    number_of_donors = i;
    fclose(file);
    displayMessage("Data loaded from file.", COLOR_GREEN);
}

// Function to add a donor
void add(DONOR donor[]) {
    if (number_of_donors >= MAX_DONORS) {
        displayMessage("Maximum number of donors reached.", COLOR_YELLOW);
        return;
    }

    displayTitle("Add Donor");
    printf(" Enter donor information:\n");
    printf(" Name: ");
    fgets(donor[number_of_donors].name, MAX_NAME_LENGTH, stdin);
    donor[number_of_donors].name[strcspn(donor[number_of_donors].name, "\n")] = '\0';
    printf(" Age: ");
    scanf("%d", &donor[number_of_donors].age);
    getchar();
    printf(" Phone number: ");
    fgets(donor[number_of_donors].number, MAX_NUMBER_LENGTH, stdin);
    donor[number_of_donors].number[strcspn(donor[number_of_donors].number, "\n")] = '\0';
    printf(" Blood group (CAPITAL LETTERS): ");
    fgets(donor[number_of_donors].bloodGroup, MAX_BLOOD_GROUP_LENGTH, stdin);
    donor[number_of_donors].bloodGroup[strcspn(donor[number_of_donors].bloodGroup, "\n")] = '\0';
    number_of_donors++;
    displayMessage("Record added successfully.", COLOR_GREEN);
    saveToFile(donor);
}

// Function to update a donor
void update(DONOR donor[]) {
    int i, found = 0;
    char number_str[MAX_NUMBER_LENGTH];
    displayTitle("Update Donor");

    printf(" Enter phone number of donor to update: ");
    fgets(number_str, MAX_NUMBER_LENGTH, stdin);
    number_str[strcspn(number_str, "\n")] = '\0';
    for (i = 0; i < number_of_donors; i++) {
        if (strcmp(donor[i].number, number_str) == 0) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf(" Enter updated donor information for donor %d:\n", i + 1);
        printf(" Name: ");
        fgets(donor[i].name, MAX_NAME_LENGTH, stdin);
        donor[i].name[strcspn(donor[i].name, "\n")] = '\0';
        printf(" Age: ");
        scanf("%d", &donor[i].age);
        getchar();
        printf(" Phone number: ");
        fgets(donor[i].number, MAX_NUMBER_LENGTH, stdin);
        donor[i].number[strcspn(donor[i].number, "\n")] = '\0';
        printf(" Blood group (CAPITAL LETTERS): ");
        fgets(donor[i].bloodGroup, MAX_BLOOD_GROUP_LENGTH, stdin);
        donor[i].bloodGroup[strcspn(donor[i].bloodGroup, "\n")] = '\0';
        displayMessage("Record updated successfully.", COLOR_GREEN);
    } else {
        displayMessage("No donor found with the given phone number.", COLOR_RED);
    }
}

// Function to delete a donor
void deleteDonor(DONOR donor[]) {
    int i, j, found = 0;
    char number_str[MAX_NUMBER_LENGTH];
    displayTitle("Delete Donor");

    printf(" Enter phone number of donor to delete: ");
    fgets(number_str, MAX_NUMBER_LENGTH, stdin);
    number_str[strcspn(number_str, "\n")] = '\0';
    for (i = 0; i < number_of_donors; i++) {
        if (strcmp(donor[i].number, number_str) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf(" Delete record for donor %d:\n", i + 1);
        for (j = i; j < number_of_donors - 1; j++) {
            donor[j] = donor[j + 1];
        }
        number_of_donors--;
        displayMessage("Record deleted successfully.", COLOR_GREEN);
        saveToFile(donor);
    } else {
        displayMessage("No donor found with the given phone number.", COLOR_RED);
    }
}

// Function to list all donors
void list(DONOR donor[]) {
    int i;
    displayTitle("Donor List");

    for (i = 0; i < number_of_donors; i++) {
        printf("\n Donor no: %d", i + 1);
        printf("\n Name: %s", donor[i].name);
        printf("\n Age: %d", donor[i].age);
        printf("\n Phone number: %s", donor[i].number);
        printf("\n Blood group: %s", donor[i].bloodGroup);
        printf("\n");
    }
    printf("\n");
}

// Function to search donors by blood group
void search(DONOR donor[]) {
    int i, found = 0;
    char bloodGroup_str[MAX_BLOOD_GROUP_LENGTH];
    displayTitle("Search Donor by Blood Group");

    printf(" Enter blood group to search: ");
    fgets(bloodGroup_str, MAX_BLOOD_GROUP_LENGTH, stdin);
    bloodGroup_str[strcspn(bloodGroup_str, "\n")] = '\0';
    for (i = 0; i < number_of_donors; i++) {
        if (strcmp(donor[i].bloodGroup, bloodGroup_str) == 0) {
            found = 1;
            printf("\n Donor no: %d", i + 1);
            printf("\n Name: %s", donor[i].name);
            printf("\n Age: %d", donor[i].age);
            printf("\n Phone number: %s", donor[i].number);
            printf("\n Blood group: %s", donor[i].bloodGroup);
            printf("\n");
        }
    }

    if (found == 0) {
        displayMessage("No donor found with the given blood group.", COLOR_RED);
    }
}

// Function to display the main menu
void displayMainMenu() {
    displayMenu("Blood Donor Management System Menu");
    printf("\n 1. Add donor");
    printf("\n 2. Update donor");
    printf("\n 3. Delete donor");
    printf("\n 4. List donors");
    printf("\n 5. Search donor by blood group");
    printf("\n 6. File (Load/Save)");
    printf("\n 7. Exit");
}

// Function to display the file menu
void displayFileMenu() {
    displayMenu("File Management");
    printf("\n 1. Load data from file");
    printf("\n 2. Save data to file");
    printf("\n 3. Back to main menu");
}

int main() {
    int choice;
    loadFromFile(donors);

    do {
        clearConsole();
        displayMainMenu();
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                clearConsole();
                add(donors);
                break;
            case 2:
                update(donors);
                break;
            case 3:
                deleteDonor(donors);
                break;
            case 4:
                list(donors);
                break;
            case 5:
                search(donors);
                break;
            case 6:
                clearConsole();
                displayFileMenu();
                printf("\n Enter your choice: ");
                int fileOption;
                scanf("%d", &fileOption);
                getchar();

                switch (fileOption) {
                    case 1:
                        loadFromFile(donors);
                        break;
                    case 2:
                        saveToFile(donors);
                        break;
                    case 3:
                        break;
                    default:
                        displayMessage("Invalid choice. Please try again.", COLOR_RED);
                        break;
                }
                break;
            case 7:
                clearConsole();
                saveToFile(donors);
                displayMessage("Exiting...", COLOR_GREEN);
                return 0;
            default:
                displayMessage("Invalid choice. Please try again.", COLOR_RED);
                break;
        }

        printf("\n Press Enter to continue...");
        getchar();
    } while (choice != 7);

    return 0;
}
