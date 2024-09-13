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