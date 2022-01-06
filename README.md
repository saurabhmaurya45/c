<!DOCTYPE html>
<html>
<head>
    <title>Programming Question</title>
    <link rel="stylesheet" href="style\bootstrap.min.css">
    <link rel="stylesheet" href="style\programming.css">
</head>
<body>
  <div class="jumbotron" 
  style="">
    <h2 style="font-family: algerian;
        font-size: 64px !important;
        color: red;
        text-align: center;
        ">Solution for<br>
      Problem Solving Trough Programming with C
    </h2>
  </div>
	<div class="container">
        <div class="jumbotron">
           <h1>
               Chapter: 01
           </h1>
<em><u>Problem No:1</u> <span>Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
 his gross salary.</span></em><br><br>
<pre>#include &lt;stdio.h&gt;
int main(){
  float sal;
  scanf("%f",&sal);
  float allowance=sal*0.4;
  float rent=sal*0.2;
  float gross_sal=sal+allowance+rent;
  printf("The gross salary of Ramesh is:%f\n",gross_sal);
  return 0;
}</pre><hr>

<em><u>Problem No:2</u> <span>The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  float dist;
  printf("Enter the distance to be converted:");
  scanf("%f",&dist);
  printf("%f\n",dist );
  float meters=dist*1000;
  float feet= meters*3.280839895;
  float inches= feet*12;
  float centimeters= meters*100;
  printf("The distance in meters:%fm\n",meters );
  printf("The distance in feet:%fft\n", feet);
  printf("The distance in inches:%fin\n", inches);
  printf("The distance in centimeters:%fcm\n", centimeters);
  return 0;
}
</pre><hr>

<em><u>Problem No:3</u> <span>If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum m.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int mathematics,English,Science,social_science,computer_science;
  int m;
  printf("Enter the marks of mathematics:");
  scanf("%d",&mathematics);
  printf("Enter the marks of English:");
  scanf("%d",&English);
  printf("Enter the marks of Science:");
  scanf("%d",&Science);
  printf("Enter the marks of social_science:");
  scanf("%d",&social_science);
  printf("Enter the marks of computer_science:");
  scanf("%d",&computer_science);
  printf("Enter maximum marks: ");
  scanf("%d",&m);
  int aggregateMarks=mathematics+English+Science+social_science+computer_science;
  float percentage=(aggregateMarks/(float)m)*100.0;
  printf("Percentage obtained:%f\n",percentage );
  printf("Aggregate Marks obtained:%d",aggregateMarks);
  return 0;
}
</pre><hr>

<em><u>Problem No:4</u> <span>Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  float Fahrenheit;
  printf("Enter the temperature in Fahrenheit:");
  scanf("%f",&Fahrenheit);
  float Centigrade=(Fahrenheit-32)*5/9;
  printf("The temperature in Centigrade:%f\n",Centigrade );
  return 0;
}
</pre><hr>

<em><u>Problem No:5</u> <span>
The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.
</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int length,breadth,radius;
  printf("Enter length, breadth and radius :\n");
  scanf("%d %d %d",&length,&breadth,&radius);
  float AreaofRectangle=length*breadth;
  float PerimeterofRectangle=2*(length+breadth);
  float AreaofCircle=4*pi*radius*radius;
  float CircumferenceofCircle=4*pi*radius;

  printf("Area of Rectangle:%f\n",AreaofRectangle);
  printf("Perimeter of Rectangle:%f\n",PerimeterofRectangle);
  printf("Area of Circle:%f\n",AreaofCircle);
  printf("Circumference of Circle:%f",CircumferenceofCircle);
  return 0;
}
</pre><hr>

<em><u>Problem No:6</u> <span>Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int c,d;
  printf("Enter two numbers\n");
  scanf("%d %d",&c,&d);
  printf("Entered values are: %d %d\n",c,d );
  int temp=0;
  temp=c;
  c=d;
  d=temp;
  printf("Swaped values are: %d %d\n",c,d );
  return 0;
}
</pre><hr>

<em><u>Problem No:7</u> <span>If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int number;
  printf("Enter 5 digit number:\n");
  scanf("%d",&number);
  int sum=0;
  while (number!=0){
    sum=sum+number%10;
    number=number/10;
  }
  printf("The sum of digit is:%d\n",sum);
  return 0;
}
</pre><hr>

<em><u>Problem No:8</u> <span>If a five-digit number is input through the keyboard, write a
program to reverse the number.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  /*Declaring and initializing variables*/
    int value,dig1,dig2,dig3,dig4,dig5,reverse,temp;

/*prompt to take the input*/
    printf("Please enter a five-digit number: ");

/*Taking input*/   
    scanf("%d",&value);
 temp = value ;

/*Calculations*/
    dig1 = value % 10;
  
    /* e.g. if value is 12345 then 12345 % 10 gives 5*/
  
    value = value / 10;
  
    /* '12345/10' gives '1234.5' but this is integer division so digit/s after '.' will
    be dropped and we get '1234'*/
   
    dig2 = value % 10;
  
    /*now '1234 % 10' gives '4' and so on*/
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
    value = value / 10;
    dig5 = value % 10;
   
    reverse = (dig1*10000) + (dig2*1000) + (dig3*100) + (dig4*10) + (dig5) ;

/*showing Results*/   
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   By reversing %d it becomes : %d",temp,reverse);

  return 0;
}
</pre><hr>

<em><u>Problem No:9</u> <span>This program takes a four-digit integer from user, and shows sum of first and last digit.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  /*Declaring and initializing variables*/
    int value,dig1,dig2,dig3,dig4,sum;

/*prompt to take the input*/
    printf("Please enter a foure-digit number: ");

/*Taking input*/   
    scanf("%d",&value);


/*Calculations*/
    dig1 = value % 10;
  
    /* e.g. if value is 12345 then 12345 % 10 gives 5*/
  
    value = value / 10;
  
    /* '12345/10' gives '1234.5' but this is integer division so digit/s after '.' will
    be dropped and we get '1234'*/
   
    dig2 = value % 10;
  
    /*now '1234 % 10' gives '4' and so on*/
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
   
   
    sum = dig4 + dig1;

/*showing Results*/   
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   Sum of %d and %d is: %d",dig4,dig1,sum);
    return 0;
}
</pre><hr>

<em><u>Problem No:10</u> <span>A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int amount;
  
    // taking input   
    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d",&amount);
   
    //calculations
    printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100);
    // e.g. if amount entered is 987 then 987 / 100 will answer 9 (because amount is an intiger variable) 
   
    printf("\n\nRequired notes of Rs. 50   :  %d", (amount % 100) / 50);
    //e.g. 987 % 100 will answer 87 and then 87 / 50 will answer 1.
   
    printf("\n\nRequired notes of Rs. 10   :  %d", (((amount % 100) % 50) / 10));
   
    printf("\n\nAmount still remaining Rs. :  %d", (((amount % 100) % 50) % 10));

    return 0;
}
</pre><hr>

<em><u>Problem No:11</u> <span>In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int pop, popmen, popwomen, poplit, poilit, litmen, ilitmen, litwomen, ilitwomen;
   
    pop = 80000;
   
    //Calculations
    //population of men
    popmen = (52 * pop) / 100;
   
    //population of women
    popwomen = pop - popmen;
   
    //literate population
    poplit = (48 * pop) / 100;
   
    //literate population of men
    litmen = (35 * pop) / 100;
   
    ////literate population of women
    litwomen = poplit - litmen;
   
    //iliterate population of men
    ilitmen = popmen - litmen;
   
    //iliterate population of women
    ilitwomen = popwomen - litwomen;
   
    printf("\n\t\t\tDATA\n\n");
    printf("_____________________________________________\n\n");
    printf("Total population of the city     :\t%d\n\n",pop);
    printf("Total population of men          :\t%d\n\n",popmen);
    printf("Total population of women        :\t%d\n\n",popwomen);
    printf("Literate population of men       :\t%d\n\n",litmen);
    printf("Literate population of women     :\t%d\n\n",litwomen);
    printf("Illiterate population of men     :\t%d\n\n",ilitmen);
    printf("Illiterate population of women   :\t%d\n\n",ilitwomen);
    return 0;
}
</pre><hr>

<em><u>Problem No:12</u> <span>If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  float cost, sale, costitem, profit;

    printf("Please enter total selling price of 15 items: ");
    scanf("%f",&sale);
   
    printf("\nNow enter total profit on 15 items: ");
    scanf("%f",&profit);
   
    //Calculations
    cost = sale - profit;
    costitem = cost / 15;

   
    printf("\nCost price per item: %f",costitem);
   
  return 0;
}
</pre><hr>

<em><u>Problem No:13</u> <span>If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402.
</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  /*Declaring and initializing variables*/
    int value,dig1,dig2,dig3,dig4,dig5,temp;

/*prompt to take the input*/
    printf("Please enter a five-digit number: ");

/*Taking input*/  
    scanf("%d",&value);
    temp = value ;

/*Calculations*/
    //separating digits 
    dig1 = value % 10;
    value = value / 10;
    dig2 = value % 10;
    value = value / 10;
    dig3 = value % 10;
    value = value / 10;
    dig4 = value % 10;
    value = value / 10;
    dig5 = value % 10;
    
    //adding 1 to each digit
    dig1 = ((dig1+1)%10);
    dig2 = ((dig2+1)%10);
    dig3 = ((dig3+1)%10);
    dig4 = ((dig4+1)%10);
    dig5 = ((dig5+1)%10);

/*showing Results*/  
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   By adding one in each digit of %d it becomes : %d%d%d%d%d",temp,dig5,dig4,dig3,dig2,dig1);
   
    return 0;
}
</pre><hr>
  </div>
</div>
<!--END-->
<!--===================================================-->
<!--Chapter:2 -->
<div class="container">
  <div class="jumbotron">
    <h1>Chapter: 02</h1>

<em><u>Problem No:1</u> <span>If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int cp,sp;
  printf("Enter cost price and selling price respectively:\n");
  scanf("%d %d",&cp,&sp);
  if (cp>sp){
    printf("The seller has made Loss\n" );
    printf("and loss of rs:%d\n", cp-sp);
  }
  else{
    printf("The seller has made profit\n" );
    printf("and profit of rs:%d\n", sp-cp); 
  }

  return 0;
}
</pre><hr>

<em><u>Problem No:2</u> <span>Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.
</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int x ; 
   printf("Enter x:\n");
   scanf("%d",&x);
   if (x%2==0){
    printf("Even number\n");
   }else{
    printf("odd number\n");
   }
  return 0;
}
</pre><hr>

<em><u>Problem No:3</u> <span>Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int year;
   printf("Enter year:\n");
   scanf("%d",&year);
   if (year%4==0){
    printf("Leap Year\n");
   }else{
    printf("Not a leap year\n");
   }
  return 0;
}
</pre><hr>

<em><u>Problem No:4</u> <span>If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int ram,shyam,ajay;
  printf("Enter the age of Ram, Shyam, and Ajay respectively:\n");
  scanf("%d %d %d",&ram,&shyam,&ajay);
  int youngest=ram;
  if (shyam&lt;ram){
    youngest=shyam;
    printf("The youngest one is Shyam and the age is %d\n",shyam);
  }else if(ajay&lt;ram) {
      youngest=ajay;
      printf("The youngest one is Ajay and the age is %d\n",ajay);
  }else{
    printf("The youngest one is Ram and the age is %d\n",ram);
  }
  
  return 0;
}
</pre><hr>

<em><u>Problem No:5</u> <span>Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int angle1,angle2,angle3;
  printf("Enter three angles of a triangle:\n");
  scanf("%d %d %d",&angle1,&angle2,&angle3);
  if ((angle1+angle2+angle3)==180){
    printf("Valid triangle\n");
  }else{
    printf("Invalid triangle\n");
  }
  return 0;
}
</pre><hr>
   
<em><u>Problem No:6</u> <span>Find the absolute value of a number entered through the
keyboard.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int x;
  printf("Enter x:\n");
  scanf("%d",&x);
  int temp=x;
  if (temp&lt;0)
  {
    temp=-1*temp;
  }
  printf("The absolute value of %d is %d\n",x,temp );
  return 0;
}
</pre><hr>

<em><u>Problem No:7</u> <span>Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int length,breadth;
  printf("Enter length and breadth:\n");
  scanf("%d %d",&length,&breadth);
  int area=length*breadth;
  int perimeter=2*(length+breadth);
  if (area>perimeter){
    printf("True\n");
  }else{
    printf("False\n");
  }
  return 0;
}
</pre><hr>

<em><u>Problem No:8</u> <span>According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.</span></em><br><br>
<pre>
#include &lt;stdio.h&gt;
int main(){
  int year,BasicYear=1900,NoofYears;
  printf("Enter the desired year:\n");
  scanf("%d",&year);
  //check whether year or basic year is greater and according to that calculate no of years in between.
  if (year>BasicYear){
    NoofYears = (year-1) - BasicYear;
  }else{
    NoofYears = BasicYear - (year-1);
  }
  //total no of leap year
  int leapYear = NoofYears/4;
  // total no of non leap year
  int nonleapYear = NoofYears - leapYear;
  //calculate total days with the help of NoofYears
  int totalDays= (leapYear*366)+(nonleapYear*365)+1;
  //calculating actual date
  int actualdate = totalDays%7;
  //finding day on the actual date
  if (actualdate==0)
  {
    printf("Monday\n");
  }else if (actualdate==1)
  {
    printf("Tuesday\n");
  }else if (actualdate==2)
  {
    printf("Wednesday\n");
  }else if (actualdate==3)
  {
    printf("Thursday\n");
  }else if (actualdate==4)
  {
    printf("Friday\n");
  }else if (actualdate==5)
  {
    printf("Saturday\n");
  }else
  {
    printf("Sunday\n");
  }

  return 0;
}
</pre><hr>

        </div>
    </div>
</body>
</html>
