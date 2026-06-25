#include <stdio.h>

int main() {
    int totalSeats = 50;
    int choice, tickets;

    do {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if(tickets <= totalSeats) {
                    totalSeats -= tickets;
                    printf("Booking Successful!\n");
                    printf("Available Seats = %d\n", totalSeats);
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                totalSeats += tickets;
                if(totalSeats > 50)
                    totalSeats = 50;

                printf("Cancellation Successful!\n");
                printf("Available Seats = %d\n", totalSeats);
                break;

            case 3:
                printf("Available Seats = %d\n", totalSeats);
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}