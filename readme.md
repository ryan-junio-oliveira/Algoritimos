#### InsertionSort.

**Explicação:**

O Insertion Sort, ou Ordenação por Inserção, é um algoritmo de ordenação que constrói a lista ou array final inserindo um elemento de cada vez na posição correta.

Sua complexidade no melhor caso é O(n), quando a lista já está ordenada, e no pior caso é O(n²), quando a lista está completamente invertida.

Uma forma comum de explicar o Insertion Sort é usando a analogia de um jogo de cartas. Imagine que você está segurando um baralho de cartas na mão esquerda. Cada vez que você recebe uma nova carta, você a insere na posição correta em relação às cartas que já estão na sua mão, mantendo-as sempre organizadas.

Sempre que uma nova carta é adicionada, você a compara com as outras cartas da sua mão, da direita para a esquerda, até encontrar a posição adequada. Se a nova carta for menor do que as cartas à sua esquerda, você as desloca uma posição para a direita, abrindo espaço para a nova carta. Isso garante que, após a inserção, todas as cartas estejam organizadas.

Esse processo se repete para cada nova carta que você recebe, até que todas estejam na posição correta.

###### Exemplo:

- Você começa com uma carta na mão, então ela já está ordenada.
- Ao receber uma segunda carta, você verifica se ela é maior ou menor que a primeira e a insere na posição adequada.
- Quando você recebe uma terceira carta, ela será comparada com as duas que já estão ordenadas e será inserida na posição certa, e assim por diante.

Esse é o princípio do Insertion Sort: inserir cada elemento em sua posição correta, um de cada vez, até que todos estejam ordenados.

###### Implementação em c++

```cpp
#include <iostream>
using namespace std;

// Função para realizar a ordenação por inserção
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Elemento atual que será comparado
        int j = i - 1;

        // Move os elementos que são maiores que a "key" para a posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array original: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Array ordenado: ";
    printArray(arr, n);

    return 0;
}
```

###### Implementação em php

```php
function insertionSort($array)
{
    for ($i = 1; $i < count($array); $i++) {
        $key = $array[$i]; // elemento a ser comparado
        $j = $i - 1;

        // Move os elementos do array que são maiores que a chave (key)
        while ($j >= 0 && $array[$j] > $key) {
            $array[$j + 1] = $array[$j];
            $j = $j - 1;
        }

        // Insere a chave (key) na posição correta
        $array[$j + 1] = $key;
    }

    return $array;
}

$array = [12, 10, 15, 67, 23];

$result = insertionSort($array);


foreach ($result as $key => $value) {
    echo $value . PHP_EOL . "\n";
}
```

###### Implementação em python

```python
def insertion_sort(list):
    n = len(list)
    for i in range(1, n):
        key = list[i] #elemento a ser comparado
        j = i - 1
        while j >= 0 and list[j] > key:
            list[j + 1] = list[j]
            j = j -1
        #insere a chave key na posicao correta
        list[j+1] = key
        
    return list

result = insertion_sort([2, 4, 8, 23, 15, 80, 5])
for i in range(1, len(result)):
    print(result[i])
```

###### Implementação em javascript

```javascript
const insertionSort = (array) => {
    
    for(let i = 0; i < array.length; i ++){
        let key = array[i];
        let j = i - 1;

        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = key;
    }

    return array;
}

const result = insertionSort([2, 45, 3, 90, 15])

result.forEach(element => {
    console.log(element);
});
```