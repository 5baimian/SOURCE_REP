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

KSYMTAB_DATA(rtw8922a_chip_info, "", "");
KSYMTAB_DATA(rtw8922ae_vs_variant, "", "");

SYMBOL_CRC(rtw8922a_chip_info, 0xd654aed7, "");
SYMBOL_CRC(rtw8922ae_vs_variant, 0x2c757b0a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa1e03c8e, "rtw89_fw_h2c_ba_cam_v1" },
	{ 0x5ccff340, "rtw89_phy_rfk_pre_ntfy_and_wait" },
	{ 0x7b50b386, "rtw89_core_fill_txdesc_v2" },
	{ 0xdc7e3a3, "rtw89_fw_h2c_txtime_cmac_tbl_g7" },
	{ 0xf2f4ae5, "rtw89_phy_rfk_iqk_and_wait" },
	{ 0xc6b32bca, "rtw89_phy_set_phy_regs" },
	{ 0x64b9760a, "rtw89_fw_h2c_ampdu_cmac_tbl_g7" },
	{ 0x75ade567, "rtw89_core_get_ch_dma" },
	{ 0xd4798f52, "rtw89_decode_chan_idx" },
	{ 0x97e08eb5, "rtw89_mac_gen_be" },
	{ 0xa986b9b5, "__rtw89_mgnt_chan_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x13ebe3ca, "rtw89_phy_rfk_rxdck_and_wait" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x55a8c929, "rtw89_phy_ant_gain_pwr_offset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa872082b, "rtw89_phy_rfk_dpk_and_wait" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xf006b810, "rtw89_phy_rfk_tssi_and_wait" },
	{ 0x9431f332, "_dev_info" },
	{ 0xb1e760a4, "rtw89_mac_cfg_ctrl_path_v2" },
	{ 0xfe4ed7f, "rtw89_phy_write_rf_v2" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xff60ee55, "rtw89_core_query_rxdesc_v2" },
	{ 0xd389107a, "rtw89_phy_read_rf_v2" },
	{ 0x2a66d23, "rtw89_mac_cfg_gnt_v2" },
	{ 0x1362aec4, "rtw89_phy_write32_idx" },
	{ 0xa4bbcec3, "rtw89_btc_set_policy_v1" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe3f57b04, "rtw89_debug_mask" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0xb87b0ffc, "rtw89_phy_get_txsb" },
	{ 0x9fe7a911, "rtw89_tas_chanctx_cb" },
	{ 0x46967a00, "rtw89_fw_blacklist_default" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x861f861f, "rtw89_core_fill_txdesc_fwcmd_v2" },
	{ 0xe076ecc6, "rtw89_btc_ntfy_wl_rfk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9432fa26, "rtw89_query_sar" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd73c2f20, "rtw89_encode_chan_idx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x36a27ef3, "rtw89_fw_h2c_default_dmac_tbl_v2" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x90773d1c, "rtw89_fw_h2c_default_cmac_tbl_g7" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x8e66b2a8, "rtw89_mac_size" },
	{ 0x4dff4dbe, "rtw89_phy_rfk_dack_and_wait" },
	{ 0x8e373378, "rtw89_fw_h2c_update_beacon_be" },
	{ 0x40b16ce3, "rtw89_fw_h2c_assoc_cmac_tbl_g7" },
	{ 0x4503c514, "rtw89_mac_stop_sch_tx_v2" },
	{ 0xafa9822e, "rtw89_mac_resume_sch_tx_v2" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc6f14a42, "rtw89_core_get_ch_dma_v2" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0x801267ef, "rtw89_phy_rfk_txgapk_and_wait" },
	{ 0xa78cb52a, "rtw89_phy_get_syn_sel" },
	{ 0x3bdcfdde, "rtw89_fw_h2c_dctl_sec_cam_v2" },
	{ 0x3b127a25, "rtw89_phy_gen_be" },
	{ 0x5b656e6d, "rtw89_rfk_chan_lookup" },
	{ 0xfae203fa, "rtw89_phy_get_kpath" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,cfg80211");


MODULE_INFO(srcversion, "55F972D59B8429AD3AD65AE");
