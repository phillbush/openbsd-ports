COMMENT =		${N} for ${CONFIG} cross-development

N =			gdb
V =			13.2
DISTNAME =		${N}-${V}

HOMEPAGE =		https://www.gnu.org/software/${N}/

WANTLIB =		${COMPILER_LIBCXX} c curses expat m z

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES =		${MASTER_SITE_GNU:=${N}/}
DIST_SUBDIR =		${N}

CONFIGURE_ARGS +=	--enable-thumb

TEST_DEPENDS =		devel/dejagnu

.include <bsd.port.mk>
