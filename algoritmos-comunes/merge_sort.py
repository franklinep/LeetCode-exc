"""
Resource: Introduction to Algorithm , MIT Press

Merge Sort: Realizar divisiones sucesivas hasta los casos base (left>=right or lef+1 == mid). Luego ordenar cada division, finalmente unir las divisiones ordenadas con la funcion merge() hasta que no quede mas divisiones por ordenar.
"""
# * Divide and Conquer Approach 
def merge(arr, left, mid, right):
    if left > mid or mid > right: # Uno de las dos sublistas estan vacias
        return
    # Los indices
    i = left 
    j = mid + 1
    temp = [] # Lista temporal

    while(i <= mid and j <= right):
        if arr[i] < arr[j]:
            temp.append(arr[i])
            i+=1
        else:
            temp.append(arr[j])
            j+=1
    
    # Agregar los elementos restantes
    if i <= mid:
        temp.extend(arr[i:mid+1])
    if j <= right:
        temp.extend(arr[j:right+1])
    # Finalmente, copiar los elementos ordenados a arr
    for i in range(left, right+1):
        arr[i] = temp[i-left]
    

def merge_sort(arr, left, right):
    # Casos base 
    if left >= right: # size = 1 (left == right) or 0 (left>right)
        return 
    if left+1 == right: # size = 2
        if arr[left] > arr[right]:
            # swap
            arr[left], arr[right] = arr[right], arr[left]
        return    
    
    # Dividir
    mid = (left + right) // 2
    merge_sort(arr, left, mid) # subarray izquierdo
    merge_sort(arr, mid+1, right) # subarray derecho
    merge(arr, left, mid, right)

if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6, 7]
    merge_sort(arr, 0, len(arr)-1)
    print(arr)
    # Output: [5, 6, 7, 11, 12, 13]