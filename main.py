import random
import numpy as np


def main() -> None:

    vertices = int(input('Number of webpages (input > 1): '))
    power_iterations = int(input('Number of power iterations (input > 0): '))

    matrix = np.zeros((vertices, vertices))


    for col in range(vertices):
        outdegree = random.randint(1, vertices - 1)
        for _ in range(outdegree):
            rank = 1 / outdegree
            while True:
                row = random.randint(0, vertices - 1)
                if (row == col) or (matrix[row][col] != 0.):
                    continue
                matrix[row][col] = rank
                break

    matrix = np.matrix(matrix)
    vector = np.matrix(np.full((vertices, 1), 1 / vertices))

    for _ in range(1, power_iterations):
        vector = matrix * vector

    matrix = np.array(matrix)
    vector = np.array(vector)


    with open(file='test.cpp', mode='w', encoding='UTF-8') as file:
        file.write('#include "PATH/TO/HEADER/FILE.h"\n')
        file.write('// Set the include to use the .h file of you adjacency list implementation\n')
        file.write('#define CATCH_CONFIG_MAIN\n')
        file.write('#include "catch.hpp"\n')
        file.write('// Make sure catch.hpp is in the same directory (or the include points to where it is)\n\n\n')
        file.write('TEST_CASE("SET NAME", "[SET TAG]")\n')
        file.write('{\n')
        file.write('\tAdjacencyList graph;\n\n')

        for i in range(vertices):
            for j in range(vertices):
                if matrix[i][j] != 0.:
                    file.write(f'\tgraph.addEdge("{j}.com", "{i}.com");\n')

        file.write('\n\n')
        file.write('\t// Get the final PageRank values from your adjacency list in the form on an ordered map\n')
        file.write('\t// std::map<std::string, double>\n')
        file.write('\n\n')

        for i in range(vector.size):
            file.write(f'\tREQUIRE(map["{i}.com"] == {round(vector[i][0], 2)});\n')

        file.write('}\n')


if __name__ == '__main__':
    main()
