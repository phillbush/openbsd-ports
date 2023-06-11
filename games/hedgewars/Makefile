COMMENT =		Worms-like strategy game

V =			1.0.2
DISTNAME =		hedgewars-src-$V
PKGNAME =		hedgewars-$V
CATEGORIES =		games x11

SHARED_LIBS =		physlayer 0.0 \
			avwrapper 0.0

HOMEPAGE =		https://hedgewars.org/

# GPLv2
PERMIT_PACKAGE =	Yes

WANTLIB  =		${COMPILER_LIBCXX} ${MODLUA_WANTLIB} \
			Qt5Core Qt5Gui Qt5Network Qt5Widgets \
			SDL2 SDL2_image SDL2_mixer SDL2_net SDL2_ttf \
			c m z physfs png GL GLU

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES =		https://hedgewars.org/download/releases/
EXTRACT_SUFX =		.tar.bz2

MODULES =		devel/cmake \
			lang/lua \
			x11/qt5

BUILD_DEPENDS +=	lang/fpc>=3.0.0p2 \

LIB_DEPENDS =		devel/sdl2-image \
			devel/sdl2-ttf \
			devel/sdl2-net \
			devel/sdl2-mixer \
			devel/physfs \
			graphics/png \
			${MODQT5_LIB_DEPENDS} \
			${MODLUA_LIB_DEPENDS}

CONFIGURE_ARGS +=	-DNOVIDEOREC=ON \
			-DNOSERVER=ON

CONFIGURE_ENV += \
	CFLAGS="${CFLAGS} -I${X11BASE}/include -I${LOCALBASE}/include" \
	CXXFLAGS="${CXXFLAGS} -I${X11BASE}/include -I${LOCALBASE}/include"

MODCMAKE_LDFLAGS =	-L${X11BASE}/lib -L${LOCALBASE}/lib

MODGHC_BUILD =		nort

NO_TEST =		Yes

pre-configure:
	sed -i -e "/liblua/  s,liblua,&${MODLUA_VERSION}," ${WRKSRC}/hedgewars/LuaPas.pas
	sed -i -e "/linklib/ s,lua,&${MODLUA_VERSION}," ${WRKSRC}/hedgewars/LuaPas.pas

.include <bsd.port.mk>
