#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 100   // allow a bit more while parsing; we'll store up to 50 per spec

typedef struct {
    char name[51];  // store up to 50 chars + '\0'
    int roll;
    float m1, m2, m3;
    float total;
    float avg;
} Student;

int cmp_desc_avg(const void *a, const void *b) {
    const Student *sa = (const Student *)a;
    const Student *sb = (const Student *)b;
    if (sa->avg < sb->avg) return 1;
    if (sa->avg > sb->avg) return -1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 1 || n > MAX_STUDENTS) return 0;

    // consume trailing newline after number
    int c = getchar();
    while (c != '\n' && c != EOF) c = getchar();

    Student students[MAX_STUDENTS];

    char line[512];
    for (int i = 0; i < n; ++i) {
        // read a non-empty line
        if (!fgets(line, sizeof(line), stdin)) return 0;
        // handle possible blank lines
        while (strlen(line) == 0 || (strlen(line) == 1 && line[0] == '\n')) {
            if (!fgets(line, sizeof(line), stdin)) return 0;
        }

        // remove trailing newline
        size_t L = strlen(line);
        if (L > 0 && line[L-1] == '\n') line[L-1] = '\0';

        // tokenize by whitespace
        char *tokens[128];
        int tcount = 0;
        char *p = strtok(line, " \t");
        while (p != NULL && tcount < 128) {
            tokens[tcount++] = p;
            p = strtok(NULL, " \t");
        }

        // we must have at least 4 tokens: name (maybe multiple), roll, m1, m2, m3
        if (tcount < 4) {
            fprintf(stderr, "Invalid input line for student %d\n", i+1);
            return 0;
        }

        // last three tokens -> marks
        float m1 = atof(tokens[tcount-3]);
        float m2 = atof(tokens[tcount-2]);
        float m3 = atof(tokens[tcount-1]);

        // fourth from last -> roll
        int roll = atoi(tokens[tcount-4]);

        // remaining tokens [0 .. tcount-5] are name parts
        char namebuf[MAX_NAME_LEN] = "";
        if (tcount - 4 <= 0) {
            // no name part found
            strncpy(namebuf, "", sizeof(namebuf));
        } else {
            for (int j = 0; j < tcount - 4; ++j) {
                if (j > 0) strncat(namebuf, " ", sizeof(namebuf) - strlen(namebuf) - 1);
                strncat(namebuf, tokens[j], sizeof(namebuf) - strlen(namebuf) - 1);
            }
        }

        // copy into student struct (truncate name to 50 chars safely)
        strncpy(students[i].name, namebuf, 50);
        students[i].name[50] = '\0';
        students[i].roll = roll;
        students[i].m1 = m1;
        students[i].m2 = m2;
        students[i].m3 = m3;
        students[i].total = m1 + m2 + m3;
        students[i].avg = students[i].total / 3.0f;
    }

    // sort by avg descending
    qsort(students, n, sizeof(Student), cmp_desc_avg);

    // output
    printf("Student Information Sorted by Average Marks:\n");
    for (int i = 0; i < n; ++i) {
        printf("Name: %s, Roll Number: %d, Total Marks: %.2f, Average Marks: %.2f\n",
               students[i].name,
               students[i].roll,
               students[i].total,
               students[i].avg);
    }

    return 0;
}
