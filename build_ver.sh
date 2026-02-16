fusesoc --cores-root=. run --target=sim --tool=verilator --setup --build lowrisc:sonata:system --verilator_options="-j 4" --make_options="-j 4"
