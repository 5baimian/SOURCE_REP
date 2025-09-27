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

KSYMTAB_FUNC(rtw89_usb_probe, "", "");
KSYMTAB_FUNC(rtw89_usb_disconnect, "", "");

SYMBOL_CRC(rtw89_usb_probe, 0x0c8cef79, "");
SYMBOL_CRC(rtw89_usb_disconnect, 0x1c9a7ba2, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc588d635, "usb_alloc_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xde4d5928, "usb_free_urb" },
	{ 0x8a639a9a, "rtw89_alloc_ieee80211_hw" },
	{ 0xde87b83, "skb_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9645e4cf, "skb_dequeue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x982b44ed, "rtw89_core_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68e75509, "skb_queue_purge_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf3be4970, "ieee80211_tx_status_irqsafe" },
	{ 0xb56aaa4b, "usb_put_dev" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9145465a, "usb_get_dev" },
	{ 0x4f8c5665, "__alloc_skb" },
	{ 0xc397ffa7, "usb_submit_urb" },
	{ 0x9431f332, "_dev_info" },
	{ 0xd513779, "skb_queue_tail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x85a380a9, "rtw89_core_init" },
	{ 0x3a1baaae, "ieee80211_purge_tx_queue" },
	{ 0x9c1f1e35, "_dev_err" },
	{ 0x429ddb29, "skb_pull" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3f17e12, "skb_push" },
	{ 0xba79d0ae, "usb_control_msg" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x577c2d04, "rtw89_free_ieee80211_hw" },
	{ 0xfb578fc5, "memset" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd599afbb, "__netdev_alloc_skb" },
	{ 0xf9b11a32, "rtw89_core_register" },
	{ 0xa069ce96, "rtw89_core_rx" },
	{ 0x364b243d, "param_ops_bool" },
	{ 0x580a631, "rtw89_core_deinit" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x79c2529f, "usb_kill_urb" },
	{ 0xd0c3484c, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x84d1fa3b, "dev_kfree_skb_any_reason" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d3829fe, "rtw89_chip_info_setup" },
	{ 0x1bff00c8, "kmalloc_caches" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,mac80211");


MODULE_INFO(srcversion, "8F450B6F3943AB1D56348BB");
