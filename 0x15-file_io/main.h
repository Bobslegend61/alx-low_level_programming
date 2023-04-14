#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stdarg.h>

/* PROTOTYPE DECLARATIONS */
int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void hndl_err(int code, int which, char *fmt, ...);

#endif /* _MAIN_H_ */
