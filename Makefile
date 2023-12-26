# dwm - dynamic menu

include config.mk

BINFILE    = $(SYS)/bin/$(BINNAME)
CFILES     = $(SRC)/$(BINNAME).c $(DEPS)
OFILES     = $(patsubst $(SRC)%.c,$(BLD)%.o,$(CFILES))
INSTALLED  = $(DESTDIR)$(PREFIX)/bin/$(BINNAME)

.PHONY: all man install dist
all: $(BINFILE) man
dist: clean
man: $(MFILES)

$(BLD)/%.o: $(CFILES)
	mkdir -p $(BLD)
	$(CC) $(CFLAGS) -o $@ -c $(@:$(BLD)%.o=$(SRC)%.c)

$(BINFILE): $(OFILES) $(WATCH)
	mkdir -p $(SYS)/bin
	$(CC) $(LDFLAGS) -o $@ $(filter %.o,$^)
	chmod 755 $@

.PHONY: install
install: $(BINFILE) $(TOINSTALL)
	mkdir -p "$(DESTDIR)$(PREFIX)"
	cp -ft $(DESTDIR)$(PREFIX)/bin $^

.PHONY: uninstall
uninstall: $(INSTALLED)
	rm -f $^

.PHONY: clean
clean:
	rm -rf  $(BLD) $(SYS)
