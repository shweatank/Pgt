#include <stdio.h>
#include<string.h>
struct Employe{
	char empName[20];
	int empid;
	int empsalary;
};




int main(){
	struct Employe EMP[3];
	for(int i=0;i<3;i++){

	//char empName[20];
	printf("Enter empName %d :",i+1);
	scanf("%s",EMP[i].empName);
	//int empid;
	printf("enter id");
	scanf("%d",&EMP[i].empid);
	//int empsalary;
	printf("enter salary:");
	scanf("%d",&EMP[i].empsalary);
	}
	int highestsalary=0;
	char highestname[50];
	int highestid;
	for(int i=0;i<3;i++)
	{

	//	char name =EMP[i].empName;
	//	int id=EMP[i].empid;
	//	int sal=EMP[i].empsalary;

		if(EMP[i].empsalary > highestsalary ){
                                       
			strcpy(highestname,EMP[i].empName);
			highestid=EMP[i].empid;
			highestsalary=EMP[i].empsalary;


		}
	}
	printf("%s\n",highestname);
	printf("%d\n",highestsalary);
	printf("%d",highestid);

}
