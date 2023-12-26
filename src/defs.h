#ifndef DWMBLOCKSDEFS
#define DWMBLOCKSDEFS
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <X11/Xlib.h>
#define LENGTH(X) (sizeof(X) / sizeof(X[0]))
#define CMDLENGTH 50

typedef struct {
        char        *icon;
        char        *command;
        unsigned int interval;
        unsigned int signal;
} Block;

void sighandler(int num);
void buttonhandler(int sig, siginfo_t *si, void *ucontext);
void replace(char *str, char old, char new);
void remove_all(char *str, char to_remove);
void getcmds(int time);
#ifndef __OpenBSD__
void getsigcmds(int signal);
void setupsignals();
void sighandler(int signum);
#endif
int  getstatus(char *str, char *last);
void setroot();
void statusloop();
void termhandler(int signum);

#include "config.h"

static Display *dpy;
static int      screen;
static Window   root;
static char     statusbar[LENGTH(blocks)][CMDLENGTH] = {0};
static char     statusstr[2][256];
static int      statusContinue = 1;
static void (*writestatus)()   = setroot;
#endif /* DWMBLOCKSDEFS */
