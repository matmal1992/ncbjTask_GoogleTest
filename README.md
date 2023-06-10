### ncbjTask_GoogleTest
Testy zostały uruchomione przy użyciu: <br />
- GCC 11.3.0 (Ubuntu) <br />
- CMake 3.22.1 <br />
### Procedura uruchomienia testów z wiersza poleceń:
#### Pierwszy build po klonowaniu:
.../ncbjTask$ mkdir build && cd build <br />
.../ncbjTask/build$ cmake .. <br />
.../ncbjTask/build$ cmake --build . <br />
.../ncbjTask/build/tests$ ./ncbjTask_test <br />
#### Po każdej zmianie w kodzie należy ponownie skompilować kod i uruchomić testy:
.../ncbjTask/build$ cmake --build . <br />
.../ncbjTask/build/tests$ ./ncbjTask_test <br />
