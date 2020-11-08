# music_core
# English ver please see /belp/compile.txt and /help/music_coding.txt
# Compile
The code has some C++11 code and includes windows.h.
Therefore, you must compile in C++11 in Windows.
For example: g ++.exe "music.cpp" -o "music.exe" -std = c++11
# MUS file
turn on:
This is a format I made myself, and you cannot open it by double-clicking it.
If you want to open a MUS file, you must use the file path to open "music.exe".
coding:
This is indeed a friendly and simple format.
This is how to convert the numbers in the file:
-1 song ending
0 stop
Other instructions: 1-do 2-re 3-mi 4-fa 5-so 6-la 7-si
Add 0.5 to half the note
Add ten makes the note an octave higher
For example: 11: do is in the second octave
# other
This software comes with 3 MUS files located in /music/
There are 3 songs, namely Bad Apple, Black Carrying Coffin and Super Slovakia
Their corresponding file names are bad_apple.mus, coffin_dance.mus and megalovania.mus
(Chinese translation comes from Google Translate)
