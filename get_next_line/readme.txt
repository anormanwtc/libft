
GNL checked and worked with 2 small open files at once, 1 buff, 9999 buff
open files contained a few \n an varying lengths including 1 and 0

buff 10000000 errored obviously from malloc failure.
buff 0 errored as intended.
invalid fd -> error as intended

read returns 1, end of file returns 0 as intended.
all known errors return -1 as intended.
