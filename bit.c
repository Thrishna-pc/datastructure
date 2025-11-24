#include <stdio.h>
#include <ctype.h>

char univ_set[26] =
{
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
};

char set1[26], set2[26];
int bit_vec1[26], bit_vec2[26], result[26];

void initializeSet()
{
    for(int i = 0; i < 26; i++)
    {
        bit_vec1[i] = 0;
        bit_vec2[i] = 0;
        result[i]   = 0;
    }
}

void bitvector(char ary[26], int bit[26], int num)
{
    for(int i = 0; i < num; i++)
    {
        char c = tolower(ary[i]);
        for(int j = 0; j < 26; j++)
        {
            if(c == univ_set[j])
            {
                bit[j] = 1;
                break;
            }
        }
    }
}

void setUnion(int bit1[26], int bit2[26])
{
    for(int i = 0; i < 26; i++)
        result[i] = bit1[i] | bit2[i];
}

void setIntersection(int bit1[26], int bit2[26])
{
    for(int i = 0; i < 26; i++)
        result[i] = bit1[i] & bit2[i];
}

void setComplement(int bit[26])
{
    for(int i = 0; i < 26; i++)
        result[i] = (bit[i] == 0) ? 1 : 0;
}

void setDifference(int bit1[26], int bit2[26])
{
    setComplement(bit2);    
    setIntersection(bit1, result);
}

void printResult()
{
    printf("{ ");
    for(int i = 0; i < 26; i++)
    {
        if(result[i] == 1)
            printf("%c ", univ_set[i]);
    }
    printf("}\n");
}

int main()
{
    int num1, num2, choice;

    initializeSet();

    printf("Enter number of elements in set1: ");
    scanf("%d", &num1);

    printf("Enter set1 elements: ");
    for(int i = 0; i < num1; i++)
        scanf(" %c", &set1[i]);

    printf("Enter number of elements in set2: ");
    scanf("%d", &num2);

    printf("Enter set2 elements: ");
    for(int i = 0; i < num2; i++)
        scanf(" %c", &set2[i]);

    bitvector(set1, bit_vec1, num1);
    bitvector(set2, bit_vec2, num2);

   
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Union\n");
        printf("2. Intersection\n");
        printf("3. Difference (Set1 - Set2)\n");
        printf("4. Complement of Set1\n");
        printf("5. Complement of Set2\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("\n");

        switch(choice)
        {
            case 1:
                printf("Union: ");
                setUnion(bit_vec1, bit_vec2);
                printResult();
                break;

            case 2:
                printf("Intersection: ");
                setIntersection(bit_vec1, bit_vec2);
                printResult();
                break;

            case 3:
                printf("Set1 - Set2: ");
                setDifference(bit_vec1, bit_vec2);  
                printResult();
                break;

            case 4:
                printf("Complement of Set1: ");
                setComplement(bit_vec1);
                printResult();
                break;

            case 5:
                printf("Complement of Set2: ");
                setComplement(bit_vec2);
                printResult();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 6);

    return 0;
}

