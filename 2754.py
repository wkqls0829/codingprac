import sys


def calculategrad():
    sin = input()
    if sin == "F":
        print(0.0)
        return
    val = 69-ord(sin[0])
    if sin[1] != "0":
        val = eval(str(val) + sin[1] + "0.3")
    print(f'{val:.1f}')

if __name__ == "__main__":
    calculategrad()

