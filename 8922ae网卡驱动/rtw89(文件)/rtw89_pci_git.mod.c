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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(rtw89_pci_parse_rpp, "", "");
KSYMTAB_FUNC(rtw89_pci_parse_rpp_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_recognize_intrs_v3, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_enable_intr_v3, "", "");
KSYMTAB_FUNC(rtw89_pci_disable_intr_v3, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set_v1, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set_be, "", "");
KSYMTAB_DATA(rtw89_pci_ch_dma_addr_set_be_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_fill_txaddr_info, "", "");
KSYMTAB_FUNC(rtw89_pci_fill_txaddr_info_v1, "", "");
KSYMTAB_DATA(rtw89_bd_ram_table_dual, "", "");
KSYMTAB_DATA(rtw89_bd_ram_table_single, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask_v1, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask_v2, "", "");
KSYMTAB_FUNC(rtw89_pci_config_intr_mask_v3, "", "");
KSYMTAB_DATA(rtw89_pm_ops, "", "");
KSYMTAB_DATA(rtw89_pci_err_handler, "", "");
KSYMTAB_DATA(rtw89_pci_isr_ax, "", "");
KSYMTAB_DATA(rtw89_pci_gen_ax, "", "");
KSYMTAB_FUNC(rtw89_pci_probe, "", "");
KSYMTAB_FUNC(rtw89_pci_remove, "", "");
KSYMTAB_FUNC(rtw89_pci_ltr_set_v2, "", "");
KSYMTAB_DATA(rtw89_pm_ops_be, "", "");
KSYMTAB_DATA(rtw89_pci_isr_be, "", "");
KSYMTAB_DATA(rtw89_pci_isr_be_v1, "", "");
KSYMTAB_DATA(rtw89_pci_gen_be, "", "");

SYMBOL_CRC(rtw89_pci_parse_rpp, 0x1a3e2c72, "");
SYMBOL_CRC(rtw89_pci_parse_rpp_v1, 0x5359cae3, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs, 0x17d8a9ae, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs_v1, 0x11055d5e, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs_v2, 0x8d77f708, "");
SYMBOL_CRC(rtw89_pci_recognize_intrs_v3, 0xf959913a, "");
SYMBOL_CRC(rtw89_pci_enable_intr, 0xf7c53fc4, "");
SYMBOL_CRC(rtw89_pci_disable_intr, 0xe162925d, "");
SYMBOL_CRC(rtw89_pci_enable_intr_v1, 0x2561b9ba, "");
SYMBOL_CRC(rtw89_pci_disable_intr_v1, 0x84b8ce3c, "");
SYMBOL_CRC(rtw89_pci_enable_intr_v2, 0x0cac670e, "");
SYMBOL_CRC(rtw89_pci_disable_intr_v2, 0xad751088, "");
SYMBOL_CRC(rtw89_pci_enable_intr_v3, 0x14172d62, "");
SYMBOL_CRC(rtw89_pci_disable_intr_v3, 0xb5ce5ae4, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set, 0x9ce0961b, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set_v1, 0xf630d9a9, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set_be, 0x33c84a55, "");
SYMBOL_CRC(rtw89_pci_ch_dma_addr_set_be_v1, 0x940c5b25, "");
SYMBOL_CRC(rtw89_pci_fill_txaddr_info, 0xc0179976, "");
SYMBOL_CRC(rtw89_pci_fill_txaddr_info_v1, 0x74142378, "");
SYMBOL_CRC(rtw89_bd_ram_table_dual, 0x6efd9f2c, "");
SYMBOL_CRC(rtw89_bd_ram_table_single, 0x71162055, "");
SYMBOL_CRC(rtw89_pci_ltr_set, 0x4bf76693, "");
SYMBOL_CRC(rtw89_pci_ltr_set_v1, 0x2c07babb, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask, 0x1261a8ab, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask_v1, 0x1cd94f17, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask_v2, 0xce0f497a, "");
SYMBOL_CRC(rtw89_pci_config_intr_mask_v3, 0x8042b4a1, "");
SYMBOL_CRC(rtw89_pm_ops, 0x6f15b26d, "");
SYMBOL_CRC(rtw89_pci_err_handler, 0x28383888, "");
SYMBOL_CRC(rtw89_pci_isr_ax, 0x3853ceb0, "");
SYMBOL_CRC(rtw89_pci_gen_ax, 0x9e2cfe95, "");
SYMBOL_CRC(rtw89_pci_probe, 0xd5cb40d8, "");
SYMBOL_CRC(rtw89_pci_remove, 0x246b17f2, "");
SYMBOL_CRC(rtw89_pci_ltr_set_v2, 0x9ad78f68, "");
SYMBOL_CRC(rtw89_pm_ops_be, 0x5f8bb971, "");
SYMBOL_CRC(rtw89_pci_isr_be, 0xc5791cf5, "");
SYMBOL_CRC(rtw89_pci_isr_be_v1, 0x1df37f7b, "");
SYMBOL_CRC(rtw89_pci_gen_be, 0x63062cd0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x8c731d07, "pcie_capability_read_word" },
	{ 0x5a8c11b6, "pci_find_ext_capability" },
	{ 0x8a639a9a, "rtw89_alloc_ieee80211_hw" },
	{ 0x6b9b1923, "devm_request_threaded_irq" },
	{ 0x50e8a372, "pci_enable_device" },
	{ 0xde87b83, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd2e4ecca, "consume_skb" },
	{ 0x6509ad5d, "pci_iomap" },
	{ 0xae502b50, "pci_alloc_irq_vectors" },
	{ 0x9645e4cf, "skb_dequeue" },
	{ 0x66745e8d, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbd079584, "dma_sync_single_for_device" },
	{ 0xa5fef1e4, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb8aff722, "pcpu_hot" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2816474d, "rtw89_core_napi_init" },
	{ 0x982b44ed, "rtw89_core_unregister" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1e5276de, "dev_driver_string" },
	{ 0x763c7343, "ieee80211_tx_status_skb" },
	{ 0x3d47df84, "pci_read_config_dword" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbbf041e3, "dma_map_page_attrs" },
	{ 0x5b092fc1, "napi_complete_done" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5243add8, "devm_free_irq" },
	{ 0x8971d842, "__napi_schedule" },
	{ 0xb64bd49a, "netif_device_detach" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9431f332, "_dev_info" },
	{ 0xb8cd7734, "netif_device_attach" },
	{ 0xd513779, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x85a380a9, "rtw89_core_init" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9c1f1e35, "_dev_err" },
	{ 0x636ea793, "rtw89_check_quirks" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x72ab1c38, "rtw89_core_napi_deinit" },
	{ 0x3f17e12, "skb_push" },
	{ 0x520aa3f2, "dma_alloc_attrs" },
	{ 0x577c2d04, "rtw89_free_ieee80211_hw" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaae1eb1, "rtw89_core_napi_start" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1cd36473, "pci_iounmap" },
	{ 0xd33c8cd4, "dma_sync_single_for_cpu" },
	{ 0xe3f57b04, "rtw89_debug_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0x421b967b, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbffbe7fe, "rtw89_ser_notify" },
	{ 0xd599afbb, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xebeec445, "pcie_capability_clear_and_set_word_unlocked" },
	{ 0x7f09635f, "skb_unlink" },
	{ 0xcb120662, "dma_set_coherent_mask" },
	{ 0xf9b11a32, "rtw89_core_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1949253, "dma_free_attrs" },
	{ 0xa069ce96, "rtw89_core_rx" },
	{ 0x2309811e, "pci_enable_wake" },
	{ 0x364b243d, "param_ops_bool" },
	{ 0x8b758206, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x580a631, "rtw89_core_deinit" },
	{ 0xa1a4386e, "pci_write_config_byte" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2b42b188, "pci_disable_device" },
	{ 0x54967465, "dma_set_mask" },
	{ 0x7f11ddf, "napi_schedule_prep" },
	{ 0x592f320e, "pci_read_config_byte" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x84d1fa3b, "dev_kfree_skb_any_reason" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0xe3b02f60, "pci_free_irq_vectors" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa5a2800b, "rtw89_core_napi_stop" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1d3829fe, "rtw89_chip_info_setup" },
	{ 0x89e52c17, "rtw89_mac_get_err_status" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,mac80211");


MODULE_INFO(srcversion, "0E9096B571E53C4DB4C1E34");
