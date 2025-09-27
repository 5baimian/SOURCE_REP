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

KSYMTAB_DATA(rtw8852bx_info, "", "");

SYMBOL_CRC(rtw8852bx_info, 0x1aee2ec0, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb70424ff, "rtw89_phy_read32_idx" },
	{ 0xd4798f52, "rtw89_decode_chan_idx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x45b6e15c, "rtw89_phy_get_txsc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x108e70a2, "rtw89_db_to_linear" },
	{ 0x55a8c929, "rtw89_phy_ant_gain_pwr_offset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9431f332, "_dev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x69a10b8b, "rtw89_mac_coex_init" },
	{ 0x1362aec4, "rtw89_phy_write32_idx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd676f2b2, "_dev_warn" },
	{ 0xaed7404b, "rtw89_phy_write_reg3_tbl" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9432fa26, "rtw89_query_sar" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7205c2b9, "rtw89_linear_to_db" },
	{ 0xd73c2f20, "rtw89_encode_chan_idx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xde11915d, "rtw89_debug" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "rtw89_core_git,cfg80211");


MODULE_INFO(srcversion, "FB7E76DB50AAA99AFDC40ED");
