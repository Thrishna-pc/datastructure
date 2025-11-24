#include<stdio.h>
char univ_set[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char set1[26],set2[26];
int bit_vec1[26],bit_vec2[26],result[26];
void initializeSet(char ary[26])
{
	for(int i=0;i<26;i++)
	{
	bit_vec1[i]=0;
	bit_vec2[i]=0;
	result[i]=0;
	}
}
void bitvector(char ary[26],char bit[26],int num)
{
	for(int i=0;i<num1;i++)
	{
	for(int j=0;i<26;i++)
	{
	char c = tolower(ary[i]);
	if(c == univ_set[j])
		bit[j] = 1;
	}
}
void setunion(int bit1[26],int bit2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i] = bit1[i]|bit2[26];
	}
}
void setInsection(int bit1[26],int bit2[26])
{
	for(int i=0;i<26;i++)
	{
	 result[i] = bit1[i]&bit2[26];
	}
}
void setComplement(int bit1[26])
{
	for(int i=0;i<26;i++)
	{
		if(bit[i] == 0)
			result[i] = 1;
		else
			result[i] = 0;
	}
}
void setDifference(int bit1[26],int bit2[26])
{
	setComplement(bit2);
	setInsection(bit1,result);
}
int main()
{
	int num1,num2;
	printf("enter the number of elements in set1: ");
	scanf("%d",&num1);
	printf("enter the set1 elements : ");
	for(int i=0;i<num1;i++)
	scanf(" %c",&set1[i]);
	printf("enter the number of elements in set2: ");
	scanf("%d",&num2);
	printf("enter the set2 elements: ");
	for(int i=0;i<num2;i++)
	scanf(" %c",&set2[i]);
}
}
	
