ARCH=arm64
KERNEL_IMAGE_TYPE=Image
HAS_UUID_SUPPORT=yes
OFFSET=2

case $BRANCH in
	dev)
	BOOTSOURCE='https://github.com/zador-blood-stained/u-boot-sun50i.git'
	BOOTDIR='u-boot-sun50i'
	BOOTBRANCH='branch:master'
	BOOTPATCHDIR='u-boot-sun50i-dev'
	UBOOT_TARGET_MAP="$BOARD;;u-boot-sunxi-with-spl.bin"

	BOOTSCRIPT='boot-sun50i-next.cmd:boot.cmd'
	LINUXCONFIG='linux-sun50i-dev'
	;;
esac
