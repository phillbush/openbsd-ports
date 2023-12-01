COMMENT =		${N} for ${CONFIG} cross-development

N =			binutils
V =			2.41
DISTNAME =		${N}-${V}

HOMEPAGE =		https://www.gnu.org/software/${N}/

WANTLIB =		c z

MASTER_SITES =		${MASTER_SITE_GNU:=${N}/}
DIST_SUBDIR =		${N}

USE_LIBTOOL =		No

CONFIGURE_ARGS +=	--enable-commonbfdlib=no

.include <bsd.port.mk>
