def counting():
    V = int(input())
    judges = input()
    count = [0,0]
    for j in judges:
        if j == "A":
            count[0]+= 1
        else :
            count[1]+= 1
    if count[0] > count[1]:
        print("A")
    elif count[0] == count[1]:
        print("Tie")
    else:
        print("B")


if __name__ == "__main__":
    counting()