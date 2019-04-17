CC					:= gcc
INC					:= /home/paramra/WiringOP/wiringPi
TARGET_IP			:= "192.168.1.109"
TARGET_LOGIN		:= paramra
TARGET_WORKDIR		:= /home/$(TARGET_LOGIN)/orange_prj
TARGET_RSYNC_PATH	:= $(TARGET_LOGIN)@$(TARGET_IP):$(TARGET_WORKDIR)
TARGET_SSH_PATH		:= $(TARGET_LOGIN)@$(TARGET_IP)

HOST_LOGIN			:= $(TARGET_LOGIN)
HOST_WORKDIR		:= /home/$(HOST_LOGIN)/orange_prj

all: build

build:
	# sync local dir with orange
	# Note!!! Full pathes for project and target must be the same
	@echo "trace build:"
	# rsync --archive --verbose --progress $(TARGET_WORKDIR)/$(TARGET_PATH)
	rsync --archive --verbose --progress ./ $(TARGET_RSYNC_PATH)
	# run build task
	ssh $(TARGET_SSH_PATH) gcc -g -I$(INC) -o $(TARGET_WORKDIR)/test.out $(TARGET_WORKDIR)/test.c -lwiringPi -lpthread
	# ssh  $(TARGET_PATH) gcc -g -o test test.c

run:
	ssh $(TARGET_SSH_PATH) $(TARGET_WORKDIR)/test.out	

debug:
	ssh $(TARGET_SSH_PATH) gdb $(TARGET_WORKDIR)/test.out

test:
	@echo ssh $(TARGET_SSH_PATH) gcc -g -o $(TARGET_WORKDIR)/test.out $(TARGET_WORKDIR)/test.c


clean:
	rm -f test.out