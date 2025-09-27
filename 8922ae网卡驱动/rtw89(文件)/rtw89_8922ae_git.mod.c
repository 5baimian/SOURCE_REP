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
	{ 0x28383888, "rtw89_pci_err_handler" },
	{ 0xce0f497a, "rtw89_pci_config_intr_mask_v2" },
	{ 0x2c757b0a, "rtw8922ae_vs_variant" },
	{ 0x48eb7198, "__pci_register_driver" },
	{ 0xd654aed7, "rtw8922a_chip_info" },
	{ 0x246b17f2, "rtw89_pci_remove" },
	{ 0xc5791cf5, "rtw89_pci_isr_be" },
	{ 0x9ad78f68, "rtw89_pci_ltr_set_v2" },
	{ 0x74142378, "rtw89_pci_fill_txaddr_info_v1" },
	{ 0xdb17e1ed, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a3e2c72, "rtw89_pci_parse_rpp" },
	{ 0xcac670e, "rtw89_pci_enable_intr_v2" },
	{ 0x8d77f708, "rtw89_pci_recognize_intrs_v2" },
	{ 0x5f8bb971, "rtw89_pm_ops_be" },
	{ 0xd5cb40d8, "rtw89_pci_probe" },
	{ 0x63062cd0, "rtw89_pci_gen_be" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x33c84a55, "rtw89_pci_ch_dma_addr_set_be" },
	{ 0xad751088, "rtw89_pci_disable_intr_v2" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_pci_git,rtw89_8922a_git");

MODULE_ALIAS("pci:v000010ECd00008922sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000892Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7DB97429BCE16CFFFB0346B");
