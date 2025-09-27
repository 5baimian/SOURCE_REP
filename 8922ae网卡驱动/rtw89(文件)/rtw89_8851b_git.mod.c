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

KSYMTAB_DATA(rtw8851b_chip_info, "", "");

SYMBOL_CRC(rtw8851b_chip_info, 0xc03661c1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5f9c3b9a, "rtw89_mac_cfg_gnt" },
	{ 0x95ac2e2a, "rtw89_phy_write_rf_v1" },
	{ 0x2d175ba9, "rtw89_read_efuse_ver" },
	{ 0x4868d2ff, "rtw89_fw_h2c_default_cmac_tbl" },
	{ 0x75ade567, "rtw89_core_get_ch_dma" },
	{ 0xd4798f52, "rtw89_decode_chan_idx" },
	{ 0xac21be1, "rtw89_core_fill_txdesc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x45b6e15c, "rtw89_phy_get_txsc" },
	{ 0x6921a08c, "rtw89_phy_load_txpwr_byrate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x704419c3, "rtw89_mac_gen_ax" },
	{ 0x9431f332, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x69a10b8b, "rtw89_mac_coex_init" },
	{ 0x603e555, "rtw89_core_query_rxdesc" },
	{ 0x1362aec4, "rtw89_phy_write32_idx" },
	{ 0x5c00e72c, "rtw89_btc_ntfy_preserve_bt_time" },
	{ 0xa4bbcec3, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0xaed7404b, "rtw89_phy_write_reg3_tbl" },
	{ 0xc638a860, "rtw89_phy_gen_ax" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc3a612a0, "rtw89_fw_h2c_assoc_cmac_tbl" },
	{ 0x8dc9d524, "rtw89_fw_h2c_update_beacon" },
	{ 0xe076ecc6, "rtw89_btc_ntfy_wl_rfk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x27d11e1b, "rtw89_fw_h2c_txtime_cmac_tbl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba1abc84, "rtw89_rfk_parser" },
	{ 0xd73c2f20, "rtw89_encode_chan_idx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xcc011a67, "rtw89_mac_resume_sch_tx" },
	{ 0xd69245b3, "rtw89_phy_read_rf_v1" },
	{ 0x30f6e839, "rtw89_mac_cfg_ctrl_path" },
	{ 0x8e66b2a8, "rtw89_mac_size" },
	{ 0x42e5e080, "rtw89_fw_h2c_ba_cam" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0xa30f0327, "rtw89_mac_stop_sch_tx" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf77e506b, "rtw89_btc_ntfy_conn_rfk" },
	{ 0x1f9ccee1, "rtw89_phy_config_rf_reg_v1" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,cfg80211");


MODULE_INFO(srcversion, "71056B01DDDE90B915AC596");
