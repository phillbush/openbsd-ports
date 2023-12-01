COMMENT =		${N} for ${CONFIG} cross-development

N =			gcc
V =			13.2.0
DISTNAME =		${N}-${V}

USE_NOEXECONLY =	Yes

WANTLIB =		${COMPILER_LIBCXX} c gmp m mpc mpfr z
DIST_SUBDIR =		${N}

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES =		${MASTER_SITE_GCC:=releases/${N}-${V}/}

BUILD_DEPENDS +=	devel/autoconf/2.71		\
			devel/bison			\
			devel/metaauto			\
			${RUN_DEPENDS}
RUN_DEPENDS =		devel/${CONFIG}/binutils
LIB_DEPENDS =		devel/mpfr devel/libmpc

CONFIGURE_ARGS +=	--enable-languages=c		\
			--enable-shared			\
			--enable-cpp			\
			--with-mpc=${LOCALBASE}		\
			--with-mpfr=${LOCALBASE}	\
			--with-gmp=${LOCALBASE}		\
			--with-newlib			\
			--disable-libcc1		\
			--disable-libgomp		\
			--disable-libssp		\
			--disable-libquadmath		\
			--disable-libquadmath-support	\
			--disable-lto			\
			--disable-nls			\
			--disable-threads		\
			--without-isl
CONFIGURE_ENV +=	CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

# Avoid build failure when lang/gcc/8 is installed whose ansidecl.h misses these
CPPFLAGS +=		-DATTRIBUTE_NONSTRING= -DATTRIBUTE_RESULT_SIZE_1=
CPPFLAGS +=		-DATTRIBUTE_RESULT_SIZE_2= -DATTRIBUTE_RESULT_SIZE_1_2=
CPPFLAGS +=		-DATTRIBUTE_WARN_UNUSED_RESULT=

SEPARATE_BUILD =	Yes

post-install:
	chown -R ${SHAREOWN}:${SHAREGRP} \
		${PREFIX}/lib/${N}/${CONFIG}/${V}/

.include <bsd.port.mk>
