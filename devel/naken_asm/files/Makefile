CPUS = \
	1802 \
	4004 \
	6502 \
	65816 \
	6800 \
	68000 \
	6809 \
	68HC08 \
	8008 \
	8048 \
	8051 \
	86000 \
	ARC \
	ARM \
	ARM64 \
	AVR8 \
	CELL \
	COPPER \
	CP1610 \
	DOTNET \
	DSPIC \
	EMOTION_ENGINE \
	EPIPHANY \
	JAVA \
	LC3 \
	M8C \
	MIPS \
	MSP430 \
	PADAUK \
	PDP8 \
	PIC14 \
	POWERPC \
	PROPELLER \
	PROPELLER2 \
	RISCV \
	SH4 \
	SPARC \
	STM8 \
	SUPER_FX \
	SWEET16 \
	THUMB \
	TMS1000 \
	TMS340 \
	TMS9900 \
	UNSP \
	WEBASM \
	XTENSA \
	Z80

CFLAGS += \
	-I. \
	${CPUS:S,^,-DENABLE_&,} \
	-DINCLUDE_PATH=\"${LOCALBASE}/share/naken_asm\"

SRCS_common != \
	ls {prog,fileio,common,asm,table,disasm,simulate}/*.c \
	| fgrep -v -e "common/naken_" -e "template.c"

OBJS_common = ${SRCS_common:.c=.o}

PROGS = naken_asm naken_util

all: ${PROGS}

naken_asm.a: ${OBJS_common}
	${AR} ${ARFLAGS} naken_asm.a ${OBJS_common}

naken_asm: common/naken_asm.o naken_asm.a
	${CC} -o $@ common/naken_asm.o naken_asm.a ${LDLIBS}

naken_util: common/naken_util.o naken_asm.a
	${CC} -o $@ common/naken_util.o naken_asm.a ${LDLIBS}

.c.o:
	${CC} ${CFLAGS} ${CPPFLAGS} -c -o $@ -c $<

install:
	${BSD_INSTALL_PROGRAM} ${PROGS} ${PREFIX}/bin
	${BSD_INSTALL_DATA_DIR} ${PREFIX}/share/examples/naken_asm
	${BSD_INSTALL_DATA_DIR} ${PREFIX}/share/doc/naken_asm
	${BSD_INSTALL_DATA_DIR} ${PREFIX}/share/naken_asm
	cp -R samples/* ${PREFIX}/share/examples/naken_asm
	cp -R docs/* ${PREFIX}/share/doc/naken_asm
	cp -R include/* ${PREFIX}/share/naken_asm
