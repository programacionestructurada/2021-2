
default:
	@echo "Use make menuconfig para configurar el proyecto"
menuconfig:
	kconfig-mconf Kconfig
	./scripts/kconfig/conf --silentoldconfig Kconfig
	cp -v include/generated/autoconf.h \
../IntroProgUnidad02/include/generated/
	find ./obj -iname '*.o' -exec rm -v {} \;
