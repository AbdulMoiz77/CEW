#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
    char name[100],email[100],phoneNo[100];

}contact;

contact *allcontact; //array containing pointers to the contacts
int numofcontact = 0;

void addContact(array){
    contact *newContact;

    newContact = (contact*)malloc(sizeof(contact));
    if (newContact==NULL){
        printf("Memory not allocated. \n");
        return 0;
    }
    else{
        printf("Enter Name:\t");
        scanf("%s",newContact->name);
        printf("Enter Email:\t");
        scanf("%s",newContact->email);
        printf("Enter Phone No.:\t");
        scanf("%s",newContact->phoneNo);

        if (numofcontact == 0){
            allcontact = (contact*)malloc(sizeof(contact));
        }
        else{
            allcontact = (contact*)realloc(allcontact,(numofcontact+1)*sizeof(contact));
        }

        allcontact[numofcontact] = *newContact;
        numofcontact ++;
    }
}
void delContact(){
    int i;
    if (numofcontact==0){
        printf("The Address book is empty");
        return 0;
    }
    else{
        char name[100];
        int temp=-1;
        printf("Enter the name: \t");
        scanf("%s",name);
        for(i=0;i<numofcontact;i++){
            if(strcmp(allcontact[i].name,name)==0){
                temp = i;
            printf("The contact is deleted\n");
                break;
            }
        }
        if (temp==-1){
            printf("Contact not found\n");
            return 0;
        }
        else{
            for(i=temp;i<numofcontact;i++){
                allcontact[i]=allcontact[i+1];
            }
            numofcontact --;
            allcontact = (contact*)realloc(allcontact,numofcontact*sizeof(contact));
        }
    }
}
void dispContact(){
    int i;
    if(numofcontact==0){
        printf("Address Book is empty \n");
        return 0;
    }
    else{
        printf("==============\n");
        printf(" Address Book\n");
        printf("==============\n");
        for(i=0;i<numofcontact;i++){
            printf("%d. \n",i+1);
            printf("Name: %s\n",allcontact[i].name);
            printf("Email: %s\n",allcontact[i].email);
            printf("Phone Number: %s\n",allcontact[i].phoneNo);
        }
    }
}
int main()
{
    int choice,n;
    do{
        printf("Address Book\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. View Contact List\n");
        printf("4. Exit\n");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            addContact();
            break;
        case 2:
            delContact();
            break;
        case 3:
            dispContact();

                }
        }
        while(choice!=4);
    return 0;
}
