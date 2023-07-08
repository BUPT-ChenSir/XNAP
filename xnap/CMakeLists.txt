file(GLOB HDR_FILES *.h)
file(GLOB SRC_FILES *.c)

add_library(asn-xnap ${HDR_FILES} ${SRC_FILES})
target_link_libraries(asn-xnap asn-asn1c)
