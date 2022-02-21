#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 32
void add_student(void);
void remove_student(void);
void display_next_student(void);
void display_required_student(void);
struct student_type *seek(struct student_type *,char[],char);
void error_routine(void);

#ifdef CONFIG_CIRCULAR_LINKED_LIST
struct student_type {
 char name[NAME_LENGTH];
 struct student_type *pointer_to_next_record;
};
#endif

struct student_type *position_ptr = NULL;
struct student_type *temp_ptr;

int main()
{
 int choice;
 do
 {/*Display Menu and get choice*/
   printf("\nMENU\n");
   printf("Add student to list              1\n");
   printf("Remove student from list         2\n");
   printf("Display next student in list     3\n");
   printf("Display required student         4\n");
   printf("Exit                             0\n");

   scanf("%d",&choice);

   /*Carry out chosen task*/
   switch(choice){
     case 1: add_student();break;
     case 2: remove_student();break;
     case 3: display_next_student();break;
     case 4: display_required_student();break;
     case 0: break;
     default: printf("Error - please rekey\n");
   }
 } while (choice != 0);

 /*Finish*/
 return 0;
}/*end main()*/

void add_student(void)
{/*Request space*/
 if (!(temp_ptr = (struct student_type *)
    malloc(sizeof(struct student_type))))
   error_routine();
 /*Link new record space into list*/
 if (position_ptr == NULL)
 {/*Add first record to list*/
   position_ptr = temp_ptr;
   position_ptr->pointer_to_next_record =
             position_ptr;
 }else
 {/*Add record to others already in list*/
   temp_ptr->pointer_to_next_record =
         position_ptr->pointer_to_next_record;
   position_ptr->pointer_to_next_record = temp_ptr;
   position_ptr = temp_ptr;
 }

 /*Get student details*/
 printf("\nKey in student's name: ");
 scanf("%s",temp_ptr->name);
}

void remove_student(void)
{
 char student_name[NAME_LENGTH];

 /*Get naem of student to remove from class list*/
 printf("Name of student to remove ?\n");
 scanf("%s",student_name);

 /*Search list for name*/
 if (!(temp_ptr = seek(position_ptr,student_name,'P')))
 {
   printf("Student not in list\n");
   return;
 }

 position_ptr = temp_ptr;

 if (position_ptr ==
     position_ptr->pointer_to_next_record)
 {/*Remove only record from list*/
   free(position_ptr);
   position_ptr = NULL;
 }else
 {/*Remove record if others in list*/
   temp_ptr =
        position_ptr->pointer_to_next_record;
   position_ptr->pointer_to_next_record =
        temp_ptr->pointer_to_next_record;
   free(temp_ptr);
 }
}

void display_next_student(void)
{
 position_ptr =
          position_ptr->pointer_to_next_record;
 printf("\n%s",position_ptr->name);
}

void display_required_student(void)
{
 char student_name[NAME_LENGTH];
 /*Get name of student to display*/
 printf("Name of student to display ?\n");
 scanf("%s",student_name);

 /*Seaerch list for student*/
 if (!(temp_ptr = seek(position_ptr,student_name,'C')))
 {
   printf("Student not in list\n");
   return;
 }

 /*Display record*/
 printf("%s\n",temp_ptr->name);
}

struct student_type *seek(struct student_type
       *start_ptr,char name_required[],char ind)
{
 struct student_type *item_ptr,*previous_item_ptr;

 /*Set item_ptr to start of search*/
 item_ptr = start_ptr;

 /*Carry out search*/
 do
 {/*Move to next record*/
   previous_item_ptr = item_ptr;
   item_ptr = item_ptr->pointer_to_next_record;

   /*Check naem against required name*/
   if (!strcmp(name_required,item_ptr->name))
   {/*Item found - return ponter*/
     if (ind == 'C')
       return (item_ptr);
     else
       return (previous_item_ptr);
   }
 } while (item_ptr != start_ptr);
 /*Item not found*/
 return (NULL);
}

void error_routine(void)
{
 printf("Insufficient Memory\n");
}

