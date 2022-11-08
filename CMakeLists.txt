

project(TriangulacionDeDelaunay)
	
add_subdirectory(matplotplusplus)
add_executable(prueba matplotPrueba.cc)
target_link_libraries(prueba PUBLIC matplot)
