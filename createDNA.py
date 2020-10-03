str_1 = "AGAT"
str_2 = "AATG"
str_3 = "TATC"

str_list = {str_1, str_2, str_3}

test = "AGACGGGTTACCATGACTATCTATCTATCTATCTATCTATCTATCTATCACGTACGTACGTATCGAGATAGATAGATAGATAGATCCTCGACTTCGATCGCAATGAATGCCAATAGACAAAA"
print(len(test))

with open('DNAseq.txt', 'w') as writer:
    for i in range(50):
        writer.write("ACT")