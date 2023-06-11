COMMENT =	fork of prboom+ with a focus on speedrunning

GH_ACCOUNT =	kraflab
GH_PROJECT =	dsda-doom
GH_TAGNAME =	v0.26.2

CATEGORIES =	games x11

HOMEPAGE =	https://github.com/kraflab/dsda-doom

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB =	SDL2 c m pthread GL GLU SDL2_mixer SDL2_image

COMPILER =		base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	devel/sdl2-mixer \
		devel/sdl2-image

CONFIGURE_ARGS =	-DCMAKE_BUILD_TYPE=Release \
			-DWITH_FLUIDSYNTH=OFF
CONFIGURE_ENV =	CFLAGS="-I${X11BASE}/include -I${LOCALBASE}/include"

DEBUG_CONFIGURE_ARGS =	-DCMAKE_BUILD_TYPE=Debug
DEBUG_PACKAGES = ${BUILD_PACKAGES}

NO_TEST =	Yes

MODCMAKE_LDFLAGS =	-L${X11BASE}/lib -L${LOCALBASE}/lib
WRKSRC =	${WRKDIST}/prboom2

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/dsda-doom
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/dsda-doom/docs
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/dsda-doom/docs/guides
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/dsda-doom/patch_notes
	${INSTALL_DATA} ${WRKDIST}/README.md ${PREFIX}/share/doc/dsda-doom
	${INSTALL_DATA} ${WRKDIST}/docs/*.md ${PREFIX}/share/doc/dsda-doom/docs
	${INSTALL_DATA} ${WRKDIST}/docs/guides/*.md \
		${PREFIX}/share/doc/dsda-doom/docs/guides
	${INSTALL_DATA} ${WRKDIST}/patch_notes/*.md \
		${PREFIX}/share/doc/dsda-doom/patch_notes

.include <bsd.port.mk>
