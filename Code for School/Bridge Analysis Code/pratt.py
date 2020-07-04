pratt.py
#
# pratt.py
#
# This is a simulation of the pratt bridge design
# that I am using for my statics final project
#
# Cole Yeager
# 2017 December 4

import sapy
from sapy import displmethod
from sapy import element
from sapy import gmsh
from sapy import structure
from sapy import plotter

mesh_file = 'pratt' # it automatically assumes a .geo extension

# these are the constraints
# this says that node 0 is fixed/restrained in both x and y
# directions (a pin connection) and node 2 is constrained in
# only the y direction (a roller)
bound = {0: [1, 1],
         6: [0, 1]}

# this is the loading on the truss.
# a force of 10 in the x and -20 in the y is applied to node 3
nodal_load = {9: [0, -10.0]}

# parse the mesh file to create mesh.xyz (list of Points) and
# mesh.con (list of connections (beams) between Points)
mesh = gmsh.Parse(mesh_file)

# this is to create the composition of the beams in the truss
ele = element.Data()
for i in range(len(mesh.con)):
    ele.E[i] = 100. # sectional area?
    ele.A[i] = 10.  # Young's modulus?
    ele.TYPE[i] = 'Truss' # Truss or Frame

model = structure.Builder(mesh, ele, bound)

U, Q = displmethod.solver(mesh, model, ele, nodal_load)

plotter.undeformed(model)
plotter.deformed(model, U)
plotter.axialforce(model, Q)

plotter.show()
