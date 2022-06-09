cmake_minimum_required(VERSION 3.19)
project(Proyecto04_15Binomial_cmake_created)
add_custom_target(
  BuildDocs ALL
  DEPENDS List_of_abs_path_headers.txt
  DEPENDS DistribucionBinomial.i
  DEPENDS Proyecto04_15_cbp_cmake_created.map
)

add_custom_command ( OUTPUT List_of_abs_path_headers.txt
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/script_para_obtener_lista_de_headers.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)

add_custom_command ( OUTPUT DistribucionBinomial.i
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/preprocesar_DistribucionBinomial_dot_C.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)

add_custom_command ( OUTPUT Proyecto04_15_cbp_cmake_created.map
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/generar_a_dot_map.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)
