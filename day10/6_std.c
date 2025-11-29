#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

struct Student s[100];
int count = 0;

void insertStudent();
void displayStudents();
void deleteStudent();
void searchStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\nEnter your choice:\n");
        printf("1. Insert Student\n");
        printf("2. Display Students\n");
        printf("3. Delete Student (by Roll No)\n");
        printf("4. Search Student (by Roll No)\n");
        printf("5. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            searchStudent();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid Choice!!!\n");
        }
    }
}

void insertStudent()
{
    if (count >= 100)
    {
        printf("Record Full! Cannot insert more students.\n");
    }
    else
    {
        printf("Enter Student Name: ");
        scanf("%s", s[count].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[count].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[count].marks);

        printf("Student Added Successfully!\n");
        count++;
    }
}

void displayStudents()
{
    if (count == 0)
    {
        printf("No Records Found!\n");
    }
    else
    {
        printf("\n--- Student Details ---\n");
        for (int i = 0; i < count; i++)
        {
            printf("Name: %s | Roll No: %d | Marks: %.2f\n",
                   s[i].name, s[i].roll, s[i].marks);
        }
    }
}

void deleteStudent()
{
    if (count == 0)
    {
        printf("No Records to Delete!\n");
        return;
    }

    int r, found = -1;
    printf("Enter Roll No to Delete: ");
    scanf("%d", &r);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == r)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Roll Number Not Found!\n");
    }
    else
    {
        // Shift elements left
        for (int i = found; i < count - 1; i++)
        {
            s[i] = s[i + 1];
        }
        count--;
        printf("Record Deleted Successfully!\n");
    }
}

void searchStudent()
{
    if (count == 0)
    {
        printf("No Records Available!\n");
        return;
    }

    int r, found = -1;
    printf("Enter Roll No to Search: ");
    scanf("%d", &r);

    for (int i = 0; i < count; i++)
    {
        if (s[i].roll == r)
        {
            found = i;
            break;
        }
    }

    if (found == -1)
    {
        printf("Student Not Found!\n");
    }
    else
    {
        printf("\n--- Student Found ---\n");
        printf("Name: %s | Roll No: %d | Marks: %.2f\n",
               s[found].name, s[found].roll, s[found].marks);
    }
}