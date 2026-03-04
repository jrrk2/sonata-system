# Build the Sonata DTB generator and produce sonata.dtb
#
# libfdt source is compiled directly from the kernel tree since
# there is no pre-built libfdt.a.

LIBFDT_DIR = /home/jonathan/litex-sonata/buildroot/output/build/linux-6.9/scripts/dtc/libfdt

LIBFDT_SRCS = fdt.c fdt_ro.c fdt_wip.c fdt_sw.c fdt_rw.c \
              fdt_strerror.c fdt_empty_tree.c fdt_addresses.c fdt_overlay.c

LIBFDT_OBJS = $(LIBFDT_SRCS:.c=.o)

CFLAGS = -I$(LIBFDT_DIR) -Wall -O2

sonata.dtb: sonata_dtb_gen
	./sonata_dtb_gen $@

sonata_dtb_gen: sonata_dtb_gen.c sonata_hw.h $(LIBFDT_OBJS)
	$(CC) $(CFLAGS) -o $@ $< $(LIBFDT_OBJS)

%.o: $(LIBFDT_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f sonata_dtb_gen sonata.dtb $(LIBFDT_OBJS)

.PHONY: clean
