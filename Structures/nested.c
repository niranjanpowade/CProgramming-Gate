struct Address
{
    char street[50];
    char city[30];
    char state[20];
};

struct Person
{
    char name[50];
    int age;
    struct Address address;
};
