add_executable(hw139
        hw139.c
        )

# pull in common dependencies
target_link_libraries(hw139 pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(hw139)

# add url via pico_set_program_url
example_auto_set_url(hw139)
