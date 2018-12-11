target_sources(text-adventure
PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/Chapter.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Story.cpp
PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Chapter.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Story.hpp
)