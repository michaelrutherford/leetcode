"""
A program that implements the bubble sort algorithm
By: Michael Rutherford
"""

def main():
    values = [6, 7, 9, 3, 4, 2, 5, 2, 1, 8]

    print(values)

    for i in range(len(values) - 1):
        for x in range(len(values) - i - 1):
            if (values[x] > values[x + 1]):
                values[x], values[x + 1] = values[x + 1], values[x]
    
    print(values)

if __name__ == "__main__":
    main()
