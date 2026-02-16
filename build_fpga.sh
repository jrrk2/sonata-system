fusesoc --cores-root=. run --target=synth --setup --build lowrisc:sonata:system --SRAMInitFile=/home/jonathan/sonata-software/third_party/sonata-system/sw/legacy/gdbserver/build/gdbserver.vmem
uf2conv -b 0x00000000 -f 0x6ce29e6b build/lowrisc_sonata_system_0/synth-vivado/lowrisc_sonata_system_0.bit -co sonata-vX.Y.bit.slot1.uf2
uf2conv -b 0x10000000 -f 0x6ce29e6b build/lowrisc_sonata_system_0/synth-vivado/lowrisc_sonata_system_0.bit -co sonata-vX.Y.bit.slot2.uf2
uf2conv -b 0x20000000 -f 0x6ce29e6b build/lowrisc_sonata_system_0/synth-vivado/lowrisc_sonata_system_0.bit -co sonata-vX.Y.bit.slot3.uf2
rsync sonata-vX.Y.bit.slot?.uf2 192.168.1.169:Downloads
