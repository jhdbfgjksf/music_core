# music_core
# English ver please see /belp/compile.txt and /help/music_coding.txt
# 编译
该代码具有一些C ++ 11代码，并包含windows.h。
因此，您必须在Windows中的C ++ 11中进行编译。
例如：g ++.exe “music.cpp” -o “music.exe” -std = c++11
# MUS文件
打开：
这是我自己制作的格式，您无法通过双击将其打开。
如果要打开MUS文件，则必须使用文件路径打开“ music.exe”。
编码：
这确实是一种友好而简单的格式。
这是转换文件中数字的方法：
-1歌曲结尾
0停一下
其他说明：1-do 2-re 3-mi 4-fa 5-so 6-la 7-si
加0.5使音符加一半
加十使音符高八度
例如：11：do在第二个八度音阶
