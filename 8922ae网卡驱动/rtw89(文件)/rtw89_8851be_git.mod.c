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
	{ 0x6f15b26d, "rtw89_pm_ops" },
	{ 0x28383888, "rtw89_pci_err_handler" },
	{ 0xc0179976, "rtw89_pci_fill_txaddr_info" },
	{ 0x48eb7198, "__pci_register_driver" },
	{ 0x17d8a9ae, "rtw89_pci_recognize_intrs" },
	{ 0x246b17f2, "rtw89_pci_remove" },
	{ 0xc03661c1, "rtw8851b_chip_info" },
	{ 0x1261a8ab, "rtw89_pci_config_intr_mask" },
	{ 0x4bf76693, "rtw89_pci_ltr_set" },
	{ 0xdb17e1ed, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9e2cfe95, "rtw89_pci_gen_ax" },
	{ 0x1a3e2c72, "rtw89_pci_parse_rpp" },
	{ 0xd5cb40d8, "rtw89_pci_probe" },
	{ 0xf7c53fc4, "rtw89_pci_enable_intr" },
	{ 0x9ce0961b, "rtw89_pci_ch_dma_addr_set" },
	{ 0x71162055, "rtw89_bd_ram_table_single" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3853ceb0, "rtw89_pci_isr_ax" },
	{ 0xe162925d, "rtw89_pci_disable_intr" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_pci_git,rtw89_8851b_git");

MODULE_ALIAS("pci:v000010ECd0000B851sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A88AB2FB063106DE8269997");
