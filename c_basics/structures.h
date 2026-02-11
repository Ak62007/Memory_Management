typedef struct employee_data
{
    char* name;
    int roll_no;

} data;

typedef struct coordinates
{
    int x;
    int y;
    int z;
}coord;


void update_name(data adi, char *new_name);

data update_name_return(data adi, char *new_name);