cmake_minimum_required(VERSION 3.19)
project(ProjectAbsPathHeaders02)
add_custom_target(
  BuildDocs ALL
  DEPENDS List_of_abs_path_headers.txt
  DEPENDS CuentaCar.i
  DEPENDS a.map
)

add_custom_command ( OUTPUT List_of_abs_path_headers.txt
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/script_para_obtener_lista_de_headers.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)

add_custom_command ( OUTPUT CuentaCar.i
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/preprocesar_CuentaCar_dot_C.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)

add_custom_command ( OUTPUT a.map
COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/generar_a_dot_map.sh
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/)
