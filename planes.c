# include <stdio.h>
# include <string.h>

   struct Plane{
    char name[50];
    char plane_number[10];
    char age[50];
    char capacity[50];
    };

void printplane(struct Plane flyers[], int size){

    for (int i=0; i<size; i++)
    {
        printf("\n\nTHIS IS INFORMATION ON PLANE %s\n\n", &flyers[i].name);
        printf("PLANE NAME: %s\n", &flyers[i].name);
        printf("PLANE NUMBER: %s\n", &flyers[i].plane_number);
        printf("PLANE AGE: %s\n", &flyers[i].age);
        printf("PLANE CAPACITY: %s\n\n", &flyers[i].capacity);
    }
};


int main()
{
    struct Plane flyers[10];

    strcpy(flyers[0].name, "BOEING 747");
    strcpy(flyers[0].plane_number, "B747");
    strcpy(flyers[0].age, "INTRODUCED IN 1970s");
    strcpy(flyers[0].capacity, "660 PASSENGERS");

    
    strcpy(flyers[1].name, "AIRBUS A380");
    strcpy(flyers[1].plane_number, "A380");
    strcpy(flyers[1].age, "INTRODUCED IN 2007");
    strcpy(flyers[1].capacity, "853 PASSENGERS");
    

    strcpy(flyers[2].name, "BOEING 787 DREAMLINER");
    strcpy(flyers[2].plane_number, "B787");
    strcpy(flyers[2].age, "INTRODUCED IN 2011");
    strcpy(flyers[2].capacity, "335 PASSENGERS");


    strcpy(flyers[3].name, "AIRBUS A320");
    strcpy(flyers[3].plane_number, "A320");
    strcpy(flyers[3].age, "INTRODUCED IN 1968");
    strcpy(flyers[3].capacity, "240 PASSENGERS");


    strcpy(flyers[4].name, "BOEING 747");
    strcpy(flyers[4].plane_number, "B747");
    strcpy(flyers[4].age, "INTRODUCED IN 1970s");
    strcpy(flyers[4].capacity, "660 PASSENGERS");


    strcpy(flyers[5].name, "BOEING 737");
    strcpy(flyers[5].plane_number, "B737");
    strcpy(flyers[5].age, "INTRODUCED IN 1968");
    strcpy(flyers[5].capacity, "215 PASSENGERS");


    strcpy(flyers[6].name, "EMBRAER E190");
    strcpy(flyers[6].plane_number, "E190");
    strcpy(flyers[6].age, "INTRODUCED IN 2002");
    strcpy(flyers[6].capacity, "114 PASSENGERS");


    strcpy(flyers[7].name, "BOMBARDIER CRJ900");
    strcpy(flyers[7].plane_number, "CRJ900");
    strcpy(flyers[7].age, "INTRODUCED IN 2001");
    strcpy(flyers[7].capacity, "90 PASSENGERS");


    strcpy(flyers[8].name, "AIRBUS A350");
    strcpy(flyers[8].plane_number, "A350");
    strcpy(flyers[8].age, "INTRODUCED IN 2013");
    strcpy(flyers[8].capacity, "440 PASSENGERS");


    strcpy(flyers[9].name, "BOEING 777");
    strcpy(flyers[9].plane_number, "B777");
    strcpy(flyers[9].age, "INTRODUCED IN 1970s");
    strcpy(flyers[9].capacity, "396 PASSENGERS");

printplane(flyers, 10);


}
