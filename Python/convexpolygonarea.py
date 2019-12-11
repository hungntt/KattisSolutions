def polygon_area(vertices):
    psum = 0
    nsum = 0

    for index in range(len(vertices)):
        nextIndex = (index + 1) % len(vertices)
        prod = vertices[index][0] * vertices[nextIndex][1]
        psum += prod

    for index in range(len(vertices)):
        nextIndex = (index + 1) % len(vertices)
        prod = vertices[nextIndex][0] * vertices[index][1]
        nsum += prod

    return abs(1 / 2 * (psum - nsum))


# Shoelace formula: https://en.wikipedia.org/wiki/Shoelace_formula

def main():
    for _ in range(int(input())):
        verticesList = []
        line = input().split()
        points = int(line[0])
        i = 1
        for _ in range(points):
            verticesList.append([int(line[i]), int(line[i + 1])])
            i += 2
        print(polygon_area(verticesList))


main()
