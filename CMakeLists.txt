project(MyProject)
aux_source_directory(realise SRC_SUB)
aux_source_directory(. SRC_CUR)
aux_source_directory(src SRC_CURT)
add_executable(main ${SRC_SUB} ${SRC_CUR} ${SRC_CURT})
include_directories(head)

add_definitions("-Wall -g")


