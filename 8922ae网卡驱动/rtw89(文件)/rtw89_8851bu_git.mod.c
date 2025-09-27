#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x748aeeb3, "usb_register_driver" },
	{ 0xc03661c1, "rtw8851b_chip_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc8cef79, "rtw89_usb_probe" },
	{ 0xc61fc253, "usb_deregister" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1c9a7ba2, "rtw89_usb_disconnect" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_8851b_git,rtw89_usb_git");

MODULE_ALIAS("usb:v0BDApB851d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p332Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3625p010Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pE611d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "B9EC33F04423056DBC7098C");
