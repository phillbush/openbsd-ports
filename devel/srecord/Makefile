BROKEN-arm =		SIGBUS in ps2pdf

COMMENT=		collection of tools for manipulating EPROM load files

N =			srecord
V =			1.65.0
DISTNAME =		${N}-${V}-Source
PKGNAME =		${N}-${V}

#SHARED_LIBS +=		srecord              0.0      # 0.0

CATEGORIES =		devel

HOMEPAGE =		https://srecord.sourceforge.net/

# GPLv3
PERMIT_PACKAGE =	Yes

WANTLIB +=		${COMPILER_LIBCXX}
WANTLIB +=		c gcrypt gpg-error iconv intl m

SITES =			${SITE_SOURCEFORGE:=${N}/}

MODULES =		devel/cmake

LIB_DEPENDS =		security/libgcrypt

#USE_GROFF =		Yes

.include <bsd.port.mk>
