#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BOLD "\033[1m"

#define MAX_TASKS 100

typedef struct {
    char task[256];
    int completed;
    char date_added[11];
    char due_date[11];
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

void get_current_date(char *buffer) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(buffer, "%02d-%02d-%04d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}

void print_banner() {
    printf(YELLOW"==========================================\n"RESET);
    printf(GREEN"        WELCOME TO TO-DO LIST MANAGER      \n"RESET);
    printf(YELLOW"==========================================\n"RESET);
}

void add_task() {
    if (task_count >= MAX_TASKS) {
        printf(RED"Task list is full!\n"RESET);
        return;
    }
    printf("Enter your task: ");
    getchar();
    fgets(tasks[task_count].task, 256, stdin);
    tasks[task_count].task[strcspn(tasks[task_count].task, "\n")] = 0;
    tasks[task_count].completed = 0;
    get_current_date(tasks[task_count].date_added);
    printf("Enter due date (DD-MM-YYYY): ");
    scanf("%s", tasks[task_count].due_date);
    task_count++;
    printf(GREEN"Task added successfully!\n"RESET);
}

void delete_task() {
    int index;
    printf("Enter task number to delete: ");
    scanf("%d", &index);
    if (index < 1 || index > task_count) {
        printf(RED"Invalid task number!\n"RESET);
        return;
    }
    for (int i = index - 1; i < task_count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    task_count--;
    printf(GREEN"Task deleted successfully!\n"RESET);
}

void mark_completed() {
    int index;
    printf("Enter task number to mark as completed: ");
    scanf("%d", &index);
    if (index < 1 || index > task_count) {
        printf(RED"Invalid task number!\n"RESET);
        return;
    }
    tasks[index - 1].completed = 1;
    printf(GREEN"Task marked as completed!\n"RESET);
}

void display_tasks() {
    if (task_count == 0) {
        printf(RED"No tasks available!\n"RESET);
        return;
    }
    char current_date[11];
    get_current_date(current_date);
    printf(YELLOW"Your Tasks:\n"RESET);
    for (int i = 0; i < task_count; i++) {
        char *status;
        if (tasks[i].completed) {
            status = GREEN"[Completed]"RESET;
        } else if (strcmp(tasks[i].due_date, current_date) < 0) {
            status = RED"[Due]"RESET;
        } else {
            status = RED"[Pending]"RESET;
        }
        printf("%d. %s | Added: %s | Due: %s %s\n", i + 1, tasks[i].task, tasks[i].date_added, tasks[i].due_date, status);
    }
}

void save_tasks() {
    FILE *file = fopen("tasks.txt", "w");
    if (!file) {
        printf(RED"Error saving tasks!\n"RESET);
        return;
    }
    for (int i = 0; i < task_count; i++) {
        fprintf(file, "%s|%d|%s|%s\n", tasks[i].task, tasks[i].completed, tasks[i].date_added, tasks[i].due_date);
    }
    fclose(file);
    printf(GREEN"Tasks saved successfully!\n"RESET);
}

void load_tasks() {
    FILE *file = fopen("tasks.txt", "r");
    if (!file) return;
    while (fscanf(file, " %255[^|]|%d|%10[^|]|%10[^|\n]\n", tasks[task_count].task, &tasks[task_count].completed, tasks[task_count].date_added, tasks[task_count].due_date) == 4) {
        task_count++;
    }
    fclose(file);
}

int main() {
    int choice;
    load_tasks();
    do {
        print_banner();
        printf(CYAN"1. Add Task\n2. Delete Task\n3. Mark Completed\n4. Display Tasks\n5. Save & Exit\n"RESET);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add_task(); break;
            case 2: delete_task(); break;
            case 3: mark_completed(); break;
            case 4: display_tasks(); break;
            case 5: save_tasks(); printf(GREEN"Goodbye!\n"RESET); break;
            default: printf(RED"Invalid choice!\n"RESET);
        }
    } while (choice != 5);
    return 0;
}
