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

KSYMTAB_FUNC(rtw89_core_get_ch_dma, "", "");
KSYMTAB_FUNC(rtw89_core_get_ch_dma_v1, "", "");
KSYMTAB_FUNC(rtw89_core_get_ch_dma_v2, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_v1, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_v2, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_fwcmd_v1, "", "");
KSYMTAB_FUNC(rtw89_core_fill_txdesc_fwcmd_v2, "", "");
KSYMTAB_FUNC(rtw89_core_query_rxdesc, "", "");
KSYMTAB_FUNC(rtw89_core_query_rxdesc_v2, "", "");
KSYMTAB_FUNC(rtw89_core_rx, "", "");
KSYMTAB_FUNC(rtw89_core_napi_start, "", "");
KSYMTAB_FUNC(rtw89_core_napi_stop, "", "");
KSYMTAB_FUNC(rtw89_core_napi_init, "", "");
KSYMTAB_FUNC(rtw89_core_napi_deinit, "", "");
KSYMTAB_FUNC(rtw89_check_quirks, "", "");
KSYMTAB_FUNC(rtw89_core_init, "", "");
KSYMTAB_FUNC(rtw89_core_deinit, "", "");
KSYMTAB_FUNC(rtw89_chip_info_setup, "", "");
KSYMTAB_FUNC(rtw89_core_register, "", "");
KSYMTAB_FUNC(rtw89_core_unregister, "", "");
KSYMTAB_FUNC(rtw89_alloc_ieee80211_hw, "", "");
KSYMTAB_FUNC(rtw89_free_ieee80211_hw, "", "");
KSYMTAB_DATA(rtw89_ops, "", "");
KSYMTAB_FUNC(rtw89_mac_get_err_status, "", "");
KSYMTAB_FUNC(rtw89_mac_set_err_status, "", "");
KSYMTAB_DATA(rtw89_mac_size, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_enable_bb_rf, "", "");
KSYMTAB_FUNC(rtw89_mac_disable_bb_rf, "", "");
KSYMTAB_FUNC(rtw89_mac_coex_init, "", "");
KSYMTAB_FUNC(rtw89_mac_coex_init_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt_v1, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path_v1, "", "");
KSYMTAB_DATA(rtw89_mac_gen_ax, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_gnt_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_ctrl_path_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_stop_sch_tx_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_resume_sch_tx_v2, "", "");
KSYMTAB_FUNC(rtw89_mac_cfg_phy_rpt_be, "", "");
KSYMTAB_DATA(rtw89_mac_gen_be, "", "");
KSYMTAB_FUNC(rtw89_phy_get_txsc, "", "");
KSYMTAB_FUNC(rtw89_phy_get_txsb, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_read_rf_v2, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_write_rf_v2, "", "");
KSYMTAB_FUNC(rtw89_phy_config_rf_reg_v1, "", "");
KSYMTAB_FUNC(rtw89_phy_write32_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_write32_idx_set, "", "");
KSYMTAB_FUNC(rtw89_phy_write32_idx_clr, "", "");
KSYMTAB_FUNC(rtw89_phy_read32_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_set_phy_regs, "", "");
KSYMTAB_FUNC(rtw89_phy_write_reg3_tbl, "", "");
KSYMTAB_FUNC(rtw89_phy_ant_gain_pwr_offset, "", "");
KSYMTAB_FUNC(rtw89_phy_load_txpwr_byrate, "", "");
KSYMTAB_FUNC(rtw89_phy_read_txpwr_limit, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_pre_ntfy_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_tssi_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_iqk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_dpk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_txgapk_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_dack_and_wait, "", "");
KSYMTAB_FUNC(rtw89_phy_rfk_rxdck_and_wait, "", "");
KSYMTAB_FUNC(rtw89_rfk_chan_lookup, "", "");
KSYMTAB_FUNC(rtw89_rfk_parser, "", "");
KSYMTAB_FUNC(rtw89_phy_tssi_ctrl_set_bandedge_cfg, "", "");
KSYMTAB_FUNC(rtw89_encode_chan_idx, "", "");
KSYMTAB_FUNC(rtw89_decode_chan_idx, "", "");
KSYMTAB_FUNC(rtw89_phy_get_kpath, "", "");
KSYMTAB_FUNC(rtw89_phy_get_syn_sel, "", "");
KSYMTAB_DATA(rtw89_phy_gen_ax, "", "");
KSYMTAB_DATA(rtw89_phy_gen_be, "", "");
KSYMTAB_DATA(rtw89_fw_blacklist_default, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_dctl_sec_cam_v1, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_dctl_sec_cam_v2, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_dmac_tbl_v2, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ba_cam, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ba_cam_v1, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_cmac_tbl, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_default_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_assoc_cmac_tbl, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_assoc_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_ampdu_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_txtime_cmac_tbl, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_txtime_cmac_tbl_g7, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_update_beacon, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_update_beacon_be, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_rf_ntfy_mcc, "", "");
KSYMTAB_FUNC(rtw89_fw_h2c_rf_ps_info, "", "");
KSYMTAB_FUNC(rtw89_read_efuse_ver, "", "");
KSYMTAB_FUNC(rtw89_query_sar, "", "");
KSYMTAB_FUNC(rtw89_tas_chanctx_cb, "", "");
KSYMTAB_FUNC(rtw89_btc_set_policy, "", "");
KSYMTAB_FUNC(rtw89_btc_set_policy_v1, "", "");
KSYMTAB_FUNC(rtw89_btc_ntfy_wl_rfk, "", "");
KSYMTAB_FUNC(rtw89_btc_ntfy_preserve_bt_time, "", "");
KSYMTAB_FUNC(rtw89_btc_ntfy_conn_rfk, "", "");
KSYMTAB_FUNC(__rtw89_mgnt_chan_get, "", "");
KSYMTAB_FUNC(rtw89_ser_notify, "", "");
KSYMTAB_FUNC(rtw89_linear_to_db_quarter, "", "");
KSYMTAB_FUNC(rtw89_linear_to_db, "", "");
KSYMTAB_FUNC(rtw89_db_quarter_to_linear, "", "");
KSYMTAB_FUNC(rtw89_db_to_linear, "", "");
KSYMTAB_DATA(rtw89_debug_mask, "", "");
KSYMTAB_FUNC(rtw89_debug, "", "");

SYMBOL_CRC(rtw89_core_get_ch_dma, 0x75ade567, "");
SYMBOL_CRC(rtw89_core_get_ch_dma_v1, 0xe906440b, "");
SYMBOL_CRC(rtw89_core_get_ch_dma_v2, 0xc6f14a42, "");
SYMBOL_CRC(rtw89_core_fill_txdesc, 0x0ac21be1, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_v1, 0x95e510e7, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_v2, 0x7b50b386, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_fwcmd_v1, 0x68aa257e, "");
SYMBOL_CRC(rtw89_core_fill_txdesc_fwcmd_v2, 0x861f861f, "");
SYMBOL_CRC(rtw89_core_query_rxdesc, 0x0603e555, "");
SYMBOL_CRC(rtw89_core_query_rxdesc_v2, 0xff60ee55, "");
SYMBOL_CRC(rtw89_core_rx, 0xa069ce96, "");
SYMBOL_CRC(rtw89_core_napi_start, 0xfaae1eb1, "");
SYMBOL_CRC(rtw89_core_napi_stop, 0xa5a2800b, "");
SYMBOL_CRC(rtw89_core_napi_init, 0x2816474d, "");
SYMBOL_CRC(rtw89_core_napi_deinit, 0x72ab1c38, "");
SYMBOL_CRC(rtw89_check_quirks, 0x636ea793, "");
SYMBOL_CRC(rtw89_core_init, 0x85a380a9, "");
SYMBOL_CRC(rtw89_core_deinit, 0x0580a631, "");
SYMBOL_CRC(rtw89_chip_info_setup, 0x1d3829fe, "");
SYMBOL_CRC(rtw89_core_register, 0xf9b11a32, "");
SYMBOL_CRC(rtw89_core_unregister, 0x982b44ed, "");
SYMBOL_CRC(rtw89_alloc_ieee80211_hw, 0x8a639a9a, "");
SYMBOL_CRC(rtw89_free_ieee80211_hw, 0x577c2d04, "");
SYMBOL_CRC(rtw89_ops, 0x4eddd14c, "");
SYMBOL_CRC(rtw89_mac_get_err_status, 0x89e52c17, "");
SYMBOL_CRC(rtw89_mac_set_err_status, 0xed969bc7, "");
SYMBOL_CRC(rtw89_mac_size, 0x8e66b2a8, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx, 0xa30f0327, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx_v1, 0x1dcf3c11, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx, 0xcc011a67, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx_v1, 0x105e7ac4, "");
SYMBOL_CRC(rtw89_mac_enable_bb_rf, 0x1fc50e2d, "");
SYMBOL_CRC(rtw89_mac_disable_bb_rf, 0x8d239ef0, "");
SYMBOL_CRC(rtw89_mac_coex_init, 0x69a10b8b, "");
SYMBOL_CRC(rtw89_mac_coex_init_v1, 0x9f381526, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt, 0x5f9c3b9a, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt_v1, 0xea56f169, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path, 0x30f6e839, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path_v1, 0xfed20b3f, "");
SYMBOL_CRC(rtw89_mac_gen_ax, 0x704419c3, "");
SYMBOL_CRC(rtw89_mac_cfg_gnt_v2, 0x02a66d23, "");
SYMBOL_CRC(rtw89_mac_cfg_ctrl_path_v2, 0xb1e760a4, "");
SYMBOL_CRC(rtw89_mac_stop_sch_tx_v2, 0x4503c514, "");
SYMBOL_CRC(rtw89_mac_resume_sch_tx_v2, 0xafa9822e, "");
SYMBOL_CRC(rtw89_mac_cfg_phy_rpt_be, 0x79fbcd45, "");
SYMBOL_CRC(rtw89_mac_gen_be, 0x97e08eb5, "");
SYMBOL_CRC(rtw89_phy_get_txsc, 0x45b6e15c, "");
SYMBOL_CRC(rtw89_phy_get_txsb, 0xb87b0ffc, "");
SYMBOL_CRC(rtw89_phy_read_rf, 0xad0f4cd4, "");
SYMBOL_CRC(rtw89_phy_read_rf_v1, 0xd69245b3, "");
SYMBOL_CRC(rtw89_phy_read_rf_v2, 0xd389107a, "");
SYMBOL_CRC(rtw89_phy_write_rf, 0x1caae0be, "");
SYMBOL_CRC(rtw89_phy_write_rf_v1, 0x95ac2e2a, "");
SYMBOL_CRC(rtw89_phy_write_rf_v2, 0x0fe4ed7f, "");
SYMBOL_CRC(rtw89_phy_config_rf_reg_v1, 0x1f9ccee1, "");
SYMBOL_CRC(rtw89_phy_write32_idx, 0x1362aec4, "");
SYMBOL_CRC(rtw89_phy_write32_idx_set, 0x56add452, "");
SYMBOL_CRC(rtw89_phy_write32_idx_clr, 0x269fa955, "");
SYMBOL_CRC(rtw89_phy_read32_idx, 0xb70424ff, "");
SYMBOL_CRC(rtw89_phy_set_phy_regs, 0xc6b32bca, "");
SYMBOL_CRC(rtw89_phy_write_reg3_tbl, 0xaed7404b, "");
SYMBOL_CRC(rtw89_phy_ant_gain_pwr_offset, 0x55a8c929, "");
SYMBOL_CRC(rtw89_phy_load_txpwr_byrate, 0x6921a08c, "");
SYMBOL_CRC(rtw89_phy_read_txpwr_limit, 0xfae29235, "");
SYMBOL_CRC(rtw89_phy_rfk_pre_ntfy_and_wait, 0x5ccff340, "");
SYMBOL_CRC(rtw89_phy_rfk_tssi_and_wait, 0xf006b810, "");
SYMBOL_CRC(rtw89_phy_rfk_iqk_and_wait, 0x0f2f4ae5, "");
SYMBOL_CRC(rtw89_phy_rfk_dpk_and_wait, 0xa872082b, "");
SYMBOL_CRC(rtw89_phy_rfk_txgapk_and_wait, 0x801267ef, "");
SYMBOL_CRC(rtw89_phy_rfk_dack_and_wait, 0x4dff4dbe, "");
SYMBOL_CRC(rtw89_phy_rfk_rxdck_and_wait, 0x13ebe3ca, "");
SYMBOL_CRC(rtw89_rfk_chan_lookup, 0x5b656e6d, "");
SYMBOL_CRC(rtw89_rfk_parser, 0xba1abc84, "");
SYMBOL_CRC(rtw89_phy_tssi_ctrl_set_bandedge_cfg, 0x057e0401, "");
SYMBOL_CRC(rtw89_encode_chan_idx, 0xd73c2f20, "");
SYMBOL_CRC(rtw89_decode_chan_idx, 0xd4798f52, "");
SYMBOL_CRC(rtw89_phy_get_kpath, 0xfae203fa, "");
SYMBOL_CRC(rtw89_phy_get_syn_sel, 0xa78cb52a, "");
SYMBOL_CRC(rtw89_phy_gen_ax, 0xc638a860, "");
SYMBOL_CRC(rtw89_phy_gen_be, 0x3b127a25, "");
SYMBOL_CRC(rtw89_fw_blacklist_default, 0x46967a00, "");
SYMBOL_CRC(rtw89_fw_h2c_dctl_sec_cam_v1, 0x024cbdee, "");
SYMBOL_CRC(rtw89_fw_h2c_dctl_sec_cam_v2, 0x3bdcfdde, "");
SYMBOL_CRC(rtw89_fw_h2c_default_dmac_tbl_v2, 0x36a27ef3, "");
SYMBOL_CRC(rtw89_fw_h2c_ba_cam, 0x42e5e080, "");
SYMBOL_CRC(rtw89_fw_h2c_ba_cam_v1, 0xa1e03c8e, "");
SYMBOL_CRC(rtw89_fw_h2c_default_cmac_tbl, 0x4868d2ff, "");
SYMBOL_CRC(rtw89_fw_h2c_default_cmac_tbl_g7, 0x90773d1c, "");
SYMBOL_CRC(rtw89_fw_h2c_assoc_cmac_tbl, 0xc3a612a0, "");
SYMBOL_CRC(rtw89_fw_h2c_assoc_cmac_tbl_g7, 0x40b16ce3, "");
SYMBOL_CRC(rtw89_fw_h2c_ampdu_cmac_tbl_g7, 0x64b9760a, "");
SYMBOL_CRC(rtw89_fw_h2c_txtime_cmac_tbl, 0x27d11e1b, "");
SYMBOL_CRC(rtw89_fw_h2c_txtime_cmac_tbl_g7, 0x0dc7e3a3, "");
SYMBOL_CRC(rtw89_fw_h2c_update_beacon, 0x8dc9d524, "");
SYMBOL_CRC(rtw89_fw_h2c_update_beacon_be, 0x8e373378, "");
SYMBOL_CRC(rtw89_fw_h2c_rf_ntfy_mcc, 0x0c84baa1, "");
SYMBOL_CRC(rtw89_fw_h2c_rf_ps_info, 0x3ea37201, "");
SYMBOL_CRC(rtw89_read_efuse_ver, 0x2d175ba9, "");
SYMBOL_CRC(rtw89_query_sar, 0x9432fa26, "");
SYMBOL_CRC(rtw89_tas_chanctx_cb, 0x9fe7a911, "");
SYMBOL_CRC(rtw89_btc_set_policy, 0x26511b67, "");
SYMBOL_CRC(rtw89_btc_set_policy_v1, 0xa4bbcec3, "");
SYMBOL_CRC(rtw89_btc_ntfy_wl_rfk, 0xe076ecc6, "");
SYMBOL_CRC(rtw89_btc_ntfy_preserve_bt_time, 0x5c00e72c, "");
SYMBOL_CRC(rtw89_btc_ntfy_conn_rfk, 0xf77e506b, "");
SYMBOL_CRC(__rtw89_mgnt_chan_get, 0xa986b9b5, "");
SYMBOL_CRC(rtw89_ser_notify, 0xbffbe7fe, "");
SYMBOL_CRC(rtw89_linear_to_db_quarter, 0x5d40cc27, "");
SYMBOL_CRC(rtw89_linear_to_db, 0x7205c2b9, "");
SYMBOL_CRC(rtw89_db_quarter_to_linear, 0xb4367fa6, "");
SYMBOL_CRC(rtw89_db_to_linear, 0x108e70a2, "");
SYMBOL_CRC(rtw89_debug_mask, 0xe3f57b04, "");
SYMBOL_CRC(rtw89_debug, 0xde11915d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4b22d11d, "wiphy_locked_debugfs_read" },
	{ 0x407acf81, "ieee80211_stop_tx_ba_session" },
	{ 0x9b2fe92f, "ieee80211_gtk_rekey_notify" },
	{ 0x18967633, "device_set_wakeup_enable" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe4722cdd, "ieee80211_connection_loss" },
	{ 0x5b5b0d5f, "ieee80211_report_wowlan_wakeup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xcf01fb27, "is_acpi_device_node" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x890e4992, "__ieee80211_schedule_txq" },
	{ 0x34d21833, "ieee80211_txq_get_depth" },
	{ 0x4239c21d, "param_ops_uint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa193b721, "devm_kmalloc" },
	{ 0x28aa2b4e, "cfg80211_bss_iter" },
	{ 0xde87b83, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd2e4ecca, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x46122b0a, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1e8f664c, "ieee80211_free_hw" },
	{ 0x10ee0683, "ieee80211_probereq_get" },
	{ 0xef06c62e, "ieee80211_txq_schedule_start" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2baa2d4b, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0x88699397, "ieee80211_iterate_stations_atomic" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x810d7313, "ieee80211_start_tx_ba_session" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x6c9cb242, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xda778c81, "ieee80211_nullfunc_get" },
	{ 0xb8aff722, "pcpu_hot" },
	{ 0x607474b2, "ieee80211_pspoll_get" },
	{ 0xbada1a7, "ieee80211_register_hw" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xee8d2ce2, "ieee80211_restart_hw" },
	{ 0x252d1c8c, "__netif_napi_del" },
	{ 0x424e9ed0, "ether_setup" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd5dc7e1a, "pskb_expand_head" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3c744e95, "cfg80211_calculate_bitrate" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfa2b637c, "ieee80211_find_sta" },
	{ 0xd5161e93, "alloc_netdev_mqs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0x3d519c5, "ieee80211_sta_uapsd_trigger" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6ec1fd06, "wiphy_delayed_work_queue" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8971d842, "__napi_schedule" },
	{ 0x1dab0efe, "ieee80211_set_key_rx_seq" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9431f332, "_dev_info" },
	{ 0xd513779, "skb_queue_tail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf62ed744, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x5322663e, "acpi_get_handle" },
	{ 0x8c3f316b, "wiphy_to_ieee80211_hw" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfa12ea1e, "wiphy_locked_debugfs_write" },
	{ 0xae4ef811, "ieee80211_gtk_rekey_add" },
	{ 0xa3334cad, "ieee80211_queue_delayed_work" },
	{ 0x32858004, "devm_kmemdup" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x57c7c6b2, "devm_kfree" },
	{ 0x9c1f1e35, "_dev_err" },
	{ 0xb7c0f443, "sort" },
	{ 0xfccc5f93, "simple_open" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc494c34b, "ieee80211_next_txq" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x30b86e62, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa4e77f65, "ieee80211_remain_on_channel_expired" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f17e12, "skb_push" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0xfcff1462, "napi_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xe268cc28, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x597ec467, "ieee80211_sta_pspoll" },
	{ 0xe7b0544a, "ieee80211_wake_queues" },
	{ 0x612dc4db, "free_netdev" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x8a80ba69, "wiphy_work_queue" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x61e188b4, "ieee80211_iter_keys_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x164804fb, "ieee80211_free_txskb" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa7843814, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e980808, "ieee80211_alloc_hw_nm" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2bd6de00, "ieee80211_tx_dequeue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x7fa45848, "wiphy_work_cancel" },
	{ 0xfb578fc5, "memset" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0x85de3f6f, "wiphy_delayed_work_timer" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x58bdcdd1, "wiphy_delayed_work_cancel" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd599afbb, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x4804c2c9, "ieee80211_ready_on_channel" },
	{ 0x3f7396e9, "ieee80211_stop_queues" },
	{ 0xafbfde5b, "skb_trim" },
	{ 0x7f09635f, "skb_unlink" },
	{ 0x3aca71a1, "cfg80211_get_ies_channel_number" },
	{ 0x3048cef5, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37100105, "wiphy_rfkill_start_polling" },
	{ 0xea9a721b, "debugfs_create_file" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x521e7ec6, "ieee80211_scan_completed" },
	{ 0x7550badc, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x364b243d, "param_ops_bool" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd72aeea0, "ieee80211_unregister_hw" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x16703a58, "wiphy_delayed_work_flush" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xbd8f564c, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5d3b8025, "skb_copy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x46ae4ebf, "cfg80211_chandef_create" },
	{ 0x5706e252, "ieee80211_cqm_rssi_notify" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd0c3484c, "kmalloc_trace" },
	{ 0xe0ea5d2a, "ieee80211_queue_work" },
	{ 0x7f11ddf, "napi_schedule_prep" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd7e2a28c, "ieee80211_set_active_links" },
	{ 0x754d539c, "strlen" },
	{ 0x48949aaa, "napi_disable" },
	{ 0xe2067d34, "ieee80211_sta_ps_transition" },
	{ 0x84d1fa3b, "dev_kfree_skb_any_reason" },
	{ 0x7ed41778, "_dev_printk" },
	{ 0x4292a372, "debugfs_create_dir" },
	{ 0xc1b4d2f3, "generic_file_llseek" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1bff00c8, "kmalloc_caches" },
	{ 0x6195c16a, "ieee80211_csa_finish" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf6890c1b, "ieee80211_rx_napi" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "43963110F0C4473060FB729");
