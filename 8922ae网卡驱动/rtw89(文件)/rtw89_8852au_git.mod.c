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
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc8cef79, "rtw89_usb_probe" },
	{ 0xc61fc253, "usb_deregister" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x1c9a7ba2, "rtw89_usb_disconnect" },
	{ 0x7ce03f00, "rtw8852a_chip_info" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_usb_git,rtw89_8852a_git");

MODULE_ALIAS("usb:v0411p0312d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v056Ep4020d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1997d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8832d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp885Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp885Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3321d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p332Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p013Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0140d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0141d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3625p010Fd*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "AC95078FB332F33E7666EC2");
