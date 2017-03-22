# joiner

Simple class to easily join types in a string in C++

usage example:

```cpp
const auto cumprimento = "oi, ";
const auto nome = "Fulano";
const auto lembrete = "Você tem um compromisso às ";
const unsigned horario = 16;
const char exclamacao = '!';
const char fim_de_linha = '\n';

std::string joint = Luvitronics::joiner << cumprimento << nome << fim_de_linha << lembrete << horario << exclamacao << fim_de_linha;
std::cout << joint;```

Output:
```shell
/home/danilo/devel/joiner> /home/danilo/devel/joiner/joiner
oi, Fulano
Você tem um compromisso às 16!
```
