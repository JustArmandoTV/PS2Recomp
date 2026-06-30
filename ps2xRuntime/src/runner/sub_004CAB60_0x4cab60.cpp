#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CAB60
// Address: 0x4cab60 - 0x4cb640
void sub_004CAB60_0x4cab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAB60_0x4cab60");
#endif

    switch (ctx->pc) {
        case 0x4cab60u: goto label_4cab60;
        case 0x4cab64u: goto label_4cab64;
        case 0x4cab68u: goto label_4cab68;
        case 0x4cab6cu: goto label_4cab6c;
        case 0x4cab70u: goto label_4cab70;
        case 0x4cab74u: goto label_4cab74;
        case 0x4cab78u: goto label_4cab78;
        case 0x4cab7cu: goto label_4cab7c;
        case 0x4cab80u: goto label_4cab80;
        case 0x4cab84u: goto label_4cab84;
        case 0x4cab88u: goto label_4cab88;
        case 0x4cab8cu: goto label_4cab8c;
        case 0x4cab90u: goto label_4cab90;
        case 0x4cab94u: goto label_4cab94;
        case 0x4cab98u: goto label_4cab98;
        case 0x4cab9cu: goto label_4cab9c;
        case 0x4caba0u: goto label_4caba0;
        case 0x4caba4u: goto label_4caba4;
        case 0x4caba8u: goto label_4caba8;
        case 0x4cabacu: goto label_4cabac;
        case 0x4cabb0u: goto label_4cabb0;
        case 0x4cabb4u: goto label_4cabb4;
        case 0x4cabb8u: goto label_4cabb8;
        case 0x4cabbcu: goto label_4cabbc;
        case 0x4cabc0u: goto label_4cabc0;
        case 0x4cabc4u: goto label_4cabc4;
        case 0x4cabc8u: goto label_4cabc8;
        case 0x4cabccu: goto label_4cabcc;
        case 0x4cabd0u: goto label_4cabd0;
        case 0x4cabd4u: goto label_4cabd4;
        case 0x4cabd8u: goto label_4cabd8;
        case 0x4cabdcu: goto label_4cabdc;
        case 0x4cabe0u: goto label_4cabe0;
        case 0x4cabe4u: goto label_4cabe4;
        case 0x4cabe8u: goto label_4cabe8;
        case 0x4cabecu: goto label_4cabec;
        case 0x4cabf0u: goto label_4cabf0;
        case 0x4cabf4u: goto label_4cabf4;
        case 0x4cabf8u: goto label_4cabf8;
        case 0x4cabfcu: goto label_4cabfc;
        case 0x4cac00u: goto label_4cac00;
        case 0x4cac04u: goto label_4cac04;
        case 0x4cac08u: goto label_4cac08;
        case 0x4cac0cu: goto label_4cac0c;
        case 0x4cac10u: goto label_4cac10;
        case 0x4cac14u: goto label_4cac14;
        case 0x4cac18u: goto label_4cac18;
        case 0x4cac1cu: goto label_4cac1c;
        case 0x4cac20u: goto label_4cac20;
        case 0x4cac24u: goto label_4cac24;
        case 0x4cac28u: goto label_4cac28;
        case 0x4cac2cu: goto label_4cac2c;
        case 0x4cac30u: goto label_4cac30;
        case 0x4cac34u: goto label_4cac34;
        case 0x4cac38u: goto label_4cac38;
        case 0x4cac3cu: goto label_4cac3c;
        case 0x4cac40u: goto label_4cac40;
        case 0x4cac44u: goto label_4cac44;
        case 0x4cac48u: goto label_4cac48;
        case 0x4cac4cu: goto label_4cac4c;
        case 0x4cac50u: goto label_4cac50;
        case 0x4cac54u: goto label_4cac54;
        case 0x4cac58u: goto label_4cac58;
        case 0x4cac5cu: goto label_4cac5c;
        case 0x4cac60u: goto label_4cac60;
        case 0x4cac64u: goto label_4cac64;
        case 0x4cac68u: goto label_4cac68;
        case 0x4cac6cu: goto label_4cac6c;
        case 0x4cac70u: goto label_4cac70;
        case 0x4cac74u: goto label_4cac74;
        case 0x4cac78u: goto label_4cac78;
        case 0x4cac7cu: goto label_4cac7c;
        case 0x4cac80u: goto label_4cac80;
        case 0x4cac84u: goto label_4cac84;
        case 0x4cac88u: goto label_4cac88;
        case 0x4cac8cu: goto label_4cac8c;
        case 0x4cac90u: goto label_4cac90;
        case 0x4cac94u: goto label_4cac94;
        case 0x4cac98u: goto label_4cac98;
        case 0x4cac9cu: goto label_4cac9c;
        case 0x4caca0u: goto label_4caca0;
        case 0x4caca4u: goto label_4caca4;
        case 0x4caca8u: goto label_4caca8;
        case 0x4cacacu: goto label_4cacac;
        case 0x4cacb0u: goto label_4cacb0;
        case 0x4cacb4u: goto label_4cacb4;
        case 0x4cacb8u: goto label_4cacb8;
        case 0x4cacbcu: goto label_4cacbc;
        case 0x4cacc0u: goto label_4cacc0;
        case 0x4cacc4u: goto label_4cacc4;
        case 0x4cacc8u: goto label_4cacc8;
        case 0x4cacccu: goto label_4caccc;
        case 0x4cacd0u: goto label_4cacd0;
        case 0x4cacd4u: goto label_4cacd4;
        case 0x4cacd8u: goto label_4cacd8;
        case 0x4cacdcu: goto label_4cacdc;
        case 0x4cace0u: goto label_4cace0;
        case 0x4cace4u: goto label_4cace4;
        case 0x4cace8u: goto label_4cace8;
        case 0x4cacecu: goto label_4cacec;
        case 0x4cacf0u: goto label_4cacf0;
        case 0x4cacf4u: goto label_4cacf4;
        case 0x4cacf8u: goto label_4cacf8;
        case 0x4cacfcu: goto label_4cacfc;
        case 0x4cad00u: goto label_4cad00;
        case 0x4cad04u: goto label_4cad04;
        case 0x4cad08u: goto label_4cad08;
        case 0x4cad0cu: goto label_4cad0c;
        case 0x4cad10u: goto label_4cad10;
        case 0x4cad14u: goto label_4cad14;
        case 0x4cad18u: goto label_4cad18;
        case 0x4cad1cu: goto label_4cad1c;
        case 0x4cad20u: goto label_4cad20;
        case 0x4cad24u: goto label_4cad24;
        case 0x4cad28u: goto label_4cad28;
        case 0x4cad2cu: goto label_4cad2c;
        case 0x4cad30u: goto label_4cad30;
        case 0x4cad34u: goto label_4cad34;
        case 0x4cad38u: goto label_4cad38;
        case 0x4cad3cu: goto label_4cad3c;
        case 0x4cad40u: goto label_4cad40;
        case 0x4cad44u: goto label_4cad44;
        case 0x4cad48u: goto label_4cad48;
        case 0x4cad4cu: goto label_4cad4c;
        case 0x4cad50u: goto label_4cad50;
        case 0x4cad54u: goto label_4cad54;
        case 0x4cad58u: goto label_4cad58;
        case 0x4cad5cu: goto label_4cad5c;
        case 0x4cad60u: goto label_4cad60;
        case 0x4cad64u: goto label_4cad64;
        case 0x4cad68u: goto label_4cad68;
        case 0x4cad6cu: goto label_4cad6c;
        case 0x4cad70u: goto label_4cad70;
        case 0x4cad74u: goto label_4cad74;
        case 0x4cad78u: goto label_4cad78;
        case 0x4cad7cu: goto label_4cad7c;
        case 0x4cad80u: goto label_4cad80;
        case 0x4cad84u: goto label_4cad84;
        case 0x4cad88u: goto label_4cad88;
        case 0x4cad8cu: goto label_4cad8c;
        case 0x4cad90u: goto label_4cad90;
        case 0x4cad94u: goto label_4cad94;
        case 0x4cad98u: goto label_4cad98;
        case 0x4cad9cu: goto label_4cad9c;
        case 0x4cada0u: goto label_4cada0;
        case 0x4cada4u: goto label_4cada4;
        case 0x4cada8u: goto label_4cada8;
        case 0x4cadacu: goto label_4cadac;
        case 0x4cadb0u: goto label_4cadb0;
        case 0x4cadb4u: goto label_4cadb4;
        case 0x4cadb8u: goto label_4cadb8;
        case 0x4cadbcu: goto label_4cadbc;
        case 0x4cadc0u: goto label_4cadc0;
        case 0x4cadc4u: goto label_4cadc4;
        case 0x4cadc8u: goto label_4cadc8;
        case 0x4cadccu: goto label_4cadcc;
        case 0x4cadd0u: goto label_4cadd0;
        case 0x4cadd4u: goto label_4cadd4;
        case 0x4cadd8u: goto label_4cadd8;
        case 0x4caddcu: goto label_4caddc;
        case 0x4cade0u: goto label_4cade0;
        case 0x4cade4u: goto label_4cade4;
        case 0x4cade8u: goto label_4cade8;
        case 0x4cadecu: goto label_4cadec;
        case 0x4cadf0u: goto label_4cadf0;
        case 0x4cadf4u: goto label_4cadf4;
        case 0x4cadf8u: goto label_4cadf8;
        case 0x4cadfcu: goto label_4cadfc;
        case 0x4cae00u: goto label_4cae00;
        case 0x4cae04u: goto label_4cae04;
        case 0x4cae08u: goto label_4cae08;
        case 0x4cae0cu: goto label_4cae0c;
        case 0x4cae10u: goto label_4cae10;
        case 0x4cae14u: goto label_4cae14;
        case 0x4cae18u: goto label_4cae18;
        case 0x4cae1cu: goto label_4cae1c;
        case 0x4cae20u: goto label_4cae20;
        case 0x4cae24u: goto label_4cae24;
        case 0x4cae28u: goto label_4cae28;
        case 0x4cae2cu: goto label_4cae2c;
        case 0x4cae30u: goto label_4cae30;
        case 0x4cae34u: goto label_4cae34;
        case 0x4cae38u: goto label_4cae38;
        case 0x4cae3cu: goto label_4cae3c;
        case 0x4cae40u: goto label_4cae40;
        case 0x4cae44u: goto label_4cae44;
        case 0x4cae48u: goto label_4cae48;
        case 0x4cae4cu: goto label_4cae4c;
        case 0x4cae50u: goto label_4cae50;
        case 0x4cae54u: goto label_4cae54;
        case 0x4cae58u: goto label_4cae58;
        case 0x4cae5cu: goto label_4cae5c;
        case 0x4cae60u: goto label_4cae60;
        case 0x4cae64u: goto label_4cae64;
        case 0x4cae68u: goto label_4cae68;
        case 0x4cae6cu: goto label_4cae6c;
        case 0x4cae70u: goto label_4cae70;
        case 0x4cae74u: goto label_4cae74;
        case 0x4cae78u: goto label_4cae78;
        case 0x4cae7cu: goto label_4cae7c;
        case 0x4cae80u: goto label_4cae80;
        case 0x4cae84u: goto label_4cae84;
        case 0x4cae88u: goto label_4cae88;
        case 0x4cae8cu: goto label_4cae8c;
        case 0x4cae90u: goto label_4cae90;
        case 0x4cae94u: goto label_4cae94;
        case 0x4cae98u: goto label_4cae98;
        case 0x4cae9cu: goto label_4cae9c;
        case 0x4caea0u: goto label_4caea0;
        case 0x4caea4u: goto label_4caea4;
        case 0x4caea8u: goto label_4caea8;
        case 0x4caeacu: goto label_4caeac;
        case 0x4caeb0u: goto label_4caeb0;
        case 0x4caeb4u: goto label_4caeb4;
        case 0x4caeb8u: goto label_4caeb8;
        case 0x4caebcu: goto label_4caebc;
        case 0x4caec0u: goto label_4caec0;
        case 0x4caec4u: goto label_4caec4;
        case 0x4caec8u: goto label_4caec8;
        case 0x4caeccu: goto label_4caecc;
        case 0x4caed0u: goto label_4caed0;
        case 0x4caed4u: goto label_4caed4;
        case 0x4caed8u: goto label_4caed8;
        case 0x4caedcu: goto label_4caedc;
        case 0x4caee0u: goto label_4caee0;
        case 0x4caee4u: goto label_4caee4;
        case 0x4caee8u: goto label_4caee8;
        case 0x4caeecu: goto label_4caeec;
        case 0x4caef0u: goto label_4caef0;
        case 0x4caef4u: goto label_4caef4;
        case 0x4caef8u: goto label_4caef8;
        case 0x4caefcu: goto label_4caefc;
        case 0x4caf00u: goto label_4caf00;
        case 0x4caf04u: goto label_4caf04;
        case 0x4caf08u: goto label_4caf08;
        case 0x4caf0cu: goto label_4caf0c;
        case 0x4caf10u: goto label_4caf10;
        case 0x4caf14u: goto label_4caf14;
        case 0x4caf18u: goto label_4caf18;
        case 0x4caf1cu: goto label_4caf1c;
        case 0x4caf20u: goto label_4caf20;
        case 0x4caf24u: goto label_4caf24;
        case 0x4caf28u: goto label_4caf28;
        case 0x4caf2cu: goto label_4caf2c;
        case 0x4caf30u: goto label_4caf30;
        case 0x4caf34u: goto label_4caf34;
        case 0x4caf38u: goto label_4caf38;
        case 0x4caf3cu: goto label_4caf3c;
        case 0x4caf40u: goto label_4caf40;
        case 0x4caf44u: goto label_4caf44;
        case 0x4caf48u: goto label_4caf48;
        case 0x4caf4cu: goto label_4caf4c;
        case 0x4caf50u: goto label_4caf50;
        case 0x4caf54u: goto label_4caf54;
        case 0x4caf58u: goto label_4caf58;
        case 0x4caf5cu: goto label_4caf5c;
        case 0x4caf60u: goto label_4caf60;
        case 0x4caf64u: goto label_4caf64;
        case 0x4caf68u: goto label_4caf68;
        case 0x4caf6cu: goto label_4caf6c;
        case 0x4caf70u: goto label_4caf70;
        case 0x4caf74u: goto label_4caf74;
        case 0x4caf78u: goto label_4caf78;
        case 0x4caf7cu: goto label_4caf7c;
        case 0x4caf80u: goto label_4caf80;
        case 0x4caf84u: goto label_4caf84;
        case 0x4caf88u: goto label_4caf88;
        case 0x4caf8cu: goto label_4caf8c;
        case 0x4caf90u: goto label_4caf90;
        case 0x4caf94u: goto label_4caf94;
        case 0x4caf98u: goto label_4caf98;
        case 0x4caf9cu: goto label_4caf9c;
        case 0x4cafa0u: goto label_4cafa0;
        case 0x4cafa4u: goto label_4cafa4;
        case 0x4cafa8u: goto label_4cafa8;
        case 0x4cafacu: goto label_4cafac;
        case 0x4cafb0u: goto label_4cafb0;
        case 0x4cafb4u: goto label_4cafb4;
        case 0x4cafb8u: goto label_4cafb8;
        case 0x4cafbcu: goto label_4cafbc;
        case 0x4cafc0u: goto label_4cafc0;
        case 0x4cafc4u: goto label_4cafc4;
        case 0x4cafc8u: goto label_4cafc8;
        case 0x4cafccu: goto label_4cafcc;
        case 0x4cafd0u: goto label_4cafd0;
        case 0x4cafd4u: goto label_4cafd4;
        case 0x4cafd8u: goto label_4cafd8;
        case 0x4cafdcu: goto label_4cafdc;
        case 0x4cafe0u: goto label_4cafe0;
        case 0x4cafe4u: goto label_4cafe4;
        case 0x4cafe8u: goto label_4cafe8;
        case 0x4cafecu: goto label_4cafec;
        case 0x4caff0u: goto label_4caff0;
        case 0x4caff4u: goto label_4caff4;
        case 0x4caff8u: goto label_4caff8;
        case 0x4caffcu: goto label_4caffc;
        case 0x4cb000u: goto label_4cb000;
        case 0x4cb004u: goto label_4cb004;
        case 0x4cb008u: goto label_4cb008;
        case 0x4cb00cu: goto label_4cb00c;
        case 0x4cb010u: goto label_4cb010;
        case 0x4cb014u: goto label_4cb014;
        case 0x4cb018u: goto label_4cb018;
        case 0x4cb01cu: goto label_4cb01c;
        case 0x4cb020u: goto label_4cb020;
        case 0x4cb024u: goto label_4cb024;
        case 0x4cb028u: goto label_4cb028;
        case 0x4cb02cu: goto label_4cb02c;
        case 0x4cb030u: goto label_4cb030;
        case 0x4cb034u: goto label_4cb034;
        case 0x4cb038u: goto label_4cb038;
        case 0x4cb03cu: goto label_4cb03c;
        case 0x4cb040u: goto label_4cb040;
        case 0x4cb044u: goto label_4cb044;
        case 0x4cb048u: goto label_4cb048;
        case 0x4cb04cu: goto label_4cb04c;
        case 0x4cb050u: goto label_4cb050;
        case 0x4cb054u: goto label_4cb054;
        case 0x4cb058u: goto label_4cb058;
        case 0x4cb05cu: goto label_4cb05c;
        case 0x4cb060u: goto label_4cb060;
        case 0x4cb064u: goto label_4cb064;
        case 0x4cb068u: goto label_4cb068;
        case 0x4cb06cu: goto label_4cb06c;
        case 0x4cb070u: goto label_4cb070;
        case 0x4cb074u: goto label_4cb074;
        case 0x4cb078u: goto label_4cb078;
        case 0x4cb07cu: goto label_4cb07c;
        case 0x4cb080u: goto label_4cb080;
        case 0x4cb084u: goto label_4cb084;
        case 0x4cb088u: goto label_4cb088;
        case 0x4cb08cu: goto label_4cb08c;
        case 0x4cb090u: goto label_4cb090;
        case 0x4cb094u: goto label_4cb094;
        case 0x4cb098u: goto label_4cb098;
        case 0x4cb09cu: goto label_4cb09c;
        case 0x4cb0a0u: goto label_4cb0a0;
        case 0x4cb0a4u: goto label_4cb0a4;
        case 0x4cb0a8u: goto label_4cb0a8;
        case 0x4cb0acu: goto label_4cb0ac;
        case 0x4cb0b0u: goto label_4cb0b0;
        case 0x4cb0b4u: goto label_4cb0b4;
        case 0x4cb0b8u: goto label_4cb0b8;
        case 0x4cb0bcu: goto label_4cb0bc;
        case 0x4cb0c0u: goto label_4cb0c0;
        case 0x4cb0c4u: goto label_4cb0c4;
        case 0x4cb0c8u: goto label_4cb0c8;
        case 0x4cb0ccu: goto label_4cb0cc;
        case 0x4cb0d0u: goto label_4cb0d0;
        case 0x4cb0d4u: goto label_4cb0d4;
        case 0x4cb0d8u: goto label_4cb0d8;
        case 0x4cb0dcu: goto label_4cb0dc;
        case 0x4cb0e0u: goto label_4cb0e0;
        case 0x4cb0e4u: goto label_4cb0e4;
        case 0x4cb0e8u: goto label_4cb0e8;
        case 0x4cb0ecu: goto label_4cb0ec;
        case 0x4cb0f0u: goto label_4cb0f0;
        case 0x4cb0f4u: goto label_4cb0f4;
        case 0x4cb0f8u: goto label_4cb0f8;
        case 0x4cb0fcu: goto label_4cb0fc;
        case 0x4cb100u: goto label_4cb100;
        case 0x4cb104u: goto label_4cb104;
        case 0x4cb108u: goto label_4cb108;
        case 0x4cb10cu: goto label_4cb10c;
        case 0x4cb110u: goto label_4cb110;
        case 0x4cb114u: goto label_4cb114;
        case 0x4cb118u: goto label_4cb118;
        case 0x4cb11cu: goto label_4cb11c;
        case 0x4cb120u: goto label_4cb120;
        case 0x4cb124u: goto label_4cb124;
        case 0x4cb128u: goto label_4cb128;
        case 0x4cb12cu: goto label_4cb12c;
        case 0x4cb130u: goto label_4cb130;
        case 0x4cb134u: goto label_4cb134;
        case 0x4cb138u: goto label_4cb138;
        case 0x4cb13cu: goto label_4cb13c;
        case 0x4cb140u: goto label_4cb140;
        case 0x4cb144u: goto label_4cb144;
        case 0x4cb148u: goto label_4cb148;
        case 0x4cb14cu: goto label_4cb14c;
        case 0x4cb150u: goto label_4cb150;
        case 0x4cb154u: goto label_4cb154;
        case 0x4cb158u: goto label_4cb158;
        case 0x4cb15cu: goto label_4cb15c;
        case 0x4cb160u: goto label_4cb160;
        case 0x4cb164u: goto label_4cb164;
        case 0x4cb168u: goto label_4cb168;
        case 0x4cb16cu: goto label_4cb16c;
        case 0x4cb170u: goto label_4cb170;
        case 0x4cb174u: goto label_4cb174;
        case 0x4cb178u: goto label_4cb178;
        case 0x4cb17cu: goto label_4cb17c;
        case 0x4cb180u: goto label_4cb180;
        case 0x4cb184u: goto label_4cb184;
        case 0x4cb188u: goto label_4cb188;
        case 0x4cb18cu: goto label_4cb18c;
        case 0x4cb190u: goto label_4cb190;
        case 0x4cb194u: goto label_4cb194;
        case 0x4cb198u: goto label_4cb198;
        case 0x4cb19cu: goto label_4cb19c;
        case 0x4cb1a0u: goto label_4cb1a0;
        case 0x4cb1a4u: goto label_4cb1a4;
        case 0x4cb1a8u: goto label_4cb1a8;
        case 0x4cb1acu: goto label_4cb1ac;
        case 0x4cb1b0u: goto label_4cb1b0;
        case 0x4cb1b4u: goto label_4cb1b4;
        case 0x4cb1b8u: goto label_4cb1b8;
        case 0x4cb1bcu: goto label_4cb1bc;
        case 0x4cb1c0u: goto label_4cb1c0;
        case 0x4cb1c4u: goto label_4cb1c4;
        case 0x4cb1c8u: goto label_4cb1c8;
        case 0x4cb1ccu: goto label_4cb1cc;
        case 0x4cb1d0u: goto label_4cb1d0;
        case 0x4cb1d4u: goto label_4cb1d4;
        case 0x4cb1d8u: goto label_4cb1d8;
        case 0x4cb1dcu: goto label_4cb1dc;
        case 0x4cb1e0u: goto label_4cb1e0;
        case 0x4cb1e4u: goto label_4cb1e4;
        case 0x4cb1e8u: goto label_4cb1e8;
        case 0x4cb1ecu: goto label_4cb1ec;
        case 0x4cb1f0u: goto label_4cb1f0;
        case 0x4cb1f4u: goto label_4cb1f4;
        case 0x4cb1f8u: goto label_4cb1f8;
        case 0x4cb1fcu: goto label_4cb1fc;
        case 0x4cb200u: goto label_4cb200;
        case 0x4cb204u: goto label_4cb204;
        case 0x4cb208u: goto label_4cb208;
        case 0x4cb20cu: goto label_4cb20c;
        case 0x4cb210u: goto label_4cb210;
        case 0x4cb214u: goto label_4cb214;
        case 0x4cb218u: goto label_4cb218;
        case 0x4cb21cu: goto label_4cb21c;
        case 0x4cb220u: goto label_4cb220;
        case 0x4cb224u: goto label_4cb224;
        case 0x4cb228u: goto label_4cb228;
        case 0x4cb22cu: goto label_4cb22c;
        case 0x4cb230u: goto label_4cb230;
        case 0x4cb234u: goto label_4cb234;
        case 0x4cb238u: goto label_4cb238;
        case 0x4cb23cu: goto label_4cb23c;
        case 0x4cb240u: goto label_4cb240;
        case 0x4cb244u: goto label_4cb244;
        case 0x4cb248u: goto label_4cb248;
        case 0x4cb24cu: goto label_4cb24c;
        case 0x4cb250u: goto label_4cb250;
        case 0x4cb254u: goto label_4cb254;
        case 0x4cb258u: goto label_4cb258;
        case 0x4cb25cu: goto label_4cb25c;
        case 0x4cb260u: goto label_4cb260;
        case 0x4cb264u: goto label_4cb264;
        case 0x4cb268u: goto label_4cb268;
        case 0x4cb26cu: goto label_4cb26c;
        case 0x4cb270u: goto label_4cb270;
        case 0x4cb274u: goto label_4cb274;
        case 0x4cb278u: goto label_4cb278;
        case 0x4cb27cu: goto label_4cb27c;
        case 0x4cb280u: goto label_4cb280;
        case 0x4cb284u: goto label_4cb284;
        case 0x4cb288u: goto label_4cb288;
        case 0x4cb28cu: goto label_4cb28c;
        case 0x4cb290u: goto label_4cb290;
        case 0x4cb294u: goto label_4cb294;
        case 0x4cb298u: goto label_4cb298;
        case 0x4cb29cu: goto label_4cb29c;
        case 0x4cb2a0u: goto label_4cb2a0;
        case 0x4cb2a4u: goto label_4cb2a4;
        case 0x4cb2a8u: goto label_4cb2a8;
        case 0x4cb2acu: goto label_4cb2ac;
        case 0x4cb2b0u: goto label_4cb2b0;
        case 0x4cb2b4u: goto label_4cb2b4;
        case 0x4cb2b8u: goto label_4cb2b8;
        case 0x4cb2bcu: goto label_4cb2bc;
        case 0x4cb2c0u: goto label_4cb2c0;
        case 0x4cb2c4u: goto label_4cb2c4;
        case 0x4cb2c8u: goto label_4cb2c8;
        case 0x4cb2ccu: goto label_4cb2cc;
        case 0x4cb2d0u: goto label_4cb2d0;
        case 0x4cb2d4u: goto label_4cb2d4;
        case 0x4cb2d8u: goto label_4cb2d8;
        case 0x4cb2dcu: goto label_4cb2dc;
        case 0x4cb2e0u: goto label_4cb2e0;
        case 0x4cb2e4u: goto label_4cb2e4;
        case 0x4cb2e8u: goto label_4cb2e8;
        case 0x4cb2ecu: goto label_4cb2ec;
        case 0x4cb2f0u: goto label_4cb2f0;
        case 0x4cb2f4u: goto label_4cb2f4;
        case 0x4cb2f8u: goto label_4cb2f8;
        case 0x4cb2fcu: goto label_4cb2fc;
        case 0x4cb300u: goto label_4cb300;
        case 0x4cb304u: goto label_4cb304;
        case 0x4cb308u: goto label_4cb308;
        case 0x4cb30cu: goto label_4cb30c;
        case 0x4cb310u: goto label_4cb310;
        case 0x4cb314u: goto label_4cb314;
        case 0x4cb318u: goto label_4cb318;
        case 0x4cb31cu: goto label_4cb31c;
        case 0x4cb320u: goto label_4cb320;
        case 0x4cb324u: goto label_4cb324;
        case 0x4cb328u: goto label_4cb328;
        case 0x4cb32cu: goto label_4cb32c;
        case 0x4cb330u: goto label_4cb330;
        case 0x4cb334u: goto label_4cb334;
        case 0x4cb338u: goto label_4cb338;
        case 0x4cb33cu: goto label_4cb33c;
        case 0x4cb340u: goto label_4cb340;
        case 0x4cb344u: goto label_4cb344;
        case 0x4cb348u: goto label_4cb348;
        case 0x4cb34cu: goto label_4cb34c;
        case 0x4cb350u: goto label_4cb350;
        case 0x4cb354u: goto label_4cb354;
        case 0x4cb358u: goto label_4cb358;
        case 0x4cb35cu: goto label_4cb35c;
        case 0x4cb360u: goto label_4cb360;
        case 0x4cb364u: goto label_4cb364;
        case 0x4cb368u: goto label_4cb368;
        case 0x4cb36cu: goto label_4cb36c;
        case 0x4cb370u: goto label_4cb370;
        case 0x4cb374u: goto label_4cb374;
        case 0x4cb378u: goto label_4cb378;
        case 0x4cb37cu: goto label_4cb37c;
        case 0x4cb380u: goto label_4cb380;
        case 0x4cb384u: goto label_4cb384;
        case 0x4cb388u: goto label_4cb388;
        case 0x4cb38cu: goto label_4cb38c;
        case 0x4cb390u: goto label_4cb390;
        case 0x4cb394u: goto label_4cb394;
        case 0x4cb398u: goto label_4cb398;
        case 0x4cb39cu: goto label_4cb39c;
        case 0x4cb3a0u: goto label_4cb3a0;
        case 0x4cb3a4u: goto label_4cb3a4;
        case 0x4cb3a8u: goto label_4cb3a8;
        case 0x4cb3acu: goto label_4cb3ac;
        case 0x4cb3b0u: goto label_4cb3b0;
        case 0x4cb3b4u: goto label_4cb3b4;
        case 0x4cb3b8u: goto label_4cb3b8;
        case 0x4cb3bcu: goto label_4cb3bc;
        case 0x4cb3c0u: goto label_4cb3c0;
        case 0x4cb3c4u: goto label_4cb3c4;
        case 0x4cb3c8u: goto label_4cb3c8;
        case 0x4cb3ccu: goto label_4cb3cc;
        case 0x4cb3d0u: goto label_4cb3d0;
        case 0x4cb3d4u: goto label_4cb3d4;
        case 0x4cb3d8u: goto label_4cb3d8;
        case 0x4cb3dcu: goto label_4cb3dc;
        case 0x4cb3e0u: goto label_4cb3e0;
        case 0x4cb3e4u: goto label_4cb3e4;
        case 0x4cb3e8u: goto label_4cb3e8;
        case 0x4cb3ecu: goto label_4cb3ec;
        case 0x4cb3f0u: goto label_4cb3f0;
        case 0x4cb3f4u: goto label_4cb3f4;
        case 0x4cb3f8u: goto label_4cb3f8;
        case 0x4cb3fcu: goto label_4cb3fc;
        case 0x4cb400u: goto label_4cb400;
        case 0x4cb404u: goto label_4cb404;
        case 0x4cb408u: goto label_4cb408;
        case 0x4cb40cu: goto label_4cb40c;
        case 0x4cb410u: goto label_4cb410;
        case 0x4cb414u: goto label_4cb414;
        case 0x4cb418u: goto label_4cb418;
        case 0x4cb41cu: goto label_4cb41c;
        case 0x4cb420u: goto label_4cb420;
        case 0x4cb424u: goto label_4cb424;
        case 0x4cb428u: goto label_4cb428;
        case 0x4cb42cu: goto label_4cb42c;
        case 0x4cb430u: goto label_4cb430;
        case 0x4cb434u: goto label_4cb434;
        case 0x4cb438u: goto label_4cb438;
        case 0x4cb43cu: goto label_4cb43c;
        case 0x4cb440u: goto label_4cb440;
        case 0x4cb444u: goto label_4cb444;
        case 0x4cb448u: goto label_4cb448;
        case 0x4cb44cu: goto label_4cb44c;
        case 0x4cb450u: goto label_4cb450;
        case 0x4cb454u: goto label_4cb454;
        case 0x4cb458u: goto label_4cb458;
        case 0x4cb45cu: goto label_4cb45c;
        case 0x4cb460u: goto label_4cb460;
        case 0x4cb464u: goto label_4cb464;
        case 0x4cb468u: goto label_4cb468;
        case 0x4cb46cu: goto label_4cb46c;
        case 0x4cb470u: goto label_4cb470;
        case 0x4cb474u: goto label_4cb474;
        case 0x4cb478u: goto label_4cb478;
        case 0x4cb47cu: goto label_4cb47c;
        case 0x4cb480u: goto label_4cb480;
        case 0x4cb484u: goto label_4cb484;
        case 0x4cb488u: goto label_4cb488;
        case 0x4cb48cu: goto label_4cb48c;
        case 0x4cb490u: goto label_4cb490;
        case 0x4cb494u: goto label_4cb494;
        case 0x4cb498u: goto label_4cb498;
        case 0x4cb49cu: goto label_4cb49c;
        case 0x4cb4a0u: goto label_4cb4a0;
        case 0x4cb4a4u: goto label_4cb4a4;
        case 0x4cb4a8u: goto label_4cb4a8;
        case 0x4cb4acu: goto label_4cb4ac;
        case 0x4cb4b0u: goto label_4cb4b0;
        case 0x4cb4b4u: goto label_4cb4b4;
        case 0x4cb4b8u: goto label_4cb4b8;
        case 0x4cb4bcu: goto label_4cb4bc;
        case 0x4cb4c0u: goto label_4cb4c0;
        case 0x4cb4c4u: goto label_4cb4c4;
        case 0x4cb4c8u: goto label_4cb4c8;
        case 0x4cb4ccu: goto label_4cb4cc;
        case 0x4cb4d0u: goto label_4cb4d0;
        case 0x4cb4d4u: goto label_4cb4d4;
        case 0x4cb4d8u: goto label_4cb4d8;
        case 0x4cb4dcu: goto label_4cb4dc;
        case 0x4cb4e0u: goto label_4cb4e0;
        case 0x4cb4e4u: goto label_4cb4e4;
        case 0x4cb4e8u: goto label_4cb4e8;
        case 0x4cb4ecu: goto label_4cb4ec;
        case 0x4cb4f0u: goto label_4cb4f0;
        case 0x4cb4f4u: goto label_4cb4f4;
        case 0x4cb4f8u: goto label_4cb4f8;
        case 0x4cb4fcu: goto label_4cb4fc;
        case 0x4cb500u: goto label_4cb500;
        case 0x4cb504u: goto label_4cb504;
        case 0x4cb508u: goto label_4cb508;
        case 0x4cb50cu: goto label_4cb50c;
        case 0x4cb510u: goto label_4cb510;
        case 0x4cb514u: goto label_4cb514;
        case 0x4cb518u: goto label_4cb518;
        case 0x4cb51cu: goto label_4cb51c;
        case 0x4cb520u: goto label_4cb520;
        case 0x4cb524u: goto label_4cb524;
        case 0x4cb528u: goto label_4cb528;
        case 0x4cb52cu: goto label_4cb52c;
        case 0x4cb530u: goto label_4cb530;
        case 0x4cb534u: goto label_4cb534;
        case 0x4cb538u: goto label_4cb538;
        case 0x4cb53cu: goto label_4cb53c;
        case 0x4cb540u: goto label_4cb540;
        case 0x4cb544u: goto label_4cb544;
        case 0x4cb548u: goto label_4cb548;
        case 0x4cb54cu: goto label_4cb54c;
        case 0x4cb550u: goto label_4cb550;
        case 0x4cb554u: goto label_4cb554;
        case 0x4cb558u: goto label_4cb558;
        case 0x4cb55cu: goto label_4cb55c;
        case 0x4cb560u: goto label_4cb560;
        case 0x4cb564u: goto label_4cb564;
        case 0x4cb568u: goto label_4cb568;
        case 0x4cb56cu: goto label_4cb56c;
        case 0x4cb570u: goto label_4cb570;
        case 0x4cb574u: goto label_4cb574;
        case 0x4cb578u: goto label_4cb578;
        case 0x4cb57cu: goto label_4cb57c;
        case 0x4cb580u: goto label_4cb580;
        case 0x4cb584u: goto label_4cb584;
        case 0x4cb588u: goto label_4cb588;
        case 0x4cb58cu: goto label_4cb58c;
        case 0x4cb590u: goto label_4cb590;
        case 0x4cb594u: goto label_4cb594;
        case 0x4cb598u: goto label_4cb598;
        case 0x4cb59cu: goto label_4cb59c;
        case 0x4cb5a0u: goto label_4cb5a0;
        case 0x4cb5a4u: goto label_4cb5a4;
        case 0x4cb5a8u: goto label_4cb5a8;
        case 0x4cb5acu: goto label_4cb5ac;
        case 0x4cb5b0u: goto label_4cb5b0;
        case 0x4cb5b4u: goto label_4cb5b4;
        case 0x4cb5b8u: goto label_4cb5b8;
        case 0x4cb5bcu: goto label_4cb5bc;
        case 0x4cb5c0u: goto label_4cb5c0;
        case 0x4cb5c4u: goto label_4cb5c4;
        case 0x4cb5c8u: goto label_4cb5c8;
        case 0x4cb5ccu: goto label_4cb5cc;
        case 0x4cb5d0u: goto label_4cb5d0;
        case 0x4cb5d4u: goto label_4cb5d4;
        case 0x4cb5d8u: goto label_4cb5d8;
        case 0x4cb5dcu: goto label_4cb5dc;
        case 0x4cb5e0u: goto label_4cb5e0;
        case 0x4cb5e4u: goto label_4cb5e4;
        case 0x4cb5e8u: goto label_4cb5e8;
        case 0x4cb5ecu: goto label_4cb5ec;
        case 0x4cb5f0u: goto label_4cb5f0;
        case 0x4cb5f4u: goto label_4cb5f4;
        case 0x4cb5f8u: goto label_4cb5f8;
        case 0x4cb5fcu: goto label_4cb5fc;
        case 0x4cb600u: goto label_4cb600;
        case 0x4cb604u: goto label_4cb604;
        case 0x4cb608u: goto label_4cb608;
        case 0x4cb60cu: goto label_4cb60c;
        case 0x4cb610u: goto label_4cb610;
        case 0x4cb614u: goto label_4cb614;
        case 0x4cb618u: goto label_4cb618;
        case 0x4cb61cu: goto label_4cb61c;
        case 0x4cb620u: goto label_4cb620;
        case 0x4cb624u: goto label_4cb624;
        case 0x4cb628u: goto label_4cb628;
        case 0x4cb62cu: goto label_4cb62c;
        case 0x4cb630u: goto label_4cb630;
        case 0x4cb634u: goto label_4cb634;
        case 0x4cb638u: goto label_4cb638;
        case 0x4cb63cu: goto label_4cb63c;
        default: break;
    }

    ctx->pc = 0x4cab60u;

label_4cab60:
    // 0x4cab60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cab64:
    // 0x4cab64: 0x2485ff90  addiu       $a1, $a0, -0x70
    ctx->pc = 0x4cab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_4cab68:
    // 0x4cab68: 0x24421af0  addiu       $v0, $v0, 0x1AF0
    ctx->pc = 0x4cab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
label_4cab6c:
    // 0x4cab6c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4cab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4cab70:
    // 0x4cab70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cab70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cab74:
    // 0x4cab74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cab74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cab78:
    // 0x4cab78: 0x3e00008  jr          $ra
label_4cab7c:
    if (ctx->pc == 0x4CAB7Cu) {
        ctx->pc = 0x4CAB7Cu;
            // 0x4cab7c: 0xac65aa10  sw          $a1, -0x55F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945296), GPR_U32(ctx, 5));
        ctx->pc = 0x4CAB80u;
        goto label_4cab80;
    }
    ctx->pc = 0x4CAB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAB78u;
            // 0x4cab7c: 0xac65aa10  sw          $a1, -0x55F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945296), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CAB80u;
label_4cab80:
    // 0x4cab80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cab84:
    // 0x4cab84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cab88:
    // 0x4cab88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cab8c:
    // 0x4cab8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cab90:
    // 0x4cab90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cab90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cab94:
    // 0x4cab94: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x4cab94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_4cab98:
    // 0x4cab98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cab9c:
    if (ctx->pc == 0x4CAB9Cu) {
        ctx->pc = 0x4CAB9Cu;
            // 0x4cab9c: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4CABA0u;
        goto label_4caba0;
    }
    ctx->pc = 0x4CAB98u;
    {
        const bool branch_taken_0x4cab98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cab98) {
            ctx->pc = 0x4CAB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAB98u;
            // 0x4cab9c: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CABB4u;
            goto label_4cabb4;
        }
    }
    ctx->pc = 0x4CABA0u;
label_4caba0:
    // 0x4caba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4caba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4caba4:
    // 0x4caba4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4caba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4caba8:
    // 0x4caba8: 0x320f809  jalr        $t9
label_4cabac:
    if (ctx->pc == 0x4CABACu) {
        ctx->pc = 0x4CABACu;
            // 0x4cabac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CABB0u;
        goto label_4cabb0;
    }
    ctx->pc = 0x4CABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CABB0u);
        ctx->pc = 0x4CABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABA8u;
            // 0x4cabac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CABB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CABB0u; }
            if (ctx->pc != 0x4CABB0u) { return; }
        }
        }
    }
    ctx->pc = 0x4CABB0u;
label_4cabb0:
    // 0x4cabb0: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x4cabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_4cabb4:
    // 0x4cabb4: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x4cabb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cabb8:
    // 0x4cabb8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_4cabbc:
    if (ctx->pc == 0x4CABBCu) {
        ctx->pc = 0x4CABBCu;
            // 0x4cabbc: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4CABC0u;
        goto label_4cabc0;
    }
    ctx->pc = 0x4CABB8u;
    {
        const bool branch_taken_0x4cabb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cabb8) {
            ctx->pc = 0x4CABBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABB8u;
            // 0x4cabbc: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CABF4u;
            goto label_4cabf4;
        }
    }
    ctx->pc = 0x4CABC0u;
label_4cabc0:
    // 0x4cabc0: 0xc04008c  jal         func_100230
label_4cabc4:
    if (ctx->pc == 0x4CABC4u) {
        ctx->pc = 0x4CABC4u;
            // 0x4cabc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4CABC8u;
        goto label_4cabc8;
    }
    ctx->pc = 0x4CABC0u;
    SET_GPR_U32(ctx, 31, 0x4CABC8u);
    ctx->pc = 0x4CABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABC0u;
            // 0x4cabc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABC8u; }
        if (ctx->pc != 0x4CABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABC8u; }
        if (ctx->pc != 0x4CABC8u) { return; }
    }
    ctx->pc = 0x4CABC8u;
label_4cabc8:
    // 0x4cabc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4cabc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4cabcc:
    // 0x4cabcc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4cabccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4cabd0:
    // 0x4cabd0: 0xc0407c0  jal         func_101F00
label_4cabd4:
    if (ctx->pc == 0x4CABD4u) {
        ctx->pc = 0x4CABD4u;
            // 0x4cabd4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4CABD8u;
        goto label_4cabd8;
    }
    ctx->pc = 0x4CABD0u;
    SET_GPR_U32(ctx, 31, 0x4CABD8u);
    ctx->pc = 0x4CABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABD0u;
            // 0x4cabd4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABD8u; }
        if (ctx->pc != 0x4CABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABD8u; }
        if (ctx->pc != 0x4CABD8u) { return; }
    }
    ctx->pc = 0x4CABD8u;
label_4cabd8:
    // 0x4cabd8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4cabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4cabdc:
    // 0x4cabdc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4cabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4cabe0:
    // 0x4cabe0: 0xc0407c0  jal         func_101F00
label_4cabe4:
    if (ctx->pc == 0x4CABE4u) {
        ctx->pc = 0x4CABE4u;
            // 0x4cabe4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4CABE8u;
        goto label_4cabe8;
    }
    ctx->pc = 0x4CABE0u;
    SET_GPR_U32(ctx, 31, 0x4CABE8u);
    ctx->pc = 0x4CABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABE0u;
            // 0x4cabe4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABE8u; }
        if (ctx->pc != 0x4CABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABE8u; }
        if (ctx->pc != 0x4CABE8u) { return; }
    }
    ctx->pc = 0x4CABE8u;
label_4cabe8:
    // 0x4cabe8: 0xc0400a8  jal         func_1002A0
label_4cabec:
    if (ctx->pc == 0x4CABECu) {
        ctx->pc = 0x4CABECu;
            // 0x4cabec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CABF0u;
        goto label_4cabf0;
    }
    ctx->pc = 0x4CABE8u;
    SET_GPR_U32(ctx, 31, 0x4CABF0u);
    ctx->pc = 0x4CABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABE8u;
            // 0x4cabec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABF0u; }
        if (ctx->pc != 0x4CABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CABF0u; }
        if (ctx->pc != 0x4CABF0u) { return; }
    }
    ctx->pc = 0x4CABF0u;
label_4cabf0:
    // 0x4cabf0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4cabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4cabf4:
    // 0x4cabf4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4cabf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4cabf8:
    // 0x4cabf8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cabfc:
    if (ctx->pc == 0x4CABFCu) {
        ctx->pc = 0x4CABFCu;
            // 0x4cabfc: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4CAC00u;
        goto label_4cac00;
    }
    ctx->pc = 0x4CABF8u;
    {
        const bool branch_taken_0x4cabf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cabf8) {
            ctx->pc = 0x4CABFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CABF8u;
            // 0x4cabfc: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CAC14u;
            goto label_4cac14;
        }
    }
    ctx->pc = 0x4CAC00u;
label_4cac00:
    // 0x4cac00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cac00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cac04:
    // 0x4cac04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cac04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cac08:
    // 0x4cac08: 0x320f809  jalr        $t9
label_4cac0c:
    if (ctx->pc == 0x4CAC0Cu) {
        ctx->pc = 0x4CAC0Cu;
            // 0x4cac0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CAC10u;
        goto label_4cac10;
    }
    ctx->pc = 0x4CAC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CAC10u);
        ctx->pc = 0x4CAC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAC08u;
            // 0x4cac0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CAC10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CAC10u; }
            if (ctx->pc != 0x4CAC10u) { return; }
        }
        }
    }
    ctx->pc = 0x4CAC10u;
label_4cac10:
    // 0x4cac10: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4cac10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4cac14:
    // 0x4cac14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cac18:
    // 0x4cac18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cac18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cac1c:
    // 0x4cac1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cac1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cac20:
    // 0x4cac20: 0x3e00008  jr          $ra
label_4cac24:
    if (ctx->pc == 0x4CAC24u) {
        ctx->pc = 0x4CAC24u;
            // 0x4cac24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CAC28u;
        goto label_4cac28;
    }
    ctx->pc = 0x4CAC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAC20u;
            // 0x4cac24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CAC28u;
label_4cac28:
    // 0x4cac28: 0x0  nop
    ctx->pc = 0x4cac28u;
    // NOP
label_4cac2c:
    // 0x4cac2c: 0x0  nop
    ctx->pc = 0x4cac2cu;
    // NOP
label_4cac30:
    // 0x4cac30: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x4cac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_4cac34:
    // 0x4cac34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4cac38:
    // 0x4cac38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4cac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4cac3c:
    // 0x4cac3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4cac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4cac40:
    // 0x4cac40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4cac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4cac44:
    // 0x4cac44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cac44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cac48:
    // 0x4cac48: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4cac48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4cac4c:
    // 0x4cac4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4cac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4cac50:
    // 0x4cac50: 0xc0892d0  jal         func_224B40
label_4cac54:
    if (ctx->pc == 0x4CAC54u) {
        ctx->pc = 0x4CAC54u;
            // 0x4cac54: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x4CAC58u;
        goto label_4cac58;
    }
    ctx->pc = 0x4CAC50u;
    SET_GPR_U32(ctx, 31, 0x4CAC58u);
    ctx->pc = 0x4CAC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAC50u;
            // 0x4cac54: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAC58u; }
        if (ctx->pc != 0x4CAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAC58u; }
        if (ctx->pc != 0x4CAC58u) { return; }
    }
    ctx->pc = 0x4CAC58u;
label_4cac58:
    // 0x4cac58: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cac58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4cac5c:
    // 0x4cac5c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4cac60:
    // 0x4cac60: 0xc442c848  lwc1        $f2, -0x37B8($v0)
    ctx->pc = 0x4cac60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cac64:
    // 0x4cac64: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x4cac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4cac68:
    // 0x4cac68: 0xc461c84c  lwc1        $f1, -0x37B4($v1)
    ctx->pc = 0x4cac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cac6c:
    // 0x4cac6c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4cac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4cac70:
    // 0x4cac70: 0xc440c850  lwc1        $f0, -0x37B0($v0)
    ctx->pc = 0x4cac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cac74:
    // 0x4cac74: 0xe7a201b0  swc1        $f2, 0x1B0($sp)
    ctx->pc = 0x4cac74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_4cac78:
    // 0x4cac78: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x4cac78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_4cac7c:
    // 0x4cac7c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x4cac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_4cac80:
    // 0x4cac80: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x4cac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cac84:
    // 0x4cac84: 0xc04cb6c  jal         func_132DB0
label_4cac88:
    if (ctx->pc == 0x4CAC88u) {
        ctx->pc = 0x4CAC88u;
            // 0x4cac88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAC8Cu;
        goto label_4cac8c;
    }
    ctx->pc = 0x4CAC84u;
    SET_GPR_U32(ctx, 31, 0x4CAC8Cu);
    ctx->pc = 0x4CAC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAC84u;
            // 0x4cac88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAC8Cu; }
        if (ctx->pc != 0x4CAC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAC8Cu; }
        if (ctx->pc != 0x4CAC8Cu) { return; }
    }
    ctx->pc = 0x4CAC8Cu;
label_4cac8c:
    // 0x4cac8c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4cac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4cac90:
    // 0x4cac90: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x4cac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_4cac94:
    // 0x4cac94: 0x8c50aa10  lw          $s0, -0x55F0($v0)
    ctx->pc = 0x4cac94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945296)));
label_4cac98:
    // 0x4cac98: 0xc0d46b8  jal         func_351AE0
label_4cac9c:
    if (ctx->pc == 0x4CAC9Cu) {
        ctx->pc = 0x4CAC9Cu;
            // 0x4cac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CACA0u;
        goto label_4caca0;
    }
    ctx->pc = 0x4CAC98u;
    SET_GPR_U32(ctx, 31, 0x4CACA0u);
    ctx->pc = 0x4CAC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAC98u;
            // 0x4cac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACA0u; }
        if (ctx->pc != 0x4CACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACA0u; }
        if (ctx->pc != 0x4CACA0u) { return; }
    }
    ctx->pc = 0x4CACA0u;
label_4caca0:
    // 0x4caca0: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_4caca4:
    if (ctx->pc == 0x4CACA4u) {
        ctx->pc = 0x4CACA4u;
            // 0x4caca4: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x4CACA8u;
        goto label_4caca8;
    }
    ctx->pc = 0x4CACA0u;
    {
        const bool branch_taken_0x4caca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4caca0) {
            ctx->pc = 0x4CACA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CACA0u;
            // 0x4caca4: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CADDCu;
            goto label_4caddc;
        }
    }
    ctx->pc = 0x4CACA8u;
label_4caca8:
    // 0x4caca8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4caca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4cacac:
    // 0x4cacac: 0xc0d46b0  jal         func_351AC0
label_4cacb0:
    if (ctx->pc == 0x4CACB0u) {
        ctx->pc = 0x4CACB0u;
            // 0x4cacb0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x4CACB4u;
        goto label_4cacb4;
    }
    ctx->pc = 0x4CACACu;
    SET_GPR_U32(ctx, 31, 0x4CACB4u);
    ctx->pc = 0x4CACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CACACu;
            // 0x4cacb0: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACB4u; }
        if (ctx->pc != 0x4CACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACB4u; }
        if (ctx->pc != 0x4CACB4u) { return; }
    }
    ctx->pc = 0x4CACB4u;
label_4cacb4:
    // 0x4cacb4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x4cacb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cacb8:
    // 0x4cacb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4cacb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cacbc:
    // 0x4cacbc: 0x0  nop
    ctx->pc = 0x4cacbcu;
    // NOP
label_4cacc0:
    // 0x4cacc0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4cacc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cacc4:
    // 0x4cacc4: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_4cacc8:
    if (ctx->pc == 0x4CACC8u) {
        ctx->pc = 0x4CACC8u;
            // 0x4cacc8: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4CACCCu;
        goto label_4caccc;
    }
    ctx->pc = 0x4CACC4u;
    {
        const bool branch_taken_0x4cacc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cacc4) {
            ctx->pc = 0x4CACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CACC4u;
            // 0x4cacc8: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CAD3Cu;
            goto label_4cad3c;
        }
    }
    ctx->pc = 0x4CACCCu;
label_4caccc:
    // 0x4caccc: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x4cacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cacd0:
    // 0x4cacd0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4cacd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cacd4:
    // 0x4cacd4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4cacd8:
    if (ctx->pc == 0x4CACD8u) {
        ctx->pc = 0x4CACD8u;
            // 0x4cacd8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4CACDCu;
        goto label_4cacdc;
    }
    ctx->pc = 0x4CACD4u;
    {
        const bool branch_taken_0x4cacd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cacd4) {
            ctx->pc = 0x4CACD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CACD4u;
            // 0x4cacd8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CACF0u;
            goto label_4cacf0;
        }
    }
    ctx->pc = 0x4CACDCu;
label_4cacdc:
    // 0x4cacdc: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x4cacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cace0:
    // 0x4cace0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4cace0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cace4:
    // 0x4cace4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_4cace8:
    if (ctx->pc == 0x4CACE8u) {
        ctx->pc = 0x4CACECu;
        goto label_4cacec;
    }
    ctx->pc = 0x4CACE4u;
    {
        const bool branch_taken_0x4cace4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cace4) {
            ctx->pc = 0x4CAD38u;
            goto label_4cad38;
        }
    }
    ctx->pc = 0x4CACECu;
label_4cacec:
    // 0x4cacec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4cacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4cacf0:
    // 0x4cacf0: 0xc0d46a0  jal         func_351A80
label_4cacf4:
    if (ctx->pc == 0x4CACF4u) {
        ctx->pc = 0x4CACF8u;
        goto label_4cacf8;
    }
    ctx->pc = 0x4CACF0u;
    SET_GPR_U32(ctx, 31, 0x4CACF8u);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACF8u; }
        if (ctx->pc != 0x4CACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CACF8u; }
        if (ctx->pc != 0x4CACF8u) { return; }
    }
    ctx->pc = 0x4CACF8u;
label_4cacf8:
    // 0x4cacf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cacf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cacfc:
    // 0x4cacfc: 0x52400033  beql        $s2, $zero, . + 4 + (0x33 << 2)
label_4cad00:
    if (ctx->pc == 0x4CAD00u) {
        ctx->pc = 0x4CAD00u;
            // 0x4cad00: 0xafb2006c  sw          $s2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
        ctx->pc = 0x4CAD04u;
        goto label_4cad04;
    }
    ctx->pc = 0x4CACFCu;
    {
        const bool branch_taken_0x4cacfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cacfc) {
            ctx->pc = 0x4CAD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CACFCu;
            // 0x4cad00: 0xafb2006c  sw          $s2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CADCCu;
            goto label_4cadcc;
        }
    }
    ctx->pc = 0x4CAD04u;
label_4cad04:
    // 0x4cad04: 0xc049514  jal         func_125450
label_4cad08:
    if (ctx->pc == 0x4CAD08u) {
        ctx->pc = 0x4CAD08u;
            // 0x4cad08: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4CAD0Cu;
        goto label_4cad0c;
    }
    ctx->pc = 0x4CAD04u;
    SET_GPR_U32(ctx, 31, 0x4CAD0Cu);
    ctx->pc = 0x4CAD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD04u;
            // 0x4cad08: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD0Cu; }
        if (ctx->pc != 0x4CAD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD0Cu; }
        if (ctx->pc != 0x4CAD0Cu) { return; }
    }
    ctx->pc = 0x4CAD0Cu;
label_4cad0c:
    // 0x4cad0c: 0xc0474b6  jal         func_11D2D8
label_4cad10:
    if (ctx->pc == 0x4CAD10u) {
        ctx->pc = 0x4CAD10u;
            // 0x4cad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD14u;
        goto label_4cad14;
    }
    ctx->pc = 0x4CAD0Cu;
    SET_GPR_U32(ctx, 31, 0x4CAD14u);
    ctx->pc = 0x4CAD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD0Cu;
            // 0x4cad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD14u; }
        if (ctx->pc != 0x4CAD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD14u; }
        if (ctx->pc != 0x4CAD14u) { return; }
    }
    ctx->pc = 0x4CAD14u;
label_4cad14:
    // 0x4cad14: 0xc0497dc  jal         func_125F70
label_4cad18:
    if (ctx->pc == 0x4CAD18u) {
        ctx->pc = 0x4CAD18u;
            // 0x4cad18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD1Cu;
        goto label_4cad1c;
    }
    ctx->pc = 0x4CAD14u;
    SET_GPR_U32(ctx, 31, 0x4CAD1Cu);
    ctx->pc = 0x4CAD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD14u;
            // 0x4cad18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD1Cu; }
        if (ctx->pc != 0x4CAD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD1Cu; }
        if (ctx->pc != 0x4CAD1Cu) { return; }
    }
    ctx->pc = 0x4CAD1Cu;
label_4cad1c:
    // 0x4cad1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cad20:
    // 0x4cad20: 0xc0827ac  jal         func_209EB0
label_4cad24:
    if (ctx->pc == 0x4CAD24u) {
        ctx->pc = 0x4CAD24u;
            // 0x4cad24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4CAD28u;
        goto label_4cad28;
    }
    ctx->pc = 0x4CAD20u;
    SET_GPR_U32(ctx, 31, 0x4CAD28u);
    ctx->pc = 0x4CAD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD20u;
            // 0x4cad24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD28u; }
        if (ctx->pc != 0x4CAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD28u; }
        if (ctx->pc != 0x4CAD28u) { return; }
    }
    ctx->pc = 0x4CAD28u;
label_4cad28:
    // 0x4cad28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cad28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cad2c:
    // 0x4cad2c: 0xafb2006c  sw          $s2, 0x6C($sp)
    ctx->pc = 0x4cad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
label_4cad30:
    // 0x4cad30: 0x10000026  b           . + 4 + (0x26 << 2)
label_4cad34:
    if (ctx->pc == 0x4CAD34u) {
        ctx->pc = 0x4CAD38u;
        goto label_4cad38;
    }
    ctx->pc = 0x4CAD30u;
    {
        const bool branch_taken_0x4cad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cad30) {
            ctx->pc = 0x4CADCCu;
            goto label_4cadcc;
        }
    }
    ctx->pc = 0x4CAD38u;
label_4cad38:
    // 0x4cad38: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp)
    ctx->pc = 0x4cad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cad3c:
    // 0x4cad3c: 0xc049514  jal         func_125450
label_4cad40:
    if (ctx->pc == 0x4CAD40u) {
        ctx->pc = 0x4CAD44u;
        goto label_4cad44;
    }
    ctx->pc = 0x4CAD3Cu;
    SET_GPR_U32(ctx, 31, 0x4CAD44u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD44u; }
        if (ctx->pc != 0x4CAD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD44u; }
        if (ctx->pc != 0x4CAD44u) { return; }
    }
    ctx->pc = 0x4CAD44u;
label_4cad44:
    // 0x4cad44: 0xc0474b6  jal         func_11D2D8
label_4cad48:
    if (ctx->pc == 0x4CAD48u) {
        ctx->pc = 0x4CAD48u;
            // 0x4cad48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD4Cu;
        goto label_4cad4c;
    }
    ctx->pc = 0x4CAD44u;
    SET_GPR_U32(ctx, 31, 0x4CAD4Cu);
    ctx->pc = 0x4CAD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD44u;
            // 0x4cad48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD4Cu; }
        if (ctx->pc != 0x4CAD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD4Cu; }
        if (ctx->pc != 0x4CAD4Cu) { return; }
    }
    ctx->pc = 0x4CAD4Cu;
label_4cad4c:
    // 0x4cad4c: 0xc0497dc  jal         func_125F70
label_4cad50:
    if (ctx->pc == 0x4CAD50u) {
        ctx->pc = 0x4CAD50u;
            // 0x4cad50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD54u;
        goto label_4cad54;
    }
    ctx->pc = 0x4CAD4Cu;
    SET_GPR_U32(ctx, 31, 0x4CAD54u);
    ctx->pc = 0x4CAD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD4Cu;
            // 0x4cad50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD54u; }
        if (ctx->pc != 0x4CAD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD54u; }
        if (ctx->pc != 0x4CAD54u) { return; }
    }
    ctx->pc = 0x4CAD54u;
label_4cad54:
    // 0x4cad54: 0xc7ac01b4  lwc1        $f12, 0x1B4($sp)
    ctx->pc = 0x4cad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cad58:
    // 0x4cad58: 0xc049514  jal         func_125450
label_4cad5c:
    if (ctx->pc == 0x4CAD5Cu) {
        ctx->pc = 0x4CAD5Cu;
            // 0x4cad5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4CAD60u;
        goto label_4cad60;
    }
    ctx->pc = 0x4CAD58u;
    SET_GPR_U32(ctx, 31, 0x4CAD60u);
    ctx->pc = 0x4CAD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD58u;
            // 0x4cad5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD60u; }
        if (ctx->pc != 0x4CAD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD60u; }
        if (ctx->pc != 0x4CAD60u) { return; }
    }
    ctx->pc = 0x4CAD60u;
label_4cad60:
    // 0x4cad60: 0xc0474b6  jal         func_11D2D8
label_4cad64:
    if (ctx->pc == 0x4CAD64u) {
        ctx->pc = 0x4CAD64u;
            // 0x4cad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD68u;
        goto label_4cad68;
    }
    ctx->pc = 0x4CAD60u;
    SET_GPR_U32(ctx, 31, 0x4CAD68u);
    ctx->pc = 0x4CAD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD60u;
            // 0x4cad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD68u; }
        if (ctx->pc != 0x4CAD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD68u; }
        if (ctx->pc != 0x4CAD68u) { return; }
    }
    ctx->pc = 0x4CAD68u;
label_4cad68:
    // 0x4cad68: 0xc0497dc  jal         func_125F70
label_4cad6c:
    if (ctx->pc == 0x4CAD6Cu) {
        ctx->pc = 0x4CAD6Cu;
            // 0x4cad6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD70u;
        goto label_4cad70;
    }
    ctx->pc = 0x4CAD68u;
    SET_GPR_U32(ctx, 31, 0x4CAD70u);
    ctx->pc = 0x4CAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD68u;
            // 0x4cad6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD70u; }
        if (ctx->pc != 0x4CAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD70u; }
        if (ctx->pc != 0x4CAD70u) { return; }
    }
    ctx->pc = 0x4CAD70u;
label_4cad70:
    // 0x4cad70: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x4cad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cad74:
    // 0x4cad74: 0xc049514  jal         func_125450
label_4cad78:
    if (ctx->pc == 0x4CAD78u) {
        ctx->pc = 0x4CAD78u;
            // 0x4cad78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4CAD7Cu;
        goto label_4cad7c;
    }
    ctx->pc = 0x4CAD74u;
    SET_GPR_U32(ctx, 31, 0x4CAD7Cu);
    ctx->pc = 0x4CAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD74u;
            // 0x4cad78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD7Cu; }
        if (ctx->pc != 0x4CAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD7Cu; }
        if (ctx->pc != 0x4CAD7Cu) { return; }
    }
    ctx->pc = 0x4CAD7Cu;
label_4cad7c:
    // 0x4cad7c: 0xc0474b6  jal         func_11D2D8
label_4cad80:
    if (ctx->pc == 0x4CAD80u) {
        ctx->pc = 0x4CAD80u;
            // 0x4cad80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD84u;
        goto label_4cad84;
    }
    ctx->pc = 0x4CAD7Cu;
    SET_GPR_U32(ctx, 31, 0x4CAD84u);
    ctx->pc = 0x4CAD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD7Cu;
            // 0x4cad80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD84u; }
        if (ctx->pc != 0x4CAD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD84u; }
        if (ctx->pc != 0x4CAD84u) { return; }
    }
    ctx->pc = 0x4CAD84u;
label_4cad84:
    // 0x4cad84: 0xc0497dc  jal         func_125F70
label_4cad88:
    if (ctx->pc == 0x4CAD88u) {
        ctx->pc = 0x4CAD88u;
            // 0x4cad88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAD8Cu;
        goto label_4cad8c;
    }
    ctx->pc = 0x4CAD84u;
    SET_GPR_U32(ctx, 31, 0x4CAD8Cu);
    ctx->pc = 0x4CAD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD84u;
            // 0x4cad88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD8Cu; }
        if (ctx->pc != 0x4CAD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAD8Cu; }
        if (ctx->pc != 0x4CAD8Cu) { return; }
    }
    ctx->pc = 0x4CAD8Cu;
label_4cad8c:
    // 0x4cad8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4cad8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4cad90:
    // 0x4cad90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4cad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4cad94:
    // 0x4cad94: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4cad94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4cad98:
    // 0x4cad98: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4cad98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4cad9c:
    // 0x4cad9c: 0xc0b6df0  jal         func_2DB7C0
label_4cada0:
    if (ctx->pc == 0x4CADA0u) {
        ctx->pc = 0x4CADA0u;
            // 0x4cada0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4CADA4u;
        goto label_4cada4;
    }
    ctx->pc = 0x4CAD9Cu;
    SET_GPR_U32(ctx, 31, 0x4CADA4u);
    ctx->pc = 0x4CADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAD9Cu;
            // 0x4cada0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADA4u; }
        if (ctx->pc != 0x4CADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADA4u; }
        if (ctx->pc != 0x4CADA4u) { return; }
    }
    ctx->pc = 0x4CADA4u;
label_4cada4:
    // 0x4cada4: 0xc0d46a0  jal         func_351A80
label_4cada8:
    if (ctx->pc == 0x4CADA8u) {
        ctx->pc = 0x4CADA8u;
            // 0x4cada8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x4CADACu;
        goto label_4cadac;
    }
    ctx->pc = 0x4CADA4u;
    SET_GPR_U32(ctx, 31, 0x4CADACu);
    ctx->pc = 0x4CADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADA4u;
            // 0x4cada8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADACu; }
        if (ctx->pc != 0x4CADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADACu; }
        if (ctx->pc != 0x4CADACu) { return; }
    }
    ctx->pc = 0x4CADACu;
label_4cadac:
    // 0x4cadac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4cadb0:
    if (ctx->pc == 0x4CADB0u) {
        ctx->pc = 0x4CADB0u;
            // 0x4cadb0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x4CADB4u;
        goto label_4cadb4;
    }
    ctx->pc = 0x4CADACu;
    {
        const bool branch_taken_0x4cadac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cadac) {
            ctx->pc = 0x4CADB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADACu;
            // 0x4cadb0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CADCCu;
            goto label_4cadcc;
        }
    }
    ctx->pc = 0x4CADB4u;
label_4cadb4:
    // 0x4cadb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cadb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cadb8:
    // 0x4cadb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4cadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4cadbc:
    // 0x4cadbc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4cadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cadc0:
    // 0x4cadc0: 0xc0804bc  jal         func_2012F0
label_4cadc4:
    if (ctx->pc == 0x4CADC4u) {
        ctx->pc = 0x4CADC4u;
            // 0x4cadc4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4CADC8u;
        goto label_4cadc8;
    }
    ctx->pc = 0x4CADC0u;
    SET_GPR_U32(ctx, 31, 0x4CADC8u);
    ctx->pc = 0x4CADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADC0u;
            // 0x4cadc4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADC8u; }
        if (ctx->pc != 0x4CADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADC8u; }
        if (ctx->pc != 0x4CADC8u) { return; }
    }
    ctx->pc = 0x4CADC8u;
label_4cadc8:
    // 0x4cadc8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x4cadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_4cadcc:
    // 0x4cadcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cadccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cadd0:
    // 0x4cadd0: 0xc0d4698  jal         func_351A60
label_4cadd4:
    if (ctx->pc == 0x4CADD4u) {
        ctx->pc = 0x4CADD4u;
            // 0x4cadd4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CADD8u;
        goto label_4cadd8;
    }
    ctx->pc = 0x4CADD0u;
    SET_GPR_U32(ctx, 31, 0x4CADD8u);
    ctx->pc = 0x4CADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADD0u;
            // 0x4cadd4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADD8u; }
        if (ctx->pc != 0x4CADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADD8u; }
        if (ctx->pc != 0x4CADD8u) { return; }
    }
    ctx->pc = 0x4CADD8u;
label_4cadd8:
    // 0x4cadd8: 0x8fb0006c  lw          $s0, 0x6C($sp)
    ctx->pc = 0x4cadd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_4caddc:
    // 0x4caddc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4caddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4cade0:
    // 0x4cade0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x4cade0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_4cade4:
    // 0x4cade4: 0xc0b6e68  jal         func_2DB9A0
label_4cade8:
    if (ctx->pc == 0x4CADE8u) {
        ctx->pc = 0x4CADE8u;
            // 0x4cade8: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x4CADECu;
        goto label_4cadec;
    }
    ctx->pc = 0x4CADE4u;
    SET_GPR_U32(ctx, 31, 0x4CADECu);
    ctx->pc = 0x4CADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADE4u;
            // 0x4cade8: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADECu; }
        if (ctx->pc != 0x4CADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADECu; }
        if (ctx->pc != 0x4CADECu) { return; }
    }
    ctx->pc = 0x4CADECu;
label_4cadec:
    // 0x4cadec: 0xc0b6dac  jal         func_2DB6B0
label_4cadf0:
    if (ctx->pc == 0x4CADF0u) {
        ctx->pc = 0x4CADF0u;
            // 0x4cadf0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4CADF4u;
        goto label_4cadf4;
    }
    ctx->pc = 0x4CADECu;
    SET_GPR_U32(ctx, 31, 0x4CADF4u);
    ctx->pc = 0x4CADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADECu;
            // 0x4cadf0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADF4u; }
        if (ctx->pc != 0x4CADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADF4u; }
        if (ctx->pc != 0x4CADF4u) { return; }
    }
    ctx->pc = 0x4CADF4u;
label_4cadf4:
    // 0x4cadf4: 0xc0cac94  jal         func_32B250
label_4cadf8:
    if (ctx->pc == 0x4CADF8u) {
        ctx->pc = 0x4CADF8u;
            // 0x4cadf8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4CADFCu;
        goto label_4cadfc;
    }
    ctx->pc = 0x4CADF4u;
    SET_GPR_U32(ctx, 31, 0x4CADFCu);
    ctx->pc = 0x4CADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADF4u;
            // 0x4cadf8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADFCu; }
        if (ctx->pc != 0x4CADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CADFCu; }
        if (ctx->pc != 0x4CADFCu) { return; }
    }
    ctx->pc = 0x4CADFCu;
label_4cadfc:
    // 0x4cadfc: 0xc0cac84  jal         func_32B210
label_4cae00:
    if (ctx->pc == 0x4CAE00u) {
        ctx->pc = 0x4CAE00u;
            // 0x4cae00: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4CAE04u;
        goto label_4cae04;
    }
    ctx->pc = 0x4CADFCu;
    SET_GPR_U32(ctx, 31, 0x4CAE04u);
    ctx->pc = 0x4CAE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CADFCu;
            // 0x4cae00: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAE04u; }
        if (ctx->pc != 0x4CAE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAE04u; }
        if (ctx->pc != 0x4CAE04u) { return; }
    }
    ctx->pc = 0x4CAE04u;
label_4cae04:
    // 0x4cae04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4cae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4cae08:
    // 0x4cae08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4cae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4cae0c:
    // 0x4cae0c: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x4cae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cae10:
    // 0x4cae10: 0xc0a5a68  jal         func_2969A0
label_4cae14:
    if (ctx->pc == 0x4CAE14u) {
        ctx->pc = 0x4CAE14u;
            // 0x4cae14: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4CAE18u;
        goto label_4cae18;
    }
    ctx->pc = 0x4CAE10u;
    SET_GPR_U32(ctx, 31, 0x4CAE18u);
    ctx->pc = 0x4CAE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAE10u;
            // 0x4cae14: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAE18u; }
        if (ctx->pc != 0x4CAE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAE18u; }
        if (ctx->pc != 0x4CAE18u) { return; }
    }
    ctx->pc = 0x4CAE18u;
label_4cae18:
    // 0x4cae18: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x4cae18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
label_4cae1c:
    // 0x4cae1c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4cae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4cae20:
    // 0x4cae20: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x4cae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4cae24:
    // 0x4cae24: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x4cae24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4cae28:
    // 0x4cae28: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x4cae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4cae2c:
    // 0x4cae2c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4cae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4cae30:
    // 0x4cae30: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x4cae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4cae34:
    // 0x4cae34: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4cae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4cae38:
    // 0x4cae38: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x4cae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cae3c:
    // 0x4cae3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4cae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cae40:
    // 0x4cae40: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x4cae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cae44:
    // 0x4cae44: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x4cae44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_4cae48:
    // 0x4cae48: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x4cae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cae4c:
    // 0x4cae4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4cae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cae50:
    // 0x4cae50: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4cae50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4cae54:
    // 0x4cae54: 0xafa60198  sw          $a2, 0x198($sp)
    ctx->pc = 0x4cae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 6));
label_4cae58:
    // 0x4cae58: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4cae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cae5c:
    // 0x4cae5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cae60:
    // 0x4cae60: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4cae60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4cae64:
    // 0x4cae64: 0xa3a401a2  sb          $a0, 0x1A2($sp)
    ctx->pc = 0x4cae64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 418), (uint8_t)GPR_U32(ctx, 4));
label_4cae68:
    // 0x4cae68: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4cae68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4cae6c:
    // 0x4cae6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4cae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4cae70:
    // 0x4cae70: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x4cae70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4cae74:
    // 0x4cae74: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4cae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4cae78:
    // 0x4cae78: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x4cae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cae7c:
    // 0x4cae7c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4cae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4cae80:
    // 0x4cae80: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x4cae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cae84:
    // 0x4cae84: 0xa3a801a0  sb          $t0, 0x1A0($sp)
    ctx->pc = 0x4cae84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 8));
label_4cae88:
    // 0x4cae88: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x4cae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cae8c:
    // 0x4cae8c: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x4cae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_4cae90:
    // 0x4cae90: 0xe7a20150  swc1        $f2, 0x150($sp)
    ctx->pc = 0x4cae90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_4cae94:
    // 0x4cae94: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x4cae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_4cae98:
    // 0x4cae98: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x4cae98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_4cae9c:
    // 0x4cae9c: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x4cae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_4caea0:
    // 0x4caea0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x4caea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_4caea4:
    // 0x4caea4: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x4caea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4caea8:
    // 0x4caea8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x4caea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4caeac:
    // 0x4caeac: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4caeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4caeb0:
    // 0x4caeb0: 0xe7a2015c  swc1        $f2, 0x15C($sp)
    ctx->pc = 0x4caeb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_4caeb4:
    // 0x4caeb4: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x4caeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_4caeb8:
    // 0x4caeb8: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x4caeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4caebc:
    // 0x4caebc: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x4caebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4caec0:
    // 0x4caec0: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x4caec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4caec4:
    // 0x4caec4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x4caec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4caec8:
    // 0x4caec8: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x4caec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_4caecc:
    // 0x4caecc: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x4caeccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_4caed0:
    // 0x4caed0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x4caed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_4caed4:
    // 0x4caed4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x4caed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4caed8:
    // 0x4caed8: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x4caed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4caedc:
    // 0x4caedc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x4caedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4caee0:
    // 0x4caee0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x4caee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4caee4:
    // 0x4caee4: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x4caee4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4caee8:
    // 0x4caee8: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x4caee8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4caeec:
    // 0x4caeec: 0xe7a60108  swc1        $f6, 0x108($sp)
    ctx->pc = 0x4caeecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4caef0:
    // 0x4caef0: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x4caef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4caef4:
    // 0x4caef4: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x4caef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_4caef8:
    // 0x4caef8: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x4caef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_4caefc:
    // 0x4caefc: 0xc0a7a88  jal         func_29EA20
label_4caf00:
    if (ctx->pc == 0x4CAF00u) {
        ctx->pc = 0x4CAF00u;
            // 0x4caf00: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x4CAF04u;
        goto label_4caf04;
    }
    ctx->pc = 0x4CAEFCu;
    SET_GPR_U32(ctx, 31, 0x4CAF04u);
    ctx->pc = 0x4CAF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAEFCu;
            // 0x4caf00: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF04u; }
        if (ctx->pc != 0x4CAF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF04u; }
        if (ctx->pc != 0x4CAF04u) { return; }
    }
    ctx->pc = 0x4CAF04u;
label_4caf04:
    // 0x4caf04: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4caf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4caf08:
    // 0x4caf08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4caf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4caf0c:
    // 0x4caf0c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4caf10:
    if (ctx->pc == 0x4CAF10u) {
        ctx->pc = 0x4CAF10u;
            // 0x4caf10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CAF14u;
        goto label_4caf14;
    }
    ctx->pc = 0x4CAF0Cu;
    {
        const bool branch_taken_0x4caf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CAF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAF0Cu;
            // 0x4caf10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4caf0c) {
            ctx->pc = 0x4CAF5Cu;
            goto label_4caf5c;
        }
    }
    ctx->pc = 0x4CAF14u;
label_4caf14:
    // 0x4caf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4caf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4caf18:
    // 0x4caf18: 0xc088ef4  jal         func_223BD0
label_4caf1c:
    if (ctx->pc == 0x4CAF1Cu) {
        ctx->pc = 0x4CAF1Cu;
            // 0x4caf1c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4CAF20u;
        goto label_4caf20;
    }
    ctx->pc = 0x4CAF18u;
    SET_GPR_U32(ctx, 31, 0x4CAF20u);
    ctx->pc = 0x4CAF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAF18u;
            // 0x4caf1c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF20u; }
        if (ctx->pc != 0x4CAF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF20u; }
        if (ctx->pc != 0x4CAF20u) { return; }
    }
    ctx->pc = 0x4CAF20u;
label_4caf20:
    // 0x4caf20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4caf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4caf24:
    // 0x4caf24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4caf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4caf28:
    // 0x4caf28: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4caf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4caf2c:
    // 0x4caf2c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4caf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4caf30:
    // 0x4caf30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4caf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4caf34:
    // 0x4caf34: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4caf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4caf38:
    // 0x4caf38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4caf3c:
    // 0x4caf3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4caf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4caf40:
    // 0x4caf40: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4caf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4caf44:
    // 0x4caf44: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4caf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4caf48:
    // 0x4caf48: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4caf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4caf4c:
    // 0x4caf4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4caf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4caf50:
    // 0x4caf50: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4caf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4caf54:
    // 0x4caf54: 0xc088b38  jal         func_222CE0
label_4caf58:
    if (ctx->pc == 0x4CAF58u) {
        ctx->pc = 0x4CAF58u;
            // 0x4caf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CAF5Cu;
        goto label_4caf5c;
    }
    ctx->pc = 0x4CAF54u;
    SET_GPR_U32(ctx, 31, 0x4CAF5Cu);
    ctx->pc = 0x4CAF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAF54u;
            // 0x4caf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF5Cu; }
        if (ctx->pc != 0x4CAF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF5Cu; }
        if (ctx->pc != 0x4CAF5Cu) { return; }
    }
    ctx->pc = 0x4CAF5Cu;
label_4caf5c:
    // 0x4caf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4caf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4caf60:
    // 0x4caf60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4caf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4caf64:
    // 0x4caf64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4caf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4caf68:
    // 0x4caf68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4caf68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4caf6c:
    // 0x4caf6c: 0xc08914c  jal         func_224530
label_4caf70:
    if (ctx->pc == 0x4CAF70u) {
        ctx->pc = 0x4CAF70u;
            // 0x4caf70: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4CAF74u;
        goto label_4caf74;
    }
    ctx->pc = 0x4CAF6Cu;
    SET_GPR_U32(ctx, 31, 0x4CAF74u);
    ctx->pc = 0x4CAF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAF6Cu;
            // 0x4caf70: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF74u; }
        if (ctx->pc != 0x4CAF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAF74u; }
        if (ctx->pc != 0x4CAF74u) { return; }
    }
    ctx->pc = 0x4CAF74u;
label_4caf74:
    // 0x4caf74: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4caf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4caf78:
    // 0x4caf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4caf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4caf7c:
    // 0x4caf7c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4caf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4caf80:
    // 0x4caf80: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4caf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4caf84:
    // 0x4caf84: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4caf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4caf88:
    // 0x4caf88: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4caf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4caf8c:
    // 0x4caf8c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4caf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4caf90:
    // 0x4caf90: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4caf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4caf94:
    // 0x4caf94: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4caf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4caf98:
    // 0x4caf98: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x4caf98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4caf9c:
    // 0x4caf9c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4caf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4cafa0:
    // 0x4cafa0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4cafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cafa4:
    // 0x4cafa4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4cafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cafa8:
    // 0x4cafa8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4cafa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cafac:
    // 0x4cafac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4cafacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4cafb0:
    // 0x4cafb0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4cafb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4cafb4:
    // 0x4cafb4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4cafb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4cafb8:
    // 0x4cafb8: 0xc0892b0  jal         func_224AC0
label_4cafbc:
    if (ctx->pc == 0x4CAFBCu) {
        ctx->pc = 0x4CAFBCu;
            // 0x4cafbc: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x4CAFC0u;
        goto label_4cafc0;
    }
    ctx->pc = 0x4CAFB8u;
    SET_GPR_U32(ctx, 31, 0x4CAFC0u);
    ctx->pc = 0x4CAFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAFB8u;
            // 0x4cafbc: 0xe7a3007c  swc1        $f3, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFC0u; }
        if (ctx->pc != 0x4CAFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFC0u; }
        if (ctx->pc != 0x4CAFC0u) { return; }
    }
    ctx->pc = 0x4CAFC0u;
label_4cafc0:
    // 0x4cafc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cafc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cafc4:
    // 0x4cafc4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4cafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4cafc8:
    // 0x4cafc8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4cafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4cafcc:
    // 0x4cafcc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4cafccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4cafd0:
    // 0x4cafd0: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x4cafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_4cafd4:
    // 0x4cafd4: 0xc0891d8  jal         func_224760
label_4cafd8:
    if (ctx->pc == 0x4CAFD8u) {
        ctx->pc = 0x4CAFD8u;
            // 0x4cafd8: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4CAFDCu;
        goto label_4cafdc;
    }
    ctx->pc = 0x4CAFD4u;
    SET_GPR_U32(ctx, 31, 0x4CAFDCu);
    ctx->pc = 0x4CAFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAFD4u;
            // 0x4cafd8: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFDCu; }
        if (ctx->pc != 0x4CAFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFDCu; }
        if (ctx->pc != 0x4CAFDCu) { return; }
    }
    ctx->pc = 0x4CAFDCu;
label_4cafdc:
    // 0x4cafdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cafe0:
    // 0x4cafe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4cafe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cafe4:
    // 0x4cafe4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4cafe8:
    // 0x4cafe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4cafe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cafec:
    // 0x4cafec: 0xc08c164  jal         func_230590
label_4caff0:
    if (ctx->pc == 0x4CAFF0u) {
        ctx->pc = 0x4CAFF0u;
            // 0x4caff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CAFF4u;
        goto label_4caff4;
    }
    ctx->pc = 0x4CAFECu;
    SET_GPR_U32(ctx, 31, 0x4CAFF4u);
    ctx->pc = 0x4CAFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAFECu;
            // 0x4caff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFF4u; }
        if (ctx->pc != 0x4CAFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAFF4u; }
        if (ctx->pc != 0x4CAFF4u) { return; }
    }
    ctx->pc = 0x4CAFF4u;
label_4caff4:
    // 0x4caff4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4caff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4caff8:
    // 0x4caff8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4caff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4caffc:
    // 0x4caffc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4caffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4cb000:
    // 0x4cb000: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4cb000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cb004:
    // 0x4cb004: 0xc0a7a88  jal         func_29EA20
label_4cb008:
    if (ctx->pc == 0x4CB008u) {
        ctx->pc = 0x4CB008u;
            // 0x4cb008: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4CB00Cu;
        goto label_4cb00c;
    }
    ctx->pc = 0x4CB004u;
    SET_GPR_U32(ctx, 31, 0x4CB00Cu);
    ctx->pc = 0x4CB008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB004u;
            // 0x4cb008: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB00Cu; }
        if (ctx->pc != 0x4CB00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB00Cu; }
        if (ctx->pc != 0x4CB00Cu) { return; }
    }
    ctx->pc = 0x4CB00Cu;
label_4cb00c:
    // 0x4cb00c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4cb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cb010:
    // 0x4cb010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cb010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb014:
    // 0x4cb014: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4cb018:
    if (ctx->pc == 0x4CB018u) {
        ctx->pc = 0x4CB018u;
            // 0x4cb018: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CB01Cu;
        goto label_4cb01c;
    }
    ctx->pc = 0x4CB014u;
    {
        const bool branch_taken_0x4cb014 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB014u;
            // 0x4cb018: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb014) {
            ctx->pc = 0x4CB038u;
            goto label_4cb038;
        }
    }
    ctx->pc = 0x4CB01Cu;
label_4cb01c:
    // 0x4cb01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4cb01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4cb020:
    // 0x4cb020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4cb020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cb024:
    // 0x4cb024: 0xc0869d0  jal         func_21A740
label_4cb028:
    if (ctx->pc == 0x4CB028u) {
        ctx->pc = 0x4CB028u;
            // 0x4cb028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB02Cu;
        goto label_4cb02c;
    }
    ctx->pc = 0x4CB024u;
    SET_GPR_U32(ctx, 31, 0x4CB02Cu);
    ctx->pc = 0x4CB028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB024u;
            // 0x4cb028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB02Cu; }
        if (ctx->pc != 0x4CB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB02Cu; }
        if (ctx->pc != 0x4CB02Cu) { return; }
    }
    ctx->pc = 0x4CB02Cu;
label_4cb02c:
    // 0x4cb02c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cb030:
    // 0x4cb030: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4cb030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4cb034:
    // 0x4cb034: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cb034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4cb038:
    // 0x4cb038: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4cb038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4cb03c:
    // 0x4cb03c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cb040:
    // 0x4cb040: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4cb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4cb044:
    // 0x4cb044: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4cb044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cb048:
    // 0x4cb048: 0xc08c650  jal         func_231940
label_4cb04c:
    if (ctx->pc == 0x4CB04Cu) {
        ctx->pc = 0x4CB04Cu;
            // 0x4cb04c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB050u;
        goto label_4cb050;
    }
    ctx->pc = 0x4CB048u;
    SET_GPR_U32(ctx, 31, 0x4CB050u);
    ctx->pc = 0x4CB04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB048u;
            // 0x4cb04c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB050u; }
        if (ctx->pc != 0x4CB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB050u; }
        if (ctx->pc != 0x4CB050u) { return; }
    }
    ctx->pc = 0x4CB050u;
label_4cb050:
    // 0x4cb050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cb050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb054:
    // 0x4cb054: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4cb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cb058:
    // 0x4cb058: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x4cb058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_4cb05c:
    // 0x4cb05c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4cb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cb060:
    // 0x4cb060: 0xa2230065  sb          $v1, 0x65($s1)
    ctx->pc = 0x4cb060u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 3));
label_4cb064:
    // 0x4cb064: 0xa2220066  sb          $v0, 0x66($s1)
    ctx->pc = 0x4cb064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 2));
label_4cb068:
    // 0x4cb068: 0xa2230067  sb          $v1, 0x67($s1)
    ctx->pc = 0x4cb068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 3));
label_4cb06c:
    // 0x4cb06c: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x4cb06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_4cb070:
    // 0x4cb070: 0xa2230069  sb          $v1, 0x69($s1)
    ctx->pc = 0x4cb070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 3));
label_4cb074:
    // 0x4cb074: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x4cb074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_4cb078:
    // 0x4cb078: 0xc040180  jal         func_100600
label_4cb07c:
    if (ctx->pc == 0x4CB07Cu) {
        ctx->pc = 0x4CB07Cu;
            // 0x4cb07c: 0xa223006b  sb          $v1, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CB080u;
        goto label_4cb080;
    }
    ctx->pc = 0x4CB078u;
    SET_GPR_U32(ctx, 31, 0x4CB080u);
    ctx->pc = 0x4CB07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB078u;
            // 0x4cb07c: 0xa223006b  sb          $v1, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB080u; }
        if (ctx->pc != 0x4CB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB080u; }
        if (ctx->pc != 0x4CB080u) { return; }
    }
    ctx->pc = 0x4CB080u;
label_4cb080:
    // 0x4cb080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cb080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb084:
    // 0x4cb084: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4cb088:
    if (ctx->pc == 0x4CB088u) {
        ctx->pc = 0x4CB088u;
            // 0x4cb088: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4CB08Cu;
        goto label_4cb08c;
    }
    ctx->pc = 0x4CB084u;
    {
        const bool branch_taken_0x4cb084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb084) {
            ctx->pc = 0x4CB088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB084u;
            // 0x4cb088: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB0C4u;
            goto label_4cb0c4;
        }
    }
    ctx->pc = 0x4CB08Cu;
label_4cb08c:
    // 0x4cb08c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4cb090:
    // 0x4cb090: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4cb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cb094:
    // 0x4cb094: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4cb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4cb098:
    // 0x4cb098: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4cb098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4cb09c:
    // 0x4cb09c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4cb0a0:
    // 0x4cb0a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4cb0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4cb0a4:
    // 0x4cb0a4: 0xc040138  jal         func_1004E0
label_4cb0a8:
    if (ctx->pc == 0x4CB0A8u) {
        ctx->pc = 0x4CB0A8u;
            // 0x4cb0a8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4CB0ACu;
        goto label_4cb0ac;
    }
    ctx->pc = 0x4CB0A4u;
    SET_GPR_U32(ctx, 31, 0x4CB0ACu);
    ctx->pc = 0x4CB0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB0A4u;
            // 0x4cb0a8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0ACu; }
        if (ctx->pc != 0x4CB0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0ACu; }
        if (ctx->pc != 0x4CB0ACu) { return; }
    }
    ctx->pc = 0x4CB0ACu;
label_4cb0ac:
    // 0x4cb0ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4cb0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4cb0b0:
    // 0x4cb0b0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4cb0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4cb0b4:
    // 0x4cb0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cb0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb0b8:
    // 0x4cb0b8: 0xc04a576  jal         func_1295D8
label_4cb0bc:
    if (ctx->pc == 0x4CB0BCu) {
        ctx->pc = 0x4CB0BCu;
            // 0x4cb0bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4CB0C0u;
        goto label_4cb0c0;
    }
    ctx->pc = 0x4CB0B8u;
    SET_GPR_U32(ctx, 31, 0x4CB0C0u);
    ctx->pc = 0x4CB0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB0B8u;
            // 0x4cb0bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0C0u; }
        if (ctx->pc != 0x4CB0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0C0u; }
        if (ctx->pc != 0x4CB0C0u) { return; }
    }
    ctx->pc = 0x4CB0C0u;
label_4cb0c0:
    // 0x4cb0c0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4cb0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4cb0c4:
    // 0x4cb0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4cb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4cb0c8:
    // 0x4cb0c8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4cb0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4cb0cc:
    // 0x4cb0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cb0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cb0d0:
    // 0x4cb0d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb0d4:
    // 0x4cb0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cb0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb0d8:
    // 0x4cb0d8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4cb0dc:
    // 0x4cb0dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4cb0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb0e0:
    // 0x4cb0e0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4cb0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4cb0e4:
    // 0x4cb0e4: 0x344617ae  ori         $a2, $v0, 0x17AE
    ctx->pc = 0x4cb0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
label_4cb0e8:
    // 0x4cb0e8: 0xc122cd8  jal         func_48B360
label_4cb0ec:
    if (ctx->pc == 0x4CB0ECu) {
        ctx->pc = 0x4CB0ECu;
            // 0x4cb0ec: 0xae3000e4  sw          $s0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x4CB0F0u;
        goto label_4cb0f0;
    }
    ctx->pc = 0x4CB0E8u;
    SET_GPR_U32(ctx, 31, 0x4CB0F0u);
    ctx->pc = 0x4CB0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB0E8u;
            // 0x4cb0ec: 0xae3000e4  sw          $s0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0F0u; }
        if (ctx->pc != 0x4CB0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB0F0u; }
        if (ctx->pc != 0x4CB0F0u) { return; }
    }
    ctx->pc = 0x4CB0F0u;
label_4cb0f0:
    // 0x4cb0f0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4cb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4cb0f4:
    // 0x4cb0f4: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x4cb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4cb0f8:
    // 0x4cb0f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4cb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4cb0fc:
    // 0x4cb0fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4cb0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4cb100:
    // 0x4cb100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4cb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb104:
    // 0x4cb104: 0x240617ae  addiu       $a2, $zero, 0x17AE
    ctx->pc = 0x4cb104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6062));
label_4cb108:
    // 0x4cb108: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4cb108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb10c:
    // 0x4cb10c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4cb10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4cb110:
    // 0x4cb110: 0xc122cd8  jal         func_48B360
label_4cb114:
    if (ctx->pc == 0x4CB114u) {
        ctx->pc = 0x4CB114u;
            // 0x4cb114: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB118u;
        goto label_4cb118;
    }
    ctx->pc = 0x4CB110u;
    SET_GPR_U32(ctx, 31, 0x4CB118u);
    ctx->pc = 0x4CB114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB110u;
            // 0x4cb114: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB118u; }
        if (ctx->pc != 0x4CB118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB118u; }
        if (ctx->pc != 0x4CB118u) { return; }
    }
    ctx->pc = 0x4CB118u;
label_4cb118:
    // 0x4cb118: 0xc040180  jal         func_100600
label_4cb11c:
    if (ctx->pc == 0x4CB11Cu) {
        ctx->pc = 0x4CB11Cu;
            // 0x4cb11c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x4CB120u;
        goto label_4cb120;
    }
    ctx->pc = 0x4CB118u;
    SET_GPR_U32(ctx, 31, 0x4CB120u);
    ctx->pc = 0x4CB11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB118u;
            // 0x4cb11c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB120u; }
        if (ctx->pc != 0x4CB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB120u; }
        if (ctx->pc != 0x4CB120u) { return; }
    }
    ctx->pc = 0x4CB120u;
label_4cb120:
    // 0x4cb120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cb120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb124:
    // 0x4cb124: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_4cb128:
    if (ctx->pc == 0x4CB128u) {
        ctx->pc = 0x4CB12Cu;
        goto label_4cb12c;
    }
    ctx->pc = 0x4CB124u;
    {
        const bool branch_taken_0x4cb124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb124) {
            ctx->pc = 0x4CB1A8u;
            goto label_4cb1a8;
        }
    }
    ctx->pc = 0x4CB12Cu;
label_4cb12c:
    // 0x4cb12c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4cb12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4cb130:
    // 0x4cb130: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4cb130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4cb134:
    // 0x4cb134: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4cb134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4cb138:
    // 0x4cb138: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4cb138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4cb13c:
    // 0x4cb13c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4cb13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4cb140:
    // 0x4cb140: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4cb140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4cb144:
    // 0x4cb144: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4cb144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4cb148:
    // 0x4cb148: 0xc040138  jal         func_1004E0
label_4cb14c:
    if (ctx->pc == 0x4CB14Cu) {
        ctx->pc = 0x4CB14Cu;
            // 0x4cb14c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4CB150u;
        goto label_4cb150;
    }
    ctx->pc = 0x4CB148u;
    SET_GPR_U32(ctx, 31, 0x4CB150u);
    ctx->pc = 0x4CB14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB148u;
            // 0x4cb14c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB150u; }
        if (ctx->pc != 0x4CB150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB150u; }
        if (ctx->pc != 0x4CB150u) { return; }
    }
    ctx->pc = 0x4CB150u;
label_4cb150:
    // 0x4cb150: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cb150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4cb154:
    // 0x4cb154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cb154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb158:
    // 0x4cb158: 0xc040138  jal         func_1004E0
label_4cb15c:
    if (ctx->pc == 0x4CB15Cu) {
        ctx->pc = 0x4CB15Cu;
            // 0x4cb15c: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->pc = 0x4CB160u;
        goto label_4cb160;
    }
    ctx->pc = 0x4CB158u;
    SET_GPR_U32(ctx, 31, 0x4CB160u);
    ctx->pc = 0x4CB15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB158u;
            // 0x4cb15c: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB160u; }
        if (ctx->pc != 0x4CB160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB160u; }
        if (ctx->pc != 0x4CB160u) { return; }
    }
    ctx->pc = 0x4CB160u;
label_4cb160:
    // 0x4cb160: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4cb160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4cb164:
    // 0x4cb164: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4cb164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4cb168:
    // 0x4cb168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cb168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb16c:
    // 0x4cb16c: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4cb16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4cb170:
    // 0x4cb170: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4cb170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4cb174:
    // 0x4cb174: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4cb174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4cb178:
    // 0x4cb178: 0xc040840  jal         func_102100
label_4cb17c:
    if (ctx->pc == 0x4CB17Cu) {
        ctx->pc = 0x4CB17Cu;
            // 0x4cb17c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4CB180u;
        goto label_4cb180;
    }
    ctx->pc = 0x4CB178u;
    SET_GPR_U32(ctx, 31, 0x4CB180u);
    ctx->pc = 0x4CB17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB178u;
            // 0x4cb17c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB180u; }
        if (ctx->pc != 0x4CB180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB180u; }
        if (ctx->pc != 0x4CB180u) { return; }
    }
    ctx->pc = 0x4CB180u;
label_4cb180:
    // 0x4cb180: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4cb180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4cb184:
    // 0x4cb184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4cb184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb188:
    // 0x4cb188: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4cb188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4cb18c:
    // 0x4cb18c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4cb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4cb190:
    // 0x4cb190: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x4cb190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_4cb194:
    // 0x4cb194: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4cb194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4cb198:
    // 0x4cb198: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cb198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4cb19c:
    // 0x4cb19c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4cb1a0:
    if (ctx->pc == 0x4CB1A0u) {
        ctx->pc = 0x4CB1A4u;
        goto label_4cb1a4;
    }
    ctx->pc = 0x4CB19Cu;
    {
        const bool branch_taken_0x4cb19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb19c) {
            ctx->pc = 0x4CB188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cb188;
        }
    }
    ctx->pc = 0x4CB1A4u;
label_4cb1a4:
    // 0x4cb1a4: 0x0  nop
    ctx->pc = 0x4cb1a4u;
    // NOP
label_4cb1a8:
    // 0x4cb1a8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x4cb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_4cb1ac:
    // 0x4cb1ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cb1b0:
    // 0x4cb1b0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb1b4:
    // 0x4cb1b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb1b8:
    // 0x4cb1b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4cb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cb1bc:
    // 0x4cb1bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4cb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb1c0:
    // 0x4cb1c0: 0xc0e7d2c  jal         func_39F4B0
label_4cb1c4:
    if (ctx->pc == 0x4CB1C4u) {
        ctx->pc = 0x4CB1C4u;
            // 0x4cb1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB1C8u;
        goto label_4cb1c8;
    }
    ctx->pc = 0x4CB1C0u;
    SET_GPR_U32(ctx, 31, 0x4CB1C8u);
    ctx->pc = 0x4CB1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB1C0u;
            // 0x4cb1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB1C8u; }
        if (ctx->pc != 0x4CB1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB1C8u; }
        if (ctx->pc != 0x4CB1C8u) { return; }
    }
    ctx->pc = 0x4CB1C8u;
label_4cb1c8:
    // 0x4cb1c8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb1cc:
    // 0x4cb1cc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb1d0:
    // 0x4cb1d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb1d4:
    // 0x4cb1d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4cb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cb1d8:
    // 0x4cb1d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb1dc:
    // 0x4cb1dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4cb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4cb1e0:
    // 0x4cb1e0: 0xc0e7d2c  jal         func_39F4B0
label_4cb1e4:
    if (ctx->pc == 0x4CB1E4u) {
        ctx->pc = 0x4CB1E4u;
            // 0x4cb1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB1E8u;
        goto label_4cb1e8;
    }
    ctx->pc = 0x4CB1E0u;
    SET_GPR_U32(ctx, 31, 0x4CB1E8u);
    ctx->pc = 0x4CB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB1E0u;
            // 0x4cb1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB1E8u; }
        if (ctx->pc != 0x4CB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB1E8u; }
        if (ctx->pc != 0x4CB1E8u) { return; }
    }
    ctx->pc = 0x4CB1E8u;
label_4cb1e8:
    // 0x4cb1e8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb1ec:
    // 0x4cb1ec: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb1f0:
    // 0x4cb1f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb1f4:
    // 0x4cb1f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4cb1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cb1f8:
    // 0x4cb1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb1fc:
    // 0x4cb1fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4cb1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4cb200:
    // 0x4cb200: 0xc0e7d2c  jal         func_39F4B0
label_4cb204:
    if (ctx->pc == 0x4CB204u) {
        ctx->pc = 0x4CB204u;
            // 0x4cb204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB208u;
        goto label_4cb208;
    }
    ctx->pc = 0x4CB200u;
    SET_GPR_U32(ctx, 31, 0x4CB208u);
    ctx->pc = 0x4CB204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB200u;
            // 0x4cb204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB208u; }
        if (ctx->pc != 0x4CB208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB208u; }
        if (ctx->pc != 0x4CB208u) { return; }
    }
    ctx->pc = 0x4CB208u;
label_4cb208:
    // 0x4cb208: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb20c:
    // 0x4cb20c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb210:
    // 0x4cb210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb214:
    // 0x4cb214: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4cb214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4cb218:
    // 0x4cb218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb21c:
    // 0x4cb21c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4cb220:
    // 0x4cb220: 0xc0e7d2c  jal         func_39F4B0
label_4cb224:
    if (ctx->pc == 0x4CB224u) {
        ctx->pc = 0x4CB224u;
            // 0x4cb224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB228u;
        goto label_4cb228;
    }
    ctx->pc = 0x4CB220u;
    SET_GPR_U32(ctx, 31, 0x4CB228u);
    ctx->pc = 0x4CB224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB220u;
            // 0x4cb224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB228u; }
        if (ctx->pc != 0x4CB228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB228u; }
        if (ctx->pc != 0x4CB228u) { return; }
    }
    ctx->pc = 0x4CB228u;
label_4cb228:
    // 0x4cb228: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb22c:
    // 0x4cb22c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb230:
    // 0x4cb230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb234:
    // 0x4cb234: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4cb234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4cb238:
    // 0x4cb238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb23c:
    // 0x4cb23c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4cb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4cb240:
    // 0x4cb240: 0xc0e7d2c  jal         func_39F4B0
label_4cb244:
    if (ctx->pc == 0x4CB244u) {
        ctx->pc = 0x4CB244u;
            // 0x4cb244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB248u;
        goto label_4cb248;
    }
    ctx->pc = 0x4CB240u;
    SET_GPR_U32(ctx, 31, 0x4CB248u);
    ctx->pc = 0x4CB244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB240u;
            // 0x4cb244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB248u; }
        if (ctx->pc != 0x4CB248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB248u; }
        if (ctx->pc != 0x4CB248u) { return; }
    }
    ctx->pc = 0x4CB248u;
label_4cb248:
    // 0x4cb248: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb24c:
    // 0x4cb24c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb250:
    // 0x4cb250: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb254:
    // 0x4cb254: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4cb254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4cb258:
    // 0x4cb258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb25c:
    // 0x4cb25c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x4cb25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4cb260:
    // 0x4cb260: 0xc0e7d2c  jal         func_39F4B0
label_4cb264:
    if (ctx->pc == 0x4CB264u) {
        ctx->pc = 0x4CB264u;
            // 0x4cb264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB268u;
        goto label_4cb268;
    }
    ctx->pc = 0x4CB260u;
    SET_GPR_U32(ctx, 31, 0x4CB268u);
    ctx->pc = 0x4CB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB260u;
            // 0x4cb264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB268u; }
        if (ctx->pc != 0x4CB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB268u; }
        if (ctx->pc != 0x4CB268u) { return; }
    }
    ctx->pc = 0x4CB268u;
label_4cb268:
    // 0x4cb268: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x4cb268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4cb26c:
    // 0x4cb26c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4cb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4cb270:
    // 0x4cb270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4cb270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb274:
    // 0x4cb274: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4cb274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4cb278:
    // 0x4cb278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cb278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb27c:
    // 0x4cb27c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x4cb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4cb280:
    // 0x4cb280: 0xc0e7d2c  jal         func_39F4B0
label_4cb284:
    if (ctx->pc == 0x4CB284u) {
        ctx->pc = 0x4CB284u;
            // 0x4cb284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB288u;
        goto label_4cb288;
    }
    ctx->pc = 0x4CB280u;
    SET_GPR_U32(ctx, 31, 0x4CB288u);
    ctx->pc = 0x4CB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB280u;
            // 0x4cb284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB288u; }
        if (ctx->pc != 0x4CB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB288u; }
        if (ctx->pc != 0x4CB288u) { return; }
    }
    ctx->pc = 0x4CB288u;
label_4cb288:
    // 0x4cb288: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4cb288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4cb28c:
    // 0x4cb28c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x4cb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4cb290:
    // 0x4cb290: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4cb290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4cb294:
    // 0x4cb294: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4cb294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4cb298:
    // 0x4cb298: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x4cb298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_4cb29c:
    // 0x4cb29c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cb29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cb2a0:
    // 0x4cb2a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4cb2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4cb2a4:
    // 0x4cb2a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4cb2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cb2a8:
    // 0x4cb2a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4cb2ac:
    // 0x4cb2ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4cb2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cb2b0:
    // 0x4cb2b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4cb2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb2b4:
    // 0x4cb2b4: 0x3e00008  jr          $ra
label_4cb2b8:
    if (ctx->pc == 0x4CB2B8u) {
        ctx->pc = 0x4CB2B8u;
            // 0x4cb2b8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4CB2BCu;
        goto label_4cb2bc;
    }
    ctx->pc = 0x4CB2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB2B4u;
            // 0x4cb2b8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB2BCu;
label_4cb2bc:
    // 0x4cb2bc: 0x0  nop
    ctx->pc = 0x4cb2bcu;
    // NOP
label_4cb2c0:
    // 0x4cb2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cb2c4:
    // 0x4cb2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cb2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cb2c8:
    // 0x4cb2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cb2cc:
    // 0x4cb2cc: 0xc0e3580  jal         func_38D600
label_4cb2d0:
    if (ctx->pc == 0x4CB2D0u) {
        ctx->pc = 0x4CB2D0u;
            // 0x4cb2d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB2D4u;
        goto label_4cb2d4;
    }
    ctx->pc = 0x4CB2CCu;
    SET_GPR_U32(ctx, 31, 0x4CB2D4u);
    ctx->pc = 0x4CB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB2CCu;
            // 0x4cb2d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB2D4u; }
        if (ctx->pc != 0x4CB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB2D4u; }
        if (ctx->pc != 0x4CB2D4u) { return; }
    }
    ctx->pc = 0x4CB2D4u;
label_4cb2d4:
    // 0x4cb2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb2d8:
    // 0x4cb2d8: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x4cb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_4cb2dc:
    // 0x4cb2dc: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x4cb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_4cb2e0:
    // 0x4cb2e0: 0x3c0444e1  lui         $a0, 0x44E1
    ctx->pc = 0x4cb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17633 << 16));
label_4cb2e4:
    // 0x4cb2e4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x4cb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_4cb2e8:
    // 0x4cb2e8: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x4cb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_4cb2ec:
    // 0x4cb2ec: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x4cb2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_4cb2f0:
    // 0x4cb2f0: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x4cb2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_4cb2f4:
    // 0x4cb2f4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x4cb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4cb2f8:
    // 0x4cb2f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4cb2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4cb2fc:
    // 0x4cb2fc: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x4cb2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_4cb300:
    // 0x4cb300: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x4cb300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_4cb304:
    // 0x4cb304: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x4cb304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb308:
    // 0x4cb308: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x4cb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_4cb30c:
    // 0x4cb30c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x4cb30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb310:
    // 0x4cb310: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x4cb310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_4cb314:
    // 0x4cb314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cb314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb318:
    // 0x4cb318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb31c:
    // 0x4cb31c: 0x3e00008  jr          $ra
label_4cb320:
    if (ctx->pc == 0x4CB320u) {
        ctx->pc = 0x4CB320u;
            // 0x4cb320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CB324u;
        goto label_4cb324;
    }
    ctx->pc = 0x4CB31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB31Cu;
            // 0x4cb320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB324u;
label_4cb324:
    // 0x4cb324: 0x0  nop
    ctx->pc = 0x4cb324u;
    // NOP
label_4cb328:
    // 0x4cb328: 0x0  nop
    ctx->pc = 0x4cb328u;
    // NOP
label_4cb32c:
    // 0x4cb32c: 0x0  nop
    ctx->pc = 0x4cb32cu;
    // NOP
label_4cb330:
    // 0x4cb330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cb334:
    // 0x4cb334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cb334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cb338:
    // 0x4cb338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cb33c:
    // 0x4cb33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cb340:
    // 0x4cb340: 0xc0e34b0  jal         func_38D2C0
label_4cb344:
    if (ctx->pc == 0x4CB344u) {
        ctx->pc = 0x4CB344u;
            // 0x4cb344: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB348u;
        goto label_4cb348;
    }
    ctx->pc = 0x4CB340u;
    SET_GPR_U32(ctx, 31, 0x4CB348u);
    ctx->pc = 0x4CB344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB340u;
            // 0x4cb344: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB348u; }
        if (ctx->pc != 0x4CB348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB348u; }
        if (ctx->pc != 0x4CB348u) { return; }
    }
    ctx->pc = 0x4CB348u;
label_4cb348:
    // 0x4cb348: 0x8e030a60  lw          $v1, 0xA60($s0)
    ctx->pc = 0x4cb348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
label_4cb34c:
    // 0x4cb34c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4cb34cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4cb350:
    // 0x4cb350: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x4cb350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_4cb354:
    // 0x4cb354: 0x8e030e38  lw          $v1, 0xE38($s0)
    ctx->pc = 0x4cb354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3640)));
label_4cb358:
    // 0x4cb358: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4cb35c:
    if (ctx->pc == 0x4CB35Cu) {
        ctx->pc = 0x4CB35Cu;
            // 0x4cb35c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB360u;
        goto label_4cb360;
    }
    ctx->pc = 0x4CB358u;
    {
        const bool branch_taken_0x4cb358 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB358u;
            // 0x4cb35c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb358) {
            ctx->pc = 0x4CB370u;
            goto label_4cb370;
        }
    }
    ctx->pc = 0x4CB360u;
label_4cb360:
    // 0x4cb360: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4cb360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4cb364:
    // 0x4cb364: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4cb368:
    if (ctx->pc == 0x4CB368u) {
        ctx->pc = 0x4CB36Cu;
        goto label_4cb36c;
    }
    ctx->pc = 0x4CB364u;
    {
        const bool branch_taken_0x4cb364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb364) {
            ctx->pc = 0x4CB370u;
            goto label_4cb370;
        }
    }
    ctx->pc = 0x4CB36Cu;
label_4cb36c:
    // 0x4cb36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cb36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cb370:
    // 0x4cb370: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4cb374:
    if (ctx->pc == 0x4CB374u) {
        ctx->pc = 0x4CB378u;
        goto label_4cb378;
    }
    ctx->pc = 0x4CB370u;
    {
        const bool branch_taken_0x4cb370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb370) {
            ctx->pc = 0x4CB38Cu;
            goto label_4cb38c;
        }
    }
    ctx->pc = 0x4CB378u;
label_4cb378:
    // 0x4cb378: 0xc075eb4  jal         func_1D7AD0
label_4cb37c:
    if (ctx->pc == 0x4CB37Cu) {
        ctx->pc = 0x4CB37Cu;
            // 0x4cb37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB380u;
        goto label_4cb380;
    }
    ctx->pc = 0x4CB378u;
    SET_GPR_U32(ctx, 31, 0x4CB380u);
    ctx->pc = 0x4CB37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB378u;
            // 0x4cb37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB380u; }
        if (ctx->pc != 0x4CB380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB380u; }
        if (ctx->pc != 0x4CB380u) { return; }
    }
    ctx->pc = 0x4CB380u;
label_4cb380:
    // 0x4cb380: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4cb384:
    if (ctx->pc == 0x4CB384u) {
        ctx->pc = 0x4CB388u;
        goto label_4cb388;
    }
    ctx->pc = 0x4CB380u;
    {
        const bool branch_taken_0x4cb380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cb380) {
            ctx->pc = 0x4CB38Cu;
            goto label_4cb38c;
        }
    }
    ctx->pc = 0x4CB388u;
label_4cb388:
    // 0x4cb388: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4cb388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb38c:
    // 0x4cb38c: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
label_4cb390:
    if (ctx->pc == 0x4CB390u) {
        ctx->pc = 0x4CB390u;
            // 0x4cb390: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4CB394u;
        goto label_4cb394;
    }
    ctx->pc = 0x4CB38Cu;
    {
        const bool branch_taken_0x4cb38c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb38c) {
            ctx->pc = 0x4CB390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB38Cu;
            // 0x4cb390: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB3DCu;
            goto label_4cb3dc;
        }
    }
    ctx->pc = 0x4CB394u;
label_4cb394:
    // 0x4cb394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cb394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cb398:
    // 0x4cb398: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x4cb398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cb39c:
    // 0x4cb39c: 0xc040180  jal         func_100600
label_4cb3a0:
    if (ctx->pc == 0x4CB3A0u) {
        ctx->pc = 0x4CB3A0u;
            // 0x4cb3a0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4CB3A4u;
        goto label_4cb3a4;
    }
    ctx->pc = 0x4CB39Cu;
    SET_GPR_U32(ctx, 31, 0x4CB3A4u);
    ctx->pc = 0x4CB3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB39Cu;
            // 0x4cb3a0: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB3A4u; }
        if (ctx->pc != 0x4CB3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB3A4u; }
        if (ctx->pc != 0x4CB3A4u) { return; }
    }
    ctx->pc = 0x4CB3A4u;
label_4cb3a4:
    // 0x4cb3a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cb3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cb3a8:
    // 0x4cb3a8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_4cb3ac:
    if (ctx->pc == 0x4CB3ACu) {
        ctx->pc = 0x4CB3B0u;
        goto label_4cb3b0;
    }
    ctx->pc = 0x4CB3A8u;
    {
        const bool branch_taken_0x4cb3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb3a8) {
            ctx->pc = 0x4CB3D8u;
            goto label_4cb3d8;
        }
    }
    ctx->pc = 0x4CB3B0u;
label_4cb3b0:
    // 0x4cb3b0: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x4cb3b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4cb3b4:
    // 0x4cb3b4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4cb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4cb3b8:
    // 0x4cb3b8: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4cb3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4cb3bc:
    // 0x4cb3bc: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x4cb3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_4cb3c0:
    // 0x4cb3c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4cb3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4cb3c4:
    // 0x4cb3c4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4cb3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cb3c8:
    // 0x4cb3c8: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x4cb3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_4cb3cc:
    // 0x4cb3cc: 0x34088081  ori         $t0, $zero, 0x8081
    ctx->pc = 0x4cb3ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32897);
label_4cb3d0:
    // 0x4cb3d0: 0xc0b9404  jal         func_2E5010
label_4cb3d4:
    if (ctx->pc == 0x4CB3D4u) {
        ctx->pc = 0x4CB3D4u;
            // 0x4cb3d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB3D8u;
        goto label_4cb3d8;
    }
    ctx->pc = 0x4CB3D0u;
    SET_GPR_U32(ctx, 31, 0x4CB3D8u);
    ctx->pc = 0x4CB3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB3D0u;
            // 0x4cb3d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB3D8u; }
        if (ctx->pc != 0x4CB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB3D8u; }
        if (ctx->pc != 0x4CB3D8u) { return; }
    }
    ctx->pc = 0x4CB3D8u;
label_4cb3d8:
    // 0x4cb3d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cb3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cb3dc:
    // 0x4cb3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cb3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb3e0:
    // 0x4cb3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb3e4:
    // 0x4cb3e4: 0x3e00008  jr          $ra
label_4cb3e8:
    if (ctx->pc == 0x4CB3E8u) {
        ctx->pc = 0x4CB3E8u;
            // 0x4cb3e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CB3ECu;
        goto label_4cb3ec;
    }
    ctx->pc = 0x4CB3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB3E4u;
            // 0x4cb3e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB3ECu;
label_4cb3ec:
    // 0x4cb3ec: 0x0  nop
    ctx->pc = 0x4cb3ecu;
    // NOP
label_4cb3f0:
    // 0x4cb3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cb3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cb3f4:
    // 0x4cb3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cb3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cb3f8:
    // 0x4cb3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cb3fc:
    // 0x4cb3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cb3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cb400:
    // 0x4cb400: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x4cb400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_4cb404:
    // 0x4cb404: 0xc122c5c  jal         func_48B170
label_4cb408:
    if (ctx->pc == 0x4CB408u) {
        ctx->pc = 0x4CB408u;
            // 0x4cb408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CB40Cu;
        goto label_4cb40c;
    }
    ctx->pc = 0x4CB404u;
    SET_GPR_U32(ctx, 31, 0x4CB40Cu);
    ctx->pc = 0x4CB408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB404u;
            // 0x4cb408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB40Cu; }
        if (ctx->pc != 0x4CB40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB40Cu; }
        if (ctx->pc != 0x4CB40Cu) { return; }
    }
    ctx->pc = 0x4CB40Cu;
label_4cb40c:
    // 0x4cb40c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x4cb40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_4cb410:
    // 0x4cb410: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4cb410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb414:
    // 0x4cb414: 0xc122d2c  jal         func_48B4B0
label_4cb418:
    if (ctx->pc == 0x4CB418u) {
        ctx->pc = 0x4CB418u;
            // 0x4cb418: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4CB41Cu;
        goto label_4cb41c;
    }
    ctx->pc = 0x4CB414u;
    SET_GPR_U32(ctx, 31, 0x4CB41Cu);
    ctx->pc = 0x4CB418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB414u;
            // 0x4cb418: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB41Cu; }
        if (ctx->pc != 0x4CB41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB41Cu; }
        if (ctx->pc != 0x4CB41Cu) { return; }
    }
    ctx->pc = 0x4CB41Cu;
label_4cb41c:
    // 0x4cb41c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x4cb41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_4cb420:
    // 0x4cb420: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_4cb424:
    if (ctx->pc == 0x4CB424u) {
        ctx->pc = 0x4CB424u;
            // 0x4cb424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4CB428u;
        goto label_4cb428;
    }
    ctx->pc = 0x4CB420u;
    {
        const bool branch_taken_0x4cb420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb420) {
            ctx->pc = 0x4CB424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB420u;
            // 0x4cb424: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB440u;
            goto label_4cb440;
        }
    }
    ctx->pc = 0x4CB428u;
label_4cb428:
    // 0x4cb428: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4cb42c:
    // 0x4cb42c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4cb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4cb430:
    // 0x4cb430: 0xc057b7c  jal         func_15EDF0
label_4cb434:
    if (ctx->pc == 0x4CB434u) {
        ctx->pc = 0x4CB434u;
            // 0x4cb434: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4CB438u;
        goto label_4cb438;
    }
    ctx->pc = 0x4CB430u;
    SET_GPR_U32(ctx, 31, 0x4CB438u);
    ctx->pc = 0x4CB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB430u;
            // 0x4cb434: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB438u; }
        if (ctx->pc != 0x4CB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB438u; }
        if (ctx->pc != 0x4CB438u) { return; }
    }
    ctx->pc = 0x4CB438u;
label_4cb438:
    // 0x4cb438: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4cb438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_4cb43c:
    // 0x4cb43c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cb43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb440:
    // 0x4cb440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb444:
    // 0x4cb444: 0x3e00008  jr          $ra
label_4cb448:
    if (ctx->pc == 0x4CB448u) {
        ctx->pc = 0x4CB448u;
            // 0x4cb448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CB44Cu;
        goto label_4cb44c;
    }
    ctx->pc = 0x4CB444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB444u;
            // 0x4cb448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB44Cu;
label_4cb44c:
    // 0x4cb44c: 0x0  nop
    ctx->pc = 0x4cb44cu;
    // NOP
label_4cb450:
    // 0x4cb450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4cb450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4cb454:
    // 0x4cb454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb458:
    // 0x4cb458: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4cb458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4cb45c:
    // 0x4cb45c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4cb45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4cb460:
    // 0x4cb460: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cb460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cb464:
    // 0x4cb464: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4cb464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cb468:
    // 0x4cb468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cb468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cb46c:
    // 0x4cb46c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cb46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cb470:
    // 0x4cb470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cb470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cb474:
    // 0x4cb474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cb474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cb478:
    // 0x4cb478: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x4cb478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4cb47c:
    // 0x4cb47c: 0x50830021  beql        $a0, $v1, . + 4 + (0x21 << 2)
label_4cb480:
    if (ctx->pc == 0x4CB480u) {
        ctx->pc = 0x4CB480u;
            // 0x4cb480: 0x8ea400e4  lw          $a0, 0xE4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
        ctx->pc = 0x4CB484u;
        goto label_4cb484;
    }
    ctx->pc = 0x4CB47Cu;
    {
        const bool branch_taken_0x4cb47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cb47c) {
            ctx->pc = 0x4CB480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB47Cu;
            // 0x4cb480: 0x8ea400e4  lw          $a0, 0xE4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB504u;
            goto label_4cb504;
        }
    }
    ctx->pc = 0x4CB484u;
label_4cb484:
    // 0x4cb484: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cb488:
    if (ctx->pc == 0x4CB488u) {
        ctx->pc = 0x4CB48Cu;
        goto label_4cb48c;
    }
    ctx->pc = 0x4CB484u;
    {
        const bool branch_taken_0x4cb484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cb484) {
            ctx->pc = 0x4CB494u;
            goto label_4cb494;
        }
    }
    ctx->pc = 0x4CB48Cu;
label_4cb48c:
    // 0x4cb48c: 0x10000059  b           . + 4 + (0x59 << 2)
label_4cb490:
    if (ctx->pc == 0x4CB490u) {
        ctx->pc = 0x4CB490u;
            // 0x4cb490: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4CB494u;
        goto label_4cb494;
    }
    ctx->pc = 0x4CB48Cu;
    {
        const bool branch_taken_0x4cb48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB48Cu;
            // 0x4cb490: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb48c) {
            ctx->pc = 0x4CB5F4u;
            goto label_4cb5f4;
        }
    }
    ctx->pc = 0x4CB494u;
label_4cb494:
    // 0x4cb494: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4cb498:
    // 0x4cb498: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x4cb498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4cb49c:
    // 0x4cb49c: 0x8c42aa10  lw          $v0, -0x55F0($v0)
    ctx->pc = 0x4cb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945296)));
label_4cb4a0:
    // 0x4cb4a0: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x4cb4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_4cb4a4:
    // 0x4cb4a4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x4cb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_4cb4a8:
    // 0x4cb4a8: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x4cb4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4cb4ac:
    // 0x4cb4ac: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x4cb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_4cb4b0:
    // 0x4cb4b0: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x4cb4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cb4b4:
    // 0x4cb4b4: 0x8c730010  lw          $s3, 0x10($v1)
    ctx->pc = 0x4cb4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4cb4b8:
    // 0x4cb4b8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x4cb4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4cb4bc:
    // 0x4cb4bc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4cb4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4cb4c0:
    // 0x4cb4c0: 0x24a5c840  addiu       $a1, $a1, -0x37C0
    ctx->pc = 0x4cb4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953024));
label_4cb4c4:
    // 0x4cb4c4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4cb4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4cb4c8:
    // 0x4cb4c8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4cb4cc:
    // 0x4cb4cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cb4d0:
    // 0x4cb4d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4cb4d4:
    // 0x4cb4d4: 0xc0d615c  jal         func_358570
label_4cb4d8:
    if (ctx->pc == 0x4CB4D8u) {
        ctx->pc = 0x4CB4D8u;
            // 0x4cb4d8: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x4CB4DCu;
        goto label_4cb4dc;
    }
    ctx->pc = 0x4CB4D4u;
    SET_GPR_U32(ctx, 31, 0x4CB4DCu);
    ctx->pc = 0x4CB4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB4D4u;
            // 0x4cb4d8: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB4DCu; }
        if (ctx->pc != 0x4CB4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB4DCu; }
        if (ctx->pc != 0x4CB4DCu) { return; }
    }
    ctx->pc = 0x4CB4DCu;
label_4cb4dc:
    // 0x4cb4dc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4cb4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4cb4e0:
    // 0x4cb4e0: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x4cb4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_4cb4e4:
    // 0x4cb4e4: 0x1e60fff4  bgtz        $s3, . + 4 + (-0xC << 2)
label_4cb4e8:
    if (ctx->pc == 0x4CB4E8u) {
        ctx->pc = 0x4CB4E8u;
            // 0x4cb4e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4CB4ECu;
        goto label_4cb4ec;
    }
    ctx->pc = 0x4CB4E4u;
    {
        const bool branch_taken_0x4cb4e4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x4CB4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB4E4u;
            // 0x4cb4e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb4e4) {
            ctx->pc = 0x4CB4B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cb4b8;
        }
    }
    ctx->pc = 0x4CB4ECu;
label_4cb4ec:
    // 0x4cb4ec: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4cb4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4cb4f0:
    // 0x4cb4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cb4f4:
    // 0x4cb4f4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x4cb4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb4f8:
    // 0x4cb4f8: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x4cb4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
label_4cb4fc:
    // 0x4cb4fc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4cb500:
    if (ctx->pc == 0x4CB500u) {
        ctx->pc = 0x4CB500u;
            // 0x4cb500: 0xaea300d0  sw          $v1, 0xD0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4CB504u;
        goto label_4cb504;
    }
    ctx->pc = 0x4CB4FCu;
    {
        const bool branch_taken_0x4cb4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB4FCu;
            // 0x4cb500: 0xaea300d0  sw          $v1, 0xD0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb4fc) {
            ctx->pc = 0x4CB5F0u;
            goto label_4cb5f0;
        }
    }
    ctx->pc = 0x4CB504u;
label_4cb504:
    // 0x4cb504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cb504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb508:
    // 0x4cb508: 0xc122d2c  jal         func_48B4B0
label_4cb50c:
    if (ctx->pc == 0x4CB50Cu) {
        ctx->pc = 0x4CB50Cu;
            // 0x4cb50c: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4CB510u;
        goto label_4cb510;
    }
    ctx->pc = 0x4CB508u;
    SET_GPR_U32(ctx, 31, 0x4CB510u);
    ctx->pc = 0x4CB50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB508u;
            // 0x4cb50c: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB510u; }
        if (ctx->pc != 0x4CB510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CB510u; }
        if (ctx->pc != 0x4CB510u) { return; }
    }
    ctx->pc = 0x4CB510u;
label_4cb510:
    // 0x4cb510: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4cb510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4cb514:
    // 0x4cb514: 0xc6a000d4  lwc1        $f0, 0xD4($s5)
    ctx->pc = 0x4cb514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb518:
    // 0x4cb518: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4cb518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4cb51c:
    // 0x4cb51c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4cb51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4cb520:
    // 0x4cb520: 0xc6a200e0  lwc1        $f2, 0xE0($s5)
    ctx->pc = 0x4cb520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cb524:
    // 0x4cb524: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x4cb524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4cb528:
    // 0x4cb528: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4cb528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb52c:
    // 0x4cb52c: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x4cb52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_4cb530:
    // 0x4cb530: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x4cb530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
label_4cb534:
    // 0x4cb534: 0xc6a000e0  lwc1        $f0, 0xE0($s5)
    ctx->pc = 0x4cb534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb538:
    // 0x4cb538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4cb538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cb53c:
    // 0x4cb53c: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_4cb540:
    if (ctx->pc == 0x4CB540u) {
        ctx->pc = 0x4CB540u;
            // 0x4cb540: 0xc6a000d4  lwc1        $f0, 0xD4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4CB544u;
        goto label_4cb544;
    }
    ctx->pc = 0x4CB53Cu;
    {
        const bool branch_taken_0x4cb53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4cb53c) {
            ctx->pc = 0x4CB540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB53Cu;
            // 0x4cb540: 0xc6a000d4  lwc1        $f0, 0xD4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB598u;
            goto label_4cb598;
        }
    }
    ctx->pc = 0x4CB544u;
label_4cb544:
    // 0x4cb544: 0xc6a100d4  lwc1        $f1, 0xD4($s5)
    ctx->pc = 0x4cb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cb548:
    // 0x4cb548: 0xc6a000d8  lwc1        $f0, 0xD8($s5)
    ctx->pc = 0x4cb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb54c:
    // 0x4cb54c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4cb54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cb550:
    // 0x4cb550: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4cb554:
    if (ctx->pc == 0x4CB554u) {
        ctx->pc = 0x4CB554u;
            // 0x4cb554: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CB558u;
        goto label_4cb558;
    }
    ctx->pc = 0x4CB550u;
    {
        const bool branch_taken_0x4cb550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB550u;
            // 0x4cb554: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb550) {
            ctx->pc = 0x4CB55Cu;
            goto label_4cb55c;
        }
    }
    ctx->pc = 0x4CB558u;
label_4cb558:
    // 0x4cb558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4cb558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb55c:
    // 0x4cb55c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4cb560:
    if (ctx->pc == 0x4CB560u) {
        ctx->pc = 0x4CB560u;
            // 0x4cb560: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4CB564u;
        goto label_4cb564;
    }
    ctx->pc = 0x4CB55Cu;
    {
        const bool branch_taken_0x4cb55c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4cb55c) {
            ctx->pc = 0x4CB560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB55Cu;
            // 0x4cb560: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB570u;
            goto label_4cb570;
        }
    }
    ctx->pc = 0x4CB564u;
label_4cb564:
    // 0x4cb564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4cb564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cb568:
    // 0x4cb568: 0x10000007  b           . + 4 + (0x7 << 2)
label_4cb56c:
    if (ctx->pc == 0x4CB56Cu) {
        ctx->pc = 0x4CB56Cu;
            // 0x4cb56c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CB570u;
        goto label_4cb570;
    }
    ctx->pc = 0x4CB568u;
    {
        const bool branch_taken_0x4cb568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB568u;
            // 0x4cb56c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb568) {
            ctx->pc = 0x4CB588u;
            goto label_4cb588;
        }
    }
    ctx->pc = 0x4CB570u;
label_4cb570:
    // 0x4cb570: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4cb570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4cb574:
    // 0x4cb574: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4cb574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4cb578:
    // 0x4cb578: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4cb578u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cb57c:
    // 0x4cb57c: 0x0  nop
    ctx->pc = 0x4cb57cu;
    // NOP
label_4cb580:
    // 0x4cb580: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4cb580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4cb584:
    // 0x4cb584: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4cb584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4cb588:
    // 0x4cb588: 0xc6a000d4  lwc1        $f0, 0xD4($s5)
    ctx->pc = 0x4cb588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cb58c:
    // 0x4cb58c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4cb58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4cb590:
    // 0x4cb590: 0x10000017  b           . + 4 + (0x17 << 2)
label_4cb594:
    if (ctx->pc == 0x4CB594u) {
        ctx->pc = 0x4CB594u;
            // 0x4cb594: 0xe6a000d4  swc1        $f0, 0xD4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
        ctx->pc = 0x4CB598u;
        goto label_4cb598;
    }
    ctx->pc = 0x4CB590u;
    {
        const bool branch_taken_0x4cb590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB590u;
            // 0x4cb594: 0xe6a000d4  swc1        $f0, 0xD4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb590) {
            ctx->pc = 0x4CB5F0u;
            goto label_4cb5f0;
        }
    }
    ctx->pc = 0x4CB598u;
label_4cb598:
    // 0x4cb598: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4cb598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cb59c:
    // 0x4cb59c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4cb5a0:
    if (ctx->pc == 0x4CB5A0u) {
        ctx->pc = 0x4CB5A0u;
            // 0x4cb5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CB5A4u;
        goto label_4cb5a4;
    }
    ctx->pc = 0x4CB59Cu;
    {
        const bool branch_taken_0x4cb59c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CB5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB59Cu;
            // 0x4cb5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb59c) {
            ctx->pc = 0x4CB5A8u;
            goto label_4cb5a8;
        }
    }
    ctx->pc = 0x4CB5A4u;
label_4cb5a4:
    // 0x4cb5a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4cb5a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cb5a8:
    // 0x4cb5a8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4cb5ac:
    if (ctx->pc == 0x4CB5ACu) {
        ctx->pc = 0x4CB5ACu;
            // 0x4cb5ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4CB5B0u;
        goto label_4cb5b0;
    }
    ctx->pc = 0x4CB5A8u;
    {
        const bool branch_taken_0x4cb5a8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4cb5a8) {
            ctx->pc = 0x4CB5ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB5A8u;
            // 0x4cb5ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CB5BCu;
            goto label_4cb5bc;
        }
    }
    ctx->pc = 0x4CB5B0u;
label_4cb5b0:
    // 0x4cb5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4cb5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cb5b4:
    // 0x4cb5b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4cb5b8:
    if (ctx->pc == 0x4CB5B8u) {
        ctx->pc = 0x4CB5B8u;
            // 0x4cb5b8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4CB5BCu;
        goto label_4cb5bc;
    }
    ctx->pc = 0x4CB5B4u;
    {
        const bool branch_taken_0x4cb5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB5B4u;
            // 0x4cb5b8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb5b4) {
            ctx->pc = 0x4CB5D4u;
            goto label_4cb5d4;
        }
    }
    ctx->pc = 0x4CB5BCu;
label_4cb5bc:
    // 0x4cb5bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4cb5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4cb5c0:
    // 0x4cb5c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4cb5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4cb5c4:
    // 0x4cb5c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4cb5c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cb5c8:
    // 0x4cb5c8: 0x0  nop
    ctx->pc = 0x4cb5c8u;
    // NOP
label_4cb5cc:
    // 0x4cb5cc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4cb5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4cb5d0:
    // 0x4cb5d0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4cb5d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4cb5d4:
    // 0x4cb5d4: 0xc6a100d4  lwc1        $f1, 0xD4($s5)
    ctx->pc = 0x4cb5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cb5d8:
    // 0x4cb5d8: 0xc6a200d8  lwc1        $f2, 0xD8($s5)
    ctx->pc = 0x4cb5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cb5dc:
    // 0x4cb5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cb5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cb5e0:
    // 0x4cb5e0: 0x0  nop
    ctx->pc = 0x4cb5e0u;
    // NOP
label_4cb5e4:
    // 0x4cb5e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4cb5e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4cb5e8:
    // 0x4cb5e8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4cb5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4cb5ec:
    // 0x4cb5ec: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x4cb5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
label_4cb5f0:
    // 0x4cb5f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4cb5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4cb5f4:
    // 0x4cb5f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4cb5f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4cb5f8:
    // 0x4cb5f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cb5f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cb5fc:
    // 0x4cb5fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cb5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cb600:
    // 0x4cb600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cb600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cb604:
    // 0x4cb604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cb604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cb608:
    // 0x4cb608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cb608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cb60c:
    // 0x4cb60c: 0x3e00008  jr          $ra
label_4cb610:
    if (ctx->pc == 0x4CB610u) {
        ctx->pc = 0x4CB610u;
            // 0x4cb610: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4CB614u;
        goto label_4cb614;
    }
    ctx->pc = 0x4CB60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB60Cu;
            // 0x4cb610: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB614u;
label_4cb614:
    // 0x4cb614: 0x0  nop
    ctx->pc = 0x4cb614u;
    // NOP
label_4cb618:
    // 0x4cb618: 0x0  nop
    ctx->pc = 0x4cb618u;
    // NOP
label_4cb61c:
    // 0x4cb61c: 0x0  nop
    ctx->pc = 0x4cb61cu;
    // NOP
label_4cb620:
    // 0x4cb620: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x4cb620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_4cb624:
    // 0x4cb624: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x4cb624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_4cb628:
    // 0x4cb628: 0x3e00008  jr          $ra
label_4cb62c:
    if (ctx->pc == 0x4CB62Cu) {
        ctx->pc = 0x4CB62Cu;
            // 0x4cb62c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4CB630u;
        goto label_4cb630;
    }
    ctx->pc = 0x4CB628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB628u;
            // 0x4cb62c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB630u;
label_4cb630:
    // 0x4cb630: 0x3e00008  jr          $ra
label_4cb634:
    if (ctx->pc == 0x4CB634u) {
        ctx->pc = 0x4CB634u;
            // 0x4cb634: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->pc = 0x4CB638u;
        goto label_4cb638;
    }
    ctx->pc = 0x4CB630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CB630u;
            // 0x4cb634: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CB638u;
label_4cb638:
    // 0x4cb638: 0x0  nop
    ctx->pc = 0x4cb638u;
    // NOP
label_4cb63c:
    // 0x4cb63c: 0x0  nop
    ctx->pc = 0x4cb63cu;
    // NOP
}
