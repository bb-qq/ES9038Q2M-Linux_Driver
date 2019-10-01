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
	{ 0x71885092, "platform_driver_unregister" },
	{ 0xa97737b4, "__platform_driver_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5eb05373, "gpiod_set_value_cansleep" },
	{ 0x1681cf71, "snd_soc_get_pcm_runtime" },
	{ 0x5ade57f0, "_dev_err" },
	{ 0x1cd19c62, "snd_soc_register_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x11edd7b3, "devm_gpiod_get_optional" },
	{ 0x795cc3fb, "of_parse_phandle" },
	{ 0xb59b06fc, "_dev_info" },
	{ 0x5e5fe0dd, "snd_soc_dai_set_bclk_ratio" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x41c2c5c2, "snd_soc_unregister_card" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Ctuxiong,hifibunny3-q2m");
MODULE_ALIAS("of:N*T*Ctuxiong,hifibunny3-q2mC*");

MODULE_INFO(srcversion, "A6A7086EB00F1E1BF42921A");
