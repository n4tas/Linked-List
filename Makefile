LIB_DIR:=lib
ADDRESSBOOK_DIR:=src
AddressBook:=$(ADDRESSBOOK_DIR)/$(BIN)

.PHONY: all clean install uninstall $(LIB_DIR)/$(TARGET)

all: $(LIB_DIR)/$(TARGET) $(AddressBook)

$(LIB_DIR)/$(TARGET):
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(LIB_DIR) install

$(AddressBook): $(LIB_DIR)/$(TARGET)
	$(MAKE) -C $(ADDRESSBOOK_DIR)

install: $(LIB_DIR)/$(TARGET)
	$(MAKE) -C $(LIB_DIR) install
	$(MAKE) -C $(ADDRESSBOOK_DIR) install

uninstall: $(LIB_DIR)/$(TARGET)
	$(MAKE) -C $(LIB_DIR) uninstall
	$(MAKE) -C $(ADDRESSBOOK_DIR) uninstall

clean:
	$(MAKE) -C $(LIB_DIR) clean
	$(MAKE) -C $(ADDRESSBOOK_DIR) clean
