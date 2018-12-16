include_directories(
  node
  node/include
  common/include
  crypto_primitives/include
)

add_subdirectory(node)
add_subdirectory(common)
add_subdirectory(database)
add_subdirectory(crypto_primitives)
