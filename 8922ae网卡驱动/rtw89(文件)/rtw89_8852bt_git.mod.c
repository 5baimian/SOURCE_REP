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

KSYMTAB_DATA(rtw8852bt_chip_info, "", "");

SYMBOL_CRC(rtw8852bt_chip_info, 0x77141152, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5f9c3b9a, "rtw89_mac_cfg_gnt" },
	{ 0x95ac2e2a, "rtw89_phy_write_rf_v1" },
	{ 0x4868d2ff, "rtw89_fw_h2c_default_cmac_tbl" },
	{ 0x75ade567, "rtw89_core_get_ch_dma" },
	{ 0xac21be1, "rtw89_core_fill_txdesc" },
	{ 0xa986b9b5, "__rtw89_mgnt_chan_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x704419c3, "rtw89_mac_gen_ax" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x1aee2ec0, "rtw8852bx_info" },
	{ 0x603e555, "rtw89_core_query_rxdesc" },
	{ 0x1362aec4, "rtw89_phy_write32_idx" },
	{ 0x5c00e72c, "rtw89_btc_ntfy_preserve_bt_time" },
	{ 0xa4bbcec3, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x46967a00, "rtw89_fw_blacklist_default" },
	{ 0xc638a860, "rtw89_phy_gen_ax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc84baa1, "rtw89_fw_h2c_rf_ntfy_mcc" },
	{ 0xc3a612a0, "rtw89_fw_h2c_assoc_cmac_tbl" },
	{ 0x8dc9d524, "rtw89_fw_h2c_update_beacon" },
	{ 0xe076ecc6, "rtw89_btc_ntfy_wl_rfk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x27d11e1b, "rtw89_fw_h2c_txtime_cmac_tbl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba1abc84, "rtw89_rfk_parser" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc011a67, "rtw89_mac_resume_sch_tx" },
	{ 0xd69245b3, "rtw89_phy_read_rf_v1" },
	{ 0x30f6e839, "rtw89_mac_cfg_ctrl_path" },
	{ 0x8e66b2a8, "rtw89_mac_size" },
	{ 0x42e5e080, "rtw89_fw_h2c_ba_cam" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0xa30f0327, "rtw89_mac_stop_sch_tx" },
	{ 0x5b656e6d, "rtw89_rfk_chan_lookup" },
	{ 0xf77e506b, "rtw89_btc_ntfy_conn_rfk" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,rtw89_8852b_common_git");


MODULE_INFO(srcversion, "7890BF985ECB67769436FFF");
