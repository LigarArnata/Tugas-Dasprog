#include <stdio.h>
#include <stdlib.h>


/* Tugas 2 Kelompok (Programming Project)
Anggota Kelompok :
1. Sony Hermawan
2. Ligar Arsa Arnata
3. Imanuel Pascanov Samosir */


int main()
{
// 1. Taxi Fare Calculator

// Variable Declaration ( Beginning Odometer & Ending Odometer )
double bo,eo;
// Get the Amount of Beginning Odometer & Ending Odometer
printf("Taxi Fare Calculator \n");
printf("Enter Begining Odometer Reading : ");
scanf("%lf", &bo);
printf("Enter Ending Odometer Reading : ");
scanf("%lf", &eo);
// Get the Total Distance Traveled
double dis = eo - bo;
// Get the Fare
double fare = 1.50 * dis;
// Display the Distance Traveled and the Total Fare
printf("You traveled a distance of %.2f miles. At $1.50 per mile, your fare is $%.2f", dis, fare);

// 2. Hydroelectric Dam

// 3. Freezer Power Failure

// Variable Declaration ( Hours & Minute )
double h,m;
// Get the Amount of Hours and Minute
printf("How long it has been since the start of the power failure\n");
printf("Hours : ");
scanf("%lf", &h);
printf("Minute : ");
scanf("%lf", &m);
// Get the Total Time ( Convert minute to hours )
double time = h + m / 60;
// Get the Temperature
double T = 4 * time * time / time + 2 - 20;
// Display the Temperature
printf("Your freezer temperature : %f", T);

// 4. USD to Pounds

// Variable Declaration
double dollar,pound;
// Get the Amount of USD
printf("Enter amount of USD : ");
scanf("%lf", &dollar);
// Convert USD to Pounds
pound = 0.65 * dollar;
// Display the Result
printf("Your USD in GBP : %.2f", pound);

// 5. Hospital Pump

// Variable Declaration
double rate,minute,hour,fluidbag;
// Get the Amount of Volume to be Infused and the Minutes Over Which to Infuse
printf("Enter the Volume to be Infused (ml) : ");
scanf("%lf", &fluidbag);
printf("Enter the Minutes Over Which to Infuse : ");
scanf("%lf", &minute);
// Convert Minute to Hours
hour = (minute / 60);
// Get the Rate
rate = fluidbag / hour;
// Display the VTBI and Rate
printf("VTBI : %.2f ml \n", fluidbag);
printf("Rate : %.2f ml/hr \n", rate);

// 6. Score Predictor

// Variable Declaration ( Desired Grade, Minimum Average, Current Average, and Final Counts )
char dg;
double ma,ca,fc;
// Get the Desired Grade, Minimum Average, Current Average, and Final Counts
printf("Enter Desired Grade : ");
scanf("%c", &dg);
printf("Enter Minimum Average Required : ");
scanf("%lf", &ma);
printf("Enter Current Average Course : ");
scanf("%lf", &ca);
printf("Enter how much the final counts as a percentage of the course grade : ");
scanf("%lf", &fc);
// Get the Score needed
double sc = (100*ma - ca*(100-fc))/fc;
// Display the Score needed
printf("You need a score of %.2f on the final to get a %c", sc, dg);

// 7. BTU Oil Efficiency

// 8. Community Water Estimate

// Variable Declaration ( New Toilet Flush, Old Toilet Flush, Daily Flush, Toilet per Persons, & Cost of New Toilet )
int ntf, otf, df, tpp, cnt;
ntf = 2;
otf= 15;
df = 14;
tpp = 3;
cnt = 150;
// Variable Declaration ( Amount of Population )
long int aop;
// Get the Amount of Population
printf("Enter the Amount of Population : ");
scanf("%ld", &aop);
// Get the Total Cost
long int tc = aop * cnt;
// Get the Old Toilet Flush per Day
long int otfpd = aop / tpp * df * otf;
// Get the New Toilet Flush per Dar
long int ntfpd = aop/ tpp * df * ntf;
// Get the Water Saved
long int ws = otfpd - ntfpd;
// Display the Amount of Population, Water Saved, and Total Cost
printf("Amount of Population : %ld people \nNew Toilets Save : %ld litres per day \nTotal Cost : $%ld", aop, ws, tc);

// 9. Time Required to Cut the Grass

// Variable Declaration ( Length, Width, & Rate )
int l,w, r;
r = 2;
// Get the Amount of Length & Width
printf("Enter the length of the yard in feet : ");
scanf("%d", &l);
printf("Enter the width of the yard in feet : ");
scanf("%d", &w);
// Get the Value of Area
int a = l * w;
// Get the Total Time
int t = a / r;
// Display the Total Time and Value of Area
printf("It will take %d seconds to cut the grass in a yard of %d square feet\n", t, a);

// 10. Equation of Perpendicular Bisector

// 11. Pythagorean Triple

// Variable Declaration
int m, n;
// Get the Value of Two Integers
printf("Enter First integer : ");
scanf("%d", &m);
printf("Enter Second integer : ");
scanf("%d", &n);
// Get the Value of Side 1
int side1 = (m * m) - (n * n);
// Get the Value of Side 2
int side2 = 2 * m * n;
// Get the Value of Hypotenuse
int hypotenuse = (m * m) + (n * n);
// Display the Value of Pythagorean Triple
printf("The Pythagorean triple of these integers are %d, %d and %d", side1, side2, hypotenuse);

// 12. Acceleration of Jet

// Variable Declaration ( Takeoff Speed & Distance )
double to, d;
// Get the Amount of Takeoff Speed
printf("Enter Takeoff speed in km/hr : ");
scanf("%lf", &to);
// Get the Amount of Distance
printf("Enter the Distance in meters : ");
scanf("%lf", &d);
// The Time Needed ( Convert km/hours to m/s )
double time = d / (0.277778 * to);
// The Acceleration Needed
double ac = (0.277778 * to ) / time;
// Display the Time and Acceleration for the Jet
printf("Time for the jet to accelerate : %.2f seconds\n", time);
printf("Acceleration of the jet is : %.2f meter per second squared", ac);


// 13. Batch Prediction

// Variable Declaration ( Student Enrolled & Student per Section )
int se, sps;
sps = 30;
// Get the Amount of Student Enrolled
printf("Enter the Number of Students Enrolled : ");
scanf("%d", &se);
// The Number of Section Needed
int sections = se / 30;
// The Number of Leftover Student
int los = se % sps;
// Display The Amount of Student Enrolled, Sections Needed, and Left Over Student
printf("Students Enrolled : %d \nSections Needed : %d \nLeft Over Students : %.d", se, sections, los);

    return 0;
}
