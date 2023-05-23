#include <stdio.h>

int ATM_Transaction();

int anotherTransaction, amountToWidthdraw, amountToDeposit, pin;

double balance = 1000;

int main()

{

    printf("******** আধুনিক ব্যাংকিং সেবায় আপনাকে স্বাগতম ******** \n");

    printf(" আপনার ৪ অংকের গোপন সংখ্যা দিন: \n");

    scanf("%d", &pin);

    if (pin != 1234)

    {

        printf("দুঃখিত আপনি ভুল সংখ্যা প্রবেশ করেছেন");
    }

    else

    {

        ATM_Transaction();
    }
    return 0;
}

int ATM_Transaction()

{

    int choice;

    printf("সেবা গ্রহনের জন্য যেকোন একটি সংখ্যা নির্বাচন করুন!\n\n");

    printf("1. জমাকৃত অর্থ তথ্য \n");

    printf("2. টাকা উত্তোলন\n");

    printf("3. টাকা জমা \n");

    printf("4. বের হতে চাই \n");

    scanf("%d", &choice);

    switch (choice)

    {

    case 1:

        printf("আপনার জমাকৃত অর্থের পরিমান: %f", balance);

        printf("\n\nআরেক বার সেবা গ্রহন করতে চান?\n রাজি হলে ১ চাপুন অথবা সেবা হতে বের হতে চাইলে ২ চাপুন\n\n");

        scanf("%d", &anotherTransaction);

        if (anotherTransaction == 1)

        {

            ATM_Transaction();
        }

        break;

    case 2: // Second option should be withdraw

        printf("টাকা উত্তোলনের পরিমান দিন: ");

        scanf("%d", &amountToWidthdraw);

        if (amountToWidthdraw <= balance) //

        {

            printf("দয়া করে টাকা সংগ্রহ করুন\n");

            balance = balance - amountToWidthdraw;

            printf("আপনার বর্তমান অবশিষ্ট জমাকৃত অর্থের পরিমান %lf\n", balance);

            printf("\n\nআরেক বার সেবা গ্রহন করতে চান?\n রাজি হলে ১ চাপুন অথবা সেবা হতে বের হতে চাইলে ২ চাপুন\n\n ");

            scanf("%d", &anotherTransaction);

            if (anotherTransaction == 1)

            {

                ATM_Transaction();
            }
        }

        else

        {

            printf("দুঃখিত আপনার তহবিলে পর্যাপ্ত পরিমানে অর্থ নেই");

            printf("\n\nআরেক বার সেবা গ্রহন করতে চান?\n রাজি হলে ১ চাপুন অথবা সেবা হতে বের হতে চাইলে ২ চাপুন\n\n ");

            scanf("%d", &anotherTransaction);

            if (anotherTransaction == 1)

            {

                ATM_Transaction(); // call our ATM_Transaction method here
            }
        }

        break;

    case 3:

        printf("টাকা জমা দেওয়ার পরিমান দিন: ");

        scanf("%d", &amountToDeposit);

        balance = amountToDeposit + balance;

        printf("টাকা জমা দেওয়ার জন্য ধন্যবাদ\n আপনার বর্তমান জমাকৃত অর্থের পরিমান: %f", balance);

        printf(" \nআরেক বার সেবা গ্রহন করতে চান?\n রাজি হলে ১ চাপুন অথবা সেবা হতে বের হতে চাইলে ২ চাপুন\n\n ");

        scanf("%d", &anotherTransaction);

        if (anotherTransaction == 1)

        {

            ATM_Transaction();
        }

        break;

    default:

        printf("আমাদের সয়ংক্রিয় অর্থ লেনদেন ব্যাবস্থা গ্রহন করার জন্য ধন্যবাদ/n মাস্ক পরুন সুস্থ থাকুন");
    }
}
