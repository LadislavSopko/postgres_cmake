# from http://websvn.kde.org/trunk/KDE/kdeedu/cmake/modules/FindReadline.cmake
# http://websvn.kde.org/trunk/KDE/kdeedu/cmake/modules/COPYING-CMAKE-SCRIPTS
# --> BSD licensed
#
# GNU Readline library finder


if(READLINE_INCLUDE_DIR AND READLINE_LIBRARY)
	set(READLINE_FOUND TRUE)
	set(HAVE_LIBREADLINE TRUE)
else(READLINE_INCLUDE_DIR AND READLINE_LIBRARY)
	FIND_PATH(READLINE_INCLUDE_DIR readline/readline.h
		/usr/include/readline
	)

	FIND_LIBRARY(READLINE_LIBRARY NAMES readline PATHS
		/opt/csw/lib/64/
	)
	include(FindPackageHandleStandardArgs)
	FIND_PACKAGE_HANDLE_STANDARD_ARGS(Readline DEFAULT_MSG READLINE_INCLUDE_DIR READLINE_LIBRARY )

	MARK_AS_ADVANCED(READLINE_INCLUDE_DIR READLINE_LIBRARY)
	set(HAVE_LIBREADLINE TRUE)
endif(READLINE_INCLUDE_DIR AND READLINE_LIBRARY)
