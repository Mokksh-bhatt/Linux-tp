#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct {
    int id;
    char name[20];
    int salary;
} Employee;

int main() {
    Employee e1 = {1, "Alice", 50000};
    Employee e2 = {2, "Bob", 60000};
    Employee e3 = {3, "Charlie", 70000};

    int fd = open("db.dat", O_CREAT | O_RDWR | O_TRUNC, 0644);
    write(fd, &e1, sizeof(Employee));
    write(fd, &e2, sizeof(Employee));
    write(fd, &e3, sizeof(Employee));
    
    Employee new_bob = {2, "Bob", 65000};
    lseek(fd, sizeof(Employee) * 1, SEEK_SET); 
    write(fd, &new_bob, sizeof(Employee));

    Employee read_emp;
    lseek(fd, sizeof(Employee) * 2, SEEK_SET); 
    read(fd, &read_emp, sizeof(Employee));
    
    printf("Read ID: %d, Name: %s, Salary: %d\n", read_emp.id, read_emp.name, read_emp.salary);

    close(fd);
    return 0;
}
