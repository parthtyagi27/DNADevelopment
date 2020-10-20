import numpy as np

str_1 = "ATTA"
str_2 = "AGTC"
str_3 = "AAGC"

str_list = [str_1, str_2, str_3]

A = np.arange(25)

test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA"
print(len(test))
print(str_1 * 50)
n = 0

def createDNA(str_list):
    length = int(np.random.choice(np.array([2.5, 3, 3.5, 4, 4.5]) * 10))
    result = ""
    counter = int(np.random.choice(np.array([2, 3, 4, 5, 6])))
    for i in range(length):
        n = int(np.random.choice(A))
        if i == length/counter:
            result += str_list[0] * n
            continue

        if i == length/(counter * 2):
            result += str_list[1] * n
            continue

        if i == length/(counter * 3):
            result += str_list[2] * n
            continue

        p = np.random.choice(["A", "T", "C", "G"])
        result += p
    return result

with open('DNAseq.txt', 'w') as writer:
    for i in range(50):
        writer.write(createDNA(str_list))
        writer.write("\n")