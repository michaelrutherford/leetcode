"""
A program that implements the selection sort algorithm
By: Michael Rutherford
"""

def main():
    values = [6, 7, 9, 3, 4, 2, 5, 2, 1, 8]

    print(values)

    for i in range(len(values)):
        min_index = i
        for x in range(i + 1, len(values)):
            if (values[x] < values[min_index]):
                min_index = x
        values[i], values[min_index] = values[min_index], values[i]
    
    print(values)

if __name__ == "__main__":
    main()
