### ncbjTask_GoogleTest
Testy zostały uruchomione przy użyciu: <br />
- GCC 11.3.0 (Ubuntu) <br />
- CMake 3.22.1 <br />
### Uruchamianie testów z wiersza poleceń:
#### Pierwszy build po klonowaniu:
.../ncbjTask_GoogleTest$ mkdir build && cd build <br />
.../ncbjTask_GoogleTest/build$ cmake .. <br />
.../ncbjTask_GoogleTest/build$ cmake --build . <br />
.../ncbjTask_GoogleTest/build/tests$ ./ncbjTask_test <br />
#### Po każdej zmianie w kodzie należy ponownie skompilować kod i uruchomić testy:
.../ncbjTask_GoogleTest/build$ cmake --build . <br />
.../ncbjTask_GoogleTest/build/tests$ ./ncbjTask_test <br />
