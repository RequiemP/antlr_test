# antlr_test

## Описание
Собирал под винду с ее монструозным MSVC, так что, возможно, где-то надо будет подпилить пути. Еще есть такая вероятность, что линкер не сможет зарезолвить либы таргета, на всякий случай либы можно прибить к бинарю явно через
```bash
target_link_libraries(antlr_test "${ANTLR_BINARY_DIR}/runtime/Release/<lib-name>")
```
Для того, чтобы сгенерить файлы для парсинга грамматики для cpp, необходимо ввести комманду
```bash
java -jar ./antlr-4.13.2-complete.jar -Dlanguage=Cpp SimpleSelectSQL.g4
```  
В папке Cpp находится рантайм antlr4 для cpp

В этом репе файлы уже сгенерены для простоты, также я залил джарник.  
Для примера я создал класс, который выводит содержимое select'a SelectSQLListener

Для ClickHouse есть уже готовая грамматика, на основе которой можно писать парсер: https://github.com/ClickHouse/ClickHouse/tree/master/utils/antlr  
Для того, чтобы сгенерить файлы для cpp:  
```bash
java -jar ./antlr-4.13.2-complete.jar -Dlanguage=Cpp -o generated *.g4
```

## Установка
Собирается все по дефолту
```bash
cmake -S . -B build -DCMAKE_INSTALL_PREFIX=/your/path
cmake --build build --config Release
cmake --install build
```

В данном симейк файле я собирал через сабдиректорию, можно собрать явно сам рантайм antlr4 в папке Cpp