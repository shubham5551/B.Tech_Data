#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void update(struct Student *s) {
    s->marks += 5;
}

int main() {
    struct Student s = {101, 75};

    update(&s);

    printf("Updated Marks: %.2f\n", s.marks);

    return 0;
}
