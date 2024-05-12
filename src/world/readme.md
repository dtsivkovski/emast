# World

The `World` and `Vertex` classes are interconnected. A World contains vertices to be plotted in a 3-dimensional space. 

## Vertex Methods and Constructors

A vertex can be made with x, y, z coordinates and a char label. After this, it can be inserted into a World object and used from there.

- `Vertex()`: Default constructor for the Vertex class, generates x,y,z values of (0,0,0) and a default label of 'X'.
- `Vertex(int x, int y, int z, char label)`: Overloaded constructor with custom values for x,y,z coordinates and the label.
- `~Vertex()`: Destructor for the Vertex class.

## World Methods and Constructors

- `World()`: Default constructor for the World class.
- `~World()`: Destructor for the World class.
- `void insertVertex(Vertex *v)`: Inserts a vertex into the World object.
- `bool removeVertex(int x, int y, int z)`: Removes a vertex from the World object based on its x, y, and z coordinates.
- `bool removeVertex(int index)`: Removes a vertex from the World object based on its index in the list.
- `void printXZ()`: Prints the vertices in the world visually on the X-Z axes in a 2D output.
- `void printXY()`: Not implemented yet.
- `void printYZ()`: Not implemented yet.
