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
	{ 0x90dba19f, "rtw8852c_chip_info" },
	{ 0x6f15b26d, "rtw89_pm_ops" },
	{ 0x28383888, "rtw89_pci_err_handler" },
	{ 0x48eb7198, "__pci_register_driver" },
	{ 0x246b17f2, "rtw89_pci_remove" },
	{ 0x74142378, "rtw89_pci_fill_txaddr_info_v1" },
	{ 0xdb17e1ed, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2c07babb, "rtw89_pci_ltr_set_v1" },
	{ 0x9e2cfe95, "rtw89_pci_gen_ax" },
	{ 0x1a3e2c72, "rtw89_pci_parse_rpp" },
	{ 0x1cd94f17, "rtw89_pci_config_intr_mask_v1" },
	{ 0xd5cb40d8, "rtw89_pci_probe" },
	{ 0x84b8ce3c, "rtw89_pci_disable_intr_v1" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2561b9ba, "rtw89_pci_enable_intr_v1" },
	{ 0x11055d5e, "rtw89_pci_recognize_intrs_v1" },
	{ 0xf630d9a9, "rtw89_pci_ch_dma_addr_set_v1" },
	{ 0x6efd9f2c, "rtw89_bd_ram_table_dual" },
	{ 0x3853ceb0, "rtw89_pci_isr_ax" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_8852c_git,rtw89_pci_git");

MODULE_ALIAS("pci:v000010ECd0000C852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FE8D940EC5283A63B5AEA1A");
