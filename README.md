## Инструкция: 
1. Скачайте AS ассемлер http://john.ccac.rwth-aachen.de:8000/as/download.html 
2. В файле jimcompile.bat в первой строке пропишите путь bin директории ассемблера 
3. Распакуйте binaries.7z в каталог binaries/
4. Запустить jimcompile.bat

Если исходник jim.s или файлы отредактировать так, что получится нечетный размер скомпилированного рома, то игра не будет работать, это можно исправить добавлением одного байта в начало исходника или файла.

Сжатые данные: в каталоге binaries/ есть файлы с префиксом 'rnc_', это сжатые данные, чтобы их распаковать есть программа в каталоге rnc_archiver. Просто отредактируйте файлы unpack.bat (для распаковки) и pack.bat (для упаковки).