def ifpalindrome():
    word = input()
    wordlen = len(word)
    half = len(word)//2
    for i in range(half):
        if word[i] != word[wordlen - i - 1]:
            print(0)
            return
    print(1)

if __name__ == "__main__":
    ifpalindrome()
