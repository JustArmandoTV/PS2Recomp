#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00450730
// Address: 0x450730 - 0x452400
void sub_00450730_0x450730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450730_0x450730");
#endif

    switch (ctx->pc) {
        case 0x450730u: goto label_450730;
        case 0x450734u: goto label_450734;
        case 0x450738u: goto label_450738;
        case 0x45073cu: goto label_45073c;
        case 0x450740u: goto label_450740;
        case 0x450744u: goto label_450744;
        case 0x450748u: goto label_450748;
        case 0x45074cu: goto label_45074c;
        case 0x450750u: goto label_450750;
        case 0x450754u: goto label_450754;
        case 0x450758u: goto label_450758;
        case 0x45075cu: goto label_45075c;
        case 0x450760u: goto label_450760;
        case 0x450764u: goto label_450764;
        case 0x450768u: goto label_450768;
        case 0x45076cu: goto label_45076c;
        case 0x450770u: goto label_450770;
        case 0x450774u: goto label_450774;
        case 0x450778u: goto label_450778;
        case 0x45077cu: goto label_45077c;
        case 0x450780u: goto label_450780;
        case 0x450784u: goto label_450784;
        case 0x450788u: goto label_450788;
        case 0x45078cu: goto label_45078c;
        case 0x450790u: goto label_450790;
        case 0x450794u: goto label_450794;
        case 0x450798u: goto label_450798;
        case 0x45079cu: goto label_45079c;
        case 0x4507a0u: goto label_4507a0;
        case 0x4507a4u: goto label_4507a4;
        case 0x4507a8u: goto label_4507a8;
        case 0x4507acu: goto label_4507ac;
        case 0x4507b0u: goto label_4507b0;
        case 0x4507b4u: goto label_4507b4;
        case 0x4507b8u: goto label_4507b8;
        case 0x4507bcu: goto label_4507bc;
        case 0x4507c0u: goto label_4507c0;
        case 0x4507c4u: goto label_4507c4;
        case 0x4507c8u: goto label_4507c8;
        case 0x4507ccu: goto label_4507cc;
        case 0x4507d0u: goto label_4507d0;
        case 0x4507d4u: goto label_4507d4;
        case 0x4507d8u: goto label_4507d8;
        case 0x4507dcu: goto label_4507dc;
        case 0x4507e0u: goto label_4507e0;
        case 0x4507e4u: goto label_4507e4;
        case 0x4507e8u: goto label_4507e8;
        case 0x4507ecu: goto label_4507ec;
        case 0x4507f0u: goto label_4507f0;
        case 0x4507f4u: goto label_4507f4;
        case 0x4507f8u: goto label_4507f8;
        case 0x4507fcu: goto label_4507fc;
        case 0x450800u: goto label_450800;
        case 0x450804u: goto label_450804;
        case 0x450808u: goto label_450808;
        case 0x45080cu: goto label_45080c;
        case 0x450810u: goto label_450810;
        case 0x450814u: goto label_450814;
        case 0x450818u: goto label_450818;
        case 0x45081cu: goto label_45081c;
        case 0x450820u: goto label_450820;
        case 0x450824u: goto label_450824;
        case 0x450828u: goto label_450828;
        case 0x45082cu: goto label_45082c;
        case 0x450830u: goto label_450830;
        case 0x450834u: goto label_450834;
        case 0x450838u: goto label_450838;
        case 0x45083cu: goto label_45083c;
        case 0x450840u: goto label_450840;
        case 0x450844u: goto label_450844;
        case 0x450848u: goto label_450848;
        case 0x45084cu: goto label_45084c;
        case 0x450850u: goto label_450850;
        case 0x450854u: goto label_450854;
        case 0x450858u: goto label_450858;
        case 0x45085cu: goto label_45085c;
        case 0x450860u: goto label_450860;
        case 0x450864u: goto label_450864;
        case 0x450868u: goto label_450868;
        case 0x45086cu: goto label_45086c;
        case 0x450870u: goto label_450870;
        case 0x450874u: goto label_450874;
        case 0x450878u: goto label_450878;
        case 0x45087cu: goto label_45087c;
        case 0x450880u: goto label_450880;
        case 0x450884u: goto label_450884;
        case 0x450888u: goto label_450888;
        case 0x45088cu: goto label_45088c;
        case 0x450890u: goto label_450890;
        case 0x450894u: goto label_450894;
        case 0x450898u: goto label_450898;
        case 0x45089cu: goto label_45089c;
        case 0x4508a0u: goto label_4508a0;
        case 0x4508a4u: goto label_4508a4;
        case 0x4508a8u: goto label_4508a8;
        case 0x4508acu: goto label_4508ac;
        case 0x4508b0u: goto label_4508b0;
        case 0x4508b4u: goto label_4508b4;
        case 0x4508b8u: goto label_4508b8;
        case 0x4508bcu: goto label_4508bc;
        case 0x4508c0u: goto label_4508c0;
        case 0x4508c4u: goto label_4508c4;
        case 0x4508c8u: goto label_4508c8;
        case 0x4508ccu: goto label_4508cc;
        case 0x4508d0u: goto label_4508d0;
        case 0x4508d4u: goto label_4508d4;
        case 0x4508d8u: goto label_4508d8;
        case 0x4508dcu: goto label_4508dc;
        case 0x4508e0u: goto label_4508e0;
        case 0x4508e4u: goto label_4508e4;
        case 0x4508e8u: goto label_4508e8;
        case 0x4508ecu: goto label_4508ec;
        case 0x4508f0u: goto label_4508f0;
        case 0x4508f4u: goto label_4508f4;
        case 0x4508f8u: goto label_4508f8;
        case 0x4508fcu: goto label_4508fc;
        case 0x450900u: goto label_450900;
        case 0x450904u: goto label_450904;
        case 0x450908u: goto label_450908;
        case 0x45090cu: goto label_45090c;
        case 0x450910u: goto label_450910;
        case 0x450914u: goto label_450914;
        case 0x450918u: goto label_450918;
        case 0x45091cu: goto label_45091c;
        case 0x450920u: goto label_450920;
        case 0x450924u: goto label_450924;
        case 0x450928u: goto label_450928;
        case 0x45092cu: goto label_45092c;
        case 0x450930u: goto label_450930;
        case 0x450934u: goto label_450934;
        case 0x450938u: goto label_450938;
        case 0x45093cu: goto label_45093c;
        case 0x450940u: goto label_450940;
        case 0x450944u: goto label_450944;
        case 0x450948u: goto label_450948;
        case 0x45094cu: goto label_45094c;
        case 0x450950u: goto label_450950;
        case 0x450954u: goto label_450954;
        case 0x450958u: goto label_450958;
        case 0x45095cu: goto label_45095c;
        case 0x450960u: goto label_450960;
        case 0x450964u: goto label_450964;
        case 0x450968u: goto label_450968;
        case 0x45096cu: goto label_45096c;
        case 0x450970u: goto label_450970;
        case 0x450974u: goto label_450974;
        case 0x450978u: goto label_450978;
        case 0x45097cu: goto label_45097c;
        case 0x450980u: goto label_450980;
        case 0x450984u: goto label_450984;
        case 0x450988u: goto label_450988;
        case 0x45098cu: goto label_45098c;
        case 0x450990u: goto label_450990;
        case 0x450994u: goto label_450994;
        case 0x450998u: goto label_450998;
        case 0x45099cu: goto label_45099c;
        case 0x4509a0u: goto label_4509a0;
        case 0x4509a4u: goto label_4509a4;
        case 0x4509a8u: goto label_4509a8;
        case 0x4509acu: goto label_4509ac;
        case 0x4509b0u: goto label_4509b0;
        case 0x4509b4u: goto label_4509b4;
        case 0x4509b8u: goto label_4509b8;
        case 0x4509bcu: goto label_4509bc;
        case 0x4509c0u: goto label_4509c0;
        case 0x4509c4u: goto label_4509c4;
        case 0x4509c8u: goto label_4509c8;
        case 0x4509ccu: goto label_4509cc;
        case 0x4509d0u: goto label_4509d0;
        case 0x4509d4u: goto label_4509d4;
        case 0x4509d8u: goto label_4509d8;
        case 0x4509dcu: goto label_4509dc;
        case 0x4509e0u: goto label_4509e0;
        case 0x4509e4u: goto label_4509e4;
        case 0x4509e8u: goto label_4509e8;
        case 0x4509ecu: goto label_4509ec;
        case 0x4509f0u: goto label_4509f0;
        case 0x4509f4u: goto label_4509f4;
        case 0x4509f8u: goto label_4509f8;
        case 0x4509fcu: goto label_4509fc;
        case 0x450a00u: goto label_450a00;
        case 0x450a04u: goto label_450a04;
        case 0x450a08u: goto label_450a08;
        case 0x450a0cu: goto label_450a0c;
        case 0x450a10u: goto label_450a10;
        case 0x450a14u: goto label_450a14;
        case 0x450a18u: goto label_450a18;
        case 0x450a1cu: goto label_450a1c;
        case 0x450a20u: goto label_450a20;
        case 0x450a24u: goto label_450a24;
        case 0x450a28u: goto label_450a28;
        case 0x450a2cu: goto label_450a2c;
        case 0x450a30u: goto label_450a30;
        case 0x450a34u: goto label_450a34;
        case 0x450a38u: goto label_450a38;
        case 0x450a3cu: goto label_450a3c;
        case 0x450a40u: goto label_450a40;
        case 0x450a44u: goto label_450a44;
        case 0x450a48u: goto label_450a48;
        case 0x450a4cu: goto label_450a4c;
        case 0x450a50u: goto label_450a50;
        case 0x450a54u: goto label_450a54;
        case 0x450a58u: goto label_450a58;
        case 0x450a5cu: goto label_450a5c;
        case 0x450a60u: goto label_450a60;
        case 0x450a64u: goto label_450a64;
        case 0x450a68u: goto label_450a68;
        case 0x450a6cu: goto label_450a6c;
        case 0x450a70u: goto label_450a70;
        case 0x450a74u: goto label_450a74;
        case 0x450a78u: goto label_450a78;
        case 0x450a7cu: goto label_450a7c;
        case 0x450a80u: goto label_450a80;
        case 0x450a84u: goto label_450a84;
        case 0x450a88u: goto label_450a88;
        case 0x450a8cu: goto label_450a8c;
        case 0x450a90u: goto label_450a90;
        case 0x450a94u: goto label_450a94;
        case 0x450a98u: goto label_450a98;
        case 0x450a9cu: goto label_450a9c;
        case 0x450aa0u: goto label_450aa0;
        case 0x450aa4u: goto label_450aa4;
        case 0x450aa8u: goto label_450aa8;
        case 0x450aacu: goto label_450aac;
        case 0x450ab0u: goto label_450ab0;
        case 0x450ab4u: goto label_450ab4;
        case 0x450ab8u: goto label_450ab8;
        case 0x450abcu: goto label_450abc;
        case 0x450ac0u: goto label_450ac0;
        case 0x450ac4u: goto label_450ac4;
        case 0x450ac8u: goto label_450ac8;
        case 0x450accu: goto label_450acc;
        case 0x450ad0u: goto label_450ad0;
        case 0x450ad4u: goto label_450ad4;
        case 0x450ad8u: goto label_450ad8;
        case 0x450adcu: goto label_450adc;
        case 0x450ae0u: goto label_450ae0;
        case 0x450ae4u: goto label_450ae4;
        case 0x450ae8u: goto label_450ae8;
        case 0x450aecu: goto label_450aec;
        case 0x450af0u: goto label_450af0;
        case 0x450af4u: goto label_450af4;
        case 0x450af8u: goto label_450af8;
        case 0x450afcu: goto label_450afc;
        case 0x450b00u: goto label_450b00;
        case 0x450b04u: goto label_450b04;
        case 0x450b08u: goto label_450b08;
        case 0x450b0cu: goto label_450b0c;
        case 0x450b10u: goto label_450b10;
        case 0x450b14u: goto label_450b14;
        case 0x450b18u: goto label_450b18;
        case 0x450b1cu: goto label_450b1c;
        case 0x450b20u: goto label_450b20;
        case 0x450b24u: goto label_450b24;
        case 0x450b28u: goto label_450b28;
        case 0x450b2cu: goto label_450b2c;
        case 0x450b30u: goto label_450b30;
        case 0x450b34u: goto label_450b34;
        case 0x450b38u: goto label_450b38;
        case 0x450b3cu: goto label_450b3c;
        case 0x450b40u: goto label_450b40;
        case 0x450b44u: goto label_450b44;
        case 0x450b48u: goto label_450b48;
        case 0x450b4cu: goto label_450b4c;
        case 0x450b50u: goto label_450b50;
        case 0x450b54u: goto label_450b54;
        case 0x450b58u: goto label_450b58;
        case 0x450b5cu: goto label_450b5c;
        case 0x450b60u: goto label_450b60;
        case 0x450b64u: goto label_450b64;
        case 0x450b68u: goto label_450b68;
        case 0x450b6cu: goto label_450b6c;
        case 0x450b70u: goto label_450b70;
        case 0x450b74u: goto label_450b74;
        case 0x450b78u: goto label_450b78;
        case 0x450b7cu: goto label_450b7c;
        case 0x450b80u: goto label_450b80;
        case 0x450b84u: goto label_450b84;
        case 0x450b88u: goto label_450b88;
        case 0x450b8cu: goto label_450b8c;
        case 0x450b90u: goto label_450b90;
        case 0x450b94u: goto label_450b94;
        case 0x450b98u: goto label_450b98;
        case 0x450b9cu: goto label_450b9c;
        case 0x450ba0u: goto label_450ba0;
        case 0x450ba4u: goto label_450ba4;
        case 0x450ba8u: goto label_450ba8;
        case 0x450bacu: goto label_450bac;
        case 0x450bb0u: goto label_450bb0;
        case 0x450bb4u: goto label_450bb4;
        case 0x450bb8u: goto label_450bb8;
        case 0x450bbcu: goto label_450bbc;
        case 0x450bc0u: goto label_450bc0;
        case 0x450bc4u: goto label_450bc4;
        case 0x450bc8u: goto label_450bc8;
        case 0x450bccu: goto label_450bcc;
        case 0x450bd0u: goto label_450bd0;
        case 0x450bd4u: goto label_450bd4;
        case 0x450bd8u: goto label_450bd8;
        case 0x450bdcu: goto label_450bdc;
        case 0x450be0u: goto label_450be0;
        case 0x450be4u: goto label_450be4;
        case 0x450be8u: goto label_450be8;
        case 0x450becu: goto label_450bec;
        case 0x450bf0u: goto label_450bf0;
        case 0x450bf4u: goto label_450bf4;
        case 0x450bf8u: goto label_450bf8;
        case 0x450bfcu: goto label_450bfc;
        case 0x450c00u: goto label_450c00;
        case 0x450c04u: goto label_450c04;
        case 0x450c08u: goto label_450c08;
        case 0x450c0cu: goto label_450c0c;
        case 0x450c10u: goto label_450c10;
        case 0x450c14u: goto label_450c14;
        case 0x450c18u: goto label_450c18;
        case 0x450c1cu: goto label_450c1c;
        case 0x450c20u: goto label_450c20;
        case 0x450c24u: goto label_450c24;
        case 0x450c28u: goto label_450c28;
        case 0x450c2cu: goto label_450c2c;
        case 0x450c30u: goto label_450c30;
        case 0x450c34u: goto label_450c34;
        case 0x450c38u: goto label_450c38;
        case 0x450c3cu: goto label_450c3c;
        case 0x450c40u: goto label_450c40;
        case 0x450c44u: goto label_450c44;
        case 0x450c48u: goto label_450c48;
        case 0x450c4cu: goto label_450c4c;
        case 0x450c50u: goto label_450c50;
        case 0x450c54u: goto label_450c54;
        case 0x450c58u: goto label_450c58;
        case 0x450c5cu: goto label_450c5c;
        case 0x450c60u: goto label_450c60;
        case 0x450c64u: goto label_450c64;
        case 0x450c68u: goto label_450c68;
        case 0x450c6cu: goto label_450c6c;
        case 0x450c70u: goto label_450c70;
        case 0x450c74u: goto label_450c74;
        case 0x450c78u: goto label_450c78;
        case 0x450c7cu: goto label_450c7c;
        case 0x450c80u: goto label_450c80;
        case 0x450c84u: goto label_450c84;
        case 0x450c88u: goto label_450c88;
        case 0x450c8cu: goto label_450c8c;
        case 0x450c90u: goto label_450c90;
        case 0x450c94u: goto label_450c94;
        case 0x450c98u: goto label_450c98;
        case 0x450c9cu: goto label_450c9c;
        case 0x450ca0u: goto label_450ca0;
        case 0x450ca4u: goto label_450ca4;
        case 0x450ca8u: goto label_450ca8;
        case 0x450cacu: goto label_450cac;
        case 0x450cb0u: goto label_450cb0;
        case 0x450cb4u: goto label_450cb4;
        case 0x450cb8u: goto label_450cb8;
        case 0x450cbcu: goto label_450cbc;
        case 0x450cc0u: goto label_450cc0;
        case 0x450cc4u: goto label_450cc4;
        case 0x450cc8u: goto label_450cc8;
        case 0x450cccu: goto label_450ccc;
        case 0x450cd0u: goto label_450cd0;
        case 0x450cd4u: goto label_450cd4;
        case 0x450cd8u: goto label_450cd8;
        case 0x450cdcu: goto label_450cdc;
        case 0x450ce0u: goto label_450ce0;
        case 0x450ce4u: goto label_450ce4;
        case 0x450ce8u: goto label_450ce8;
        case 0x450cecu: goto label_450cec;
        case 0x450cf0u: goto label_450cf0;
        case 0x450cf4u: goto label_450cf4;
        case 0x450cf8u: goto label_450cf8;
        case 0x450cfcu: goto label_450cfc;
        case 0x450d00u: goto label_450d00;
        case 0x450d04u: goto label_450d04;
        case 0x450d08u: goto label_450d08;
        case 0x450d0cu: goto label_450d0c;
        case 0x450d10u: goto label_450d10;
        case 0x450d14u: goto label_450d14;
        case 0x450d18u: goto label_450d18;
        case 0x450d1cu: goto label_450d1c;
        case 0x450d20u: goto label_450d20;
        case 0x450d24u: goto label_450d24;
        case 0x450d28u: goto label_450d28;
        case 0x450d2cu: goto label_450d2c;
        case 0x450d30u: goto label_450d30;
        case 0x450d34u: goto label_450d34;
        case 0x450d38u: goto label_450d38;
        case 0x450d3cu: goto label_450d3c;
        case 0x450d40u: goto label_450d40;
        case 0x450d44u: goto label_450d44;
        case 0x450d48u: goto label_450d48;
        case 0x450d4cu: goto label_450d4c;
        case 0x450d50u: goto label_450d50;
        case 0x450d54u: goto label_450d54;
        case 0x450d58u: goto label_450d58;
        case 0x450d5cu: goto label_450d5c;
        case 0x450d60u: goto label_450d60;
        case 0x450d64u: goto label_450d64;
        case 0x450d68u: goto label_450d68;
        case 0x450d6cu: goto label_450d6c;
        case 0x450d70u: goto label_450d70;
        case 0x450d74u: goto label_450d74;
        case 0x450d78u: goto label_450d78;
        case 0x450d7cu: goto label_450d7c;
        case 0x450d80u: goto label_450d80;
        case 0x450d84u: goto label_450d84;
        case 0x450d88u: goto label_450d88;
        case 0x450d8cu: goto label_450d8c;
        case 0x450d90u: goto label_450d90;
        case 0x450d94u: goto label_450d94;
        case 0x450d98u: goto label_450d98;
        case 0x450d9cu: goto label_450d9c;
        case 0x450da0u: goto label_450da0;
        case 0x450da4u: goto label_450da4;
        case 0x450da8u: goto label_450da8;
        case 0x450dacu: goto label_450dac;
        case 0x450db0u: goto label_450db0;
        case 0x450db4u: goto label_450db4;
        case 0x450db8u: goto label_450db8;
        case 0x450dbcu: goto label_450dbc;
        case 0x450dc0u: goto label_450dc0;
        case 0x450dc4u: goto label_450dc4;
        case 0x450dc8u: goto label_450dc8;
        case 0x450dccu: goto label_450dcc;
        case 0x450dd0u: goto label_450dd0;
        case 0x450dd4u: goto label_450dd4;
        case 0x450dd8u: goto label_450dd8;
        case 0x450ddcu: goto label_450ddc;
        case 0x450de0u: goto label_450de0;
        case 0x450de4u: goto label_450de4;
        case 0x450de8u: goto label_450de8;
        case 0x450decu: goto label_450dec;
        case 0x450df0u: goto label_450df0;
        case 0x450df4u: goto label_450df4;
        case 0x450df8u: goto label_450df8;
        case 0x450dfcu: goto label_450dfc;
        case 0x450e00u: goto label_450e00;
        case 0x450e04u: goto label_450e04;
        case 0x450e08u: goto label_450e08;
        case 0x450e0cu: goto label_450e0c;
        case 0x450e10u: goto label_450e10;
        case 0x450e14u: goto label_450e14;
        case 0x450e18u: goto label_450e18;
        case 0x450e1cu: goto label_450e1c;
        case 0x450e20u: goto label_450e20;
        case 0x450e24u: goto label_450e24;
        case 0x450e28u: goto label_450e28;
        case 0x450e2cu: goto label_450e2c;
        case 0x450e30u: goto label_450e30;
        case 0x450e34u: goto label_450e34;
        case 0x450e38u: goto label_450e38;
        case 0x450e3cu: goto label_450e3c;
        case 0x450e40u: goto label_450e40;
        case 0x450e44u: goto label_450e44;
        case 0x450e48u: goto label_450e48;
        case 0x450e4cu: goto label_450e4c;
        case 0x450e50u: goto label_450e50;
        case 0x450e54u: goto label_450e54;
        case 0x450e58u: goto label_450e58;
        case 0x450e5cu: goto label_450e5c;
        case 0x450e60u: goto label_450e60;
        case 0x450e64u: goto label_450e64;
        case 0x450e68u: goto label_450e68;
        case 0x450e6cu: goto label_450e6c;
        case 0x450e70u: goto label_450e70;
        case 0x450e74u: goto label_450e74;
        case 0x450e78u: goto label_450e78;
        case 0x450e7cu: goto label_450e7c;
        case 0x450e80u: goto label_450e80;
        case 0x450e84u: goto label_450e84;
        case 0x450e88u: goto label_450e88;
        case 0x450e8cu: goto label_450e8c;
        case 0x450e90u: goto label_450e90;
        case 0x450e94u: goto label_450e94;
        case 0x450e98u: goto label_450e98;
        case 0x450e9cu: goto label_450e9c;
        case 0x450ea0u: goto label_450ea0;
        case 0x450ea4u: goto label_450ea4;
        case 0x450ea8u: goto label_450ea8;
        case 0x450eacu: goto label_450eac;
        case 0x450eb0u: goto label_450eb0;
        case 0x450eb4u: goto label_450eb4;
        case 0x450eb8u: goto label_450eb8;
        case 0x450ebcu: goto label_450ebc;
        case 0x450ec0u: goto label_450ec0;
        case 0x450ec4u: goto label_450ec4;
        case 0x450ec8u: goto label_450ec8;
        case 0x450eccu: goto label_450ecc;
        case 0x450ed0u: goto label_450ed0;
        case 0x450ed4u: goto label_450ed4;
        case 0x450ed8u: goto label_450ed8;
        case 0x450edcu: goto label_450edc;
        case 0x450ee0u: goto label_450ee0;
        case 0x450ee4u: goto label_450ee4;
        case 0x450ee8u: goto label_450ee8;
        case 0x450eecu: goto label_450eec;
        case 0x450ef0u: goto label_450ef0;
        case 0x450ef4u: goto label_450ef4;
        case 0x450ef8u: goto label_450ef8;
        case 0x450efcu: goto label_450efc;
        case 0x450f00u: goto label_450f00;
        case 0x450f04u: goto label_450f04;
        case 0x450f08u: goto label_450f08;
        case 0x450f0cu: goto label_450f0c;
        case 0x450f10u: goto label_450f10;
        case 0x450f14u: goto label_450f14;
        case 0x450f18u: goto label_450f18;
        case 0x450f1cu: goto label_450f1c;
        case 0x450f20u: goto label_450f20;
        case 0x450f24u: goto label_450f24;
        case 0x450f28u: goto label_450f28;
        case 0x450f2cu: goto label_450f2c;
        case 0x450f30u: goto label_450f30;
        case 0x450f34u: goto label_450f34;
        case 0x450f38u: goto label_450f38;
        case 0x450f3cu: goto label_450f3c;
        case 0x450f40u: goto label_450f40;
        case 0x450f44u: goto label_450f44;
        case 0x450f48u: goto label_450f48;
        case 0x450f4cu: goto label_450f4c;
        case 0x450f50u: goto label_450f50;
        case 0x450f54u: goto label_450f54;
        case 0x450f58u: goto label_450f58;
        case 0x450f5cu: goto label_450f5c;
        case 0x450f60u: goto label_450f60;
        case 0x450f64u: goto label_450f64;
        case 0x450f68u: goto label_450f68;
        case 0x450f6cu: goto label_450f6c;
        case 0x450f70u: goto label_450f70;
        case 0x450f74u: goto label_450f74;
        case 0x450f78u: goto label_450f78;
        case 0x450f7cu: goto label_450f7c;
        case 0x450f80u: goto label_450f80;
        case 0x450f84u: goto label_450f84;
        case 0x450f88u: goto label_450f88;
        case 0x450f8cu: goto label_450f8c;
        case 0x450f90u: goto label_450f90;
        case 0x450f94u: goto label_450f94;
        case 0x450f98u: goto label_450f98;
        case 0x450f9cu: goto label_450f9c;
        case 0x450fa0u: goto label_450fa0;
        case 0x450fa4u: goto label_450fa4;
        case 0x450fa8u: goto label_450fa8;
        case 0x450facu: goto label_450fac;
        case 0x450fb0u: goto label_450fb0;
        case 0x450fb4u: goto label_450fb4;
        case 0x450fb8u: goto label_450fb8;
        case 0x450fbcu: goto label_450fbc;
        case 0x450fc0u: goto label_450fc0;
        case 0x450fc4u: goto label_450fc4;
        case 0x450fc8u: goto label_450fc8;
        case 0x450fccu: goto label_450fcc;
        case 0x450fd0u: goto label_450fd0;
        case 0x450fd4u: goto label_450fd4;
        case 0x450fd8u: goto label_450fd8;
        case 0x450fdcu: goto label_450fdc;
        case 0x450fe0u: goto label_450fe0;
        case 0x450fe4u: goto label_450fe4;
        case 0x450fe8u: goto label_450fe8;
        case 0x450fecu: goto label_450fec;
        case 0x450ff0u: goto label_450ff0;
        case 0x450ff4u: goto label_450ff4;
        case 0x450ff8u: goto label_450ff8;
        case 0x450ffcu: goto label_450ffc;
        case 0x451000u: goto label_451000;
        case 0x451004u: goto label_451004;
        case 0x451008u: goto label_451008;
        case 0x45100cu: goto label_45100c;
        case 0x451010u: goto label_451010;
        case 0x451014u: goto label_451014;
        case 0x451018u: goto label_451018;
        case 0x45101cu: goto label_45101c;
        case 0x451020u: goto label_451020;
        case 0x451024u: goto label_451024;
        case 0x451028u: goto label_451028;
        case 0x45102cu: goto label_45102c;
        case 0x451030u: goto label_451030;
        case 0x451034u: goto label_451034;
        case 0x451038u: goto label_451038;
        case 0x45103cu: goto label_45103c;
        case 0x451040u: goto label_451040;
        case 0x451044u: goto label_451044;
        case 0x451048u: goto label_451048;
        case 0x45104cu: goto label_45104c;
        case 0x451050u: goto label_451050;
        case 0x451054u: goto label_451054;
        case 0x451058u: goto label_451058;
        case 0x45105cu: goto label_45105c;
        case 0x451060u: goto label_451060;
        case 0x451064u: goto label_451064;
        case 0x451068u: goto label_451068;
        case 0x45106cu: goto label_45106c;
        case 0x451070u: goto label_451070;
        case 0x451074u: goto label_451074;
        case 0x451078u: goto label_451078;
        case 0x45107cu: goto label_45107c;
        case 0x451080u: goto label_451080;
        case 0x451084u: goto label_451084;
        case 0x451088u: goto label_451088;
        case 0x45108cu: goto label_45108c;
        case 0x451090u: goto label_451090;
        case 0x451094u: goto label_451094;
        case 0x451098u: goto label_451098;
        case 0x45109cu: goto label_45109c;
        case 0x4510a0u: goto label_4510a0;
        case 0x4510a4u: goto label_4510a4;
        case 0x4510a8u: goto label_4510a8;
        case 0x4510acu: goto label_4510ac;
        case 0x4510b0u: goto label_4510b0;
        case 0x4510b4u: goto label_4510b4;
        case 0x4510b8u: goto label_4510b8;
        case 0x4510bcu: goto label_4510bc;
        case 0x4510c0u: goto label_4510c0;
        case 0x4510c4u: goto label_4510c4;
        case 0x4510c8u: goto label_4510c8;
        case 0x4510ccu: goto label_4510cc;
        case 0x4510d0u: goto label_4510d0;
        case 0x4510d4u: goto label_4510d4;
        case 0x4510d8u: goto label_4510d8;
        case 0x4510dcu: goto label_4510dc;
        case 0x4510e0u: goto label_4510e0;
        case 0x4510e4u: goto label_4510e4;
        case 0x4510e8u: goto label_4510e8;
        case 0x4510ecu: goto label_4510ec;
        case 0x4510f0u: goto label_4510f0;
        case 0x4510f4u: goto label_4510f4;
        case 0x4510f8u: goto label_4510f8;
        case 0x4510fcu: goto label_4510fc;
        case 0x451100u: goto label_451100;
        case 0x451104u: goto label_451104;
        case 0x451108u: goto label_451108;
        case 0x45110cu: goto label_45110c;
        case 0x451110u: goto label_451110;
        case 0x451114u: goto label_451114;
        case 0x451118u: goto label_451118;
        case 0x45111cu: goto label_45111c;
        case 0x451120u: goto label_451120;
        case 0x451124u: goto label_451124;
        case 0x451128u: goto label_451128;
        case 0x45112cu: goto label_45112c;
        case 0x451130u: goto label_451130;
        case 0x451134u: goto label_451134;
        case 0x451138u: goto label_451138;
        case 0x45113cu: goto label_45113c;
        case 0x451140u: goto label_451140;
        case 0x451144u: goto label_451144;
        case 0x451148u: goto label_451148;
        case 0x45114cu: goto label_45114c;
        case 0x451150u: goto label_451150;
        case 0x451154u: goto label_451154;
        case 0x451158u: goto label_451158;
        case 0x45115cu: goto label_45115c;
        case 0x451160u: goto label_451160;
        case 0x451164u: goto label_451164;
        case 0x451168u: goto label_451168;
        case 0x45116cu: goto label_45116c;
        case 0x451170u: goto label_451170;
        case 0x451174u: goto label_451174;
        case 0x451178u: goto label_451178;
        case 0x45117cu: goto label_45117c;
        case 0x451180u: goto label_451180;
        case 0x451184u: goto label_451184;
        case 0x451188u: goto label_451188;
        case 0x45118cu: goto label_45118c;
        case 0x451190u: goto label_451190;
        case 0x451194u: goto label_451194;
        case 0x451198u: goto label_451198;
        case 0x45119cu: goto label_45119c;
        case 0x4511a0u: goto label_4511a0;
        case 0x4511a4u: goto label_4511a4;
        case 0x4511a8u: goto label_4511a8;
        case 0x4511acu: goto label_4511ac;
        case 0x4511b0u: goto label_4511b0;
        case 0x4511b4u: goto label_4511b4;
        case 0x4511b8u: goto label_4511b8;
        case 0x4511bcu: goto label_4511bc;
        case 0x4511c0u: goto label_4511c0;
        case 0x4511c4u: goto label_4511c4;
        case 0x4511c8u: goto label_4511c8;
        case 0x4511ccu: goto label_4511cc;
        case 0x4511d0u: goto label_4511d0;
        case 0x4511d4u: goto label_4511d4;
        case 0x4511d8u: goto label_4511d8;
        case 0x4511dcu: goto label_4511dc;
        case 0x4511e0u: goto label_4511e0;
        case 0x4511e4u: goto label_4511e4;
        case 0x4511e8u: goto label_4511e8;
        case 0x4511ecu: goto label_4511ec;
        case 0x4511f0u: goto label_4511f0;
        case 0x4511f4u: goto label_4511f4;
        case 0x4511f8u: goto label_4511f8;
        case 0x4511fcu: goto label_4511fc;
        case 0x451200u: goto label_451200;
        case 0x451204u: goto label_451204;
        case 0x451208u: goto label_451208;
        case 0x45120cu: goto label_45120c;
        case 0x451210u: goto label_451210;
        case 0x451214u: goto label_451214;
        case 0x451218u: goto label_451218;
        case 0x45121cu: goto label_45121c;
        case 0x451220u: goto label_451220;
        case 0x451224u: goto label_451224;
        case 0x451228u: goto label_451228;
        case 0x45122cu: goto label_45122c;
        case 0x451230u: goto label_451230;
        case 0x451234u: goto label_451234;
        case 0x451238u: goto label_451238;
        case 0x45123cu: goto label_45123c;
        case 0x451240u: goto label_451240;
        case 0x451244u: goto label_451244;
        case 0x451248u: goto label_451248;
        case 0x45124cu: goto label_45124c;
        case 0x451250u: goto label_451250;
        case 0x451254u: goto label_451254;
        case 0x451258u: goto label_451258;
        case 0x45125cu: goto label_45125c;
        case 0x451260u: goto label_451260;
        case 0x451264u: goto label_451264;
        case 0x451268u: goto label_451268;
        case 0x45126cu: goto label_45126c;
        case 0x451270u: goto label_451270;
        case 0x451274u: goto label_451274;
        case 0x451278u: goto label_451278;
        case 0x45127cu: goto label_45127c;
        case 0x451280u: goto label_451280;
        case 0x451284u: goto label_451284;
        case 0x451288u: goto label_451288;
        case 0x45128cu: goto label_45128c;
        case 0x451290u: goto label_451290;
        case 0x451294u: goto label_451294;
        case 0x451298u: goto label_451298;
        case 0x45129cu: goto label_45129c;
        case 0x4512a0u: goto label_4512a0;
        case 0x4512a4u: goto label_4512a4;
        case 0x4512a8u: goto label_4512a8;
        case 0x4512acu: goto label_4512ac;
        case 0x4512b0u: goto label_4512b0;
        case 0x4512b4u: goto label_4512b4;
        case 0x4512b8u: goto label_4512b8;
        case 0x4512bcu: goto label_4512bc;
        case 0x4512c0u: goto label_4512c0;
        case 0x4512c4u: goto label_4512c4;
        case 0x4512c8u: goto label_4512c8;
        case 0x4512ccu: goto label_4512cc;
        case 0x4512d0u: goto label_4512d0;
        case 0x4512d4u: goto label_4512d4;
        case 0x4512d8u: goto label_4512d8;
        case 0x4512dcu: goto label_4512dc;
        case 0x4512e0u: goto label_4512e0;
        case 0x4512e4u: goto label_4512e4;
        case 0x4512e8u: goto label_4512e8;
        case 0x4512ecu: goto label_4512ec;
        case 0x4512f0u: goto label_4512f0;
        case 0x4512f4u: goto label_4512f4;
        case 0x4512f8u: goto label_4512f8;
        case 0x4512fcu: goto label_4512fc;
        case 0x451300u: goto label_451300;
        case 0x451304u: goto label_451304;
        case 0x451308u: goto label_451308;
        case 0x45130cu: goto label_45130c;
        case 0x451310u: goto label_451310;
        case 0x451314u: goto label_451314;
        case 0x451318u: goto label_451318;
        case 0x45131cu: goto label_45131c;
        case 0x451320u: goto label_451320;
        case 0x451324u: goto label_451324;
        case 0x451328u: goto label_451328;
        case 0x45132cu: goto label_45132c;
        case 0x451330u: goto label_451330;
        case 0x451334u: goto label_451334;
        case 0x451338u: goto label_451338;
        case 0x45133cu: goto label_45133c;
        case 0x451340u: goto label_451340;
        case 0x451344u: goto label_451344;
        case 0x451348u: goto label_451348;
        case 0x45134cu: goto label_45134c;
        case 0x451350u: goto label_451350;
        case 0x451354u: goto label_451354;
        case 0x451358u: goto label_451358;
        case 0x45135cu: goto label_45135c;
        case 0x451360u: goto label_451360;
        case 0x451364u: goto label_451364;
        case 0x451368u: goto label_451368;
        case 0x45136cu: goto label_45136c;
        case 0x451370u: goto label_451370;
        case 0x451374u: goto label_451374;
        case 0x451378u: goto label_451378;
        case 0x45137cu: goto label_45137c;
        case 0x451380u: goto label_451380;
        case 0x451384u: goto label_451384;
        case 0x451388u: goto label_451388;
        case 0x45138cu: goto label_45138c;
        case 0x451390u: goto label_451390;
        case 0x451394u: goto label_451394;
        case 0x451398u: goto label_451398;
        case 0x45139cu: goto label_45139c;
        case 0x4513a0u: goto label_4513a0;
        case 0x4513a4u: goto label_4513a4;
        case 0x4513a8u: goto label_4513a8;
        case 0x4513acu: goto label_4513ac;
        case 0x4513b0u: goto label_4513b0;
        case 0x4513b4u: goto label_4513b4;
        case 0x4513b8u: goto label_4513b8;
        case 0x4513bcu: goto label_4513bc;
        case 0x4513c0u: goto label_4513c0;
        case 0x4513c4u: goto label_4513c4;
        case 0x4513c8u: goto label_4513c8;
        case 0x4513ccu: goto label_4513cc;
        case 0x4513d0u: goto label_4513d0;
        case 0x4513d4u: goto label_4513d4;
        case 0x4513d8u: goto label_4513d8;
        case 0x4513dcu: goto label_4513dc;
        case 0x4513e0u: goto label_4513e0;
        case 0x4513e4u: goto label_4513e4;
        case 0x4513e8u: goto label_4513e8;
        case 0x4513ecu: goto label_4513ec;
        case 0x4513f0u: goto label_4513f0;
        case 0x4513f4u: goto label_4513f4;
        case 0x4513f8u: goto label_4513f8;
        case 0x4513fcu: goto label_4513fc;
        case 0x451400u: goto label_451400;
        case 0x451404u: goto label_451404;
        case 0x451408u: goto label_451408;
        case 0x45140cu: goto label_45140c;
        case 0x451410u: goto label_451410;
        case 0x451414u: goto label_451414;
        case 0x451418u: goto label_451418;
        case 0x45141cu: goto label_45141c;
        case 0x451420u: goto label_451420;
        case 0x451424u: goto label_451424;
        case 0x451428u: goto label_451428;
        case 0x45142cu: goto label_45142c;
        case 0x451430u: goto label_451430;
        case 0x451434u: goto label_451434;
        case 0x451438u: goto label_451438;
        case 0x45143cu: goto label_45143c;
        case 0x451440u: goto label_451440;
        case 0x451444u: goto label_451444;
        case 0x451448u: goto label_451448;
        case 0x45144cu: goto label_45144c;
        case 0x451450u: goto label_451450;
        case 0x451454u: goto label_451454;
        case 0x451458u: goto label_451458;
        case 0x45145cu: goto label_45145c;
        case 0x451460u: goto label_451460;
        case 0x451464u: goto label_451464;
        case 0x451468u: goto label_451468;
        case 0x45146cu: goto label_45146c;
        case 0x451470u: goto label_451470;
        case 0x451474u: goto label_451474;
        case 0x451478u: goto label_451478;
        case 0x45147cu: goto label_45147c;
        case 0x451480u: goto label_451480;
        case 0x451484u: goto label_451484;
        case 0x451488u: goto label_451488;
        case 0x45148cu: goto label_45148c;
        case 0x451490u: goto label_451490;
        case 0x451494u: goto label_451494;
        case 0x451498u: goto label_451498;
        case 0x45149cu: goto label_45149c;
        case 0x4514a0u: goto label_4514a0;
        case 0x4514a4u: goto label_4514a4;
        case 0x4514a8u: goto label_4514a8;
        case 0x4514acu: goto label_4514ac;
        case 0x4514b0u: goto label_4514b0;
        case 0x4514b4u: goto label_4514b4;
        case 0x4514b8u: goto label_4514b8;
        case 0x4514bcu: goto label_4514bc;
        case 0x4514c0u: goto label_4514c0;
        case 0x4514c4u: goto label_4514c4;
        case 0x4514c8u: goto label_4514c8;
        case 0x4514ccu: goto label_4514cc;
        case 0x4514d0u: goto label_4514d0;
        case 0x4514d4u: goto label_4514d4;
        case 0x4514d8u: goto label_4514d8;
        case 0x4514dcu: goto label_4514dc;
        case 0x4514e0u: goto label_4514e0;
        case 0x4514e4u: goto label_4514e4;
        case 0x4514e8u: goto label_4514e8;
        case 0x4514ecu: goto label_4514ec;
        case 0x4514f0u: goto label_4514f0;
        case 0x4514f4u: goto label_4514f4;
        case 0x4514f8u: goto label_4514f8;
        case 0x4514fcu: goto label_4514fc;
        case 0x451500u: goto label_451500;
        case 0x451504u: goto label_451504;
        case 0x451508u: goto label_451508;
        case 0x45150cu: goto label_45150c;
        case 0x451510u: goto label_451510;
        case 0x451514u: goto label_451514;
        case 0x451518u: goto label_451518;
        case 0x45151cu: goto label_45151c;
        case 0x451520u: goto label_451520;
        case 0x451524u: goto label_451524;
        case 0x451528u: goto label_451528;
        case 0x45152cu: goto label_45152c;
        case 0x451530u: goto label_451530;
        case 0x451534u: goto label_451534;
        case 0x451538u: goto label_451538;
        case 0x45153cu: goto label_45153c;
        case 0x451540u: goto label_451540;
        case 0x451544u: goto label_451544;
        case 0x451548u: goto label_451548;
        case 0x45154cu: goto label_45154c;
        case 0x451550u: goto label_451550;
        case 0x451554u: goto label_451554;
        case 0x451558u: goto label_451558;
        case 0x45155cu: goto label_45155c;
        case 0x451560u: goto label_451560;
        case 0x451564u: goto label_451564;
        case 0x451568u: goto label_451568;
        case 0x45156cu: goto label_45156c;
        case 0x451570u: goto label_451570;
        case 0x451574u: goto label_451574;
        case 0x451578u: goto label_451578;
        case 0x45157cu: goto label_45157c;
        case 0x451580u: goto label_451580;
        case 0x451584u: goto label_451584;
        case 0x451588u: goto label_451588;
        case 0x45158cu: goto label_45158c;
        case 0x451590u: goto label_451590;
        case 0x451594u: goto label_451594;
        case 0x451598u: goto label_451598;
        case 0x45159cu: goto label_45159c;
        case 0x4515a0u: goto label_4515a0;
        case 0x4515a4u: goto label_4515a4;
        case 0x4515a8u: goto label_4515a8;
        case 0x4515acu: goto label_4515ac;
        case 0x4515b0u: goto label_4515b0;
        case 0x4515b4u: goto label_4515b4;
        case 0x4515b8u: goto label_4515b8;
        case 0x4515bcu: goto label_4515bc;
        case 0x4515c0u: goto label_4515c0;
        case 0x4515c4u: goto label_4515c4;
        case 0x4515c8u: goto label_4515c8;
        case 0x4515ccu: goto label_4515cc;
        case 0x4515d0u: goto label_4515d0;
        case 0x4515d4u: goto label_4515d4;
        case 0x4515d8u: goto label_4515d8;
        case 0x4515dcu: goto label_4515dc;
        case 0x4515e0u: goto label_4515e0;
        case 0x4515e4u: goto label_4515e4;
        case 0x4515e8u: goto label_4515e8;
        case 0x4515ecu: goto label_4515ec;
        case 0x4515f0u: goto label_4515f0;
        case 0x4515f4u: goto label_4515f4;
        case 0x4515f8u: goto label_4515f8;
        case 0x4515fcu: goto label_4515fc;
        case 0x451600u: goto label_451600;
        case 0x451604u: goto label_451604;
        case 0x451608u: goto label_451608;
        case 0x45160cu: goto label_45160c;
        case 0x451610u: goto label_451610;
        case 0x451614u: goto label_451614;
        case 0x451618u: goto label_451618;
        case 0x45161cu: goto label_45161c;
        case 0x451620u: goto label_451620;
        case 0x451624u: goto label_451624;
        case 0x451628u: goto label_451628;
        case 0x45162cu: goto label_45162c;
        case 0x451630u: goto label_451630;
        case 0x451634u: goto label_451634;
        case 0x451638u: goto label_451638;
        case 0x45163cu: goto label_45163c;
        case 0x451640u: goto label_451640;
        case 0x451644u: goto label_451644;
        case 0x451648u: goto label_451648;
        case 0x45164cu: goto label_45164c;
        case 0x451650u: goto label_451650;
        case 0x451654u: goto label_451654;
        case 0x451658u: goto label_451658;
        case 0x45165cu: goto label_45165c;
        case 0x451660u: goto label_451660;
        case 0x451664u: goto label_451664;
        case 0x451668u: goto label_451668;
        case 0x45166cu: goto label_45166c;
        case 0x451670u: goto label_451670;
        case 0x451674u: goto label_451674;
        case 0x451678u: goto label_451678;
        case 0x45167cu: goto label_45167c;
        case 0x451680u: goto label_451680;
        case 0x451684u: goto label_451684;
        case 0x451688u: goto label_451688;
        case 0x45168cu: goto label_45168c;
        case 0x451690u: goto label_451690;
        case 0x451694u: goto label_451694;
        case 0x451698u: goto label_451698;
        case 0x45169cu: goto label_45169c;
        case 0x4516a0u: goto label_4516a0;
        case 0x4516a4u: goto label_4516a4;
        case 0x4516a8u: goto label_4516a8;
        case 0x4516acu: goto label_4516ac;
        case 0x4516b0u: goto label_4516b0;
        case 0x4516b4u: goto label_4516b4;
        case 0x4516b8u: goto label_4516b8;
        case 0x4516bcu: goto label_4516bc;
        case 0x4516c0u: goto label_4516c0;
        case 0x4516c4u: goto label_4516c4;
        case 0x4516c8u: goto label_4516c8;
        case 0x4516ccu: goto label_4516cc;
        case 0x4516d0u: goto label_4516d0;
        case 0x4516d4u: goto label_4516d4;
        case 0x4516d8u: goto label_4516d8;
        case 0x4516dcu: goto label_4516dc;
        case 0x4516e0u: goto label_4516e0;
        case 0x4516e4u: goto label_4516e4;
        case 0x4516e8u: goto label_4516e8;
        case 0x4516ecu: goto label_4516ec;
        case 0x4516f0u: goto label_4516f0;
        case 0x4516f4u: goto label_4516f4;
        case 0x4516f8u: goto label_4516f8;
        case 0x4516fcu: goto label_4516fc;
        case 0x451700u: goto label_451700;
        case 0x451704u: goto label_451704;
        case 0x451708u: goto label_451708;
        case 0x45170cu: goto label_45170c;
        case 0x451710u: goto label_451710;
        case 0x451714u: goto label_451714;
        case 0x451718u: goto label_451718;
        case 0x45171cu: goto label_45171c;
        case 0x451720u: goto label_451720;
        case 0x451724u: goto label_451724;
        case 0x451728u: goto label_451728;
        case 0x45172cu: goto label_45172c;
        case 0x451730u: goto label_451730;
        case 0x451734u: goto label_451734;
        case 0x451738u: goto label_451738;
        case 0x45173cu: goto label_45173c;
        case 0x451740u: goto label_451740;
        case 0x451744u: goto label_451744;
        case 0x451748u: goto label_451748;
        case 0x45174cu: goto label_45174c;
        case 0x451750u: goto label_451750;
        case 0x451754u: goto label_451754;
        case 0x451758u: goto label_451758;
        case 0x45175cu: goto label_45175c;
        case 0x451760u: goto label_451760;
        case 0x451764u: goto label_451764;
        case 0x451768u: goto label_451768;
        case 0x45176cu: goto label_45176c;
        case 0x451770u: goto label_451770;
        case 0x451774u: goto label_451774;
        case 0x451778u: goto label_451778;
        case 0x45177cu: goto label_45177c;
        case 0x451780u: goto label_451780;
        case 0x451784u: goto label_451784;
        case 0x451788u: goto label_451788;
        case 0x45178cu: goto label_45178c;
        case 0x451790u: goto label_451790;
        case 0x451794u: goto label_451794;
        case 0x451798u: goto label_451798;
        case 0x45179cu: goto label_45179c;
        case 0x4517a0u: goto label_4517a0;
        case 0x4517a4u: goto label_4517a4;
        case 0x4517a8u: goto label_4517a8;
        case 0x4517acu: goto label_4517ac;
        case 0x4517b0u: goto label_4517b0;
        case 0x4517b4u: goto label_4517b4;
        case 0x4517b8u: goto label_4517b8;
        case 0x4517bcu: goto label_4517bc;
        case 0x4517c0u: goto label_4517c0;
        case 0x4517c4u: goto label_4517c4;
        case 0x4517c8u: goto label_4517c8;
        case 0x4517ccu: goto label_4517cc;
        case 0x4517d0u: goto label_4517d0;
        case 0x4517d4u: goto label_4517d4;
        case 0x4517d8u: goto label_4517d8;
        case 0x4517dcu: goto label_4517dc;
        case 0x4517e0u: goto label_4517e0;
        case 0x4517e4u: goto label_4517e4;
        case 0x4517e8u: goto label_4517e8;
        case 0x4517ecu: goto label_4517ec;
        case 0x4517f0u: goto label_4517f0;
        case 0x4517f4u: goto label_4517f4;
        case 0x4517f8u: goto label_4517f8;
        case 0x4517fcu: goto label_4517fc;
        case 0x451800u: goto label_451800;
        case 0x451804u: goto label_451804;
        case 0x451808u: goto label_451808;
        case 0x45180cu: goto label_45180c;
        case 0x451810u: goto label_451810;
        case 0x451814u: goto label_451814;
        case 0x451818u: goto label_451818;
        case 0x45181cu: goto label_45181c;
        case 0x451820u: goto label_451820;
        case 0x451824u: goto label_451824;
        case 0x451828u: goto label_451828;
        case 0x45182cu: goto label_45182c;
        case 0x451830u: goto label_451830;
        case 0x451834u: goto label_451834;
        case 0x451838u: goto label_451838;
        case 0x45183cu: goto label_45183c;
        case 0x451840u: goto label_451840;
        case 0x451844u: goto label_451844;
        case 0x451848u: goto label_451848;
        case 0x45184cu: goto label_45184c;
        case 0x451850u: goto label_451850;
        case 0x451854u: goto label_451854;
        case 0x451858u: goto label_451858;
        case 0x45185cu: goto label_45185c;
        case 0x451860u: goto label_451860;
        case 0x451864u: goto label_451864;
        case 0x451868u: goto label_451868;
        case 0x45186cu: goto label_45186c;
        case 0x451870u: goto label_451870;
        case 0x451874u: goto label_451874;
        case 0x451878u: goto label_451878;
        case 0x45187cu: goto label_45187c;
        case 0x451880u: goto label_451880;
        case 0x451884u: goto label_451884;
        case 0x451888u: goto label_451888;
        case 0x45188cu: goto label_45188c;
        case 0x451890u: goto label_451890;
        case 0x451894u: goto label_451894;
        case 0x451898u: goto label_451898;
        case 0x45189cu: goto label_45189c;
        case 0x4518a0u: goto label_4518a0;
        case 0x4518a4u: goto label_4518a4;
        case 0x4518a8u: goto label_4518a8;
        case 0x4518acu: goto label_4518ac;
        case 0x4518b0u: goto label_4518b0;
        case 0x4518b4u: goto label_4518b4;
        case 0x4518b8u: goto label_4518b8;
        case 0x4518bcu: goto label_4518bc;
        case 0x4518c0u: goto label_4518c0;
        case 0x4518c4u: goto label_4518c4;
        case 0x4518c8u: goto label_4518c8;
        case 0x4518ccu: goto label_4518cc;
        case 0x4518d0u: goto label_4518d0;
        case 0x4518d4u: goto label_4518d4;
        case 0x4518d8u: goto label_4518d8;
        case 0x4518dcu: goto label_4518dc;
        case 0x4518e0u: goto label_4518e0;
        case 0x4518e4u: goto label_4518e4;
        case 0x4518e8u: goto label_4518e8;
        case 0x4518ecu: goto label_4518ec;
        case 0x4518f0u: goto label_4518f0;
        case 0x4518f4u: goto label_4518f4;
        case 0x4518f8u: goto label_4518f8;
        case 0x4518fcu: goto label_4518fc;
        case 0x451900u: goto label_451900;
        case 0x451904u: goto label_451904;
        case 0x451908u: goto label_451908;
        case 0x45190cu: goto label_45190c;
        case 0x451910u: goto label_451910;
        case 0x451914u: goto label_451914;
        case 0x451918u: goto label_451918;
        case 0x45191cu: goto label_45191c;
        case 0x451920u: goto label_451920;
        case 0x451924u: goto label_451924;
        case 0x451928u: goto label_451928;
        case 0x45192cu: goto label_45192c;
        case 0x451930u: goto label_451930;
        case 0x451934u: goto label_451934;
        case 0x451938u: goto label_451938;
        case 0x45193cu: goto label_45193c;
        case 0x451940u: goto label_451940;
        case 0x451944u: goto label_451944;
        case 0x451948u: goto label_451948;
        case 0x45194cu: goto label_45194c;
        case 0x451950u: goto label_451950;
        case 0x451954u: goto label_451954;
        case 0x451958u: goto label_451958;
        case 0x45195cu: goto label_45195c;
        case 0x451960u: goto label_451960;
        case 0x451964u: goto label_451964;
        case 0x451968u: goto label_451968;
        case 0x45196cu: goto label_45196c;
        case 0x451970u: goto label_451970;
        case 0x451974u: goto label_451974;
        case 0x451978u: goto label_451978;
        case 0x45197cu: goto label_45197c;
        case 0x451980u: goto label_451980;
        case 0x451984u: goto label_451984;
        case 0x451988u: goto label_451988;
        case 0x45198cu: goto label_45198c;
        case 0x451990u: goto label_451990;
        case 0x451994u: goto label_451994;
        case 0x451998u: goto label_451998;
        case 0x45199cu: goto label_45199c;
        case 0x4519a0u: goto label_4519a0;
        case 0x4519a4u: goto label_4519a4;
        case 0x4519a8u: goto label_4519a8;
        case 0x4519acu: goto label_4519ac;
        case 0x4519b0u: goto label_4519b0;
        case 0x4519b4u: goto label_4519b4;
        case 0x4519b8u: goto label_4519b8;
        case 0x4519bcu: goto label_4519bc;
        case 0x4519c0u: goto label_4519c0;
        case 0x4519c4u: goto label_4519c4;
        case 0x4519c8u: goto label_4519c8;
        case 0x4519ccu: goto label_4519cc;
        case 0x4519d0u: goto label_4519d0;
        case 0x4519d4u: goto label_4519d4;
        case 0x4519d8u: goto label_4519d8;
        case 0x4519dcu: goto label_4519dc;
        case 0x4519e0u: goto label_4519e0;
        case 0x4519e4u: goto label_4519e4;
        case 0x4519e8u: goto label_4519e8;
        case 0x4519ecu: goto label_4519ec;
        case 0x4519f0u: goto label_4519f0;
        case 0x4519f4u: goto label_4519f4;
        case 0x4519f8u: goto label_4519f8;
        case 0x4519fcu: goto label_4519fc;
        case 0x451a00u: goto label_451a00;
        case 0x451a04u: goto label_451a04;
        case 0x451a08u: goto label_451a08;
        case 0x451a0cu: goto label_451a0c;
        case 0x451a10u: goto label_451a10;
        case 0x451a14u: goto label_451a14;
        case 0x451a18u: goto label_451a18;
        case 0x451a1cu: goto label_451a1c;
        case 0x451a20u: goto label_451a20;
        case 0x451a24u: goto label_451a24;
        case 0x451a28u: goto label_451a28;
        case 0x451a2cu: goto label_451a2c;
        case 0x451a30u: goto label_451a30;
        case 0x451a34u: goto label_451a34;
        case 0x451a38u: goto label_451a38;
        case 0x451a3cu: goto label_451a3c;
        case 0x451a40u: goto label_451a40;
        case 0x451a44u: goto label_451a44;
        case 0x451a48u: goto label_451a48;
        case 0x451a4cu: goto label_451a4c;
        case 0x451a50u: goto label_451a50;
        case 0x451a54u: goto label_451a54;
        case 0x451a58u: goto label_451a58;
        case 0x451a5cu: goto label_451a5c;
        case 0x451a60u: goto label_451a60;
        case 0x451a64u: goto label_451a64;
        case 0x451a68u: goto label_451a68;
        case 0x451a6cu: goto label_451a6c;
        case 0x451a70u: goto label_451a70;
        case 0x451a74u: goto label_451a74;
        case 0x451a78u: goto label_451a78;
        case 0x451a7cu: goto label_451a7c;
        case 0x451a80u: goto label_451a80;
        case 0x451a84u: goto label_451a84;
        case 0x451a88u: goto label_451a88;
        case 0x451a8cu: goto label_451a8c;
        case 0x451a90u: goto label_451a90;
        case 0x451a94u: goto label_451a94;
        case 0x451a98u: goto label_451a98;
        case 0x451a9cu: goto label_451a9c;
        case 0x451aa0u: goto label_451aa0;
        case 0x451aa4u: goto label_451aa4;
        case 0x451aa8u: goto label_451aa8;
        case 0x451aacu: goto label_451aac;
        case 0x451ab0u: goto label_451ab0;
        case 0x451ab4u: goto label_451ab4;
        case 0x451ab8u: goto label_451ab8;
        case 0x451abcu: goto label_451abc;
        case 0x451ac0u: goto label_451ac0;
        case 0x451ac4u: goto label_451ac4;
        case 0x451ac8u: goto label_451ac8;
        case 0x451accu: goto label_451acc;
        case 0x451ad0u: goto label_451ad0;
        case 0x451ad4u: goto label_451ad4;
        case 0x451ad8u: goto label_451ad8;
        case 0x451adcu: goto label_451adc;
        case 0x451ae0u: goto label_451ae0;
        case 0x451ae4u: goto label_451ae4;
        case 0x451ae8u: goto label_451ae8;
        case 0x451aecu: goto label_451aec;
        case 0x451af0u: goto label_451af0;
        case 0x451af4u: goto label_451af4;
        case 0x451af8u: goto label_451af8;
        case 0x451afcu: goto label_451afc;
        case 0x451b00u: goto label_451b00;
        case 0x451b04u: goto label_451b04;
        case 0x451b08u: goto label_451b08;
        case 0x451b0cu: goto label_451b0c;
        case 0x451b10u: goto label_451b10;
        case 0x451b14u: goto label_451b14;
        case 0x451b18u: goto label_451b18;
        case 0x451b1cu: goto label_451b1c;
        case 0x451b20u: goto label_451b20;
        case 0x451b24u: goto label_451b24;
        case 0x451b28u: goto label_451b28;
        case 0x451b2cu: goto label_451b2c;
        case 0x451b30u: goto label_451b30;
        case 0x451b34u: goto label_451b34;
        case 0x451b38u: goto label_451b38;
        case 0x451b3cu: goto label_451b3c;
        case 0x451b40u: goto label_451b40;
        case 0x451b44u: goto label_451b44;
        case 0x451b48u: goto label_451b48;
        case 0x451b4cu: goto label_451b4c;
        case 0x451b50u: goto label_451b50;
        case 0x451b54u: goto label_451b54;
        case 0x451b58u: goto label_451b58;
        case 0x451b5cu: goto label_451b5c;
        case 0x451b60u: goto label_451b60;
        case 0x451b64u: goto label_451b64;
        case 0x451b68u: goto label_451b68;
        case 0x451b6cu: goto label_451b6c;
        case 0x451b70u: goto label_451b70;
        case 0x451b74u: goto label_451b74;
        case 0x451b78u: goto label_451b78;
        case 0x451b7cu: goto label_451b7c;
        case 0x451b80u: goto label_451b80;
        case 0x451b84u: goto label_451b84;
        case 0x451b88u: goto label_451b88;
        case 0x451b8cu: goto label_451b8c;
        case 0x451b90u: goto label_451b90;
        case 0x451b94u: goto label_451b94;
        case 0x451b98u: goto label_451b98;
        case 0x451b9cu: goto label_451b9c;
        case 0x451ba0u: goto label_451ba0;
        case 0x451ba4u: goto label_451ba4;
        case 0x451ba8u: goto label_451ba8;
        case 0x451bacu: goto label_451bac;
        case 0x451bb0u: goto label_451bb0;
        case 0x451bb4u: goto label_451bb4;
        case 0x451bb8u: goto label_451bb8;
        case 0x451bbcu: goto label_451bbc;
        case 0x451bc0u: goto label_451bc0;
        case 0x451bc4u: goto label_451bc4;
        case 0x451bc8u: goto label_451bc8;
        case 0x451bccu: goto label_451bcc;
        case 0x451bd0u: goto label_451bd0;
        case 0x451bd4u: goto label_451bd4;
        case 0x451bd8u: goto label_451bd8;
        case 0x451bdcu: goto label_451bdc;
        case 0x451be0u: goto label_451be0;
        case 0x451be4u: goto label_451be4;
        case 0x451be8u: goto label_451be8;
        case 0x451becu: goto label_451bec;
        case 0x451bf0u: goto label_451bf0;
        case 0x451bf4u: goto label_451bf4;
        case 0x451bf8u: goto label_451bf8;
        case 0x451bfcu: goto label_451bfc;
        case 0x451c00u: goto label_451c00;
        case 0x451c04u: goto label_451c04;
        case 0x451c08u: goto label_451c08;
        case 0x451c0cu: goto label_451c0c;
        case 0x451c10u: goto label_451c10;
        case 0x451c14u: goto label_451c14;
        case 0x451c18u: goto label_451c18;
        case 0x451c1cu: goto label_451c1c;
        case 0x451c20u: goto label_451c20;
        case 0x451c24u: goto label_451c24;
        case 0x451c28u: goto label_451c28;
        case 0x451c2cu: goto label_451c2c;
        case 0x451c30u: goto label_451c30;
        case 0x451c34u: goto label_451c34;
        case 0x451c38u: goto label_451c38;
        case 0x451c3cu: goto label_451c3c;
        case 0x451c40u: goto label_451c40;
        case 0x451c44u: goto label_451c44;
        case 0x451c48u: goto label_451c48;
        case 0x451c4cu: goto label_451c4c;
        case 0x451c50u: goto label_451c50;
        case 0x451c54u: goto label_451c54;
        case 0x451c58u: goto label_451c58;
        case 0x451c5cu: goto label_451c5c;
        case 0x451c60u: goto label_451c60;
        case 0x451c64u: goto label_451c64;
        case 0x451c68u: goto label_451c68;
        case 0x451c6cu: goto label_451c6c;
        case 0x451c70u: goto label_451c70;
        case 0x451c74u: goto label_451c74;
        case 0x451c78u: goto label_451c78;
        case 0x451c7cu: goto label_451c7c;
        case 0x451c80u: goto label_451c80;
        case 0x451c84u: goto label_451c84;
        case 0x451c88u: goto label_451c88;
        case 0x451c8cu: goto label_451c8c;
        case 0x451c90u: goto label_451c90;
        case 0x451c94u: goto label_451c94;
        case 0x451c98u: goto label_451c98;
        case 0x451c9cu: goto label_451c9c;
        case 0x451ca0u: goto label_451ca0;
        case 0x451ca4u: goto label_451ca4;
        case 0x451ca8u: goto label_451ca8;
        case 0x451cacu: goto label_451cac;
        case 0x451cb0u: goto label_451cb0;
        case 0x451cb4u: goto label_451cb4;
        case 0x451cb8u: goto label_451cb8;
        case 0x451cbcu: goto label_451cbc;
        case 0x451cc0u: goto label_451cc0;
        case 0x451cc4u: goto label_451cc4;
        case 0x451cc8u: goto label_451cc8;
        case 0x451cccu: goto label_451ccc;
        case 0x451cd0u: goto label_451cd0;
        case 0x451cd4u: goto label_451cd4;
        case 0x451cd8u: goto label_451cd8;
        case 0x451cdcu: goto label_451cdc;
        case 0x451ce0u: goto label_451ce0;
        case 0x451ce4u: goto label_451ce4;
        case 0x451ce8u: goto label_451ce8;
        case 0x451cecu: goto label_451cec;
        case 0x451cf0u: goto label_451cf0;
        case 0x451cf4u: goto label_451cf4;
        case 0x451cf8u: goto label_451cf8;
        case 0x451cfcu: goto label_451cfc;
        case 0x451d00u: goto label_451d00;
        case 0x451d04u: goto label_451d04;
        case 0x451d08u: goto label_451d08;
        case 0x451d0cu: goto label_451d0c;
        case 0x451d10u: goto label_451d10;
        case 0x451d14u: goto label_451d14;
        case 0x451d18u: goto label_451d18;
        case 0x451d1cu: goto label_451d1c;
        case 0x451d20u: goto label_451d20;
        case 0x451d24u: goto label_451d24;
        case 0x451d28u: goto label_451d28;
        case 0x451d2cu: goto label_451d2c;
        case 0x451d30u: goto label_451d30;
        case 0x451d34u: goto label_451d34;
        case 0x451d38u: goto label_451d38;
        case 0x451d3cu: goto label_451d3c;
        case 0x451d40u: goto label_451d40;
        case 0x451d44u: goto label_451d44;
        case 0x451d48u: goto label_451d48;
        case 0x451d4cu: goto label_451d4c;
        case 0x451d50u: goto label_451d50;
        case 0x451d54u: goto label_451d54;
        case 0x451d58u: goto label_451d58;
        case 0x451d5cu: goto label_451d5c;
        case 0x451d60u: goto label_451d60;
        case 0x451d64u: goto label_451d64;
        case 0x451d68u: goto label_451d68;
        case 0x451d6cu: goto label_451d6c;
        case 0x451d70u: goto label_451d70;
        case 0x451d74u: goto label_451d74;
        case 0x451d78u: goto label_451d78;
        case 0x451d7cu: goto label_451d7c;
        case 0x451d80u: goto label_451d80;
        case 0x451d84u: goto label_451d84;
        case 0x451d88u: goto label_451d88;
        case 0x451d8cu: goto label_451d8c;
        case 0x451d90u: goto label_451d90;
        case 0x451d94u: goto label_451d94;
        case 0x451d98u: goto label_451d98;
        case 0x451d9cu: goto label_451d9c;
        case 0x451da0u: goto label_451da0;
        case 0x451da4u: goto label_451da4;
        case 0x451da8u: goto label_451da8;
        case 0x451dacu: goto label_451dac;
        case 0x451db0u: goto label_451db0;
        case 0x451db4u: goto label_451db4;
        case 0x451db8u: goto label_451db8;
        case 0x451dbcu: goto label_451dbc;
        case 0x451dc0u: goto label_451dc0;
        case 0x451dc4u: goto label_451dc4;
        case 0x451dc8u: goto label_451dc8;
        case 0x451dccu: goto label_451dcc;
        case 0x451dd0u: goto label_451dd0;
        case 0x451dd4u: goto label_451dd4;
        case 0x451dd8u: goto label_451dd8;
        case 0x451ddcu: goto label_451ddc;
        case 0x451de0u: goto label_451de0;
        case 0x451de4u: goto label_451de4;
        case 0x451de8u: goto label_451de8;
        case 0x451decu: goto label_451dec;
        case 0x451df0u: goto label_451df0;
        case 0x451df4u: goto label_451df4;
        case 0x451df8u: goto label_451df8;
        case 0x451dfcu: goto label_451dfc;
        case 0x451e00u: goto label_451e00;
        case 0x451e04u: goto label_451e04;
        case 0x451e08u: goto label_451e08;
        case 0x451e0cu: goto label_451e0c;
        case 0x451e10u: goto label_451e10;
        case 0x451e14u: goto label_451e14;
        case 0x451e18u: goto label_451e18;
        case 0x451e1cu: goto label_451e1c;
        case 0x451e20u: goto label_451e20;
        case 0x451e24u: goto label_451e24;
        case 0x451e28u: goto label_451e28;
        case 0x451e2cu: goto label_451e2c;
        case 0x451e30u: goto label_451e30;
        case 0x451e34u: goto label_451e34;
        case 0x451e38u: goto label_451e38;
        case 0x451e3cu: goto label_451e3c;
        case 0x451e40u: goto label_451e40;
        case 0x451e44u: goto label_451e44;
        case 0x451e48u: goto label_451e48;
        case 0x451e4cu: goto label_451e4c;
        case 0x451e50u: goto label_451e50;
        case 0x451e54u: goto label_451e54;
        case 0x451e58u: goto label_451e58;
        case 0x451e5cu: goto label_451e5c;
        case 0x451e60u: goto label_451e60;
        case 0x451e64u: goto label_451e64;
        case 0x451e68u: goto label_451e68;
        case 0x451e6cu: goto label_451e6c;
        case 0x451e70u: goto label_451e70;
        case 0x451e74u: goto label_451e74;
        case 0x451e78u: goto label_451e78;
        case 0x451e7cu: goto label_451e7c;
        case 0x451e80u: goto label_451e80;
        case 0x451e84u: goto label_451e84;
        case 0x451e88u: goto label_451e88;
        case 0x451e8cu: goto label_451e8c;
        case 0x451e90u: goto label_451e90;
        case 0x451e94u: goto label_451e94;
        case 0x451e98u: goto label_451e98;
        case 0x451e9cu: goto label_451e9c;
        case 0x451ea0u: goto label_451ea0;
        case 0x451ea4u: goto label_451ea4;
        case 0x451ea8u: goto label_451ea8;
        case 0x451eacu: goto label_451eac;
        case 0x451eb0u: goto label_451eb0;
        case 0x451eb4u: goto label_451eb4;
        case 0x451eb8u: goto label_451eb8;
        case 0x451ebcu: goto label_451ebc;
        case 0x451ec0u: goto label_451ec0;
        case 0x451ec4u: goto label_451ec4;
        case 0x451ec8u: goto label_451ec8;
        case 0x451eccu: goto label_451ecc;
        case 0x451ed0u: goto label_451ed0;
        case 0x451ed4u: goto label_451ed4;
        case 0x451ed8u: goto label_451ed8;
        case 0x451edcu: goto label_451edc;
        case 0x451ee0u: goto label_451ee0;
        case 0x451ee4u: goto label_451ee4;
        case 0x451ee8u: goto label_451ee8;
        case 0x451eecu: goto label_451eec;
        case 0x451ef0u: goto label_451ef0;
        case 0x451ef4u: goto label_451ef4;
        case 0x451ef8u: goto label_451ef8;
        case 0x451efcu: goto label_451efc;
        case 0x451f00u: goto label_451f00;
        case 0x451f04u: goto label_451f04;
        case 0x451f08u: goto label_451f08;
        case 0x451f0cu: goto label_451f0c;
        case 0x451f10u: goto label_451f10;
        case 0x451f14u: goto label_451f14;
        case 0x451f18u: goto label_451f18;
        case 0x451f1cu: goto label_451f1c;
        case 0x451f20u: goto label_451f20;
        case 0x451f24u: goto label_451f24;
        case 0x451f28u: goto label_451f28;
        case 0x451f2cu: goto label_451f2c;
        case 0x451f30u: goto label_451f30;
        case 0x451f34u: goto label_451f34;
        case 0x451f38u: goto label_451f38;
        case 0x451f3cu: goto label_451f3c;
        case 0x451f40u: goto label_451f40;
        case 0x451f44u: goto label_451f44;
        case 0x451f48u: goto label_451f48;
        case 0x451f4cu: goto label_451f4c;
        case 0x451f50u: goto label_451f50;
        case 0x451f54u: goto label_451f54;
        case 0x451f58u: goto label_451f58;
        case 0x451f5cu: goto label_451f5c;
        case 0x451f60u: goto label_451f60;
        case 0x451f64u: goto label_451f64;
        case 0x451f68u: goto label_451f68;
        case 0x451f6cu: goto label_451f6c;
        case 0x451f70u: goto label_451f70;
        case 0x451f74u: goto label_451f74;
        case 0x451f78u: goto label_451f78;
        case 0x451f7cu: goto label_451f7c;
        case 0x451f80u: goto label_451f80;
        case 0x451f84u: goto label_451f84;
        case 0x451f88u: goto label_451f88;
        case 0x451f8cu: goto label_451f8c;
        case 0x451f90u: goto label_451f90;
        case 0x451f94u: goto label_451f94;
        case 0x451f98u: goto label_451f98;
        case 0x451f9cu: goto label_451f9c;
        case 0x451fa0u: goto label_451fa0;
        case 0x451fa4u: goto label_451fa4;
        case 0x451fa8u: goto label_451fa8;
        case 0x451facu: goto label_451fac;
        case 0x451fb0u: goto label_451fb0;
        case 0x451fb4u: goto label_451fb4;
        case 0x451fb8u: goto label_451fb8;
        case 0x451fbcu: goto label_451fbc;
        case 0x451fc0u: goto label_451fc0;
        case 0x451fc4u: goto label_451fc4;
        case 0x451fc8u: goto label_451fc8;
        case 0x451fccu: goto label_451fcc;
        case 0x451fd0u: goto label_451fd0;
        case 0x451fd4u: goto label_451fd4;
        case 0x451fd8u: goto label_451fd8;
        case 0x451fdcu: goto label_451fdc;
        case 0x451fe0u: goto label_451fe0;
        case 0x451fe4u: goto label_451fe4;
        case 0x451fe8u: goto label_451fe8;
        case 0x451fecu: goto label_451fec;
        case 0x451ff0u: goto label_451ff0;
        case 0x451ff4u: goto label_451ff4;
        case 0x451ff8u: goto label_451ff8;
        case 0x451ffcu: goto label_451ffc;
        case 0x452000u: goto label_452000;
        case 0x452004u: goto label_452004;
        case 0x452008u: goto label_452008;
        case 0x45200cu: goto label_45200c;
        case 0x452010u: goto label_452010;
        case 0x452014u: goto label_452014;
        case 0x452018u: goto label_452018;
        case 0x45201cu: goto label_45201c;
        case 0x452020u: goto label_452020;
        case 0x452024u: goto label_452024;
        case 0x452028u: goto label_452028;
        case 0x45202cu: goto label_45202c;
        case 0x452030u: goto label_452030;
        case 0x452034u: goto label_452034;
        case 0x452038u: goto label_452038;
        case 0x45203cu: goto label_45203c;
        case 0x452040u: goto label_452040;
        case 0x452044u: goto label_452044;
        case 0x452048u: goto label_452048;
        case 0x45204cu: goto label_45204c;
        case 0x452050u: goto label_452050;
        case 0x452054u: goto label_452054;
        case 0x452058u: goto label_452058;
        case 0x45205cu: goto label_45205c;
        case 0x452060u: goto label_452060;
        case 0x452064u: goto label_452064;
        case 0x452068u: goto label_452068;
        case 0x45206cu: goto label_45206c;
        case 0x452070u: goto label_452070;
        case 0x452074u: goto label_452074;
        case 0x452078u: goto label_452078;
        case 0x45207cu: goto label_45207c;
        case 0x452080u: goto label_452080;
        case 0x452084u: goto label_452084;
        case 0x452088u: goto label_452088;
        case 0x45208cu: goto label_45208c;
        case 0x452090u: goto label_452090;
        case 0x452094u: goto label_452094;
        case 0x452098u: goto label_452098;
        case 0x45209cu: goto label_45209c;
        case 0x4520a0u: goto label_4520a0;
        case 0x4520a4u: goto label_4520a4;
        case 0x4520a8u: goto label_4520a8;
        case 0x4520acu: goto label_4520ac;
        case 0x4520b0u: goto label_4520b0;
        case 0x4520b4u: goto label_4520b4;
        case 0x4520b8u: goto label_4520b8;
        case 0x4520bcu: goto label_4520bc;
        case 0x4520c0u: goto label_4520c0;
        case 0x4520c4u: goto label_4520c4;
        case 0x4520c8u: goto label_4520c8;
        case 0x4520ccu: goto label_4520cc;
        case 0x4520d0u: goto label_4520d0;
        case 0x4520d4u: goto label_4520d4;
        case 0x4520d8u: goto label_4520d8;
        case 0x4520dcu: goto label_4520dc;
        case 0x4520e0u: goto label_4520e0;
        case 0x4520e4u: goto label_4520e4;
        case 0x4520e8u: goto label_4520e8;
        case 0x4520ecu: goto label_4520ec;
        case 0x4520f0u: goto label_4520f0;
        case 0x4520f4u: goto label_4520f4;
        case 0x4520f8u: goto label_4520f8;
        case 0x4520fcu: goto label_4520fc;
        case 0x452100u: goto label_452100;
        case 0x452104u: goto label_452104;
        case 0x452108u: goto label_452108;
        case 0x45210cu: goto label_45210c;
        case 0x452110u: goto label_452110;
        case 0x452114u: goto label_452114;
        case 0x452118u: goto label_452118;
        case 0x45211cu: goto label_45211c;
        case 0x452120u: goto label_452120;
        case 0x452124u: goto label_452124;
        case 0x452128u: goto label_452128;
        case 0x45212cu: goto label_45212c;
        case 0x452130u: goto label_452130;
        case 0x452134u: goto label_452134;
        case 0x452138u: goto label_452138;
        case 0x45213cu: goto label_45213c;
        case 0x452140u: goto label_452140;
        case 0x452144u: goto label_452144;
        case 0x452148u: goto label_452148;
        case 0x45214cu: goto label_45214c;
        case 0x452150u: goto label_452150;
        case 0x452154u: goto label_452154;
        case 0x452158u: goto label_452158;
        case 0x45215cu: goto label_45215c;
        case 0x452160u: goto label_452160;
        case 0x452164u: goto label_452164;
        case 0x452168u: goto label_452168;
        case 0x45216cu: goto label_45216c;
        case 0x452170u: goto label_452170;
        case 0x452174u: goto label_452174;
        case 0x452178u: goto label_452178;
        case 0x45217cu: goto label_45217c;
        case 0x452180u: goto label_452180;
        case 0x452184u: goto label_452184;
        case 0x452188u: goto label_452188;
        case 0x45218cu: goto label_45218c;
        case 0x452190u: goto label_452190;
        case 0x452194u: goto label_452194;
        case 0x452198u: goto label_452198;
        case 0x45219cu: goto label_45219c;
        case 0x4521a0u: goto label_4521a0;
        case 0x4521a4u: goto label_4521a4;
        case 0x4521a8u: goto label_4521a8;
        case 0x4521acu: goto label_4521ac;
        case 0x4521b0u: goto label_4521b0;
        case 0x4521b4u: goto label_4521b4;
        case 0x4521b8u: goto label_4521b8;
        case 0x4521bcu: goto label_4521bc;
        case 0x4521c0u: goto label_4521c0;
        case 0x4521c4u: goto label_4521c4;
        case 0x4521c8u: goto label_4521c8;
        case 0x4521ccu: goto label_4521cc;
        case 0x4521d0u: goto label_4521d0;
        case 0x4521d4u: goto label_4521d4;
        case 0x4521d8u: goto label_4521d8;
        case 0x4521dcu: goto label_4521dc;
        case 0x4521e0u: goto label_4521e0;
        case 0x4521e4u: goto label_4521e4;
        case 0x4521e8u: goto label_4521e8;
        case 0x4521ecu: goto label_4521ec;
        case 0x4521f0u: goto label_4521f0;
        case 0x4521f4u: goto label_4521f4;
        case 0x4521f8u: goto label_4521f8;
        case 0x4521fcu: goto label_4521fc;
        case 0x452200u: goto label_452200;
        case 0x452204u: goto label_452204;
        case 0x452208u: goto label_452208;
        case 0x45220cu: goto label_45220c;
        case 0x452210u: goto label_452210;
        case 0x452214u: goto label_452214;
        case 0x452218u: goto label_452218;
        case 0x45221cu: goto label_45221c;
        case 0x452220u: goto label_452220;
        case 0x452224u: goto label_452224;
        case 0x452228u: goto label_452228;
        case 0x45222cu: goto label_45222c;
        case 0x452230u: goto label_452230;
        case 0x452234u: goto label_452234;
        case 0x452238u: goto label_452238;
        case 0x45223cu: goto label_45223c;
        case 0x452240u: goto label_452240;
        case 0x452244u: goto label_452244;
        case 0x452248u: goto label_452248;
        case 0x45224cu: goto label_45224c;
        case 0x452250u: goto label_452250;
        case 0x452254u: goto label_452254;
        case 0x452258u: goto label_452258;
        case 0x45225cu: goto label_45225c;
        case 0x452260u: goto label_452260;
        case 0x452264u: goto label_452264;
        case 0x452268u: goto label_452268;
        case 0x45226cu: goto label_45226c;
        case 0x452270u: goto label_452270;
        case 0x452274u: goto label_452274;
        case 0x452278u: goto label_452278;
        case 0x45227cu: goto label_45227c;
        case 0x452280u: goto label_452280;
        case 0x452284u: goto label_452284;
        case 0x452288u: goto label_452288;
        case 0x45228cu: goto label_45228c;
        case 0x452290u: goto label_452290;
        case 0x452294u: goto label_452294;
        case 0x452298u: goto label_452298;
        case 0x45229cu: goto label_45229c;
        case 0x4522a0u: goto label_4522a0;
        case 0x4522a4u: goto label_4522a4;
        case 0x4522a8u: goto label_4522a8;
        case 0x4522acu: goto label_4522ac;
        case 0x4522b0u: goto label_4522b0;
        case 0x4522b4u: goto label_4522b4;
        case 0x4522b8u: goto label_4522b8;
        case 0x4522bcu: goto label_4522bc;
        case 0x4522c0u: goto label_4522c0;
        case 0x4522c4u: goto label_4522c4;
        case 0x4522c8u: goto label_4522c8;
        case 0x4522ccu: goto label_4522cc;
        case 0x4522d0u: goto label_4522d0;
        case 0x4522d4u: goto label_4522d4;
        case 0x4522d8u: goto label_4522d8;
        case 0x4522dcu: goto label_4522dc;
        case 0x4522e0u: goto label_4522e0;
        case 0x4522e4u: goto label_4522e4;
        case 0x4522e8u: goto label_4522e8;
        case 0x4522ecu: goto label_4522ec;
        case 0x4522f0u: goto label_4522f0;
        case 0x4522f4u: goto label_4522f4;
        case 0x4522f8u: goto label_4522f8;
        case 0x4522fcu: goto label_4522fc;
        case 0x452300u: goto label_452300;
        case 0x452304u: goto label_452304;
        case 0x452308u: goto label_452308;
        case 0x45230cu: goto label_45230c;
        case 0x452310u: goto label_452310;
        case 0x452314u: goto label_452314;
        case 0x452318u: goto label_452318;
        case 0x45231cu: goto label_45231c;
        case 0x452320u: goto label_452320;
        case 0x452324u: goto label_452324;
        case 0x452328u: goto label_452328;
        case 0x45232cu: goto label_45232c;
        case 0x452330u: goto label_452330;
        case 0x452334u: goto label_452334;
        case 0x452338u: goto label_452338;
        case 0x45233cu: goto label_45233c;
        case 0x452340u: goto label_452340;
        case 0x452344u: goto label_452344;
        case 0x452348u: goto label_452348;
        case 0x45234cu: goto label_45234c;
        case 0x452350u: goto label_452350;
        case 0x452354u: goto label_452354;
        case 0x452358u: goto label_452358;
        case 0x45235cu: goto label_45235c;
        case 0x452360u: goto label_452360;
        case 0x452364u: goto label_452364;
        case 0x452368u: goto label_452368;
        case 0x45236cu: goto label_45236c;
        case 0x452370u: goto label_452370;
        case 0x452374u: goto label_452374;
        case 0x452378u: goto label_452378;
        case 0x45237cu: goto label_45237c;
        case 0x452380u: goto label_452380;
        case 0x452384u: goto label_452384;
        case 0x452388u: goto label_452388;
        case 0x45238cu: goto label_45238c;
        case 0x452390u: goto label_452390;
        case 0x452394u: goto label_452394;
        case 0x452398u: goto label_452398;
        case 0x45239cu: goto label_45239c;
        case 0x4523a0u: goto label_4523a0;
        case 0x4523a4u: goto label_4523a4;
        case 0x4523a8u: goto label_4523a8;
        case 0x4523acu: goto label_4523ac;
        case 0x4523b0u: goto label_4523b0;
        case 0x4523b4u: goto label_4523b4;
        case 0x4523b8u: goto label_4523b8;
        case 0x4523bcu: goto label_4523bc;
        case 0x4523c0u: goto label_4523c0;
        case 0x4523c4u: goto label_4523c4;
        case 0x4523c8u: goto label_4523c8;
        case 0x4523ccu: goto label_4523cc;
        case 0x4523d0u: goto label_4523d0;
        case 0x4523d4u: goto label_4523d4;
        case 0x4523d8u: goto label_4523d8;
        case 0x4523dcu: goto label_4523dc;
        case 0x4523e0u: goto label_4523e0;
        case 0x4523e4u: goto label_4523e4;
        case 0x4523e8u: goto label_4523e8;
        case 0x4523ecu: goto label_4523ec;
        case 0x4523f0u: goto label_4523f0;
        case 0x4523f4u: goto label_4523f4;
        case 0x4523f8u: goto label_4523f8;
        case 0x4523fcu: goto label_4523fc;
        default: break;
    }

    ctx->pc = 0x450730u;

label_450730:
    // 0x450730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x450730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_450734:
    // 0x450734: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x450734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_450738:
    // 0x450738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45073c:
    // 0x45073c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x45073cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_450740:
    // 0x450740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_450744:
    // 0x450744: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x450744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_450748:
    // 0x450748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x450748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45074c:
    // 0x45074c: 0xc10ca38  jal         func_4328E0
label_450750:
    if (ctx->pc == 0x450750u) {
        ctx->pc = 0x450750u;
            // 0x450750: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x450754u;
        goto label_450754;
    }
    ctx->pc = 0x45074Cu;
    SET_GPR_U32(ctx, 31, 0x450754u);
    ctx->pc = 0x450750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45074Cu;
            // 0x450750: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450754u; }
        if (ctx->pc != 0x450754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450754u; }
        if (ctx->pc != 0x450754u) { return; }
    }
    ctx->pc = 0x450754u;
label_450754:
    // 0x450754: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x450754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_450758:
    // 0x450758: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x450758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_45075c:
    // 0x45075c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x45075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_450760:
    // 0x450760: 0x2463dd50  addiu       $v1, $v1, -0x22B0
    ctx->pc = 0x450760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958416));
label_450764:
    // 0x450764: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x450764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_450768:
    // 0x450768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x450768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45076c:
    // 0x45076c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45076cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_450770:
    // 0x450770: 0xc078b00  jal         func_1E2C00
label_450774:
    if (ctx->pc == 0x450774u) {
        ctx->pc = 0x450774u;
            // 0x450774: 0x8c44e3e0  lw          $a0, -0x1C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
        ctx->pc = 0x450778u;
        goto label_450778;
    }
    ctx->pc = 0x450770u;
    SET_GPR_U32(ctx, 31, 0x450778u);
    ctx->pc = 0x450774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450770u;
            // 0x450774: 0x8c44e3e0  lw          $a0, -0x1C20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2C00u;
    if (runtime->hasFunction(0x1E2C00u)) {
        auto targetFn = runtime->lookupFunction(0x1E2C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450778u; }
        if (ctx->pc != 0x450778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2C00_0x1e2c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450778u; }
        if (ctx->pc != 0x450778u) { return; }
    }
    ctx->pc = 0x450778u;
label_450778:
    // 0x450778: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x450778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45077c:
    // 0x45077c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45077cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_450780:
    // 0x450780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_450784:
    // 0x450784: 0x3e00008  jr          $ra
label_450788:
    if (ctx->pc == 0x450788u) {
        ctx->pc = 0x450788u;
            // 0x450788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45078Cu;
        goto label_45078c;
    }
    ctx->pc = 0x450784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450784u;
            // 0x450788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45078Cu;
label_45078c:
    // 0x45078c: 0x0  nop
    ctx->pc = 0x45078cu;
    // NOP
label_450790:
    // 0x450790: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x450790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_450794:
    // 0x450794: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x450794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_450798:
    // 0x450798: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x450798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45079c:
    // 0x45079c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4507a0:
    // 0x4507a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4507a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4507a4:
    // 0x4507a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4507a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4507a8:
    // 0x4507a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4507a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4507ac:
    // 0x4507ac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4507acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4507b0:
    // 0x4507b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4507b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4507b4:
    // 0x4507b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4507b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4507b8:
    // 0x4507b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4507b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4507bc:
    // 0x4507bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4507bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4507c0:
    // 0x4507c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4507c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4507c4:
    // 0x4507c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4507c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4507c8:
    // 0x4507c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4507c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4507cc:
    // 0x4507cc: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4507ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4507d0:
    // 0x4507d0: 0x50830041  beql        $a0, $v1, . + 4 + (0x41 << 2)
label_4507d4:
    if (ctx->pc == 0x4507D4u) {
        ctx->pc = 0x4507D4u;
            // 0x4507d4: 0xc6c00070  lwc1        $f0, 0x70($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4507D8u;
        goto label_4507d8;
    }
    ctx->pc = 0x4507D0u;
    {
        const bool branch_taken_0x4507d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4507d0) {
            ctx->pc = 0x4507D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4507D0u;
            // 0x4507d4: 0xc6c00070  lwc1        $f0, 0x70($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4508D8u;
            goto label_4508d8;
        }
    }
    ctx->pc = 0x4507D8u;
label_4507d8:
    // 0x4507d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4507d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4507dc:
    // 0x4507dc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4507e0:
    if (ctx->pc == 0x4507E0u) {
        ctx->pc = 0x4507E4u;
        goto label_4507e4;
    }
    ctx->pc = 0x4507DCu;
    {
        const bool branch_taken_0x4507dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4507dc) {
            ctx->pc = 0x4507ECu;
            goto label_4507ec;
        }
    }
    ctx->pc = 0x4507E4u;
label_4507e4:
    // 0x4507e4: 0x100000eb  b           . + 4 + (0xEB << 2)
label_4507e8:
    if (ctx->pc == 0x4507E8u) {
        ctx->pc = 0x4507E8u;
            // 0x4507e8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4507ECu;
        goto label_4507ec;
    }
    ctx->pc = 0x4507E4u;
    {
        const bool branch_taken_0x4507e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4507E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4507E4u;
            // 0x4507e8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4507e4) {
            ctx->pc = 0x450B94u;
            goto label_450b94;
        }
    }
    ctx->pc = 0x4507ECu;
label_4507ec:
    // 0x4507ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4507f0:
    // 0x4507f0: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x4507f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_4507f4:
    // 0x4507f4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4507f8:
    // 0x4507f8: 0x26d50060  addiu       $s5, $s6, 0x60
    ctx->pc = 0x4507f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_4507fc:
    // 0x4507fc: 0x26940e84  addiu       $s4, $s4, 0xE84
    ctx->pc = 0x4507fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3716));
label_450800:
    // 0x450800: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x450800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450804:
    // 0x450804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x450804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450808:
    // 0x450808: 0x8c570780  lw          $s7, 0x780($v0)
    ctx->pc = 0x450808u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_45080c:
    // 0x45080c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x45080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_450810:
    // 0x450810: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x450810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_450814:
    // 0x450814: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x450814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_450818:
    // 0x450818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x450818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_45081c:
    // 0x45081c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_450820:
    // 0x450820: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x450820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_450824:
    // 0x450824: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x450824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_450828:
    // 0x450828: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x450828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_45082c:
    // 0x45082c: 0xc04cc34  jal         func_1330D0
label_450830:
    if (ctx->pc == 0x450830u) {
        ctx->pc = 0x450830u;
            // 0x450830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450834u;
        goto label_450834;
    }
    ctx->pc = 0x45082Cu;
    SET_GPR_U32(ctx, 31, 0x450834u);
    ctx->pc = 0x450830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45082Cu;
            // 0x450830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450834u; }
        if (ctx->pc != 0x450834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450834u; }
        if (ctx->pc != 0x450834u) { return; }
    }
    ctx->pc = 0x450834u;
label_450834:
    // 0x450834: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x450834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_450838:
    // 0x450838: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x450838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_45083c:
    // 0x45083c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45083cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450840:
    // 0x450840: 0x0  nop
    ctx->pc = 0x450840u;
    // NOP
label_450844:
    // 0x450844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x450844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450848:
    // 0x450848: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_45084c:
    if (ctx->pc == 0x45084Cu) {
        ctx->pc = 0x450850u;
        goto label_450850;
    }
    ctx->pc = 0x450848u;
    {
        const bool branch_taken_0x450848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450848) {
            ctx->pc = 0x4508A8u;
            goto label_4508a8;
        }
    }
    ctx->pc = 0x450850u;
label_450850:
    // 0x450850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x450850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_450854:
    // 0x450854: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x450854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_450858:
    // 0x450858: 0xc04cc90  jal         func_133240
label_45085c:
    if (ctx->pc == 0x45085Cu) {
        ctx->pc = 0x45085Cu;
            // 0x45085c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450860u;
        goto label_450860;
    }
    ctx->pc = 0x450858u;
    SET_GPR_U32(ctx, 31, 0x450860u);
    ctx->pc = 0x45085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450858u;
            // 0x45085c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450860u; }
        if (ctx->pc != 0x450860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450860u; }
        if (ctx->pc != 0x450860u) { return; }
    }
    ctx->pc = 0x450860u;
label_450860:
    // 0x450860: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x450860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_450864:
    // 0x450864: 0xc04cc08  jal         func_133020
label_450868:
    if (ctx->pc == 0x450868u) {
        ctx->pc = 0x450868u;
            // 0x450868: 0x260508d0  addiu       $a1, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->pc = 0x45086Cu;
        goto label_45086c;
    }
    ctx->pc = 0x450864u;
    SET_GPR_U32(ctx, 31, 0x45086Cu);
    ctx->pc = 0x450868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450864u;
            // 0x450868: 0x260508d0  addiu       $a1, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45086Cu; }
        if (ctx->pc != 0x45086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45086Cu; }
        if (ctx->pc != 0x45086Cu) { return; }
    }
    ctx->pc = 0x45086Cu;
label_45086c:
    // 0x45086c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45086cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450870:
    // 0x450870: 0x0  nop
    ctx->pc = 0x450870u;
    // NOP
label_450874:
    // 0x450874: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x450874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450878:
    // 0x450878: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_45087c:
    if (ctx->pc == 0x45087Cu) {
        ctx->pc = 0x450880u;
        goto label_450880;
    }
    ctx->pc = 0x450878u;
    {
        const bool branch_taken_0x450878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450878) {
            ctx->pc = 0x4508A8u;
            goto label_4508a8;
        }
    }
    ctx->pc = 0x450880u;
label_450880:
    // 0x450880: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x450880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_450884:
    // 0x450884: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x450884u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_450888:
    // 0x450888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x450888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45088c:
    // 0x45088c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450890:
    // 0x450890: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x450890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_450894:
    // 0x450894: 0x8c440e50  lw          $a0, 0xE50($v0)
    ctx->pc = 0x450894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3664)));
label_450898:
    // 0x450898: 0x3c025050  lui         $v0, 0x5050
    ctx->pc = 0x450898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20560 << 16));
label_45089c:
    // 0x45089c: 0xc12a420  jal         func_4A9080
label_4508a0:
    if (ctx->pc == 0x4508A0u) {
        ctx->pc = 0x4508A0u;
            // 0x4508a0: 0x34475aff  ori         $a3, $v0, 0x5AFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23295);
        ctx->pc = 0x4508A4u;
        goto label_4508a4;
    }
    ctx->pc = 0x45089Cu;
    SET_GPR_U32(ctx, 31, 0x4508A4u);
    ctx->pc = 0x4508A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45089Cu;
            // 0x4508a0: 0x34475aff  ori         $a3, $v0, 0x5AFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23295);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9080u;
    if (runtime->hasFunction(0x4A9080u)) {
        auto targetFn = runtime->lookupFunction(0x4A9080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4508A4u; }
        if (ctx->pc != 0x4508A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9080_0x4a9080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4508A4u; }
        if (ctx->pc != 0x4508A4u) { return; }
    }
    ctx->pc = 0x4508A4u;
label_4508a4:
    // 0x4508a4: 0x0  nop
    ctx->pc = 0x4508a4u;
    // NOP
label_4508a8:
    // 0x4508a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4508a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4508ac:
    // 0x4508ac: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x4508acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4508b0:
    // 0x4508b0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4508b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4508b4:
    // 0x4508b4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_4508b8:
    if (ctx->pc == 0x4508B8u) {
        ctx->pc = 0x4508B8u;
            // 0x4508b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4508BCu;
        goto label_4508bc;
    }
    ctx->pc = 0x4508B4u;
    {
        const bool branch_taken_0x4508b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4508B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4508B4u;
            // 0x4508b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4508b4) {
            ctx->pc = 0x45080Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45080c;
        }
    }
    ctx->pc = 0x4508BCu;
label_4508bc:
    // 0x4508bc: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x4508bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4508c0:
    // 0x4508c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4508c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4508c4:
    // 0x4508c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4508c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4508c8:
    // 0x4508c8: 0x320f809  jalr        $t9
label_4508cc:
    if (ctx->pc == 0x4508CCu) {
        ctx->pc = 0x4508CCu;
            // 0x4508cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4508D0u;
        goto label_4508d0;
    }
    ctx->pc = 0x4508C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4508D0u);
        ctx->pc = 0x4508CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4508C8u;
            // 0x4508cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4508D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4508D0u; }
            if (ctx->pc != 0x4508D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4508D0u;
label_4508d0:
    // 0x4508d0: 0x100000af  b           . + 4 + (0xAF << 2)
label_4508d4:
    if (ctx->pc == 0x4508D4u) {
        ctx->pc = 0x4508D8u;
        goto label_4508d8;
    }
    ctx->pc = 0x4508D0u;
    {
        const bool branch_taken_0x4508d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4508d0) {
            ctx->pc = 0x450B90u;
            goto label_450b90;
        }
    }
    ctx->pc = 0x4508D8u;
label_4508d8:
    // 0x4508d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4508d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4508dc:
    // 0x4508dc: 0x0  nop
    ctx->pc = 0x4508dcu;
    // NOP
label_4508e0:
    // 0x4508e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4508e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4508e4:
    // 0x4508e4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_4508e8:
    if (ctx->pc == 0x4508E8u) {
        ctx->pc = 0x4508E8u;
            // 0x4508e8: 0x26c30070  addiu       $v1, $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
        ctx->pc = 0x4508ECu;
        goto label_4508ec;
    }
    ctx->pc = 0x4508E4u;
    {
        const bool branch_taken_0x4508e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4508E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4508E4u;
            // 0x4508e8: 0x26c30070  addiu       $v1, $s6, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4508e4) {
            ctx->pc = 0x450914u;
            goto label_450914;
        }
    }
    ctx->pc = 0x4508ECu;
label_4508ec:
    // 0x4508ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4508ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4508f0:
    // 0x4508f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4508f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4508f4:
    // 0x4508f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4508f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4508f8:
    // 0x4508f8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4508f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4508fc:
    // 0x4508fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4508fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_450900:
    // 0x450900: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x450900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450904:
    // 0x450904: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_450908:
    if (ctx->pc == 0x450908u) {
        ctx->pc = 0x450908u;
            // 0x450908: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x45090Cu;
        goto label_45090c;
    }
    ctx->pc = 0x450904u;
    {
        const bool branch_taken_0x450904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x450908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450904u;
            // 0x450908: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450904) {
            ctx->pc = 0x450928u;
            goto label_450928;
        }
    }
    ctx->pc = 0x45090Cu;
label_45090c:
    // 0x45090c: 0x10000006  b           . + 4 + (0x6 << 2)
label_450910:
    if (ctx->pc == 0x450910u) {
        ctx->pc = 0x450910u;
            // 0x450910: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x450914u;
        goto label_450914;
    }
    ctx->pc = 0x45090Cu;
    {
        const bool branch_taken_0x45090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x450910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45090Cu;
            // 0x450910: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45090c) {
            ctx->pc = 0x450928u;
            goto label_450928;
        }
    }
    ctx->pc = 0x450914u;
label_450914:
    // 0x450914: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x450914u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450918:
    // 0x450918: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_45091c:
    if (ctx->pc == 0x45091Cu) {
        ctx->pc = 0x45091Cu;
            // 0x45091c: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x450920u;
        goto label_450920;
    }
    ctx->pc = 0x450918u;
    {
        const bool branch_taken_0x450918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450918) {
            ctx->pc = 0x45091Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450918u;
            // 0x45091c: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45092Cu;
            goto label_45092c;
        }
    }
    ctx->pc = 0x450920u;
label_450920:
    // 0x450920: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x450920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_450924:
    // 0x450924: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x450924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_450928:
    // 0x450928: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x450928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45092c:
    // 0x45092c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45092cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450930:
    // 0x450930: 0x0  nop
    ctx->pc = 0x450930u;
    // NOP
label_450934:
    // 0x450934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x450934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450938:
    // 0x450938: 0x45010090  bc1t        . + 4 + (0x90 << 2)
label_45093c:
    if (ctx->pc == 0x45093Cu) {
        ctx->pc = 0x450940u;
        goto label_450940;
    }
    ctx->pc = 0x450938u;
    {
        const bool branch_taken_0x450938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450938) {
            ctx->pc = 0x450B7Cu;
            goto label_450b7c;
        }
    }
    ctx->pc = 0x450940u;
label_450940:
    // 0x450940: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x450940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450944:
    // 0x450944: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x450944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_450948:
    // 0x450948: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x450948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_45094c:
    // 0x45094c: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x45094cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_450950:
    // 0x450950: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x450950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_450954:
    // 0x450954: 0x26d50060  addiu       $s5, $s6, 0x60
    ctx->pc = 0x450954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_450958:
    // 0x450958: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x450958u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_45095c:
    // 0x45095c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x45095cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_450960:
    // 0x450960: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x450960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_450964:
    // 0x450964: 0x8cbe0780  lw          $fp, 0x780($a1)
    ctx->pc = 0x450964u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
label_450968:
    // 0x450968: 0x26940e84  addiu       $s4, $s4, 0xE84
    ctx->pc = 0x450968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3716));
label_45096c:
    // 0x45096c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x45096cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450970:
    // 0x450970: 0x0  nop
    ctx->pc = 0x450970u;
    // NOP
label_450974:
    // 0x450974: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x450974u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_450978:
    // 0x450978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45097c:
    // 0x45097c: 0x0  nop
    ctx->pc = 0x45097cu;
    // NOP
label_450980:
    // 0x450980: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x450980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_450984:
    // 0x450984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450988:
    // 0x450988: 0x0  nop
    ctx->pc = 0x450988u;
    // NOP
label_45098c:
    // 0x45098c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45098cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450990:
    // 0x450990: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_450994:
    if (ctx->pc == 0x450994u) {
        ctx->pc = 0x450994u;
            // 0x450994: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450998u;
        goto label_450998;
    }
    ctx->pc = 0x450990u;
    {
        const bool branch_taken_0x450990 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x450994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450990u;
            // 0x450994: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450990) {
            ctx->pc = 0x4509A8u;
            goto label_4509a8;
        }
    }
    ctx->pc = 0x450998u;
label_450998:
    // 0x450998: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45099c:
    // 0x45099c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x45099cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4509a0:
    // 0x4509a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4509a4:
    if (ctx->pc == 0x4509A4u) {
        ctx->pc = 0x4509A4u;
            // 0x4509a4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4509A8u;
        goto label_4509a8;
    }
    ctx->pc = 0x4509A0u;
    {
        const bool branch_taken_0x4509a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4509A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4509A0u;
            // 0x4509a4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4509a0) {
            ctx->pc = 0x4509C4u;
            goto label_4509c4;
        }
    }
    ctx->pc = 0x4509A8u;
label_4509a8:
    // 0x4509a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4509a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4509ac:
    // 0x4509ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4509acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4509b0:
    // 0x4509b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4509b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4509b4:
    // 0x4509b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4509b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4509b8:
    // 0x4509b8: 0x0  nop
    ctx->pc = 0x4509b8u;
    // NOP
label_4509bc:
    // 0x4509bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4509bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4509c0:
    // 0x4509c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4509c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4509c4:
    // 0x4509c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4509c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4509c8:
    // 0x4509c8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4509cc:
    if (ctx->pc == 0x4509CCu) {
        ctx->pc = 0x4509CCu;
            // 0x4509cc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4509D0u;
        goto label_4509d0;
    }
    ctx->pc = 0x4509C8u;
    {
        const bool branch_taken_0x4509c8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4509c8) {
            ctx->pc = 0x4509CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4509C8u;
            // 0x4509cc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4509DCu;
            goto label_4509dc;
        }
    }
    ctx->pc = 0x4509D0u;
label_4509d0:
    // 0x4509d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4509d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4509d4:
    // 0x4509d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4509d8:
    if (ctx->pc == 0x4509D8u) {
        ctx->pc = 0x4509D8u;
            // 0x4509d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4509DCu;
        goto label_4509dc;
    }
    ctx->pc = 0x4509D4u;
    {
        const bool branch_taken_0x4509d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4509D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4509D4u;
            // 0x4509d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4509d4) {
            ctx->pc = 0x4509F4u;
            goto label_4509f4;
        }
    }
    ctx->pc = 0x4509DCu;
label_4509dc:
    // 0x4509dc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4509dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4509e0:
    // 0x4509e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4509e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4509e4:
    // 0x4509e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4509e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4509e8:
    // 0x4509e8: 0x0  nop
    ctx->pc = 0x4509e8u;
    // NOP
label_4509ec:
    // 0x4509ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4509ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4509f0:
    // 0x4509f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4509f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4509f4:
    // 0x4509f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4509f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4509f8:
    // 0x4509f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4509f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4509fc:
    // 0x4509fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4509fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_450a00:
    // 0x450a00: 0x92c40080  lbu         $a0, 0x80($s6)
    ctx->pc = 0x450a00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 128)));
label_450a04:
    // 0x450a04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x450a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_450a08:
    // 0x450a08: 0x2442da30  addiu       $v0, $v0, -0x25D0
    ctx->pc = 0x450a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957616));
label_450a0c:
    // 0x450a0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x450a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_450a10:
    // 0x450a10: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x450a10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_450a14:
    // 0x450a14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x450a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_450a18:
    // 0x450a18: 0x2442da34  addiu       $v0, $v0, -0x25CC
    ctx->pc = 0x450a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957620));
label_450a1c:
    // 0x450a1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x450a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_450a20:
    // 0x450a20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x450a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_450a24:
    // 0x450a24: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x450a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_450a28:
    // 0x450a28: 0x8c520e58  lw          $s2, 0xE58($v0)
    ctx->pc = 0x450a28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3672)));
label_450a2c:
    // 0x450a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450a30:
    // 0x450a30: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x450a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450a34:
    // 0x450a34: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x450a34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_450a38:
    // 0x450a38: 0x38820050  xori        $v0, $a0, 0x50
    ctx->pc = 0x450a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)80);
label_450a3c:
    // 0x450a3c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x450a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_450a40:
    // 0x450a40: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x450a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_450a44:
    // 0x450a44: 0x38820051  xori        $v0, $a0, 0x51
    ctx->pc = 0x450a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)81);
label_450a48:
    // 0x450a48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x450a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_450a4c:
    // 0x450a4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x450a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_450a50:
    // 0x450a50: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x450a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_450a54:
    // 0x450a54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x450a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_450a58:
    // 0x450a58: 0xc6c00078  lwc1        $f0, 0x78($s6)
    ctx->pc = 0x450a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450a5c:
    // 0x450a5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x450a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_450a60:
    // 0x450a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x450a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_450a64:
    // 0x450a64: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x450a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_450a68:
    // 0x450a68: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x450a68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_450a6c:
    // 0x450a6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x450a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_450a70:
    // 0x450a70: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x450a70u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_450a74:
    // 0x450a74: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x450a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_450a78:
    // 0x450a78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x450a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_450a7c:
    // 0x450a7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x450a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_450a80:
    // 0x450a80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x450a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_450a84:
    // 0x450a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x450a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_450a88:
    // 0x450a88: 0x24510200  addiu       $s1, $v0, 0x200
    ctx->pc = 0x450a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_450a8c:
    // 0x450a8c: 0xc04cc34  jal         func_1330D0
label_450a90:
    if (ctx->pc == 0x450A90u) {
        ctx->pc = 0x450A90u;
            // 0x450a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450A94u;
        goto label_450a94;
    }
    ctx->pc = 0x450A8Cu;
    SET_GPR_U32(ctx, 31, 0x450A94u);
    ctx->pc = 0x450A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450A8Cu;
            // 0x450a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450A94u; }
        if (ctx->pc != 0x450A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450A94u; }
        if (ctx->pc != 0x450A94u) { return; }
    }
    ctx->pc = 0x450A94u;
label_450a94:
    // 0x450a94: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x450a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_450a98:
    // 0x450a98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x450a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_450a9c:
    // 0x450a9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x450a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450aa0:
    // 0x450aa0: 0x0  nop
    ctx->pc = 0x450aa0u;
    // NOP
label_450aa4:
    // 0x450aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x450aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450aa8:
    // 0x450aa8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_450aac:
    if (ctx->pc == 0x450AACu) {
        ctx->pc = 0x450AB0u;
        goto label_450ab0;
    }
    ctx->pc = 0x450AA8u;
    {
        const bool branch_taken_0x450aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450aa8) {
            ctx->pc = 0x450AC0u;
            goto label_450ac0;
        }
    }
    ctx->pc = 0x450AB0u;
label_450ab0:
    // 0x450ab0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x450ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_450ab4:
    // 0x450ab4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_450ab8:
    if (ctx->pc == 0x450AB8u) {
        ctx->pc = 0x450ABCu;
        goto label_450abc;
    }
    ctx->pc = 0x450AB4u;
    {
        const bool branch_taken_0x450ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x450ab4) {
            ctx->pc = 0x450B60u;
            goto label_450b60;
        }
    }
    ctx->pc = 0x450ABCu;
label_450abc:
    // 0x450abc: 0x0  nop
    ctx->pc = 0x450abcu;
    // NOP
label_450ac0:
    // 0x450ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x450ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_450ac4:
    // 0x450ac4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x450ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_450ac8:
    // 0x450ac8: 0xc04cc90  jal         func_133240
label_450acc:
    if (ctx->pc == 0x450ACCu) {
        ctx->pc = 0x450ACCu;
            // 0x450acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450AD0u;
        goto label_450ad0;
    }
    ctx->pc = 0x450AC8u;
    SET_GPR_U32(ctx, 31, 0x450AD0u);
    ctx->pc = 0x450ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450AC8u;
            // 0x450acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450AD0u; }
        if (ctx->pc != 0x450AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450AD0u; }
        if (ctx->pc != 0x450AD0u) { return; }
    }
    ctx->pc = 0x450AD0u;
label_450ad0:
    // 0x450ad0: 0x26e508d0  addiu       $a1, $s7, 0x8D0
    ctx->pc = 0x450ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2256));
label_450ad4:
    // 0x450ad4: 0xc04cc08  jal         func_133020
label_450ad8:
    if (ctx->pc == 0x450AD8u) {
        ctx->pc = 0x450AD8u;
            // 0x450ad8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x450ADCu;
        goto label_450adc;
    }
    ctx->pc = 0x450AD4u;
    SET_GPR_U32(ctx, 31, 0x450ADCu);
    ctx->pc = 0x450AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450AD4u;
            // 0x450ad8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450ADCu; }
        if (ctx->pc != 0x450ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450ADCu; }
        if (ctx->pc != 0x450ADCu) { return; }
    }
    ctx->pc = 0x450ADCu;
label_450adc:
    // 0x450adc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x450adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450ae0:
    // 0x450ae0: 0x0  nop
    ctx->pc = 0x450ae0u;
    // NOP
label_450ae4:
    // 0x450ae4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x450ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450ae8:
    // 0x450ae8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_450aec:
    if (ctx->pc == 0x450AECu) {
        ctx->pc = 0x450AF0u;
        goto label_450af0;
    }
    ctx->pc = 0x450AE8u;
    {
        const bool branch_taken_0x450ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450ae8) {
            ctx->pc = 0x450B60u;
            goto label_450b60;
        }
    }
    ctx->pc = 0x450AF0u;
label_450af0:
    // 0x450af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x450af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_450af4:
    // 0x450af4: 0xc04cc1c  jal         func_133070
label_450af8:
    if (ctx->pc == 0x450AF8u) {
        ctx->pc = 0x450AF8u;
            // 0x450af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450AFCu;
        goto label_450afc;
    }
    ctx->pc = 0x450AF4u;
    SET_GPR_U32(ctx, 31, 0x450AFCu);
    ctx->pc = 0x450AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450AF4u;
            // 0x450af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450AFCu; }
        if (ctx->pc != 0x450AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450AFCu; }
        if (ctx->pc != 0x450AFCu) { return; }
    }
    ctx->pc = 0x450AFCu;
label_450afc:
    // 0x450afc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x450afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_450b00:
    // 0x450b00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x450b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_450b04:
    // 0x450b04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x450b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450b08:
    // 0x450b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x450b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_450b0c:
    // 0x450b0c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x450b0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[1];
label_450b10:
    // 0x450b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x450b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_450b14:
    // 0x450b14: 0xc6c2007c  lwc1        $f2, 0x7C($s6)
    ctx->pc = 0x450b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_450b18:
    // 0x450b18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x450b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450b1c:
    // 0x450b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450b20:
    // 0x450b20: 0x0  nop
    ctx->pc = 0x450b20u;
    // NOP
label_450b24:
    // 0x450b24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x450b24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_450b28:
    // 0x450b28: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x450b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_450b2c:
    // 0x450b2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x450b2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_450b30:
    // 0x450b30: 0x0  nop
    ctx->pc = 0x450b30u;
    // NOP
label_450b34:
    // 0x450b34: 0x0  nop
    ctx->pc = 0x450b34u;
    // NOP
label_450b38:
    // 0x450b38: 0xc112c84  jal         func_44B210
label_450b3c:
    if (ctx->pc == 0x450B3Cu) {
        ctx->pc = 0x450B3Cu;
            // 0x450b3c: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x450B40u;
        goto label_450b40;
    }
    ctx->pc = 0x450B38u;
    SET_GPR_U32(ctx, 31, 0x450B40u);
    ctx->pc = 0x450B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450B38u;
            // 0x450b3c: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B210u;
    if (runtime->hasFunction(0x44B210u)) {
        auto targetFn = runtime->lookupFunction(0x44B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B40u; }
        if (ctx->pc != 0x450B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B210_0x44b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B40u; }
        if (ctx->pc != 0x450B40u) { return; }
    }
    ctx->pc = 0x450B40u;
label_450b40:
    // 0x450b40: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x450b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450b44:
    // 0x450b44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_450b48:
    if (ctx->pc == 0x450B48u) {
        ctx->pc = 0x450B4Cu;
        goto label_450b4c;
    }
    ctx->pc = 0x450B44u;
    {
        const bool branch_taken_0x450b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450b44) {
            ctx->pc = 0x450B60u;
            goto label_450b60;
        }
    }
    ctx->pc = 0x450B4Cu;
label_450b4c:
    // 0x450b4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x450b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_450b50:
    // 0x450b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x450b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_450b54:
    // 0x450b54: 0xc112c8c  jal         func_44B230
label_450b58:
    if (ctx->pc == 0x450B58u) {
        ctx->pc = 0x450B58u;
            // 0x450b58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450B5Cu;
        goto label_450b5c;
    }
    ctx->pc = 0x450B54u;
    SET_GPR_U32(ctx, 31, 0x450B5Cu);
    ctx->pc = 0x450B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450B54u;
            // 0x450b58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B230u;
    if (runtime->hasFunction(0x44B230u)) {
        auto targetFn = runtime->lookupFunction(0x44B230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B5Cu; }
        if (ctx->pc != 0x450B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044B230_0x44b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B5Cu; }
        if (ctx->pc != 0x450B5Cu) { return; }
    }
    ctx->pc = 0x450B5Cu;
label_450b5c:
    // 0x450b5c: 0x0  nop
    ctx->pc = 0x450b5cu;
    // NOP
label_450b60:
    // 0x450b60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x450b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_450b64:
    // 0x450b64: 0x27e182b  sltu        $v1, $s3, $fp
    ctx->pc = 0x450b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_450b68:
    // 0x450b68: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x450b68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_450b6c:
    // 0x450b6c: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
label_450b70:
    if (ctx->pc == 0x450B70u) {
        ctx->pc = 0x450B70u;
            // 0x450b70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x450B74u;
        goto label_450b74;
    }
    ctx->pc = 0x450B6Cu;
    {
        const bool branch_taken_0x450b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x450B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450B6Cu;
            // 0x450b70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450b6c) {
            ctx->pc = 0x450A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_450a6c;
        }
    }
    ctx->pc = 0x450B74u;
label_450b74:
    // 0x450b74: 0x10000006  b           . + 4 + (0x6 << 2)
label_450b78:
    if (ctx->pc == 0x450B78u) {
        ctx->pc = 0x450B7Cu;
        goto label_450b7c;
    }
    ctx->pc = 0x450B74u;
    {
        const bool branch_taken_0x450b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450b74) {
            ctx->pc = 0x450B90u;
            goto label_450b90;
        }
    }
    ctx->pc = 0x450B7Cu;
label_450b7c:
    // 0x450b7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x450b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_450b80:
    // 0x450b80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x450b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_450b84:
    // 0x450b84: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x450b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_450b88:
    // 0x450b88: 0xc057b7c  jal         func_15EDF0
label_450b8c:
    if (ctx->pc == 0x450B8Cu) {
        ctx->pc = 0x450B8Cu;
            // 0x450b8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x450B90u;
        goto label_450b90;
    }
    ctx->pc = 0x450B88u;
    SET_GPR_U32(ctx, 31, 0x450B90u);
    ctx->pc = 0x450B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450B88u;
            // 0x450b8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B90u; }
        if (ctx->pc != 0x450B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450B90u; }
        if (ctx->pc != 0x450B90u) { return; }
    }
    ctx->pc = 0x450B90u;
label_450b90:
    // 0x450b90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x450b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_450b94:
    // 0x450b94: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x450b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_450b98:
    // 0x450b98: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x450b98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_450b9c:
    // 0x450b9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x450b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_450ba0:
    // 0x450ba0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x450ba0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_450ba4:
    // 0x450ba4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x450ba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_450ba8:
    // 0x450ba8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x450ba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_450bac:
    // 0x450bac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x450bacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_450bb0:
    // 0x450bb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x450bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_450bb4:
    // 0x450bb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x450bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_450bb8:
    // 0x450bb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x450bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_450bbc:
    // 0x450bbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x450bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_450bc0:
    // 0x450bc0: 0x3e00008  jr          $ra
label_450bc4:
    if (ctx->pc == 0x450BC4u) {
        ctx->pc = 0x450BC4u;
            // 0x450bc4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x450BC8u;
        goto label_450bc8;
    }
    ctx->pc = 0x450BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450BC0u;
            // 0x450bc4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450BC8u;
label_450bc8:
    // 0x450bc8: 0x0  nop
    ctx->pc = 0x450bc8u;
    // NOP
label_450bcc:
    // 0x450bcc: 0x0  nop
    ctx->pc = 0x450bccu;
    // NOP
label_450bd0:
    // 0x450bd0: 0x3e00008  jr          $ra
label_450bd4:
    if (ctx->pc == 0x450BD4u) {
        ctx->pc = 0x450BD4u;
            // 0x450bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450BD8u;
        goto label_450bd8;
    }
    ctx->pc = 0x450BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450BD0u;
            // 0x450bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450BD8u;
label_450bd8:
    // 0x450bd8: 0x0  nop
    ctx->pc = 0x450bd8u;
    // NOP
label_450bdc:
    // 0x450bdc: 0x0  nop
    ctx->pc = 0x450bdcu;
    // NOP
label_450be0:
    // 0x450be0: 0x3e00008  jr          $ra
label_450be4:
    if (ctx->pc == 0x450BE4u) {
        ctx->pc = 0x450BE4u;
            // 0x450be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450BE8u;
        goto label_450be8;
    }
    ctx->pc = 0x450BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450BE0u;
            // 0x450be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450BE8u;
label_450be8:
    // 0x450be8: 0x0  nop
    ctx->pc = 0x450be8u;
    // NOP
label_450bec:
    // 0x450bec: 0x0  nop
    ctx->pc = 0x450becu;
    // NOP
label_450bf0:
    // 0x450bf0: 0x3e00008  jr          $ra
label_450bf4:
    if (ctx->pc == 0x450BF4u) {
        ctx->pc = 0x450BF4u;
            // 0x450bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450BF8u;
        goto label_450bf8;
    }
    ctx->pc = 0x450BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450BF0u;
            // 0x450bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450BF8u;
label_450bf8:
    // 0x450bf8: 0x0  nop
    ctx->pc = 0x450bf8u;
    // NOP
label_450bfc:
    // 0x450bfc: 0x0  nop
    ctx->pc = 0x450bfcu;
    // NOP
label_450c00:
    // 0x450c00: 0x3e00008  jr          $ra
label_450c04:
    if (ctx->pc == 0x450C04u) {
        ctx->pc = 0x450C04u;
            // 0x450c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C08u;
        goto label_450c08;
    }
    ctx->pc = 0x450C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C00u;
            // 0x450c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C08u;
label_450c08:
    // 0x450c08: 0x0  nop
    ctx->pc = 0x450c08u;
    // NOP
label_450c0c:
    // 0x450c0c: 0x0  nop
    ctx->pc = 0x450c0cu;
    // NOP
label_450c10:
    // 0x450c10: 0x3e00008  jr          $ra
label_450c14:
    if (ctx->pc == 0x450C14u) {
        ctx->pc = 0x450C14u;
            // 0x450c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C18u;
        goto label_450c18;
    }
    ctx->pc = 0x450C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C10u;
            // 0x450c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C18u;
label_450c18:
    // 0x450c18: 0x0  nop
    ctx->pc = 0x450c18u;
    // NOP
label_450c1c:
    // 0x450c1c: 0x0  nop
    ctx->pc = 0x450c1cu;
    // NOP
label_450c20:
    // 0x450c20: 0x3e00008  jr          $ra
label_450c24:
    if (ctx->pc == 0x450C24u) {
        ctx->pc = 0x450C24u;
            // 0x450c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C28u;
        goto label_450c28;
    }
    ctx->pc = 0x450C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C20u;
            // 0x450c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C28u;
label_450c28:
    // 0x450c28: 0x0  nop
    ctx->pc = 0x450c28u;
    // NOP
label_450c2c:
    // 0x450c2c: 0x0  nop
    ctx->pc = 0x450c2cu;
    // NOP
label_450c30:
    // 0x450c30: 0x3e00008  jr          $ra
label_450c34:
    if (ctx->pc == 0x450C34u) {
        ctx->pc = 0x450C34u;
            // 0x450c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C38u;
        goto label_450c38;
    }
    ctx->pc = 0x450C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C30u;
            // 0x450c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C38u;
label_450c38:
    // 0x450c38: 0x0  nop
    ctx->pc = 0x450c38u;
    // NOP
label_450c3c:
    // 0x450c3c: 0x0  nop
    ctx->pc = 0x450c3cu;
    // NOP
label_450c40:
    // 0x450c40: 0x3e00008  jr          $ra
label_450c44:
    if (ctx->pc == 0x450C44u) {
        ctx->pc = 0x450C44u;
            // 0x450c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C48u;
        goto label_450c48;
    }
    ctx->pc = 0x450C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C40u;
            // 0x450c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C48u;
label_450c48:
    // 0x450c48: 0x0  nop
    ctx->pc = 0x450c48u;
    // NOP
label_450c4c:
    // 0x450c4c: 0x0  nop
    ctx->pc = 0x450c4cu;
    // NOP
label_450c50:
    // 0x450c50: 0x3e00008  jr          $ra
label_450c54:
    if (ctx->pc == 0x450C54u) {
        ctx->pc = 0x450C54u;
            // 0x450c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C58u;
        goto label_450c58;
    }
    ctx->pc = 0x450C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C50u;
            // 0x450c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C58u;
label_450c58:
    // 0x450c58: 0x0  nop
    ctx->pc = 0x450c58u;
    // NOP
label_450c5c:
    // 0x450c5c: 0x0  nop
    ctx->pc = 0x450c5cu;
    // NOP
label_450c60:
    // 0x450c60: 0x3e00008  jr          $ra
label_450c64:
    if (ctx->pc == 0x450C64u) {
        ctx->pc = 0x450C64u;
            // 0x450c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C68u;
        goto label_450c68;
    }
    ctx->pc = 0x450C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C60u;
            // 0x450c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C68u;
label_450c68:
    // 0x450c68: 0x0  nop
    ctx->pc = 0x450c68u;
    // NOP
label_450c6c:
    // 0x450c6c: 0x0  nop
    ctx->pc = 0x450c6cu;
    // NOP
label_450c70:
    // 0x450c70: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x450c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_450c74:
    // 0x450c74: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x450c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_450c78:
    // 0x450c78: 0x3200008  jr          $t9
label_450c7c:
    if (ctx->pc == 0x450C7Cu) {
        ctx->pc = 0x450C80u;
        goto label_450c80;
    }
    ctx->pc = 0x450C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C80u;
label_450c80:
    // 0x450c80: 0x3e00008  jr          $ra
label_450c84:
    if (ctx->pc == 0x450C84u) {
        ctx->pc = 0x450C84u;
            // 0x450c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C88u;
        goto label_450c88;
    }
    ctx->pc = 0x450C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C80u;
            // 0x450c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C88u;
label_450c88:
    // 0x450c88: 0x0  nop
    ctx->pc = 0x450c88u;
    // NOP
label_450c8c:
    // 0x450c8c: 0x0  nop
    ctx->pc = 0x450c8cu;
    // NOP
label_450c90:
    // 0x450c90: 0x3e00008  jr          $ra
label_450c94:
    if (ctx->pc == 0x450C94u) {
        ctx->pc = 0x450C94u;
            // 0x450c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450C98u;
        goto label_450c98;
    }
    ctx->pc = 0x450C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450C90u;
            // 0x450c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450C98u;
label_450c98:
    // 0x450c98: 0x0  nop
    ctx->pc = 0x450c98u;
    // NOP
label_450c9c:
    // 0x450c9c: 0x0  nop
    ctx->pc = 0x450c9cu;
    // NOP
label_450ca0:
    // 0x450ca0: 0x3e00008  jr          $ra
label_450ca4:
    if (ctx->pc == 0x450CA4u) {
        ctx->pc = 0x450CA4u;
            // 0x450ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CA8u;
        goto label_450ca8;
    }
    ctx->pc = 0x450CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CA0u;
            // 0x450ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CA8u;
label_450ca8:
    // 0x450ca8: 0x0  nop
    ctx->pc = 0x450ca8u;
    // NOP
label_450cac:
    // 0x450cac: 0x0  nop
    ctx->pc = 0x450cacu;
    // NOP
label_450cb0:
    // 0x450cb0: 0x3e00008  jr          $ra
label_450cb4:
    if (ctx->pc == 0x450CB4u) {
        ctx->pc = 0x450CB4u;
            // 0x450cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CB8u;
        goto label_450cb8;
    }
    ctx->pc = 0x450CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CB0u;
            // 0x450cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CB8u;
label_450cb8:
    // 0x450cb8: 0x0  nop
    ctx->pc = 0x450cb8u;
    // NOP
label_450cbc:
    // 0x450cbc: 0x0  nop
    ctx->pc = 0x450cbcu;
    // NOP
label_450cc0:
    // 0x450cc0: 0x3e00008  jr          $ra
label_450cc4:
    if (ctx->pc == 0x450CC4u) {
        ctx->pc = 0x450CC4u;
            // 0x450cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CC8u;
        goto label_450cc8;
    }
    ctx->pc = 0x450CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CC0u;
            // 0x450cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CC8u;
label_450cc8:
    // 0x450cc8: 0x0  nop
    ctx->pc = 0x450cc8u;
    // NOP
label_450ccc:
    // 0x450ccc: 0x0  nop
    ctx->pc = 0x450cccu;
    // NOP
label_450cd0:
    // 0x450cd0: 0x3e00008  jr          $ra
label_450cd4:
    if (ctx->pc == 0x450CD4u) {
        ctx->pc = 0x450CD4u;
            // 0x450cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CD8u;
        goto label_450cd8;
    }
    ctx->pc = 0x450CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CD0u;
            // 0x450cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CD8u;
label_450cd8:
    // 0x450cd8: 0x0  nop
    ctx->pc = 0x450cd8u;
    // NOP
label_450cdc:
    // 0x450cdc: 0x0  nop
    ctx->pc = 0x450cdcu;
    // NOP
label_450ce0:
    // 0x450ce0: 0x3e00008  jr          $ra
label_450ce4:
    if (ctx->pc == 0x450CE4u) {
        ctx->pc = 0x450CE4u;
            // 0x450ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CE8u;
        goto label_450ce8;
    }
    ctx->pc = 0x450CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CE0u;
            // 0x450ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CE8u;
label_450ce8:
    // 0x450ce8: 0x0  nop
    ctx->pc = 0x450ce8u;
    // NOP
label_450cec:
    // 0x450cec: 0x0  nop
    ctx->pc = 0x450cecu;
    // NOP
label_450cf0:
    // 0x450cf0: 0x3e00008  jr          $ra
label_450cf4:
    if (ctx->pc == 0x450CF4u) {
        ctx->pc = 0x450CF4u;
            // 0x450cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450CF8u;
        goto label_450cf8;
    }
    ctx->pc = 0x450CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450CF0u;
            // 0x450cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450CF8u;
label_450cf8:
    // 0x450cf8: 0x0  nop
    ctx->pc = 0x450cf8u;
    // NOP
label_450cfc:
    // 0x450cfc: 0x0  nop
    ctx->pc = 0x450cfcu;
    // NOP
label_450d00:
    // 0x450d00: 0x3e00008  jr          $ra
label_450d04:
    if (ctx->pc == 0x450D04u) {
        ctx->pc = 0x450D04u;
            // 0x450d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450D08u;
        goto label_450d08;
    }
    ctx->pc = 0x450D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D00u;
            // 0x450d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450D08u;
label_450d08:
    // 0x450d08: 0x0  nop
    ctx->pc = 0x450d08u;
    // NOP
label_450d0c:
    // 0x450d0c: 0x0  nop
    ctx->pc = 0x450d0cu;
    // NOP
label_450d10:
    // 0x450d10: 0x3e00008  jr          $ra
label_450d14:
    if (ctx->pc == 0x450D14u) {
        ctx->pc = 0x450D14u;
            // 0x450d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450D18u;
        goto label_450d18;
    }
    ctx->pc = 0x450D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D10u;
            // 0x450d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450D18u;
label_450d18:
    // 0x450d18: 0x0  nop
    ctx->pc = 0x450d18u;
    // NOP
label_450d1c:
    // 0x450d1c: 0x0  nop
    ctx->pc = 0x450d1cu;
    // NOP
label_450d20:
    // 0x450d20: 0x3e00008  jr          $ra
label_450d24:
    if (ctx->pc == 0x450D24u) {
        ctx->pc = 0x450D24u;
            // 0x450d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450D28u;
        goto label_450d28;
    }
    ctx->pc = 0x450D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D20u;
            // 0x450d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450D28u;
label_450d28:
    // 0x450d28: 0x0  nop
    ctx->pc = 0x450d28u;
    // NOP
label_450d2c:
    // 0x450d2c: 0x0  nop
    ctx->pc = 0x450d2cu;
    // NOP
label_450d30:
    // 0x450d30: 0x3e00008  jr          $ra
label_450d34:
    if (ctx->pc == 0x450D34u) {
        ctx->pc = 0x450D34u;
            // 0x450d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450D38u;
        goto label_450d38;
    }
    ctx->pc = 0x450D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D30u;
            // 0x450d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450D38u;
label_450d38:
    // 0x450d38: 0x0  nop
    ctx->pc = 0x450d38u;
    // NOP
label_450d3c:
    // 0x450d3c: 0x0  nop
    ctx->pc = 0x450d3cu;
    // NOP
label_450d40:
    // 0x450d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x450d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_450d44:
    // 0x450d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_450d48:
    // 0x450d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_450d4c:
    // 0x450d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x450d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_450d50:
    // 0x450d50: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_450d54:
    if (ctx->pc == 0x450D54u) {
        ctx->pc = 0x450D54u;
            // 0x450d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450D58u;
        goto label_450d58;
    }
    ctx->pc = 0x450D50u;
    {
        const bool branch_taken_0x450d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x450d50) {
            ctx->pc = 0x450D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450D50u;
            // 0x450d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450DD0u;
            goto label_450dd0;
        }
    }
    ctx->pc = 0x450D58u;
label_450d58:
    // 0x450d58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x450d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_450d5c:
    // 0x450d5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x450d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_450d60:
    // 0x450d60: 0x2463dd80  addiu       $v1, $v1, -0x2280
    ctx->pc = 0x450d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958464));
label_450d64:
    // 0x450d64: 0x2442dda8  addiu       $v0, $v0, -0x2258
    ctx->pc = 0x450d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958504));
label_450d68:
    // 0x450d68: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x450d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_450d6c:
    // 0x450d6c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_450d70:
    if (ctx->pc == 0x450D70u) {
        ctx->pc = 0x450D70u;
            // 0x450d70: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x450D74u;
        goto label_450d74;
    }
    ctx->pc = 0x450D6Cu;
    {
        const bool branch_taken_0x450d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x450D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D6Cu;
            // 0x450d70: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450d6c) {
            ctx->pc = 0x450DB4u;
            goto label_450db4;
        }
    }
    ctx->pc = 0x450D74u;
label_450d74:
    // 0x450d74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x450d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_450d78:
    // 0x450d78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x450d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_450d7c:
    // 0x450d7c: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x450d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
label_450d80:
    // 0x450d80: 0x246344d8  addiu       $v1, $v1, 0x44D8
    ctx->pc = 0x450d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17624));
label_450d84:
    // 0x450d84: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x450d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_450d88:
    // 0x450d88: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x450d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_450d8c:
    // 0x450d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_450d90:
    if (ctx->pc == 0x450D90u) {
        ctx->pc = 0x450D90u;
            // 0x450d90: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x450D94u;
        goto label_450d94;
    }
    ctx->pc = 0x450D8Cu;
    {
        const bool branch_taken_0x450d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x450D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450D8Cu;
            // 0x450d90: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450d8c) {
            ctx->pc = 0x450DA0u;
            goto label_450da0;
        }
    }
    ctx->pc = 0x450D94u;
label_450d94:
    // 0x450d94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x450d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_450d98:
    // 0x450d98: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x450d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
label_450d9c:
    // 0x450d9c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x450d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_450da0:
    // 0x450da0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_450da4:
    if (ctx->pc == 0x450DA4u) {
        ctx->pc = 0x450DA4u;
            // 0x450da4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x450DA8u;
        goto label_450da8;
    }
    ctx->pc = 0x450DA0u;
    {
        const bool branch_taken_0x450da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x450da0) {
            ctx->pc = 0x450DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450DA0u;
            // 0x450da4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450DB8u;
            goto label_450db8;
        }
    }
    ctx->pc = 0x450DA8u;
label_450da8:
    // 0x450da8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x450da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_450dac:
    // 0x450dac: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x450dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_450db0:
    // 0x450db0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x450db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_450db4:
    // 0x450db4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x450db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_450db8:
    // 0x450db8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x450db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_450dbc:
    // 0x450dbc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_450dc0:
    if (ctx->pc == 0x450DC0u) {
        ctx->pc = 0x450DC4u;
        goto label_450dc4;
    }
    ctx->pc = 0x450DBCu;
    {
        const bool branch_taken_0x450dbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x450dbc) {
            ctx->pc = 0x450DCCu;
            goto label_450dcc;
        }
    }
    ctx->pc = 0x450DC4u;
label_450dc4:
    // 0x450dc4: 0xc0400a8  jal         func_1002A0
label_450dc8:
    if (ctx->pc == 0x450DC8u) {
        ctx->pc = 0x450DC8u;
            // 0x450dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450DCCu;
        goto label_450dcc;
    }
    ctx->pc = 0x450DC4u;
    SET_GPR_U32(ctx, 31, 0x450DCCu);
    ctx->pc = 0x450DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450DC4u;
            // 0x450dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450DCCu; }
        if (ctx->pc != 0x450DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450DCCu; }
        if (ctx->pc != 0x450DCCu) { return; }
    }
    ctx->pc = 0x450DCCu;
label_450dcc:
    // 0x450dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x450dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_450dd0:
    // 0x450dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x450dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_450dd4:
    // 0x450dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_450dd8:
    // 0x450dd8: 0x3e00008  jr          $ra
label_450ddc:
    if (ctx->pc == 0x450DDCu) {
        ctx->pc = 0x450DDCu;
            // 0x450ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x450DE0u;
        goto label_450de0;
    }
    ctx->pc = 0x450DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450DD8u;
            // 0x450ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450DE0u;
label_450de0:
    // 0x450de0: 0x3e00008  jr          $ra
label_450de4:
    if (ctx->pc == 0x450DE4u) {
        ctx->pc = 0x450DE4u;
            // 0x450de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450DE8u;
        goto label_450de8;
    }
    ctx->pc = 0x450DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450DE0u;
            // 0x450de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x450DE8u;
label_450de8:
    // 0x450de8: 0x0  nop
    ctx->pc = 0x450de8u;
    // NOP
label_450dec:
    // 0x450dec: 0x0  nop
    ctx->pc = 0x450decu;
    // NOP
label_450df0:
    // 0x450df0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x450df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_450df4:
    // 0x450df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x450df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_450df8:
    // 0x450df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x450df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_450dfc:
    // 0x450dfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x450dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_450e00:
    // 0x450e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x450e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_450e04:
    // 0x450e04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x450e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_450e08:
    // 0x450e08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x450e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_450e0c:
    // 0x450e0c: 0x94830096  lhu         $v1, 0x96($a0)
    ctx->pc = 0x450e0cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
label_450e10:
    // 0x450e10: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x450e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_450e14:
    // 0x450e14: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_450e18:
    if (ctx->pc == 0x450E18u) {
        ctx->pc = 0x450E18u;
            // 0x450e18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450E1Cu;
        goto label_450e1c;
    }
    ctx->pc = 0x450E14u;
    {
        const bool branch_taken_0x450e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x450E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450E14u;
            // 0x450e18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450e14) {
            ctx->pc = 0x450E2Cu;
            goto label_450e2c;
        }
    }
    ctx->pc = 0x450E1Cu;
label_450e1c:
    // 0x450e1c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_450e20:
    if (ctx->pc == 0x450E20u) {
        ctx->pc = 0x450E20u;
            // 0x450e20: 0xa6220096  sh          $v0, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x450E24u;
        goto label_450e24;
    }
    ctx->pc = 0x450E1Cu;
    {
        const bool branch_taken_0x450e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x450e1c) {
            ctx->pc = 0x450E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450E1Cu;
            // 0x450e20: 0xa6220096  sh          $v0, 0x96($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450E2Cu;
            goto label_450e2c;
        }
    }
    ctx->pc = 0x450E24u;
label_450e24:
    // 0x450e24: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_450e28:
    if (ctx->pc == 0x450E28u) {
        ctx->pc = 0x450E28u;
            // 0x450e28: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x450E2Cu;
        goto label_450e2c;
    }
    ctx->pc = 0x450E24u;
    {
        const bool branch_taken_0x450e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x450E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450E24u;
            // 0x450e28: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450e24) {
            ctx->pc = 0x4514C4u;
            goto label_4514c4;
        }
    }
    ctx->pc = 0x450E2Cu;
label_450e2c:
    // 0x450e2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x450e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_450e30:
    // 0x450e30: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x450e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_450e34:
    // 0x450e34: 0xc6210190  lwc1        $f1, 0x190($s1)
    ctx->pc = 0x450e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_450e38:
    // 0x450e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450e3c:
    // 0x450e3c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x450e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_450e40:
    // 0x450e40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x450e40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_450e44:
    // 0x450e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x450e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450e48:
    // 0x450e48: 0x4501019d  bc1t        . + 4 + (0x19D << 2)
label_450e4c:
    if (ctx->pc == 0x450E4Cu) {
        ctx->pc = 0x450E4Cu;
            // 0x450e4c: 0xe6210190  swc1        $f1, 0x190($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
        ctx->pc = 0x450E50u;
        goto label_450e50;
    }
    ctx->pc = 0x450E48u;
    {
        const bool branch_taken_0x450e48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x450E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450E48u;
            // 0x450e4c: 0xe6210190  swc1        $f1, 0x190($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450e48) {
            ctx->pc = 0x4514C0u;
            goto label_4514c0;
        }
    }
    ctx->pc = 0x450E50u;
label_450e50:
    // 0x450e50: 0x8ca20a68  lw          $v0, 0xA68($a1)
    ctx->pc = 0x450e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2664)));
label_450e54:
    // 0x450e54: 0x24a30a50  addiu       $v1, $a1, 0xA50
    ctx->pc = 0x450e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
label_450e58:
    // 0x450e58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x450e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_450e5c:
    // 0x450e5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x450e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450e60:
    // 0x450e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x450e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_450e64:
    // 0x450e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x450e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_450e68:
    // 0x450e68: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x450e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_450e6c:
    // 0x450e6c: 0xc04f278  jal         func_13C9E0
label_450e70:
    if (ctx->pc == 0x450E70u) {
        ctx->pc = 0x450E70u;
            // 0x450e70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x450E74u;
        goto label_450e74;
    }
    ctx->pc = 0x450E6Cu;
    SET_GPR_U32(ctx, 31, 0x450E74u);
    ctx->pc = 0x450E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450E6Cu;
            // 0x450e70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450E74u; }
        if (ctx->pc != 0x450E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450E74u; }
        if (ctx->pc != 0x450E74u) { return; }
    }
    ctx->pc = 0x450E74u;
label_450e74:
    // 0x450e74: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x450e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_450e78:
    // 0x450e78: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x450e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_450e7c:
    // 0x450e7c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x450e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_450e80:
    // 0x450e80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x450e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_450e84:
    // 0x450e84: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x450e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450e88:
    // 0x450e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x450e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450e8c:
    // 0x450e8c: 0x0  nop
    ctx->pc = 0x450e8cu;
    // NOP
label_450e90:
    // 0x450e90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x450e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_450e94:
    // 0x450e94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_450e98:
    // 0x450e98: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x450e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_450e9c:
    // 0x450e9c: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x450e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_450ea0:
    // 0x450ea0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x450ea0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_450ea4:
    // 0x450ea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x450ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_450ea8:
    // 0x450ea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_450eac:
    // 0x450eac: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x450eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_450eb0:
    // 0x450eb0: 0xc04ce30  jal         func_1338C0
label_450eb4:
    if (ctx->pc == 0x450EB4u) {
        ctx->pc = 0x450EB4u;
            // 0x450eb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x450EB8u;
        goto label_450eb8;
    }
    ctx->pc = 0x450EB0u;
    SET_GPR_U32(ctx, 31, 0x450EB8u);
    ctx->pc = 0x450EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450EB0u;
            // 0x450eb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450EB8u; }
        if (ctx->pc != 0x450EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450EB8u; }
        if (ctx->pc != 0x450EB8u) { return; }
    }
    ctx->pc = 0x450EB8u;
label_450eb8:
    // 0x450eb8: 0x8e26018c  lw          $a2, 0x18C($s1)
    ctx->pc = 0x450eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
label_450ebc:
    // 0x450ebc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x450ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_450ec0:
    // 0x450ec0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x450ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_450ec4:
    // 0x450ec4: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x450ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_450ec8:
    // 0x450ec8: 0xc13d9dc  jal         func_4F6770
label_450ecc:
    if (ctx->pc == 0x450ECCu) {
        ctx->pc = 0x450ECCu;
            // 0x450ecc: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x450ED0u;
        goto label_450ed0;
    }
    ctx->pc = 0x450EC8u;
    SET_GPR_U32(ctx, 31, 0x450ED0u);
    ctx->pc = 0x450ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x450EC8u;
            // 0x450ecc: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6770u;
    if (runtime->hasFunction(0x4F6770u)) {
        auto targetFn = runtime->lookupFunction(0x4F6770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450ED0u; }
        if (ctx->pc != 0x450ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6770_0x4f6770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x450ED0u; }
        if (ctx->pc != 0x450ED0u) { return; }
    }
    ctx->pc = 0x450ED0u;
label_450ed0:
    // 0x450ed0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x450ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_450ed4:
    // 0x450ed4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x450ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_450ed8:
    // 0x450ed8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x450ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_450edc:
    // 0x450edc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x450edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_450ee0:
    // 0x450ee0: 0x0  nop
    ctx->pc = 0x450ee0u;
    // NOP
label_450ee4:
    // 0x450ee4: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x450ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450ee8:
    // 0x450ee8: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_450eec:
    if (ctx->pc == 0x450EECu) {
        ctx->pc = 0x450EECu;
            // 0x450eec: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x450EF0u;
        goto label_450ef0;
    }
    ctx->pc = 0x450EE8u;
    {
        const bool branch_taken_0x450ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450ee8) {
            ctx->pc = 0x450EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450EE8u;
            // 0x450eec: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450FA0u;
            goto label_450fa0;
        }
    }
    ctx->pc = 0x450EF0u;
label_450ef0:
    // 0x450ef0: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x450ef0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_450ef4:
    // 0x450ef4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x450ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_450ef8:
    // 0x450ef8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x450ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_450efc:
    // 0x450efc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x450efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_450f00:
    // 0x450f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f04:
    // 0x450f04: 0x0  nop
    ctx->pc = 0x450f04u;
    // NOP
label_450f08:
    // 0x450f08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x450f08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_450f0c:
    // 0x450f0c: 0x0  nop
    ctx->pc = 0x450f0cu;
    // NOP
label_450f10:
    // 0x450f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f14:
    // 0x450f14: 0x0  nop
    ctx->pc = 0x450f14u;
    // NOP
label_450f18:
    // 0x450f18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x450f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450f1c:
    // 0x450f1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_450f20:
    if (ctx->pc == 0x450F20u) {
        ctx->pc = 0x450F20u;
            // 0x450f20: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x450F24u;
        goto label_450f24;
    }
    ctx->pc = 0x450F1Cu;
    {
        const bool branch_taken_0x450f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450f1c) {
            ctx->pc = 0x450F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450F1Cu;
            // 0x450f20: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x450F34u;
            goto label_450f34;
        }
    }
    ctx->pc = 0x450F24u;
label_450f24:
    // 0x450f24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450f24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_450f28:
    // 0x450f28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x450f28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_450f2c:
    // 0x450f2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_450f30:
    if (ctx->pc == 0x450F30u) {
        ctx->pc = 0x450F34u;
        goto label_450f34;
    }
    ctx->pc = 0x450F2Cu;
    {
        const bool branch_taken_0x450f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450f2c) {
            ctx->pc = 0x450F48u;
            goto label_450f48;
        }
    }
    ctx->pc = 0x450F34u;
label_450f34:
    // 0x450f34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x450f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_450f38:
    // 0x450f38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x450f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_450f3c:
    // 0x450f3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x450f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_450f40:
    // 0x450f40: 0x0  nop
    ctx->pc = 0x450f40u;
    // NOP
label_450f44:
    // 0x450f44: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x450f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_450f48:
    // 0x450f48: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_450f4c:
    if (ctx->pc == 0x450F4Cu) {
        ctx->pc = 0x450F4Cu;
            // 0x450f4c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x450F50u;
        goto label_450f50;
    }
    ctx->pc = 0x450F48u;
    {
        const bool branch_taken_0x450f48 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x450f48) {
            ctx->pc = 0x450F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450F48u;
            // 0x450f4c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450F5Cu;
            goto label_450f5c;
        }
    }
    ctx->pc = 0x450F50u;
label_450f50:
    // 0x450f50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x450f50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f54:
    // 0x450f54: 0x10000007  b           . + 4 + (0x7 << 2)
label_450f58:
    if (ctx->pc == 0x450F58u) {
        ctx->pc = 0x450F58u;
            // 0x450f58: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x450F5Cu;
        goto label_450f5c;
    }
    ctx->pc = 0x450F54u;
    {
        const bool branch_taken_0x450f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x450F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450F54u;
            // 0x450f58: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450f54) {
            ctx->pc = 0x450F74u;
            goto label_450f74;
        }
    }
    ctx->pc = 0x450F5Cu;
label_450f5c:
    // 0x450f5c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x450f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_450f60:
    // 0x450f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x450f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_450f64:
    // 0x450f64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f68:
    // 0x450f68: 0x0  nop
    ctx->pc = 0x450f68u;
    // NOP
label_450f6c:
    // 0x450f6c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x450f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_450f70:
    // 0x450f70: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x450f70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_450f74:
    // 0x450f74: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x450f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_450f78:
    // 0x450f78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x450f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_450f7c:
    // 0x450f7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x450f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_450f80:
    // 0x450f80: 0x0  nop
    ctx->pc = 0x450f80u;
    // NOP
label_450f84:
    // 0x450f84: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x450f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_450f88:
    // 0x450f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450f8c:
    // 0x450f8c: 0x0  nop
    ctx->pc = 0x450f8cu;
    // NOP
label_450f90:
    // 0x450f90: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x450f90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_450f94:
    // 0x450f94: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x450f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_450f98:
    // 0x450f98: 0x1000004d  b           . + 4 + (0x4D << 2)
label_450f9c:
    if (ctx->pc == 0x450F9Cu) {
        ctx->pc = 0x450F9Cu;
            // 0x450f9c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x450FA0u;
        goto label_450fa0;
    }
    ctx->pc = 0x450F98u;
    {
        const bool branch_taken_0x450f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x450F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450F98u;
            // 0x450f9c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450f98) {
            ctx->pc = 0x4510D0u;
            goto label_4510d0;
        }
    }
    ctx->pc = 0x450FA0u;
label_450fa0:
    // 0x450fa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x450fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_450fa4:
    // 0x450fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450fa8:
    // 0x450fa8: 0x0  nop
    ctx->pc = 0x450fa8u;
    // NOP
label_450fac:
    // 0x450fac: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x450facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450fb0:
    // 0x450fb0: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
label_450fb4:
    if (ctx->pc == 0x450FB4u) {
        ctx->pc = 0x450FB4u;
            // 0x450fb4: 0xc7ac0098  lwc1        $f12, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x450FB8u;
        goto label_450fb8;
    }
    ctx->pc = 0x450FB0u;
    {
        const bool branch_taken_0x450fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450fb0) {
            ctx->pc = 0x450FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450FB0u;
            // 0x450fb4: 0xc7ac0098  lwc1        $f12, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4510D4u;
            goto label_4510d4;
        }
    }
    ctx->pc = 0x450FB8u;
label_450fb8:
    // 0x450fb8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x450fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_450fbc:
    // 0x450fbc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x450fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_450fc0:
    // 0x450fc0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x450fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_450fc4:
    // 0x450fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x450fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_450fc8:
    // 0x450fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x450fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450fcc:
    // 0x450fcc: 0x0  nop
    ctx->pc = 0x450fccu;
    // NOP
label_450fd0:
    // 0x450fd0: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x450fd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
label_450fd4:
    // 0x450fd4: 0x0  nop
    ctx->pc = 0x450fd4u;
    // NOP
label_450fd8:
    // 0x450fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450fdc:
    // 0x450fdc: 0x0  nop
    ctx->pc = 0x450fdcu;
    // NOP
label_450fe0:
    // 0x450fe0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x450fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450fe4:
    // 0x450fe4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_450fe8:
    if (ctx->pc == 0x450FE8u) {
        ctx->pc = 0x450FECu;
        goto label_450fec;
    }
    ctx->pc = 0x450FE4u;
    {
        const bool branch_taken_0x450fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x450fe4) {
            ctx->pc = 0x450FF0u;
            goto label_450ff0;
        }
    }
    ctx->pc = 0x450FECu;
label_450fec:
    // 0x450fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x450fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450ff0:
    // 0x450ff0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_450ff4:
    if (ctx->pc == 0x450FF4u) {
        ctx->pc = 0x450FF4u;
            // 0x450ff4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x450FF8u;
        goto label_450ff8;
    }
    ctx->pc = 0x450FF0u;
    {
        const bool branch_taken_0x450ff0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x450ff0) {
            ctx->pc = 0x450FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450FF0u;
            // 0x450ff4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451004u;
            goto label_451004;
        }
    }
    ctx->pc = 0x450FF8u;
label_450ff8:
    // 0x450ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x450ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450ffc:
    // 0x450ffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_451000:
    if (ctx->pc == 0x451000u) {
        ctx->pc = 0x451000u;
            // 0x451000: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451004u;
        goto label_451004;
    }
    ctx->pc = 0x450FFCu;
    {
        const bool branch_taken_0x450ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450FFCu;
            // 0x451000: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450ffc) {
            ctx->pc = 0x45101Cu;
            goto label_45101c;
        }
    }
    ctx->pc = 0x451004u;
label_451004:
    // 0x451004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_451008:
    // 0x451008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45100c:
    // 0x45100c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45100cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451010:
    // 0x451010: 0x0  nop
    ctx->pc = 0x451010u;
    // NOP
label_451014:
    // 0x451014: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x451014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_451018:
    // 0x451018: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x451018u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_45101c:
    // 0x45101c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x45101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_451020:
    // 0x451020: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x451020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_451024:
    // 0x451024: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x451024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_451028:
    // 0x451028: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x451028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45102c:
    // 0x45102c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x45102cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_451030:
    // 0x451030: 0x0  nop
    ctx->pc = 0x451030u;
    // NOP
label_451034:
    // 0x451034: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x451034u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_451038:
    // 0x451038: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_45103c:
    // 0x45103c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x45103cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_451040:
    // 0x451040: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x451040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_451044:
    // 0x451044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451048:
    // 0x451048: 0x0  nop
    ctx->pc = 0x451048u;
    // NOP
label_45104c:
    // 0x45104c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45104cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451050:
    // 0x451050: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_451054:
    if (ctx->pc == 0x451054u) {
        ctx->pc = 0x451054u;
            // 0x451054: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x451058u;
        goto label_451058;
    }
    ctx->pc = 0x451050u;
    {
        const bool branch_taken_0x451050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451050) {
            ctx->pc = 0x451054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451050u;
            // 0x451054: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x451068u;
            goto label_451068;
        }
    }
    ctx->pc = 0x451058u;
label_451058:
    // 0x451058: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45105c:
    // 0x45105c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x45105cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451060:
    // 0x451060: 0x10000006  b           . + 4 + (0x6 << 2)
label_451064:
    if (ctx->pc == 0x451064u) {
        ctx->pc = 0x451068u;
        goto label_451068;
    }
    ctx->pc = 0x451060u;
    {
        const bool branch_taken_0x451060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451060) {
            ctx->pc = 0x45107Cu;
            goto label_45107c;
        }
    }
    ctx->pc = 0x451068u;
label_451068:
    // 0x451068: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x451068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45106c:
    // 0x45106c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45106cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451070:
    // 0x451070: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451074:
    // 0x451074: 0x0  nop
    ctx->pc = 0x451074u;
    // NOP
label_451078:
    // 0x451078: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x451078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_45107c:
    // 0x45107c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_451080:
    if (ctx->pc == 0x451080u) {
        ctx->pc = 0x451080u;
            // 0x451080: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x451084u;
        goto label_451084;
    }
    ctx->pc = 0x45107Cu;
    {
        const bool branch_taken_0x45107c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x45107c) {
            ctx->pc = 0x451080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45107Cu;
            // 0x451080: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451090u;
            goto label_451090;
        }
    }
    ctx->pc = 0x451084u;
label_451084:
    // 0x451084: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x451084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451088:
    // 0x451088: 0x10000007  b           . + 4 + (0x7 << 2)
label_45108c:
    if (ctx->pc == 0x45108Cu) {
        ctx->pc = 0x45108Cu;
            // 0x45108c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451090u;
        goto label_451090;
    }
    ctx->pc = 0x451088u;
    {
        const bool branch_taken_0x451088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451088u;
            // 0x45108c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451088) {
            ctx->pc = 0x4510A8u;
            goto label_4510a8;
        }
    }
    ctx->pc = 0x451090u;
label_451090:
    // 0x451090: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x451090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_451094:
    // 0x451094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451098:
    // 0x451098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45109c:
    // 0x45109c: 0x0  nop
    ctx->pc = 0x45109cu;
    // NOP
label_4510a0:
    // 0x4510a0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4510a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4510a4:
    // 0x4510a4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4510a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4510a8:
    // 0x4510a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4510ac:
    // 0x4510ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4510acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4510b0:
    // 0x4510b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4510b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4510b4:
    // 0x4510b4: 0x0  nop
    ctx->pc = 0x4510b4u;
    // NOP
label_4510b8:
    // 0x4510b8: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x4510b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_4510bc:
    // 0x4510bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4510bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4510c0:
    // 0x4510c0: 0x0  nop
    ctx->pc = 0x4510c0u;
    // NOP
label_4510c4:
    // 0x4510c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4510c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4510c8:
    // 0x4510c8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4510c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4510cc:
    // 0x4510cc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4510ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4510d0:
    // 0x4510d0: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x4510d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4510d4:
    // 0x4510d4: 0xc047740  jal         func_11DD00
label_4510d8:
    if (ctx->pc == 0x4510D8u) {
        ctx->pc = 0x4510DCu;
        goto label_4510dc;
    }
    ctx->pc = 0x4510D4u;
    SET_GPR_U32(ctx, 31, 0x4510DCu);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4510DCu; }
        if (ctx->pc != 0x4510DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4510DCu; }
        if (ctx->pc != 0x4510DCu) { return; }
    }
    ctx->pc = 0x4510DCu;
label_4510dc:
    // 0x4510dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x4510dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_4510e0:
    // 0x4510e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4510e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4510e4:
    // 0x4510e4: 0xc7a5009c  lwc1        $f5, 0x9C($sp)
    ctx->pc = 0x4510e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4510e8:
    // 0x4510e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4510e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4510ec:
    // 0x4510ec: 0x0  nop
    ctx->pc = 0x4510ecu;
    // NOP
label_4510f0:
    // 0x4510f0: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x4510f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4510f4:
    // 0x4510f4: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_4510f8:
    if (ctx->pc == 0x4510F8u) {
        ctx->pc = 0x4510F8u;
            // 0x4510f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4510FCu;
        goto label_4510fc;
    }
    ctx->pc = 0x4510F4u;
    {
        const bool branch_taken_0x4510f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4510F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4510F4u;
            // 0x4510f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4510f4) {
            ctx->pc = 0x4511ACu;
            goto label_4511ac;
        }
    }
    ctx->pc = 0x4510FCu;
label_4510fc:
    // 0x4510fc: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x4510fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_451100:
    // 0x451100: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451104:
    // 0x451104: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x451104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451108:
    // 0x451108: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_45110c:
    // 0x45110c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45110cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451110:
    // 0x451110: 0x0  nop
    ctx->pc = 0x451110u;
    // NOP
label_451114:
    // 0x451114: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x451114u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_451118:
    // 0x451118: 0x0  nop
    ctx->pc = 0x451118u;
    // NOP
label_45111c:
    // 0x45111c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45111cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451120:
    // 0x451120: 0x0  nop
    ctx->pc = 0x451120u;
    // NOP
label_451124:
    // 0x451124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x451124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451128:
    // 0x451128: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_45112c:
    if (ctx->pc == 0x45112Cu) {
        ctx->pc = 0x45112Cu;
            // 0x45112c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x451130u;
        goto label_451130;
    }
    ctx->pc = 0x451128u;
    {
        const bool branch_taken_0x451128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451128) {
            ctx->pc = 0x45112Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451128u;
            // 0x45112c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x451140u;
            goto label_451140;
        }
    }
    ctx->pc = 0x451130u;
label_451130:
    // 0x451130: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451134:
    // 0x451134: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451138:
    // 0x451138: 0x10000006  b           . + 4 + (0x6 << 2)
label_45113c:
    if (ctx->pc == 0x45113Cu) {
        ctx->pc = 0x451140u;
        goto label_451140;
    }
    ctx->pc = 0x451138u;
    {
        const bool branch_taken_0x451138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451138) {
            ctx->pc = 0x451154u;
            goto label_451154;
        }
    }
    ctx->pc = 0x451140u;
label_451140:
    // 0x451140: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x451140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_451144:
    // 0x451144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451148:
    // 0x451148: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_45114c:
    // 0x45114c: 0x0  nop
    ctx->pc = 0x45114cu;
    // NOP
label_451150:
    // 0x451150: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x451150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_451154:
    // 0x451154: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_451158:
    if (ctx->pc == 0x451158u) {
        ctx->pc = 0x451158u;
            // 0x451158: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x45115Cu;
        goto label_45115c;
    }
    ctx->pc = 0x451154u;
    {
        const bool branch_taken_0x451154 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x451154) {
            ctx->pc = 0x451158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451154u;
            // 0x451158: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451168u;
            goto label_451168;
        }
    }
    ctx->pc = 0x45115Cu;
label_45115c:
    // 0x45115c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x45115cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451160:
    // 0x451160: 0x10000007  b           . + 4 + (0x7 << 2)
label_451164:
    if (ctx->pc == 0x451164u) {
        ctx->pc = 0x451164u;
            // 0x451164: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451168u;
        goto label_451168;
    }
    ctx->pc = 0x451160u;
    {
        const bool branch_taken_0x451160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451160u;
            // 0x451164: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451160) {
            ctx->pc = 0x451180u;
            goto label_451180;
        }
    }
    ctx->pc = 0x451168u;
label_451168:
    // 0x451168: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x451168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_45116c:
    // 0x45116c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x45116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451170:
    // 0x451170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451174:
    // 0x451174: 0x0  nop
    ctx->pc = 0x451174u;
    // NOP
label_451178:
    // 0x451178: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x451178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_45117c:
    // 0x45117c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x45117cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_451180:
    // 0x451180: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451184:
    // 0x451184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x451184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451188:
    // 0x451188: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x451188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45118c:
    // 0x45118c: 0x0  nop
    ctx->pc = 0x45118cu;
    // NOP
label_451190:
    // 0x451190: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x451190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_451194:
    // 0x451194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451198:
    // 0x451198: 0x0  nop
    ctx->pc = 0x451198u;
    // NOP
label_45119c:
    // 0x45119c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x45119cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4511a0:
    // 0x4511a0: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x4511a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4511a4:
    // 0x4511a4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4511a8:
    if (ctx->pc == 0x4511A8u) {
        ctx->pc = 0x4511A8u;
            // 0x4511a8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x4511ACu;
        goto label_4511ac;
    }
    ctx->pc = 0x4511A4u;
    {
        const bool branch_taken_0x4511a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4511A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4511A4u;
            // 0x4511a8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4511a4) {
            ctx->pc = 0x4512E0u;
            goto label_4512e0;
        }
    }
    ctx->pc = 0x4511ACu;
label_4511ac:
    // 0x4511ac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x4511acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_4511b0:
    // 0x4511b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4511b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4511b4:
    // 0x4511b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4511b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4511b8:
    // 0x4511b8: 0x0  nop
    ctx->pc = 0x4511b8u;
    // NOP
label_4511bc:
    // 0x4511bc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x4511bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4511c0:
    // 0x4511c0: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
label_4511c4:
    if (ctx->pc == 0x4511C4u) {
        ctx->pc = 0x4511C4u;
            // 0x4511c4: 0xc7ac009c  lwc1        $f12, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4511C8u;
        goto label_4511c8;
    }
    ctx->pc = 0x4511C0u;
    {
        const bool branch_taken_0x4511c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4511c0) {
            ctx->pc = 0x4511C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4511C0u;
            // 0x4511c4: 0xc7ac009c  lwc1        $f12, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4512E4u;
            goto label_4512e4;
        }
    }
    ctx->pc = 0x4511C8u;
label_4511c8:
    // 0x4511c8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4511c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_4511cc:
    // 0x4511cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4511ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4511d0:
    // 0x4511d0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x4511d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4511d4:
    // 0x4511d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4511d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4511d8:
    // 0x4511d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4511d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4511dc:
    // 0x4511dc: 0x0  nop
    ctx->pc = 0x4511dcu;
    // NOP
label_4511e0:
    // 0x4511e0: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x4511e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
label_4511e4:
    // 0x4511e4: 0x0  nop
    ctx->pc = 0x4511e4u;
    // NOP
label_4511e8:
    // 0x4511e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4511e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4511ec:
    // 0x4511ec: 0x0  nop
    ctx->pc = 0x4511ecu;
    // NOP
label_4511f0:
    // 0x4511f0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x4511f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4511f4:
    // 0x4511f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4511f8:
    if (ctx->pc == 0x4511F8u) {
        ctx->pc = 0x4511FCu;
        goto label_4511fc;
    }
    ctx->pc = 0x4511F4u;
    {
        const bool branch_taken_0x4511f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4511f4) {
            ctx->pc = 0x451200u;
            goto label_451200;
        }
    }
    ctx->pc = 0x4511FCu;
label_4511fc:
    // 0x4511fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4511fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451200:
    // 0x451200: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_451204:
    if (ctx->pc == 0x451204u) {
        ctx->pc = 0x451204u;
            // 0x451204: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x451208u;
        goto label_451208;
    }
    ctx->pc = 0x451200u;
    {
        const bool branch_taken_0x451200 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x451200) {
            ctx->pc = 0x451204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451200u;
            // 0x451204: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451214u;
            goto label_451214;
        }
    }
    ctx->pc = 0x451208u;
label_451208:
    // 0x451208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45120c:
    // 0x45120c: 0x10000007  b           . + 4 + (0x7 << 2)
label_451210:
    if (ctx->pc == 0x451210u) {
        ctx->pc = 0x451210u;
            // 0x451210: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451214u;
        goto label_451214;
    }
    ctx->pc = 0x45120Cu;
    {
        const bool branch_taken_0x45120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45120Cu;
            // 0x451210: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45120c) {
            ctx->pc = 0x45122Cu;
            goto label_45122c;
        }
    }
    ctx->pc = 0x451214u;
label_451214:
    // 0x451214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_451218:
    // 0x451218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45121c:
    // 0x45121c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45121cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451220:
    // 0x451220: 0x0  nop
    ctx->pc = 0x451220u;
    // NOP
label_451224:
    // 0x451224: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x451224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_451228:
    // 0x451228: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x451228u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_45122c:
    // 0x45122c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x45122cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_451230:
    // 0x451230: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x451230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_451234:
    // 0x451234: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x451234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_451238:
    // 0x451238: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x451238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45123c:
    // 0x45123c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x45123cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_451240:
    // 0x451240: 0x0  nop
    ctx->pc = 0x451240u;
    // NOP
label_451244:
    // 0x451244: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x451244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_451248:
    // 0x451248: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_45124c:
    // 0x45124c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x45124cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_451250:
    // 0x451250: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x451250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_451254:
    // 0x451254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451258:
    // 0x451258: 0x0  nop
    ctx->pc = 0x451258u;
    // NOP
label_45125c:
    // 0x45125c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45125cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451260:
    // 0x451260: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_451264:
    if (ctx->pc == 0x451264u) {
        ctx->pc = 0x451264u;
            // 0x451264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x451268u;
        goto label_451268;
    }
    ctx->pc = 0x451260u;
    {
        const bool branch_taken_0x451260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451260) {
            ctx->pc = 0x451264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451260u;
            // 0x451264: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x451278u;
            goto label_451278;
        }
    }
    ctx->pc = 0x451268u;
label_451268:
    // 0x451268: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45126c:
    // 0x45126c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x45126cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451270:
    // 0x451270: 0x10000006  b           . + 4 + (0x6 << 2)
label_451274:
    if (ctx->pc == 0x451274u) {
        ctx->pc = 0x451278u;
        goto label_451278;
    }
    ctx->pc = 0x451270u;
    {
        const bool branch_taken_0x451270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451270) {
            ctx->pc = 0x45128Cu;
            goto label_45128c;
        }
    }
    ctx->pc = 0x451278u;
label_451278:
    // 0x451278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x451278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45127c:
    // 0x45127c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45127cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451280:
    // 0x451280: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451284:
    // 0x451284: 0x0  nop
    ctx->pc = 0x451284u;
    // NOP
label_451288:
    // 0x451288: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x451288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_45128c:
    // 0x45128c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_451290:
    if (ctx->pc == 0x451290u) {
        ctx->pc = 0x451290u;
            // 0x451290: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x451294u;
        goto label_451294;
    }
    ctx->pc = 0x45128Cu;
    {
        const bool branch_taken_0x45128c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x45128c) {
            ctx->pc = 0x451290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45128Cu;
            // 0x451290: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4512A0u;
            goto label_4512a0;
        }
    }
    ctx->pc = 0x451294u;
label_451294:
    // 0x451294: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x451294u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451298:
    // 0x451298: 0x10000007  b           . + 4 + (0x7 << 2)
label_45129c:
    if (ctx->pc == 0x45129Cu) {
        ctx->pc = 0x45129Cu;
            // 0x45129c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4512A0u;
        goto label_4512a0;
    }
    ctx->pc = 0x451298u;
    {
        const bool branch_taken_0x451298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451298u;
            // 0x45129c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451298) {
            ctx->pc = 0x4512B8u;
            goto label_4512b8;
        }
    }
    ctx->pc = 0x4512A0u;
label_4512a0:
    // 0x4512a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4512a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4512a4:
    // 0x4512a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4512a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4512a8:
    // 0x4512a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4512a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4512ac:
    // 0x4512ac: 0x0  nop
    ctx->pc = 0x4512acu;
    // NOP
label_4512b0:
    // 0x4512b0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4512b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4512b4:
    // 0x4512b4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4512b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4512b8:
    // 0x4512b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4512b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4512bc:
    // 0x4512bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4512bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4512c0:
    // 0x4512c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4512c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4512c4:
    // 0x4512c4: 0x0  nop
    ctx->pc = 0x4512c4u;
    // NOP
label_4512c8:
    // 0x4512c8: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x4512c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_4512cc:
    // 0x4512cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4512ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4512d0:
    // 0x4512d0: 0x0  nop
    ctx->pc = 0x4512d0u;
    // NOP
label_4512d4:
    // 0x4512d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4512d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4512d8:
    // 0x4512d8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4512d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4512dc:
    // 0x4512dc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x4512dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_4512e0:
    // 0x4512e0: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x4512e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4512e4:
    // 0x4512e4: 0xc047740  jal         func_11DD00
label_4512e8:
    if (ctx->pc == 0x4512E8u) {
        ctx->pc = 0x4512ECu;
        goto label_4512ec;
    }
    ctx->pc = 0x4512E4u;
    SET_GPR_U32(ctx, 31, 0x4512ECu);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4512ECu; }
        if (ctx->pc != 0x4512ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4512ECu; }
        if (ctx->pc != 0x4512ECu) { return; }
    }
    ctx->pc = 0x4512ECu;
label_4512ec:
    // 0x4512ec: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4512ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4512f0:
    // 0x4512f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x4512f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4512f4:
    // 0x4512f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4512f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4512f8:
    // 0x4512f8: 0x0  nop
    ctx->pc = 0x4512f8u;
    // NOP
label_4512fc:
    // 0x4512fc: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x4512fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451300:
    // 0x451300: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
label_451304:
    if (ctx->pc == 0x451304u) {
        ctx->pc = 0x451304u;
            // 0x451304: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x451308u;
        goto label_451308;
    }
    ctx->pc = 0x451300u;
    {
        const bool branch_taken_0x451300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451300) {
            ctx->pc = 0x451304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451300u;
            // 0x451304: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451368u;
            goto label_451368;
        }
    }
    ctx->pc = 0x451308u;
label_451308:
    // 0x451308: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x451308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45130c:
    // 0x45130c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45130cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451310:
    // 0x451310: 0x0  nop
    ctx->pc = 0x451310u;
    // NOP
label_451314:
    // 0x451314: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x451314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451318:
    // 0x451318: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_45131c:
    if (ctx->pc == 0x45131Cu) {
        ctx->pc = 0x45131Cu;
            // 0x45131c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x451320u;
        goto label_451320;
    }
    ctx->pc = 0x451318u;
    {
        const bool branch_taken_0x451318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x45131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451318u;
            // 0x45131c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451318) {
            ctx->pc = 0x451324u;
            goto label_451324;
        }
    }
    ctx->pc = 0x451320u;
label_451320:
    // 0x451320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451324:
    // 0x451324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_451328:
    // 0x451328: 0x21023  negu        $v0, $v0
    ctx->pc = 0x451328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_45132c:
    // 0x45132c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x45132cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_451330:
    // 0x451330: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x451330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_451334:
    // 0x451334: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x451334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_451338:
    // 0x451338: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x451338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45133c:
    // 0x45133c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45133cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_451340:
    // 0x451340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x451340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_451344:
    // 0x451344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x451344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_451348:
    // 0x451348: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x451348u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_45134c:
    // 0x45134c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x45134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_451350:
    // 0x451350: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x451350u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_451354:
    // 0x451354: 0x40182a  slt         $v1, $v0, $zero
    ctx->pc = 0x451354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_451358:
    // 0x451358: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x451358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45135c:
    // 0x45135c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x45135cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_451360:
    // 0x451360: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x451360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451364:
    // 0x451364: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x451364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_451368:
    // 0x451368: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x451368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_45136c:
    // 0x45136c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451370:
    // 0x451370: 0x0  nop
    ctx->pc = 0x451370u;
    // NOP
label_451374:
    // 0x451374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x451374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451378:
    // 0x451378: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_45137c:
    if (ctx->pc == 0x45137Cu) {
        ctx->pc = 0x451380u;
        goto label_451380;
    }
    ctx->pc = 0x451378u;
    {
        const bool branch_taken_0x451378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451378) {
            ctx->pc = 0x4513E4u;
            goto label_4513e4;
        }
    }
    ctx->pc = 0x451380u;
label_451380:
    // 0x451380: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x451380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_451384:
    // 0x451384: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x451384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451388:
    // 0x451388: 0x0  nop
    ctx->pc = 0x451388u;
    // NOP
label_45138c:
    // 0x45138c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x45138cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451390:
    // 0x451390: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_451394:
    if (ctx->pc == 0x451394u) {
        ctx->pc = 0x451394u;
            // 0x451394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x451398u;
        goto label_451398;
    }
    ctx->pc = 0x451390u;
    {
        const bool branch_taken_0x451390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x451394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451390u;
            // 0x451394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451390) {
            ctx->pc = 0x45139Cu;
            goto label_45139c;
        }
    }
    ctx->pc = 0x451398u;
label_451398:
    // 0x451398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45139c:
    // 0x45139c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45139cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4513a0:
    // 0x4513a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4513a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4513a4:
    // 0x4513a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4513a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4513a8:
    // 0x4513a8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4513a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4513ac:
    // 0x4513ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4513acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4513b0:
    // 0x4513b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4513b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4513b4:
    // 0x4513b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4513b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4513b8:
    // 0x4513b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4513bc:
    // 0x4513bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4513bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4513c0:
    // 0x4513c0: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x4513c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_4513c4:
    // 0x4513c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x4513c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_4513c8:
    // 0x4513c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4513c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4513cc:
    // 0x4513cc: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x4513ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4513d0:
    // 0x4513d0: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x4513d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_4513d4:
    // 0x4513d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4513d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4513d8:
    // 0x4513d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4513d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4513dc:
    // 0x4513dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4513dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4513e0:
    // 0x4513e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4513e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4513e4:
    // 0x4513e4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_4513e8:
    if (ctx->pc == 0x4513E8u) {
        ctx->pc = 0x4513E8u;
            // 0x4513e8: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x4513ECu;
        goto label_4513ec;
    }
    ctx->pc = 0x4513E4u;
    {
        const bool branch_taken_0x4513e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4513e4) {
            ctx->pc = 0x4513E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4513E4u;
            // 0x4513e8: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451404u;
            goto label_451404;
        }
    }
    ctx->pc = 0x4513ECu;
label_4513ec:
    // 0x4513ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4513ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4513f0:
    // 0x4513f0: 0x2001827  not         $v1, $s0
    ctx->pc = 0x4513f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_4513f4:
    // 0x4513f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4513f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4513f8:
    // 0x4513f8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4513f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4513fc:
    // 0x4513fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4513fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_451400:
    // 0x451400: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x451400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_451404:
    // 0x451404: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x451404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_451408:
    // 0x451408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x451408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45140c:
    // 0x45140c: 0x0  nop
    ctx->pc = 0x45140cu;
    // NOP
label_451410:
    // 0x451410: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x451410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451414:
    // 0x451414: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
label_451418:
    if (ctx->pc == 0x451418u) {
        ctx->pc = 0x451418u;
            // 0x451418: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x45141Cu;
        goto label_45141c;
    }
    ctx->pc = 0x451414u;
    {
        const bool branch_taken_0x451414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451414) {
            ctx->pc = 0x451418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451414u;
            // 0x451418: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4514A8u;
            goto label_4514a8;
        }
    }
    ctx->pc = 0x45141Cu;
label_45141c:
    // 0x45141c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45141cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451420:
    // 0x451420: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_451424:
    if (ctx->pc == 0x451424u) {
        ctx->pc = 0x451428u;
        goto label_451428;
    }
    ctx->pc = 0x451420u;
    {
        const bool branch_taken_0x451420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451420) {
            ctx->pc = 0x4514A4u;
            goto label_4514a4;
        }
    }
    ctx->pc = 0x451428u;
label_451428:
    // 0x451428: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x451428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_45142c:
    // 0x45142c: 0x8c428b18  lw          $v0, -0x74E8($v0)
    ctx->pc = 0x45142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937368)));
label_451430:
    // 0x451430: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_451434:
    if (ctx->pc == 0x451434u) {
        ctx->pc = 0x451434u;
            // 0x451434: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x451438u;
        goto label_451438;
    }
    ctx->pc = 0x451430u;
    {
        const bool branch_taken_0x451430 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x451430) {
            ctx->pc = 0x451434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451430u;
            // 0x451434: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451444u;
            goto label_451444;
        }
    }
    ctx->pc = 0x451438u;
label_451438:
    // 0x451438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45143c:
    // 0x45143c: 0x10000007  b           . + 4 + (0x7 << 2)
label_451440:
    if (ctx->pc == 0x451440u) {
        ctx->pc = 0x451440u;
            // 0x451440: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451444u;
        goto label_451444;
    }
    ctx->pc = 0x45143Cu;
    {
        const bool branch_taken_0x45143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45143Cu;
            // 0x451440: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45143c) {
            ctx->pc = 0x45145Cu;
            goto label_45145c;
        }
    }
    ctx->pc = 0x451444u;
label_451444:
    // 0x451444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_451448:
    // 0x451448: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45144c:
    // 0x45144c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451450:
    // 0x451450: 0x0  nop
    ctx->pc = 0x451450u;
    // NOP
label_451454:
    // 0x451454: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x451454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_451458:
    // 0x451458: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x451458u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_45145c:
    // 0x45145c: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x45145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_451460:
    // 0x451460: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x451460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_451464:
    // 0x451464: 0x8c428b28  lw          $v0, -0x74D8($v0)
    ctx->pc = 0x451464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937384)));
label_451468:
    // 0x451468: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_45146c:
    if (ctx->pc == 0x45146Cu) {
        ctx->pc = 0x45146Cu;
            // 0x45146c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x451470u;
        goto label_451470;
    }
    ctx->pc = 0x451468u;
    {
        const bool branch_taken_0x451468 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x45146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451468u;
            // 0x45146c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x451468) {
            ctx->pc = 0x45147Cu;
            goto label_45147c;
        }
    }
    ctx->pc = 0x451470u;
label_451470:
    // 0x451470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451474:
    // 0x451474: 0x10000008  b           . + 4 + (0x8 << 2)
label_451478:
    if (ctx->pc == 0x451478u) {
        ctx->pc = 0x451478u;
            // 0x451478: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45147Cu;
        goto label_45147c;
    }
    ctx->pc = 0x451474u;
    {
        const bool branch_taken_0x451474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451474u;
            // 0x451478: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451474) {
            ctx->pc = 0x451498u;
            goto label_451498;
        }
    }
    ctx->pc = 0x45147Cu;
label_45147c:
    // 0x45147c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x45147cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_451480:
    // 0x451480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_451484:
    // 0x451484: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451488:
    // 0x451488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45148c:
    // 0x45148c: 0x0  nop
    ctx->pc = 0x45148cu;
    // NOP
label_451490:
    // 0x451490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x451490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_451494:
    // 0x451494: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x451494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_451498:
    // 0x451498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x451498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45149c:
    // 0x45149c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4514a0:
    if (ctx->pc == 0x4514A0u) {
        ctx->pc = 0x4514A4u;
        goto label_4514a4;
    }
    ctx->pc = 0x45149Cu;
    {
        const bool branch_taken_0x45149c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45149c) {
            ctx->pc = 0x4514C0u;
            goto label_4514c0;
        }
    }
    ctx->pc = 0x4514A4u;
label_4514a4:
    // 0x4514a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4514a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4514a8:
    // 0x4514a8: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x4514a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_4514ac:
    // 0x4514ac: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4514acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4514b0:
    // 0x4514b0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4514b4:
    // 0x4514b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4514b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4514b8:
    // 0x4514b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4514b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4514bc:
    // 0x4514bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4514bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4514c0:
    // 0x4514c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4514c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4514c4:
    // 0x4514c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4514c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4514c8:
    // 0x4514c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4514c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4514cc:
    // 0x4514cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4514ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4514d0:
    // 0x4514d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4514d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4514d4:
    // 0x4514d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4514d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4514d8:
    // 0x4514d8: 0x3e00008  jr          $ra
label_4514dc:
    if (ctx->pc == 0x4514DCu) {
        ctx->pc = 0x4514DCu;
            // 0x4514dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4514E0u;
        goto label_4514e0;
    }
    ctx->pc = 0x4514D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4514DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4514D8u;
            // 0x4514dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4514E0u;
label_4514e0:
    // 0x4514e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4514e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4514e4:
    // 0x4514e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4514e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4514e8:
    // 0x4514e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4514e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4514ec:
    // 0x4514ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4514ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4514f0:
    // 0x4514f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4514f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4514f4:
    // 0x4514f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4514f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4514f8:
    // 0x4514f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4514f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4514fc:
    // 0x4514fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4514fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_451500:
    // 0x451500: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x451500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_451504:
    // 0x451504: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x451504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_451508:
    // 0x451508: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x451508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45150c:
    // 0x45150c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_451510:
    // 0x451510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x451510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_451514:
    // 0x451514: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x451514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_451518:
    // 0x451518: 0x8c9e0044  lw          $fp, 0x44($a0)
    ctx->pc = 0x451518u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45151c:
    // 0x45151c: 0x8c430cd0  lw          $v1, 0xCD0($v0)
    ctx->pc = 0x45151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_451520:
    // 0x451520: 0x27d402c0  addiu       $s4, $fp, 0x2C0
    ctx->pc = 0x451520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
label_451524:
    // 0x451524: 0x8fc20a60  lw          $v0, 0xA60($fp)
    ctx->pc = 0x451524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2656)));
label_451528:
    // 0x451528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x451528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45152c:
    // 0x45152c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x45152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_451530:
    // 0x451530: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x451530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_451534:
    // 0x451534: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x451534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_451538:
    // 0x451538: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x451538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_45153c:
    // 0x45153c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x45153cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_451540:
    // 0x451540: 0xc04cc1c  jal         func_133070
label_451544:
    if (ctx->pc == 0x451544u) {
        ctx->pc = 0x451544u;
            // 0x451544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451548u;
        goto label_451548;
    }
    ctx->pc = 0x451540u;
    SET_GPR_U32(ctx, 31, 0x451548u);
    ctx->pc = 0x451544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451540u;
            // 0x451544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451548u; }
        if (ctx->pc != 0x451548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451548u; }
        if (ctx->pc != 0x451548u) { return; }
    }
    ctx->pc = 0x451548u;
label_451548:
    // 0x451548: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x451548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_45154c:
    // 0x45154c: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
label_451550:
    if (ctx->pc == 0x451550u) {
        ctx->pc = 0x451550u;
            // 0x451550: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x451554u;
        goto label_451554;
    }
    ctx->pc = 0x45154Cu;
    {
        const bool branch_taken_0x45154c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45154c) {
            ctx->pc = 0x451550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45154Cu;
            // 0x451550: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4516E8u;
            goto label_4516e8;
        }
    }
    ctx->pc = 0x451554u;
label_451554:
    // 0x451554: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x451554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_451558:
    // 0x451558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x451558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45155c:
    // 0x45155c: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
label_451560:
    if (ctx->pc == 0x451560u) {
        ctx->pc = 0x451564u;
        goto label_451564;
    }
    ctx->pc = 0x45155Cu;
    {
        const bool branch_taken_0x45155c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45155c) {
            ctx->pc = 0x4516E4u;
            goto label_4516e4;
        }
    }
    ctx->pc = 0x451564u;
label_451564:
    // 0x451564: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x451564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451568:
    // 0x451568: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_45156c:
    if (ctx->pc == 0x45156Cu) {
        ctx->pc = 0x451570u;
        goto label_451570;
    }
    ctx->pc = 0x451568u;
    {
        const bool branch_taken_0x451568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451568) {
            ctx->pc = 0x4516E4u;
            goto label_4516e4;
        }
    }
    ctx->pc = 0x451570u;
label_451570:
    // 0x451570: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x451570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_451574:
    // 0x451574: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x451574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_451578:
    // 0x451578: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_45157c:
    if (ctx->pc == 0x45157Cu) {
        ctx->pc = 0x451580u;
        goto label_451580;
    }
    ctx->pc = 0x451578u;
    {
        const bool branch_taken_0x451578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451578) {
            ctx->pc = 0x4516E4u;
            goto label_4516e4;
        }
    }
    ctx->pc = 0x451580u;
label_451580:
    // 0x451580: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x451580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_451584:
    // 0x451584: 0x3c034743  lui         $v1, 0x4743
    ctx->pc = 0x451584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18243 << 16));
label_451588:
    // 0x451588: 0x8c527330  lw          $s2, 0x7330($v0)
    ctx->pc = 0x451588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29488)));
label_45158c:
    // 0x45158c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x45158cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451590:
    // 0x451590: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x451590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451594:
    // 0x451594: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x451594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_451598:
    // 0x451598: 0x8e560070  lw          $s6, 0x70($s2)
    ctx->pc = 0x451598u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_45159c:
    // 0x45159c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4515a0:
    // 0x4515a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4515a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4515a4:
    // 0x4515a4: 0x8c518b18  lw          $s1, -0x74E8($v0)
    ctx->pc = 0x4515a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937368)));
label_4515a8:
    // 0x4515a8: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x4515a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4515ac:
    // 0x4515ac: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4515acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4515b0:
    // 0x4515b0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4515b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4515b4:
    // 0x4515b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4515b8:
    // 0x4515b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4515b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4515bc:
    // 0x4515bc: 0xc04cc04  jal         func_133010
label_4515c0:
    if (ctx->pc == 0x4515C0u) {
        ctx->pc = 0x4515C0u;
            // 0x4515c0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4515C4u;
        goto label_4515c4;
    }
    ctx->pc = 0x4515BCu;
    SET_GPR_U32(ctx, 31, 0x4515C4u);
    ctx->pc = 0x4515C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4515BCu;
            // 0x4515c0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515C4u; }
        if (ctx->pc != 0x4515C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515C4u; }
        if (ctx->pc != 0x4515C4u) { return; }
    }
    ctx->pc = 0x4515C4u;
label_4515c4:
    // 0x4515c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4515c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4515c8:
    // 0x4515c8: 0xc04f278  jal         func_13C9E0
label_4515cc:
    if (ctx->pc == 0x4515CCu) {
        ctx->pc = 0x4515CCu;
            // 0x4515cc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4515D0u;
        goto label_4515d0;
    }
    ctx->pc = 0x4515C8u;
    SET_GPR_U32(ctx, 31, 0x4515D0u);
    ctx->pc = 0x4515CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4515C8u;
            // 0x4515cc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515D0u; }
        if (ctx->pc != 0x4515D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515D0u; }
        if (ctx->pc != 0x4515D0u) { return; }
    }
    ctx->pc = 0x4515D0u;
label_4515d0:
    // 0x4515d0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4515d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4515d4:
    // 0x4515d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4515d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4515d8:
    // 0x4515d8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x4515d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4515dc:
    // 0x4515dc: 0xc04cca0  jal         func_133280
label_4515e0:
    if (ctx->pc == 0x4515E0u) {
        ctx->pc = 0x4515E0u;
            // 0x4515e0: 0x24c6daa0  addiu       $a2, $a2, -0x2560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957728));
        ctx->pc = 0x4515E4u;
        goto label_4515e4;
    }
    ctx->pc = 0x4515DCu;
    SET_GPR_U32(ctx, 31, 0x4515E4u);
    ctx->pc = 0x4515E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4515DCu;
            // 0x4515e0: 0x24c6daa0  addiu       $a2, $a2, -0x2560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515E4u; }
        if (ctx->pc != 0x4515E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515E4u; }
        if (ctx->pc != 0x4515E4u) { return; }
    }
    ctx->pc = 0x4515E4u;
label_4515e4:
    // 0x4515e4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4515e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4515e8:
    // 0x4515e8: 0xc04cc44  jal         func_133110
label_4515ec:
    if (ctx->pc == 0x4515ECu) {
        ctx->pc = 0x4515ECu;
            // 0x4515ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4515F0u;
        goto label_4515f0;
    }
    ctx->pc = 0x4515E8u;
    SET_GPR_U32(ctx, 31, 0x4515F0u);
    ctx->pc = 0x4515ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4515E8u;
            // 0x4515ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515F0u; }
        if (ctx->pc != 0x4515F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4515F0u; }
        if (ctx->pc != 0x4515F0u) { return; }
    }
    ctx->pc = 0x4515F0u;
label_4515f0:
    // 0x4515f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4515f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4515f4:
    // 0x4515f4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x4515f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4515f8:
    // 0x4515f8: 0xc04cc90  jal         func_133240
label_4515fc:
    if (ctx->pc == 0x4515FCu) {
        ctx->pc = 0x4515FCu;
            // 0x4515fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451600u;
        goto label_451600;
    }
    ctx->pc = 0x4515F8u;
    SET_GPR_U32(ctx, 31, 0x451600u);
    ctx->pc = 0x4515FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4515F8u;
            // 0x4515fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451600u; }
        if (ctx->pc != 0x451600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451600u; }
        if (ctx->pc != 0x451600u) { return; }
    }
    ctx->pc = 0x451600u;
label_451600:
    // 0x451600: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x451600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_451604:
    // 0x451604: 0xc04cc44  jal         func_133110
label_451608:
    if (ctx->pc == 0x451608u) {
        ctx->pc = 0x451608u;
            // 0x451608: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45160Cu;
        goto label_45160c;
    }
    ctx->pc = 0x451604u;
    SET_GPR_U32(ctx, 31, 0x45160Cu);
    ctx->pc = 0x451608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451604u;
            // 0x451608: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45160Cu; }
        if (ctx->pc != 0x45160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45160Cu; }
        if (ctx->pc != 0x45160Cu) { return; }
    }
    ctx->pc = 0x45160Cu;
label_45160c:
    // 0x45160c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x45160cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_451610:
    // 0x451610: 0xc04cc1c  jal         func_133070
label_451614:
    if (ctx->pc == 0x451614u) {
        ctx->pc = 0x451614u;
            // 0x451614: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x451618u;
        goto label_451618;
    }
    ctx->pc = 0x451610u;
    SET_GPR_U32(ctx, 31, 0x451618u);
    ctx->pc = 0x451614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451610u;
            // 0x451614: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451618u; }
        if (ctx->pc != 0x451618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451618u; }
        if (ctx->pc != 0x451618u) { return; }
    }
    ctx->pc = 0x451618u;
label_451618:
    // 0x451618: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x451618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45161c:
    // 0x45161c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_451620:
    if (ctx->pc == 0x451620u) {
        ctx->pc = 0x451624u;
        goto label_451624;
    }
    ctx->pc = 0x45161Cu;
    {
        const bool branch_taken_0x45161c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45161c) {
            ctx->pc = 0x451698u;
            goto label_451698;
        }
    }
    ctx->pc = 0x451624u;
label_451624:
    // 0x451624: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x451624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_451628:
    // 0x451628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x451628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45162c:
    // 0x45162c: 0x0  nop
    ctx->pc = 0x45162cu;
    // NOP
label_451630:
    // 0x451630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x451630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451634:
    // 0x451634: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_451638:
    if (ctx->pc == 0x451638u) {
        ctx->pc = 0x45163Cu;
        goto label_45163c;
    }
    ctx->pc = 0x451634u;
    {
        const bool branch_taken_0x451634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451634) {
            ctx->pc = 0x451698u;
            goto label_451698;
        }
    }
    ctx->pc = 0x45163Cu;
label_45163c:
    // 0x45163c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x45163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_451640:
    // 0x451640: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x451640u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_451644:
    // 0x451644: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451644u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451648:
    // 0x451648: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_45164c:
    if (ctx->pc == 0x45164Cu) {
        ctx->pc = 0x45164Cu;
            // 0x45164c: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->pc = 0x451650u;
        goto label_451650;
    }
    ctx->pc = 0x451648u;
    {
        const bool branch_taken_0x451648 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x45164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451648u;
            // 0x45164c: 0xaea2018c  sw          $v0, 0x18C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451648) {
            ctx->pc = 0x45165Cu;
            goto label_45165c;
        }
    }
    ctx->pc = 0x451650u;
label_451650:
    // 0x451650: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x451650u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451654:
    // 0x451654: 0x10000008  b           . + 4 + (0x8 << 2)
label_451658:
    if (ctx->pc == 0x451658u) {
        ctx->pc = 0x451658u;
            // 0x451658: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45165Cu;
        goto label_45165c;
    }
    ctx->pc = 0x451654u;
    {
        const bool branch_taken_0x451654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451654u;
            // 0x451658: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451654) {
            ctx->pc = 0x451678u;
            goto label_451678;
        }
    }
    ctx->pc = 0x45165Cu;
label_45165c:
    // 0x45165c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x45165cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_451660:
    // 0x451660: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x451660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_451664:
    // 0x451664: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451668:
    // 0x451668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45166c:
    // 0x45166c: 0x0  nop
    ctx->pc = 0x45166cu;
    // NOP
label_451670:
    // 0x451670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x451670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_451674:
    // 0x451674: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x451674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_451678:
    // 0x451678: 0xe6a00190  swc1        $f0, 0x190($s5)
    ctx->pc = 0x451678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 400), bits); }
label_45167c:
    // 0x45167c: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x45167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_451680:
    // 0x451680: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x451680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_451684:
    // 0x451684: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x451684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_451688:
    // 0x451688: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x451688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_45168c:
    // 0x45168c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x45168cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_451690:
    // 0x451690: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x451690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451694:
    // 0x451694: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x451694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_451698:
    // 0x451698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x451698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_45169c:
    // 0x45169c: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x45169cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4516a0:
    // 0x4516a0: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
label_4516a4:
    if (ctx->pc == 0x4516A4u) {
        ctx->pc = 0x4516A4u;
            // 0x4516a4: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x4516A8u;
        goto label_4516a8;
    }
    ctx->pc = 0x4516A0u;
    {
        const bool branch_taken_0x4516a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4516a0) {
            ctx->pc = 0x4516A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4516A0u;
            // 0x4516a4: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4515ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4515ac;
        }
    }
    ctx->pc = 0x4516A8u;
label_4516a8:
    // 0x4516a8: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
label_4516ac:
    if (ctx->pc == 0x4516ACu) {
        ctx->pc = 0x4516B0u;
        goto label_4516b0;
    }
    ctx->pc = 0x4516A8u;
    {
        const bool branch_taken_0x4516a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4516a8) {
            ctx->pc = 0x4516E4u;
            goto label_4516e4;
        }
    }
    ctx->pc = 0x4516B0u;
label_4516b0:
    // 0x4516b0: 0xc04ab66  jal         func_12AD98
label_4516b4:
    if (ctx->pc == 0x4516B4u) {
        ctx->pc = 0x4516B8u;
        goto label_4516b8;
    }
    ctx->pc = 0x4516B0u;
    SET_GPR_U32(ctx, 31, 0x4516B8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516B8u; }
        if (ctx->pc != 0x4516B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516B8u; }
        if (ctx->pc != 0x4516B8u) { return; }
    }
    ctx->pc = 0x4516B8u;
label_4516b8:
    // 0x4516b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4516b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4516bc:
    // 0x4516bc: 0xc04ab66  jal         func_12AD98
label_4516c0:
    if (ctx->pc == 0x4516C0u) {
        ctx->pc = 0x4516C0u;
            // 0x4516c0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4516C4u;
        goto label_4516c4;
    }
    ctx->pc = 0x4516BCu;
    SET_GPR_U32(ctx, 31, 0x4516C4u);
    ctx->pc = 0x4516C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4516BCu;
            // 0x4516c0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516C4u; }
        if (ctx->pc != 0x4516C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516C4u; }
        if (ctx->pc != 0x4516C4u) { return; }
    }
    ctx->pc = 0x4516C4u;
label_4516c4:
    // 0x4516c4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x4516c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4516c8:
    // 0x4516c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4516c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4516cc:
    // 0x4516cc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4516ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4516d0:
    // 0x4516d0: 0x1010  mfhi        $v0
    ctx->pc = 0x4516d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4516d4:
    // 0x4516d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4516d8:
    if (ctx->pc == 0x4516D8u) {
        ctx->pc = 0x4516DCu;
        goto label_4516dc;
    }
    ctx->pc = 0x4516D4u;
    {
        const bool branch_taken_0x4516d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4516d4) {
            ctx->pc = 0x4516E4u;
            goto label_4516e4;
        }
    }
    ctx->pc = 0x4516DCu;
label_4516dc:
    // 0x4516dc: 0x100000da  b           . + 4 + (0xDA << 2)
label_4516e0:
    if (ctx->pc == 0x4516E0u) {
        ctx->pc = 0x4516E0u;
            // 0x4516e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4516E4u;
        goto label_4516e4;
    }
    ctx->pc = 0x4516DCu;
    {
        const bool branch_taken_0x4516dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4516E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4516DCu;
            // 0x4516e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4516dc) {
            ctx->pc = 0x451A48u;
            goto label_451a48;
        }
    }
    ctx->pc = 0x4516E4u;
label_4516e4:
    // 0x4516e4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x4516e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4516e8:
    // 0x4516e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4516e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4516ec:
    // 0x4516ec: 0xc04cc90  jal         func_133240
label_4516f0:
    if (ctx->pc == 0x4516F0u) {
        ctx->pc = 0x4516F0u;
            // 0x4516f0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4516F4u;
        goto label_4516f4;
    }
    ctx->pc = 0x4516ECu;
    SET_GPR_U32(ctx, 31, 0x4516F4u);
    ctx->pc = 0x4516F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4516ECu;
            // 0x4516f0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516F4u; }
        if (ctx->pc != 0x4516F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4516F4u; }
        if (ctx->pc != 0x4516F4u) { return; }
    }
    ctx->pc = 0x4516F4u;
label_4516f4:
    // 0x4516f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4516f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4516f8:
    // 0x4516f8: 0xc04cc44  jal         func_133110
label_4516fc:
    if (ctx->pc == 0x4516FCu) {
        ctx->pc = 0x4516FCu;
            // 0x4516fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451700u;
        goto label_451700;
    }
    ctx->pc = 0x4516F8u;
    SET_GPR_U32(ctx, 31, 0x451700u);
    ctx->pc = 0x4516FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4516F8u;
            // 0x4516fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451700u; }
        if (ctx->pc != 0x451700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451700u; }
        if (ctx->pc != 0x451700u) { return; }
    }
    ctx->pc = 0x451700u;
label_451700:
    // 0x451700: 0x27c40820  addiu       $a0, $fp, 0x820
    ctx->pc = 0x451700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2080));
label_451704:
    // 0x451704: 0xc04cc08  jal         func_133020
label_451708:
    if (ctx->pc == 0x451708u) {
        ctx->pc = 0x451708u;
            // 0x451708: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x45170Cu;
        goto label_45170c;
    }
    ctx->pc = 0x451704u;
    SET_GPR_U32(ctx, 31, 0x45170Cu);
    ctx->pc = 0x451708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451704u;
            // 0x451708: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45170Cu; }
        if (ctx->pc != 0x45170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45170Cu; }
        if (ctx->pc != 0x45170Cu) { return; }
    }
    ctx->pc = 0x45170Cu;
label_45170c:
    // 0x45170c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x45170cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_451710:
    // 0x451710: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451710u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451714:
    // 0x451714: 0x27c50890  addiu       $a1, $fp, 0x890
    ctx->pc = 0x451714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2192));
label_451718:
    // 0x451718: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x451718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_45171c:
    // 0x45171c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45171cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451720:
    // 0x451720: 0xc13d9dc  jal         func_4F6770
label_451724:
    if (ctx->pc == 0x451724u) {
        ctx->pc = 0x451724u;
            // 0x451724: 0x27a8014c  addiu       $t0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->pc = 0x451728u;
        goto label_451728;
    }
    ctx->pc = 0x451720u;
    SET_GPR_U32(ctx, 31, 0x451728u);
    ctx->pc = 0x451724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451720u;
            // 0x451724: 0x27a8014c  addiu       $t0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6770u;
    if (runtime->hasFunction(0x4F6770u)) {
        auto targetFn = runtime->lookupFunction(0x4F6770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451728u; }
        if (ctx->pc != 0x451728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6770_0x4f6770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451728u; }
        if (ctx->pc != 0x451728u) { return; }
    }
    ctx->pc = 0x451728u;
label_451728:
    // 0x451728: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x451728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_45172c:
    // 0x45172c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x45172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451730:
    // 0x451730: 0xc7a5014c  lwc1        $f5, 0x14C($sp)
    ctx->pc = 0x451730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_451734:
    // 0x451734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x451734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451738:
    // 0x451738: 0x0  nop
    ctx->pc = 0x451738u;
    // NOP
label_45173c:
    // 0x45173c: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x45173cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451740:
    // 0x451740: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_451744:
    if (ctx->pc == 0x451744u) {
        ctx->pc = 0x451744u;
            // 0x451744: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x451748u;
        goto label_451748;
    }
    ctx->pc = 0x451740u;
    {
        const bool branch_taken_0x451740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451740) {
            ctx->pc = 0x451744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451740u;
            // 0x451744: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4517F8u;
            goto label_4517f8;
        }
    }
    ctx->pc = 0x451748u;
label_451748:
    // 0x451748: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x451748u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_45174c:
    // 0x45174c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x45174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451750:
    // 0x451750: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x451750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451754:
    // 0x451754: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_451758:
    // 0x451758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45175c:
    // 0x45175c: 0x0  nop
    ctx->pc = 0x45175cu;
    // NOP
label_451760:
    // 0x451760: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x451760u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_451764:
    // 0x451764: 0x0  nop
    ctx->pc = 0x451764u;
    // NOP
label_451768:
    // 0x451768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45176c:
    // 0x45176c: 0x0  nop
    ctx->pc = 0x45176cu;
    // NOP
label_451770:
    // 0x451770: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x451770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451774:
    // 0x451774: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_451778:
    if (ctx->pc == 0x451778u) {
        ctx->pc = 0x451778u;
            // 0x451778: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x45177Cu;
        goto label_45177c;
    }
    ctx->pc = 0x451774u;
    {
        const bool branch_taken_0x451774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451774) {
            ctx->pc = 0x451778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451774u;
            // 0x451778: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x45178Cu;
            goto label_45178c;
        }
    }
    ctx->pc = 0x45177Cu;
label_45177c:
    // 0x45177c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45177cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451780:
    // 0x451780: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451784:
    // 0x451784: 0x10000006  b           . + 4 + (0x6 << 2)
label_451788:
    if (ctx->pc == 0x451788u) {
        ctx->pc = 0x45178Cu;
        goto label_45178c;
    }
    ctx->pc = 0x451784u;
    {
        const bool branch_taken_0x451784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451784) {
            ctx->pc = 0x4517A0u;
            goto label_4517a0;
        }
    }
    ctx->pc = 0x45178Cu;
label_45178c:
    // 0x45178c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x45178cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_451790:
    // 0x451790: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451794:
    // 0x451794: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451798:
    // 0x451798: 0x0  nop
    ctx->pc = 0x451798u;
    // NOP
label_45179c:
    // 0x45179c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x45179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4517a0:
    // 0x4517a0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4517a4:
    if (ctx->pc == 0x4517A4u) {
        ctx->pc = 0x4517A4u;
            // 0x4517a4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4517A8u;
        goto label_4517a8;
    }
    ctx->pc = 0x4517A0u;
    {
        const bool branch_taken_0x4517a0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4517a0) {
            ctx->pc = 0x4517A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4517A0u;
            // 0x4517a4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4517B4u;
            goto label_4517b4;
        }
    }
    ctx->pc = 0x4517A8u;
label_4517a8:
    // 0x4517a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4517a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4517ac:
    // 0x4517ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4517b0:
    if (ctx->pc == 0x4517B0u) {
        ctx->pc = 0x4517B0u;
            // 0x4517b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4517B4u;
        goto label_4517b4;
    }
    ctx->pc = 0x4517ACu;
    {
        const bool branch_taken_0x4517ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4517B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4517ACu;
            // 0x4517b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4517ac) {
            ctx->pc = 0x4517CCu;
            goto label_4517cc;
        }
    }
    ctx->pc = 0x4517B4u;
label_4517b4:
    // 0x4517b4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4517b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4517b8:
    // 0x4517b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4517b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4517bc:
    // 0x4517bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4517bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4517c0:
    // 0x4517c0: 0x0  nop
    ctx->pc = 0x4517c0u;
    // NOP
label_4517c4:
    // 0x4517c4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4517c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4517c8:
    // 0x4517c8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4517c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4517cc:
    // 0x4517cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4517d0:
    // 0x4517d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4517d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4517d4:
    // 0x4517d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4517d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4517d8:
    // 0x4517d8: 0x0  nop
    ctx->pc = 0x4517d8u;
    // NOP
label_4517dc:
    // 0x4517dc: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x4517dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_4517e0:
    // 0x4517e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4517e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4517e4:
    // 0x4517e4: 0x0  nop
    ctx->pc = 0x4517e4u;
    // NOP
label_4517e8:
    // 0x4517e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4517e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4517ec:
    // 0x4517ec: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x4517ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4517f0:
    // 0x4517f0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_4517f4:
    if (ctx->pc == 0x4517F4u) {
        ctx->pc = 0x4517F4u;
            // 0x4517f4: 0xe7a0014c  swc1        $f0, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->pc = 0x4517F8u;
        goto label_4517f8;
    }
    ctx->pc = 0x4517F0u;
    {
        const bool branch_taken_0x4517f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4517F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4517F0u;
            // 0x4517f4: 0xe7a0014c  swc1        $f0, 0x14C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4517f0) {
            ctx->pc = 0x451928u;
            goto label_451928;
        }
    }
    ctx->pc = 0x4517F8u;
label_4517f8:
    // 0x4517f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4517f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4517fc:
    // 0x4517fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4517fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451800:
    // 0x451800: 0x0  nop
    ctx->pc = 0x451800u;
    // NOP
label_451804:
    // 0x451804: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x451804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451808:
    // 0x451808: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
label_45180c:
    if (ctx->pc == 0x45180Cu) {
        ctx->pc = 0x45180Cu;
            // 0x45180c: 0xc7ac014c  lwc1        $f12, 0x14C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x451810u;
        goto label_451810;
    }
    ctx->pc = 0x451808u;
    {
        const bool branch_taken_0x451808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451808) {
            ctx->pc = 0x45180Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451808u;
            // 0x45180c: 0xc7ac014c  lwc1        $f12, 0x14C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45192Cu;
            goto label_45192c;
        }
    }
    ctx->pc = 0x451810u;
label_451810:
    // 0x451810: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x451810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_451814:
    // 0x451814: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451818:
    // 0x451818: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x451818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_45181c:
    // 0x45181c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451820:
    // 0x451820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451824:
    // 0x451824: 0x0  nop
    ctx->pc = 0x451824u;
    // NOP
label_451828:
    // 0x451828: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x451828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
label_45182c:
    // 0x45182c: 0x0  nop
    ctx->pc = 0x45182cu;
    // NOP
label_451830:
    // 0x451830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451834:
    // 0x451834: 0x0  nop
    ctx->pc = 0x451834u;
    // NOP
label_451838:
    // 0x451838: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x451838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45183c:
    // 0x45183c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_451840:
    if (ctx->pc == 0x451840u) {
        ctx->pc = 0x451844u;
        goto label_451844;
    }
    ctx->pc = 0x45183Cu;
    {
        const bool branch_taken_0x45183c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45183c) {
            ctx->pc = 0x451848u;
            goto label_451848;
        }
    }
    ctx->pc = 0x451844u;
label_451844:
    // 0x451844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451848:
    // 0x451848: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_45184c:
    if (ctx->pc == 0x45184Cu) {
        ctx->pc = 0x45184Cu;
            // 0x45184c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x451850u;
        goto label_451850;
    }
    ctx->pc = 0x451848u;
    {
        const bool branch_taken_0x451848 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x451848) {
            ctx->pc = 0x45184Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451848u;
            // 0x45184c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45185Cu;
            goto label_45185c;
        }
    }
    ctx->pc = 0x451850u;
label_451850:
    // 0x451850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451854:
    // 0x451854: 0x10000007  b           . + 4 + (0x7 << 2)
label_451858:
    if (ctx->pc == 0x451858u) {
        ctx->pc = 0x451858u;
            // 0x451858: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45185Cu;
        goto label_45185c;
    }
    ctx->pc = 0x451854u;
    {
        const bool branch_taken_0x451854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451854u;
            // 0x451858: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451854) {
            ctx->pc = 0x451874u;
            goto label_451874;
        }
    }
    ctx->pc = 0x45185Cu;
label_45185c:
    // 0x45185c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_451860:
    // 0x451860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451864:
    // 0x451864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451868:
    // 0x451868: 0x0  nop
    ctx->pc = 0x451868u;
    // NOP
label_45186c:
    // 0x45186c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x45186cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_451870:
    // 0x451870: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x451870u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_451874:
    // 0x451874: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x451874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_451878:
    // 0x451878: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x451878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_45187c:
    // 0x45187c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x45187cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_451880:
    // 0x451880: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x451880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451884:
    // 0x451884: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x451884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_451888:
    // 0x451888: 0x0  nop
    ctx->pc = 0x451888u;
    // NOP
label_45188c:
    // 0x45188c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x45188cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_451890:
    // 0x451890: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_451894:
    // 0x451894: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x451894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_451898:
    // 0x451898: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x451898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_45189c:
    // 0x45189c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45189cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4518a0:
    // 0x4518a0: 0x0  nop
    ctx->pc = 0x4518a0u;
    // NOP
label_4518a4:
    // 0x4518a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4518a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4518a8:
    // 0x4518a8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4518ac:
    if (ctx->pc == 0x4518ACu) {
        ctx->pc = 0x4518ACu;
            // 0x4518ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4518B0u;
        goto label_4518b0;
    }
    ctx->pc = 0x4518A8u;
    {
        const bool branch_taken_0x4518a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4518a8) {
            ctx->pc = 0x4518ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4518A8u;
            // 0x4518ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4518C0u;
            goto label_4518c0;
        }
    }
    ctx->pc = 0x4518B0u;
label_4518b0:
    // 0x4518b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4518b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4518b4:
    // 0x4518b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4518b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4518b8:
    // 0x4518b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4518bc:
    if (ctx->pc == 0x4518BCu) {
        ctx->pc = 0x4518C0u;
        goto label_4518c0;
    }
    ctx->pc = 0x4518B8u;
    {
        const bool branch_taken_0x4518b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4518b8) {
            ctx->pc = 0x4518D4u;
            goto label_4518d4;
        }
    }
    ctx->pc = 0x4518C0u;
label_4518c0:
    // 0x4518c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4518c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4518c4:
    // 0x4518c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4518c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4518c8:
    // 0x4518c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4518c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4518cc:
    // 0x4518cc: 0x0  nop
    ctx->pc = 0x4518ccu;
    // NOP
label_4518d0:
    // 0x4518d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4518d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4518d4:
    // 0x4518d4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4518d8:
    if (ctx->pc == 0x4518D8u) {
        ctx->pc = 0x4518D8u;
            // 0x4518d8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4518DCu;
        goto label_4518dc;
    }
    ctx->pc = 0x4518D4u;
    {
        const bool branch_taken_0x4518d4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4518d4) {
            ctx->pc = 0x4518D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4518D4u;
            // 0x4518d8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4518E8u;
            goto label_4518e8;
        }
    }
    ctx->pc = 0x4518DCu;
label_4518dc:
    // 0x4518dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4518dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4518e0:
    // 0x4518e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4518e4:
    if (ctx->pc == 0x4518E4u) {
        ctx->pc = 0x4518E4u;
            // 0x4518e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4518E8u;
        goto label_4518e8;
    }
    ctx->pc = 0x4518E0u;
    {
        const bool branch_taken_0x4518e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4518E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4518E0u;
            // 0x4518e4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4518e0) {
            ctx->pc = 0x451900u;
            goto label_451900;
        }
    }
    ctx->pc = 0x4518E8u;
label_4518e8:
    // 0x4518e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4518e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4518ec:
    // 0x4518ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4518ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4518f0:
    // 0x4518f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4518f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4518f4:
    // 0x4518f4: 0x0  nop
    ctx->pc = 0x4518f4u;
    // NOP
label_4518f8:
    // 0x4518f8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4518f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4518fc:
    // 0x4518fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4518fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_451900:
    // 0x451900: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451904:
    // 0x451904: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x451904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451908:
    // 0x451908: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x451908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45190c:
    // 0x45190c: 0x0  nop
    ctx->pc = 0x45190cu;
    // NOP
label_451910:
    // 0x451910: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x451910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_451914:
    // 0x451914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451918:
    // 0x451918: 0x0  nop
    ctx->pc = 0x451918u;
    // NOP
label_45191c:
    // 0x45191c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x45191cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_451920:
    // 0x451920: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x451920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_451924:
    // 0x451924: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x451924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_451928:
    // 0x451928: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x451928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45192c:
    // 0x45192c: 0xc047740  jal         func_11DD00
label_451930:
    if (ctx->pc == 0x451930u) {
        ctx->pc = 0x451934u;
        goto label_451934;
    }
    ctx->pc = 0x45192Cu;
    SET_GPR_U32(ctx, 31, 0x451934u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451934u; }
        if (ctx->pc != 0x451934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451934u; }
        if (ctx->pc != 0x451934u) { return; }
    }
    ctx->pc = 0x451934u;
label_451934:
    // 0x451934: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x451934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_451938:
    // 0x451938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x451938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45193c:
    // 0x45193c: 0x0  nop
    ctx->pc = 0x45193cu;
    // NOP
label_451940:
    // 0x451940: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x451940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451944:
    // 0x451944: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_451948:
    if (ctx->pc == 0x451948u) {
        ctx->pc = 0x451948u;
            // 0x451948: 0xc7a2014c  lwc1        $f2, 0x14C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x45194Cu;
        goto label_45194c;
    }
    ctx->pc = 0x451944u;
    {
        const bool branch_taken_0x451944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451944) {
            ctx->pc = 0x451948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451944u;
            // 0x451948: 0xc7a2014c  lwc1        $f2, 0x14C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4519ACu;
            goto label_4519ac;
        }
    }
    ctx->pc = 0x45194Cu;
label_45194c:
    // 0x45194c: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x45194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_451950:
    // 0x451950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451954:
    // 0x451954: 0x0  nop
    ctx->pc = 0x451954u;
    // NOP
label_451958:
    // 0x451958: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x451958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45195c:
    // 0x45195c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_451960:
    if (ctx->pc == 0x451960u) {
        ctx->pc = 0x451960u;
            // 0x451960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x451964u;
        goto label_451964;
    }
    ctx->pc = 0x45195Cu;
    {
        const bool branch_taken_0x45195c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x451960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45195Cu;
            // 0x451960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45195c) {
            ctx->pc = 0x451968u;
            goto label_451968;
        }
    }
    ctx->pc = 0x451964u;
label_451964:
    // 0x451964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451968:
    // 0x451968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x451968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45196c:
    // 0x45196c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x45196cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_451970:
    // 0x451970: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x451970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_451974:
    // 0x451974: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x451974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_451978:
    // 0x451978: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x451978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45197c:
    // 0x45197c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_451980:
    // 0x451980: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x451980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_451984:
    // 0x451984: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x451984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_451988:
    // 0x451988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x451988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45198c:
    // 0x45198c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x45198cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_451990:
    // 0x451990: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x451990u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_451994:
    // 0x451994: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x451994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_451998:
    // 0x451998: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x451998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_45199c:
    // 0x45199c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x45199cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4519a0:
    // 0x4519a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4519a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4519a4:
    // 0x4519a4: 0x10000021  b           . + 4 + (0x21 << 2)
label_4519a8:
    if (ctx->pc == 0x4519A8u) {
        ctx->pc = 0x4519A8u;
            // 0x4519a8: 0x34450400  ori         $a1, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x4519ACu;
        goto label_4519ac;
    }
    ctx->pc = 0x4519A4u;
    {
        const bool branch_taken_0x4519a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4519A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4519A4u;
            // 0x4519a8: 0x34450400  ori         $a1, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4519a4) {
            ctx->pc = 0x451A2Cu;
            goto label_451a2c;
        }
    }
    ctx->pc = 0x4519ACu;
label_4519ac:
    // 0x4519ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4519acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4519b0:
    // 0x4519b0: 0x0  nop
    ctx->pc = 0x4519b0u;
    // NOP
label_4519b4:
    // 0x4519b4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4519b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4519b8:
    // 0x4519b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4519bc:
    if (ctx->pc == 0x4519BCu) {
        ctx->pc = 0x4519BCu;
            // 0x4519bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4519C0u;
        goto label_4519c0;
    }
    ctx->pc = 0x4519B8u;
    {
        const bool branch_taken_0x4519b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4519BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4519B8u;
            // 0x4519bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4519b8) {
            ctx->pc = 0x4519C4u;
            goto label_4519c4;
        }
    }
    ctx->pc = 0x4519C0u;
label_4519c0:
    // 0x4519c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4519c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4519c4:
    // 0x4519c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4519c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4519c8:
    // 0x4519c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4519c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4519cc:
    // 0x4519cc: 0x22023  negu        $a0, $v0
    ctx->pc = 0x4519ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4519d0:
    // 0x4519d0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4519d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4519d4:
    // 0x4519d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x4519d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_4519d8:
    // 0x4519d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4519d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4519dc:
    // 0x4519dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4519dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4519e0:
    // 0x4519e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4519e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4519e4:
    // 0x4519e4: 0x0  nop
    ctx->pc = 0x4519e4u;
    // NOP
label_4519e8:
    // 0x4519e8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4519e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4519ec:
    // 0x4519ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4519ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4519f0:
    // 0x4519f0: 0x0  nop
    ctx->pc = 0x4519f0u;
    // NOP
label_4519f4:
    // 0x4519f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4519f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4519f8:
    // 0x4519f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4519f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4519fc:
    // 0x4519fc: 0x0  nop
    ctx->pc = 0x4519fcu;
    // NOP
label_451a00:
    // 0x451a00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x451a00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_451a04:
    // 0x451a04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x451a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_451a08:
    // 0x451a08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451a0c:
    // 0x451a0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x451a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_451a10:
    // 0x451a10: 0x0  nop
    ctx->pc = 0x451a10u;
    // NOP
label_451a14:
    // 0x451a14: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x451a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_451a18:
    // 0x451a18: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x451a18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_451a1c:
    // 0x451a1c: 0x4102a  slt         $v0, $zero, $a0
    ctx->pc = 0x451a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_451a20:
    // 0x451a20: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x451a20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_451a24:
    // 0x451a24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x451a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_451a28:
    // 0x451a28: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x451a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451a2c:
    // 0x451a2c: 0xa2a40004  sb          $a0, 0x4($s5)
    ctx->pc = 0x451a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 4));
label_451a30:
    // 0x451a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451a34:
    // 0x451a34: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x451a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_451a38:
    // 0x451a38: 0xa02027  not         $a0, $a1
    ctx->pc = 0x451a38u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_451a3c:
    // 0x451a3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x451a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_451a40:
    // 0x451a40: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x451a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_451a44:
    // 0x451a44: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x451a44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_451a48:
    // 0x451a48: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x451a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_451a4c:
    // 0x451a4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x451a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_451a50:
    // 0x451a50: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x451a50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_451a54:
    // 0x451a54: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x451a54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_451a58:
    // 0x451a58: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x451a58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_451a5c:
    // 0x451a5c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x451a5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_451a60:
    // 0x451a60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x451a60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_451a64:
    // 0x451a64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x451a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_451a68:
    // 0x451a68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x451a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_451a6c:
    // 0x451a6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x451a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_451a70:
    // 0x451a70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x451a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_451a74:
    // 0x451a74: 0x3e00008  jr          $ra
label_451a78:
    if (ctx->pc == 0x451A78u) {
        ctx->pc = 0x451A78u;
            // 0x451a78: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x451A7Cu;
        goto label_451a7c;
    }
    ctx->pc = 0x451A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451A74u;
            // 0x451a78: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x451A7Cu;
label_451a7c:
    // 0x451a7c: 0x0  nop
    ctx->pc = 0x451a7cu;
    // NOP
label_451a80:
    // 0x451a80: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x451a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_451a84:
    // 0x451a84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x451a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_451a88:
    // 0x451a88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x451a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_451a8c:
    // 0x451a8c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x451a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_451a90:
    // 0x451a90: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x451a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_451a94:
    // 0x451a94: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x451a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_451a98:
    // 0x451a98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x451a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_451a9c:
    // 0x451a9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x451a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_451aa0:
    // 0x451aa0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x451aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_451aa4:
    // 0x451aa4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x451aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_451aa8:
    // 0x451aa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x451aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_451aac:
    // 0x451aac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x451aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_451ab0:
    // 0x451ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x451ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_451ab4:
    // 0x451ab4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x451ab4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_451ab8:
    // 0x451ab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x451ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451abc:
    // 0x451abc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x451abcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_451ac0:
    // 0x451ac0: 0x8c563ff0  lw          $s6, 0x3FF0($v0)
    ctx->pc = 0x451ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
label_451ac4:
    // 0x451ac4: 0x8c9e0044  lw          $fp, 0x44($a0)
    ctx->pc = 0x451ac4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_451ac8:
    // 0x451ac8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x451ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_451acc:
    // 0x451acc: 0x8ed700c8  lw          $s7, 0xC8($s6)
    ctx->pc = 0x451accu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
label_451ad0:
    // 0x451ad0: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x451ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_451ad4:
    // 0x451ad4: 0x8e620cb4  lw          $v0, 0xCB4($s3)
    ctx->pc = 0x451ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3252)));
label_451ad8:
    // 0x451ad8: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x451ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_451adc:
    // 0x451adc: 0x102000aa  beqz        $at, . + 4 + (0xAA << 2)
label_451ae0:
    if (ctx->pc == 0x451AE0u) {
        ctx->pc = 0x451AE0u;
            // 0x451ae0: 0x27d102c0  addiu       $s1, $fp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
        ctx->pc = 0x451AE4u;
        goto label_451ae4;
    }
    ctx->pc = 0x451ADCu;
    {
        const bool branch_taken_0x451adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x451AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451ADCu;
            // 0x451ae0: 0x27d102c0  addiu       $s1, $fp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451adc) {
            ctx->pc = 0x451D88u;
            goto label_451d88;
        }
    }
    ctx->pc = 0x451AE4u;
label_451ae4:
    // 0x451ae4: 0x96450096  lhu         $a1, 0x96($s2)
    ctx->pc = 0x451ae4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
label_451ae8:
    // 0x451ae8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x451ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_451aec:
    // 0x451aec: 0x50a4001b  beql        $a1, $a0, . + 4 + (0x1B << 2)
label_451af0:
    if (ctx->pc == 0x451AF0u) {
        ctx->pc = 0x451AF0u;
            // 0x451af0: 0x8fc20da0  lw          $v0, 0xDA0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3488)));
        ctx->pc = 0x451AF4u;
        goto label_451af4;
    }
    ctx->pc = 0x451AECu;
    {
        const bool branch_taken_0x451aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x451aec) {
            ctx->pc = 0x451AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451AECu;
            // 0x451af0: 0x8fc20da0  lw          $v0, 0xDA0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451B5Cu;
            goto label_451b5c;
        }
    }
    ctx->pc = 0x451AF4u;
label_451af4:
    // 0x451af4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x451af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_451af8:
    // 0x451af8: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_451afc:
    if (ctx->pc == 0x451AFCu) {
        ctx->pc = 0x451AFCu;
            // 0x451afc: 0x8e430044  lw          $v1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x451B00u;
        goto label_451b00;
    }
    ctx->pc = 0x451AF8u;
    {
        const bool branch_taken_0x451af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x451af8) {
            ctx->pc = 0x451AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451AF8u;
            // 0x451afc: 0x8e430044  lw          $v1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451B3Cu;
            goto label_451b3c;
        }
    }
    ctx->pc = 0x451B00u;
label_451b00:
    // 0x451b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x451b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_451b04:
    // 0x451b04: 0x50a201ce  beql        $a1, $v0, . + 4 + (0x1CE << 2)
label_451b08:
    if (ctx->pc == 0x451B08u) {
        ctx->pc = 0x451B08u;
            // 0x451b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451B0Cu;
        goto label_451b0c;
    }
    ctx->pc = 0x451B04u;
    {
        const bool branch_taken_0x451b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x451b04) {
            ctx->pc = 0x451B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451B04u;
            // 0x451b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452240u;
            goto label_452240;
        }
    }
    ctx->pc = 0x451B0Cu;
label_451b0c:
    // 0x451b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451b10:
    // 0x451b10: 0x10a2009a  beq         $a1, $v0, . + 4 + (0x9A << 2)
label_451b14:
    if (ctx->pc == 0x451B14u) {
        ctx->pc = 0x451B18u;
        goto label_451b18;
    }
    ctx->pc = 0x451B10u;
    {
        const bool branch_taken_0x451b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x451b10) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B18u;
label_451b18:
    // 0x451b18: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_451b1c:
    if (ctx->pc == 0x451B1Cu) {
        ctx->pc = 0x451B1Cu;
            // 0x451b1c: 0x8fc20d78  lw          $v0, 0xD78($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3448)));
        ctx->pc = 0x451B20u;
        goto label_451b20;
    }
    ctx->pc = 0x451B18u;
    {
        const bool branch_taken_0x451b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x451b18) {
            ctx->pc = 0x451B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451B18u;
            // 0x451b1c: 0x8fc20d78  lw          $v0, 0xD78($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451B28u;
            goto label_451b28;
        }
    }
    ctx->pc = 0x451B20u;
label_451b20:
    // 0x451b20: 0x10000096  b           . + 4 + (0x96 << 2)
label_451b24:
    if (ctx->pc == 0x451B24u) {
        ctx->pc = 0x451B28u;
        goto label_451b28;
    }
    ctx->pc = 0x451B20u;
    {
        const bool branch_taken_0x451b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451b20) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B28u;
label_451b28:
    // 0x451b28: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x451b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_451b2c:
    // 0x451b2c: 0x58400093  blezl       $v0, . + 4 + (0x93 << 2)
label_451b30:
    if (ctx->pc == 0x451B30u) {
        ctx->pc = 0x451B30u;
            // 0x451b30: 0xa6440096  sh          $a0, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x451B34u;
        goto label_451b34;
    }
    ctx->pc = 0x451B2Cu;
    {
        const bool branch_taken_0x451b2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x451b2c) {
            ctx->pc = 0x451B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451B2Cu;
            // 0x451b30: 0xa6440096  sh          $a0, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B34u;
label_451b34:
    // 0x451b34: 0x10000091  b           . + 4 + (0x91 << 2)
label_451b38:
    if (ctx->pc == 0x451B38u) {
        ctx->pc = 0x451B38u;
            // 0x451b38: 0xa6430096  sh          $v1, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x451B3Cu;
        goto label_451b3c;
    }
    ctx->pc = 0x451B34u;
    {
        const bool branch_taken_0x451b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451B34u;
            // 0x451b38: 0xa6430096  sh          $v1, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451b34) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B3Cu;
label_451b3c:
    // 0x451b3c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x451b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_451b40:
    // 0x451b40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x451b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_451b44:
    // 0x451b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x451b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451b48:
    // 0x451b48: 0x8c640d70  lw          $a0, 0xD70($v1)
    ctx->pc = 0x451b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_451b4c:
    // 0x451b4c: 0xc0bdf9c  jal         func_2F7E70
label_451b50:
    if (ctx->pc == 0x451B50u) {
        ctx->pc = 0x451B50u;
            // 0x451b50: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x451B54u;
        goto label_451b54;
    }
    ctx->pc = 0x451B4Cu;
    SET_GPR_U32(ctx, 31, 0x451B54u);
    ctx->pc = 0x451B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451B4Cu;
            // 0x451b50: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451B54u; }
        if (ctx->pc != 0x451B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451B54u; }
        if (ctx->pc != 0x451B54u) { return; }
    }
    ctx->pc = 0x451B54u;
label_451b54:
    // 0x451b54: 0x10000089  b           . + 4 + (0x89 << 2)
label_451b58:
    if (ctx->pc == 0x451B58u) {
        ctx->pc = 0x451B5Cu;
        goto label_451b5c;
    }
    ctx->pc = 0x451B54u;
    {
        const bool branch_taken_0x451b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451b54) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B5Cu;
label_451b5c:
    // 0x451b5c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x451b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_451b60:
    // 0x451b60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_451b64:
    if (ctx->pc == 0x451B64u) {
        ctx->pc = 0x451B64u;
            // 0x451b64: 0x8fc20d98  lw          $v0, 0xD98($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3480)));
        ctx->pc = 0x451B68u;
        goto label_451b68;
    }
    ctx->pc = 0x451B60u;
    {
        const bool branch_taken_0x451b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451b60) {
            ctx->pc = 0x451B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451B60u;
            // 0x451b64: 0x8fc20d98  lw          $v0, 0xD98($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451B74u;
            goto label_451b74;
        }
    }
    ctx->pc = 0x451B68u;
label_451b68:
    // 0x451b68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x451b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_451b6c:
    // 0x451b6c: 0x10000083  b           . + 4 + (0x83 << 2)
label_451b70:
    if (ctx->pc == 0x451B70u) {
        ctx->pc = 0x451B70u;
            // 0x451b70: 0xa6420096  sh          $v0, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x451B74u;
        goto label_451b74;
    }
    ctx->pc = 0x451B6Cu;
    {
        const bool branch_taken_0x451b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451B6Cu;
            // 0x451b70: 0xa6420096  sh          $v0, 0x96($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451b6c) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451B74u;
label_451b74:
    // 0x451b74: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x451b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_451b78:
    // 0x451b78: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
label_451b7c:
    if (ctx->pc == 0x451B7Cu) {
        ctx->pc = 0x451B7Cu;
            // 0x451b7c: 0x8e640968  lw          $a0, 0x968($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
        ctx->pc = 0x451B80u;
        goto label_451b80;
    }
    ctx->pc = 0x451B78u;
    {
        const bool branch_taken_0x451b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x451b78) {
            ctx->pc = 0x451B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451B78u;
            // 0x451b7c: 0x8e640968  lw          $a0, 0x968($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451BB0u;
            goto label_451bb0;
        }
    }
    ctx->pc = 0x451B80u;
label_451b80:
    // 0x451b80: 0x8e640968  lw          $a0, 0x968($s3)
    ctx->pc = 0x451b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_451b84:
    // 0x451b84: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x451b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_451b88:
    // 0x451b88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x451b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_451b8c:
    // 0x451b8c: 0x2463da77  addiu       $v1, $v1, -0x2589
    ctx->pc = 0x451b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957687));
label_451b90:
    // 0x451b90: 0x8c420d98  lw          $v0, 0xD98($v0)
    ctx->pc = 0x451b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
label_451b94:
    // 0x451b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x451b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_451b98:
    // 0x451b98: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x451b98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_451b9c:
    // 0x451b9c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x451b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_451ba0:
    // 0x451ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x451ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_451ba4:
    // 0x451ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x451ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_451ba8:
    // 0x451ba8: 0x1000000e  b           . + 4 + (0xE << 2)
label_451bac:
    if (ctx->pc == 0x451BACu) {
        ctx->pc = 0x451BACu;
            // 0x451bac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x451BB0u;
        goto label_451bb0;
    }
    ctx->pc = 0x451BA8u;
    {
        const bool branch_taken_0x451ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451BA8u;
            // 0x451bac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451ba8) {
            ctx->pc = 0x451BE4u;
            goto label_451be4;
        }
    }
    ctx->pc = 0x451BB0u;
label_451bb0:
    // 0x451bb0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x451bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_451bb4:
    // 0x451bb4: 0x2463da77  addiu       $v1, $v1, -0x2589
    ctx->pc = 0x451bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957687));
label_451bb8:
    // 0x451bb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x451bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_451bbc:
    // 0x451bbc: 0x8c420d98  lw          $v0, 0xD98($v0)
    ctx->pc = 0x451bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
label_451bc0:
    // 0x451bc0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x451bc0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_451bc4:
    // 0x451bc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x451bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_451bc8:
    // 0x451bc8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x451bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_451bcc:
    // 0x451bcc: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x451bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_451bd0:
    // 0x451bd0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x451bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_451bd4:
    // 0x451bd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x451bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_451bd8:
    // 0x451bd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x451bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_451bdc:
    // 0x451bdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x451bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_451be0:
    // 0x451be0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x451be0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_451be4:
    // 0x451be4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x451be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_451be8:
    // 0x451be8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x451be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_451bec:
    // 0x451bec: 0xc04cc90  jal         func_133240
label_451bf0:
    if (ctx->pc == 0x451BF0u) {
        ctx->pc = 0x451BF0u;
            // 0x451bf0: 0x27c602c0  addiu       $a2, $fp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
        ctx->pc = 0x451BF4u;
        goto label_451bf4;
    }
    ctx->pc = 0x451BECu;
    SET_GPR_U32(ctx, 31, 0x451BF4u);
    ctx->pc = 0x451BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451BECu;
            // 0x451bf0: 0x27c602c0  addiu       $a2, $fp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451BF4u; }
        if (ctx->pc != 0x451BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451BF4u; }
        if (ctx->pc != 0x451BF4u) { return; }
    }
    ctx->pc = 0x451BF4u;
label_451bf4:
    // 0x451bf4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x451bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_451bf8:
    // 0x451bf8: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x451bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_451bfc:
    // 0x451bfc: 0xc04cc44  jal         func_133110
label_451c00:
    if (ctx->pc == 0x451C00u) {
        ctx->pc = 0x451C00u;
            // 0x451c00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451C04u;
        goto label_451c04;
    }
    ctx->pc = 0x451BFCu;
    SET_GPR_U32(ctx, 31, 0x451C04u);
    ctx->pc = 0x451C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451BFCu;
            // 0x451c00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C04u; }
        if (ctx->pc != 0x451C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C04u; }
        if (ctx->pc != 0x451C04u) { return; }
    }
    ctx->pc = 0x451C04u;
label_451c04:
    // 0x451c04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x451c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_451c08:
    // 0x451c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x451c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_451c0c:
    // 0x451c0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x451c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_451c10:
    // 0x451c10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x451c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_451c14:
    // 0x451c14: 0xc04cbd8  jal         func_132F60
label_451c18:
    if (ctx->pc == 0x451C18u) {
        ctx->pc = 0x451C18u;
            // 0x451c18: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x451C1Cu;
        goto label_451c1c;
    }
    ctx->pc = 0x451C14u;
    SET_GPR_U32(ctx, 31, 0x451C1Cu);
    ctx->pc = 0x451C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C14u;
            // 0x451c18: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C1Cu; }
        if (ctx->pc != 0x451C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C1Cu; }
        if (ctx->pc != 0x451C1Cu) { return; }
    }
    ctx->pc = 0x451C1Cu;
label_451c1c:
    // 0x451c1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x451c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_451c20:
    // 0x451c20: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x451c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_451c24:
    // 0x451c24: 0xc04cbf0  jal         func_132FC0
label_451c28:
    if (ctx->pc == 0x451C28u) {
        ctx->pc = 0x451C28u;
            // 0x451c28: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x451C2Cu;
        goto label_451c2c;
    }
    ctx->pc = 0x451C24u;
    SET_GPR_U32(ctx, 31, 0x451C2Cu);
    ctx->pc = 0x451C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C24u;
            // 0x451c28: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C2Cu; }
        if (ctx->pc != 0x451C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C2Cu; }
        if (ctx->pc != 0x451C2Cu) { return; }
    }
    ctx->pc = 0x451C2Cu;
label_451c2c:
    // 0x451c2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x451c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_451c30:
    // 0x451c30: 0xc04cc44  jal         func_133110
label_451c34:
    if (ctx->pc == 0x451C34u) {
        ctx->pc = 0x451C34u;
            // 0x451c34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451C38u;
        goto label_451c38;
    }
    ctx->pc = 0x451C30u;
    SET_GPR_U32(ctx, 31, 0x451C38u);
    ctx->pc = 0x451C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C30u;
            // 0x451c34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C38u; }
        if (ctx->pc != 0x451C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C38u; }
        if (ctx->pc != 0x451C38u) { return; }
    }
    ctx->pc = 0x451C38u;
label_451c38:
    // 0x451c38: 0xc04cc2c  jal         func_1330B0
label_451c3c:
    if (ctx->pc == 0x451C3Cu) {
        ctx->pc = 0x451C3Cu;
            // 0x451c3c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x451C40u;
        goto label_451c40;
    }
    ctx->pc = 0x451C38u;
    SET_GPR_U32(ctx, 31, 0x451C40u);
    ctx->pc = 0x451C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C38u;
            // 0x451c3c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C40u; }
        if (ctx->pc != 0x451C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C40u; }
        if (ctx->pc != 0x451C40u) { return; }
    }
    ctx->pc = 0x451C40u;
label_451c40:
    // 0x451c40: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x451c40u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_451c44:
    // 0x451c44: 0x27c502c0  addiu       $a1, $fp, 0x2C0
    ctx->pc = 0x451c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
label_451c48:
    // 0x451c48: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x451c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_451c4c:
    // 0x451c4c: 0xc04cc90  jal         func_133240
label_451c50:
    if (ctx->pc == 0x451C50u) {
        ctx->pc = 0x451C50u;
            // 0x451c50: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x451C54u;
        goto label_451c54;
    }
    ctx->pc = 0x451C4Cu;
    SET_GPR_U32(ctx, 31, 0x451C54u);
    ctx->pc = 0x451C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C4Cu;
            // 0x451c50: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C54u; }
        if (ctx->pc != 0x451C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C54u; }
        if (ctx->pc != 0x451C54u) { return; }
    }
    ctx->pc = 0x451C54u;
label_451c54:
    // 0x451c54: 0xc04cc2c  jal         func_1330B0
label_451c58:
    if (ctx->pc == 0x451C58u) {
        ctx->pc = 0x451C58u;
            // 0x451c58: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x451C5Cu;
        goto label_451c5c;
    }
    ctx->pc = 0x451C54u;
    SET_GPR_U32(ctx, 31, 0x451C5Cu);
    ctx->pc = 0x451C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C54u;
            // 0x451c58: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C5Cu; }
        if (ctx->pc != 0x451C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C5Cu; }
        if (ctx->pc != 0x451C5Cu) { return; }
    }
    ctx->pc = 0x451C5Cu;
label_451c5c:
    // 0x451c5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451c5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451c60:
    // 0x451c60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x451c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_451c64:
    // 0x451c64: 0xc04cc08  jal         func_133020
label_451c68:
    if (ctx->pc == 0x451C68u) {
        ctx->pc = 0x451C68u;
            // 0x451c68: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x451C6Cu;
        goto label_451c6c;
    }
    ctx->pc = 0x451C64u;
    SET_GPR_U32(ctx, 31, 0x451C6Cu);
    ctx->pc = 0x451C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451C64u;
            // 0x451c68: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C6Cu; }
        if (ctx->pc != 0x451C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451C6Cu; }
        if (ctx->pc != 0x451C6Cu) { return; }
    }
    ctx->pc = 0x451C6Cu;
label_451c6c:
    // 0x451c6c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x451c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_451c70:
    // 0x451c70: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x451c70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
label_451c74:
    // 0x451c74: 0x9243009a  lbu         $v1, 0x9A($s2)
    ctx->pc = 0x451c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 154)));
label_451c78:
    // 0x451c78: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x451c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_451c7c:
    // 0x451c7c: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x451c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_451c80:
    // 0x451c80: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x451c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_451c84:
    // 0x451c84: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x451c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_451c88:
    // 0x451c88: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x451c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
label_451c8c:
    // 0x451c8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x451c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_451c90:
    // 0x451c90: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x451c90u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
label_451c94:
    // 0x451c94: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x451c94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_451c98:
    // 0x451c98: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x451c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_451c9c:
    // 0x451c9c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x451c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_451ca0:
    // 0x451ca0: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x451ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_451ca4:
    // 0x451ca4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x451ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_451ca8:
    // 0x451ca8: 0x46000244  c1          0x244
    ctx->pc = 0x451ca8u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
label_451cac:
    // 0x451cac: 0xc668081c  lwc1        $f8, 0x81C($s3)
    ctx->pc = 0x451cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_451cb0:
    // 0x451cb0: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x451cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_451cb4:
    // 0x451cb4: 0xc6670820  lwc1        $f7, 0x820($s3)
    ctx->pc = 0x451cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_451cb8:
    // 0x451cb8: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x451cb8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_451cbc:
    // 0x451cbc: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x451cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_451cc0:
    // 0x451cc0: 0x46063983  div.s       $f6, $f7, $f6
    ctx->pc = 0x451cc0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[6] = ctx->f[7] / ctx->f[6];
label_451cc4:
    // 0x451cc4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x451cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_451cc8:
    // 0x451cc8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x451cc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_451ccc:
    // 0x451ccc: 0x46064180  add.s       $f6, $f8, $f6
    ctx->pc = 0x451cccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
label_451cd0:
    // 0x451cd0: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x451cd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_451cd4:
    // 0x451cd4: 0x0  nop
    ctx->pc = 0x451cd4u;
    // NOP
label_451cd8:
    // 0x451cd8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x451cd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_451cdc:
    // 0x451cdc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x451cdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_451ce0:
    // 0x451ce0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x451ce0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
label_451ce4:
    // 0x451ce4: 0x460310c0  add.s       $f3, $f2, $f3
    ctx->pc = 0x451ce4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_451ce8:
    // 0x451ce8: 0x46052081  sub.s       $f2, $f4, $f5
    ctx->pc = 0x451ce8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_451cec:
    // 0x451cec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x451cecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_451cf0:
    // 0x451cf0: 0xc4400de4  lwc1        $f0, 0xDE4($v0)
    ctx->pc = 0x451cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_451cf4:
    // 0x451cf4: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x451cf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_451cf8:
    // 0x451cf8: 0x4600101a  mula.s      $f2, $f0
    ctx->pc = 0x451cf8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_451cfc:
    // 0x451cfc: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x451cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_451d00:
    // 0x451d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x451d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451d04:
    // 0x451d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451d08:
    // 0x451d08: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x451d08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_451d0c:
    // 0x451d0c: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x451d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_451d10:
    // 0x451d10: 0x46014836  c.le.s      $f9, $f1
    ctx->pc = 0x451d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451d14:
    // 0x451d14: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_451d18:
    if (ctx->pc == 0x451D18u) {
        ctx->pc = 0x451D18u;
            // 0x451d18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x451D1Cu;
        goto label_451d1c;
    }
    ctx->pc = 0x451D14u;
    {
        const bool branch_taken_0x451d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451d14) {
            ctx->pc = 0x451D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451D14u;
            // 0x451d18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451D2Cu;
            goto label_451d2c;
        }
    }
    ctx->pc = 0x451D1Cu;
label_451d1c:
    // 0x451d1c: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x451d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451d20:
    // 0x451d20: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_451d24:
    if (ctx->pc == 0x451D24u) {
        ctx->pc = 0x451D24u;
            // 0x451d24: 0x92420167  lbu         $v0, 0x167($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 359)));
        ctx->pc = 0x451D28u;
        goto label_451d28;
    }
    ctx->pc = 0x451D20u;
    {
        const bool branch_taken_0x451d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451d20) {
            ctx->pc = 0x451D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451D20u;
            // 0x451d24: 0x92420167  lbu         $v0, 0x167($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 359)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451D58u;
            goto label_451d58;
        }
    }
    ctx->pc = 0x451D28u;
label_451d28:
    // 0x451d28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x451d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451d2c:
    // 0x451d2c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x451d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_451d30:
    // 0x451d30: 0xa2440005  sb          $a0, 0x5($s2)
    ctx->pc = 0x451d30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 4));
label_451d34:
    // 0x451d34: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x451d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_451d38:
    // 0x451d38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x451d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_451d3c:
    // 0x451d3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x451d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_451d40:
    // 0x451d40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x451d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_451d44:
    // 0x451d44: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x451d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_451d48:
    // 0x451d48: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x451d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_451d4c:
    // 0x451d4c: 0xe4400de8  swc1        $f0, 0xDE8($v0)
    ctx->pc = 0x451d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3560), bits); }
label_451d50:
    // 0x451d50: 0x1000000a  b           . + 4 + (0xA << 2)
label_451d54:
    if (ctx->pc == 0x451D54u) {
        ctx->pc = 0x451D54u;
            // 0x451d54: 0xa2440167  sb          $a0, 0x167($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 359), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x451D58u;
        goto label_451d58;
    }
    ctx->pc = 0x451D50u;
    {
        const bool branch_taken_0x451d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451D50u;
            // 0x451d54: 0xa2440167  sb          $a0, 0x167($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 359), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451d50) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451D58u;
label_451d58:
    // 0x451d58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_451d5c:
    if (ctx->pc == 0x451D5Cu) {
        ctx->pc = 0x451D60u;
        goto label_451d60;
    }
    ctx->pc = 0x451D58u;
    {
        const bool branch_taken_0x451d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x451d58) {
            ctx->pc = 0x451D7Cu;
            goto label_451d7c;
        }
    }
    ctx->pc = 0x451D60u;
label_451d60:
    // 0x451d60: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x451d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_451d64:
    // 0x451d64: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x451d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_451d68:
    // 0x451d68: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x451d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
label_451d6c:
    // 0x451d6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x451d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_451d70:
    // 0x451d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x451d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_451d74:
    // 0x451d74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x451d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_451d78:
    // 0x451d78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x451d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_451d7c:
    // 0x451d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451d80:
    // 0x451d80: 0x1000012f  b           . + 4 + (0x12F << 2)
label_451d84:
    if (ctx->pc == 0x451D84u) {
        ctx->pc = 0x451D88u;
        goto label_451d88;
    }
    ctx->pc = 0x451D80u;
    {
        const bool branch_taken_0x451d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451d80) {
            ctx->pc = 0x452240u;
            goto label_452240;
        }
    }
    ctx->pc = 0x451D88u;
label_451d88:
    // 0x451d88: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x451d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_451d8c:
    // 0x451d8c: 0xc077fb0  jal         func_1DFEC0
label_451d90:
    if (ctx->pc == 0x451D90u) {
        ctx->pc = 0x451D90u;
            // 0x451d90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x451D94u;
        goto label_451d94;
    }
    ctx->pc = 0x451D8Cu;
    SET_GPR_U32(ctx, 31, 0x451D94u);
    ctx->pc = 0x451D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451D8Cu;
            // 0x451d90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451D94u; }
        if (ctx->pc != 0x451D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451D94u; }
        if (ctx->pc != 0x451D94u) { return; }
    }
    ctx->pc = 0x451D94u;
label_451d94:
    // 0x451d94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x451d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451d98:
    // 0x451d98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x451d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451d9c:
    // 0x451d9c: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x451d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_451da0:
    // 0x451da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451da4:
    // 0x451da4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x451da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_451da8:
    // 0x451da8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x451da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_451dac:
    // 0x451dac: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x451dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_451db0:
    // 0x451db0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_451db4:
    if (ctx->pc == 0x451DB4u) {
        ctx->pc = 0x451DB8u;
        goto label_451db8;
    }
    ctx->pc = 0x451DB0u;
    {
        const bool branch_taken_0x451db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x451db0) {
            ctx->pc = 0x451DF8u;
            goto label_451df8;
        }
    }
    ctx->pc = 0x451DB8u;
label_451db8:
    // 0x451db8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_451dbc:
    if (ctx->pc == 0x451DBCu) {
        ctx->pc = 0x451DBCu;
            // 0x451dbc: 0x24940010  addiu       $s4, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x451DC0u;
        goto label_451dc0;
    }
    ctx->pc = 0x451DB8u;
    {
        const bool branch_taken_0x451db8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x451DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451DB8u;
            // 0x451dbc: 0x24940010  addiu       $s4, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451db8) {
            ctx->pc = 0x451DD8u;
            goto label_451dd8;
        }
    }
    ctx->pc = 0x451DC0u;
label_451dc0:
    // 0x451dc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x451dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_451dc4:
    // 0x451dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x451dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451dc8:
    // 0x451dc8: 0xc04cc1c  jal         func_133070
label_451dcc:
    if (ctx->pc == 0x451DCCu) {
        ctx->pc = 0x451DCCu;
            // 0x451dcc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451DD0u;
        goto label_451dd0;
    }
    ctx->pc = 0x451DC8u;
    SET_GPR_U32(ctx, 31, 0x451DD0u);
    ctx->pc = 0x451DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451DC8u;
            // 0x451dcc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451DD0u; }
        if (ctx->pc != 0x451DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451DD0u; }
        if (ctx->pc != 0x451DD0u) { return; }
    }
    ctx->pc = 0x451DD0u;
label_451dd0:
    // 0x451dd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_451dd4:
    if (ctx->pc == 0x451DD4u) {
        ctx->pc = 0x451DD4u;
            // 0x451dd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x451DD8u;
        goto label_451dd8;
    }
    ctx->pc = 0x451DD0u;
    {
        const bool branch_taken_0x451dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451DD0u;
            // 0x451dd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x451dd0) {
            ctx->pc = 0x451DF8u;
            goto label_451df8;
        }
    }
    ctx->pc = 0x451DD8u;
label_451dd8:
    // 0x451dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x451dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451ddc:
    // 0x451ddc: 0xc04cc1c  jal         func_133070
label_451de0:
    if (ctx->pc == 0x451DE0u) {
        ctx->pc = 0x451DE0u;
            // 0x451de0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451DE4u;
        goto label_451de4;
    }
    ctx->pc = 0x451DDCu;
    SET_GPR_U32(ctx, 31, 0x451DE4u);
    ctx->pc = 0x451DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451DDCu;
            // 0x451de0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451DE4u; }
        if (ctx->pc != 0x451DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451DE4u; }
        if (ctx->pc != 0x451DE4u) { return; }
    }
    ctx->pc = 0x451DE4u;
label_451de4:
    // 0x451de4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x451de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451de8:
    // 0x451de8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_451dec:
    if (ctx->pc == 0x451DECu) {
        ctx->pc = 0x451DF0u;
        goto label_451df0;
    }
    ctx->pc = 0x451DE8u;
    {
        const bool branch_taken_0x451de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451de8) {
            ctx->pc = 0x451DF8u;
            goto label_451df8;
        }
    }
    ctx->pc = 0x451DF0u;
label_451df0:
    // 0x451df0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x451df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_451df4:
    // 0x451df4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451df4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451df8:
    // 0x451df8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x451df8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_451dfc:
    // 0x451dfc: 0x2b7102b  sltu        $v0, $s5, $s7
    ctx->pc = 0x451dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_451e00:
    // 0x451e00: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_451e04:
    if (ctx->pc == 0x451E04u) {
        ctx->pc = 0x451E04u;
            // 0x451e04: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x451E08u;
        goto label_451e08;
    }
    ctx->pc = 0x451E00u;
    {
        const bool branch_taken_0x451e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x451E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451E00u;
            // 0x451e04: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451e00) {
            ctx->pc = 0x451D9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_451d9c;
        }
    }
    ctx->pc = 0x451E08u;
label_451e08:
    // 0x451e08: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
label_451e0c:
    if (ctx->pc == 0x451E0Cu) {
        ctx->pc = 0x451E10u;
        goto label_451e10;
    }
    ctx->pc = 0x451E08u;
    {
        const bool branch_taken_0x451e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x451e08) {
            ctx->pc = 0x451E88u;
            goto label_451e88;
        }
    }
    ctx->pc = 0x451E10u;
label_451e10:
    // 0x451e10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x451e10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451e14:
    // 0x451e14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x451e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451e18:
    // 0x451e18: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x451e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_451e1c:
    // 0x451e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451e20:
    // 0x451e20: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x451e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_451e24:
    // 0x451e24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x451e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_451e28:
    // 0x451e28: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x451e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_451e2c:
    // 0x451e2c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_451e30:
    if (ctx->pc == 0x451E30u) {
        ctx->pc = 0x451E34u;
        goto label_451e34;
    }
    ctx->pc = 0x451E2Cu;
    {
        const bool branch_taken_0x451e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x451e2c) {
            ctx->pc = 0x451E78u;
            goto label_451e78;
        }
    }
    ctx->pc = 0x451E34u;
label_451e34:
    // 0x451e34: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_451e38:
    if (ctx->pc == 0x451E38u) {
        ctx->pc = 0x451E38u;
            // 0x451e38: 0x24950010  addiu       $s5, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x451E3Cu;
        goto label_451e3c;
    }
    ctx->pc = 0x451E34u;
    {
        const bool branch_taken_0x451e34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x451E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451E34u;
            // 0x451e38: 0x24950010  addiu       $s5, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451e34) {
            ctx->pc = 0x451E58u;
            goto label_451e58;
        }
    }
    ctx->pc = 0x451E3Cu;
label_451e3c:
    // 0x451e3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x451e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_451e40:
    // 0x451e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x451e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451e44:
    // 0x451e44: 0xc04cc1c  jal         func_133070
label_451e48:
    if (ctx->pc == 0x451E48u) {
        ctx->pc = 0x451E48u;
            // 0x451e48: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451E4Cu;
        goto label_451e4c;
    }
    ctx->pc = 0x451E44u;
    SET_GPR_U32(ctx, 31, 0x451E4Cu);
    ctx->pc = 0x451E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451E44u;
            // 0x451e48: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E4Cu; }
        if (ctx->pc != 0x451E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E4Cu; }
        if (ctx->pc != 0x451E4Cu) { return; }
    }
    ctx->pc = 0x451E4Cu;
label_451e4c:
    // 0x451e4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_451e50:
    if (ctx->pc == 0x451E50u) {
        ctx->pc = 0x451E50u;
            // 0x451e50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x451E54u;
        goto label_451e54;
    }
    ctx->pc = 0x451E4Cu;
    {
        const bool branch_taken_0x451e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451E4Cu;
            // 0x451e50: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x451e4c) {
            ctx->pc = 0x451E78u;
            goto label_451e78;
        }
    }
    ctx->pc = 0x451E54u;
label_451e54:
    // 0x451e54: 0x0  nop
    ctx->pc = 0x451e54u;
    // NOP
label_451e58:
    // 0x451e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x451e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451e5c:
    // 0x451e5c: 0xc04cc1c  jal         func_133070
label_451e60:
    if (ctx->pc == 0x451E60u) {
        ctx->pc = 0x451E60u;
            // 0x451e60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451E64u;
        goto label_451e64;
    }
    ctx->pc = 0x451E5Cu;
    SET_GPR_U32(ctx, 31, 0x451E64u);
    ctx->pc = 0x451E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451E5Cu;
            // 0x451e60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E64u; }
        if (ctx->pc != 0x451E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E64u; }
        if (ctx->pc != 0x451E64u) { return; }
    }
    ctx->pc = 0x451E64u;
label_451e64:
    // 0x451e64: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x451e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451e68:
    // 0x451e68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_451e6c:
    if (ctx->pc == 0x451E6Cu) {
        ctx->pc = 0x451E70u;
        goto label_451e70;
    }
    ctx->pc = 0x451E68u;
    {
        const bool branch_taken_0x451e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451e68) {
            ctx->pc = 0x451E78u;
            goto label_451e78;
        }
    }
    ctx->pc = 0x451E70u;
label_451e70:
    // 0x451e70: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x451e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_451e74:
    // 0x451e74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451e74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451e78:
    // 0x451e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x451e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_451e7c:
    // 0x451e7c: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x451e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_451e80:
    // 0x451e80: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_451e84:
    if (ctx->pc == 0x451E84u) {
        ctx->pc = 0x451E84u;
            // 0x451e84: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x451E88u;
        goto label_451e88;
    }
    ctx->pc = 0x451E80u;
    {
        const bool branch_taken_0x451e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x451E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451E80u;
            // 0x451e84: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451e80) {
            ctx->pc = 0x451E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_451e18;
        }
    }
    ctx->pc = 0x451E88u;
label_451e88:
    // 0x451e88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x451e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_451e8c:
    // 0x451e8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x451e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_451e90:
    // 0x451e90: 0xc04cc90  jal         func_133240
label_451e94:
    if (ctx->pc == 0x451E94u) {
        ctx->pc = 0x451E94u;
            // 0x451e94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451E98u;
        goto label_451e98;
    }
    ctx->pc = 0x451E90u;
    SET_GPR_U32(ctx, 31, 0x451E98u);
    ctx->pc = 0x451E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451E90u;
            // 0x451e94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E98u; }
        if (ctx->pc != 0x451E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451E98u; }
        if (ctx->pc != 0x451E98u) { return; }
    }
    ctx->pc = 0x451E98u;
label_451e98:
    // 0x451e98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x451e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_451e9c:
    // 0x451e9c: 0xc04cc44  jal         func_133110
label_451ea0:
    if (ctx->pc == 0x451EA0u) {
        ctx->pc = 0x451EA0u;
            // 0x451ea0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x451EA4u;
        goto label_451ea4;
    }
    ctx->pc = 0x451E9Cu;
    SET_GPR_U32(ctx, 31, 0x451EA4u);
    ctx->pc = 0x451EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451E9Cu;
            // 0x451ea0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451EA4u; }
        if (ctx->pc != 0x451EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451EA4u; }
        if (ctx->pc != 0x451EA4u) { return; }
    }
    ctx->pc = 0x451EA4u;
label_451ea4:
    // 0x451ea4: 0x27c40820  addiu       $a0, $fp, 0x820
    ctx->pc = 0x451ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2080));
label_451ea8:
    // 0x451ea8: 0xc04cc08  jal         func_133020
label_451eac:
    if (ctx->pc == 0x451EACu) {
        ctx->pc = 0x451EACu;
            // 0x451eac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x451EB0u;
        goto label_451eb0;
    }
    ctx->pc = 0x451EA8u;
    SET_GPR_U32(ctx, 31, 0x451EB0u);
    ctx->pc = 0x451EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451EA8u;
            // 0x451eac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451EB0u; }
        if (ctx->pc != 0x451EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451EB0u; }
        if (ctx->pc != 0x451EB0u) { return; }
    }
    ctx->pc = 0x451EB0u;
label_451eb0:
    // 0x451eb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x451eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_451eb4:
    // 0x451eb4: 0x27c50890  addiu       $a1, $fp, 0x890
    ctx->pc = 0x451eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2192));
label_451eb8:
    // 0x451eb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x451eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451ebc:
    // 0x451ebc: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x451ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_451ec0:
    // 0x451ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x451ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451ec4:
    // 0x451ec4: 0xc13d9dc  jal         func_4F6770
label_451ec8:
    if (ctx->pc == 0x451EC8u) {
        ctx->pc = 0x451EC8u;
            // 0x451ec8: 0x27a8010c  addiu       $t0, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->pc = 0x451ECCu;
        goto label_451ecc;
    }
    ctx->pc = 0x451EC4u;
    SET_GPR_U32(ctx, 31, 0x451ECCu);
    ctx->pc = 0x451EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x451EC4u;
            // 0x451ec8: 0x27a8010c  addiu       $t0, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6770u;
    if (runtime->hasFunction(0x4F6770u)) {
        auto targetFn = runtime->lookupFunction(0x4F6770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451ECCu; }
        if (ctx->pc != 0x451ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6770_0x4f6770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x451ECCu; }
        if (ctx->pc != 0x451ECCu) { return; }
    }
    ctx->pc = 0x451ECCu;
label_451ecc:
    // 0x451ecc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x451eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_451ed0:
    // 0x451ed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x451ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451ed4:
    // 0x451ed4: 0xc7a5010c  lwc1        $f5, 0x10C($sp)
    ctx->pc = 0x451ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_451ed8:
    // 0x451ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x451ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_451edc:
    // 0x451edc: 0x0  nop
    ctx->pc = 0x451edcu;
    // NOP
label_451ee0:
    // 0x451ee0: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x451ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451ee4:
    // 0x451ee4: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_451ee8:
    if (ctx->pc == 0x451EE8u) {
        ctx->pc = 0x451EE8u;
            // 0x451ee8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x451EECu;
        goto label_451eec;
    }
    ctx->pc = 0x451EE4u;
    {
        const bool branch_taken_0x451ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451ee4) {
            ctx->pc = 0x451EE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451EE4u;
            // 0x451ee8: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451F9Cu;
            goto label_451f9c;
        }
    }
    ctx->pc = 0x451EECu;
label_451eec:
    // 0x451eec: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x451eecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_451ef0:
    // 0x451ef0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451ef4:
    // 0x451ef4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x451ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451ef8:
    // 0x451ef8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x451ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_451efc:
    // 0x451efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451f00:
    // 0x451f00: 0x0  nop
    ctx->pc = 0x451f00u;
    // NOP
label_451f04:
    // 0x451f04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x451f04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_451f08:
    // 0x451f08: 0x0  nop
    ctx->pc = 0x451f08u;
    // NOP
label_451f0c:
    // 0x451f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451f10:
    // 0x451f10: 0x0  nop
    ctx->pc = 0x451f10u;
    // NOP
label_451f14:
    // 0x451f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x451f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451f18:
    // 0x451f18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_451f1c:
    if (ctx->pc == 0x451F1Cu) {
        ctx->pc = 0x451F1Cu;
            // 0x451f1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x451F20u;
        goto label_451f20;
    }
    ctx->pc = 0x451F18u;
    {
        const bool branch_taken_0x451f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451f18) {
            ctx->pc = 0x451F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451F18u;
            // 0x451f1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x451F30u;
            goto label_451f30;
        }
    }
    ctx->pc = 0x451F20u;
label_451f20:
    // 0x451f20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451f24:
    // 0x451f24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451f28:
    // 0x451f28: 0x10000006  b           . + 4 + (0x6 << 2)
label_451f2c:
    if (ctx->pc == 0x451F2Cu) {
        ctx->pc = 0x451F30u;
        goto label_451f30;
    }
    ctx->pc = 0x451F28u;
    {
        const bool branch_taken_0x451f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x451f28) {
            ctx->pc = 0x451F44u;
            goto label_451f44;
        }
    }
    ctx->pc = 0x451F30u;
label_451f30:
    // 0x451f30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x451f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_451f34:
    // 0x451f34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x451f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_451f38:
    // 0x451f38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x451f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_451f3c:
    // 0x451f3c: 0x0  nop
    ctx->pc = 0x451f3cu;
    // NOP
label_451f40:
    // 0x451f40: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x451f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_451f44:
    // 0x451f44: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_451f48:
    if (ctx->pc == 0x451F48u) {
        ctx->pc = 0x451F48u;
            // 0x451f48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x451F4Cu;
        goto label_451f4c;
    }
    ctx->pc = 0x451F44u;
    {
        const bool branch_taken_0x451f44 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x451f44) {
            ctx->pc = 0x451F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451F44u;
            // 0x451f48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x451F58u;
            goto label_451f58;
        }
    }
    ctx->pc = 0x451F4Cu;
label_451f4c:
    // 0x451f4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x451f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451f50:
    // 0x451f50: 0x10000007  b           . + 4 + (0x7 << 2)
label_451f54:
    if (ctx->pc == 0x451F54u) {
        ctx->pc = 0x451F54u;
            // 0x451f54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x451F58u;
        goto label_451f58;
    }
    ctx->pc = 0x451F50u;
    {
        const bool branch_taken_0x451f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451F50u;
            // 0x451f54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451f50) {
            ctx->pc = 0x451F70u;
            goto label_451f70;
        }
    }
    ctx->pc = 0x451F58u;
label_451f58:
    // 0x451f58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x451f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_451f5c:
    // 0x451f5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x451f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_451f60:
    // 0x451f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451f64:
    // 0x451f64: 0x0  nop
    ctx->pc = 0x451f64u;
    // NOP
label_451f68:
    // 0x451f68: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x451f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_451f6c:
    // 0x451f6c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x451f6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_451f70:
    // 0x451f70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451f74:
    // 0x451f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x451f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451f78:
    // 0x451f78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x451f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_451f7c:
    // 0x451f7c: 0x0  nop
    ctx->pc = 0x451f7cu;
    // NOP
label_451f80:
    // 0x451f80: 0x46022841  sub.s       $f1, $f5, $f2
    ctx->pc = 0x451f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_451f84:
    // 0x451f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451f88:
    // 0x451f88: 0x0  nop
    ctx->pc = 0x451f88u;
    // NOP
label_451f8c:
    // 0x451f8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x451f8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_451f90:
    // 0x451f90: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x451f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_451f94:
    // 0x451f94: 0x1000004d  b           . + 4 + (0x4D << 2)
label_451f98:
    if (ctx->pc == 0x451F98u) {
        ctx->pc = 0x451F98u;
            // 0x451f98: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x451F9Cu;
        goto label_451f9c;
    }
    ctx->pc = 0x451F94u;
    {
        const bool branch_taken_0x451f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451F94u;
            // 0x451f98: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451f94) {
            ctx->pc = 0x4520CCu;
            goto label_4520cc;
        }
    }
    ctx->pc = 0x451F9Cu;
label_451f9c:
    // 0x451f9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x451f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451fa0:
    // 0x451fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451fa4:
    // 0x451fa4: 0x0  nop
    ctx->pc = 0x451fa4u;
    // NOP
label_451fa8:
    // 0x451fa8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x451fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451fac:
    // 0x451fac: 0x45020048  bc1fl       . + 4 + (0x48 << 2)
label_451fb0:
    if (ctx->pc == 0x451FB0u) {
        ctx->pc = 0x451FB0u;
            // 0x451fb0: 0xc7ac010c  lwc1        $f12, 0x10C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x451FB4u;
        goto label_451fb4;
    }
    ctx->pc = 0x451FACu;
    {
        const bool branch_taken_0x451fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x451fac) {
            ctx->pc = 0x451FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451FACu;
            // 0x451fb0: 0xc7ac010c  lwc1        $f12, 0x10C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4520D0u;
            goto label_4520d0;
        }
    }
    ctx->pc = 0x451FB4u;
label_451fb4:
    // 0x451fb4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x451fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_451fb8:
    // 0x451fb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x451fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_451fbc:
    // 0x451fbc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x451fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_451fc0:
    // 0x451fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451fc4:
    // 0x451fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x451fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451fc8:
    // 0x451fc8: 0x0  nop
    ctx->pc = 0x451fc8u;
    // NOP
label_451fcc:
    // 0x451fcc: 0x46000983  div.s       $f6, $f1, $f0
    ctx->pc = 0x451fccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[6] = ctx->f[1] / ctx->f[0];
label_451fd0:
    // 0x451fd0: 0x0  nop
    ctx->pc = 0x451fd0u;
    // NOP
label_451fd4:
    // 0x451fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x451fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451fd8:
    // 0x451fd8: 0x0  nop
    ctx->pc = 0x451fd8u;
    // NOP
label_451fdc:
    // 0x451fdc: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x451fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_451fe0:
    // 0x451fe0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_451fe4:
    if (ctx->pc == 0x451FE4u) {
        ctx->pc = 0x451FE8u;
        goto label_451fe8;
    }
    ctx->pc = 0x451FE0u;
    {
        const bool branch_taken_0x451fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x451fe0) {
            ctx->pc = 0x451FECu;
            goto label_451fec;
        }
    }
    ctx->pc = 0x451FE8u;
label_451fe8:
    // 0x451fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_451fec:
    // 0x451fec: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_451ff0:
    if (ctx->pc == 0x451FF0u) {
        ctx->pc = 0x451FF0u;
            // 0x451ff0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x451FF4u;
        goto label_451ff4;
    }
    ctx->pc = 0x451FECu;
    {
        const bool branch_taken_0x451fec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x451fec) {
            ctx->pc = 0x451FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x451FECu;
            // 0x451ff0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452000u;
            goto label_452000;
        }
    }
    ctx->pc = 0x451FF4u;
label_451ff4:
    // 0x451ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x451ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_451ff8:
    // 0x451ff8: 0x10000007  b           . + 4 + (0x7 << 2)
label_451ffc:
    if (ctx->pc == 0x451FFCu) {
        ctx->pc = 0x451FFCu;
            // 0x451ffc: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x452000u;
        goto label_452000;
    }
    ctx->pc = 0x451FF8u;
    {
        const bool branch_taken_0x451ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x451FF8u;
            // 0x451ffc: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x451ff8) {
            ctx->pc = 0x452018u;
            goto label_452018;
        }
    }
    ctx->pc = 0x452000u;
label_452000:
    // 0x452000: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x452000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_452004:
    // 0x452004: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x452004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_452008:
    // 0x452008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x452008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45200c:
    // 0x45200c: 0x0  nop
    ctx->pc = 0x45200cu;
    // NOP
label_452010:
    // 0x452010: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x452010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_452014:
    // 0x452014: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x452014u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_452018:
    // 0x452018: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x452018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_45201c:
    // 0x45201c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x45201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_452020:
    // 0x452020: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x452020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_452024:
    // 0x452024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x452024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_452028:
    // 0x452028: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x452028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45202c:
    // 0x45202c: 0x0  nop
    ctx->pc = 0x45202cu;
    // NOP
label_452030:
    // 0x452030: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x452030u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_452034:
    // 0x452034: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x452034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_452038:
    // 0x452038: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x452038u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_45203c:
    // 0x45203c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x45203cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_452040:
    // 0x452040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x452040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452044:
    // 0x452044: 0x0  nop
    ctx->pc = 0x452044u;
    // NOP
label_452048:
    // 0x452048: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x452048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45204c:
    // 0x45204c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_452050:
    if (ctx->pc == 0x452050u) {
        ctx->pc = 0x452050u;
            // 0x452050: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x452054u;
        goto label_452054;
    }
    ctx->pc = 0x45204Cu;
    {
        const bool branch_taken_0x45204c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45204c) {
            ctx->pc = 0x452050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45204Cu;
            // 0x452050: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x452064u;
            goto label_452064;
        }
    }
    ctx->pc = 0x452054u;
label_452054:
    // 0x452054: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x452054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_452058:
    // 0x452058: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x452058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_45205c:
    // 0x45205c: 0x10000006  b           . + 4 + (0x6 << 2)
label_452060:
    if (ctx->pc == 0x452060u) {
        ctx->pc = 0x452064u;
        goto label_452064;
    }
    ctx->pc = 0x45205Cu;
    {
        const bool branch_taken_0x45205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45205c) {
            ctx->pc = 0x452078u;
            goto label_452078;
        }
    }
    ctx->pc = 0x452064u;
label_452064:
    // 0x452064: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x452064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_452068:
    // 0x452068: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x452068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45206c:
    // 0x45206c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x45206cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_452070:
    // 0x452070: 0x0  nop
    ctx->pc = 0x452070u;
    // NOP
label_452074:
    // 0x452074: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x452074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_452078:
    // 0x452078: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_45207c:
    if (ctx->pc == 0x45207Cu) {
        ctx->pc = 0x45207Cu;
            // 0x45207c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x452080u;
        goto label_452080;
    }
    ctx->pc = 0x452078u;
    {
        const bool branch_taken_0x452078 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x452078) {
            ctx->pc = 0x45207Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452078u;
            // 0x45207c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45208Cu;
            goto label_45208c;
        }
    }
    ctx->pc = 0x452080u;
label_452080:
    // 0x452080: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x452080u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452084:
    // 0x452084: 0x10000007  b           . + 4 + (0x7 << 2)
label_452088:
    if (ctx->pc == 0x452088u) {
        ctx->pc = 0x452088u;
            // 0x452088: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45208Cu;
        goto label_45208c;
    }
    ctx->pc = 0x452084u;
    {
        const bool branch_taken_0x452084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452084u;
            // 0x452088: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x452084) {
            ctx->pc = 0x4520A4u;
            goto label_4520a4;
        }
    }
    ctx->pc = 0x45208Cu;
label_45208c:
    // 0x45208c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x45208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_452090:
    // 0x452090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x452090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_452094:
    // 0x452094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x452094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452098:
    // 0x452098: 0x0  nop
    ctx->pc = 0x452098u;
    // NOP
label_45209c:
    // 0x45209c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x45209cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4520a0:
    // 0x4520a0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4520a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4520a4:
    // 0x4520a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4520a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4520a8:
    // 0x4520a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4520a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4520ac:
    // 0x4520ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4520acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4520b0:
    // 0x4520b0: 0x0  nop
    ctx->pc = 0x4520b0u;
    // NOP
label_4520b4:
    // 0x4520b4: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x4520b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_4520b8:
    // 0x4520b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4520b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4520bc:
    // 0x4520bc: 0x0  nop
    ctx->pc = 0x4520bcu;
    // NOP
label_4520c0:
    // 0x4520c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4520c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4520c4:
    // 0x4520c4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4520c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4520c8:
    // 0x4520c8: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x4520c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4520cc:
    // 0x4520cc: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x4520ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4520d0:
    // 0x4520d0: 0xc047740  jal         func_11DD00
label_4520d4:
    if (ctx->pc == 0x4520D4u) {
        ctx->pc = 0x4520D8u;
        goto label_4520d8;
    }
    ctx->pc = 0x4520D0u;
    SET_GPR_U32(ctx, 31, 0x4520D8u);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4520D8u; }
        if (ctx->pc != 0x4520D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4520D8u; }
        if (ctx->pc != 0x4520D8u) { return; }
    }
    ctx->pc = 0x4520D8u;
label_4520d8:
    // 0x4520d8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4520d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4520dc:
    // 0x4520dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4520dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4520e0:
    // 0x4520e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4520e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4520e4:
    // 0x4520e4: 0x0  nop
    ctx->pc = 0x4520e4u;
    // NOP
label_4520e8:
    // 0x4520e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4520e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4520ec:
    // 0x4520ec: 0x45030038  bc1tl       . + 4 + (0x38 << 2)
label_4520f0:
    if (ctx->pc == 0x4520F0u) {
        ctx->pc = 0x4520F0u;
            // 0x4520f0: 0xc7a1010c  lwc1        $f1, 0x10C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4520F4u;
        goto label_4520f4;
    }
    ctx->pc = 0x4520ECu;
    {
        const bool branch_taken_0x4520ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4520ec) {
            ctx->pc = 0x4520F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4520ECu;
            // 0x4520f0: 0xc7a1010c  lwc1        $f1, 0x10C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4521D0u;
            goto label_4521d0;
        }
    }
    ctx->pc = 0x4520F4u;
label_4520f4:
    // 0x4520f4: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x4520f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4520f8:
    // 0x4520f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4520f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4520fc:
    // 0x4520fc: 0x0  nop
    ctx->pc = 0x4520fcu;
    // NOP
label_452100:
    // 0x452100: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x452100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_452104:
    // 0x452104: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_452108:
    if (ctx->pc == 0x452108u) {
        ctx->pc = 0x452108u;
            // 0x452108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45210Cu;
        goto label_45210c;
    }
    ctx->pc = 0x452104u;
    {
        const bool branch_taken_0x452104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x452108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452104u;
            // 0x452108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452104) {
            ctx->pc = 0x452110u;
            goto label_452110;
        }
    }
    ctx->pc = 0x45210Cu;
label_45210c:
    // 0x45210c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45210cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452110:
    // 0x452110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x452110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_452114:
    // 0x452114: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x452114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_452118:
    // 0x452118: 0x22023  negu        $a0, $v0
    ctx->pc = 0x452118u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_45211c:
    // 0x45211c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x45211cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_452120:
    // 0x452120: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x452120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_452124:
    // 0x452124: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x452124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_452128:
    // 0x452128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x452128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45212c:
    // 0x45212c: 0x0  nop
    ctx->pc = 0x45212cu;
    // NOP
label_452130:
    // 0x452130: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x452130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_452134:
    // 0x452134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x452134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_452138:
    // 0x452138: 0x0  nop
    ctx->pc = 0x452138u;
    // NOP
label_45213c:
    // 0x45213c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x45213cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_452140:
    // 0x452140: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x452140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_452144:
    // 0x452144: 0x0  nop
    ctx->pc = 0x452144u;
    // NOP
label_452148:
    // 0x452148: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x452148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_45214c:
    // 0x45214c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x45214cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_452150:
    // 0x452150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x452150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_452154:
    // 0x452154: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x452154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_452158:
    // 0x452158: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x452158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_45215c:
    // 0x45215c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x45215cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_452160:
    // 0x452160: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x452160u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_452164:
    // 0x452164: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x452164u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
label_452168:
    // 0x452168: 0x60282a  slt         $a1, $v1, $zero
    ctx->pc = 0x452168u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_45216c:
    // 0x45216c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x45216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_452170:
    // 0x452170: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x452170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_452174:
    // 0x452174: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x452174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_452178:
    // 0x452178: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x452178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_45217c:
    // 0x45217c: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x45217cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
label_452180:
    // 0x452180: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x452180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_452184:
    // 0x452184: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x452184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_452188:
    // 0x452188: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x452188u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45218c:
    // 0x45218c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x45218cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_452190:
    // 0x452190: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x452190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_452194:
    // 0x452194: 0x0  nop
    ctx->pc = 0x452194u;
    // NOP
label_452198:
    // 0x452198: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x452198u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
label_45219c:
    // 0x45219c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x45219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_4521a0:
    // 0x4521a0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4521a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4521a4:
    // 0x4521a4: 0x40182a  slt         $v1, $v0, $zero
    ctx->pc = 0x4521a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_4521a8:
    // 0x4521a8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x4521a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4521ac:
    // 0x4521ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4521acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4521b0:
    // 0x4521b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4521b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4521b4:
    // 0x4521b4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x4521b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4521b8:
    // 0x4521b8: 0x621827  nor         $v1, $v1, $v0
    ctx->pc = 0x4521b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 2)));
label_4521bc:
    // 0x4521bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4521bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4521c0:
    // 0x4521c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4521c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4521c4:
    // 0x4521c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4521c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4521c8:
    // 0x4521c8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4521cc:
    if (ctx->pc == 0x4521CCu) {
        ctx->pc = 0x4521CCu;
            // 0x4521cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4521D0u;
        goto label_4521d0;
    }
    ctx->pc = 0x4521C8u;
    {
        const bool branch_taken_0x4521c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4521CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4521C8u;
            // 0x4521cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4521c8) {
            ctx->pc = 0x45223Cu;
            goto label_45223c;
        }
    }
    ctx->pc = 0x4521D0u;
label_4521d0:
    // 0x4521d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4521d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4521d4:
    // 0x4521d4: 0x0  nop
    ctx->pc = 0x4521d4u;
    // NOP
label_4521d8:
    // 0x4521d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4521d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4521dc:
    // 0x4521dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4521e0:
    if (ctx->pc == 0x4521E0u) {
        ctx->pc = 0x4521E0u;
            // 0x4521e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4521E4u;
        goto label_4521e4;
    }
    ctx->pc = 0x4521DCu;
    {
        const bool branch_taken_0x4521dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4521E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4521DCu;
            // 0x4521e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4521dc) {
            ctx->pc = 0x4521E8u;
            goto label_4521e8;
        }
    }
    ctx->pc = 0x4521E4u;
label_4521e4:
    // 0x4521e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4521e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4521e8:
    // 0x4521e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4521e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4521ec:
    // 0x4521ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4521ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4521f0:
    // 0x4521f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4521f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4521f4:
    // 0x4521f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4521f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4521f8:
    // 0x4521f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4521f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4521fc:
    // 0x4521fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4521fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_452200:
    // 0x452200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x452200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_452204:
    // 0x452204: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x452204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_452208:
    // 0x452208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x452208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45220c:
    // 0x45220c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x45220cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
label_452210:
    // 0x452210: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x452210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_452214:
    // 0x452214: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x452214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_452218:
    // 0x452218: 0x40282a  slt         $a1, $v0, $zero
    ctx->pc = 0x452218u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_45221c:
    // 0x45221c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x45221cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_452220:
    // 0x452220: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x452220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_452224:
    // 0x452224: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x452224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_452228:
    // 0x452228: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x452228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_45222c:
    // 0x45222c: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x45222cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
label_452230:
    // 0x452230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x452230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_452234:
    // 0x452234: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x452234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_452238:
    // 0x452238: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x452238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_45223c:
    // 0x45223c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45223cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452240:
    // 0x452240: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x452240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_452244:
    // 0x452244: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x452244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_452248:
    // 0x452248: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x452248u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45224c:
    // 0x45224c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_452250:
    // 0x452250: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x452250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_452254:
    // 0x452254: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x452254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_452258:
    // 0x452258: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x452258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45225c:
    // 0x45225c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45225cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_452260:
    // 0x452260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x452260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_452264:
    // 0x452264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x452264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_452268:
    // 0x452268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x452268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45226c:
    // 0x45226c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452270:
    // 0x452270: 0x3e00008  jr          $ra
label_452274:
    if (ctx->pc == 0x452274u) {
        ctx->pc = 0x452274u;
            // 0x452274: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x452278u;
        goto label_452278;
    }
    ctx->pc = 0x452270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452270u;
            // 0x452274: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452278u;
label_452278:
    // 0x452278: 0x0  nop
    ctx->pc = 0x452278u;
    // NOP
label_45227c:
    // 0x45227c: 0x0  nop
    ctx->pc = 0x45227cu;
    // NOP
label_452280:
    // 0x452280: 0x8114378  j           func_450DE0
label_452284:
    if (ctx->pc == 0x452284u) {
        ctx->pc = 0x452284u;
            // 0x452284: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->pc = 0x452288u;
        goto label_452288;
    }
    ctx->pc = 0x452280u;
    ctx->pc = 0x452284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452280u;
            // 0x452284: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x450DE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_450de0;
    ctx->pc = 0x452288u;
label_452288:
    // 0x452288: 0x0  nop
    ctx->pc = 0x452288u;
    // NOP
label_45228c:
    // 0x45228c: 0x0  nop
    ctx->pc = 0x45228cu;
    // NOP
label_452290:
    // 0x452290: 0x8114350  j           func_450D40
label_452294:
    if (ctx->pc == 0x452294u) {
        ctx->pc = 0x452294u;
            // 0x452294: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->pc = 0x452298u;
        goto label_452298;
    }
    ctx->pc = 0x452290u;
    ctx->pc = 0x452294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452290u;
            // 0x452294: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x450D40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_450d40;
    ctx->pc = 0x452298u;
label_452298:
    // 0x452298: 0x0  nop
    ctx->pc = 0x452298u;
    // NOP
label_45229c:
    // 0x45229c: 0x0  nop
    ctx->pc = 0x45229cu;
    // NOP
label_4522a0:
    // 0x4522a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4522a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4522a4:
    // 0x4522a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4522a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4522a8:
    // 0x4522a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4522a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4522ac:
    // 0x4522ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4522acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4522b0:
    // 0x4522b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4522b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4522b4:
    // 0x4522b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4522b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4522b8:
    // 0x4522b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4522b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4522bc:
    // 0x4522bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4522bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4522c0:
    // 0x4522c0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4522c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4522c4:
    // 0x4522c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4522c8:
    if (ctx->pc == 0x4522C8u) {
        ctx->pc = 0x4522C8u;
            // 0x4522c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4522CCu;
        goto label_4522cc;
    }
    ctx->pc = 0x4522C4u;
    {
        const bool branch_taken_0x4522c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4522C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4522C4u;
            // 0x4522c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4522c4) {
            ctx->pc = 0x452308u;
            goto label_452308;
        }
    }
    ctx->pc = 0x4522CCu;
label_4522cc:
    // 0x4522cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4522ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4522d0:
    // 0x4522d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4522d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4522d4:
    // 0x4522d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4522d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4522d8:
    // 0x4522d8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4522d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4522dc:
    // 0x4522dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4522dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4522e0:
    // 0x4522e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4522e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4522e4:
    // 0x4522e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4522e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4522e8:
    // 0x4522e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4522e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4522ec:
    // 0x4522ec: 0x320f809  jalr        $t9
label_4522f0:
    if (ctx->pc == 0x4522F0u) {
        ctx->pc = 0x4522F4u;
        goto label_4522f4;
    }
    ctx->pc = 0x4522ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4522F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4522F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4522F4u; }
            if (ctx->pc != 0x4522F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4522F4u;
label_4522f4:
    // 0x4522f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4522f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4522f8:
    // 0x4522f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4522f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4522fc:
    // 0x4522fc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4522fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_452300:
    // 0x452300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_452304:
    if (ctx->pc == 0x452304u) {
        ctx->pc = 0x452304u;
            // 0x452304: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x452308u;
        goto label_452308;
    }
    ctx->pc = 0x452300u;
    {
        const bool branch_taken_0x452300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x452304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452300u;
            // 0x452304: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452300) {
            ctx->pc = 0x4522D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4522d8;
        }
    }
    ctx->pc = 0x452308u;
label_452308:
    // 0x452308: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x452308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45230c:
    // 0x45230c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_452310:
    // 0x452310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x452310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_452314:
    // 0x452314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x452314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_452318:
    // 0x452318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x452318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45231c:
    // 0x45231c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45231cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_452320:
    // 0x452320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_452324:
    // 0x452324: 0x3e00008  jr          $ra
label_452328:
    if (ctx->pc == 0x452328u) {
        ctx->pc = 0x452328u;
            // 0x452328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x45232Cu;
        goto label_45232c;
    }
    ctx->pc = 0x452324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452324u;
            // 0x452328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45232Cu;
label_45232c:
    // 0x45232c: 0x0  nop
    ctx->pc = 0x45232cu;
    // NOP
label_452330:
    // 0x452330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_452334:
    // 0x452334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452338:
    // 0x452338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45233c:
    // 0x45233c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452340:
    // 0x452340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_452344:
    // 0x452344: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_452348:
    if (ctx->pc == 0x452348u) {
        ctx->pc = 0x452348u;
            // 0x452348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45234Cu;
        goto label_45234c;
    }
    ctx->pc = 0x452344u;
    {
        const bool branch_taken_0x452344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x452348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452344u;
            // 0x452348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452344) {
            ctx->pc = 0x4523E4u;
            goto label_4523e4;
        }
    }
    ctx->pc = 0x45234Cu;
label_45234c:
    // 0x45234c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45234cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_452350:
    // 0x452350: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x452350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_452354:
    // 0x452354: 0x2463de50  addiu       $v1, $v1, -0x21B0
    ctx->pc = 0x452354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958672));
label_452358:
    // 0x452358: 0x2442de88  addiu       $v0, $v0, -0x2178
    ctx->pc = 0x452358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958728));
label_45235c:
    // 0x45235c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45235cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_452360:
    // 0x452360: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_452364:
    if (ctx->pc == 0x452364u) {
        ctx->pc = 0x452364u;
            // 0x452364: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x452368u;
        goto label_452368;
    }
    ctx->pc = 0x452360u;
    {
        const bool branch_taken_0x452360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x452364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452360u;
            // 0x452364: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452360) {
            ctx->pc = 0x4523CCu;
            goto label_4523cc;
        }
    }
    ctx->pc = 0x452368u;
label_452368:
    // 0x452368: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x452368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_45236c:
    // 0x45236c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_452370:
    // 0x452370: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x452370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
label_452374:
    // 0x452374: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x452374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_452378:
    // 0x452378: 0x2442df88  addiu       $v0, $v0, -0x2078
    ctx->pc = 0x452378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958984));
label_45237c:
    // 0x45237c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45237cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_452380:
    // 0x452380: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x452380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_452384:
    // 0x452384: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x452384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_452388:
    // 0x452388: 0xc0407c0  jal         func_101F00
label_45238c:
    if (ctx->pc == 0x45238Cu) {
        ctx->pc = 0x45238Cu;
            // 0x45238c: 0x24a52530  addiu       $a1, $a1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
        ctx->pc = 0x452390u;
        goto label_452390;
    }
    ctx->pc = 0x452388u;
    SET_GPR_U32(ctx, 31, 0x452390u);
    ctx->pc = 0x45238Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452388u;
            // 0x45238c: 0x24a52530  addiu       $a1, $a1, 0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452390u; }
        if (ctx->pc != 0x452390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452390u; }
        if (ctx->pc != 0x452390u) { return; }
    }
    ctx->pc = 0x452390u;
label_452390:
    // 0x452390: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x452390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_452394:
    // 0x452394: 0xc114934  jal         func_4524D0
label_452398:
    if (ctx->pc == 0x452398u) {
        ctx->pc = 0x452398u;
            // 0x452398: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x45239Cu;
        goto label_45239c;
    }
    ctx->pc = 0x452394u;
    SET_GPR_U32(ctx, 31, 0x45239Cu);
    ctx->pc = 0x452398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x452394u;
            // 0x452398: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4524D0u;
    if (runtime->hasFunction(0x4524D0u)) {
        auto targetFn = runtime->lookupFunction(0x4524D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45239Cu; }
        if (ctx->pc != 0x45239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004524D0_0x4524d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45239Cu; }
        if (ctx->pc != 0x45239Cu) { return; }
    }
    ctx->pc = 0x45239Cu;
label_45239c:
    // 0x45239c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x45239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4523a0:
    // 0x4523a0: 0xc114918  jal         func_452460
label_4523a4:
    if (ctx->pc == 0x4523A4u) {
        ctx->pc = 0x4523A4u;
            // 0x4523a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4523A8u;
        goto label_4523a8;
    }
    ctx->pc = 0x4523A0u;
    SET_GPR_U32(ctx, 31, 0x4523A8u);
    ctx->pc = 0x4523A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4523A0u;
            // 0x4523a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452460u;
    if (runtime->hasFunction(0x452460u)) {
        auto targetFn = runtime->lookupFunction(0x452460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523A8u; }
        if (ctx->pc != 0x4523A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452460_0x452460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523A8u; }
        if (ctx->pc != 0x4523A8u) { return; }
    }
    ctx->pc = 0x4523A8u;
label_4523a8:
    // 0x4523a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4523a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4523ac:
    // 0x4523ac: 0xc114918  jal         func_452460
label_4523b0:
    if (ctx->pc == 0x4523B0u) {
        ctx->pc = 0x4523B0u;
            // 0x4523b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4523B4u;
        goto label_4523b4;
    }
    ctx->pc = 0x4523ACu;
    SET_GPR_U32(ctx, 31, 0x4523B4u);
    ctx->pc = 0x4523B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4523ACu;
            // 0x4523b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452460u;
    if (runtime->hasFunction(0x452460u)) {
        auto targetFn = runtime->lookupFunction(0x452460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523B4u; }
        if (ctx->pc != 0x4523B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452460_0x452460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523B4u; }
        if (ctx->pc != 0x4523B4u) { return; }
    }
    ctx->pc = 0x4523B4u;
label_4523b4:
    // 0x4523b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4523b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4523b8:
    // 0x4523b8: 0xc114900  jal         func_452400
label_4523bc:
    if (ctx->pc == 0x4523BCu) {
        ctx->pc = 0x4523BCu;
            // 0x4523bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4523C0u;
        goto label_4523c0;
    }
    ctx->pc = 0x4523B8u;
    SET_GPR_U32(ctx, 31, 0x4523C0u);
    ctx->pc = 0x4523BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4523B8u;
            // 0x4523bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452400u;
    if (runtime->hasFunction(0x452400u)) {
        auto targetFn = runtime->lookupFunction(0x452400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523C0u; }
        if (ctx->pc != 0x4523C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452400_0x452400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523C0u; }
        if (ctx->pc != 0x4523C0u) { return; }
    }
    ctx->pc = 0x4523C0u;
label_4523c0:
    // 0x4523c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4523c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4523c4:
    // 0x4523c4: 0xc0ae1c0  jal         func_2B8700
label_4523c8:
    if (ctx->pc == 0x4523C8u) {
        ctx->pc = 0x4523C8u;
            // 0x4523c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4523CCu;
        goto label_4523cc;
    }
    ctx->pc = 0x4523C4u;
    SET_GPR_U32(ctx, 31, 0x4523CCu);
    ctx->pc = 0x4523C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4523C4u;
            // 0x4523c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523CCu; }
        if (ctx->pc != 0x4523CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523CCu; }
        if (ctx->pc != 0x4523CCu) { return; }
    }
    ctx->pc = 0x4523CCu;
label_4523cc:
    // 0x4523cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4523ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4523d0:
    // 0x4523d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4523d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4523d4:
    // 0x4523d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4523d8:
    if (ctx->pc == 0x4523D8u) {
        ctx->pc = 0x4523D8u;
            // 0x4523d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4523DCu;
        goto label_4523dc;
    }
    ctx->pc = 0x4523D4u;
    {
        const bool branch_taken_0x4523d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4523d4) {
            ctx->pc = 0x4523D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4523D4u;
            // 0x4523d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4523E8u;
            goto label_4523e8;
        }
    }
    ctx->pc = 0x4523DCu;
label_4523dc:
    // 0x4523dc: 0xc0400a8  jal         func_1002A0
label_4523e0:
    if (ctx->pc == 0x4523E0u) {
        ctx->pc = 0x4523E0u;
            // 0x4523e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4523E4u;
        goto label_4523e4;
    }
    ctx->pc = 0x4523DCu;
    SET_GPR_U32(ctx, 31, 0x4523E4u);
    ctx->pc = 0x4523E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4523DCu;
            // 0x4523e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523E4u; }
        if (ctx->pc != 0x4523E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4523E4u; }
        if (ctx->pc != 0x4523E4u) { return; }
    }
    ctx->pc = 0x4523E4u;
label_4523e4:
    // 0x4523e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4523e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4523e8:
    // 0x4523e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4523e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4523ec:
    // 0x4523ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4523ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4523f0:
    // 0x4523f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4523f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4523f4:
    // 0x4523f4: 0x3e00008  jr          $ra
label_4523f8:
    if (ctx->pc == 0x4523F8u) {
        ctx->pc = 0x4523F8u;
            // 0x4523f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4523FCu;
        goto label_4523fc;
    }
    ctx->pc = 0x4523F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4523F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4523F4u;
            // 0x4523f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4523FCu;
label_4523fc:
    // 0x4523fc: 0x0  nop
    ctx->pc = 0x4523fcu;
    // NOP
}
