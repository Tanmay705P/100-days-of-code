//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *destination_file;
    char source_filename[100];
    char destination_filename[100];
    int character;

    printf("Enter the source filename: ");
    scanf("%s", source_filename);

    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error opening source file.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the destination filename: ");
    scanf("%s", destination_filename);

    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        printf("Error opening destination file.\n");
        fclose(source_file);
        exit(EXIT_FAILURE);
    }

    while ((character = fgetc(source_file)) != EOF) {
        fputc(character, destination_file);
    }

    printf("Content successfully copied from '%s' to '%s'.\n", source_filename, destination_filename);

    fclose(source_file);
    fclose(destination_file);

    return 0;
}