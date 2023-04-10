import random
import numpy as np

test_cases = int(input('Number of test cases: '))

with open(file='test-unit/catch-tests/test.cpp', mode='w', encoding='UTF-8') as file:
    file.write('#include "../../src/AdjacencyList.h"\n')
    file.write('#define CATCH_CONFIG_MAIN\n')
    file.write('#include "catch.hpp"\n\n\n')

    for _ in range(test_cases):

        vertices = random.randint(10, 50)
        power_iterations = random.randint(1, 30)

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

        file.write(f'TEST_CASE("Vertices: {vertices}, Power Iterations: {power_iterations}", "[custom]")\n')
        file.write('{\n')
        file.write('\tAdjacencyList graph;\n\n')

        for i in range(vertices):
            for j in range(vertices):
                if matrix[i][j] != 0.:
                    file.write(f'\tgraph.addEdge("{j}.com", "{i}.com");\n')

        file.write('\n\n')
        file.write(f'\tauto map = graph.getPageRank({power_iterations});\n')
        file.write('\n\n')

        # for i in range(vector.size):
        #     file.write(f'\tREQUIRE(map["{i}.com"] == {round(vector[i][0], 2)});\n')

        for i in range(vector.size):
            file.write(f'\tREQUIRE(map["{i}.com"] == Approx({vector[i][0]}));\n')

        file.write('}\n\n\n')
