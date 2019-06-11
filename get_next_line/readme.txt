
GNL checked and worked with 2 small open files at once, 1 buff, 9999 buff
even buff 10mil worked for the small files
GNL checked and worked with war-and-peace.txt (and a small file)
buff 10mil worked for w&p too but significantly more slowly.
	(that would be due to frequent replacement of the stuff after the \n read.)
	I would change the struct to have an extra pointer to place instead of recopying the 2nd bit
	if that was a more significant problem
	for now its fine to just keep buffsize a bit above expected linelen like ~100 or so
open files contained a few \n and varying lengths including 1 and 0

buff 0 does nothing since
read(fd, str, 0) would read 0 and mistake end of file
buff -8 errored as intended.
invalid fd 8 errored as intended
(I noticed the 2 files open as fd 3 & 4)

read returns 1, end of file returns 0 as intended.
all known errors return -1 as intended.
