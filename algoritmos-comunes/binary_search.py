"""
Requisito: El arreglo debe estar ordenado ascendetemente para que la busqueda binaria funcione correctamente

# Complejidad: O(log(n))
# Longitud del array : n = 2^k => k = log2(n) => O(log(n)) 
# Se necesitara k iteraciones para encontrar el elemento en el peor de los casos, cuando la longitud del array de busqueda es igual a 1.
"""

def binarySearch(arr, left, right, x):
    if right < left or right < 0:
        return -1

    mid = (right + left) // 2
    if(arr[mid] == x):
        return mid
    
    if(arr[mid] < x):
        return binarySearch(arr, mid+1, right, x)
    else:
        return binarySearch(arr, left, mid-1, x)

if __name__ == "__main__":
    arr = [2, 3, 4, 10, 40]
    x = 40

    result = binarySearch(arr, 0, len(arr)-1, x)

    if result != -1:
        print(f"Element is present at index {result}")
    else:
        print("Element is not present in array")