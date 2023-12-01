COMMENT =		C headers and binutils linker scripts for msp430

N =			msp430-gcc-support-files
V =			1.212
DIST_V =		9_3_1_2
DISTNAME =		${N}-${V}
PKGNAME =		${CONFIG}-headers-${V}

HOMEPAGE =		https://www.ti.com/tool/MSP430-GCC-OPENSOURCE

SITES = \
https://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPGCC/${DIST_V}/export/

EXTRACT_SUFX =		.zip

RUN_DEPENDS =		devel/${CONFIG}/gcc

USE_GMAKE =
CONFIGURE_STYLE =

NO_BUILD =		Yes
NO_TEST =		Yes

PKG_ARCH =		*
WRKDIST =		${WRKDIR}/${N}

LIBSDIR =		${PREFIX}/${CONFIG}/lib/430
INCSDIR =		${PREFIX}/${CONFIG}/include
DEVSDIR =		${PREFIX}/${CONFIG}/include/devices

do-install:
	${INSTALL_DATA_DIR} ${LIBSDIR}
	${INSTALL_DATA_DIR} ${INCSDIR}
	${INSTALL_DATA_DIR} ${DEVSDIR}
	${INSTALL_DATA} ${WRKSRC}/include/*.h ${INCSDIR}
	${INSTALL_DATA} ${WRKSRC}/include/*.ld ${LIBSDIR}
	${INSTALL_DATA} ${WRKSRC}/include/devices.csv ${DEVSDIR}

post-install:
	chown -R ${SHAREOWN}:${SHAREGRP} ${INCSDIR}
	chown -R ${SHAREOWN}:${SHAREGRP} ${LIBSDIR}
	chown -R ${SHAREOWN}:${SHAREGRP} ${DEVSDIR}

.include <bsd.port.mk>
