//This program worked before 01-08-2023 before shift main campus to other campus

 //This project is about for a new student who want to know about green university of Bangladesh
#include<stdio.h>

// Here Start Main Function of this program
int main()
{

    printf("\n\t\t\t------------------------------->>>>GUB info APP<<<<--------------------------\t\t\n\n");

    // here print my name
    printf("\t\t\t\t   ----------------------------------------------------- \n");
    printf("\t\t\t\t   |     *         *      *    *   ****   *       *    | \n");
    printf("\t\t\t\t   |   *         *   *    *    *   *      * *   * *    | \n");
    printf("\t\t\t\t   |   *        *     *    *  *    *      *   *   *    | \n");
    printf("\t\t\t\t   |     *     *       *    **     ****   *       *    | \n");
    printf("\t\t\t\t   |      *   **********     *     *      *       *    | \n");
    printf("\t\t\t\t   |      *   *        *     *     *      *       *    | \n");
    printf("\t\t\t\t   |    *     *        *     *     ****   *       *    | \n");
    printf("\t\t\t\t   ----------------------------------------------------- \n");

    //take input and display welcome
    int name[50];
    printf("\nEnter Your Name: ");
    gets(name);
    printf("\n\t\t************************Welcome to %s*************************\n",name);

    //this while loop help for again again run code
    while(1)
    {
        //give a choice which user want
        int choice;
        printf("\n\n~~What do you want to know about?----\n");
        printf("  1. Admission \n ");
        printf(" 2. Faculty Members \n ");
        printf(" 3. Classroom, Lab & Others \n ");
        printf(" 4. Clubs \n ");
        printf(" 5. Exit \n ");

        printf("\n Enter Your choice: ");
        scanf("%d",&choice);


        //start switch condition
        switch (choice)
        {

        //this case made for admission
        case 1:
        {

            printf("\n Here are all DEPARTMENT---\n");
            printf(" 1. EEE \n");
            printf(" 2. CSE \n");
            printf(" 3. Textile Engineering \n");
            int dept;
            printf("\nEnter Your Department Number: ");
            scanf("%d",&dept);

            //testing for EEE department
            if(dept==1)
            {
                printf("\n\t------------------welcome To You EEE Department-----------------\n");
                float ssc, hsc, result;
                printf("Enter Your SSC marks = ");
                scanf("%f",&ssc);
                printf("Enter Your HSC marks = ");
                scanf("%f",&hsc);

                // result test
                result = ssc + hsc;
                printf("Your Total Result is = %.2f\n",result);

                if(result >= 4 && result <= 10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                    printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                    scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1)
                    {
                        printf("You will be able to direct Admission--\n\n");
                        printf("\n\nYou got '50' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 301500 \n");
                    }
                    else if(result == 10)
                    {
                        printf("\n\nYou will be able to direct Admission--\n\n");
                        printf("You got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 382500 \n");
                    }
                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\nYou will be able to direct Admission--\n\n");
                        printf("You got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 423000 \n");
                    }
                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\nYou have to give admission\n");
                        printf("You got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 463500 \n");
                    }
                    else
                    {
                        printf("\n\nYou have to give admission\n");
                        printf("You got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 528500 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 504000 \n");
                    }

                }
                else
                {
                    printf("\nYour are not eligible--");
                }



            }

            //testing for CSE department
            else if(dept==2)
            {
                printf("\n\t-----------------------welcome To You CSE Department-----------------------\n");
                float ssc, hsc, result;
                printf("Enter Your SSC marks = ");
                scanf("%f",&ssc);
                printf("Enter Your HSC marks = ");
                scanf("%f",&hsc);

                // result test
                result = ssc + hsc;
                printf("Your Total Result is = %.2f\n",result);

                if(result >= 4 && result <=10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                    printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                    scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1 )
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '50' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 370350 \n");
                    }
                    else if(result == 10 )
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 475650 \n");
                    }
                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 528300 \n");
                    }
                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\nYou have to give Admission--\n");
                        printf("You got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 580950 \n");
                    }
                    else
                    {
                        printf("\n\nYou have to give Admission--\n");
                        printf("You got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 658100 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 633600 \n");
                    }

                }
                else
                {
                    printf("\n Your are not eligible--");
                }



            }


            //testing for Textile Engineering
            else if(dept==3)
            {
                printf("\n\t-----------------welcome To You Textile Engineering Department------------------\n");
                float ssc, hsc, result;
                printf("Enter Your SSC marks = ");
                scanf("%f",&ssc);
                printf("Enter Your HSC marks = ");
                scanf("%f",&hsc);

                // result test
                result = ssc + hsc;
                printf("Your Total Result is = %.2f\n",result);

                if(result >= 4 && result <=10)
                {

                    int allSubject;
                    if(result == 10)
                    {
                    printf("Did you get A+ in all subject?(if get then press 1 not press 0) : ");
                    scanf("%d",&allSubject);
                    }

                    if(result == 10 && allSubject == 1  )
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '50' percent weaver--- \n");
                        printf("Total Credits = 161 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '50' WEAVER Total Tuition Fees = 292575 \n");
                    }
                    else if(result == 10 )
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '30' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '30' WEAVER Total Tuition Fees = 368565 \n");
                    }
                    else if(result >= 8.00 && result <= 9.99)
                    {
                        printf("\n\nYou will be able to direct Admission--\n");
                        printf("You got '20' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '20' WEAVER Total Tuition Fees = 406560 \n");
                    }
                    else if(result >= 7.00 && result <= 7.99)
                    {
                        printf("\n\nYou have to give Admission--\n");
                        printf("You got '10' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '10' WEAVER Total Tuition Fees = 444555 \n");
                    }
                    else
                    {
                        printf("\n\nYou have to give Admission--\n");
                        printf("You got '0' percent weaver--- \n");
                        printf("Total Credits = 144 \n");
                        printf("Total Tuition Fees = 507050 \n");
                        printf("After '0' WEAVER Total Tuition Fees = 482550 \n");
                    }

                }
                else
                {
                    printf("\nYour are not eligible--");
                }


            }
            else
            {
                printf("Sorry! Your choice is invalid. Try again.... ");
            }
            break;
        }

        //this case made for Faculty Members
        case 2:
        {
            printf(" 1. EEE\n");
            printf(" 2. CSE\n");
            printf(" 3. Textile Engineering\n");

            int ch;
            printf("\nEnter Your Department Number: ");
            scanf("%d",&ch);

            if(ch == 1)
            {
                printf("\t------------Department of EEE ----------------\n\n");
                printf("Total Faculty Members = '56' \n\n");
                printf("Male Faculty Members = '41' \n\n");
                printf("Women Faculty Members = '15' \n\n");
            }
            else if(ch == 2)
            {
                printf("\t------------Department of CSE ----------------\n\n");
                printf("Total Faculty Members = '74' \n\n");
                printf("Male Faculty Members = '41' \n\n");
                printf("Women Faculty Members = '33' \n\n");
            }
            else if(ch == 3)
            {
                printf("\t------------Department of Textile Engineering ----------------\n\n");
                printf("Total Faculty Members = '27' \n\n");
                printf("Male Faculty Members = '22' \n\n");
                printf("Women Faculty Members = '5' \n\n");
            }
            else
            {
                printf("\nSorry ! Your choice is wrong. try again...\n");
            }
            break;

        }

        //this case made for class room , lab and others
        case 3:
        {
            printf("\n \t---------------------------Welcome-------------------------\n\n");
            printf("You can choice any one----\n");
            printf("1. Class Room \n");
            printf("2. Lab \n");
            printf("3. Faculty Room \n");
            printf("4. Office & Accounts \n");
            printf("5. Prayer Room \n");
            printf("6. Library \n");
            printf("7. Others \n");

            int choice;
            printf("\nEnter Your Choice: ");
            scanf("%d",&choice);

            if(choice == 1)
            {

                printf("\n **Class Room----\n");
                printf("\t  Floor   \t   Room  \n");
                printf("\t----------\t---------\n");
                printf("\t  >2nd    \t   204 \n\n");
                printf("\t  >3rd    \t   306 \n\n");
                printf("\t  >3rd    \t   307 \n\n");
                printf("\t  >3rd    \t   309 \n\n");
                printf("\t  >4th    \t   404 \n\n");
                printf("\t  >5th    \t   506 \n\n");
                printf("\t  >6th    \t   601 \n\n");
                printf("\t  >6th    \t   602 \n\n");
                printf("\t  >6th    \t   603 \n\n");
                printf("\t  >6th    \t   605 \n\n");
                printf("\t  >6th    \t   606 \n\n");
            }

            else if(choice == 2)
            {

                printf("\n **Lab-----\n");

                printf("\t          Lab Name               \t   Room  \n");
                printf("\t---------------------------------\t---------\n");
                printf("\t   >Energy Conversion Lab        \t   202 \n\n");
                printf("\t   >Electronics Lab              \t   203 \n\n");
                printf("\t   >TTQC Lab                     \t   205(A) \n\n");
                printf("\t   >Wet Processing Lab           \t   303 \n\n");
                printf("\t   >Apparel Manufacturing Lab    \t   304 \n\n");
                printf("\t   >Inorganic Chemistry Lab      \t   403 \n\n");
                printf("\t   >Physics Lab                  \t   405 \n\n");
                printf("\t   >Physics Lab                  \t   407 \n\n");
                printf("\t   >Artificial Intelligence Lab  \t   409(A) \n\n");
                printf("\t   >Machine Learning Lab         \t   409(A) \n\n");
                printf("\t   >Big Data Analytics Lab       \t   409(B) \n\n");
                printf("\t   >Programming Lab              \t   501 \n\n");
                printf("\t   >Networking Lab               \t   502 \n\n");
                printf("\t   >Computer Graphics Lab        \t   503 \n\n");
                printf("\t   >Multimedia Lab               \t   503 \n\n");
                printf("\t   >Circuit Lab                  \t   607 \n\n");
            }

            else if(choice == 3)
            {

                printf("\n **Faculty Room----\n");
                printf("\t  Floor   \t   Room  \n");
                printf("\t----------\t---------\n");
                printf("\t  >2nd    \t   206 \n\n");
                printf("\t  >3rd    \t   308 \n\n");
                printf("\t  >5th    \t   510 \n\n");

            }

            else if(choice == 4)
            {

                printf("\n **Office & Accounts-----\n");

                printf("\t                 Office                      \t   Room  \n");
                printf("\t---------------------------------------------\t---------\n");
                printf("\t   >Admission Office                         \t   101 \n\n");
                printf("\t   >Campus Director                          \t   201 \n\n");
                printf("\t   >Office of the proctor & Students Affairs \t   302(B) \n\n");
                printf("\t   >IT & Server Room                         \t   301 \n\n");
                printf("\t   >Office of the Treasurer                  \t   305 \n\n");
                printf("\t   >Department co-ordination office          \t   310 \n\n");
                printf("\t   >Administrative Office (account & exam)   \t   311 \n\n");
                printf("\t   >Office of the vice charcellor            \t   401 \n\n");
                printf("\t   >Office of the advisor                    \t   402 \n\n");
                printf("\t   >Office of the program co-ordicators      \t   406 \n\n");
                printf("\t   >Associate chairperson EEE Department     \t   504 \n\n");
                printf("\t   >Associate chairperson CSE Department     \t   505 \n\n");
                printf("\t   >Office of the project Director           \t   604 \n\n");

            }

            else if(choice == 5)
            {

                printf("\n **Prayer Room----\n");
                printf("\t     Floor        \t   Room  \n");
                printf("\t------------------\t---------\n");
                printf("\t  >5th(Female)    \t   507 \n\n");
                printf("\t  >5th(Male)      \t   508 \n\n");
            }

            else if(choice == 6)
            {

                printf("\n **Library----\n");
                printf("\t   Floor   \t   Room  \n");
                printf("\t-----------\t---------\n");
                printf("\t  >6th     \t   608 \n\n");
            }

            else if(choice == 7)
            {

                printf("\n **Others----\n");
                printf("\t      Name          \t   Room  \n");
                printf("\t--------------------\t---------\n");
                printf("\t  >Pantry           \t   509 \n\n");
                printf("\t  >Pantry           \t   408 \n\n");
                printf("\t  >Seminar Hall     \t   302 \n\n");
                printf("\t  >Cafeteria        \t   1st floor \n\n");
            }

            else
            {
                printf("Sorry!! Insufficient Number.. Try Again--");
            }



            break;
        }

        //this case made for about clubs
        case 4:
        {
            printf("------------Welcome to Green University Clubs------------\n");

            printf("Total Clubs is 16--- \n\n");
            printf("* Blood Club \n\n");
            printf("* Cultural Club \n\n");
            printf("* Debating Club \n\n");
            printf("* ECO-Warrior Club \n\n");
            printf("* Green Theater Club\n\n");
            printf("* Photography Club \n\n");
            printf("* Reading Society Club \n\n");
            printf("* Sports Club \n\n");
            printf("* Business Club \n\n");
            printf("* Cine Club \n\n");
            printf("* Computer Club \n\n");
            printf("* EEE Club \n\n");
            printf("* English Club \n\n");
            printf("* Law Club \n\n");
            printf("* Social Bonding Club \n\n");
            printf("* Textile Club \n\n");
            break;
        }

        case 5:
        {
            printf("\n You have successfully exited this program--\n\n");
            return 0;
        }

        default:
        {
            printf("\n Error!! Your Choice is wrong. Try Again");
            break;
        }

        }
    }


    getch();


}
