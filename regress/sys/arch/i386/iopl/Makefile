#	$NetBSD: Makefile,v 1.1 2008/01/04 15:37:11 yamt Exp $

NOMAN=		# defined

PROG=		iopl
WARNS=		4
DPADD+=		${LIBARCH}
LDADD+=		-li386

regress:
	-@if ./${PROG}; \
	then echo PASSED; \
	else echo FAILED; fi

.include <bsd.prog.mk>
