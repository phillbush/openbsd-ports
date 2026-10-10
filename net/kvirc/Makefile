COMMENT =		free portable IRC client based on the Qt GUI toolkit

SHARED_LIBS =		kvilib 5.2
DIST_TUPLE =		github kvirc KVIrc 5.2.10 .
CATEGORIES =		net x11
HOMEPAGE =		https://www.kvirc.net/

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB +=		GL ICE SM X11 Xext Xrender c crypto m perl ssl z \
			Qt6Concurrent Qt6Core Qt6Core5Compat Qt6DBus \
			Qt6Gui Qt6Multimedia Qt6Network Qt6PrintSupport \
			Qt6Sql Qt6Svg Qt6Widgets Qt6Xml \
			${COMPILER_LIBCXX}

MODULES =		devel/cmake x11/qt6

BUILD_DEPENDS =		devel/gettext,-tools
LIB_DEPENDS =		x11/qt6/qtbase \
			x11/qt6/qt5compat \
			x11/qt6/qtmultimedia \
			x11/qt6/qtsvg

CONFIGURE_ARGS +=	-DMANDIR=man \
			-DWANT_DOXYGEN=0 \
			-DWANT_AUDIOFILE=0 \
			-DWANT_PHONON=0 \
			-DWANT_GSM=0

FLAVORS +=		dcc_video kde python qtwebengine spellchecker
FLAVOR ?=

.if ${FLAVOR:Mdcc_video}
WANTLIB +=		ogg vorbis vorbisenc theoradec theoraenc \
			Qt6MultimediaWidgets
LIB_DEPENDS +=		x11/qt6/qtmultimedia multimedia/libtheora
CONFIGURE_ARGS +=	-DWANT_DCC_VIDEO=1 -DWANT_OGG_THEORA=1
.endif

.if ${FLAVOR:Mkde}
MODULES +=		x11/kde
LIB_DEPENDS +=		devel/kf6/kcolorscheme \
			devel/kf6/kcompletion \
			devel/kf6/kconfig \
			devel/kf6/kconfigwidgets \
			devel/kf6/kcoreaddons \
			devel/kf6/kguiaddons \
			devel/kf6/kio \
			devel/kf6/kjobwidgets \
			devel/kf6/knotifications \
			devel/kf6/kparts \
			devel/kf6/kservice \
			devel/kf6/kstatusnotifieritem \
			devel/kf6/kwidgetsaddons \
			devel/kf6/kwindowsystem \
			devel/kf6/kxmlgui
WANTLIB +=		KF6ColorScheme KF6Completion KF6ConfigCore \
			KF6ConfigGui KF6ConfigWidgets KF6CoreAddons \
			KF6GuiAddons KF6I18n KF6JobWidgets KF6KIOCore \
			KF6KIOGui KF6KIOWidgets KF6Notifications \
			KF6Parts KF6Service KF6StatusNotifierItem \
			KF6WidgetsAddons KF6WindowSystem KF6XmlGui
.else
CONFIGURE_ARGS +=	-DWANT_KDE=0
.endif

.if ${FLAVOR:Mpython}
MODULES +=		lang/python
WANTLIB +=		python3.13
.else
CONFIGURE_ARGS +=	-DWANT_PYTHON=0
.endif

.if ${FLAVOR:Mspellchecker}
LIB_DEPENDS +=		textproc/enchant2
WANTLIB +=		enchant-2
.else
CONFIGURE_ARGS +=	-DWANT_SPELLCHECKER=0
.endif

.if ${FLAVOR:Mqtwebengine}
LIB_DEPENDS +=		x11/qt6/qtwebengine
WANTLIB +=		Qt6OpenGL Qt6Positioning Qt6Qml Qt6Quick \
			Qt6WebChannel Qt6WebEngineCore Qt6WebEngineWidgets
.else
CONFIGURE_ARGS +=	-DWANT_QTWEBENGINE=0
.endif

NO_TEST =		Yes

.include <bsd.port.mk>
