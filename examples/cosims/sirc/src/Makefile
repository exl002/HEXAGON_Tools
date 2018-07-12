# 
# Top level makefile
# 

target: all
INSTALLPREFIX := /usr/local/qdsp6/qc
ifndef Q6VERSION
 Q6VERSION=v5
endif

RUN = qdsp6-sim
RELEASE_DIR:=$(shell which ${RUN})
RELEASE_DIR:=$(shell dirname ${RELEASE_DIR})/../..
INCLUDE_DIR := $(RELEASE_DIR)/qc/include/iss/


SYSTEM := $(shell uname)

ifeq (CYGWIN, $(findstring CYGWIN,$(SYSTEM)))
	ARCH=
	DLLIB = 
	O_EXT := obj
	O_OUTPUT := /Fo
	PLATDIR=cygwin

	CURR_DIR := $(shell pwd)
	TMP_CURR_DIR := $(shell cygpath -w ${CURR_DIR})
	SRC_DIR := $(shell echo "$(TMP_CURR_DIR)" | sed 's/\\/\//g')
	TMP_SRC_DIR := $(shell echo $(SRC_DIR) | sed 's,^/cygdrive/\(.\),\1:,g')
	SRC_TOP := $(TMP_SRC_DIR)/..
	EXEDIR := $(SRC_TOP)/bin
	# Compiler to use
	CC := cl
	CFLAGS := /nologo /Zm1000 /GX /D "WIN32" -DVCPP -DLITTLE_ENDIAN -DCYGWIN /TP /I. /DCYGPC
	LINKFLAGS := /nologo /dll libq6iss.lib
	LIBPATH := $(RELEASE_DIR)/qc/lib/iss/$(Q6VERSION)
	DBG_CFLAGS := /MTd /Od /Gm /ZI
	NDBG_CFLAGS := /MT /O2
	MDCFLAGS := -DWIN32 -DVCPP -DLITTLE_ENDIAN -DCYGWIN -I.
	AR := ar
	LIBSUFF := dll
else
	ARCH    := $(shell /bin/arch)

	SRC := $(shell pwd)
	SRC_TOP := $(SRC)/..
	EXEDIR := $(SRC_TOP)/bin
	# Compiler to use
	CC := g++
	AR := ar

	DLLIB = -ldl	
	O_EXT := o
	O_OUTPUT := -o
	CFLAGS += -fPIC
	ifeq ($(ARCH), x86_64)
		CFLAGS += -fomit-frame-pointer -ffast-math
		PLATDIR=lnx64
	else
		CFLAGS += -fomit-frame-pointer -ffast-math -march=pentium3
		PLATDIR=lnx32
	endif		

	CFLAGS += -I./ -Wall
	MDCFLAGS := $(CFLAGS)
	DBG_CFLAGS := -g
	NDBG_CFLAGS := -O4
	LIBSUFF := so
endif


BINDIR := $(SRC_TOP)/bin/$(PLATDIR)

OBJDIR := $(SRC_TOP)/build/$(PLATDIR)

LIBSIRC = $(BINDIR)/sirc.$(LIBSUFF)

SIRC_DIR := $(SRC_TOP)/src


ifeq (CYGWIN, $(findstring CYGWIN,$(SYSTEM)))
	CFLAGS += /I`cygpath -w $(INCLUDE_DIR)` /I$(SIRC_DIR) 
	MDCFLAGS += -I$(INCLUDE_DIR) -I$(SIRC_DIR) 
else
	CFLAGS += -I$(INCLUDE_DIR) -I$(SIRC_DIR) 
	MDCFLAGS += -I$(INCLUDE_DIR) -I$(SIRC_DIR) 
endif

ALLCFILES = $(wildcard *cpp)
DFILES = $(patsubst %,$(OBJDIR)/%,$(ALLCFILES:.cpp=.d))
-include $(DFILES)
OFILES = $(patsubst %,$(OBJDIR)/%,$(ALLCFILES:.cpp=.$(O_EXT)))

.PHONY: clean

all:
	make -C . OPT_CFLAGS="$(NDBG_CFLAGS)" mini_all

mini_all: makedirs $(LIBSIRC)

debug:
	make -C . OPT_CFLAGS="$(DBG_CFLAGS)" BINDIR=$(BINDIR)/debug OBJDIR=$(OBJDIR)/debug mini_all

makedirs:
	mkdir -p $(BINDIR) $(OBJDIR)

$(OBJDIR)/%.$(O_EXT): %.cpp
ifeq (CYGWIN, $(findstring CYGWIN,$(SYSTEM)))
	"`cygpath -u "$(VCINSTALLDIR)\\bin\\$(CC).exe"`" $(OPT_CFLAGS) $(CFLAGS) -c $< $(O_OUTPUT)$@
else
	$(CC) $(OPT_CFLAGS) $(CFLAGS) -c $< $(O_OUTPUT)$@
endif

ifeq (CYGWIN, $(findstring CYGWIN,$(SYSTEM)))
$(LIBSIRC): $(OFILES)
	"`cygpath -u "$(VCINSTALLDIR)\\Bin\\link.exe"`" `cygpath -w $(OFILES)` $(LINKFLAGS) /libpath:"`cygpath -w $(LIBPATH)`"  /out:$(LIBSIRC)
else
$(LIBSIRC): $(OFILES)
	g++ -shared -o $@ $+
endif

install:  $(LIBSIRC)
	mkdir -p $(INSTALLPREFIX)/lib/iss/$(Q6VERSION)

clean:
	rm -f $(LIBSIRC) $(OFILES) $(DFILES)
