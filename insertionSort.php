<?php
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