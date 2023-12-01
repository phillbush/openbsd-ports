COMMENT =		TI MSP430 debugging interface library

V =			3_15_1_001
PKGNAME =		libmsp430-${V:C/_0*/./g}
DISTNAME =		MSPDebugStack_OS_Package_${V:C/0*//g}
CATEGORIES =		devel
SITES =			https://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSPDS/${V}/export/
EXTRACT_SUFX =		.zip

FIX_CRLF_FILES =	Makefile \
			ThirdParty/BSL430_DLL/Makefile \
			DLL430_v3/src/TI/DLL430/*.cpp \

HOMEPAGE =		http://www.ti.com/tool/MSPDS

# TI-TSPA
PERMIT_PACKAGE =	No

# ?
USE_NOEXECONLY =	Yes

WANTLIB =		${COMPILER_LIBCXX} \
			boost_chrono-mt boost_date_time-mt \
			boost_filesystem-mt boost_system-mt \
			boost_thread-mt hidapi-libusb \
			m pthread

LIB_DEPENDS =		devel/boost \
			comms/libhidapi

MAKE_FLAGS =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include -I${LOCALBASE}/include/hidapi" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib" \
			CXXFLAGS="${CXXFLAGS}" \
			CXX="${CXX}"

USE_GMAKE =		Yes

# avoid WRKDIST = ${WRKDIR}
EXTRACT_CASES = *.zip) ${UNZIP} -oq -d ${WRKDIST} ${FULLDISTDIR}/$$archive;;

NO_TEST =		Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/include/libmsp430
	${INSTALL_DATA} ${WRKSRC}/DLL430_v3/include/* ${PREFIX}/include/libmsp430/
	${INSTALL_DATA} ${WRKSRC}/libmsp430.so ${PREFIX}/lib/
	${INSTALL_DATA} ${WRKSRC}/libmsp430.a ${PREFIX}/lib/

.include <bsd.port.mk>
