COMMENT =		${N} for ${CONFIG} cross-development

N =			newlib
V =			4.3.0.20230120
DISTNAME =		${N}-${V}
EXTRACT_SUFX =		.tar.gz
MASTER_SITES =		ftp://sourceware.org/pub/${N}/

HOMEPAGE =		http://sourceware.org/${N}/

BUILD_DEPENDS =		devel/${CONFIG}/binutils \
			${RUN_DEPENDS}
RUN_DEPENDS =		devel/${CONFIG}/gcc

MAKE_ENV +=		${CONFIGURE_ENV}
MAKE_FLAGS =		CFLAGS="-I${LOCALBASE}/include"

.include <bsd.port.mk>
