import sys
import datetime


def todate():
    print(datetime.datetime.today().strftime('%Y-%m-%d'))


if __name__ == "__main__":
    todate()