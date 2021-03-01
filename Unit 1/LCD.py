def zero(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * ' '} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


def one(size):
    printer = []
    printer.append(f" {size * ' '} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * ' '} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * ' '} ")
    return printer


def two(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '} ")
    printer.append(f" {size * '_'} ")
    return printer


def three(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


def four(size):
    printer = []
    printer.append(f" {size * ' '} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * ' '} ")
    return printer


def five(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '} ")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


def six(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '} ")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


def seven(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * ' '} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * ' '} ")
    return printer


def eight(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


def nine(size):
    printer = []
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f"|{size * ' '}|")
    printer.append(f" {size * '_'} ")
    for i in range(size):
        printer.append(f" {size * ' '}|")
    printer.append(f" {size * '_'} ")
    return printer


allfuncs = [zero, one, two, three, four, five, six, seven, eight, nine]

no = "12345"
size = 2
collection = ["" for i in range(size * 2 + 3)]
# print(collection)


for char in no:
    returned = allfuncs[int(char)](size)
    for i in range(len(returned)):
        collection[i] += returned[i]

for item in collection:
    print(f"{item}  ")

no = "6789"
size = 3
collection = ["" for i in range(size * 2 + 3)]
# print(collection)


for char in no:
    returned = allfuncs[int(char)](size)
    for i in range(len(returned)):
        collection[i] += returned[i]

for item in collection:
    print(f"{item} ")