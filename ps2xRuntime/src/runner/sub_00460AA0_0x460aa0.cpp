#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00460AA0
// Address: 0x460aa0 - 0x461b30
void sub_00460AA0_0x460aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460AA0_0x460aa0");
#endif

    switch (ctx->pc) {
        case 0x460aa0u: goto label_460aa0;
        case 0x460aa4u: goto label_460aa4;
        case 0x460aa8u: goto label_460aa8;
        case 0x460aacu: goto label_460aac;
        case 0x460ab0u: goto label_460ab0;
        case 0x460ab4u: goto label_460ab4;
        case 0x460ab8u: goto label_460ab8;
        case 0x460abcu: goto label_460abc;
        case 0x460ac0u: goto label_460ac0;
        case 0x460ac4u: goto label_460ac4;
        case 0x460ac8u: goto label_460ac8;
        case 0x460accu: goto label_460acc;
        case 0x460ad0u: goto label_460ad0;
        case 0x460ad4u: goto label_460ad4;
        case 0x460ad8u: goto label_460ad8;
        case 0x460adcu: goto label_460adc;
        case 0x460ae0u: goto label_460ae0;
        case 0x460ae4u: goto label_460ae4;
        case 0x460ae8u: goto label_460ae8;
        case 0x460aecu: goto label_460aec;
        case 0x460af0u: goto label_460af0;
        case 0x460af4u: goto label_460af4;
        case 0x460af8u: goto label_460af8;
        case 0x460afcu: goto label_460afc;
        case 0x460b00u: goto label_460b00;
        case 0x460b04u: goto label_460b04;
        case 0x460b08u: goto label_460b08;
        case 0x460b0cu: goto label_460b0c;
        case 0x460b10u: goto label_460b10;
        case 0x460b14u: goto label_460b14;
        case 0x460b18u: goto label_460b18;
        case 0x460b1cu: goto label_460b1c;
        case 0x460b20u: goto label_460b20;
        case 0x460b24u: goto label_460b24;
        case 0x460b28u: goto label_460b28;
        case 0x460b2cu: goto label_460b2c;
        case 0x460b30u: goto label_460b30;
        case 0x460b34u: goto label_460b34;
        case 0x460b38u: goto label_460b38;
        case 0x460b3cu: goto label_460b3c;
        case 0x460b40u: goto label_460b40;
        case 0x460b44u: goto label_460b44;
        case 0x460b48u: goto label_460b48;
        case 0x460b4cu: goto label_460b4c;
        case 0x460b50u: goto label_460b50;
        case 0x460b54u: goto label_460b54;
        case 0x460b58u: goto label_460b58;
        case 0x460b5cu: goto label_460b5c;
        case 0x460b60u: goto label_460b60;
        case 0x460b64u: goto label_460b64;
        case 0x460b68u: goto label_460b68;
        case 0x460b6cu: goto label_460b6c;
        case 0x460b70u: goto label_460b70;
        case 0x460b74u: goto label_460b74;
        case 0x460b78u: goto label_460b78;
        case 0x460b7cu: goto label_460b7c;
        case 0x460b80u: goto label_460b80;
        case 0x460b84u: goto label_460b84;
        case 0x460b88u: goto label_460b88;
        case 0x460b8cu: goto label_460b8c;
        case 0x460b90u: goto label_460b90;
        case 0x460b94u: goto label_460b94;
        case 0x460b98u: goto label_460b98;
        case 0x460b9cu: goto label_460b9c;
        case 0x460ba0u: goto label_460ba0;
        case 0x460ba4u: goto label_460ba4;
        case 0x460ba8u: goto label_460ba8;
        case 0x460bacu: goto label_460bac;
        case 0x460bb0u: goto label_460bb0;
        case 0x460bb4u: goto label_460bb4;
        case 0x460bb8u: goto label_460bb8;
        case 0x460bbcu: goto label_460bbc;
        case 0x460bc0u: goto label_460bc0;
        case 0x460bc4u: goto label_460bc4;
        case 0x460bc8u: goto label_460bc8;
        case 0x460bccu: goto label_460bcc;
        case 0x460bd0u: goto label_460bd0;
        case 0x460bd4u: goto label_460bd4;
        case 0x460bd8u: goto label_460bd8;
        case 0x460bdcu: goto label_460bdc;
        case 0x460be0u: goto label_460be0;
        case 0x460be4u: goto label_460be4;
        case 0x460be8u: goto label_460be8;
        case 0x460becu: goto label_460bec;
        case 0x460bf0u: goto label_460bf0;
        case 0x460bf4u: goto label_460bf4;
        case 0x460bf8u: goto label_460bf8;
        case 0x460bfcu: goto label_460bfc;
        case 0x460c00u: goto label_460c00;
        case 0x460c04u: goto label_460c04;
        case 0x460c08u: goto label_460c08;
        case 0x460c0cu: goto label_460c0c;
        case 0x460c10u: goto label_460c10;
        case 0x460c14u: goto label_460c14;
        case 0x460c18u: goto label_460c18;
        case 0x460c1cu: goto label_460c1c;
        case 0x460c20u: goto label_460c20;
        case 0x460c24u: goto label_460c24;
        case 0x460c28u: goto label_460c28;
        case 0x460c2cu: goto label_460c2c;
        case 0x460c30u: goto label_460c30;
        case 0x460c34u: goto label_460c34;
        case 0x460c38u: goto label_460c38;
        case 0x460c3cu: goto label_460c3c;
        case 0x460c40u: goto label_460c40;
        case 0x460c44u: goto label_460c44;
        case 0x460c48u: goto label_460c48;
        case 0x460c4cu: goto label_460c4c;
        case 0x460c50u: goto label_460c50;
        case 0x460c54u: goto label_460c54;
        case 0x460c58u: goto label_460c58;
        case 0x460c5cu: goto label_460c5c;
        case 0x460c60u: goto label_460c60;
        case 0x460c64u: goto label_460c64;
        case 0x460c68u: goto label_460c68;
        case 0x460c6cu: goto label_460c6c;
        case 0x460c70u: goto label_460c70;
        case 0x460c74u: goto label_460c74;
        case 0x460c78u: goto label_460c78;
        case 0x460c7cu: goto label_460c7c;
        case 0x460c80u: goto label_460c80;
        case 0x460c84u: goto label_460c84;
        case 0x460c88u: goto label_460c88;
        case 0x460c8cu: goto label_460c8c;
        case 0x460c90u: goto label_460c90;
        case 0x460c94u: goto label_460c94;
        case 0x460c98u: goto label_460c98;
        case 0x460c9cu: goto label_460c9c;
        case 0x460ca0u: goto label_460ca0;
        case 0x460ca4u: goto label_460ca4;
        case 0x460ca8u: goto label_460ca8;
        case 0x460cacu: goto label_460cac;
        case 0x460cb0u: goto label_460cb0;
        case 0x460cb4u: goto label_460cb4;
        case 0x460cb8u: goto label_460cb8;
        case 0x460cbcu: goto label_460cbc;
        case 0x460cc0u: goto label_460cc0;
        case 0x460cc4u: goto label_460cc4;
        case 0x460cc8u: goto label_460cc8;
        case 0x460cccu: goto label_460ccc;
        case 0x460cd0u: goto label_460cd0;
        case 0x460cd4u: goto label_460cd4;
        case 0x460cd8u: goto label_460cd8;
        case 0x460cdcu: goto label_460cdc;
        case 0x460ce0u: goto label_460ce0;
        case 0x460ce4u: goto label_460ce4;
        case 0x460ce8u: goto label_460ce8;
        case 0x460cecu: goto label_460cec;
        case 0x460cf0u: goto label_460cf0;
        case 0x460cf4u: goto label_460cf4;
        case 0x460cf8u: goto label_460cf8;
        case 0x460cfcu: goto label_460cfc;
        case 0x460d00u: goto label_460d00;
        case 0x460d04u: goto label_460d04;
        case 0x460d08u: goto label_460d08;
        case 0x460d0cu: goto label_460d0c;
        case 0x460d10u: goto label_460d10;
        case 0x460d14u: goto label_460d14;
        case 0x460d18u: goto label_460d18;
        case 0x460d1cu: goto label_460d1c;
        case 0x460d20u: goto label_460d20;
        case 0x460d24u: goto label_460d24;
        case 0x460d28u: goto label_460d28;
        case 0x460d2cu: goto label_460d2c;
        case 0x460d30u: goto label_460d30;
        case 0x460d34u: goto label_460d34;
        case 0x460d38u: goto label_460d38;
        case 0x460d3cu: goto label_460d3c;
        case 0x460d40u: goto label_460d40;
        case 0x460d44u: goto label_460d44;
        case 0x460d48u: goto label_460d48;
        case 0x460d4cu: goto label_460d4c;
        case 0x460d50u: goto label_460d50;
        case 0x460d54u: goto label_460d54;
        case 0x460d58u: goto label_460d58;
        case 0x460d5cu: goto label_460d5c;
        case 0x460d60u: goto label_460d60;
        case 0x460d64u: goto label_460d64;
        case 0x460d68u: goto label_460d68;
        case 0x460d6cu: goto label_460d6c;
        case 0x460d70u: goto label_460d70;
        case 0x460d74u: goto label_460d74;
        case 0x460d78u: goto label_460d78;
        case 0x460d7cu: goto label_460d7c;
        case 0x460d80u: goto label_460d80;
        case 0x460d84u: goto label_460d84;
        case 0x460d88u: goto label_460d88;
        case 0x460d8cu: goto label_460d8c;
        case 0x460d90u: goto label_460d90;
        case 0x460d94u: goto label_460d94;
        case 0x460d98u: goto label_460d98;
        case 0x460d9cu: goto label_460d9c;
        case 0x460da0u: goto label_460da0;
        case 0x460da4u: goto label_460da4;
        case 0x460da8u: goto label_460da8;
        case 0x460dacu: goto label_460dac;
        case 0x460db0u: goto label_460db0;
        case 0x460db4u: goto label_460db4;
        case 0x460db8u: goto label_460db8;
        case 0x460dbcu: goto label_460dbc;
        case 0x460dc0u: goto label_460dc0;
        case 0x460dc4u: goto label_460dc4;
        case 0x460dc8u: goto label_460dc8;
        case 0x460dccu: goto label_460dcc;
        case 0x460dd0u: goto label_460dd0;
        case 0x460dd4u: goto label_460dd4;
        case 0x460dd8u: goto label_460dd8;
        case 0x460ddcu: goto label_460ddc;
        case 0x460de0u: goto label_460de0;
        case 0x460de4u: goto label_460de4;
        case 0x460de8u: goto label_460de8;
        case 0x460decu: goto label_460dec;
        case 0x460df0u: goto label_460df0;
        case 0x460df4u: goto label_460df4;
        case 0x460df8u: goto label_460df8;
        case 0x460dfcu: goto label_460dfc;
        case 0x460e00u: goto label_460e00;
        case 0x460e04u: goto label_460e04;
        case 0x460e08u: goto label_460e08;
        case 0x460e0cu: goto label_460e0c;
        case 0x460e10u: goto label_460e10;
        case 0x460e14u: goto label_460e14;
        case 0x460e18u: goto label_460e18;
        case 0x460e1cu: goto label_460e1c;
        case 0x460e20u: goto label_460e20;
        case 0x460e24u: goto label_460e24;
        case 0x460e28u: goto label_460e28;
        case 0x460e2cu: goto label_460e2c;
        case 0x460e30u: goto label_460e30;
        case 0x460e34u: goto label_460e34;
        case 0x460e38u: goto label_460e38;
        case 0x460e3cu: goto label_460e3c;
        case 0x460e40u: goto label_460e40;
        case 0x460e44u: goto label_460e44;
        case 0x460e48u: goto label_460e48;
        case 0x460e4cu: goto label_460e4c;
        case 0x460e50u: goto label_460e50;
        case 0x460e54u: goto label_460e54;
        case 0x460e58u: goto label_460e58;
        case 0x460e5cu: goto label_460e5c;
        case 0x460e60u: goto label_460e60;
        case 0x460e64u: goto label_460e64;
        case 0x460e68u: goto label_460e68;
        case 0x460e6cu: goto label_460e6c;
        case 0x460e70u: goto label_460e70;
        case 0x460e74u: goto label_460e74;
        case 0x460e78u: goto label_460e78;
        case 0x460e7cu: goto label_460e7c;
        case 0x460e80u: goto label_460e80;
        case 0x460e84u: goto label_460e84;
        case 0x460e88u: goto label_460e88;
        case 0x460e8cu: goto label_460e8c;
        case 0x460e90u: goto label_460e90;
        case 0x460e94u: goto label_460e94;
        case 0x460e98u: goto label_460e98;
        case 0x460e9cu: goto label_460e9c;
        case 0x460ea0u: goto label_460ea0;
        case 0x460ea4u: goto label_460ea4;
        case 0x460ea8u: goto label_460ea8;
        case 0x460eacu: goto label_460eac;
        case 0x460eb0u: goto label_460eb0;
        case 0x460eb4u: goto label_460eb4;
        case 0x460eb8u: goto label_460eb8;
        case 0x460ebcu: goto label_460ebc;
        case 0x460ec0u: goto label_460ec0;
        case 0x460ec4u: goto label_460ec4;
        case 0x460ec8u: goto label_460ec8;
        case 0x460eccu: goto label_460ecc;
        case 0x460ed0u: goto label_460ed0;
        case 0x460ed4u: goto label_460ed4;
        case 0x460ed8u: goto label_460ed8;
        case 0x460edcu: goto label_460edc;
        case 0x460ee0u: goto label_460ee0;
        case 0x460ee4u: goto label_460ee4;
        case 0x460ee8u: goto label_460ee8;
        case 0x460eecu: goto label_460eec;
        case 0x460ef0u: goto label_460ef0;
        case 0x460ef4u: goto label_460ef4;
        case 0x460ef8u: goto label_460ef8;
        case 0x460efcu: goto label_460efc;
        case 0x460f00u: goto label_460f00;
        case 0x460f04u: goto label_460f04;
        case 0x460f08u: goto label_460f08;
        case 0x460f0cu: goto label_460f0c;
        case 0x460f10u: goto label_460f10;
        case 0x460f14u: goto label_460f14;
        case 0x460f18u: goto label_460f18;
        case 0x460f1cu: goto label_460f1c;
        case 0x460f20u: goto label_460f20;
        case 0x460f24u: goto label_460f24;
        case 0x460f28u: goto label_460f28;
        case 0x460f2cu: goto label_460f2c;
        case 0x460f30u: goto label_460f30;
        case 0x460f34u: goto label_460f34;
        case 0x460f38u: goto label_460f38;
        case 0x460f3cu: goto label_460f3c;
        case 0x460f40u: goto label_460f40;
        case 0x460f44u: goto label_460f44;
        case 0x460f48u: goto label_460f48;
        case 0x460f4cu: goto label_460f4c;
        case 0x460f50u: goto label_460f50;
        case 0x460f54u: goto label_460f54;
        case 0x460f58u: goto label_460f58;
        case 0x460f5cu: goto label_460f5c;
        case 0x460f60u: goto label_460f60;
        case 0x460f64u: goto label_460f64;
        case 0x460f68u: goto label_460f68;
        case 0x460f6cu: goto label_460f6c;
        case 0x460f70u: goto label_460f70;
        case 0x460f74u: goto label_460f74;
        case 0x460f78u: goto label_460f78;
        case 0x460f7cu: goto label_460f7c;
        case 0x460f80u: goto label_460f80;
        case 0x460f84u: goto label_460f84;
        case 0x460f88u: goto label_460f88;
        case 0x460f8cu: goto label_460f8c;
        case 0x460f90u: goto label_460f90;
        case 0x460f94u: goto label_460f94;
        case 0x460f98u: goto label_460f98;
        case 0x460f9cu: goto label_460f9c;
        case 0x460fa0u: goto label_460fa0;
        case 0x460fa4u: goto label_460fa4;
        case 0x460fa8u: goto label_460fa8;
        case 0x460facu: goto label_460fac;
        case 0x460fb0u: goto label_460fb0;
        case 0x460fb4u: goto label_460fb4;
        case 0x460fb8u: goto label_460fb8;
        case 0x460fbcu: goto label_460fbc;
        case 0x460fc0u: goto label_460fc0;
        case 0x460fc4u: goto label_460fc4;
        case 0x460fc8u: goto label_460fc8;
        case 0x460fccu: goto label_460fcc;
        case 0x460fd0u: goto label_460fd0;
        case 0x460fd4u: goto label_460fd4;
        case 0x460fd8u: goto label_460fd8;
        case 0x460fdcu: goto label_460fdc;
        case 0x460fe0u: goto label_460fe0;
        case 0x460fe4u: goto label_460fe4;
        case 0x460fe8u: goto label_460fe8;
        case 0x460fecu: goto label_460fec;
        case 0x460ff0u: goto label_460ff0;
        case 0x460ff4u: goto label_460ff4;
        case 0x460ff8u: goto label_460ff8;
        case 0x460ffcu: goto label_460ffc;
        case 0x461000u: goto label_461000;
        case 0x461004u: goto label_461004;
        case 0x461008u: goto label_461008;
        case 0x46100cu: goto label_46100c;
        case 0x461010u: goto label_461010;
        case 0x461014u: goto label_461014;
        case 0x461018u: goto label_461018;
        case 0x46101cu: goto label_46101c;
        case 0x461020u: goto label_461020;
        case 0x461024u: goto label_461024;
        case 0x461028u: goto label_461028;
        case 0x46102cu: goto label_46102c;
        case 0x461030u: goto label_461030;
        case 0x461034u: goto label_461034;
        case 0x461038u: goto label_461038;
        case 0x46103cu: goto label_46103c;
        case 0x461040u: goto label_461040;
        case 0x461044u: goto label_461044;
        case 0x461048u: goto label_461048;
        case 0x46104cu: goto label_46104c;
        case 0x461050u: goto label_461050;
        case 0x461054u: goto label_461054;
        case 0x461058u: goto label_461058;
        case 0x46105cu: goto label_46105c;
        case 0x461060u: goto label_461060;
        case 0x461064u: goto label_461064;
        case 0x461068u: goto label_461068;
        case 0x46106cu: goto label_46106c;
        case 0x461070u: goto label_461070;
        case 0x461074u: goto label_461074;
        case 0x461078u: goto label_461078;
        case 0x46107cu: goto label_46107c;
        case 0x461080u: goto label_461080;
        case 0x461084u: goto label_461084;
        case 0x461088u: goto label_461088;
        case 0x46108cu: goto label_46108c;
        case 0x461090u: goto label_461090;
        case 0x461094u: goto label_461094;
        case 0x461098u: goto label_461098;
        case 0x46109cu: goto label_46109c;
        case 0x4610a0u: goto label_4610a0;
        case 0x4610a4u: goto label_4610a4;
        case 0x4610a8u: goto label_4610a8;
        case 0x4610acu: goto label_4610ac;
        case 0x4610b0u: goto label_4610b0;
        case 0x4610b4u: goto label_4610b4;
        case 0x4610b8u: goto label_4610b8;
        case 0x4610bcu: goto label_4610bc;
        case 0x4610c0u: goto label_4610c0;
        case 0x4610c4u: goto label_4610c4;
        case 0x4610c8u: goto label_4610c8;
        case 0x4610ccu: goto label_4610cc;
        case 0x4610d0u: goto label_4610d0;
        case 0x4610d4u: goto label_4610d4;
        case 0x4610d8u: goto label_4610d8;
        case 0x4610dcu: goto label_4610dc;
        case 0x4610e0u: goto label_4610e0;
        case 0x4610e4u: goto label_4610e4;
        case 0x4610e8u: goto label_4610e8;
        case 0x4610ecu: goto label_4610ec;
        case 0x4610f0u: goto label_4610f0;
        case 0x4610f4u: goto label_4610f4;
        case 0x4610f8u: goto label_4610f8;
        case 0x4610fcu: goto label_4610fc;
        case 0x461100u: goto label_461100;
        case 0x461104u: goto label_461104;
        case 0x461108u: goto label_461108;
        case 0x46110cu: goto label_46110c;
        case 0x461110u: goto label_461110;
        case 0x461114u: goto label_461114;
        case 0x461118u: goto label_461118;
        case 0x46111cu: goto label_46111c;
        case 0x461120u: goto label_461120;
        case 0x461124u: goto label_461124;
        case 0x461128u: goto label_461128;
        case 0x46112cu: goto label_46112c;
        case 0x461130u: goto label_461130;
        case 0x461134u: goto label_461134;
        case 0x461138u: goto label_461138;
        case 0x46113cu: goto label_46113c;
        case 0x461140u: goto label_461140;
        case 0x461144u: goto label_461144;
        case 0x461148u: goto label_461148;
        case 0x46114cu: goto label_46114c;
        case 0x461150u: goto label_461150;
        case 0x461154u: goto label_461154;
        case 0x461158u: goto label_461158;
        case 0x46115cu: goto label_46115c;
        case 0x461160u: goto label_461160;
        case 0x461164u: goto label_461164;
        case 0x461168u: goto label_461168;
        case 0x46116cu: goto label_46116c;
        case 0x461170u: goto label_461170;
        case 0x461174u: goto label_461174;
        case 0x461178u: goto label_461178;
        case 0x46117cu: goto label_46117c;
        case 0x461180u: goto label_461180;
        case 0x461184u: goto label_461184;
        case 0x461188u: goto label_461188;
        case 0x46118cu: goto label_46118c;
        case 0x461190u: goto label_461190;
        case 0x461194u: goto label_461194;
        case 0x461198u: goto label_461198;
        case 0x46119cu: goto label_46119c;
        case 0x4611a0u: goto label_4611a0;
        case 0x4611a4u: goto label_4611a4;
        case 0x4611a8u: goto label_4611a8;
        case 0x4611acu: goto label_4611ac;
        case 0x4611b0u: goto label_4611b0;
        case 0x4611b4u: goto label_4611b4;
        case 0x4611b8u: goto label_4611b8;
        case 0x4611bcu: goto label_4611bc;
        case 0x4611c0u: goto label_4611c0;
        case 0x4611c4u: goto label_4611c4;
        case 0x4611c8u: goto label_4611c8;
        case 0x4611ccu: goto label_4611cc;
        case 0x4611d0u: goto label_4611d0;
        case 0x4611d4u: goto label_4611d4;
        case 0x4611d8u: goto label_4611d8;
        case 0x4611dcu: goto label_4611dc;
        case 0x4611e0u: goto label_4611e0;
        case 0x4611e4u: goto label_4611e4;
        case 0x4611e8u: goto label_4611e8;
        case 0x4611ecu: goto label_4611ec;
        case 0x4611f0u: goto label_4611f0;
        case 0x4611f4u: goto label_4611f4;
        case 0x4611f8u: goto label_4611f8;
        case 0x4611fcu: goto label_4611fc;
        case 0x461200u: goto label_461200;
        case 0x461204u: goto label_461204;
        case 0x461208u: goto label_461208;
        case 0x46120cu: goto label_46120c;
        case 0x461210u: goto label_461210;
        case 0x461214u: goto label_461214;
        case 0x461218u: goto label_461218;
        case 0x46121cu: goto label_46121c;
        case 0x461220u: goto label_461220;
        case 0x461224u: goto label_461224;
        case 0x461228u: goto label_461228;
        case 0x46122cu: goto label_46122c;
        case 0x461230u: goto label_461230;
        case 0x461234u: goto label_461234;
        case 0x461238u: goto label_461238;
        case 0x46123cu: goto label_46123c;
        case 0x461240u: goto label_461240;
        case 0x461244u: goto label_461244;
        case 0x461248u: goto label_461248;
        case 0x46124cu: goto label_46124c;
        case 0x461250u: goto label_461250;
        case 0x461254u: goto label_461254;
        case 0x461258u: goto label_461258;
        case 0x46125cu: goto label_46125c;
        case 0x461260u: goto label_461260;
        case 0x461264u: goto label_461264;
        case 0x461268u: goto label_461268;
        case 0x46126cu: goto label_46126c;
        case 0x461270u: goto label_461270;
        case 0x461274u: goto label_461274;
        case 0x461278u: goto label_461278;
        case 0x46127cu: goto label_46127c;
        case 0x461280u: goto label_461280;
        case 0x461284u: goto label_461284;
        case 0x461288u: goto label_461288;
        case 0x46128cu: goto label_46128c;
        case 0x461290u: goto label_461290;
        case 0x461294u: goto label_461294;
        case 0x461298u: goto label_461298;
        case 0x46129cu: goto label_46129c;
        case 0x4612a0u: goto label_4612a0;
        case 0x4612a4u: goto label_4612a4;
        case 0x4612a8u: goto label_4612a8;
        case 0x4612acu: goto label_4612ac;
        case 0x4612b0u: goto label_4612b0;
        case 0x4612b4u: goto label_4612b4;
        case 0x4612b8u: goto label_4612b8;
        case 0x4612bcu: goto label_4612bc;
        case 0x4612c0u: goto label_4612c0;
        case 0x4612c4u: goto label_4612c4;
        case 0x4612c8u: goto label_4612c8;
        case 0x4612ccu: goto label_4612cc;
        case 0x4612d0u: goto label_4612d0;
        case 0x4612d4u: goto label_4612d4;
        case 0x4612d8u: goto label_4612d8;
        case 0x4612dcu: goto label_4612dc;
        case 0x4612e0u: goto label_4612e0;
        case 0x4612e4u: goto label_4612e4;
        case 0x4612e8u: goto label_4612e8;
        case 0x4612ecu: goto label_4612ec;
        case 0x4612f0u: goto label_4612f0;
        case 0x4612f4u: goto label_4612f4;
        case 0x4612f8u: goto label_4612f8;
        case 0x4612fcu: goto label_4612fc;
        case 0x461300u: goto label_461300;
        case 0x461304u: goto label_461304;
        case 0x461308u: goto label_461308;
        case 0x46130cu: goto label_46130c;
        case 0x461310u: goto label_461310;
        case 0x461314u: goto label_461314;
        case 0x461318u: goto label_461318;
        case 0x46131cu: goto label_46131c;
        case 0x461320u: goto label_461320;
        case 0x461324u: goto label_461324;
        case 0x461328u: goto label_461328;
        case 0x46132cu: goto label_46132c;
        case 0x461330u: goto label_461330;
        case 0x461334u: goto label_461334;
        case 0x461338u: goto label_461338;
        case 0x46133cu: goto label_46133c;
        case 0x461340u: goto label_461340;
        case 0x461344u: goto label_461344;
        case 0x461348u: goto label_461348;
        case 0x46134cu: goto label_46134c;
        case 0x461350u: goto label_461350;
        case 0x461354u: goto label_461354;
        case 0x461358u: goto label_461358;
        case 0x46135cu: goto label_46135c;
        case 0x461360u: goto label_461360;
        case 0x461364u: goto label_461364;
        case 0x461368u: goto label_461368;
        case 0x46136cu: goto label_46136c;
        case 0x461370u: goto label_461370;
        case 0x461374u: goto label_461374;
        case 0x461378u: goto label_461378;
        case 0x46137cu: goto label_46137c;
        case 0x461380u: goto label_461380;
        case 0x461384u: goto label_461384;
        case 0x461388u: goto label_461388;
        case 0x46138cu: goto label_46138c;
        case 0x461390u: goto label_461390;
        case 0x461394u: goto label_461394;
        case 0x461398u: goto label_461398;
        case 0x46139cu: goto label_46139c;
        case 0x4613a0u: goto label_4613a0;
        case 0x4613a4u: goto label_4613a4;
        case 0x4613a8u: goto label_4613a8;
        case 0x4613acu: goto label_4613ac;
        case 0x4613b0u: goto label_4613b0;
        case 0x4613b4u: goto label_4613b4;
        case 0x4613b8u: goto label_4613b8;
        case 0x4613bcu: goto label_4613bc;
        case 0x4613c0u: goto label_4613c0;
        case 0x4613c4u: goto label_4613c4;
        case 0x4613c8u: goto label_4613c8;
        case 0x4613ccu: goto label_4613cc;
        case 0x4613d0u: goto label_4613d0;
        case 0x4613d4u: goto label_4613d4;
        case 0x4613d8u: goto label_4613d8;
        case 0x4613dcu: goto label_4613dc;
        case 0x4613e0u: goto label_4613e0;
        case 0x4613e4u: goto label_4613e4;
        case 0x4613e8u: goto label_4613e8;
        case 0x4613ecu: goto label_4613ec;
        case 0x4613f0u: goto label_4613f0;
        case 0x4613f4u: goto label_4613f4;
        case 0x4613f8u: goto label_4613f8;
        case 0x4613fcu: goto label_4613fc;
        case 0x461400u: goto label_461400;
        case 0x461404u: goto label_461404;
        case 0x461408u: goto label_461408;
        case 0x46140cu: goto label_46140c;
        case 0x461410u: goto label_461410;
        case 0x461414u: goto label_461414;
        case 0x461418u: goto label_461418;
        case 0x46141cu: goto label_46141c;
        case 0x461420u: goto label_461420;
        case 0x461424u: goto label_461424;
        case 0x461428u: goto label_461428;
        case 0x46142cu: goto label_46142c;
        case 0x461430u: goto label_461430;
        case 0x461434u: goto label_461434;
        case 0x461438u: goto label_461438;
        case 0x46143cu: goto label_46143c;
        case 0x461440u: goto label_461440;
        case 0x461444u: goto label_461444;
        case 0x461448u: goto label_461448;
        case 0x46144cu: goto label_46144c;
        case 0x461450u: goto label_461450;
        case 0x461454u: goto label_461454;
        case 0x461458u: goto label_461458;
        case 0x46145cu: goto label_46145c;
        case 0x461460u: goto label_461460;
        case 0x461464u: goto label_461464;
        case 0x461468u: goto label_461468;
        case 0x46146cu: goto label_46146c;
        case 0x461470u: goto label_461470;
        case 0x461474u: goto label_461474;
        case 0x461478u: goto label_461478;
        case 0x46147cu: goto label_46147c;
        case 0x461480u: goto label_461480;
        case 0x461484u: goto label_461484;
        case 0x461488u: goto label_461488;
        case 0x46148cu: goto label_46148c;
        case 0x461490u: goto label_461490;
        case 0x461494u: goto label_461494;
        case 0x461498u: goto label_461498;
        case 0x46149cu: goto label_46149c;
        case 0x4614a0u: goto label_4614a0;
        case 0x4614a4u: goto label_4614a4;
        case 0x4614a8u: goto label_4614a8;
        case 0x4614acu: goto label_4614ac;
        case 0x4614b0u: goto label_4614b0;
        case 0x4614b4u: goto label_4614b4;
        case 0x4614b8u: goto label_4614b8;
        case 0x4614bcu: goto label_4614bc;
        case 0x4614c0u: goto label_4614c0;
        case 0x4614c4u: goto label_4614c4;
        case 0x4614c8u: goto label_4614c8;
        case 0x4614ccu: goto label_4614cc;
        case 0x4614d0u: goto label_4614d0;
        case 0x4614d4u: goto label_4614d4;
        case 0x4614d8u: goto label_4614d8;
        case 0x4614dcu: goto label_4614dc;
        case 0x4614e0u: goto label_4614e0;
        case 0x4614e4u: goto label_4614e4;
        case 0x4614e8u: goto label_4614e8;
        case 0x4614ecu: goto label_4614ec;
        case 0x4614f0u: goto label_4614f0;
        case 0x4614f4u: goto label_4614f4;
        case 0x4614f8u: goto label_4614f8;
        case 0x4614fcu: goto label_4614fc;
        case 0x461500u: goto label_461500;
        case 0x461504u: goto label_461504;
        case 0x461508u: goto label_461508;
        case 0x46150cu: goto label_46150c;
        case 0x461510u: goto label_461510;
        case 0x461514u: goto label_461514;
        case 0x461518u: goto label_461518;
        case 0x46151cu: goto label_46151c;
        case 0x461520u: goto label_461520;
        case 0x461524u: goto label_461524;
        case 0x461528u: goto label_461528;
        case 0x46152cu: goto label_46152c;
        case 0x461530u: goto label_461530;
        case 0x461534u: goto label_461534;
        case 0x461538u: goto label_461538;
        case 0x46153cu: goto label_46153c;
        case 0x461540u: goto label_461540;
        case 0x461544u: goto label_461544;
        case 0x461548u: goto label_461548;
        case 0x46154cu: goto label_46154c;
        case 0x461550u: goto label_461550;
        case 0x461554u: goto label_461554;
        case 0x461558u: goto label_461558;
        case 0x46155cu: goto label_46155c;
        case 0x461560u: goto label_461560;
        case 0x461564u: goto label_461564;
        case 0x461568u: goto label_461568;
        case 0x46156cu: goto label_46156c;
        case 0x461570u: goto label_461570;
        case 0x461574u: goto label_461574;
        case 0x461578u: goto label_461578;
        case 0x46157cu: goto label_46157c;
        case 0x461580u: goto label_461580;
        case 0x461584u: goto label_461584;
        case 0x461588u: goto label_461588;
        case 0x46158cu: goto label_46158c;
        case 0x461590u: goto label_461590;
        case 0x461594u: goto label_461594;
        case 0x461598u: goto label_461598;
        case 0x46159cu: goto label_46159c;
        case 0x4615a0u: goto label_4615a0;
        case 0x4615a4u: goto label_4615a4;
        case 0x4615a8u: goto label_4615a8;
        case 0x4615acu: goto label_4615ac;
        case 0x4615b0u: goto label_4615b0;
        case 0x4615b4u: goto label_4615b4;
        case 0x4615b8u: goto label_4615b8;
        case 0x4615bcu: goto label_4615bc;
        case 0x4615c0u: goto label_4615c0;
        case 0x4615c4u: goto label_4615c4;
        case 0x4615c8u: goto label_4615c8;
        case 0x4615ccu: goto label_4615cc;
        case 0x4615d0u: goto label_4615d0;
        case 0x4615d4u: goto label_4615d4;
        case 0x4615d8u: goto label_4615d8;
        case 0x4615dcu: goto label_4615dc;
        case 0x4615e0u: goto label_4615e0;
        case 0x4615e4u: goto label_4615e4;
        case 0x4615e8u: goto label_4615e8;
        case 0x4615ecu: goto label_4615ec;
        case 0x4615f0u: goto label_4615f0;
        case 0x4615f4u: goto label_4615f4;
        case 0x4615f8u: goto label_4615f8;
        case 0x4615fcu: goto label_4615fc;
        case 0x461600u: goto label_461600;
        case 0x461604u: goto label_461604;
        case 0x461608u: goto label_461608;
        case 0x46160cu: goto label_46160c;
        case 0x461610u: goto label_461610;
        case 0x461614u: goto label_461614;
        case 0x461618u: goto label_461618;
        case 0x46161cu: goto label_46161c;
        case 0x461620u: goto label_461620;
        case 0x461624u: goto label_461624;
        case 0x461628u: goto label_461628;
        case 0x46162cu: goto label_46162c;
        case 0x461630u: goto label_461630;
        case 0x461634u: goto label_461634;
        case 0x461638u: goto label_461638;
        case 0x46163cu: goto label_46163c;
        case 0x461640u: goto label_461640;
        case 0x461644u: goto label_461644;
        case 0x461648u: goto label_461648;
        case 0x46164cu: goto label_46164c;
        case 0x461650u: goto label_461650;
        case 0x461654u: goto label_461654;
        case 0x461658u: goto label_461658;
        case 0x46165cu: goto label_46165c;
        case 0x461660u: goto label_461660;
        case 0x461664u: goto label_461664;
        case 0x461668u: goto label_461668;
        case 0x46166cu: goto label_46166c;
        case 0x461670u: goto label_461670;
        case 0x461674u: goto label_461674;
        case 0x461678u: goto label_461678;
        case 0x46167cu: goto label_46167c;
        case 0x461680u: goto label_461680;
        case 0x461684u: goto label_461684;
        case 0x461688u: goto label_461688;
        case 0x46168cu: goto label_46168c;
        case 0x461690u: goto label_461690;
        case 0x461694u: goto label_461694;
        case 0x461698u: goto label_461698;
        case 0x46169cu: goto label_46169c;
        case 0x4616a0u: goto label_4616a0;
        case 0x4616a4u: goto label_4616a4;
        case 0x4616a8u: goto label_4616a8;
        case 0x4616acu: goto label_4616ac;
        case 0x4616b0u: goto label_4616b0;
        case 0x4616b4u: goto label_4616b4;
        case 0x4616b8u: goto label_4616b8;
        case 0x4616bcu: goto label_4616bc;
        case 0x4616c0u: goto label_4616c0;
        case 0x4616c4u: goto label_4616c4;
        case 0x4616c8u: goto label_4616c8;
        case 0x4616ccu: goto label_4616cc;
        case 0x4616d0u: goto label_4616d0;
        case 0x4616d4u: goto label_4616d4;
        case 0x4616d8u: goto label_4616d8;
        case 0x4616dcu: goto label_4616dc;
        case 0x4616e0u: goto label_4616e0;
        case 0x4616e4u: goto label_4616e4;
        case 0x4616e8u: goto label_4616e8;
        case 0x4616ecu: goto label_4616ec;
        case 0x4616f0u: goto label_4616f0;
        case 0x4616f4u: goto label_4616f4;
        case 0x4616f8u: goto label_4616f8;
        case 0x4616fcu: goto label_4616fc;
        case 0x461700u: goto label_461700;
        case 0x461704u: goto label_461704;
        case 0x461708u: goto label_461708;
        case 0x46170cu: goto label_46170c;
        case 0x461710u: goto label_461710;
        case 0x461714u: goto label_461714;
        case 0x461718u: goto label_461718;
        case 0x46171cu: goto label_46171c;
        case 0x461720u: goto label_461720;
        case 0x461724u: goto label_461724;
        case 0x461728u: goto label_461728;
        case 0x46172cu: goto label_46172c;
        case 0x461730u: goto label_461730;
        case 0x461734u: goto label_461734;
        case 0x461738u: goto label_461738;
        case 0x46173cu: goto label_46173c;
        case 0x461740u: goto label_461740;
        case 0x461744u: goto label_461744;
        case 0x461748u: goto label_461748;
        case 0x46174cu: goto label_46174c;
        case 0x461750u: goto label_461750;
        case 0x461754u: goto label_461754;
        case 0x461758u: goto label_461758;
        case 0x46175cu: goto label_46175c;
        case 0x461760u: goto label_461760;
        case 0x461764u: goto label_461764;
        case 0x461768u: goto label_461768;
        case 0x46176cu: goto label_46176c;
        case 0x461770u: goto label_461770;
        case 0x461774u: goto label_461774;
        case 0x461778u: goto label_461778;
        case 0x46177cu: goto label_46177c;
        case 0x461780u: goto label_461780;
        case 0x461784u: goto label_461784;
        case 0x461788u: goto label_461788;
        case 0x46178cu: goto label_46178c;
        case 0x461790u: goto label_461790;
        case 0x461794u: goto label_461794;
        case 0x461798u: goto label_461798;
        case 0x46179cu: goto label_46179c;
        case 0x4617a0u: goto label_4617a0;
        case 0x4617a4u: goto label_4617a4;
        case 0x4617a8u: goto label_4617a8;
        case 0x4617acu: goto label_4617ac;
        case 0x4617b0u: goto label_4617b0;
        case 0x4617b4u: goto label_4617b4;
        case 0x4617b8u: goto label_4617b8;
        case 0x4617bcu: goto label_4617bc;
        case 0x4617c0u: goto label_4617c0;
        case 0x4617c4u: goto label_4617c4;
        case 0x4617c8u: goto label_4617c8;
        case 0x4617ccu: goto label_4617cc;
        case 0x4617d0u: goto label_4617d0;
        case 0x4617d4u: goto label_4617d4;
        case 0x4617d8u: goto label_4617d8;
        case 0x4617dcu: goto label_4617dc;
        case 0x4617e0u: goto label_4617e0;
        case 0x4617e4u: goto label_4617e4;
        case 0x4617e8u: goto label_4617e8;
        case 0x4617ecu: goto label_4617ec;
        case 0x4617f0u: goto label_4617f0;
        case 0x4617f4u: goto label_4617f4;
        case 0x4617f8u: goto label_4617f8;
        case 0x4617fcu: goto label_4617fc;
        case 0x461800u: goto label_461800;
        case 0x461804u: goto label_461804;
        case 0x461808u: goto label_461808;
        case 0x46180cu: goto label_46180c;
        case 0x461810u: goto label_461810;
        case 0x461814u: goto label_461814;
        case 0x461818u: goto label_461818;
        case 0x46181cu: goto label_46181c;
        case 0x461820u: goto label_461820;
        case 0x461824u: goto label_461824;
        case 0x461828u: goto label_461828;
        case 0x46182cu: goto label_46182c;
        case 0x461830u: goto label_461830;
        case 0x461834u: goto label_461834;
        case 0x461838u: goto label_461838;
        case 0x46183cu: goto label_46183c;
        case 0x461840u: goto label_461840;
        case 0x461844u: goto label_461844;
        case 0x461848u: goto label_461848;
        case 0x46184cu: goto label_46184c;
        case 0x461850u: goto label_461850;
        case 0x461854u: goto label_461854;
        case 0x461858u: goto label_461858;
        case 0x46185cu: goto label_46185c;
        case 0x461860u: goto label_461860;
        case 0x461864u: goto label_461864;
        case 0x461868u: goto label_461868;
        case 0x46186cu: goto label_46186c;
        case 0x461870u: goto label_461870;
        case 0x461874u: goto label_461874;
        case 0x461878u: goto label_461878;
        case 0x46187cu: goto label_46187c;
        case 0x461880u: goto label_461880;
        case 0x461884u: goto label_461884;
        case 0x461888u: goto label_461888;
        case 0x46188cu: goto label_46188c;
        case 0x461890u: goto label_461890;
        case 0x461894u: goto label_461894;
        case 0x461898u: goto label_461898;
        case 0x46189cu: goto label_46189c;
        case 0x4618a0u: goto label_4618a0;
        case 0x4618a4u: goto label_4618a4;
        case 0x4618a8u: goto label_4618a8;
        case 0x4618acu: goto label_4618ac;
        case 0x4618b0u: goto label_4618b0;
        case 0x4618b4u: goto label_4618b4;
        case 0x4618b8u: goto label_4618b8;
        case 0x4618bcu: goto label_4618bc;
        case 0x4618c0u: goto label_4618c0;
        case 0x4618c4u: goto label_4618c4;
        case 0x4618c8u: goto label_4618c8;
        case 0x4618ccu: goto label_4618cc;
        case 0x4618d0u: goto label_4618d0;
        case 0x4618d4u: goto label_4618d4;
        case 0x4618d8u: goto label_4618d8;
        case 0x4618dcu: goto label_4618dc;
        case 0x4618e0u: goto label_4618e0;
        case 0x4618e4u: goto label_4618e4;
        case 0x4618e8u: goto label_4618e8;
        case 0x4618ecu: goto label_4618ec;
        case 0x4618f0u: goto label_4618f0;
        case 0x4618f4u: goto label_4618f4;
        case 0x4618f8u: goto label_4618f8;
        case 0x4618fcu: goto label_4618fc;
        case 0x461900u: goto label_461900;
        case 0x461904u: goto label_461904;
        case 0x461908u: goto label_461908;
        case 0x46190cu: goto label_46190c;
        case 0x461910u: goto label_461910;
        case 0x461914u: goto label_461914;
        case 0x461918u: goto label_461918;
        case 0x46191cu: goto label_46191c;
        case 0x461920u: goto label_461920;
        case 0x461924u: goto label_461924;
        case 0x461928u: goto label_461928;
        case 0x46192cu: goto label_46192c;
        case 0x461930u: goto label_461930;
        case 0x461934u: goto label_461934;
        case 0x461938u: goto label_461938;
        case 0x46193cu: goto label_46193c;
        case 0x461940u: goto label_461940;
        case 0x461944u: goto label_461944;
        case 0x461948u: goto label_461948;
        case 0x46194cu: goto label_46194c;
        case 0x461950u: goto label_461950;
        case 0x461954u: goto label_461954;
        case 0x461958u: goto label_461958;
        case 0x46195cu: goto label_46195c;
        case 0x461960u: goto label_461960;
        case 0x461964u: goto label_461964;
        case 0x461968u: goto label_461968;
        case 0x46196cu: goto label_46196c;
        case 0x461970u: goto label_461970;
        case 0x461974u: goto label_461974;
        case 0x461978u: goto label_461978;
        case 0x46197cu: goto label_46197c;
        case 0x461980u: goto label_461980;
        case 0x461984u: goto label_461984;
        case 0x461988u: goto label_461988;
        case 0x46198cu: goto label_46198c;
        case 0x461990u: goto label_461990;
        case 0x461994u: goto label_461994;
        case 0x461998u: goto label_461998;
        case 0x46199cu: goto label_46199c;
        case 0x4619a0u: goto label_4619a0;
        case 0x4619a4u: goto label_4619a4;
        case 0x4619a8u: goto label_4619a8;
        case 0x4619acu: goto label_4619ac;
        case 0x4619b0u: goto label_4619b0;
        case 0x4619b4u: goto label_4619b4;
        case 0x4619b8u: goto label_4619b8;
        case 0x4619bcu: goto label_4619bc;
        case 0x4619c0u: goto label_4619c0;
        case 0x4619c4u: goto label_4619c4;
        case 0x4619c8u: goto label_4619c8;
        case 0x4619ccu: goto label_4619cc;
        case 0x4619d0u: goto label_4619d0;
        case 0x4619d4u: goto label_4619d4;
        case 0x4619d8u: goto label_4619d8;
        case 0x4619dcu: goto label_4619dc;
        case 0x4619e0u: goto label_4619e0;
        case 0x4619e4u: goto label_4619e4;
        case 0x4619e8u: goto label_4619e8;
        case 0x4619ecu: goto label_4619ec;
        case 0x4619f0u: goto label_4619f0;
        case 0x4619f4u: goto label_4619f4;
        case 0x4619f8u: goto label_4619f8;
        case 0x4619fcu: goto label_4619fc;
        case 0x461a00u: goto label_461a00;
        case 0x461a04u: goto label_461a04;
        case 0x461a08u: goto label_461a08;
        case 0x461a0cu: goto label_461a0c;
        case 0x461a10u: goto label_461a10;
        case 0x461a14u: goto label_461a14;
        case 0x461a18u: goto label_461a18;
        case 0x461a1cu: goto label_461a1c;
        case 0x461a20u: goto label_461a20;
        case 0x461a24u: goto label_461a24;
        case 0x461a28u: goto label_461a28;
        case 0x461a2cu: goto label_461a2c;
        case 0x461a30u: goto label_461a30;
        case 0x461a34u: goto label_461a34;
        case 0x461a38u: goto label_461a38;
        case 0x461a3cu: goto label_461a3c;
        case 0x461a40u: goto label_461a40;
        case 0x461a44u: goto label_461a44;
        case 0x461a48u: goto label_461a48;
        case 0x461a4cu: goto label_461a4c;
        case 0x461a50u: goto label_461a50;
        case 0x461a54u: goto label_461a54;
        case 0x461a58u: goto label_461a58;
        case 0x461a5cu: goto label_461a5c;
        case 0x461a60u: goto label_461a60;
        case 0x461a64u: goto label_461a64;
        case 0x461a68u: goto label_461a68;
        case 0x461a6cu: goto label_461a6c;
        case 0x461a70u: goto label_461a70;
        case 0x461a74u: goto label_461a74;
        case 0x461a78u: goto label_461a78;
        case 0x461a7cu: goto label_461a7c;
        case 0x461a80u: goto label_461a80;
        case 0x461a84u: goto label_461a84;
        case 0x461a88u: goto label_461a88;
        case 0x461a8cu: goto label_461a8c;
        case 0x461a90u: goto label_461a90;
        case 0x461a94u: goto label_461a94;
        case 0x461a98u: goto label_461a98;
        case 0x461a9cu: goto label_461a9c;
        case 0x461aa0u: goto label_461aa0;
        case 0x461aa4u: goto label_461aa4;
        case 0x461aa8u: goto label_461aa8;
        case 0x461aacu: goto label_461aac;
        case 0x461ab0u: goto label_461ab0;
        case 0x461ab4u: goto label_461ab4;
        case 0x461ab8u: goto label_461ab8;
        case 0x461abcu: goto label_461abc;
        case 0x461ac0u: goto label_461ac0;
        case 0x461ac4u: goto label_461ac4;
        case 0x461ac8u: goto label_461ac8;
        case 0x461accu: goto label_461acc;
        case 0x461ad0u: goto label_461ad0;
        case 0x461ad4u: goto label_461ad4;
        case 0x461ad8u: goto label_461ad8;
        case 0x461adcu: goto label_461adc;
        case 0x461ae0u: goto label_461ae0;
        case 0x461ae4u: goto label_461ae4;
        case 0x461ae8u: goto label_461ae8;
        case 0x461aecu: goto label_461aec;
        case 0x461af0u: goto label_461af0;
        case 0x461af4u: goto label_461af4;
        case 0x461af8u: goto label_461af8;
        case 0x461afcu: goto label_461afc;
        case 0x461b00u: goto label_461b00;
        case 0x461b04u: goto label_461b04;
        case 0x461b08u: goto label_461b08;
        case 0x461b0cu: goto label_461b0c;
        case 0x461b10u: goto label_461b10;
        case 0x461b14u: goto label_461b14;
        case 0x461b18u: goto label_461b18;
        case 0x461b1cu: goto label_461b1c;
        case 0x461b20u: goto label_461b20;
        case 0x461b24u: goto label_461b24;
        case 0x461b28u: goto label_461b28;
        case 0x461b2cu: goto label_461b2c;
        default: break;
    }

    ctx->pc = 0x460aa0u;

label_460aa0:
    // 0x460aa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x460aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_460aa4:
    // 0x460aa4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x460aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_460aa8:
    // 0x460aa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x460aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_460aac:
    // 0x460aac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x460aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_460ab0:
    // 0x460ab0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x460ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_460ab4:
    // 0x460ab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x460ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_460ab8:
    // 0x460ab8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x460ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_460abc:
    // 0x460abc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x460abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_460ac0:
    // 0x460ac0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x460ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_460ac4:
    // 0x460ac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x460ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_460ac8:
    // 0x460ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x460ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_460acc:
    // 0x460acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460ad0:
    // 0x460ad0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x460ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_460ad4:
    // 0x460ad4: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x460ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_460ad8:
    // 0x460ad8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x460ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_460adc:
    // 0x460adc: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x460adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_460ae0:
    // 0x460ae0: 0xc0c9a58  jal         func_326960
label_460ae4:
    if (ctx->pc == 0x460AE4u) {
        ctx->pc = 0x460AE4u;
            // 0x460ae4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460AE8u;
        goto label_460ae8;
    }
    ctx->pc = 0x460AE0u;
    SET_GPR_U32(ctx, 31, 0x460AE8u);
    ctx->pc = 0x460AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460AE0u;
            // 0x460ae4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460AE8u; }
        if (ctx->pc != 0x460AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460AE8u; }
        if (ctx->pc != 0x460AE8u) { return; }
    }
    ctx->pc = 0x460AE8u;
label_460ae8:
    // 0x460ae8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x460ae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460aec:
    // 0x460aec: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460af0:
    // 0x460af0: 0xc0b90e0  jal         func_2E4380
label_460af4:
    if (ctx->pc == 0x460AF4u) {
        ctx->pc = 0x460AF4u;
            // 0x460af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x460AF8u;
        goto label_460af8;
    }
    ctx->pc = 0x460AF0u;
    SET_GPR_U32(ctx, 31, 0x460AF8u);
    ctx->pc = 0x460AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460AF0u;
            // 0x460af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460AF8u; }
        if (ctx->pc != 0x460AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460AF8u; }
        if (ctx->pc != 0x460AF8u) { return; }
    }
    ctx->pc = 0x460AF8u;
label_460af8:
    // 0x460af8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x460af8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460afc:
    // 0x460afc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460b00:
    // 0x460b00: 0xc0b90e0  jal         func_2E4380
label_460b04:
    if (ctx->pc == 0x460B04u) {
        ctx->pc = 0x460B04u;
            // 0x460b04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x460B08u;
        goto label_460b08;
    }
    ctx->pc = 0x460B00u;
    SET_GPR_U32(ctx, 31, 0x460B08u);
    ctx->pc = 0x460B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B00u;
            // 0x460b04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B08u; }
        if (ctx->pc != 0x460B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B08u; }
        if (ctx->pc != 0x460B08u) { return; }
    }
    ctx->pc = 0x460B08u;
label_460b08:
    // 0x460b08: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x460b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b0c:
    // 0x460b0c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460b10:
    // 0x460b10: 0xc0b90e0  jal         func_2E4380
label_460b14:
    if (ctx->pc == 0x460B14u) {
        ctx->pc = 0x460B14u;
            // 0x460b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460B18u;
        goto label_460b18;
    }
    ctx->pc = 0x460B10u;
    SET_GPR_U32(ctx, 31, 0x460B18u);
    ctx->pc = 0x460B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B10u;
            // 0x460b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B18u; }
        if (ctx->pc != 0x460B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B18u; }
        if (ctx->pc != 0x460B18u) { return; }
    }
    ctx->pc = 0x460B18u;
label_460b18:
    // 0x460b18: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x460b18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b1c:
    // 0x460b1c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460b20:
    // 0x460b20: 0xc0b90e0  jal         func_2E4380
label_460b24:
    if (ctx->pc == 0x460B24u) {
        ctx->pc = 0x460B24u;
            // 0x460b24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x460B28u;
        goto label_460b28;
    }
    ctx->pc = 0x460B20u;
    SET_GPR_U32(ctx, 31, 0x460B28u);
    ctx->pc = 0x460B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B20u;
            // 0x460b24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B28u; }
        if (ctx->pc != 0x460B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B28u; }
        if (ctx->pc != 0x460B28u) { return; }
    }
    ctx->pc = 0x460B28u;
label_460b28:
    // 0x460b28: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x460b28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b2c:
    // 0x460b2c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460b30:
    // 0x460b30: 0xc0b90e0  jal         func_2E4380
label_460b34:
    if (ctx->pc == 0x460B34u) {
        ctx->pc = 0x460B34u;
            // 0x460b34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x460B38u;
        goto label_460b38;
    }
    ctx->pc = 0x460B30u;
    SET_GPR_U32(ctx, 31, 0x460B38u);
    ctx->pc = 0x460B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B30u;
            // 0x460b34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B38u; }
        if (ctx->pc != 0x460B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B38u; }
        if (ctx->pc != 0x460B38u) { return; }
    }
    ctx->pc = 0x460B38u;
label_460b38:
    // 0x460b38: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x460b38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b3c:
    // 0x460b3c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460b40:
    // 0x460b40: 0xc0b90e0  jal         func_2E4380
label_460b44:
    if (ctx->pc == 0x460B44u) {
        ctx->pc = 0x460B44u;
            // 0x460b44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x460B48u;
        goto label_460b48;
    }
    ctx->pc = 0x460B40u;
    SET_GPR_U32(ctx, 31, 0x460B48u);
    ctx->pc = 0x460B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B40u;
            // 0x460b44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B48u; }
        if (ctx->pc != 0x460B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B48u; }
        if (ctx->pc != 0x460B48u) { return; }
    }
    ctx->pc = 0x460B48u;
label_460b48:
    // 0x460b48: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460b4c:
    // 0x460b4c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x460b4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b50:
    // 0x460b50: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x460b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_460b54:
    // 0x460b54: 0xc1232d8  jal         func_48CB60
label_460b58:
    if (ctx->pc == 0x460B58u) {
        ctx->pc = 0x460B58u;
            // 0x460b58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x460B5Cu;
        goto label_460b5c;
    }
    ctx->pc = 0x460B54u;
    SET_GPR_U32(ctx, 31, 0x460B5Cu);
    ctx->pc = 0x460B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B54u;
            // 0x460b58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B5Cu; }
        if (ctx->pc != 0x460B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B5Cu; }
        if (ctx->pc != 0x460B5Cu) { return; }
    }
    ctx->pc = 0x460B5Cu;
label_460b5c:
    // 0x460b5c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460b60:
    // 0x460b60: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x460b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_460b64:
    // 0x460b64: 0xc1232d8  jal         func_48CB60
label_460b68:
    if (ctx->pc == 0x460B68u) {
        ctx->pc = 0x460B68u;
            // 0x460b68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x460B6Cu;
        goto label_460b6c;
    }
    ctx->pc = 0x460B64u;
    SET_GPR_U32(ctx, 31, 0x460B6Cu);
    ctx->pc = 0x460B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B64u;
            // 0x460b68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B6Cu; }
        if (ctx->pc != 0x460B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B6Cu; }
        if (ctx->pc != 0x460B6Cu) { return; }
    }
    ctx->pc = 0x460B6Cu;
label_460b6c:
    // 0x460b6c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460b70:
    // 0x460b70: 0xc123328  jal         func_48CCA0
label_460b74:
    if (ctx->pc == 0x460B74u) {
        ctx->pc = 0x460B74u;
            // 0x460b74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460B78u;
        goto label_460b78;
    }
    ctx->pc = 0x460B70u;
    SET_GPR_U32(ctx, 31, 0x460B78u);
    ctx->pc = 0x460B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460B70u;
            // 0x460b74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B78u; }
        if (ctx->pc != 0x460B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460B78u; }
        if (ctx->pc != 0x460B78u) { return; }
    }
    ctx->pc = 0x460B78u;
label_460b78:
    // 0x460b78: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_460b7c:
    if (ctx->pc == 0x460B7Cu) {
        ctx->pc = 0x460B7Cu;
            // 0x460b7c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460B80u;
        goto label_460b80;
    }
    ctx->pc = 0x460B78u;
    {
        const bool branch_taken_0x460b78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x460B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460B78u;
            // 0x460b7c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460b78) {
            ctx->pc = 0x460B84u;
            goto label_460b84;
        }
    }
    ctx->pc = 0x460B80u;
label_460b80:
    // 0x460b80: 0x36520008  ori         $s2, $s2, 0x8
    ctx->pc = 0x460b80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_460b84:
    // 0x460b84: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_460b88:
    if (ctx->pc == 0x460B88u) {
        ctx->pc = 0x460B8Cu;
        goto label_460b8c;
    }
    ctx->pc = 0x460B84u;
    {
        const bool branch_taken_0x460b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b84) {
            ctx->pc = 0x460B90u;
            goto label_460b90;
        }
    }
    ctx->pc = 0x460B8Cu;
label_460b8c:
    // 0x460b8c: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x460b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_460b90:
    // 0x460b90: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_460b94:
    if (ctx->pc == 0x460B94u) {
        ctx->pc = 0x460B98u;
        goto label_460b98;
    }
    ctx->pc = 0x460B90u;
    {
        const bool branch_taken_0x460b90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b90) {
            ctx->pc = 0x460B9Cu;
            goto label_460b9c;
        }
    }
    ctx->pc = 0x460B98u;
label_460b98:
    // 0x460b98: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x460b98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_460b9c:
    // 0x460b9c: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
label_460ba0:
    if (ctx->pc == 0x460BA0u) {
        ctx->pc = 0x460BA4u;
        goto label_460ba4;
    }
    ctx->pc = 0x460B9Cu;
    {
        const bool branch_taken_0x460b9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b9c) {
            ctx->pc = 0x460BA8u;
            goto label_460ba8;
        }
    }
    ctx->pc = 0x460BA4u;
label_460ba4:
    // 0x460ba4: 0x36520020  ori         $s2, $s2, 0x20
    ctx->pc = 0x460ba4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
label_460ba8:
    // 0x460ba8: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
label_460bac:
    if (ctx->pc == 0x460BACu) {
        ctx->pc = 0x460BACu;
            // 0x460bac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x460BB0u;
        goto label_460bb0;
    }
    ctx->pc = 0x460BA8u;
    {
        const bool branch_taken_0x460ba8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ba8) {
            ctx->pc = 0x460BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460BA8u;
            // 0x460bac: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460BB8u;
            goto label_460bb8;
        }
    }
    ctx->pc = 0x460BB0u;
label_460bb0:
    // 0x460bb0: 0x36520040  ori         $s2, $s2, 0x40
    ctx->pc = 0x460bb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
label_460bb4:
    // 0x460bb4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460bb8:
    // 0x460bb8: 0xc0b90e0  jal         func_2E4380
label_460bbc:
    if (ctx->pc == 0x460BBCu) {
        ctx->pc = 0x460BBCu;
            // 0x460bbc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x460BC0u;
        goto label_460bc0;
    }
    ctx->pc = 0x460BB8u;
    SET_GPR_U32(ctx, 31, 0x460BC0u);
    ctx->pc = 0x460BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460BB8u;
            // 0x460bbc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BC0u; }
        if (ctx->pc != 0x460BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BC0u; }
        if (ctx->pc != 0x460BC0u) { return; }
    }
    ctx->pc = 0x460BC0u;
label_460bc0:
    // 0x460bc0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_460bc4:
    if (ctx->pc == 0x460BC4u) {
        ctx->pc = 0x460BC4u;
            // 0x460bc4: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x460BC8u;
        goto label_460bc8;
    }
    ctx->pc = 0x460BC0u;
    {
        const bool branch_taken_0x460bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460bc0) {
            ctx->pc = 0x460BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460BC0u;
            // 0x460bc4: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460C20u;
            goto label_460c20;
        }
    }
    ctx->pc = 0x460BC8u;
label_460bc8:
    // 0x460bc8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460bcc:
    // 0x460bcc: 0xc0b90e0  jal         func_2E4380
label_460bd0:
    if (ctx->pc == 0x460BD0u) {
        ctx->pc = 0x460BD0u;
            // 0x460bd0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x460BD4u;
        goto label_460bd4;
    }
    ctx->pc = 0x460BCCu;
    SET_GPR_U32(ctx, 31, 0x460BD4u);
    ctx->pc = 0x460BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460BCCu;
            // 0x460bd0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BD4u; }
        if (ctx->pc != 0x460BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BD4u; }
        if (ctx->pc != 0x460BD4u) { return; }
    }
    ctx->pc = 0x460BD4u;
label_460bd4:
    // 0x460bd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_460bd8:
    if (ctx->pc == 0x460BD8u) {
        ctx->pc = 0x460BDCu;
        goto label_460bdc;
    }
    ctx->pc = 0x460BD4u;
    {
        const bool branch_taken_0x460bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460bd4) {
            ctx->pc = 0x460C1Cu;
            goto label_460c1c;
        }
    }
    ctx->pc = 0x460BDCu;
label_460bdc:
    // 0x460bdc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460be0:
    // 0x460be0: 0xc0b90e0  jal         func_2E4380
label_460be4:
    if (ctx->pc == 0x460BE4u) {
        ctx->pc = 0x460BE4u;
            // 0x460be4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x460BE8u;
        goto label_460be8;
    }
    ctx->pc = 0x460BE0u;
    SET_GPR_U32(ctx, 31, 0x460BE8u);
    ctx->pc = 0x460BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460BE0u;
            // 0x460be4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BE8u; }
        if (ctx->pc != 0x460BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BE8u; }
        if (ctx->pc != 0x460BE8u) { return; }
    }
    ctx->pc = 0x460BE8u;
label_460be8:
    // 0x460be8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_460bec:
    if (ctx->pc == 0x460BECu) {
        ctx->pc = 0x460BF0u;
        goto label_460bf0;
    }
    ctx->pc = 0x460BE8u;
    {
        const bool branch_taken_0x460be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460be8) {
            ctx->pc = 0x460C1Cu;
            goto label_460c1c;
        }
    }
    ctx->pc = 0x460BF0u;
label_460bf0:
    // 0x460bf0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460bf4:
    // 0x460bf4: 0xc0b90e0  jal         func_2E4380
label_460bf8:
    if (ctx->pc == 0x460BF8u) {
        ctx->pc = 0x460BF8u;
            // 0x460bf8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x460BFCu;
        goto label_460bfc;
    }
    ctx->pc = 0x460BF4u;
    SET_GPR_U32(ctx, 31, 0x460BFCu);
    ctx->pc = 0x460BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460BF4u;
            // 0x460bf8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BFCu; }
        if (ctx->pc != 0x460BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460BFCu; }
        if (ctx->pc != 0x460BFCu) { return; }
    }
    ctx->pc = 0x460BFCu;
label_460bfc:
    // 0x460bfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_460c00:
    if (ctx->pc == 0x460C00u) {
        ctx->pc = 0x460C04u;
        goto label_460c04;
    }
    ctx->pc = 0x460BFCu;
    {
        const bool branch_taken_0x460bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460bfc) {
            ctx->pc = 0x460C1Cu;
            goto label_460c1c;
        }
    }
    ctx->pc = 0x460C04u;
label_460c04:
    // 0x460c04: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460c08:
    // 0x460c08: 0xc0b90e0  jal         func_2E4380
label_460c0c:
    if (ctx->pc == 0x460C0Cu) {
        ctx->pc = 0x460C0Cu;
            // 0x460c0c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x460C10u;
        goto label_460c10;
    }
    ctx->pc = 0x460C08u;
    SET_GPR_U32(ctx, 31, 0x460C10u);
    ctx->pc = 0x460C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460C08u;
            // 0x460c0c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C10u; }
        if (ctx->pc != 0x460C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C10u; }
        if (ctx->pc != 0x460C10u) { return; }
    }
    ctx->pc = 0x460C10u;
label_460c10:
    // 0x460c10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_460c14:
    if (ctx->pc == 0x460C14u) {
        ctx->pc = 0x460C18u;
        goto label_460c18;
    }
    ctx->pc = 0x460C10u;
    {
        const bool branch_taken_0x460c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c10) {
            ctx->pc = 0x460C1Cu;
            goto label_460c1c;
        }
    }
    ctx->pc = 0x460C18u;
label_460c18:
    // 0x460c18: 0x36520080  ori         $s2, $s2, 0x80
    ctx->pc = 0x460c18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
label_460c1c:
    // 0x460c1c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460c20:
    // 0x460c20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x460c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_460c24:
    // 0x460c24: 0xc1232d8  jal         func_48CB60
label_460c28:
    if (ctx->pc == 0x460C28u) {
        ctx->pc = 0x460C28u;
            // 0x460c28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x460C2Cu;
        goto label_460c2c;
    }
    ctx->pc = 0x460C24u;
    SET_GPR_U32(ctx, 31, 0x460C2Cu);
    ctx->pc = 0x460C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460C24u;
            // 0x460c28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C2Cu; }
        if (ctx->pc != 0x460C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C2Cu; }
        if (ctx->pc != 0x460C2Cu) { return; }
    }
    ctx->pc = 0x460C2Cu;
label_460c2c:
    // 0x460c2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460c30:
    // 0x460c30: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x460c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_460c34:
    // 0x460c34: 0x90420093  lbu         $v0, 0x93($v0)
    ctx->pc = 0x460c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 147)));
label_460c38:
    // 0x460c38: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_460c3c:
    if (ctx->pc == 0x460C3Cu) {
        ctx->pc = 0x460C3Cu;
            // 0x460c3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460C40u;
        goto label_460c40;
    }
    ctx->pc = 0x460C38u;
    {
        const bool branch_taken_0x460c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c38) {
            ctx->pc = 0x460C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460C38u;
            // 0x460c3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460C54u;
            goto label_460c54;
        }
    }
    ctx->pc = 0x460C40u;
label_460c40:
    // 0x460c40: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460c44:
    // 0x460c44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x460c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_460c48:
    // 0x460c48: 0xc1232d8  jal         func_48CB60
label_460c4c:
    if (ctx->pc == 0x460C4Cu) {
        ctx->pc = 0x460C4Cu;
            // 0x460c4c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x460C50u;
        goto label_460c50;
    }
    ctx->pc = 0x460C48u;
    SET_GPR_U32(ctx, 31, 0x460C50u);
    ctx->pc = 0x460C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460C48u;
            // 0x460c4c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C50u; }
        if (ctx->pc != 0x460C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C50u; }
        if (ctx->pc != 0x460C50u) { return; }
    }
    ctx->pc = 0x460C50u;
label_460c50:
    // 0x460c50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x460c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460c54:
    // 0x460c54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x460c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460c58:
    // 0x460c58: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x460c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_460c5c:
    // 0x460c5c: 0xc0b90e0  jal         func_2E4380
label_460c60:
    if (ctx->pc == 0x460C60u) {
        ctx->pc = 0x460C60u;
            // 0x460c60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460C64u;
        goto label_460c64;
    }
    ctx->pc = 0x460C5Cu;
    SET_GPR_U32(ctx, 31, 0x460C64u);
    ctx->pc = 0x460C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460C5Cu;
            // 0x460c60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C64u; }
        if (ctx->pc != 0x460C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460C64u; }
        if (ctx->pc != 0x460C64u) { return; }
    }
    ctx->pc = 0x460C64u;
label_460c64:
    // 0x460c64: 0x2e41000e  sltiu       $at, $s2, 0xE
    ctx->pc = 0x460c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_460c68:
    // 0x460c68: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_460c6c:
    if (ctx->pc == 0x460C6Cu) {
        ctx->pc = 0x460C6Cu;
            // 0x460c6c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x460C70u;
        goto label_460c70;
    }
    ctx->pc = 0x460C68u;
    {
        const bool branch_taken_0x460c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x460C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460C68u;
            // 0x460c6c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x460c68) {
            ctx->pc = 0x460CB0u;
            goto label_460cb0;
        }
    }
    ctx->pc = 0x460C70u;
label_460c70:
    // 0x460c70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x460c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_460c74:
    // 0x460c74: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x460c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_460c78:
    // 0x460c78: 0x2463e5a0  addiu       $v1, $v1, -0x1A60
    ctx->pc = 0x460c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960544));
label_460c7c:
    // 0x460c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x460c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_460c80:
    // 0x460c80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x460c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_460c84:
    // 0x460c84: 0x400008  jr          $v0
label_460c88:
    if (ctx->pc == 0x460C88u) {
        ctx->pc = 0x460C8Cu;
        goto label_460c8c;
    }
    ctx->pc = 0x460C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x460C90u: goto label_460c90;
            case 0x460CB0u: goto label_460cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x460C8Cu;
label_460c8c:
    // 0x460c8c: 0x0  nop
    ctx->pc = 0x460c8cu;
    // NOP
label_460c90:
    // 0x460c90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460c94:
    // 0x460c94: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x460c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_460c98:
    // 0x460c98: 0x8042008e  lb          $v0, 0x8E($v0)
    ctx->pc = 0x460c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 142)));
label_460c9c:
    // 0x460c9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x460c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_460ca0:
    // 0x460ca0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_460ca4:
    if (ctx->pc == 0x460CA4u) {
        ctx->pc = 0x460CA8u;
        goto label_460ca8;
    }
    ctx->pc = 0x460CA0u;
    {
        const bool branch_taken_0x460ca0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x460ca0) {
            ctx->pc = 0x460CB0u;
            goto label_460cb0;
        }
    }
    ctx->pc = 0x460CA8u;
label_460ca8:
    // 0x460ca8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x460ca8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_460cac:
    // 0x460cac: 0x0  nop
    ctx->pc = 0x460cacu;
    // NOP
label_460cb0:
    // 0x460cb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_460cb4:
    if (ctx->pc == 0x460CB4u) {
        ctx->pc = 0x460CB8u;
        goto label_460cb8;
    }
    ctx->pc = 0x460CB0u;
    {
        const bool branch_taken_0x460cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x460cb0) {
            ctx->pc = 0x460CC8u;
            goto label_460cc8;
        }
    }
    ctx->pc = 0x460CB8u;
label_460cb8:
    // 0x460cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460cbc:
    // 0x460cbc: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x460cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_460cc0:
    // 0x460cc0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x460cc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_460cc4:
    // 0x460cc4: 0x0  nop
    ctx->pc = 0x460cc4u;
    // NOP
label_460cc8:
    // 0x460cc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x460cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_460ccc:
    // 0x460ccc: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x460cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_460cd0:
    // 0x460cd0: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_460cd4:
    if (ctx->pc == 0x460CD4u) {
        ctx->pc = 0x460CD4u;
            // 0x460cd4: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x460CD8u;
        goto label_460cd8;
    }
    ctx->pc = 0x460CD0u;
    {
        const bool branch_taken_0x460cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460cd0) {
            ctx->pc = 0x460CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460CD0u;
            // 0x460cd4: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460c5c;
        }
    }
    ctx->pc = 0x460CD8u;
label_460cd8:
    // 0x460cd8: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460cdc:
    // 0x460cdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x460cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460ce0:
    // 0x460ce0: 0xc1232d8  jal         func_48CB60
label_460ce4:
    if (ctx->pc == 0x460CE4u) {
        ctx->pc = 0x460CE4u;
            // 0x460ce4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x460CE8u;
        goto label_460ce8;
    }
    ctx->pc = 0x460CE0u;
    SET_GPR_U32(ctx, 31, 0x460CE8u);
    ctx->pc = 0x460CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460CE0u;
            // 0x460ce4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460CE8u; }
        if (ctx->pc != 0x460CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460CE8u; }
        if (ctx->pc != 0x460CE8u) { return; }
    }
    ctx->pc = 0x460CE8u;
label_460ce8:
    // 0x460ce8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x460ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460cec:
    // 0x460cec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x460cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460cf0:
    // 0x460cf0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x460cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_460cf4:
    // 0x460cf4: 0xc0b90e0  jal         func_2E4380
label_460cf8:
    if (ctx->pc == 0x460CF8u) {
        ctx->pc = 0x460CF8u;
            // 0x460cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460CFCu;
        goto label_460cfc;
    }
    ctx->pc = 0x460CF4u;
    SET_GPR_U32(ctx, 31, 0x460CFCu);
    ctx->pc = 0x460CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460CF4u;
            // 0x460cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460CFCu; }
        if (ctx->pc != 0x460CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460CFCu; }
        if (ctx->pc != 0x460CFCu) { return; }
    }
    ctx->pc = 0x460CFCu;
label_460cfc:
    // 0x460cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_460d00:
    if (ctx->pc == 0x460D00u) {
        ctx->pc = 0x460D04u;
        goto label_460d04;
    }
    ctx->pc = 0x460CFCu;
    {
        const bool branch_taken_0x460cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460cfc) {
            ctx->pc = 0x460D10u;
            goto label_460d10;
        }
    }
    ctx->pc = 0x460D04u;
label_460d04:
    // 0x460d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460d08:
    // 0x460d08: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x460d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_460d0c:
    // 0x460d0c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x460d0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_460d10:
    // 0x460d10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460d14:
    // 0x460d14: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x460d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_460d18:
    // 0x460d18: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_460d1c:
    if (ctx->pc == 0x460D1Cu) {
        ctx->pc = 0x460D1Cu;
            // 0x460d1c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x460D20u;
        goto label_460d20;
    }
    ctx->pc = 0x460D18u;
    {
        const bool branch_taken_0x460d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460d18) {
            ctx->pc = 0x460D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460D18u;
            // 0x460d1c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460CF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460D20u;
label_460d20:
    // 0x460d20: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460d24:
    // 0x460d24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x460d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_460d28:
    // 0x460d28: 0xc1232d8  jal         func_48CB60
label_460d2c:
    if (ctx->pc == 0x460D2Cu) {
        ctx->pc = 0x460D2Cu;
            // 0x460d2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x460D30u;
        goto label_460d30;
    }
    ctx->pc = 0x460D28u;
    SET_GPR_U32(ctx, 31, 0x460D30u);
    ctx->pc = 0x460D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D28u;
            // 0x460d2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D30u; }
        if (ctx->pc != 0x460D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D30u; }
        if (ctx->pc != 0x460D30u) { return; }
    }
    ctx->pc = 0x460D30u;
label_460d30:
    // 0x460d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x460d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460d34:
    // 0x460d34: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x460d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_460d38:
    // 0x460d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x460d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460d3c:
    // 0x460d3c: 0xc0b90e0  jal         func_2E4380
label_460d40:
    if (ctx->pc == 0x460D40u) {
        ctx->pc = 0x460D40u;
            // 0x460d40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460D44u;
        goto label_460d44;
    }
    ctx->pc = 0x460D3Cu;
    SET_GPR_U32(ctx, 31, 0x460D44u);
    ctx->pc = 0x460D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D3Cu;
            // 0x460d40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D44u; }
        if (ctx->pc != 0x460D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D44u; }
        if (ctx->pc != 0x460D44u) { return; }
    }
    ctx->pc = 0x460D44u;
label_460d44:
    // 0x460d44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_460d48:
    if (ctx->pc == 0x460D48u) {
        ctx->pc = 0x460D4Cu;
        goto label_460d4c;
    }
    ctx->pc = 0x460D44u;
    {
        const bool branch_taken_0x460d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d44) {
            ctx->pc = 0x460D50u;
            goto label_460d50;
        }
    }
    ctx->pc = 0x460D4Cu;
label_460d4c:
    // 0x460d4c: 0x3652000f  ori         $s2, $s2, 0xF
    ctx->pc = 0x460d4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)15);
label_460d50:
    // 0x460d50: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x460d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_460d54:
    // 0x460d54: 0xc0b90e0  jal         func_2E4380
label_460d58:
    if (ctx->pc == 0x460D58u) {
        ctx->pc = 0x460D58u;
            // 0x460d58: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x460D5Cu;
        goto label_460d5c;
    }
    ctx->pc = 0x460D54u;
    SET_GPR_U32(ctx, 31, 0x460D5Cu);
    ctx->pc = 0x460D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D54u;
            // 0x460d58: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D5Cu; }
        if (ctx->pc != 0x460D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D5Cu; }
        if (ctx->pc != 0x460D5Cu) { return; }
    }
    ctx->pc = 0x460D5Cu;
label_460d5c:
    // 0x460d5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_460d60:
    if (ctx->pc == 0x460D60u) {
        ctx->pc = 0x460D64u;
        goto label_460d64;
    }
    ctx->pc = 0x460D5Cu;
    {
        const bool branch_taken_0x460d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d5c) {
            ctx->pc = 0x460DA8u;
            goto label_460da8;
        }
    }
    ctx->pc = 0x460D64u;
label_460d64:
    // 0x460d64: 0x1198c0  sll         $s3, $s1, 3
    ctx->pc = 0x460d64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_460d68:
    // 0x460d68: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x460d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_460d6c:
    // 0x460d6c: 0xc0b90e0  jal         func_2E4380
label_460d70:
    if (ctx->pc == 0x460D70u) {
        ctx->pc = 0x460D70u;
            // 0x460d70: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x460D74u;
        goto label_460d74;
    }
    ctx->pc = 0x460D6Cu;
    SET_GPR_U32(ctx, 31, 0x460D74u);
    ctx->pc = 0x460D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D6Cu;
            // 0x460d70: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D74u; }
        if (ctx->pc != 0x460D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D74u; }
        if (ctx->pc != 0x460D74u) { return; }
    }
    ctx->pc = 0x460D74u;
label_460d74:
    // 0x460d74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_460d78:
    if (ctx->pc == 0x460D78u) {
        ctx->pc = 0x460D7Cu;
        goto label_460d7c;
    }
    ctx->pc = 0x460D74u;
    {
        const bool branch_taken_0x460d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d74) {
            ctx->pc = 0x460DA8u;
            goto label_460da8;
        }
    }
    ctx->pc = 0x460D7Cu;
label_460d7c:
    // 0x460d7c: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x460d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_460d80:
    // 0x460d80: 0xc0b90e0  jal         func_2E4380
label_460d84:
    if (ctx->pc == 0x460D84u) {
        ctx->pc = 0x460D84u;
            // 0x460d84: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x460D88u;
        goto label_460d88;
    }
    ctx->pc = 0x460D80u;
    SET_GPR_U32(ctx, 31, 0x460D88u);
    ctx->pc = 0x460D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D80u;
            // 0x460d84: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D88u; }
        if (ctx->pc != 0x460D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D88u; }
        if (ctx->pc != 0x460D88u) { return; }
    }
    ctx->pc = 0x460D88u;
label_460d88:
    // 0x460d88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_460d8c:
    if (ctx->pc == 0x460D8Cu) {
        ctx->pc = 0x460D90u;
        goto label_460d90;
    }
    ctx->pc = 0x460D88u;
    {
        const bool branch_taken_0x460d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d88) {
            ctx->pc = 0x460DA8u;
            goto label_460da8;
        }
    }
    ctx->pc = 0x460D90u;
label_460d90:
    // 0x460d90: 0x26650003  addiu       $a1, $s3, 0x3
    ctx->pc = 0x460d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_460d94:
    // 0x460d94: 0xc0b90e0  jal         func_2E4380
label_460d98:
    if (ctx->pc == 0x460D98u) {
        ctx->pc = 0x460D98u;
            // 0x460d98: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x460D9Cu;
        goto label_460d9c;
    }
    ctx->pc = 0x460D94u;
    SET_GPR_U32(ctx, 31, 0x460D9Cu);
    ctx->pc = 0x460D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460D94u;
            // 0x460d98: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D9Cu; }
        if (ctx->pc != 0x460D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460D9Cu; }
        if (ctx->pc != 0x460D9Cu) { return; }
    }
    ctx->pc = 0x460D9Cu;
label_460d9c:
    // 0x460d9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_460da0:
    if (ctx->pc == 0x460DA0u) {
        ctx->pc = 0x460DA4u;
        goto label_460da4;
    }
    ctx->pc = 0x460D9Cu;
    {
        const bool branch_taken_0x460d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460d9c) {
            ctx->pc = 0x460DA8u;
            goto label_460da8;
        }
    }
    ctx->pc = 0x460DA4u;
label_460da4:
    // 0x460da4: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x460da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_460da8:
    // 0x460da8: 0x1198c0  sll         $s3, $s1, 3
    ctx->pc = 0x460da8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_460dac:
    // 0x460dac: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x460dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_460db0:
    // 0x460db0: 0xc0b90e0  jal         func_2E4380
label_460db4:
    if (ctx->pc == 0x460DB4u) {
        ctx->pc = 0x460DB4u;
            // 0x460db4: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x460DB8u;
        goto label_460db8;
    }
    ctx->pc = 0x460DB0u;
    SET_GPR_U32(ctx, 31, 0x460DB8u);
    ctx->pc = 0x460DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460DB0u;
            // 0x460db4: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DB8u; }
        if (ctx->pc != 0x460DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DB8u; }
        if (ctx->pc != 0x460DB8u) { return; }
    }
    ctx->pc = 0x460DB8u;
label_460db8:
    // 0x460db8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460dbc:
    if (ctx->pc == 0x460DBCu) {
        ctx->pc = 0x460DC0u;
        goto label_460dc0;
    }
    ctx->pc = 0x460DB8u;
    {
        const bool branch_taken_0x460db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460db8) {
            ctx->pc = 0x460DC8u;
            goto label_460dc8;
        }
    }
    ctx->pc = 0x460DC0u;
label_460dc0:
    // 0x460dc0: 0x36520020  ori         $s2, $s2, 0x20
    ctx->pc = 0x460dc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
label_460dc4:
    // 0x460dc4: 0x0  nop
    ctx->pc = 0x460dc4u;
    // NOP
label_460dc8:
    // 0x460dc8: 0x26650005  addiu       $a1, $s3, 0x5
    ctx->pc = 0x460dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_460dcc:
    // 0x460dcc: 0xc0b90e0  jal         func_2E4380
label_460dd0:
    if (ctx->pc == 0x460DD0u) {
        ctx->pc = 0x460DD0u;
            // 0x460dd0: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x460DD4u;
        goto label_460dd4;
    }
    ctx->pc = 0x460DCCu;
    SET_GPR_U32(ctx, 31, 0x460DD4u);
    ctx->pc = 0x460DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460DCCu;
            // 0x460dd0: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DD4u; }
        if (ctx->pc != 0x460DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DD4u; }
        if (ctx->pc != 0x460DD4u) { return; }
    }
    ctx->pc = 0x460DD4u;
label_460dd4:
    // 0x460dd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_460dd8:
    if (ctx->pc == 0x460DD8u) {
        ctx->pc = 0x460DDCu;
        goto label_460ddc;
    }
    ctx->pc = 0x460DD4u;
    {
        const bool branch_taken_0x460dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460dd4) {
            ctx->pc = 0x460DE0u;
            goto label_460de0;
        }
    }
    ctx->pc = 0x460DDCu;
label_460ddc:
    // 0x460ddc: 0x36520040  ori         $s2, $s2, 0x40
    ctx->pc = 0x460ddcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
label_460de0:
    // 0x460de0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460de4:
    // 0x460de4: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x460de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_460de8:
    // 0x460de8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x460de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_460dec:
    // 0x460dec: 0xc1232d8  jal         func_48CB60
label_460df0:
    if (ctx->pc == 0x460DF0u) {
        ctx->pc = 0x460DF0u;
            // 0x460df0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x460DF4u;
        goto label_460df4;
    }
    ctx->pc = 0x460DECu;
    SET_GPR_U32(ctx, 31, 0x460DF4u);
    ctx->pc = 0x460DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460DECu;
            // 0x460df0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DF4u; }
        if (ctx->pc != 0x460DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460DF4u; }
        if (ctx->pc != 0x460DF4u) { return; }
    }
    ctx->pc = 0x460DF4u;
label_460df4:
    // 0x460df4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460df8:
    // 0x460df8: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x460df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_460dfc:
    // 0x460dfc: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
label_460e00:
    if (ctx->pc == 0x460E00u) {
        ctx->pc = 0x460E00u;
            // 0x460e00: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x460E04u;
        goto label_460e04;
    }
    ctx->pc = 0x460DFCu;
    {
        const bool branch_taken_0x460dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460dfc) {
            ctx->pc = 0x460E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460DFCu;
            // 0x460e00: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460d38;
        }
    }
    ctx->pc = 0x460E04u;
label_460e04:
    // 0x460e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460e08:
    // 0x460e08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x460e08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460e0c:
    // 0x460e0c: 0xa3a200d0  sb          $v0, 0xD0($sp)
    ctx->pc = 0x460e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 2));
label_460e10:
    // 0x460e10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x460e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460e14:
    // 0x460e14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x460e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_460e18:
    // 0x460e18: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x460e18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_460e1c:
    // 0x460e1c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x460e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_460e20:
    // 0x460e20: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x460e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_460e24:
    // 0x460e24: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x460e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_460e28:
    // 0x460e28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x460e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460e2c:
    // 0x460e2c: 0x8fb200b0  lw          $s2, 0xB0($sp)
    ctx->pc = 0x460e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_460e30:
    // 0x460e30: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x460e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_460e34:
    // 0x460e34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x460e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_460e38:
    // 0x460e38: 0x245500d5  addiu       $s5, $v0, 0xD5
    ctx->pc = 0x460e38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 213));
label_460e3c:
    // 0x460e3c: 0x0  nop
    ctx->pc = 0x460e3cu;
    // NOP
label_460e40:
    // 0x460e40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x460e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460e44:
    // 0x460e44: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
label_460e48:
    if (ctx->pc == 0x460E48u) {
        ctx->pc = 0x460E4Cu;
        goto label_460e4c;
    }
    ctx->pc = 0x460E44u;
    {
        const bool branch_taken_0x460e44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x460e44) {
            ctx->pc = 0x460E60u;
            goto label_460e60;
        }
    }
    ctx->pc = 0x460E4Cu;
label_460e4c:
    // 0x460e4c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_460e50:
    if (ctx->pc == 0x460E50u) {
        ctx->pc = 0x460E54u;
        goto label_460e54;
    }
    ctx->pc = 0x460E4Cu;
    {
        const bool branch_taken_0x460e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x460e4c) {
            ctx->pc = 0x460E68u;
            goto label_460e68;
        }
    }
    ctx->pc = 0x460E54u;
label_460e54:
    // 0x460e54: 0x10000004  b           . + 4 + (0x4 << 2)
label_460e58:
    if (ctx->pc == 0x460E58u) {
        ctx->pc = 0x460E58u;
            // 0x460e58: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x460E5Cu;
        goto label_460e5c;
    }
    ctx->pc = 0x460E54u;
    {
        const bool branch_taken_0x460e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460E54u;
            // 0x460e58: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460e54) {
            ctx->pc = 0x460E68u;
            goto label_460e68;
        }
    }
    ctx->pc = 0x460E5Cu;
label_460e5c:
    // 0x460e5c: 0x0  nop
    ctx->pc = 0x460e5cu;
    // NOP
label_460e60:
    // 0x460e60: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x460e60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_460e64:
    // 0x460e64: 0x0  nop
    ctx->pc = 0x460e64u;
    // NOP
label_460e68:
    // 0x460e68: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x460e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_460e6c:
    // 0x460e6c: 0xc0b90e0  jal         func_2E4380
label_460e70:
    if (ctx->pc == 0x460E70u) {
        ctx->pc = 0x460E70u;
            // 0x460e70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460E74u;
        goto label_460e74;
    }
    ctx->pc = 0x460E6Cu;
    SET_GPR_U32(ctx, 31, 0x460E74u);
    ctx->pc = 0x460E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460E6Cu;
            // 0x460e70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460E74u; }
        if (ctx->pc != 0x460E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460E74u; }
        if (ctx->pc != 0x460E74u) { return; }
    }
    ctx->pc = 0x460E74u;
label_460e74:
    // 0x460e74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_460e78:
    if (ctx->pc == 0x460E78u) {
        ctx->pc = 0x460E7Cu;
        goto label_460e7c;
    }
    ctx->pc = 0x460E74u;
    {
        const bool branch_taken_0x460e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460e74) {
            ctx->pc = 0x460EC8u;
            goto label_460ec8;
        }
    }
    ctx->pc = 0x460E7Cu;
label_460e7c:
    // 0x460e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460e80:
    // 0x460e80: 0x1223000d  beq         $s1, $v1, . + 4 + (0xD << 2)
label_460e84:
    if (ctx->pc == 0x460E84u) {
        ctx->pc = 0x460E88u;
        goto label_460e88;
    }
    ctx->pc = 0x460E80u;
    {
        const bool branch_taken_0x460e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x460e80) {
            ctx->pc = 0x460EB8u;
            goto label_460eb8;
        }
    }
    ctx->pc = 0x460E88u;
label_460e88:
    // 0x460e88: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_460e8c:
    if (ctx->pc == 0x460E8Cu) {
        ctx->pc = 0x460E90u;
        goto label_460e90;
    }
    ctx->pc = 0x460E88u;
    {
        const bool branch_taken_0x460e88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x460e88) {
            ctx->pc = 0x460E98u;
            goto label_460e98;
        }
    }
    ctx->pc = 0x460E90u;
label_460e90:
    // 0x460e90: 0x1000000d  b           . + 4 + (0xD << 2)
label_460e94:
    if (ctx->pc == 0x460E94u) {
        ctx->pc = 0x460E98u;
        goto label_460e98;
    }
    ctx->pc = 0x460E90u;
    {
        const bool branch_taken_0x460e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460e90) {
            ctx->pc = 0x460EC8u;
            goto label_460ec8;
        }
    }
    ctx->pc = 0x460E98u;
label_460e98:
    // 0x460e98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x460e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460e9c:
    // 0x460e9c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_460ea0:
    if (ctx->pc == 0x460EA0u) {
        ctx->pc = 0x460EA4u;
        goto label_460ea4;
    }
    ctx->pc = 0x460E9Cu;
    {
        const bool branch_taken_0x460e9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x460e9c) {
            ctx->pc = 0x460EB0u;
            goto label_460eb0;
        }
    }
    ctx->pc = 0x460EA4u;
label_460ea4:
    // 0x460ea4: 0x10000008  b           . + 4 + (0x8 << 2)
label_460ea8:
    if (ctx->pc == 0x460EA8u) {
        ctx->pc = 0x460EA8u;
            // 0x460ea8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x460EACu;
        goto label_460eac;
    }
    ctx->pc = 0x460EA4u;
    {
        const bool branch_taken_0x460ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460EA4u;
            // 0x460ea8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460ea4) {
            ctx->pc = 0x460EC8u;
            goto label_460ec8;
        }
    }
    ctx->pc = 0x460EACu;
label_460eac:
    // 0x460eac: 0x0  nop
    ctx->pc = 0x460eacu;
    // NOP
label_460eb0:
    // 0x460eb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_460eb4:
    if (ctx->pc == 0x460EB4u) {
        ctx->pc = 0x460EB4u;
            // 0x460eb4: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x460EB8u;
        goto label_460eb8;
    }
    ctx->pc = 0x460EB0u;
    {
        const bool branch_taken_0x460eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460EB0u;
            // 0x460eb4: 0xa2630001  sb          $v1, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460eb0) {
            ctx->pc = 0x460EC8u;
            goto label_460ec8;
        }
    }
    ctx->pc = 0x460EB8u;
label_460eb8:
    // 0x460eb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x460eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460ebc:
    // 0x460ebc: 0x12820002  beq         $s4, $v0, . + 4 + (0x2 << 2)
label_460ec0:
    if (ctx->pc == 0x460EC0u) {
        ctx->pc = 0x460EC4u;
        goto label_460ec4;
    }
    ctx->pc = 0x460EBCu;
    {
        const bool branch_taken_0x460ebc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x460ebc) {
            ctx->pc = 0x460EC8u;
            goto label_460ec8;
        }
    }
    ctx->pc = 0x460EC4u;
label_460ec4:
    // 0x460ec4: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x460ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_460ec8:
    // 0x460ec8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x460ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_460ecc:
    // 0x460ecc: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x460eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_460ed0:
    // 0x460ed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x460ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_460ed4:
    // 0x460ed4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_460ed8:
    if (ctx->pc == 0x460ED8u) {
        ctx->pc = 0x460ED8u;
            // 0x460ed8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x460EDCu;
        goto label_460edc;
    }
    ctx->pc = 0x460ED4u;
    {
        const bool branch_taken_0x460ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460ED4u;
            // 0x460ed8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460ed4) {
            ctx->pc = 0x460E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460e40;
        }
    }
    ctx->pc = 0x460EDCu;
label_460edc:
    // 0x460edc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x460edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_460ee0:
    // 0x460ee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460ee4:
    // 0x460ee4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x460ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_460ee8:
    // 0x460ee8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x460ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_460eec:
    // 0x460eec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x460eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_460ef0:
    // 0x460ef0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x460ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_460ef4:
    // 0x460ef4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x460ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_460ef8:
    // 0x460ef8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x460ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_460efc:
    // 0x460efc: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_460f00:
    if (ctx->pc == 0x460F00u) {
        ctx->pc = 0x460F00u;
            // 0x460f00: 0x27de0005  addiu       $fp, $fp, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
        ctx->pc = 0x460F04u;
        goto label_460f04;
    }
    ctx->pc = 0x460EFCu;
    {
        const bool branch_taken_0x460efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460EFCu;
            // 0x460f00: 0x27de0005  addiu       $fp, $fp, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460efc) {
            ctx->pc = 0x460E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460e24;
        }
    }
    ctx->pc = 0x460F04u;
label_460f04:
    // 0x460f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x460f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460f08:
    // 0x460f08: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x460f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_460f0c:
    // 0x460f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x460f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460f10:
    // 0x460f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460f14:
    // 0x460f14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x460f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460f18:
    // 0x460f18: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x460f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_460f1c:
    // 0x460f1c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x460f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_460f20:
    // 0x460f20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x460f20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_460f24:
    // 0x460f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_460f28:
    if (ctx->pc == 0x460F28u) {
        ctx->pc = 0x460F2Cu;
        goto label_460f2c;
    }
    ctx->pc = 0x460F24u;
    {
        const bool branch_taken_0x460f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460f24) {
            ctx->pc = 0x460F38u;
            goto label_460f38;
        }
    }
    ctx->pc = 0x460F2Cu;
label_460f2c:
    // 0x460f2c: 0x1031004  sllv        $v0, $v1, $t0
    ctx->pc = 0x460f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
label_460f30:
    // 0x460f30: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x460f30u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_460f34:
    // 0x460f34: 0x0  nop
    ctx->pc = 0x460f34u;
    // NOP
label_460f38:
    // 0x460f38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x460f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_460f3c:
    // 0x460f3c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x460f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_460f40:
    // 0x460f40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x460f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_460f44:
    // 0x460f44: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_460f48:
    if (ctx->pc == 0x460F48u) {
        ctx->pc = 0x460F48u;
            // 0x460f48: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x460F4Cu;
        goto label_460f4c;
    }
    ctx->pc = 0x460F44u;
    {
        const bool branch_taken_0x460f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460F44u;
            // 0x460f48: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460f44) {
            ctx->pc = 0x460F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460f20;
        }
    }
    ctx->pc = 0x460F4Cu;
label_460f4c:
    // 0x460f4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x460f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_460f50:
    // 0x460f50: 0x24e70005  addiu       $a3, $a3, 0x5
    ctx->pc = 0x460f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
label_460f54:
    // 0x460f54: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x460f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_460f58:
    // 0x460f58: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_460f5c:
    if (ctx->pc == 0x460F5Cu) {
        ctx->pc = 0x460F5Cu;
            // 0x460f5c: 0x24c60005  addiu       $a2, $a2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
        ctx->pc = 0x460F60u;
        goto label_460f60;
    }
    ctx->pc = 0x460F58u;
    {
        const bool branch_taken_0x460f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x460F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460F58u;
            // 0x460f5c: 0x24c60005  addiu       $a2, $a2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460f58) {
            ctx->pc = 0x460F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_460f14;
        }
    }
    ctx->pc = 0x460F60u;
label_460f60:
    // 0x460f60: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460f64:
    // 0x460f64: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x460f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_460f68:
    // 0x460f68: 0xc1232d8  jal         func_48CB60
label_460f6c:
    if (ctx->pc == 0x460F6Cu) {
        ctx->pc = 0x460F6Cu;
            // 0x460f6c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x460F70u;
        goto label_460f70;
    }
    ctx->pc = 0x460F68u;
    SET_GPR_U32(ctx, 31, 0x460F70u);
    ctx->pc = 0x460F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460F68u;
            // 0x460f6c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F70u; }
        if (ctx->pc != 0x460F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F70u; }
        if (ctx->pc != 0x460F70u) { return; }
    }
    ctx->pc = 0x460F70u;
label_460f70:
    // 0x460f70: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460f74:
    // 0x460f74: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x460f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_460f78:
    // 0x460f78: 0xc1232d8  jal         func_48CB60
label_460f7c:
    if (ctx->pc == 0x460F7Cu) {
        ctx->pc = 0x460F7Cu;
            // 0x460f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460F80u;
        goto label_460f80;
    }
    ctx->pc = 0x460F78u;
    SET_GPR_U32(ctx, 31, 0x460F80u);
    ctx->pc = 0x460F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460F78u;
            // 0x460f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F80u; }
        if (ctx->pc != 0x460F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F80u; }
        if (ctx->pc != 0x460F80u) { return; }
    }
    ctx->pc = 0x460F80u;
label_460f80:
    // 0x460f80: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460f84:
    // 0x460f84: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x460f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_460f88:
    // 0x460f88: 0xc1232d8  jal         func_48CB60
label_460f8c:
    if (ctx->pc == 0x460F8Cu) {
        ctx->pc = 0x460F8Cu;
            // 0x460f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460F90u;
        goto label_460f90;
    }
    ctx->pc = 0x460F88u;
    SET_GPR_U32(ctx, 31, 0x460F90u);
    ctx->pc = 0x460F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460F88u;
            // 0x460f8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F90u; }
        if (ctx->pc != 0x460F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460F90u; }
        if (ctx->pc != 0x460F90u) { return; }
    }
    ctx->pc = 0x460F90u;
label_460f90:
    // 0x460f90: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460f94:
    // 0x460f94: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x460f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_460f98:
    // 0x460f98: 0xc1232d8  jal         func_48CB60
label_460f9c:
    if (ctx->pc == 0x460F9Cu) {
        ctx->pc = 0x460F9Cu;
            // 0x460f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460FA0u;
        goto label_460fa0;
    }
    ctx->pc = 0x460F98u;
    SET_GPR_U32(ctx, 31, 0x460FA0u);
    ctx->pc = 0x460F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460F98u;
            // 0x460f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FA0u; }
        if (ctx->pc != 0x460FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FA0u; }
        if (ctx->pc != 0x460FA0u) { return; }
    }
    ctx->pc = 0x460FA0u;
label_460fa0:
    // 0x460fa0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460fa4:
    // 0x460fa4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x460fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_460fa8:
    // 0x460fa8: 0xc1232d8  jal         func_48CB60
label_460fac:
    if (ctx->pc == 0x460FACu) {
        ctx->pc = 0x460FACu;
            // 0x460fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460FB0u;
        goto label_460fb0;
    }
    ctx->pc = 0x460FA8u;
    SET_GPR_U32(ctx, 31, 0x460FB0u);
    ctx->pc = 0x460FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460FA8u;
            // 0x460fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FB0u; }
        if (ctx->pc != 0x460FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FB0u; }
        if (ctx->pc != 0x460FB0u) { return; }
    }
    ctx->pc = 0x460FB0u;
label_460fb0:
    // 0x460fb0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_460fb4:
    // 0x460fb4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x460fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_460fb8:
    // 0x460fb8: 0xc1232d8  jal         func_48CB60
label_460fbc:
    if (ctx->pc == 0x460FBCu) {
        ctx->pc = 0x460FBCu;
            // 0x460fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460FC0u;
        goto label_460fc0;
    }
    ctx->pc = 0x460FB8u;
    SET_GPR_U32(ctx, 31, 0x460FC0u);
    ctx->pc = 0x460FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460FB8u;
            // 0x460fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FC0u; }
        if (ctx->pc != 0x460FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460FC0u; }
        if (ctx->pc != 0x460FC0u) { return; }
    }
    ctx->pc = 0x460FC0u;
label_460fc0:
    // 0x460fc0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x460fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_460fc4:
    // 0x460fc4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x460fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_460fc8:
    // 0x460fc8: 0x8c63067c  lw          $v1, 0x67C($v1)
    ctx->pc = 0x460fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
label_460fcc:
    // 0x460fcc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x460fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_460fd0:
    // 0x460fd0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x460fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_460fd4:
    // 0x460fd4: 0x502000a7  beql        $at, $zero, . + 4 + (0xA7 << 2)
label_460fd8:
    if (ctx->pc == 0x460FD8u) {
        ctx->pc = 0x460FD8u;
            // 0x460fd8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x460FDCu;
        goto label_460fdc;
    }
    ctx->pc = 0x460FD4u;
    {
        const bool branch_taken_0x460fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x460fd4) {
            ctx->pc = 0x460FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460FD4u;
            // 0x460fd8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461274u;
            goto label_461274;
        }
    }
    ctx->pc = 0x460FDCu;
label_460fdc:
    // 0x460fdc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x460fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_460fe0:
    // 0x460fe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x460fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_460fe4:
    // 0x460fe4: 0x2484e570  addiu       $a0, $a0, -0x1A90
    ctx->pc = 0x460fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960496));
label_460fe8:
    // 0x460fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x460fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_460fec:
    // 0x460fec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x460fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_460ff0:
    // 0x460ff0: 0x600008  jr          $v1
label_460ff4:
    if (ctx->pc == 0x460FF4u) {
        ctx->pc = 0x460FF8u;
        goto label_460ff8;
    }
    ctx->pc = 0x460FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x460FF8u: goto label_460ff8;
            case 0x461018u: goto label_461018;
            case 0x461038u: goto label_461038;
            case 0x461218u: goto label_461218;
            case 0x461238u: goto label_461238;
            case 0x461258u: goto label_461258;
            case 0x461270u: goto label_461270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x460FF8u;
label_460ff8:
    // 0x460ff8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460ffc:
    // 0x460ffc: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x460ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461000:
    // 0x461000: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461004:
    // 0x461004: 0x90460039  lbu         $a2, 0x39($v0)
    ctx->pc = 0x461004u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
label_461008:
    // 0x461008: 0xc1232d8  jal         func_48CB60
label_46100c:
    if (ctx->pc == 0x46100Cu) {
        ctx->pc = 0x46100Cu;
            // 0x46100c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x461010u;
        goto label_461010;
    }
    ctx->pc = 0x461008u;
    SET_GPR_U32(ctx, 31, 0x461010u);
    ctx->pc = 0x46100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461008u;
            // 0x46100c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461010u; }
        if (ctx->pc != 0x461010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461010u; }
        if (ctx->pc != 0x461010u) { return; }
    }
    ctx->pc = 0x461010u;
label_461010:
    // 0x461010: 0x10000097  b           . + 4 + (0x97 << 2)
label_461014:
    if (ctx->pc == 0x461014u) {
        ctx->pc = 0x461018u;
        goto label_461018;
    }
    ctx->pc = 0x461010u;
    {
        const bool branch_taken_0x461010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461010) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461018u;
label_461018:
    // 0x461018: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46101c:
    // 0x46101c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461020:
    // 0x461020: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461024:
    // 0x461024: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x461024u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_461028:
    // 0x461028: 0xc1232d8  jal         func_48CB60
label_46102c:
    if (ctx->pc == 0x46102Cu) {
        ctx->pc = 0x46102Cu;
            // 0x46102c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x461030u;
        goto label_461030;
    }
    ctx->pc = 0x461028u;
    SET_GPR_U32(ctx, 31, 0x461030u);
    ctx->pc = 0x46102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461028u;
            // 0x46102c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461030u; }
        if (ctx->pc != 0x461030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461030u; }
        if (ctx->pc != 0x461030u) { return; }
    }
    ctx->pc = 0x461030u;
label_461030:
    // 0x461030: 0x1000008f  b           . + 4 + (0x8F << 2)
label_461034:
    if (ctx->pc == 0x461034u) {
        ctx->pc = 0x461038u;
        goto label_461038;
    }
    ctx->pc = 0x461030u;
    {
        const bool branch_taken_0x461030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461030) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461038u;
label_461038:
    // 0x461038: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46103c:
    // 0x46103c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461040:
    // 0x461040: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461044:
    // 0x461044: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x461044u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_461048:
    // 0x461048: 0xc1232d8  jal         func_48CB60
label_46104c:
    if (ctx->pc == 0x46104Cu) {
        ctx->pc = 0x46104Cu;
            // 0x46104c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x461050u;
        goto label_461050;
    }
    ctx->pc = 0x461048u;
    SET_GPR_U32(ctx, 31, 0x461050u);
    ctx->pc = 0x46104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461048u;
            // 0x46104c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461050u; }
        if (ctx->pc != 0x461050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461050u; }
        if (ctx->pc != 0x461050u) { return; }
    }
    ctx->pc = 0x461050u;
label_461050:
    // 0x461050: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_461054:
    // 0x461054: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461058:
    // 0x461058: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_46105c:
    // 0x46105c: 0x8046002b  lb          $a2, 0x2B($v0)
    ctx->pc = 0x46105cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_461060:
    // 0x461060: 0xc1232d8  jal         func_48CB60
label_461064:
    if (ctx->pc == 0x461064u) {
        ctx->pc = 0x461064u;
            // 0x461064: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x461068u;
        goto label_461068;
    }
    ctx->pc = 0x461060u;
    SET_GPR_U32(ctx, 31, 0x461068u);
    ctx->pc = 0x461064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461060u;
            // 0x461064: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461068u; }
        if (ctx->pc != 0x461068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461068u; }
        if (ctx->pc != 0x461068u) { return; }
    }
    ctx->pc = 0x461068u;
label_461068:
    // 0x461068: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x461068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_46106c:
    // 0x46106c: 0x8c6489d0  lw          $a0, -0x7630($v1)
    ctx->pc = 0x46106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_461070:
    // 0x461070: 0x8086002b  lb          $a2, 0x2B($a0)
    ctx->pc = 0x461070u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
label_461074:
    // 0x461074: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x461074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_461078:
    // 0x461078: 0x80840028  lb          $a0, 0x28($a0)
    ctx->pc = 0x461078u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_46107c:
    // 0x46107c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_461080:
    if (ctx->pc == 0x461080u) {
        ctx->pc = 0x461080u;
            // 0x461080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461084u;
        goto label_461084;
    }
    ctx->pc = 0x46107Cu;
    {
        const bool branch_taken_0x46107c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x461080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46107Cu;
            // 0x461080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46107c) {
            ctx->pc = 0x4610A4u;
            goto label_4610a4;
        }
    }
    ctx->pc = 0x461084u;
label_461084:
    // 0x461084: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x461084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_461088:
    // 0x461088: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_46108c:
    if (ctx->pc == 0x46108Cu) {
        ctx->pc = 0x46108Cu;
            // 0x46108c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x461090u;
        goto label_461090;
    }
    ctx->pc = 0x461088u;
    {
        const bool branch_taken_0x461088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461088) {
            ctx->pc = 0x46108Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461088u;
            // 0x46108c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4610A8u;
            goto label_4610a8;
        }
    }
    ctx->pc = 0x461090u;
label_461090:
    // 0x461090: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x461090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_461094:
    // 0x461094: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_461098:
    if (ctx->pc == 0x461098u) {
        ctx->pc = 0x46109Cu;
        goto label_46109c;
    }
    ctx->pc = 0x461094u;
    {
        const bool branch_taken_0x461094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461094) {
            ctx->pc = 0x4610A4u;
            goto label_4610a4;
        }
    }
    ctx->pc = 0x46109Cu;
label_46109c:
    // 0x46109c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4610a0:
    if (ctx->pc == 0x4610A0u) {
        ctx->pc = 0x4610A4u;
        goto label_4610a4;
    }
    ctx->pc = 0x46109Cu;
    {
        const bool branch_taken_0x46109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46109c) {
            ctx->pc = 0x4610ACu;
            goto label_4610ac;
        }
    }
    ctx->pc = 0x4610A4u;
label_4610a4:
    // 0x4610a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4610a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4610a8:
    // 0x4610a8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x4610a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4610ac:
    // 0x4610ac: 0x50a00029  beql        $a1, $zero, . + 4 + (0x29 << 2)
label_4610b0:
    if (ctx->pc == 0x4610B0u) {
        ctx->pc = 0x4610B0u;
            // 0x4610b0: 0x2cc10008  sltiu       $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x4610B4u;
        goto label_4610b4;
    }
    ctx->pc = 0x4610ACu;
    {
        const bool branch_taken_0x4610ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610ac) {
            ctx->pc = 0x4610B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4610ACu;
            // 0x4610b0: 0x2cc10008  sltiu       $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x461154u;
            goto label_461154;
        }
    }
    ctx->pc = 0x4610B4u;
label_4610b4:
    // 0x4610b4: 0x2cc10008  sltiu       $at, $a2, 0x8
    ctx->pc = 0x4610b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4610b8:
    // 0x4610b8: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
label_4610bc:
    if (ctx->pc == 0x4610BCu) {
        ctx->pc = 0x4610C0u;
        goto label_4610c0;
    }
    ctx->pc = 0x4610B8u;
    {
        const bool branch_taken_0x4610b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610b8) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x4610C0u;
label_4610c0:
    // 0x4610c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4610c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4610c4:
    // 0x4610c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4610c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4610c8:
    // 0x4610c8: 0x2484e550  addiu       $a0, $a0, -0x1AB0
    ctx->pc = 0x4610c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
label_4610cc:
    // 0x4610cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4610ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4610d0:
    // 0x4610d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4610d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4610d4:
    // 0x4610d4: 0x600008  jr          $v1
label_4610d8:
    if (ctx->pc == 0x4610D8u) {
        ctx->pc = 0x4610DCu;
        goto label_4610dc;
    }
    ctx->pc = 0x4610D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4610DCu: goto label_4610dc;
            case 0x461104u: goto label_461104;
            case 0x46112Cu: goto label_46112c;
            case 0x461270u: goto label_461270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4610DCu;
label_4610dc:
    // 0x4610dc: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4610dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4610e0:
    // 0x4610e0: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x4610e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4610e4:
    // 0x4610e4: 0xc1232d8  jal         func_48CB60
label_4610e8:
    if (ctx->pc == 0x4610E8u) {
        ctx->pc = 0x4610E8u;
            // 0x4610e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4610ECu;
        goto label_4610ec;
    }
    ctx->pc = 0x4610E4u;
    SET_GPR_U32(ctx, 31, 0x4610ECu);
    ctx->pc = 0x4610E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4610E4u;
            // 0x4610e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4610ECu; }
        if (ctx->pc != 0x4610ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4610ECu; }
        if (ctx->pc != 0x4610ECu) { return; }
    }
    ctx->pc = 0x4610ECu;
label_4610ec:
    // 0x4610ec: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4610ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4610f0:
    // 0x4610f0: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x4610f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_4610f4:
    // 0x4610f4: 0xc1232d8  jal         func_48CB60
label_4610f8:
    if (ctx->pc == 0x4610F8u) {
        ctx->pc = 0x4610F8u;
            // 0x4610f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4610FCu;
        goto label_4610fc;
    }
    ctx->pc = 0x4610F4u;
    SET_GPR_U32(ctx, 31, 0x4610FCu);
    ctx->pc = 0x4610F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4610F4u;
            // 0x4610f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4610FCu; }
        if (ctx->pc != 0x4610FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4610FCu; }
        if (ctx->pc != 0x4610FCu) { return; }
    }
    ctx->pc = 0x4610FCu;
label_4610fc:
    // 0x4610fc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_461100:
    if (ctx->pc == 0x461100u) {
        ctx->pc = 0x461104u;
        goto label_461104;
    }
    ctx->pc = 0x4610FCu;
    {
        const bool branch_taken_0x4610fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4610fc) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461104u;
label_461104:
    // 0x461104: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461108:
    // 0x461108: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x461108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_46110c:
    // 0x46110c: 0xc1232d8  jal         func_48CB60
label_461110:
    if (ctx->pc == 0x461110u) {
        ctx->pc = 0x461110u;
            // 0x461110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461114u;
        goto label_461114;
    }
    ctx->pc = 0x46110Cu;
    SET_GPR_U32(ctx, 31, 0x461114u);
    ctx->pc = 0x461110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46110Cu;
            // 0x461110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461114u; }
        if (ctx->pc != 0x461114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461114u; }
        if (ctx->pc != 0x461114u) { return; }
    }
    ctx->pc = 0x461114u;
label_461114:
    // 0x461114: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461118:
    // 0x461118: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x461118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_46111c:
    // 0x46111c: 0xc1232d8  jal         func_48CB60
label_461120:
    if (ctx->pc == 0x461120u) {
        ctx->pc = 0x461120u;
            // 0x461120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461124u;
        goto label_461124;
    }
    ctx->pc = 0x46111Cu;
    SET_GPR_U32(ctx, 31, 0x461124u);
    ctx->pc = 0x461120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46111Cu;
            // 0x461120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461124u; }
        if (ctx->pc != 0x461124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461124u; }
        if (ctx->pc != 0x461124u) { return; }
    }
    ctx->pc = 0x461124u;
label_461124:
    // 0x461124: 0x10000052  b           . + 4 + (0x52 << 2)
label_461128:
    if (ctx->pc == 0x461128u) {
        ctx->pc = 0x46112Cu;
        goto label_46112c;
    }
    ctx->pc = 0x461124u;
    {
        const bool branch_taken_0x461124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461124) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x46112Cu;
label_46112c:
    // 0x46112c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461130:
    // 0x461130: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x461130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_461134:
    // 0x461134: 0xc1232d8  jal         func_48CB60
label_461138:
    if (ctx->pc == 0x461138u) {
        ctx->pc = 0x461138u;
            // 0x461138: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x46113Cu;
        goto label_46113c;
    }
    ctx->pc = 0x461134u;
    SET_GPR_U32(ctx, 31, 0x46113Cu);
    ctx->pc = 0x461138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461134u;
            // 0x461138: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46113Cu; }
        if (ctx->pc != 0x46113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46113Cu; }
        if (ctx->pc != 0x46113Cu) { return; }
    }
    ctx->pc = 0x46113Cu;
label_46113c:
    // 0x46113c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461140:
    // 0x461140: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x461140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_461144:
    // 0x461144: 0xc1232d8  jal         func_48CB60
label_461148:
    if (ctx->pc == 0x461148u) {
        ctx->pc = 0x461148u;
            // 0x461148: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46114Cu;
        goto label_46114c;
    }
    ctx->pc = 0x461144u;
    SET_GPR_U32(ctx, 31, 0x46114Cu);
    ctx->pc = 0x461148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461144u;
            // 0x461148: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46114Cu; }
        if (ctx->pc != 0x46114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46114Cu; }
        if (ctx->pc != 0x46114Cu) { return; }
    }
    ctx->pc = 0x46114Cu;
label_46114c:
    // 0x46114c: 0x10000048  b           . + 4 + (0x48 << 2)
label_461150:
    if (ctx->pc == 0x461150u) {
        ctx->pc = 0x461154u;
        goto label_461154;
    }
    ctx->pc = 0x46114Cu;
    {
        const bool branch_taken_0x46114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46114c) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461154u;
label_461154:
    // 0x461154: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_461158:
    if (ctx->pc == 0x461158u) {
        ctx->pc = 0x46115Cu;
        goto label_46115c;
    }
    ctx->pc = 0x461154u;
    {
        const bool branch_taken_0x461154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x461154) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x46115Cu;
label_46115c:
    // 0x46115c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46115cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_461160:
    // 0x461160: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x461160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_461164:
    // 0x461164: 0x2484e530  addiu       $a0, $a0, -0x1AD0
    ctx->pc = 0x461164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960432));
label_461168:
    // 0x461168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x461168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46116c:
    // 0x46116c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_461170:
    // 0x461170: 0x600008  jr          $v1
label_461174:
    if (ctx->pc == 0x461174u) {
        ctx->pc = 0x461178u;
        goto label_461178;
    }
    ctx->pc = 0x461170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461178u;
label_461178:
    // 0x461178: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_46117c:
    // 0x46117c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x46117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_461180:
    // 0x461180: 0xc1232d8  jal         func_48CB60
label_461184:
    if (ctx->pc == 0x461184u) {
        ctx->pc = 0x461184u;
            // 0x461184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461188u;
        goto label_461188;
    }
    ctx->pc = 0x461180u;
    SET_GPR_U32(ctx, 31, 0x461188u);
    ctx->pc = 0x461184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461180u;
            // 0x461184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461188u; }
        if (ctx->pc != 0x461188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461188u; }
        if (ctx->pc != 0x461188u) { return; }
    }
    ctx->pc = 0x461188u;
label_461188:
    // 0x461188: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_46118c:
    // 0x46118c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x46118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_461190:
    // 0x461190: 0xc1232d8  jal         func_48CB60
label_461194:
    if (ctx->pc == 0x461194u) {
        ctx->pc = 0x461194u;
            // 0x461194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x461198u;
        goto label_461198;
    }
    ctx->pc = 0x461190u;
    SET_GPR_U32(ctx, 31, 0x461198u);
    ctx->pc = 0x461194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461190u;
            // 0x461194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461198u; }
        if (ctx->pc != 0x461198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461198u; }
        if (ctx->pc != 0x461198u) { return; }
    }
    ctx->pc = 0x461198u;
label_461198:
    // 0x461198: 0x10000035  b           . + 4 + (0x35 << 2)
label_46119c:
    if (ctx->pc == 0x46119Cu) {
        ctx->pc = 0x4611A0u;
        goto label_4611a0;
    }
    ctx->pc = 0x461198u;
    {
        const bool branch_taken_0x461198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461198) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x4611A0u;
label_4611a0:
    // 0x4611a0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4611a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4611a4:
    // 0x4611a4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x4611a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_4611a8:
    // 0x4611a8: 0xc1232d8  jal         func_48CB60
label_4611ac:
    if (ctx->pc == 0x4611ACu) {
        ctx->pc = 0x4611ACu;
            // 0x4611ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4611B0u;
        goto label_4611b0;
    }
    ctx->pc = 0x4611A8u;
    SET_GPR_U32(ctx, 31, 0x4611B0u);
    ctx->pc = 0x4611ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4611A8u;
            // 0x4611ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611B0u; }
        if (ctx->pc != 0x4611B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611B0u; }
        if (ctx->pc != 0x4611B0u) { return; }
    }
    ctx->pc = 0x4611B0u;
label_4611b0:
    // 0x4611b0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4611b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4611b4:
    // 0x4611b4: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x4611b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4611b8:
    // 0x4611b8: 0xc1232d8  jal         func_48CB60
label_4611bc:
    if (ctx->pc == 0x4611BCu) {
        ctx->pc = 0x4611BCu;
            // 0x4611bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4611C0u;
        goto label_4611c0;
    }
    ctx->pc = 0x4611B8u;
    SET_GPR_U32(ctx, 31, 0x4611C0u);
    ctx->pc = 0x4611BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4611B8u;
            // 0x4611bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611C0u; }
        if (ctx->pc != 0x4611C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611C0u; }
        if (ctx->pc != 0x4611C0u) { return; }
    }
    ctx->pc = 0x4611C0u;
label_4611c0:
    // 0x4611c0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_4611c4:
    if (ctx->pc == 0x4611C4u) {
        ctx->pc = 0x4611C8u;
        goto label_4611c8;
    }
    ctx->pc = 0x4611C0u;
    {
        const bool branch_taken_0x4611c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4611c0) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x4611C8u;
label_4611c8:
    // 0x4611c8: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4611c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4611cc:
    // 0x4611cc: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x4611ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_4611d0:
    // 0x4611d0: 0xc1232d8  jal         func_48CB60
label_4611d4:
    if (ctx->pc == 0x4611D4u) {
        ctx->pc = 0x4611D4u;
            // 0x4611d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4611D8u;
        goto label_4611d8;
    }
    ctx->pc = 0x4611D0u;
    SET_GPR_U32(ctx, 31, 0x4611D8u);
    ctx->pc = 0x4611D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4611D0u;
            // 0x4611d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611D8u; }
        if (ctx->pc != 0x4611D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611D8u; }
        if (ctx->pc != 0x4611D8u) { return; }
    }
    ctx->pc = 0x4611D8u;
label_4611d8:
    // 0x4611d8: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4611d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4611dc:
    // 0x4611dc: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x4611dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4611e0:
    // 0x4611e0: 0xc1232d8  jal         func_48CB60
label_4611e4:
    if (ctx->pc == 0x4611E4u) {
        ctx->pc = 0x4611E4u;
            // 0x4611e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4611E8u;
        goto label_4611e8;
    }
    ctx->pc = 0x4611E0u;
    SET_GPR_U32(ctx, 31, 0x4611E8u);
    ctx->pc = 0x4611E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4611E0u;
            // 0x4611e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611E8u; }
        if (ctx->pc != 0x4611E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4611E8u; }
        if (ctx->pc != 0x4611E8u) { return; }
    }
    ctx->pc = 0x4611E8u;
label_4611e8:
    // 0x4611e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_4611ec:
    if (ctx->pc == 0x4611ECu) {
        ctx->pc = 0x4611F0u;
        goto label_4611f0;
    }
    ctx->pc = 0x4611E8u;
    {
        const bool branch_taken_0x4611e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4611e8) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x4611F0u;
label_4611f0:
    // 0x4611f0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x4611f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_4611f4:
    // 0x4611f4: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x4611f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_4611f8:
    // 0x4611f8: 0xc1232d8  jal         func_48CB60
label_4611fc:
    if (ctx->pc == 0x4611FCu) {
        ctx->pc = 0x4611FCu;
            // 0x4611fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x461200u;
        goto label_461200;
    }
    ctx->pc = 0x4611F8u;
    SET_GPR_U32(ctx, 31, 0x461200u);
    ctx->pc = 0x4611FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4611F8u;
            // 0x4611fc: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461200u; }
        if (ctx->pc != 0x461200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461200u; }
        if (ctx->pc != 0x461200u) { return; }
    }
    ctx->pc = 0x461200u;
label_461200:
    // 0x461200: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x461200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461204:
    // 0x461204: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x461204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_461208:
    // 0x461208: 0xc1232d8  jal         func_48CB60
label_46120c:
    if (ctx->pc == 0x46120Cu) {
        ctx->pc = 0x46120Cu;
            // 0x46120c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x461210u;
        goto label_461210;
    }
    ctx->pc = 0x461208u;
    SET_GPR_U32(ctx, 31, 0x461210u);
    ctx->pc = 0x46120Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461208u;
            // 0x46120c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461210u; }
        if (ctx->pc != 0x461210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461210u; }
        if (ctx->pc != 0x461210u) { return; }
    }
    ctx->pc = 0x461210u;
label_461210:
    // 0x461210: 0x10000017  b           . + 4 + (0x17 << 2)
label_461214:
    if (ctx->pc == 0x461214u) {
        ctx->pc = 0x461218u;
        goto label_461218;
    }
    ctx->pc = 0x461210u;
    {
        const bool branch_taken_0x461210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461210) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461218u;
label_461218:
    // 0x461218: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46121c:
    // 0x46121c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461220:
    // 0x461220: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461224:
    // 0x461224: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x461224u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_461228:
    // 0x461228: 0xc1232d8  jal         func_48CB60
label_46122c:
    if (ctx->pc == 0x46122Cu) {
        ctx->pc = 0x46122Cu;
            // 0x46122c: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x461230u;
        goto label_461230;
    }
    ctx->pc = 0x461228u;
    SET_GPR_U32(ctx, 31, 0x461230u);
    ctx->pc = 0x46122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461228u;
            // 0x46122c: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461230u; }
        if (ctx->pc != 0x461230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461230u; }
        if (ctx->pc != 0x461230u) { return; }
    }
    ctx->pc = 0x461230u;
label_461230:
    // 0x461230: 0x1000000f  b           . + 4 + (0xF << 2)
label_461234:
    if (ctx->pc == 0x461234u) {
        ctx->pc = 0x461238u;
        goto label_461238;
    }
    ctx->pc = 0x461230u;
    {
        const bool branch_taken_0x461230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461230) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461238u;
label_461238:
    // 0x461238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46123c:
    // 0x46123c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461240:
    // 0x461240: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461244:
    // 0x461244: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x461244u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_461248:
    // 0x461248: 0xc1232d8  jal         func_48CB60
label_46124c:
    if (ctx->pc == 0x46124Cu) {
        ctx->pc = 0x46124Cu;
            // 0x46124c: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x461250u;
        goto label_461250;
    }
    ctx->pc = 0x461248u;
    SET_GPR_U32(ctx, 31, 0x461250u);
    ctx->pc = 0x46124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461248u;
            // 0x46124c: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461250u; }
        if (ctx->pc != 0x461250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461250u; }
        if (ctx->pc != 0x461250u) { return; }
    }
    ctx->pc = 0x461250u;
label_461250:
    // 0x461250: 0x10000007  b           . + 4 + (0x7 << 2)
label_461254:
    if (ctx->pc == 0x461254u) {
        ctx->pc = 0x461258u;
        goto label_461258;
    }
    ctx->pc = 0x461250u;
    {
        const bool branch_taken_0x461250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461250) {
            ctx->pc = 0x461270u;
            goto label_461270;
        }
    }
    ctx->pc = 0x461258u;
label_461258:
    // 0x461258: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46125c:
    // 0x46125c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x46125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_461260:
    // 0x461260: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x461260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461264:
    // 0x461264: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x461264u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_461268:
    // 0x461268: 0xc1232d8  jal         func_48CB60
label_46126c:
    if (ctx->pc == 0x46126Cu) {
        ctx->pc = 0x46126Cu;
            // 0x46126c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x461270u;
        goto label_461270;
    }
    ctx->pc = 0x461268u;
    SET_GPR_U32(ctx, 31, 0x461270u);
    ctx->pc = 0x46126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461268u;
            // 0x46126c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461270u; }
        if (ctx->pc != 0x461270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461270u; }
        if (ctx->pc != 0x461270u) { return; }
    }
    ctx->pc = 0x461270u;
label_461270:
    // 0x461270: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x461270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_461274:
    // 0x461274: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x461274u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_461278:
    // 0x461278: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x461278u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46127c:
    // 0x46127c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46127cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_461280:
    // 0x461280: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x461280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_461284:
    // 0x461284: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x461284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_461288:
    // 0x461288: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x461288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46128c:
    // 0x46128c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46128cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461290:
    // 0x461290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461294:
    // 0x461294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461298:
    // 0x461298: 0x3e00008  jr          $ra
label_46129c:
    if (ctx->pc == 0x46129Cu) {
        ctx->pc = 0x46129Cu;
            // 0x46129c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4612A0u;
        goto label_4612a0;
    }
    ctx->pc = 0x461298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461298u;
            // 0x46129c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4612A0u;
label_4612a0:
    // 0x4612a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4612a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4612a4:
    // 0x4612a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4612a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4612a8:
    // 0x4612a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4612a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4612ac:
    // 0x4612ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4612acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4612b0:
    // 0x4612b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4612b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4612b4:
    // 0x4612b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4612b8:
    if (ctx->pc == 0x4612B8u) {
        ctx->pc = 0x4612B8u;
            // 0x4612b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4612BCu;
        goto label_4612bc;
    }
    ctx->pc = 0x4612B4u;
    {
        const bool branch_taken_0x4612b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4612B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4612B4u;
            // 0x4612b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4612b4) {
            ctx->pc = 0x4612F8u;
            goto label_4612f8;
        }
    }
    ctx->pc = 0x4612BCu;
label_4612bc:
    // 0x4612bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4612bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4612c0:
    // 0x4612c0: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x4612c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
label_4612c4:
    // 0x4612c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4612c8:
    if (ctx->pc == 0x4612C8u) {
        ctx->pc = 0x4612C8u;
            // 0x4612c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4612CCu;
        goto label_4612cc;
    }
    ctx->pc = 0x4612C4u;
    {
        const bool branch_taken_0x4612c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4612C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4612C4u;
            // 0x4612c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4612c4) {
            ctx->pc = 0x4612E0u;
            goto label_4612e0;
        }
    }
    ctx->pc = 0x4612CCu;
label_4612cc:
    // 0x4612cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4612ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4612d0:
    // 0x4612d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4612d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4612d4:
    // 0x4612d4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4612d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4612d8:
    // 0x4612d8: 0xc057a68  jal         func_15E9A0
label_4612dc:
    if (ctx->pc == 0x4612DCu) {
        ctx->pc = 0x4612DCu;
            // 0x4612dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4612E0u;
        goto label_4612e0;
    }
    ctx->pc = 0x4612D8u;
    SET_GPR_U32(ctx, 31, 0x4612E0u);
    ctx->pc = 0x4612DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4612D8u;
            // 0x4612dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4612E0u; }
        if (ctx->pc != 0x4612E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4612E0u; }
        if (ctx->pc != 0x4612E0u) { return; }
    }
    ctx->pc = 0x4612E0u;
label_4612e0:
    // 0x4612e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4612e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4612e4:
    // 0x4612e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4612e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4612e8:
    // 0x4612e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4612ec:
    if (ctx->pc == 0x4612ECu) {
        ctx->pc = 0x4612ECu;
            // 0x4612ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4612F0u;
        goto label_4612f0;
    }
    ctx->pc = 0x4612E8u;
    {
        const bool branch_taken_0x4612e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4612e8) {
            ctx->pc = 0x4612ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4612E8u;
            // 0x4612ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4612FCu;
            goto label_4612fc;
        }
    }
    ctx->pc = 0x4612F0u;
label_4612f0:
    // 0x4612f0: 0xc0400a8  jal         func_1002A0
label_4612f4:
    if (ctx->pc == 0x4612F4u) {
        ctx->pc = 0x4612F4u;
            // 0x4612f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4612F8u;
        goto label_4612f8;
    }
    ctx->pc = 0x4612F0u;
    SET_GPR_U32(ctx, 31, 0x4612F8u);
    ctx->pc = 0x4612F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4612F0u;
            // 0x4612f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4612F8u; }
        if (ctx->pc != 0x4612F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4612F8u; }
        if (ctx->pc != 0x4612F8u) { return; }
    }
    ctx->pc = 0x4612F8u;
label_4612f8:
    // 0x4612f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4612f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4612fc:
    // 0x4612fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4612fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461300:
    // 0x461300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461304:
    // 0x461304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461308:
    // 0x461308: 0x3e00008  jr          $ra
label_46130c:
    if (ctx->pc == 0x46130Cu) {
        ctx->pc = 0x46130Cu;
            // 0x46130c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x461310u;
        goto label_461310;
    }
    ctx->pc = 0x461308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461308u;
            // 0x46130c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461310u;
label_461310:
    // 0x461310: 0x3e00008  jr          $ra
label_461314:
    if (ctx->pc == 0x461314u) {
        ctx->pc = 0x461318u;
        goto label_461318;
    }
    ctx->pc = 0x461310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461318u;
label_461318:
    // 0x461318: 0x0  nop
    ctx->pc = 0x461318u;
    // NOP
label_46131c:
    // 0x46131c: 0x0  nop
    ctx->pc = 0x46131cu;
    // NOP
label_461320:
    // 0x461320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x461320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_461324:
    // 0x461324: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x461324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_461328:
    // 0x461328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x461328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_46132c:
    // 0x46132c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461330:
    // 0x461330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461334:
    // 0x461334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x461334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_461338:
    // 0x461338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46133c:
    // 0x46133c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x46133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_461340:
    // 0x461340: 0x8c91a140  lw          $s1, -0x5EC0($a0)
    ctx->pc = 0x461340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943040)));
label_461344:
    // 0x461344: 0x8c70d130  lw          $s0, -0x2ED0($v1)
    ctx->pc = 0x461344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_461348:
    // 0x461348: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x461348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_46134c:
    // 0x46134c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x46134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_461350:
    // 0x461350: 0x34860030  ori         $a2, $a0, 0x30
    ctx->pc = 0x461350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
label_461354:
    // 0x461354: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461358:
    // 0x461358: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x461358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_46135c:
    // 0x46135c: 0x808475c8  lb          $a0, 0x75C8($a0)
    ctx->pc = 0x46135cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30152)));
label_461360:
    // 0x461360: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x461360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_461364:
    // 0x461364: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x461364u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_461368:
    // 0x461368: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x461368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_46136c:
    // 0x46136c: 0xa06475c8  sb          $a0, 0x75C8($v1)
    ctx->pc = 0x46136cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30152), (uint8_t)GPR_U32(ctx, 4));
label_461370:
    // 0x461370: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x461370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_461374:
    // 0x461374: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x461374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_461378:
    // 0x461378: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_46137c:
    if (ctx->pc == 0x46137Cu) {
        ctx->pc = 0x46137Cu;
            // 0x46137c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x461380u;
        goto label_461380;
    }
    ctx->pc = 0x461378u;
    {
        const bool branch_taken_0x461378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461378) {
            ctx->pc = 0x46137Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461378u;
            // 0x46137c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46138Cu;
            goto label_46138c;
        }
    }
    ctx->pc = 0x461380u;
label_461380:
    // 0x461380: 0xc073234  jal         func_1CC8D0
label_461384:
    if (ctx->pc == 0x461384u) {
        ctx->pc = 0x461384u;
            // 0x461384: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x461388u;
        goto label_461388;
    }
    ctx->pc = 0x461380u;
    SET_GPR_U32(ctx, 31, 0x461388u);
    ctx->pc = 0x461384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461380u;
            // 0x461384: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461388u; }
        if (ctx->pc != 0x461388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461388u; }
        if (ctx->pc != 0x461388u) { return; }
    }
    ctx->pc = 0x461388u;
label_461388:
    // 0x461388: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x461388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46138c:
    // 0x46138c: 0x30830402  andi        $v1, $a0, 0x402
    ctx->pc = 0x46138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1026);
label_461390:
    // 0x461390: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_461394:
    if (ctx->pc == 0x461394u) {
        ctx->pc = 0x461394u;
            // 0x461394: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x461398u;
        goto label_461398;
    }
    ctx->pc = 0x461390u;
    {
        const bool branch_taken_0x461390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461390) {
            ctx->pc = 0x461394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461390u;
            // 0x461394: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4613D4u;
            goto label_4613d4;
        }
    }
    ctx->pc = 0x461398u;
label_461398:
    // 0x461398: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x461398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_46139c:
    // 0x46139c: 0xc073234  jal         func_1CC8D0
label_4613a0:
    if (ctx->pc == 0x4613A0u) {
        ctx->pc = 0x4613A0u;
            // 0x4613a0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4613A4u;
        goto label_4613a4;
    }
    ctx->pc = 0x46139Cu;
    SET_GPR_U32(ctx, 31, 0x4613A4u);
    ctx->pc = 0x4613A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46139Cu;
            // 0x4613a0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613A4u; }
        if (ctx->pc != 0x4613A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613A4u; }
        if (ctx->pc != 0x4613A4u) { return; }
    }
    ctx->pc = 0x4613A4u;
label_4613a4:
    // 0x4613a4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4613a8:
    // 0x4613a8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x4613a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4613ac:
    // 0x4613ac: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4613acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4613b0:
    // 0x4613b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4613b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4613b4:
    // 0x4613b4: 0xc057b7c  jal         func_15EDF0
label_4613b8:
    if (ctx->pc == 0x4613B8u) {
        ctx->pc = 0x4613B8u;
            // 0x4613b8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x4613BCu;
        goto label_4613bc;
    }
    ctx->pc = 0x4613B4u;
    SET_GPR_U32(ctx, 31, 0x4613BCu);
    ctx->pc = 0x4613B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4613B4u;
            // 0x4613b8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613BCu; }
        if (ctx->pc != 0x4613BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613BCu; }
        if (ctx->pc != 0x4613BCu) { return; }
    }
    ctx->pc = 0x4613BCu;
label_4613bc:
    // 0x4613bc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4613bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4613c0:
    // 0x4613c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4613c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4613c4:
    // 0x4613c4: 0x808475c8  lb          $a0, 0x75C8($a0)
    ctx->pc = 0x4613c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30152)));
label_4613c8:
    // 0x4613c8: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4613c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_4613cc:
    // 0x4613cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4613d0:
    if (ctx->pc == 0x4613D0u) {
        ctx->pc = 0x4613D0u;
            // 0x4613d0: 0xa064003d  sb          $a0, 0x3D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 61), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4613D4u;
        goto label_4613d4;
    }
    ctx->pc = 0x4613CCu;
    {
        const bool branch_taken_0x4613cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4613D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4613CCu;
            // 0x4613d0: 0xa064003d  sb          $a0, 0x3D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 61), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4613cc) {
            ctx->pc = 0x461400u;
            goto label_461400;
        }
    }
    ctx->pc = 0x4613D4u;
label_4613d4:
    // 0x4613d4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_4613d8:
    if (ctx->pc == 0x4613D8u) {
        ctx->pc = 0x4613D8u;
            // 0x4613d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4613DCu;
        goto label_4613dc;
    }
    ctx->pc = 0x4613D4u;
    {
        const bool branch_taken_0x4613d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4613d4) {
            ctx->pc = 0x4613D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4613D4u;
            // 0x4613d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461404u;
            goto label_461404;
        }
    }
    ctx->pc = 0x4613DCu;
label_4613dc:
    // 0x4613dc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4613e0:
    // 0x4613e0: 0xc073234  jal         func_1CC8D0
label_4613e4:
    if (ctx->pc == 0x4613E4u) {
        ctx->pc = 0x4613E4u;
            // 0x4613e4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4613E8u;
        goto label_4613e8;
    }
    ctx->pc = 0x4613E0u;
    SET_GPR_U32(ctx, 31, 0x4613E8u);
    ctx->pc = 0x4613E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4613E0u;
            // 0x4613e4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613E8u; }
        if (ctx->pc != 0x4613E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4613E8u; }
        if (ctx->pc != 0x4613E8u) { return; }
    }
    ctx->pc = 0x4613E8u;
label_4613e8:
    // 0x4613e8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4613ec:
    // 0x4613ec: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4613ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4613f0:
    // 0x4613f0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4613f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4613f4:
    // 0x4613f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4613f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4613f8:
    // 0x4613f8: 0xc057b7c  jal         func_15EDF0
label_4613fc:
    if (ctx->pc == 0x4613FCu) {
        ctx->pc = 0x4613FCu;
            // 0x4613fc: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x461400u;
        goto label_461400;
    }
    ctx->pc = 0x4613F8u;
    SET_GPR_U32(ctx, 31, 0x461400u);
    ctx->pc = 0x4613FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4613F8u;
            // 0x4613fc: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461400u; }
        if (ctx->pc != 0x461400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461400u; }
        if (ctx->pc != 0x461400u) { return; }
    }
    ctx->pc = 0x461400u;
label_461400:
    // 0x461400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x461400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_461404:
    // 0x461404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461408:
    // 0x461408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46140c:
    // 0x46140c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46140cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461410:
    // 0x461410: 0x3e00008  jr          $ra
label_461414:
    if (ctx->pc == 0x461414u) {
        ctx->pc = 0x461414u;
            // 0x461414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x461418u;
        goto label_461418;
    }
    ctx->pc = 0x461410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461410u;
            // 0x461414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461418u;
label_461418:
    // 0x461418: 0x0  nop
    ctx->pc = 0x461418u;
    // NOP
label_46141c:
    // 0x46141c: 0x0  nop
    ctx->pc = 0x46141cu;
    // NOP
label_461420:
    // 0x461420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_461424:
    // 0x461424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x461424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_461428:
    // 0x461428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46142c:
    // 0x46142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461430:
    // 0x461430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x461430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_461434:
    // 0x461434: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_461438:
    if (ctx->pc == 0x461438u) {
        ctx->pc = 0x461438u;
            // 0x461438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46143Cu;
        goto label_46143c;
    }
    ctx->pc = 0x461434u;
    {
        const bool branch_taken_0x461434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x461438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461434u;
            // 0x461438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461434) {
            ctx->pc = 0x461478u;
            goto label_461478;
        }
    }
    ctx->pc = 0x46143Cu;
label_46143c:
    // 0x46143c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x46143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_461440:
    // 0x461440: 0x2442e4e0  addiu       $v0, $v0, -0x1B20
    ctx->pc = 0x461440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960352));
label_461444:
    // 0x461444: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_461448:
    if (ctx->pc == 0x461448u) {
        ctx->pc = 0x461448u;
            // 0x461448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x46144Cu;
        goto label_46144c;
    }
    ctx->pc = 0x461444u;
    {
        const bool branch_taken_0x461444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x461448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461444u;
            // 0x461448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461444) {
            ctx->pc = 0x461460u;
            goto label_461460;
        }
    }
    ctx->pc = 0x46144Cu;
label_46144c:
    // 0x46144c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x46144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_461450:
    // 0x461450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461454:
    // 0x461454: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x461454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_461458:
    // 0x461458: 0xc057a68  jal         func_15E9A0
label_46145c:
    if (ctx->pc == 0x46145Cu) {
        ctx->pc = 0x46145Cu;
            // 0x46145c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x461460u;
        goto label_461460;
    }
    ctx->pc = 0x461458u;
    SET_GPR_U32(ctx, 31, 0x461460u);
    ctx->pc = 0x46145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461458u;
            // 0x46145c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461460u; }
        if (ctx->pc != 0x461460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461460u; }
        if (ctx->pc != 0x461460u) { return; }
    }
    ctx->pc = 0x461460u;
label_461460:
    // 0x461460: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x461460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_461464:
    // 0x461464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x461464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_461468:
    // 0x461468: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_46146c:
    if (ctx->pc == 0x46146Cu) {
        ctx->pc = 0x46146Cu;
            // 0x46146c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461470u;
        goto label_461470;
    }
    ctx->pc = 0x461468u;
    {
        const bool branch_taken_0x461468 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x461468) {
            ctx->pc = 0x46146Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461468u;
            // 0x46146c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46147Cu;
            goto label_46147c;
        }
    }
    ctx->pc = 0x461470u;
label_461470:
    // 0x461470: 0xc0400a8  jal         func_1002A0
label_461474:
    if (ctx->pc == 0x461474u) {
        ctx->pc = 0x461474u;
            // 0x461474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461478u;
        goto label_461478;
    }
    ctx->pc = 0x461470u;
    SET_GPR_U32(ctx, 31, 0x461478u);
    ctx->pc = 0x461474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461470u;
            // 0x461474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461478u; }
        if (ctx->pc != 0x461478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461478u; }
        if (ctx->pc != 0x461478u) { return; }
    }
    ctx->pc = 0x461478u;
label_461478:
    // 0x461478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x461478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46147c:
    // 0x46147c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461480:
    // 0x461480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461484:
    // 0x461484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461488:
    // 0x461488: 0x3e00008  jr          $ra
label_46148c:
    if (ctx->pc == 0x46148Cu) {
        ctx->pc = 0x46148Cu;
            // 0x46148c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x461490u;
        goto label_461490;
    }
    ctx->pc = 0x461488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461488u;
            // 0x46148c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461490u;
label_461490:
    // 0x461490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x461490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_461494:
    // 0x461494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x461494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461498:
    // 0x461498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x461498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46149c:
    // 0x46149c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x46149cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4614a0:
    // 0x4614a0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_4614a4:
    if (ctx->pc == 0x4614A4u) {
        ctx->pc = 0x4614A8u;
        goto label_4614a8;
    }
    ctx->pc = 0x4614A0u;
    {
        const bool branch_taken_0x4614a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4614a0) {
            ctx->pc = 0x4614D4u;
            goto label_4614d4;
        }
    }
    ctx->pc = 0x4614A8u;
label_4614a8:
    // 0x4614a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4614a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4614ac:
    // 0x4614ac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4614b0:
    if (ctx->pc == 0x4614B0u) {
        ctx->pc = 0x4614B4u;
        goto label_4614b4;
    }
    ctx->pc = 0x4614ACu;
    {
        const bool branch_taken_0x4614ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4614ac) {
            ctx->pc = 0x4614BCu;
            goto label_4614bc;
        }
    }
    ctx->pc = 0x4614B4u;
label_4614b4:
    // 0x4614b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4614b8:
    if (ctx->pc == 0x4614B8u) {
        ctx->pc = 0x4614B8u;
            // 0x4614b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4614BCu;
        goto label_4614bc;
    }
    ctx->pc = 0x4614B4u;
    {
        const bool branch_taken_0x4614b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4614B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4614B4u;
            // 0x4614b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4614b4) {
            ctx->pc = 0x4614E8u;
            goto label_4614e8;
        }
    }
    ctx->pc = 0x4614BCu;
label_4614bc:
    // 0x4614bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4614bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4614c0:
    // 0x4614c0: 0x804475d0  lb          $a0, 0x75D0($v0)
    ctx->pc = 0x4614c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30160)));
label_4614c4:
    // 0x4614c4: 0xc11a294  jal         func_468A50
label_4614c8:
    if (ctx->pc == 0x4614C8u) {
        ctx->pc = 0x4614C8u;
            // 0x4614c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4614CCu;
        goto label_4614cc;
    }
    ctx->pc = 0x4614C4u;
    SET_GPR_U32(ctx, 31, 0x4614CCu);
    ctx->pc = 0x4614C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4614C4u;
            // 0x4614c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x468A50u;
    if (runtime->hasFunction(0x468A50u)) {
        auto targetFn = runtime->lookupFunction(0x468A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4614CCu; }
        if (ctx->pc != 0x4614CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00468A50_0x468a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4614CCu; }
        if (ctx->pc != 0x4614CCu) { return; }
    }
    ctx->pc = 0x4614CCu;
label_4614cc:
    // 0x4614cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_4614d0:
    if (ctx->pc == 0x4614D0u) {
        ctx->pc = 0x4614D4u;
        goto label_4614d4;
    }
    ctx->pc = 0x4614CCu;
    {
        const bool branch_taken_0x4614cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4614cc) {
            ctx->pc = 0x4614E4u;
            goto label_4614e4;
        }
    }
    ctx->pc = 0x4614D4u;
label_4614d4:
    // 0x4614d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4614d8:
    // 0x4614d8: 0x804475d0  lb          $a0, 0x75D0($v0)
    ctx->pc = 0x4614d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30160)));
label_4614dc:
    // 0x4614dc: 0xc11a294  jal         func_468A50
label_4614e0:
    if (ctx->pc == 0x4614E0u) {
        ctx->pc = 0x4614E0u;
            // 0x4614e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4614E4u;
        goto label_4614e4;
    }
    ctx->pc = 0x4614DCu;
    SET_GPR_U32(ctx, 31, 0x4614E4u);
    ctx->pc = 0x4614E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4614DCu;
            // 0x4614e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x468A50u;
    if (runtime->hasFunction(0x468A50u)) {
        auto targetFn = runtime->lookupFunction(0x468A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4614E4u; }
        if (ctx->pc != 0x4614E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00468A50_0x468a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4614E4u; }
        if (ctx->pc != 0x4614E4u) { return; }
    }
    ctx->pc = 0x4614E4u;
label_4614e4:
    // 0x4614e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4614e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4614e8:
    // 0x4614e8: 0x3e00008  jr          $ra
label_4614ec:
    if (ctx->pc == 0x4614ECu) {
        ctx->pc = 0x4614ECu;
            // 0x4614ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4614F0u;
        goto label_4614f0;
    }
    ctx->pc = 0x4614E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4614ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4614E8u;
            // 0x4614ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4614F0u;
label_4614f0:
    // 0x4614f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4614f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4614f4:
    // 0x4614f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4614f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4614f8:
    // 0x4614f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4614f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4614fc:
    // 0x4614fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4614fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461500:
    // 0x461500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461504:
    // 0x461504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x461504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_461508:
    // 0x461508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46150c:
    // 0x46150c: 0x8c71a140  lw          $s1, -0x5EC0($v1)
    ctx->pc = 0x46150cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_461510:
    // 0x461510: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x461510u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_461514:
    // 0x461514: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x461514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_461518:
    // 0x461518: 0x8c70d130  lw          $s0, -0x2ED0($v1)
    ctx->pc = 0x461518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_46151c:
    // 0x46151c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_461520:
    // 0x461520: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_461524:
    if (ctx->pc == 0x461524u) {
        ctx->pc = 0x461528u;
        goto label_461528;
    }
    ctx->pc = 0x461520u;
    {
        const bool branch_taken_0x461520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461520) {
            ctx->pc = 0x461630u;
            goto label_461630;
        }
    }
    ctx->pc = 0x461528u;
label_461528:
    // 0x461528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x461528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46152c:
    // 0x46152c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_461530:
    if (ctx->pc == 0x461530u) {
        ctx->pc = 0x461530u;
            // 0x461530: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x461534u;
        goto label_461534;
    }
    ctx->pc = 0x46152Cu;
    {
        const bool branch_taken_0x46152c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46152c) {
            ctx->pc = 0x461530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46152Cu;
            // 0x461530: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46153Cu;
            goto label_46153c;
        }
    }
    ctx->pc = 0x461534u;
label_461534:
    // 0x461534: 0x10000090  b           . + 4 + (0x90 << 2)
label_461538:
    if (ctx->pc == 0x461538u) {
        ctx->pc = 0x461538u;
            // 0x461538: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x46153Cu;
        goto label_46153c;
    }
    ctx->pc = 0x461534u;
    {
        const bool branch_taken_0x461534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461534u;
            // 0x461538: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461534) {
            ctx->pc = 0x461778u;
            goto label_461778;
        }
    }
    ctx->pc = 0x46153Cu;
label_46153c:
    // 0x46153c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x46153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_461540:
    // 0x461540: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x461540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_461544:
    // 0x461544: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461548:
    // 0x461548: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x461548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_46154c:
    // 0x46154c: 0x806675d0  lb          $a2, 0x75D0($v1)
    ctx->pc = 0x46154cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30160)));
label_461550:
    // 0x461550: 0x5382b  sltu        $a3, $zero, $a1
    ctx->pc = 0x461550u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_461554:
    // 0x461554: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x461554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_461558:
    // 0x461558: 0x34850020  ori         $a1, $a0, 0x20
    ctx->pc = 0x461558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_46155c:
    // 0x46155c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x46155cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_461560:
    // 0x461560: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x461560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_461564:
    // 0x461564: 0x8c8704f8  lw          $a3, 0x4F8($a0)
    ctx->pc = 0x461564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1272)));
label_461568:
    // 0x461568: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_46156c:
    // 0x46156c: 0xa06675d0  sb          $a2, 0x75D0($v1)
    ctx->pc = 0x46156cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30160), (uint8_t)GPR_U32(ctx, 6));
label_461570:
    // 0x461570: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x461570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_461574:
    // 0x461574: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x461574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_461578:
    // 0x461578: 0x8c6304f8  lw          $v1, 0x4F8($v1)
    ctx->pc = 0x461578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1272)));
label_46157c:
    // 0x46157c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x46157cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_461580:
    // 0x461580: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x461580u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_461584:
    // 0x461584: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x461584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_461588:
    // 0x461588: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x461588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_46158c:
    // 0x46158c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x46158cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_461590:
    // 0x461590: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x461590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_461594:
    // 0x461594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_461598:
    if (ctx->pc == 0x461598u) {
        ctx->pc = 0x46159Cu;
        goto label_46159c;
    }
    ctx->pc = 0x461594u;
    {
        const bool branch_taken_0x461594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x461594) {
            ctx->pc = 0x4615A4u;
            goto label_4615a4;
        }
    }
    ctx->pc = 0x46159Cu;
label_46159c:
    // 0x46159c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x46159cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4615a0:
    // 0x4615a0: 0x8c640500  lw          $a0, 0x500($v1)
    ctx->pc = 0x4615a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1280)));
label_4615a4:
    // 0x4615a4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4615a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4615a8:
    // 0x4615a8: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4615a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4615ac:
    // 0x4615ac: 0x8c630500  lw          $v1, 0x500($v1)
    ctx->pc = 0x4615acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1280)));
label_4615b0:
    // 0x4615b0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4615b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4615b4:
    // 0x4615b4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4615b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4615b8:
    // 0x4615b8: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_4615bc:
    if (ctx->pc == 0x4615BCu) {
        ctx->pc = 0x4615BCu;
            // 0x4615bc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4615C0u;
        goto label_4615c0;
    }
    ctx->pc = 0x4615B8u;
    {
        const bool branch_taken_0x4615b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615b8) {
            ctx->pc = 0x4615BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4615B8u;
            // 0x4615bc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4615C0u;
            goto label_4615c0;
        }
    }
    ctx->pc = 0x4615C0u;
label_4615c0:
    // 0x4615c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4615c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4615c4:
    // 0x4615c4: 0xa06775d0  sb          $a3, 0x75D0($v1)
    ctx->pc = 0x4615c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30160), (uint8_t)GPR_U32(ctx, 7));
label_4615c8:
    // 0x4615c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4615c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4615cc:
    // 0x4615cc: 0x30830402  andi        $v1, $a0, 0x402
    ctx->pc = 0x4615ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1026);
label_4615d0:
    // 0x4615d0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_4615d4:
    if (ctx->pc == 0x4615D4u) {
        ctx->pc = 0x4615D4u;
            // 0x4615d4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4615D8u;
        goto label_4615d8;
    }
    ctx->pc = 0x4615D0u;
    {
        const bool branch_taken_0x4615d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615d0) {
            ctx->pc = 0x4615D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4615D0u;
            // 0x4615d4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4615FCu;
            goto label_4615fc;
        }
    }
    ctx->pc = 0x4615D8u;
label_4615d8:
    // 0x4615d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4615dc:
    // 0x4615dc: 0xc073234  jal         func_1CC8D0
label_4615e0:
    if (ctx->pc == 0x4615E0u) {
        ctx->pc = 0x4615E0u;
            // 0x4615e0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4615E4u;
        goto label_4615e4;
    }
    ctx->pc = 0x4615DCu;
    SET_GPR_U32(ctx, 31, 0x4615E4u);
    ctx->pc = 0x4615E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4615DCu;
            // 0x4615e0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4615E4u; }
        if (ctx->pc != 0x4615E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4615E4u; }
        if (ctx->pc != 0x4615E4u) { return; }
    }
    ctx->pc = 0x4615E4u;
label_4615e4:
    // 0x4615e4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4615e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4615e8:
    // 0x4615e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4615e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4615ec:
    // 0x4615ec: 0x320f809  jalr        $t9
label_4615f0:
    if (ctx->pc == 0x4615F0u) {
        ctx->pc = 0x4615F0u;
            // 0x4615f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4615F4u;
        goto label_4615f4;
    }
    ctx->pc = 0x4615ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4615F4u);
        ctx->pc = 0x4615F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4615ECu;
            // 0x4615f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4615F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4615F4u; }
            if (ctx->pc != 0x4615F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4615F4u;
label_4615f4:
    // 0x4615f4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_4615f8:
    if (ctx->pc == 0x4615F8u) {
        ctx->pc = 0x4615FCu;
        goto label_4615fc;
    }
    ctx->pc = 0x4615F4u;
    {
        const bool branch_taken_0x4615f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615f4) {
            ctx->pc = 0x461774u;
            goto label_461774;
        }
    }
    ctx->pc = 0x4615FCu;
label_4615fc:
    // 0x4615fc: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_461600:
    if (ctx->pc == 0x461600u) {
        ctx->pc = 0x461604u;
        goto label_461604;
    }
    ctx->pc = 0x4615FCu;
    {
        const bool branch_taken_0x4615fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4615fc) {
            ctx->pc = 0x461774u;
            goto label_461774;
        }
    }
    ctx->pc = 0x461604u;
label_461604:
    // 0x461604: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x461604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_461608:
    // 0x461608: 0xc073234  jal         func_1CC8D0
label_46160c:
    if (ctx->pc == 0x46160Cu) {
        ctx->pc = 0x46160Cu;
            // 0x46160c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x461610u;
        goto label_461610;
    }
    ctx->pc = 0x461608u;
    SET_GPR_U32(ctx, 31, 0x461610u);
    ctx->pc = 0x46160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461608u;
            // 0x46160c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461610u; }
        if (ctx->pc != 0x461610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461610u; }
        if (ctx->pc != 0x461610u) { return; }
    }
    ctx->pc = 0x461610u;
label_461610:
    // 0x461610: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x461610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_461614:
    // 0x461614: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x461614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_461618:
    // 0x461618: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x461618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_46161c:
    // 0x46161c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_461620:
    // 0x461620: 0xc057b7c  jal         func_15EDF0
label_461624:
    if (ctx->pc == 0x461624u) {
        ctx->pc = 0x461624u;
            // 0x461624: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x461628u;
        goto label_461628;
    }
    ctx->pc = 0x461620u;
    SET_GPR_U32(ctx, 31, 0x461628u);
    ctx->pc = 0x461624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461620u;
            // 0x461624: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461628u; }
        if (ctx->pc != 0x461628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461628u; }
        if (ctx->pc != 0x461628u) { return; }
    }
    ctx->pc = 0x461628u;
label_461628:
    // 0x461628: 0x10000052  b           . + 4 + (0x52 << 2)
label_46162c:
    if (ctx->pc == 0x46162Cu) {
        ctx->pc = 0x461630u;
        goto label_461630;
    }
    ctx->pc = 0x461628u;
    {
        const bool branch_taken_0x461628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461628) {
            ctx->pc = 0x461774u;
            goto label_461774;
        }
    }
    ctx->pc = 0x461630u;
label_461630:
    // 0x461630: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x461630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_461634:
    // 0x461634: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461638:
    // 0x461638: 0x8c8589d0  lw          $a1, -0x7630($a0)
    ctx->pc = 0x461638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937040)));
label_46163c:
    // 0x46163c: 0x806375d0  lb          $v1, 0x75D0($v1)
    ctx->pc = 0x46163cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30160)));
label_461640:
    // 0x461640: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x461640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_461644:
    // 0x461644: 0x90a5003d  lbu         $a1, 0x3D($a1)
    ctx->pc = 0x461644u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_461648:
    // 0x461648: 0x2484e620  addiu       $a0, $a0, -0x19E0
    ctx->pc = 0x461648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960672));
label_46164c:
    // 0x46164c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x46164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_461650:
    // 0x461650: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x461650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_461654:
    // 0x461654: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x461654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_461658:
    // 0x461658: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x461658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_46165c:
    // 0x46165c: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
label_461660:
    if (ctx->pc == 0x461660u) {
        ctx->pc = 0x461660u;
            // 0x461660: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x461664u;
        goto label_461664;
    }
    ctx->pc = 0x46165Cu;
    {
        const bool branch_taken_0x46165c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46165c) {
            ctx->pc = 0x461660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46165Cu;
            // 0x461660: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46174Cu;
            goto label_46174c;
        }
    }
    ctx->pc = 0x461664u;
label_461664:
    // 0x461664: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x461664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_461668:
    // 0x461668: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x461668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46166c:
    // 0x46166c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x46166cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_461670:
    // 0x461670: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461674:
    // 0x461674: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x461674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_461678:
    // 0x461678: 0x806675d8  lb          $a2, 0x75D8($v1)
    ctx->pc = 0x461678u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30168)));
label_46167c:
    // 0x46167c: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x46167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_461680:
    // 0x461680: 0x4382b  sltu        $a3, $zero, $a0
    ctx->pc = 0x461680u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_461684:
    // 0x461684: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x461684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_461688:
    // 0x461688: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x461688u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_46168c:
    // 0x46168c: 0xa06775d8  sb          $a3, 0x75D8($v1)
    ctx->pc = 0x46168cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30168), (uint8_t)GPR_U32(ctx, 7));
label_461690:
    // 0x461690: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x461690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_461694:
    // 0x461694: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x461694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_461698:
    // 0x461698: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x461698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46169c:
    // 0x46169c: 0x8c680508  lw          $t0, 0x508($v1)
    ctx->pc = 0x46169cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1288)));
label_4616a0:
    // 0x4616a0: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4616a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_4616a4:
    // 0x4616a4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x4616a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_4616a8:
    // 0x4616a8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4616a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4616ac:
    // 0x4616ac: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4616acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4616b0:
    // 0x4616b0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4616b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4616b4:
    // 0x4616b4: 0x8c630508  lw          $v1, 0x508($v1)
    ctx->pc = 0x4616b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1288)));
label_4616b8:
    // 0x4616b8: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4616b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4616bc:
    // 0x4616bc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4616bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4616c0:
    // 0x4616c0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4616c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4616c4:
    // 0x4616c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4616c8:
    if (ctx->pc == 0x4616C8u) {
        ctx->pc = 0x4616CCu;
        goto label_4616cc;
    }
    ctx->pc = 0x4616C4u;
    {
        const bool branch_taken_0x4616c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4616c4) {
            ctx->pc = 0x4616D0u;
            goto label_4616d0;
        }
    }
    ctx->pc = 0x4616CCu;
label_4616cc:
    // 0x4616cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4616ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4616d0:
    // 0x4616d0: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x4616d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_4616d4:
    // 0x4616d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4616d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4616d8:
    // 0x4616d8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x4616d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4616dc:
    // 0x4616dc: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_4616e0:
    if (ctx->pc == 0x4616E0u) {
        ctx->pc = 0x4616E0u;
            // 0x4616e0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4616E4u;
        goto label_4616e4;
    }
    ctx->pc = 0x4616DCu;
    {
        const bool branch_taken_0x4616dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4616dc) {
            ctx->pc = 0x4616E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4616DCu;
            // 0x4616e0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4616E4u;
            goto label_4616e4;
        }
    }
    ctx->pc = 0x4616E4u;
label_4616e4:
    // 0x4616e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4616e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4616e8:
    // 0x4616e8: 0xa06875d8  sb          $t0, 0x75D8($v1)
    ctx->pc = 0x4616e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30168), (uint8_t)GPR_U32(ctx, 8));
label_4616ec:
    // 0x4616ec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4616ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4616f0:
    // 0x4616f0: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x4616f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_4616f4:
    // 0x4616f4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_4616f8:
    if (ctx->pc == 0x4616F8u) {
        ctx->pc = 0x4616FCu;
        goto label_4616fc;
    }
    ctx->pc = 0x4616F4u;
    {
        const bool branch_taken_0x4616f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4616f4) {
            ctx->pc = 0x461748u;
            goto label_461748;
        }
    }
    ctx->pc = 0x4616FCu;
label_4616fc:
    // 0x4616fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4616fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_461700:
    // 0x461700: 0xc073234  jal         func_1CC8D0
label_461704:
    if (ctx->pc == 0x461704u) {
        ctx->pc = 0x461704u;
            // 0x461704: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x461708u;
        goto label_461708;
    }
    ctx->pc = 0x461700u;
    SET_GPR_U32(ctx, 31, 0x461708u);
    ctx->pc = 0x461704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461700u;
            // 0x461704: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461708u; }
        if (ctx->pc != 0x461708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461708u; }
        if (ctx->pc != 0x461708u) { return; }
    }
    ctx->pc = 0x461708u;
label_461708:
    // 0x461708: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x461708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46170c:
    // 0x46170c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x46170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_461710:
    // 0x461710: 0x8c4789d0  lw          $a3, -0x7630($v0)
    ctx->pc = 0x461710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_461714:
    // 0x461714: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x461714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_461718:
    // 0x461718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x461718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46171c:
    // 0x46171c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46171cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461720:
    // 0x461720: 0x90e7003d  lbu         $a3, 0x3D($a3)
    ctx->pc = 0x461720u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 61)));
label_461724:
    // 0x461724: 0x804675d0  lb          $a2, 0x75D0($v0)
    ctx->pc = 0x461724u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30160)));
label_461728:
    // 0x461728: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x461728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_46172c:
    // 0x46172c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46172cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_461730:
    // 0x461730: 0xc73004  sllv        $a2, $a3, $a2
    ctx->pc = 0x461730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_461734:
    // 0x461734: 0xac660064  sw          $a2, 0x64($v1)
    ctx->pc = 0x461734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 6));
label_461738:
    // 0x461738: 0x804375d8  lb          $v1, 0x75D8($v0)
    ctx->pc = 0x461738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30168)));
label_46173c:
    // 0x46173c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x46173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_461740:
    // 0x461740: 0xc057b7c  jal         func_15EDF0
label_461744:
    if (ctx->pc == 0x461744u) {
        ctx->pc = 0x461744u;
            // 0x461744: 0xac430068  sw          $v1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x461748u;
        goto label_461748;
    }
    ctx->pc = 0x461740u;
    SET_GPR_U32(ctx, 31, 0x461748u);
    ctx->pc = 0x461744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461740u;
            // 0x461744: 0xac430068  sw          $v1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461748u; }
        if (ctx->pc != 0x461748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461748u; }
        if (ctx->pc != 0x461748u) { return; }
    }
    ctx->pc = 0x461748u;
label_461748:
    // 0x461748: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x461748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46174c:
    // 0x46174c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x46174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_461750:
    // 0x461750: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_461754:
    if (ctx->pc == 0x461754u) {
        ctx->pc = 0x461758u;
        goto label_461758;
    }
    ctx->pc = 0x461750u;
    {
        const bool branch_taken_0x461750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461750) {
            ctx->pc = 0x461774u;
            goto label_461774;
        }
    }
    ctx->pc = 0x461758u;
label_461758:
    // 0x461758: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x461758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46175c:
    // 0x46175c: 0xc073234  jal         func_1CC8D0
label_461760:
    if (ctx->pc == 0x461760u) {
        ctx->pc = 0x461760u;
            // 0x461760: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x461764u;
        goto label_461764;
    }
    ctx->pc = 0x46175Cu;
    SET_GPR_U32(ctx, 31, 0x461764u);
    ctx->pc = 0x461760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46175Cu;
            // 0x461760: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461764u; }
        if (ctx->pc != 0x461764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461764u; }
        if (ctx->pc != 0x461764u) { return; }
    }
    ctx->pc = 0x461764u;
label_461764:
    // 0x461764: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x461764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_461768:
    // 0x461768: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x461768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_46176c:
    // 0x46176c: 0x320f809  jalr        $t9
label_461770:
    if (ctx->pc == 0x461770u) {
        ctx->pc = 0x461770u;
            // 0x461770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461774u;
        goto label_461774;
    }
    ctx->pc = 0x46176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x461774u);
        ctx->pc = 0x461770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46176Cu;
            // 0x461770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x461774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x461774u; }
            if (ctx->pc != 0x461774u) { return; }
        }
        }
    }
    ctx->pc = 0x461774u;
label_461774:
    // 0x461774: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x461774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_461778:
    // 0x461778: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x461778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_46177c:
    // 0x46177c: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x46177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_461780:
    // 0x461780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x461780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_461784:
    // 0x461784: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_461788:
    if (ctx->pc == 0x461788u) {
        ctx->pc = 0x461788u;
            // 0x461788: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x46178Cu;
        goto label_46178c;
    }
    ctx->pc = 0x461784u;
    {
        const bool branch_taken_0x461784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461784) {
            ctx->pc = 0x461788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461784u;
            // 0x461788: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461798u;
            goto label_461798;
        }
    }
    ctx->pc = 0x46178Cu;
label_46178c:
    // 0x46178c: 0xc073234  jal         func_1CC8D0
label_461790:
    if (ctx->pc == 0x461790u) {
        ctx->pc = 0x461790u;
            // 0x461790: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x461794u;
        goto label_461794;
    }
    ctx->pc = 0x46178Cu;
    SET_GPR_U32(ctx, 31, 0x461794u);
    ctx->pc = 0x461790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46178Cu;
            // 0x461790: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461794u; }
        if (ctx->pc != 0x461794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461794u; }
        if (ctx->pc != 0x461794u) { return; }
    }
    ctx->pc = 0x461794u;
label_461794:
    // 0x461794: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x461794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_461798:
    // 0x461798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46179c:
    // 0x46179c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46179cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4617a0:
    // 0x4617a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4617a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4617a4:
    // 0x4617a4: 0x3e00008  jr          $ra
label_4617a8:
    if (ctx->pc == 0x4617A8u) {
        ctx->pc = 0x4617A8u;
            // 0x4617a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4617ACu;
        goto label_4617ac;
    }
    ctx->pc = 0x4617A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4617A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4617A4u;
            // 0x4617a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4617ACu;
label_4617ac:
    // 0x4617ac: 0x0  nop
    ctx->pc = 0x4617acu;
    // NOP
label_4617b0:
    // 0x4617b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4617b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4617b4:
    // 0x4617b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4617b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4617b8:
    // 0x4617b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4617b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4617bc:
    // 0x4617bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4617bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4617c0:
    // 0x4617c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4617c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4617c4:
    // 0x4617c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4617c8:
    if (ctx->pc == 0x4617C8u) {
        ctx->pc = 0x4617C8u;
            // 0x4617c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4617CCu;
        goto label_4617cc;
    }
    ctx->pc = 0x4617C4u;
    {
        const bool branch_taken_0x4617c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4617C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4617C4u;
            // 0x4617c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4617c4) {
            ctx->pc = 0x461808u;
            goto label_461808;
        }
    }
    ctx->pc = 0x4617CCu;
label_4617cc:
    // 0x4617cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4617d0:
    // 0x4617d0: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x4617d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
label_4617d4:
    // 0x4617d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4617d8:
    if (ctx->pc == 0x4617D8u) {
        ctx->pc = 0x4617D8u;
            // 0x4617d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4617DCu;
        goto label_4617dc;
    }
    ctx->pc = 0x4617D4u;
    {
        const bool branch_taken_0x4617d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4617D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4617D4u;
            // 0x4617d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4617d4) {
            ctx->pc = 0x4617F0u;
            goto label_4617f0;
        }
    }
    ctx->pc = 0x4617DCu;
label_4617dc:
    // 0x4617dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4617dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4617e0:
    // 0x4617e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4617e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4617e4:
    // 0x4617e4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4617e8:
    // 0x4617e8: 0xc057a68  jal         func_15E9A0
label_4617ec:
    if (ctx->pc == 0x4617ECu) {
        ctx->pc = 0x4617ECu;
            // 0x4617ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4617F0u;
        goto label_4617f0;
    }
    ctx->pc = 0x4617E8u;
    SET_GPR_U32(ctx, 31, 0x4617F0u);
    ctx->pc = 0x4617ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4617E8u;
            // 0x4617ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4617F0u; }
        if (ctx->pc != 0x4617F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4617F0u; }
        if (ctx->pc != 0x4617F0u) { return; }
    }
    ctx->pc = 0x4617F0u;
label_4617f0:
    // 0x4617f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4617f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4617f4:
    // 0x4617f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4617f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4617f8:
    // 0x4617f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4617fc:
    if (ctx->pc == 0x4617FCu) {
        ctx->pc = 0x4617FCu;
            // 0x4617fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461800u;
        goto label_461800;
    }
    ctx->pc = 0x4617F8u;
    {
        const bool branch_taken_0x4617f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4617f8) {
            ctx->pc = 0x4617FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4617F8u;
            // 0x4617fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46180Cu;
            goto label_46180c;
        }
    }
    ctx->pc = 0x461800u;
label_461800:
    // 0x461800: 0xc0400a8  jal         func_1002A0
label_461804:
    if (ctx->pc == 0x461804u) {
        ctx->pc = 0x461804u;
            // 0x461804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461808u;
        goto label_461808;
    }
    ctx->pc = 0x461800u;
    SET_GPR_U32(ctx, 31, 0x461808u);
    ctx->pc = 0x461804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461800u;
            // 0x461804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461808u; }
        if (ctx->pc != 0x461808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461808u; }
        if (ctx->pc != 0x461808u) { return; }
    }
    ctx->pc = 0x461808u;
label_461808:
    // 0x461808: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x461808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46180c:
    // 0x46180c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461810:
    // 0x461810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461814:
    // 0x461814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461818:
    // 0x461818: 0x3e00008  jr          $ra
label_46181c:
    if (ctx->pc == 0x46181Cu) {
        ctx->pc = 0x46181Cu;
            // 0x46181c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x461820u;
        goto label_461820;
    }
    ctx->pc = 0x461818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461818u;
            // 0x46181c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461820u;
label_461820:
    // 0x461820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x461820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_461824:
    // 0x461824: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x461824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_461828:
    // 0x461828: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x461828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46182c:
    // 0x46182c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_461830:
    // 0x461830: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x461830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_461834:
    // 0x461834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x461834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461838:
    // 0x461838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46183c:
    // 0x46183c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461840:
    // 0x461840: 0x84830058  lh          $v1, 0x58($a0)
    ctx->pc = 0x461840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_461844:
    // 0x461844: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_461848:
    if (ctx->pc == 0x461848u) {
        ctx->pc = 0x461848u;
            // 0x461848: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46184Cu;
        goto label_46184c;
    }
    ctx->pc = 0x461844u;
    {
        const bool branch_taken_0x461844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x461848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461844u;
            // 0x461848: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461844) {
            ctx->pc = 0x461948u;
            goto label_461948;
        }
    }
    ctx->pc = 0x46184Cu;
label_46184c:
    // 0x46184c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_461850:
    // 0x461850: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x461850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_461854:
    // 0x461854: 0x8c54e378  lw          $s4, -0x1C88($v0)
    ctx->pc = 0x461854u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_461858:
    // 0x461858: 0x82b0005a  lb          $s0, 0x5A($s5)
    ctx->pc = 0x461858u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 90)));
label_46185c:
    // 0x46185c: 0x8c9100c8  lw          $s1, 0xC8($a0)
    ctx->pc = 0x46185cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_461860:
    // 0x461860: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x461860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_461864:
    // 0x461864: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x461864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_461868:
    // 0x461868: 0x8e250d6c  lw          $a1, 0xD6C($s1)
    ctx->pc = 0x461868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_46186c:
    // 0x46186c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_461870:
    // 0x461870: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x461870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_461874:
    // 0x461874: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x461874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_461878:
    // 0x461878: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x461878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_46187c:
    // 0x46187c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x46187cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_461880:
    // 0x461880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x461880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_461884:
    // 0x461884: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x461884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_461888:
    // 0x461888: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x461888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46188c:
    // 0x46188c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x46188cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_461890:
    // 0x461890: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x461890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_461894:
    // 0x461894: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x461894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_461898:
    // 0x461898: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x461898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_46189c:
    // 0x46189c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x46189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4618a0:
    // 0x4618a0: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x4618a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4618a4:
    // 0x4618a4: 0xc04cd60  jal         func_133580
label_4618a8:
    if (ctx->pc == 0x4618A8u) {
        ctx->pc = 0x4618A8u;
            // 0x4618a8: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x4618ACu;
        goto label_4618ac;
    }
    ctx->pc = 0x4618A4u;
    SET_GPR_U32(ctx, 31, 0x4618ACu);
    ctx->pc = 0x4618A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4618A4u;
            // 0x4618a8: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618ACu; }
        if (ctx->pc != 0x4618ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618ACu; }
        if (ctx->pc != 0x4618ACu) { return; }
    }
    ctx->pc = 0x4618ACu;
label_4618ac:
    // 0x4618ac: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x4618acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_4618b0:
    // 0x4618b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4618b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4618b4:
    // 0x4618b4: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x4618b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4618b8:
    // 0x4618b8: 0x8e470034  lw          $a3, 0x34($s2)
    ctx->pc = 0x4618b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_4618bc:
    // 0x4618bc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x4618bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4618c0:
    // 0x4618c0: 0xc04e4cc  jal         func_139330
label_4618c4:
    if (ctx->pc == 0x4618C4u) {
        ctx->pc = 0x4618C4u;
            // 0x4618c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4618C8u;
        goto label_4618c8;
    }
    ctx->pc = 0x4618C0u;
    SET_GPR_U32(ctx, 31, 0x4618C8u);
    ctx->pc = 0x4618C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4618C0u;
            // 0x4618c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618C8u; }
        if (ctx->pc != 0x4618C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618C8u; }
        if (ctx->pc != 0x4618C8u) { return; }
    }
    ctx->pc = 0x4618C8u;
label_4618c8:
    // 0x4618c8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x4618c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4618cc:
    // 0x4618cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4618ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4618d0:
    // 0x4618d0: 0xc04e4a4  jal         func_139290
label_4618d4:
    if (ctx->pc == 0x4618D4u) {
        ctx->pc = 0x4618D4u;
            // 0x4618d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4618D8u;
        goto label_4618d8;
    }
    ctx->pc = 0x4618D0u;
    SET_GPR_U32(ctx, 31, 0x4618D8u);
    ctx->pc = 0x4618D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4618D0u;
            // 0x4618d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618D8u; }
        if (ctx->pc != 0x4618D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618D8u; }
        if (ctx->pc != 0x4618D8u) { return; }
    }
    ctx->pc = 0x4618D8u;
label_4618d8:
    // 0x4618d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4618d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4618dc:
    // 0x4618dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4618dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4618e0:
    // 0x4618e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4618e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4618e4:
    // 0x4618e4: 0xc04e738  jal         func_139CE0
label_4618e8:
    if (ctx->pc == 0x4618E8u) {
        ctx->pc = 0x4618E8u;
            // 0x4618e8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x4618ECu;
        goto label_4618ec;
    }
    ctx->pc = 0x4618E4u;
    SET_GPR_U32(ctx, 31, 0x4618ECu);
    ctx->pc = 0x4618E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4618E4u;
            // 0x4618e8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618ECu; }
        if (ctx->pc != 0x4618ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4618ECu; }
        if (ctx->pc != 0x4618ECu) { return; }
    }
    ctx->pc = 0x4618ECu;
label_4618ec:
    // 0x4618ec: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x4618ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_4618f0:
    // 0x4618f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4618f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4618f4:
    // 0x4618f4: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x4618f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4618f8:
    // 0x4618f8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4618f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4618fc:
    // 0x4618fc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x4618fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_461900:
    // 0x461900: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x461900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_461904:
    // 0x461904: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x461904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_461908:
    // 0x461908: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x461908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_46190c:
    // 0x46190c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x46190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_461910:
    // 0x461910: 0x34680080  ori         $t0, $v1, 0x80
    ctx->pc = 0x461910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_461914:
    // 0x461914: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x461914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_461918:
    // 0x461918: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_46191c:
    if (ctx->pc == 0x46191Cu) {
        ctx->pc = 0x46191Cu;
            // 0x46191c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461920u;
        goto label_461920;
    }
    ctx->pc = 0x461918u;
    {
        const bool branch_taken_0x461918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461918) {
            ctx->pc = 0x46191Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461918u;
            // 0x46191c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461938u;
            goto label_461938;
        }
    }
    ctx->pc = 0x461920u;
label_461920:
    // 0x461920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x461920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_461924:
    // 0x461924: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x461924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_461928:
    // 0x461928: 0xc0538d8  jal         func_14E360
label_46192c:
    if (ctx->pc == 0x46192Cu) {
        ctx->pc = 0x46192Cu;
            // 0x46192c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x461930u;
        goto label_461930;
    }
    ctx->pc = 0x461928u;
    SET_GPR_U32(ctx, 31, 0x461930u);
    ctx->pc = 0x46192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461928u;
            // 0x46192c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461930u; }
        if (ctx->pc != 0x461930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461930u; }
        if (ctx->pc != 0x461930u) { return; }
    }
    ctx->pc = 0x461930u;
label_461930:
    // 0x461930: 0x10000005  b           . + 4 + (0x5 << 2)
label_461934:
    if (ctx->pc == 0x461934u) {
        ctx->pc = 0x461934u;
            // 0x461934: 0xa6a00058  sh          $zero, 0x58($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 88), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461938u;
        goto label_461938;
    }
    ctx->pc = 0x461930u;
    {
        const bool branch_taken_0x461930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461930u;
            // 0x461934: 0xa6a00058  sh          $zero, 0x58($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 88), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461930) {
            ctx->pc = 0x461948u;
            goto label_461948;
        }
    }
    ctx->pc = 0x461938u;
label_461938:
    // 0x461938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x461938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46193c:
    // 0x46193c: 0xc050044  jal         func_140110
label_461940:
    if (ctx->pc == 0x461940u) {
        ctx->pc = 0x461940u;
            // 0x461940: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x461944u;
        goto label_461944;
    }
    ctx->pc = 0x46193Cu;
    SET_GPR_U32(ctx, 31, 0x461944u);
    ctx->pc = 0x461940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46193Cu;
            // 0x461940: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461944u; }
        if (ctx->pc != 0x461944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461944u; }
        if (ctx->pc != 0x461944u) { return; }
    }
    ctx->pc = 0x461944u;
label_461944:
    // 0x461944: 0xa6a00058  sh          $zero, 0x58($s5)
    ctx->pc = 0x461944u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 88), (uint16_t)GPR_U32(ctx, 0));
label_461948:
    // 0x461948: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x461948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_46194c:
    // 0x46194c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46194cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_461950:
    // 0x461950: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x461950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_461954:
    // 0x461954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x461954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_461958:
    // 0x461958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46195c:
    // 0x46195c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46195cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461960:
    // 0x461960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461964:
    // 0x461964: 0x3e00008  jr          $ra
label_461968:
    if (ctx->pc == 0x461968u) {
        ctx->pc = 0x461968u;
            // 0x461968: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x46196Cu;
        goto label_46196c;
    }
    ctx->pc = 0x461964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461964u;
            // 0x461968: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46196Cu;
label_46196c:
    // 0x46196c: 0x0  nop
    ctx->pc = 0x46196cu;
    // NOP
label_461970:
    // 0x461970: 0x3e00008  jr          $ra
label_461974:
    if (ctx->pc == 0x461974u) {
        ctx->pc = 0x461974u;
            // 0x461974: 0xa4800058  sh          $zero, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461978u;
        goto label_461978;
    }
    ctx->pc = 0x461970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461970u;
            // 0x461974: 0xa4800058  sh          $zero, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461978u;
label_461978:
    // 0x461978: 0x0  nop
    ctx->pc = 0x461978u;
    // NOP
label_46197c:
    // 0x46197c: 0x0  nop
    ctx->pc = 0x46197cu;
    // NOP
label_461980:
    // 0x461980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x461980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_461984:
    // 0x461984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x461984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_461988:
    // 0x461988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x461988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46198c:
    // 0x46198c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461990:
    // 0x461990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461994:
    // 0x461994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461998:
    // 0x461998: 0x848300a8  lh          $v1, 0xA8($a0)
    ctx->pc = 0x461998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
label_46199c:
    // 0x46199c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_4619a0:
    if (ctx->pc == 0x4619A0u) {
        ctx->pc = 0x4619A0u;
            // 0x4619a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4619A4u;
        goto label_4619a4;
    }
    ctx->pc = 0x46199Cu;
    {
        const bool branch_taken_0x46199c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4619A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46199Cu;
            // 0x4619a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46199c) {
            ctx->pc = 0x461A7Cu;
            goto label_461a7c;
        }
    }
    ctx->pc = 0x4619A4u;
label_4619a4:
    // 0x4619a4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x4619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_4619a8:
    // 0x4619a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4619a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4619ac:
    // 0x4619ac: 0x8c50e378  lw          $s0, -0x1C88($v0)
    ctx->pc = 0x4619acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4619b0:
    // 0x4619b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4619b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4619b4:
    // 0x4619b4: 0x26710060  addiu       $s1, $s3, 0x60
    ctx->pc = 0x4619b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_4619b8:
    // 0x4619b8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x4619b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4619bc:
    // 0x4619bc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x4619bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4619c0:
    // 0x4619c0: 0xc04e4a4  jal         func_139290
label_4619c4:
    if (ctx->pc == 0x4619C4u) {
        ctx->pc = 0x4619C4u;
            // 0x4619c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4619C8u;
        goto label_4619c8;
    }
    ctx->pc = 0x4619C0u;
    SET_GPR_U32(ctx, 31, 0x4619C8u);
    ctx->pc = 0x4619C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4619C0u;
            // 0x4619c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619C8u; }
        if (ctx->pc != 0x4619C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619C8u; }
        if (ctx->pc != 0x4619C8u) { return; }
    }
    ctx->pc = 0x4619C8u;
label_4619c8:
    // 0x4619c8: 0x826200aa  lb          $v0, 0xAA($s3)
    ctx->pc = 0x4619c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 170)));
label_4619cc:
    // 0x4619cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4619ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4619d0:
    // 0x4619d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4619d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4619d4:
    // 0x4619d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4619d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4619d8:
    // 0x4619d8: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x4619d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_4619dc:
    // 0x4619dc: 0xc04e738  jal         func_139CE0
label_4619e0:
    if (ctx->pc == 0x4619E0u) {
        ctx->pc = 0x4619E0u;
            // 0x4619e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x4619E4u;
        goto label_4619e4;
    }
    ctx->pc = 0x4619DCu;
    SET_GPR_U32(ctx, 31, 0x4619E4u);
    ctx->pc = 0x4619E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4619DCu;
            // 0x4619e0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619E4u; }
        if (ctx->pc != 0x4619E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619E4u; }
        if (ctx->pc != 0x4619E4u) { return; }
    }
    ctx->pc = 0x4619E4u;
label_4619e4:
    // 0x4619e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4619e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4619e8:
    // 0x4619e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4619e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4619ec:
    // 0x4619ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4619ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4619f0:
    // 0x4619f0: 0xc054fd4  jal         func_153F50
label_4619f4:
    if (ctx->pc == 0x4619F4u) {
        ctx->pc = 0x4619F4u;
            // 0x4619f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4619F8u;
        goto label_4619f8;
    }
    ctx->pc = 0x4619F0u;
    SET_GPR_U32(ctx, 31, 0x4619F8u);
    ctx->pc = 0x4619F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4619F0u;
            // 0x4619f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619F8u; }
        if (ctx->pc != 0x4619F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4619F8u; }
        if (ctx->pc != 0x4619F8u) { return; }
    }
    ctx->pc = 0x4619F8u;
label_4619f8:
    // 0x4619f8: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x4619f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_4619fc:
    // 0x4619fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4619fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_461a00:
    // 0x461a00: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x461a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_461a04:
    // 0x461a04: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x461a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_461a08:
    // 0x461a08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x461a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_461a0c:
    // 0x461a0c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x461a0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_461a10:
    // 0x461a10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x461a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_461a14:
    // 0x461a14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x461a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_461a18:
    // 0x461a18: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_461a1c:
    if (ctx->pc == 0x461A1Cu) {
        ctx->pc = 0x461A1Cu;
            // 0x461a1c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x461A20u;
        goto label_461a20;
    }
    ctx->pc = 0x461A18u;
    {
        const bool branch_taken_0x461a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a18) {
            ctx->pc = 0x461A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461A18u;
            // 0x461a1c: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x461A34u;
            goto label_461a34;
        }
    }
    ctx->pc = 0x461A20u;
label_461a20:
    // 0x461a20: 0xc0bd780  jal         func_2F5E00
label_461a24:
    if (ctx->pc == 0x461A24u) {
        ctx->pc = 0x461A28u;
        goto label_461a28;
    }
    ctx->pc = 0x461A20u;
    SET_GPR_U32(ctx, 31, 0x461A28u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A28u; }
        if (ctx->pc != 0x461A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A28u; }
        if (ctx->pc != 0x461A28u) { return; }
    }
    ctx->pc = 0x461A28u;
label_461a28:
    // 0x461a28: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x461a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_461a2c:
    // 0x461a2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x461a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_461a30:
    // 0x461a30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x461a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461a34:
    // 0x461a34: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x461a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_461a38:
    // 0x461a38: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x461a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_461a3c:
    // 0x461a3c: 0x34680080  ori         $t0, $v1, 0x80
    ctx->pc = 0x461a3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_461a40:
    // 0x461a40: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x461a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_461a44:
    // 0x461a44: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_461a48:
    if (ctx->pc == 0x461A48u) {
        ctx->pc = 0x461A48u;
            // 0x461a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461A4Cu;
        goto label_461a4c;
    }
    ctx->pc = 0x461A44u;
    {
        const bool branch_taken_0x461a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a44) {
            ctx->pc = 0x461A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461A44u;
            // 0x461a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461A68u;
            goto label_461a68;
        }
    }
    ctx->pc = 0x461A4Cu;
label_461a4c:
    // 0x461a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x461a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_461a50:
    // 0x461a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x461a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461a54:
    // 0x461a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x461a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_461a58:
    // 0x461a58: 0xc055234  jal         func_1548D0
label_461a5c:
    if (ctx->pc == 0x461A5Cu) {
        ctx->pc = 0x461A5Cu;
            // 0x461a5c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x461A60u;
        goto label_461a60;
    }
    ctx->pc = 0x461A58u;
    SET_GPR_U32(ctx, 31, 0x461A60u);
    ctx->pc = 0x461A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461A58u;
            // 0x461a5c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A60u; }
        if (ctx->pc != 0x461A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A60u; }
        if (ctx->pc != 0x461A60u) { return; }
    }
    ctx->pc = 0x461A60u;
label_461a60:
    // 0x461a60: 0x10000006  b           . + 4 + (0x6 << 2)
label_461a64:
    if (ctx->pc == 0x461A64u) {
        ctx->pc = 0x461A64u;
            // 0x461a64: 0xa66000a8  sh          $zero, 0xA8($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 168), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461A68u;
        goto label_461a68;
    }
    ctx->pc = 0x461A60u;
    {
        const bool branch_taken_0x461a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x461A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461A60u;
            // 0x461a64: 0xa66000a8  sh          $zero, 0xA8($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 168), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461a60) {
            ctx->pc = 0x461A7Cu;
            goto label_461a7c;
        }
    }
    ctx->pc = 0x461A68u;
label_461a68:
    // 0x461a68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x461a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461a6c:
    // 0x461a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x461a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_461a70:
    // 0x461a70: 0xc0550f8  jal         func_1543E0
label_461a74:
    if (ctx->pc == 0x461A74u) {
        ctx->pc = 0x461A74u;
            // 0x461a74: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x461A78u;
        goto label_461a78;
    }
    ctx->pc = 0x461A70u;
    SET_GPR_U32(ctx, 31, 0x461A78u);
    ctx->pc = 0x461A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461A70u;
            // 0x461a74: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A78u; }
        if (ctx->pc != 0x461A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461A78u; }
        if (ctx->pc != 0x461A78u) { return; }
    }
    ctx->pc = 0x461A78u;
label_461a78:
    // 0x461a78: 0xa66000a8  sh          $zero, 0xA8($s3)
    ctx->pc = 0x461a78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 168), (uint16_t)GPR_U32(ctx, 0));
label_461a7c:
    // 0x461a7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x461a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_461a80:
    // 0x461a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x461a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_461a84:
    // 0x461a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461a88:
    // 0x461a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461a8c:
    // 0x461a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461a90:
    // 0x461a90: 0x3e00008  jr          $ra
label_461a94:
    if (ctx->pc == 0x461A94u) {
        ctx->pc = 0x461A94u;
            // 0x461a94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x461A98u;
        goto label_461a98;
    }
    ctx->pc = 0x461A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461A90u;
            // 0x461a94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461A98u;
label_461a98:
    // 0x461a98: 0x0  nop
    ctx->pc = 0x461a98u;
    // NOP
label_461a9c:
    // 0x461a9c: 0x0  nop
    ctx->pc = 0x461a9cu;
    // NOP
label_461aa0:
    // 0x461aa0: 0x3e00008  jr          $ra
label_461aa4:
    if (ctx->pc == 0x461AA4u) {
        ctx->pc = 0x461AA4u;
            // 0x461aa4: 0xa48000a8  sh          $zero, 0xA8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x461AA8u;
        goto label_461aa8;
    }
    ctx->pc = 0x461AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461AA0u;
            // 0x461aa4: 0xa48000a8  sh          $zero, 0xA8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 168), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461AA8u;
label_461aa8:
    // 0x461aa8: 0x0  nop
    ctx->pc = 0x461aa8u;
    // NOP
label_461aac:
    // 0x461aac: 0x0  nop
    ctx->pc = 0x461aacu;
    // NOP
label_461ab0:
    // 0x461ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x461ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_461ab4:
    // 0x461ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x461ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_461ab8:
    // 0x461ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461abc:
    // 0x461abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461ac0:
    // 0x461ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x461ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_461ac4:
    // 0x461ac4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_461ac8:
    if (ctx->pc == 0x461AC8u) {
        ctx->pc = 0x461AC8u;
            // 0x461ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461ACCu;
        goto label_461acc;
    }
    ctx->pc = 0x461AC4u;
    {
        const bool branch_taken_0x461ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x461AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461AC4u;
            // 0x461ac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461ac4) {
            ctx->pc = 0x461B08u;
            goto label_461b08;
        }
    }
    ctx->pc = 0x461ACCu;
label_461acc:
    // 0x461acc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x461accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_461ad0:
    // 0x461ad0: 0x2442e540  addiu       $v0, $v0, -0x1AC0
    ctx->pc = 0x461ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960448));
label_461ad4:
    // 0x461ad4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_461ad8:
    if (ctx->pc == 0x461AD8u) {
        ctx->pc = 0x461AD8u;
            // 0x461ad8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x461ADCu;
        goto label_461adc;
    }
    ctx->pc = 0x461AD4u;
    {
        const bool branch_taken_0x461ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x461AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461AD4u;
            // 0x461ad8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461ad4) {
            ctx->pc = 0x461AF0u;
            goto label_461af0;
        }
    }
    ctx->pc = 0x461ADCu;
label_461adc:
    // 0x461adc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x461adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_461ae0:
    // 0x461ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461ae4:
    // 0x461ae4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x461ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_461ae8:
    // 0x461ae8: 0xc057a68  jal         func_15E9A0
label_461aec:
    if (ctx->pc == 0x461AECu) {
        ctx->pc = 0x461AECu;
            // 0x461aec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x461AF0u;
        goto label_461af0;
    }
    ctx->pc = 0x461AE8u;
    SET_GPR_U32(ctx, 31, 0x461AF0u);
    ctx->pc = 0x461AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461AE8u;
            // 0x461aec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461AF0u; }
        if (ctx->pc != 0x461AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461AF0u; }
        if (ctx->pc != 0x461AF0u) { return; }
    }
    ctx->pc = 0x461AF0u;
label_461af0:
    // 0x461af0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x461af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_461af4:
    // 0x461af4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x461af4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_461af8:
    // 0x461af8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_461afc:
    if (ctx->pc == 0x461AFCu) {
        ctx->pc = 0x461AFCu;
            // 0x461afc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461B00u;
        goto label_461b00;
    }
    ctx->pc = 0x461AF8u;
    {
        const bool branch_taken_0x461af8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x461af8) {
            ctx->pc = 0x461AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x461AF8u;
            // 0x461afc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x461B0Cu;
            goto label_461b0c;
        }
    }
    ctx->pc = 0x461B00u;
label_461b00:
    // 0x461b00: 0xc0400a8  jal         func_1002A0
label_461b04:
    if (ctx->pc == 0x461B04u) {
        ctx->pc = 0x461B04u;
            // 0x461b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x461B08u;
        goto label_461b08;
    }
    ctx->pc = 0x461B00u;
    SET_GPR_U32(ctx, 31, 0x461B08u);
    ctx->pc = 0x461B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x461B00u;
            // 0x461b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461B08u; }
        if (ctx->pc != 0x461B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x461B08u; }
        if (ctx->pc != 0x461B08u) { return; }
    }
    ctx->pc = 0x461B08u;
label_461b08:
    // 0x461b08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x461b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_461b0c:
    // 0x461b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x461b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_461b10:
    // 0x461b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461b14:
    // 0x461b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461b18:
    // 0x461b18: 0x3e00008  jr          $ra
label_461b1c:
    if (ctx->pc == 0x461B1Cu) {
        ctx->pc = 0x461B1Cu;
            // 0x461b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x461B20u;
        goto label_461b20;
    }
    ctx->pc = 0x461B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x461B18u;
            // 0x461b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x461B20u;
label_461b20:
    // 0x461b20: 0x80cc4a8  j           func_3312A0
label_461b24:
    if (ctx->pc == 0x461B24u) {
        ctx->pc = 0x461B28u;
        goto label_461b28;
    }
    ctx->pc = 0x461B20u;
    ctx->pc = 0x3312A0u;
    {
        auto targetFn = runtime->lookupFunction(0x3312A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x461B28u;
label_461b28:
    // 0x461b28: 0x0  nop
    ctx->pc = 0x461b28u;
    // NOP
label_461b2c:
    // 0x461b2c: 0x0  nop
    ctx->pc = 0x461b2cu;
    // NOP
}
