#include<stdio.h>
#define Que_size_google 5
#define Que_size_amazon 5
#define Que_size_adobe 5
#define Que_size_infosys 5
#define Que_size_tcs 5
int google[Que_size_google],amazon[Que_size_amazon],adobe[Que_size_adobe],infosys[Que_size_infosys],tcs[Que_size_tcs],googlepr[Que_size_google],amazonpr[Que_size_amazon],adobepr[Que_size_adobe],infosyspr[Que_size_infosys],tcspr[Que_size_tcs];
int googlesize,amazonsize,adobesize,infosyssize,tcssize;
void main()
{
 int choice,a,b,c,d,e;
    for(;;){
     printf("Which IT company you want to apply for \n 1.Google 2.Amazon 3.Adobe 4.Infosys 5.TCS 6.Display");
     scanf("%d",&choice);
      switch(choice)
     {
      case 1:a=google();
             break;
      case 2:b=amazon();
             break;
      case 3:c=adobe();
             break;
      case 4:d=infosys();
             break;
      case 5:e=tcs();
             break;
      case 6:result();
             break;
      default:printf("Invalid option!!")

     }

    }
}

int google()
{
  int position,grade,experience;
  char name_g[25],college_g[25],branch_g[10];
  printf("Enter your name: \n");
  scanf("%s",name_g);
  printf("Enter your college name: \n");
  scanf("%s",college_g);
  printf("Enter your branch: \n");
  scanf("%s",branch_g);
  printf("Enter your grade till now (for ten) if less than 6 your not qualified to apply: \n");
  scanf("%d",&grade);
  if(6<grade && grade>10)
  {
    return 0;
  }
  printf("Enter no. of years of experience in the field: \n");
  scanf("%d",&experience);
  printf("Entered data is \n Name: %s\n College: %s\n Branch: %s\n Grade: %d\nExperience: %d ",name_g,college_g,branch_g,grade,experience);
  printf("Enter the position your applying: \n 1 for Manager \t 2 for senior developer \t 3 for junior developer");
  scanf("%d",&position)
  googlequeue(name_g,position);
  printf("You have successfully applied for %s position in Google, Your appointment time will be announced soon.",position);
}
int amazon()
{
  int position,grade,experience;
  char name_a[25],college_a[25],branch_a[10];
  printf("Enter your name: \n");
  scanf("%s",name_a);
  printf("Enter your college name: \n");
  scanf("%s",college_a);
  printf("Enter your branch: \n");
  scanf("%s",branch_a);
  printf("Enter your grade till now (for ten) if less than 6 your not qualified to apply: \n");
  scanf("%d",&grade);
  if(6<grade && grade>10)
  {
    return 0;
  }
  printf("Enter no. of years of experience in the field: \n");
  scanf("%d",&experience);
  printf("Entered data is \n Name: %s\n College: %s\n Branch: %s\n Grade: %d\nExperience: %d ",name_a,college_a,branch_a,grade,experience);
  printf("Enter the position your applying: \n 1 for Manager \t 2 for senior developer \t 3 for junior developer");
  scanf("%d",&position)
  amazonqueue(name_a,position);
  printf("You have successfully applied for %s position in Amazon, Your appointment time will be announced soon.",position);
}
int adobe()
{
  int position,grade,experience;
  char name_ad[25],college_ad[25],branch_ad[10];
  printf("Enter your name: \n");
  scanf("%s",name_ad);
  printf("Enter your college name: \n");
  scanf("%s",college_ad);
  printf("Enter your branch: \n");
  scanf("%s",branch_ad);
  printf("Enter your grade till now (for ten) if less than 6 your not qualified to apply: \n");
  scanf("%d",&grade);
  if(6<grade && grade>10)
  {
    return 0;
  }
  printf("Enter no. of years of experience in the field: \n");
  scanf("%d",&experience);
  printf("Entered data is \n Name: %s\n College: %s\n Branch: %s\n Grade: %d\nExperience: %d ",name_ad,college_ad,branch_ad,grade,experience);
  printf("Enter the position your applying: \n 1 for Manager \t 2 for senior developer \t 3 for junior developer");
  scanf("%d",&position)
  adobequeue(name_ad,position);
  printf("You have successfully applied for %s position in Adobe, Your appointment time will be announced soon.",position);
}
int infosys()
{
  int position,grade,experience;
  char name_i[25],college_i[25],branch_i[10];
  printf("Enter your name: \n");
  scanf("%s",name_i);
  printf("Enter your college name: \n");
  scanf("%s",college_i);
  printf("Enter your branch: \n");
  scanf("%s",branch_i);
  printf("Enter your grade till now (for ten) if less than 6 your not qualified to apply: \n");
  scanf("%d",&grade);
  if(6<grade && grade>10)
  {
    return 0;
  }
  printf("Enter no. of years of experience in the field: \n");
  scanf("%d",&experience);
  printf("Entered data is \n Name: %s\n College: %s\n Branch: %s\n Grade: %d\nExperience: %d ",name_i,college_i,branch_i,grade,experience);
  printf("Enter the position your applying: \n 1 for Manager \t 2 for senior developer \t 3 for junior developer");
  scanf("%d",&position)
  infosysqueue(name_i,position);
  printf("You have successfully applied for %s position in Infosys, Your appointment time will be announced soon.",position);
  }
  int tcs()
  {
    int position,grade,experience;
    char name_t[25],college_t[25],branch_t[10];
    printf("Enter your name: \n");
    scanf("%s",name_t);
    printf("Enter your college name: \n");
    scanf("%s",college_t);
    printf("Enter your branch: \n");
    scanf("%s",branch_t);
    printf("Enter your grade till now (for ten) if less than 6 your not qualified to apply: \n");
    scanf("%d",&grade);
    if(6<grade && grade>10)
    {
      return 0;
    }
    printf("Enter no. of years of experience in the field: \n");
    scanf("%d",&experience);
    printf("Entered data is \n Name: %s\n College: %s\n Branch: %s\n Grade: %d\nExperience: %d ",name_t,college_t,branch_t,grade,experience);
    printf("Enter the position your applying: \n 1 for Manager \t 2 for senior developer \t 3 for junior developer");
    scanf("%d",&position)
    tcsqueue(name_t,position);
    printf("You have successfully applied for %s position in TCS, Your appointment time will be announced soon.",position);
  }
void googlequeue(char name_g[25],int position)
{
  int f1=-1,r1=-1;
  int i1;
  if((f1==0)&&(r1==Que_size_google-1)) //Check if Queue is full
  printf("You cant apply to this company as applicant capacity is filled.");
  else
  {
  if(f1==-1)
  {
  f1 = r1 = 0;
 }
  google[r1] = name_g;
  googlepr[r1] = position;


}
  else if(r1 <= Que_size_google-1)
  {
  for(i1=f1;i1<=r1;i1++)
  {
    google[i1-f1] = google[i1];
    googlepr[i1-f1] = googlepr[i1];
    r1 = r1-f1;
    f1 = 0;
   for(i1 = r1;i1>f1;i1--)
  {
  if(position>googlepr[i1])
  {
  google[i1+1] = google[i1];
  googlepr[i1+1] = googlepr[i1];
  }
  else
  break;
  google[i1+1] = name_g;
  googlepr[i1+1] = position;
  r1++;
  }
}
}
}
void amazonqueue(char name_a[25],int position)
{
  int f2=-1,r2=-1;
  int i2;
  if((f2==0)&&(r2==Que_size_amazon-1)) //Check if Queue is full
  printf("You cant apply to this company as applicant capacity is filled.");
  else
  {
  if(f2==-1)
  {
  f2 = r2 = 0;
 }
  amazon[r2] = name_a;
  amazonpr[r2] = position;


}
  else if(r2 <= Que_size_amazon-1)
  {
  for(i2=f2;i2<=r2;i2++)
  {
    amazon[i2-f2] = amazon[i2];
    amazonpr[i2-f2] = amazonpr[i2];
    r2 = r2-f2;
    f2 = 0;
   for(i2 = r2;i2>f2;i2--)
  {
  if(position>amazonpr[i2])
  {
  amazon[i2+1] = amazon[i2];
  amazonpr[i2+1] = amazonpr[i2];
  }
  else
  break;
  amazon[i2+1] = name_a;
  amazonpr[i2+1] = position;
  r2++;
  }
}
}
}
void adobequeue(char name_ad[25],int position)
{
  int f3=-1,r3=-1;
  int i3;
  if((f3==0)&&(r3==Que_size_adobe-1)) //Check if Queue is full
  printf("You cant apply to this company as applicant capacity is filled.");
  else
  {
  if(f3==-1)
  {
  f3 = r3 = 0;
 }
  adobe[r3] = name_ad;
  adobepr[r3] = position;


}
  else if(r3 <= Que_size_adobe-1)
  {
  for(i3=f3;i3<=r3;i3++)
  {
    adobe[i3-f3] = adobe[i3];
    adobepr[i3-f3] = adobepr[i3];
    r3 = r3-f3;
    f3 = 0;
   for(i3 = r3;i3>f3;i3--)
  {
  if(position>adobepr[i3])
  {
  adobe[i3+1] = adobe[i3];
  adobepr[i3+1] = adobepr[i3];
  }
  else
  break;
  adobe[i3+1] = name_ad;
  adobepr[i3+1] = position;
  r3++;
  }
}
}
}
void infosysqueue(char name_i[25],int position)
{
  int f4=-1,r4=-1;
  int i4;
  if((f4==0)&&(r4==Que_size_infosys-1)) //Check if Queue is full
  printf("You cant apply to this company as applicant capacity is filled.");
  else
  {
  if(f4==-1)
  {
  f4 = r4 = 0;
 }
  infosys[r4] = name_i;
  infosyspr[r4] = position;


}
  else if(r4 <= Que_size_infosys-1)
  {
  for(i4=f4;i4<=r4;i4++)
  {
    infosys[i4-f4] = infosys[i4];
    infosyspr[i4-f4] = infosyspr[i4];
    r4 = r4-f4;
    f4 = 0;
   for(i4 = r4;i4>f4;i4--)
  {
  if(position>infosyspr[i4])
  {
  infosys[i4+1] = infosys[i4];
  infosyspr[i4+1] = infosyspr[i4];
  }
  else
  break;
  infosys[i4+1] = name_i;
  infosyspr[i4+1] = position;
  r4++;
  }
}
}
}
void tcsqueue(char name_t[25],int position)
{
  int f5=-1,r5=-1;
  int i5;
  if((f5==0)&&(r5==Que_size_tcs-1)) //Check if Queue is full
  printf("You cant apply to this company as applicant capacity is filled.");
  else
  {
  if(f5==-1)
  {
  f5 = r5 = 0;
 }
  tcs[r5] = name_t;
  tcspr[r5] = position;


}
  else if(r5 == Que_size_tcs-1)
  {
  for(i5=f5;i5<=r5;i5++)
  {
    tcs[i5-f5] = tcs[i5];
    tcspr[i5-f5] = tcspr[i5];
    r5 = r5-f5;
    f5 = 0;
   for(i5 = r5;i5>f5;i5--)
  {
  if(position>tcspr[i5])
  {
  tcs[i5+1] = tcs[i5];
  tcspr[i5+1] = tcspr[i5];
  }
  else
  break;
  tcs[i5+1] = name_t;
  tcspr[i5+1] = position;
  r5++;
  }
}
}
}
void result()
{

}


/*
void enqueue(int data,int p)//Enqueue function to insert data and its priority in queue
{
int i;
if((f==0)&&(r==N-1)) //Check if Queue is full
printf("Queue is full");
else
{
if(f==-1)//if Queue is empty
{
f = r = 0;
Q[r] = data;
Pr[r] = p;

}
else if(r == N-1)//if there there is some elemets in Queue
{
for(i=f;i<=r;i++) { Q[i-f] = Q[i]; Pr[i-f] = Pr[i]; r = r-f; f = 0; for(i = r;i>f;i--)
{
if(p>Pr[i])
{
Q[i+1] = Q[i];
Pr[i+1] = Pr[i];
}
else
break;
Q[i+1] = data;
Pr[i+1] = p;
r++;
}
}
}
else
{
for(i = r;i>=f;i--)
{
if(p>Pr[i])
{
Q[i+1] = Q[i];
Pr[i+1] = Pr[i];
}
else
break;
}
Q[i+1] = data;
Pr[i+1] = p;
r++;
}
}

}
void print() //print the data of Queue
{
int i;
for(i=f;i<=r;i++)
{
printf("\nElement = %d\tPriority = %d",Q[i],Pr[i]);
}
}
*/