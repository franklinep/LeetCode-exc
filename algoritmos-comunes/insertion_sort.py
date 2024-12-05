
'''
Resource: Introduction to Algorithm , MIT Press
Insertion Sort: Ingresar los elementos que no han sido ordenados (Parte derecha) a los elementos que han sido ordenados (parte izquierda).

'''
# * Incremental Approach , Worst Case = O(n**2)
def insertionSort(arr):
    for i in range(1, len(arr)):
        new_elm = arr[i]

        j = i-1
        while(j>=0 and new_elm < arr[j]):
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = new_elm # Inserto el nuevo elemento

def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6]
    insertionSort(arr)
    printArray(arr)
