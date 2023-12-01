CONFIG ?=		msp430-none-elf
PKGNAME ?=		${CONFIG}-${DISTNAME}
CATEGORIES ?=		devel

MAINTAINER =		Lucas de Sena <lucas@seninha.org>

# binutils, gcc, gdb:	GPLv3
# newlib:		GPLv3/GPLv2/BSD
# headers:		BSD3/ISC
PERMIT_PACKAGE =	Yes

CONFIGURE_STYLE ?=	gnu
CONFIGURE_ENV +=	TARGET=${CONFIG}
CONFIGURE_ARGS +=	--target=${CONFIG}	\
			--disable-shared	\
			--disable-nls		\
			--disable-werror	\
			--enable-interwork	\
			--enable-multilib	\
			--with-newlib		\
			--with-system-zlib	\
			--without-guile		\
			--without-x		\
			--without-zstd

USE_GMAKE ?=		Yes
YACC =			bison

SUBST_VARS +=		CONFIG

EXTRACT_SUFX ?=		.tar.xz
