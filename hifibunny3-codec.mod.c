#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
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
__used
__attribute__((section("__versions"))) = {
	{ 0xf230cadf, "module_layout" },
	{ 0x239b9378, "snd_soc_put_enum_double" },
	{ 0x49a2e8d0, "snd_soc_get_enum_double" },
	{ 0xea9acad8, "snd_soc_info_enum_double" },
	{ 0xb75ee07b, "snd_soc_put_volsw" },
	{ 0x41ad4c04, "snd_soc_get_volsw" },
	{ 0xca877af1, "snd_soc_info_volsw" },
	{ 0x7318c220, "i2c_del_driver" },
	{ 0xcc97b913, "i2c_register_driver" },
	{ 0xc12d34fa, "snd_soc_register_component" },
	{ 0xf606c4f9, "devm_kmalloc" },
	{ 0xd474a39b, "__devm_regmap_init_i2c" },
	{ 0x5ade57f0, "_dev_err" },
	{ 0xc99c1e2, "snd_pcm_hw_constraint_list" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x73e2665c, "snd_soc_component_write" },
	{ 0x145eaa52, "snd_soc_component_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4df04e1d, "snd_soc_unregister_component" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Ctuxiong,hifibunny3-codec");
MODULE_ALIAS("of:N*T*Ctuxiong,hifibunny3-codecC*");
MODULE_ALIAS("i2c:hifibunny3-codec");

MODULE_INFO(srcversion, "A88E9214D4FD41C7C485261");
