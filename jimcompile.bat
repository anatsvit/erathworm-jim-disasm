set aspath=D:\DCDownloads\SEGA_REVERSE\ASSEMBLER\bin
%aspath%\asw -L -w -maxerrors 10 jim.s
%aspath%\p2bin jim.p
echo "Original ROM size: 3145728 bytes"
DEL jim.p
DEL jim.lst
fixheadr.exe jim.bin
pause