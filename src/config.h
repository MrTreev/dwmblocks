#include "defs.h"
static const Block blocks[] = {
  /*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
    {"", "cat /tmp/recordingicon 2>/dev/null", 0,  9 },
    {"", "sb-music",                           0,  11},
    {"", "sb-pacpackages",                     0,  8 },
    {"", "sb-news",                            0,  6 },
    {"", "sb-torrent",                         20, 7 },
    {"", "sb-memory",                          10, 14},
    {"", "sb-volume",                          0,  10},
    {"", "sb-battery",                         5,  3 },
    {"", "sb-internet",                        5,  4 },
    {"", "sb-clock",                           60, 1 },
 /* Currently Unused */
  /*{"⌨", "sb-kbselect",                                    0,     30}, */
  /*{"", "sb-tasks",                                        10,    26}, */
  /*{"", "sb-price lbc \"LBRY Token\" 📚",                  9000,  22}, */
  /*{"", "sb-price bat \"Basic Attention Token\" 🦁",       9000,  20}, */
  /*{"", "sb-price link \"Chainlink\" 🔗",                  300,   25}, */
  /*{"", "sb-price xmr \"Monero\" 🔒",                      9000,  24}, */
  /*{"", "sb-price eth Ethereum 🍸",                        9000,  23}, */
  /*{"", "sb-price btc Bitcoin 💰",                         9000,  21}, */
  /*{"", "sb-cpu",                                          10,    18}, */
  /*{"", "sb-moonphase",                                    18000, 17}, */
  /*{"", "sb-forecast",                                     18000, 5}, */
  /*{"", "sb-doppler",                                      0,     13}, */
  /*{"", "sb-mailbox",                                      180,   12}, */
  /*{"", "sb-nettraf",                                      1,     16}, */
  /*{"", "sb-iplocate",                                     0,     27}, */
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = (char *) " ";
