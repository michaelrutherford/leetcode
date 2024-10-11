"""
A program that calculates the first 10 numbers in the Fibonacci Sequence
By: Michael Rutherford
"""

def main():
    a = 0
    b = 1
    c = 0

    print(a)
    print(b)

    for _ in range(10):
        c = b + a
        print(c)
        a = b
        b = c

if __name__ == "__main__":
    main()
