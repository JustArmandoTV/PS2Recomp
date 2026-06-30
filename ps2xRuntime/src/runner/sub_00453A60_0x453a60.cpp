#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00453A60
// Address: 0x453a60 - 0x454bb0
void sub_00453A60_0x453a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453A60_0x453a60");
#endif

    switch (ctx->pc) {
        case 0x453a60u: goto label_453a60;
        case 0x453a64u: goto label_453a64;
        case 0x453a68u: goto label_453a68;
        case 0x453a6cu: goto label_453a6c;
        case 0x453a70u: goto label_453a70;
        case 0x453a74u: goto label_453a74;
        case 0x453a78u: goto label_453a78;
        case 0x453a7cu: goto label_453a7c;
        case 0x453a80u: goto label_453a80;
        case 0x453a84u: goto label_453a84;
        case 0x453a88u: goto label_453a88;
        case 0x453a8cu: goto label_453a8c;
        case 0x453a90u: goto label_453a90;
        case 0x453a94u: goto label_453a94;
        case 0x453a98u: goto label_453a98;
        case 0x453a9cu: goto label_453a9c;
        case 0x453aa0u: goto label_453aa0;
        case 0x453aa4u: goto label_453aa4;
        case 0x453aa8u: goto label_453aa8;
        case 0x453aacu: goto label_453aac;
        case 0x453ab0u: goto label_453ab0;
        case 0x453ab4u: goto label_453ab4;
        case 0x453ab8u: goto label_453ab8;
        case 0x453abcu: goto label_453abc;
        case 0x453ac0u: goto label_453ac0;
        case 0x453ac4u: goto label_453ac4;
        case 0x453ac8u: goto label_453ac8;
        case 0x453accu: goto label_453acc;
        case 0x453ad0u: goto label_453ad0;
        case 0x453ad4u: goto label_453ad4;
        case 0x453ad8u: goto label_453ad8;
        case 0x453adcu: goto label_453adc;
        case 0x453ae0u: goto label_453ae0;
        case 0x453ae4u: goto label_453ae4;
        case 0x453ae8u: goto label_453ae8;
        case 0x453aecu: goto label_453aec;
        case 0x453af0u: goto label_453af0;
        case 0x453af4u: goto label_453af4;
        case 0x453af8u: goto label_453af8;
        case 0x453afcu: goto label_453afc;
        case 0x453b00u: goto label_453b00;
        case 0x453b04u: goto label_453b04;
        case 0x453b08u: goto label_453b08;
        case 0x453b0cu: goto label_453b0c;
        case 0x453b10u: goto label_453b10;
        case 0x453b14u: goto label_453b14;
        case 0x453b18u: goto label_453b18;
        case 0x453b1cu: goto label_453b1c;
        case 0x453b20u: goto label_453b20;
        case 0x453b24u: goto label_453b24;
        case 0x453b28u: goto label_453b28;
        case 0x453b2cu: goto label_453b2c;
        case 0x453b30u: goto label_453b30;
        case 0x453b34u: goto label_453b34;
        case 0x453b38u: goto label_453b38;
        case 0x453b3cu: goto label_453b3c;
        case 0x453b40u: goto label_453b40;
        case 0x453b44u: goto label_453b44;
        case 0x453b48u: goto label_453b48;
        case 0x453b4cu: goto label_453b4c;
        case 0x453b50u: goto label_453b50;
        case 0x453b54u: goto label_453b54;
        case 0x453b58u: goto label_453b58;
        case 0x453b5cu: goto label_453b5c;
        case 0x453b60u: goto label_453b60;
        case 0x453b64u: goto label_453b64;
        case 0x453b68u: goto label_453b68;
        case 0x453b6cu: goto label_453b6c;
        case 0x453b70u: goto label_453b70;
        case 0x453b74u: goto label_453b74;
        case 0x453b78u: goto label_453b78;
        case 0x453b7cu: goto label_453b7c;
        case 0x453b80u: goto label_453b80;
        case 0x453b84u: goto label_453b84;
        case 0x453b88u: goto label_453b88;
        case 0x453b8cu: goto label_453b8c;
        case 0x453b90u: goto label_453b90;
        case 0x453b94u: goto label_453b94;
        case 0x453b98u: goto label_453b98;
        case 0x453b9cu: goto label_453b9c;
        case 0x453ba0u: goto label_453ba0;
        case 0x453ba4u: goto label_453ba4;
        case 0x453ba8u: goto label_453ba8;
        case 0x453bacu: goto label_453bac;
        case 0x453bb0u: goto label_453bb0;
        case 0x453bb4u: goto label_453bb4;
        case 0x453bb8u: goto label_453bb8;
        case 0x453bbcu: goto label_453bbc;
        case 0x453bc0u: goto label_453bc0;
        case 0x453bc4u: goto label_453bc4;
        case 0x453bc8u: goto label_453bc8;
        case 0x453bccu: goto label_453bcc;
        case 0x453bd0u: goto label_453bd0;
        case 0x453bd4u: goto label_453bd4;
        case 0x453bd8u: goto label_453bd8;
        case 0x453bdcu: goto label_453bdc;
        case 0x453be0u: goto label_453be0;
        case 0x453be4u: goto label_453be4;
        case 0x453be8u: goto label_453be8;
        case 0x453becu: goto label_453bec;
        case 0x453bf0u: goto label_453bf0;
        case 0x453bf4u: goto label_453bf4;
        case 0x453bf8u: goto label_453bf8;
        case 0x453bfcu: goto label_453bfc;
        case 0x453c00u: goto label_453c00;
        case 0x453c04u: goto label_453c04;
        case 0x453c08u: goto label_453c08;
        case 0x453c0cu: goto label_453c0c;
        case 0x453c10u: goto label_453c10;
        case 0x453c14u: goto label_453c14;
        case 0x453c18u: goto label_453c18;
        case 0x453c1cu: goto label_453c1c;
        case 0x453c20u: goto label_453c20;
        case 0x453c24u: goto label_453c24;
        case 0x453c28u: goto label_453c28;
        case 0x453c2cu: goto label_453c2c;
        case 0x453c30u: goto label_453c30;
        case 0x453c34u: goto label_453c34;
        case 0x453c38u: goto label_453c38;
        case 0x453c3cu: goto label_453c3c;
        case 0x453c40u: goto label_453c40;
        case 0x453c44u: goto label_453c44;
        case 0x453c48u: goto label_453c48;
        case 0x453c4cu: goto label_453c4c;
        case 0x453c50u: goto label_453c50;
        case 0x453c54u: goto label_453c54;
        case 0x453c58u: goto label_453c58;
        case 0x453c5cu: goto label_453c5c;
        case 0x453c60u: goto label_453c60;
        case 0x453c64u: goto label_453c64;
        case 0x453c68u: goto label_453c68;
        case 0x453c6cu: goto label_453c6c;
        case 0x453c70u: goto label_453c70;
        case 0x453c74u: goto label_453c74;
        case 0x453c78u: goto label_453c78;
        case 0x453c7cu: goto label_453c7c;
        case 0x453c80u: goto label_453c80;
        case 0x453c84u: goto label_453c84;
        case 0x453c88u: goto label_453c88;
        case 0x453c8cu: goto label_453c8c;
        case 0x453c90u: goto label_453c90;
        case 0x453c94u: goto label_453c94;
        case 0x453c98u: goto label_453c98;
        case 0x453c9cu: goto label_453c9c;
        case 0x453ca0u: goto label_453ca0;
        case 0x453ca4u: goto label_453ca4;
        case 0x453ca8u: goto label_453ca8;
        case 0x453cacu: goto label_453cac;
        case 0x453cb0u: goto label_453cb0;
        case 0x453cb4u: goto label_453cb4;
        case 0x453cb8u: goto label_453cb8;
        case 0x453cbcu: goto label_453cbc;
        case 0x453cc0u: goto label_453cc0;
        case 0x453cc4u: goto label_453cc4;
        case 0x453cc8u: goto label_453cc8;
        case 0x453cccu: goto label_453ccc;
        case 0x453cd0u: goto label_453cd0;
        case 0x453cd4u: goto label_453cd4;
        case 0x453cd8u: goto label_453cd8;
        case 0x453cdcu: goto label_453cdc;
        case 0x453ce0u: goto label_453ce0;
        case 0x453ce4u: goto label_453ce4;
        case 0x453ce8u: goto label_453ce8;
        case 0x453cecu: goto label_453cec;
        case 0x453cf0u: goto label_453cf0;
        case 0x453cf4u: goto label_453cf4;
        case 0x453cf8u: goto label_453cf8;
        case 0x453cfcu: goto label_453cfc;
        case 0x453d00u: goto label_453d00;
        case 0x453d04u: goto label_453d04;
        case 0x453d08u: goto label_453d08;
        case 0x453d0cu: goto label_453d0c;
        case 0x453d10u: goto label_453d10;
        case 0x453d14u: goto label_453d14;
        case 0x453d18u: goto label_453d18;
        case 0x453d1cu: goto label_453d1c;
        case 0x453d20u: goto label_453d20;
        case 0x453d24u: goto label_453d24;
        case 0x453d28u: goto label_453d28;
        case 0x453d2cu: goto label_453d2c;
        case 0x453d30u: goto label_453d30;
        case 0x453d34u: goto label_453d34;
        case 0x453d38u: goto label_453d38;
        case 0x453d3cu: goto label_453d3c;
        case 0x453d40u: goto label_453d40;
        case 0x453d44u: goto label_453d44;
        case 0x453d48u: goto label_453d48;
        case 0x453d4cu: goto label_453d4c;
        case 0x453d50u: goto label_453d50;
        case 0x453d54u: goto label_453d54;
        case 0x453d58u: goto label_453d58;
        case 0x453d5cu: goto label_453d5c;
        case 0x453d60u: goto label_453d60;
        case 0x453d64u: goto label_453d64;
        case 0x453d68u: goto label_453d68;
        case 0x453d6cu: goto label_453d6c;
        case 0x453d70u: goto label_453d70;
        case 0x453d74u: goto label_453d74;
        case 0x453d78u: goto label_453d78;
        case 0x453d7cu: goto label_453d7c;
        case 0x453d80u: goto label_453d80;
        case 0x453d84u: goto label_453d84;
        case 0x453d88u: goto label_453d88;
        case 0x453d8cu: goto label_453d8c;
        case 0x453d90u: goto label_453d90;
        case 0x453d94u: goto label_453d94;
        case 0x453d98u: goto label_453d98;
        case 0x453d9cu: goto label_453d9c;
        case 0x453da0u: goto label_453da0;
        case 0x453da4u: goto label_453da4;
        case 0x453da8u: goto label_453da8;
        case 0x453dacu: goto label_453dac;
        case 0x453db0u: goto label_453db0;
        case 0x453db4u: goto label_453db4;
        case 0x453db8u: goto label_453db8;
        case 0x453dbcu: goto label_453dbc;
        case 0x453dc0u: goto label_453dc0;
        case 0x453dc4u: goto label_453dc4;
        case 0x453dc8u: goto label_453dc8;
        case 0x453dccu: goto label_453dcc;
        case 0x453dd0u: goto label_453dd0;
        case 0x453dd4u: goto label_453dd4;
        case 0x453dd8u: goto label_453dd8;
        case 0x453ddcu: goto label_453ddc;
        case 0x453de0u: goto label_453de0;
        case 0x453de4u: goto label_453de4;
        case 0x453de8u: goto label_453de8;
        case 0x453decu: goto label_453dec;
        case 0x453df0u: goto label_453df0;
        case 0x453df4u: goto label_453df4;
        case 0x453df8u: goto label_453df8;
        case 0x453dfcu: goto label_453dfc;
        case 0x453e00u: goto label_453e00;
        case 0x453e04u: goto label_453e04;
        case 0x453e08u: goto label_453e08;
        case 0x453e0cu: goto label_453e0c;
        case 0x453e10u: goto label_453e10;
        case 0x453e14u: goto label_453e14;
        case 0x453e18u: goto label_453e18;
        case 0x453e1cu: goto label_453e1c;
        case 0x453e20u: goto label_453e20;
        case 0x453e24u: goto label_453e24;
        case 0x453e28u: goto label_453e28;
        case 0x453e2cu: goto label_453e2c;
        case 0x453e30u: goto label_453e30;
        case 0x453e34u: goto label_453e34;
        case 0x453e38u: goto label_453e38;
        case 0x453e3cu: goto label_453e3c;
        case 0x453e40u: goto label_453e40;
        case 0x453e44u: goto label_453e44;
        case 0x453e48u: goto label_453e48;
        case 0x453e4cu: goto label_453e4c;
        case 0x453e50u: goto label_453e50;
        case 0x453e54u: goto label_453e54;
        case 0x453e58u: goto label_453e58;
        case 0x453e5cu: goto label_453e5c;
        case 0x453e60u: goto label_453e60;
        case 0x453e64u: goto label_453e64;
        case 0x453e68u: goto label_453e68;
        case 0x453e6cu: goto label_453e6c;
        case 0x453e70u: goto label_453e70;
        case 0x453e74u: goto label_453e74;
        case 0x453e78u: goto label_453e78;
        case 0x453e7cu: goto label_453e7c;
        case 0x453e80u: goto label_453e80;
        case 0x453e84u: goto label_453e84;
        case 0x453e88u: goto label_453e88;
        case 0x453e8cu: goto label_453e8c;
        case 0x453e90u: goto label_453e90;
        case 0x453e94u: goto label_453e94;
        case 0x453e98u: goto label_453e98;
        case 0x453e9cu: goto label_453e9c;
        case 0x453ea0u: goto label_453ea0;
        case 0x453ea4u: goto label_453ea4;
        case 0x453ea8u: goto label_453ea8;
        case 0x453eacu: goto label_453eac;
        case 0x453eb0u: goto label_453eb0;
        case 0x453eb4u: goto label_453eb4;
        case 0x453eb8u: goto label_453eb8;
        case 0x453ebcu: goto label_453ebc;
        case 0x453ec0u: goto label_453ec0;
        case 0x453ec4u: goto label_453ec4;
        case 0x453ec8u: goto label_453ec8;
        case 0x453eccu: goto label_453ecc;
        case 0x453ed0u: goto label_453ed0;
        case 0x453ed4u: goto label_453ed4;
        case 0x453ed8u: goto label_453ed8;
        case 0x453edcu: goto label_453edc;
        case 0x453ee0u: goto label_453ee0;
        case 0x453ee4u: goto label_453ee4;
        case 0x453ee8u: goto label_453ee8;
        case 0x453eecu: goto label_453eec;
        case 0x453ef0u: goto label_453ef0;
        case 0x453ef4u: goto label_453ef4;
        case 0x453ef8u: goto label_453ef8;
        case 0x453efcu: goto label_453efc;
        case 0x453f00u: goto label_453f00;
        case 0x453f04u: goto label_453f04;
        case 0x453f08u: goto label_453f08;
        case 0x453f0cu: goto label_453f0c;
        case 0x453f10u: goto label_453f10;
        case 0x453f14u: goto label_453f14;
        case 0x453f18u: goto label_453f18;
        case 0x453f1cu: goto label_453f1c;
        case 0x453f20u: goto label_453f20;
        case 0x453f24u: goto label_453f24;
        case 0x453f28u: goto label_453f28;
        case 0x453f2cu: goto label_453f2c;
        case 0x453f30u: goto label_453f30;
        case 0x453f34u: goto label_453f34;
        case 0x453f38u: goto label_453f38;
        case 0x453f3cu: goto label_453f3c;
        case 0x453f40u: goto label_453f40;
        case 0x453f44u: goto label_453f44;
        case 0x453f48u: goto label_453f48;
        case 0x453f4cu: goto label_453f4c;
        case 0x453f50u: goto label_453f50;
        case 0x453f54u: goto label_453f54;
        case 0x453f58u: goto label_453f58;
        case 0x453f5cu: goto label_453f5c;
        case 0x453f60u: goto label_453f60;
        case 0x453f64u: goto label_453f64;
        case 0x453f68u: goto label_453f68;
        case 0x453f6cu: goto label_453f6c;
        case 0x453f70u: goto label_453f70;
        case 0x453f74u: goto label_453f74;
        case 0x453f78u: goto label_453f78;
        case 0x453f7cu: goto label_453f7c;
        case 0x453f80u: goto label_453f80;
        case 0x453f84u: goto label_453f84;
        case 0x453f88u: goto label_453f88;
        case 0x453f8cu: goto label_453f8c;
        case 0x453f90u: goto label_453f90;
        case 0x453f94u: goto label_453f94;
        case 0x453f98u: goto label_453f98;
        case 0x453f9cu: goto label_453f9c;
        case 0x453fa0u: goto label_453fa0;
        case 0x453fa4u: goto label_453fa4;
        case 0x453fa8u: goto label_453fa8;
        case 0x453facu: goto label_453fac;
        case 0x453fb0u: goto label_453fb0;
        case 0x453fb4u: goto label_453fb4;
        case 0x453fb8u: goto label_453fb8;
        case 0x453fbcu: goto label_453fbc;
        case 0x453fc0u: goto label_453fc0;
        case 0x453fc4u: goto label_453fc4;
        case 0x453fc8u: goto label_453fc8;
        case 0x453fccu: goto label_453fcc;
        case 0x453fd0u: goto label_453fd0;
        case 0x453fd4u: goto label_453fd4;
        case 0x453fd8u: goto label_453fd8;
        case 0x453fdcu: goto label_453fdc;
        case 0x453fe0u: goto label_453fe0;
        case 0x453fe4u: goto label_453fe4;
        case 0x453fe8u: goto label_453fe8;
        case 0x453fecu: goto label_453fec;
        case 0x453ff0u: goto label_453ff0;
        case 0x453ff4u: goto label_453ff4;
        case 0x453ff8u: goto label_453ff8;
        case 0x453ffcu: goto label_453ffc;
        case 0x454000u: goto label_454000;
        case 0x454004u: goto label_454004;
        case 0x454008u: goto label_454008;
        case 0x45400cu: goto label_45400c;
        case 0x454010u: goto label_454010;
        case 0x454014u: goto label_454014;
        case 0x454018u: goto label_454018;
        case 0x45401cu: goto label_45401c;
        case 0x454020u: goto label_454020;
        case 0x454024u: goto label_454024;
        case 0x454028u: goto label_454028;
        case 0x45402cu: goto label_45402c;
        case 0x454030u: goto label_454030;
        case 0x454034u: goto label_454034;
        case 0x454038u: goto label_454038;
        case 0x45403cu: goto label_45403c;
        case 0x454040u: goto label_454040;
        case 0x454044u: goto label_454044;
        case 0x454048u: goto label_454048;
        case 0x45404cu: goto label_45404c;
        case 0x454050u: goto label_454050;
        case 0x454054u: goto label_454054;
        case 0x454058u: goto label_454058;
        case 0x45405cu: goto label_45405c;
        case 0x454060u: goto label_454060;
        case 0x454064u: goto label_454064;
        case 0x454068u: goto label_454068;
        case 0x45406cu: goto label_45406c;
        case 0x454070u: goto label_454070;
        case 0x454074u: goto label_454074;
        case 0x454078u: goto label_454078;
        case 0x45407cu: goto label_45407c;
        case 0x454080u: goto label_454080;
        case 0x454084u: goto label_454084;
        case 0x454088u: goto label_454088;
        case 0x45408cu: goto label_45408c;
        case 0x454090u: goto label_454090;
        case 0x454094u: goto label_454094;
        case 0x454098u: goto label_454098;
        case 0x45409cu: goto label_45409c;
        case 0x4540a0u: goto label_4540a0;
        case 0x4540a4u: goto label_4540a4;
        case 0x4540a8u: goto label_4540a8;
        case 0x4540acu: goto label_4540ac;
        case 0x4540b0u: goto label_4540b0;
        case 0x4540b4u: goto label_4540b4;
        case 0x4540b8u: goto label_4540b8;
        case 0x4540bcu: goto label_4540bc;
        case 0x4540c0u: goto label_4540c0;
        case 0x4540c4u: goto label_4540c4;
        case 0x4540c8u: goto label_4540c8;
        case 0x4540ccu: goto label_4540cc;
        case 0x4540d0u: goto label_4540d0;
        case 0x4540d4u: goto label_4540d4;
        case 0x4540d8u: goto label_4540d8;
        case 0x4540dcu: goto label_4540dc;
        case 0x4540e0u: goto label_4540e0;
        case 0x4540e4u: goto label_4540e4;
        case 0x4540e8u: goto label_4540e8;
        case 0x4540ecu: goto label_4540ec;
        case 0x4540f0u: goto label_4540f0;
        case 0x4540f4u: goto label_4540f4;
        case 0x4540f8u: goto label_4540f8;
        case 0x4540fcu: goto label_4540fc;
        case 0x454100u: goto label_454100;
        case 0x454104u: goto label_454104;
        case 0x454108u: goto label_454108;
        case 0x45410cu: goto label_45410c;
        case 0x454110u: goto label_454110;
        case 0x454114u: goto label_454114;
        case 0x454118u: goto label_454118;
        case 0x45411cu: goto label_45411c;
        case 0x454120u: goto label_454120;
        case 0x454124u: goto label_454124;
        case 0x454128u: goto label_454128;
        case 0x45412cu: goto label_45412c;
        case 0x454130u: goto label_454130;
        case 0x454134u: goto label_454134;
        case 0x454138u: goto label_454138;
        case 0x45413cu: goto label_45413c;
        case 0x454140u: goto label_454140;
        case 0x454144u: goto label_454144;
        case 0x454148u: goto label_454148;
        case 0x45414cu: goto label_45414c;
        case 0x454150u: goto label_454150;
        case 0x454154u: goto label_454154;
        case 0x454158u: goto label_454158;
        case 0x45415cu: goto label_45415c;
        case 0x454160u: goto label_454160;
        case 0x454164u: goto label_454164;
        case 0x454168u: goto label_454168;
        case 0x45416cu: goto label_45416c;
        case 0x454170u: goto label_454170;
        case 0x454174u: goto label_454174;
        case 0x454178u: goto label_454178;
        case 0x45417cu: goto label_45417c;
        case 0x454180u: goto label_454180;
        case 0x454184u: goto label_454184;
        case 0x454188u: goto label_454188;
        case 0x45418cu: goto label_45418c;
        case 0x454190u: goto label_454190;
        case 0x454194u: goto label_454194;
        case 0x454198u: goto label_454198;
        case 0x45419cu: goto label_45419c;
        case 0x4541a0u: goto label_4541a0;
        case 0x4541a4u: goto label_4541a4;
        case 0x4541a8u: goto label_4541a8;
        case 0x4541acu: goto label_4541ac;
        case 0x4541b0u: goto label_4541b0;
        case 0x4541b4u: goto label_4541b4;
        case 0x4541b8u: goto label_4541b8;
        case 0x4541bcu: goto label_4541bc;
        case 0x4541c0u: goto label_4541c0;
        case 0x4541c4u: goto label_4541c4;
        case 0x4541c8u: goto label_4541c8;
        case 0x4541ccu: goto label_4541cc;
        case 0x4541d0u: goto label_4541d0;
        case 0x4541d4u: goto label_4541d4;
        case 0x4541d8u: goto label_4541d8;
        case 0x4541dcu: goto label_4541dc;
        case 0x4541e0u: goto label_4541e0;
        case 0x4541e4u: goto label_4541e4;
        case 0x4541e8u: goto label_4541e8;
        case 0x4541ecu: goto label_4541ec;
        case 0x4541f0u: goto label_4541f0;
        case 0x4541f4u: goto label_4541f4;
        case 0x4541f8u: goto label_4541f8;
        case 0x4541fcu: goto label_4541fc;
        case 0x454200u: goto label_454200;
        case 0x454204u: goto label_454204;
        case 0x454208u: goto label_454208;
        case 0x45420cu: goto label_45420c;
        case 0x454210u: goto label_454210;
        case 0x454214u: goto label_454214;
        case 0x454218u: goto label_454218;
        case 0x45421cu: goto label_45421c;
        case 0x454220u: goto label_454220;
        case 0x454224u: goto label_454224;
        case 0x454228u: goto label_454228;
        case 0x45422cu: goto label_45422c;
        case 0x454230u: goto label_454230;
        case 0x454234u: goto label_454234;
        case 0x454238u: goto label_454238;
        case 0x45423cu: goto label_45423c;
        case 0x454240u: goto label_454240;
        case 0x454244u: goto label_454244;
        case 0x454248u: goto label_454248;
        case 0x45424cu: goto label_45424c;
        case 0x454250u: goto label_454250;
        case 0x454254u: goto label_454254;
        case 0x454258u: goto label_454258;
        case 0x45425cu: goto label_45425c;
        case 0x454260u: goto label_454260;
        case 0x454264u: goto label_454264;
        case 0x454268u: goto label_454268;
        case 0x45426cu: goto label_45426c;
        case 0x454270u: goto label_454270;
        case 0x454274u: goto label_454274;
        case 0x454278u: goto label_454278;
        case 0x45427cu: goto label_45427c;
        case 0x454280u: goto label_454280;
        case 0x454284u: goto label_454284;
        case 0x454288u: goto label_454288;
        case 0x45428cu: goto label_45428c;
        case 0x454290u: goto label_454290;
        case 0x454294u: goto label_454294;
        case 0x454298u: goto label_454298;
        case 0x45429cu: goto label_45429c;
        case 0x4542a0u: goto label_4542a0;
        case 0x4542a4u: goto label_4542a4;
        case 0x4542a8u: goto label_4542a8;
        case 0x4542acu: goto label_4542ac;
        case 0x4542b0u: goto label_4542b0;
        case 0x4542b4u: goto label_4542b4;
        case 0x4542b8u: goto label_4542b8;
        case 0x4542bcu: goto label_4542bc;
        case 0x4542c0u: goto label_4542c0;
        case 0x4542c4u: goto label_4542c4;
        case 0x4542c8u: goto label_4542c8;
        case 0x4542ccu: goto label_4542cc;
        case 0x4542d0u: goto label_4542d0;
        case 0x4542d4u: goto label_4542d4;
        case 0x4542d8u: goto label_4542d8;
        case 0x4542dcu: goto label_4542dc;
        case 0x4542e0u: goto label_4542e0;
        case 0x4542e4u: goto label_4542e4;
        case 0x4542e8u: goto label_4542e8;
        case 0x4542ecu: goto label_4542ec;
        case 0x4542f0u: goto label_4542f0;
        case 0x4542f4u: goto label_4542f4;
        case 0x4542f8u: goto label_4542f8;
        case 0x4542fcu: goto label_4542fc;
        case 0x454300u: goto label_454300;
        case 0x454304u: goto label_454304;
        case 0x454308u: goto label_454308;
        case 0x45430cu: goto label_45430c;
        case 0x454310u: goto label_454310;
        case 0x454314u: goto label_454314;
        case 0x454318u: goto label_454318;
        case 0x45431cu: goto label_45431c;
        case 0x454320u: goto label_454320;
        case 0x454324u: goto label_454324;
        case 0x454328u: goto label_454328;
        case 0x45432cu: goto label_45432c;
        case 0x454330u: goto label_454330;
        case 0x454334u: goto label_454334;
        case 0x454338u: goto label_454338;
        case 0x45433cu: goto label_45433c;
        case 0x454340u: goto label_454340;
        case 0x454344u: goto label_454344;
        case 0x454348u: goto label_454348;
        case 0x45434cu: goto label_45434c;
        case 0x454350u: goto label_454350;
        case 0x454354u: goto label_454354;
        case 0x454358u: goto label_454358;
        case 0x45435cu: goto label_45435c;
        case 0x454360u: goto label_454360;
        case 0x454364u: goto label_454364;
        case 0x454368u: goto label_454368;
        case 0x45436cu: goto label_45436c;
        case 0x454370u: goto label_454370;
        case 0x454374u: goto label_454374;
        case 0x454378u: goto label_454378;
        case 0x45437cu: goto label_45437c;
        case 0x454380u: goto label_454380;
        case 0x454384u: goto label_454384;
        case 0x454388u: goto label_454388;
        case 0x45438cu: goto label_45438c;
        case 0x454390u: goto label_454390;
        case 0x454394u: goto label_454394;
        case 0x454398u: goto label_454398;
        case 0x45439cu: goto label_45439c;
        case 0x4543a0u: goto label_4543a0;
        case 0x4543a4u: goto label_4543a4;
        case 0x4543a8u: goto label_4543a8;
        case 0x4543acu: goto label_4543ac;
        case 0x4543b0u: goto label_4543b0;
        case 0x4543b4u: goto label_4543b4;
        case 0x4543b8u: goto label_4543b8;
        case 0x4543bcu: goto label_4543bc;
        case 0x4543c0u: goto label_4543c0;
        case 0x4543c4u: goto label_4543c4;
        case 0x4543c8u: goto label_4543c8;
        case 0x4543ccu: goto label_4543cc;
        case 0x4543d0u: goto label_4543d0;
        case 0x4543d4u: goto label_4543d4;
        case 0x4543d8u: goto label_4543d8;
        case 0x4543dcu: goto label_4543dc;
        case 0x4543e0u: goto label_4543e0;
        case 0x4543e4u: goto label_4543e4;
        case 0x4543e8u: goto label_4543e8;
        case 0x4543ecu: goto label_4543ec;
        case 0x4543f0u: goto label_4543f0;
        case 0x4543f4u: goto label_4543f4;
        case 0x4543f8u: goto label_4543f8;
        case 0x4543fcu: goto label_4543fc;
        case 0x454400u: goto label_454400;
        case 0x454404u: goto label_454404;
        case 0x454408u: goto label_454408;
        case 0x45440cu: goto label_45440c;
        case 0x454410u: goto label_454410;
        case 0x454414u: goto label_454414;
        case 0x454418u: goto label_454418;
        case 0x45441cu: goto label_45441c;
        case 0x454420u: goto label_454420;
        case 0x454424u: goto label_454424;
        case 0x454428u: goto label_454428;
        case 0x45442cu: goto label_45442c;
        case 0x454430u: goto label_454430;
        case 0x454434u: goto label_454434;
        case 0x454438u: goto label_454438;
        case 0x45443cu: goto label_45443c;
        case 0x454440u: goto label_454440;
        case 0x454444u: goto label_454444;
        case 0x454448u: goto label_454448;
        case 0x45444cu: goto label_45444c;
        case 0x454450u: goto label_454450;
        case 0x454454u: goto label_454454;
        case 0x454458u: goto label_454458;
        case 0x45445cu: goto label_45445c;
        case 0x454460u: goto label_454460;
        case 0x454464u: goto label_454464;
        case 0x454468u: goto label_454468;
        case 0x45446cu: goto label_45446c;
        case 0x454470u: goto label_454470;
        case 0x454474u: goto label_454474;
        case 0x454478u: goto label_454478;
        case 0x45447cu: goto label_45447c;
        case 0x454480u: goto label_454480;
        case 0x454484u: goto label_454484;
        case 0x454488u: goto label_454488;
        case 0x45448cu: goto label_45448c;
        case 0x454490u: goto label_454490;
        case 0x454494u: goto label_454494;
        case 0x454498u: goto label_454498;
        case 0x45449cu: goto label_45449c;
        case 0x4544a0u: goto label_4544a0;
        case 0x4544a4u: goto label_4544a4;
        case 0x4544a8u: goto label_4544a8;
        case 0x4544acu: goto label_4544ac;
        case 0x4544b0u: goto label_4544b0;
        case 0x4544b4u: goto label_4544b4;
        case 0x4544b8u: goto label_4544b8;
        case 0x4544bcu: goto label_4544bc;
        case 0x4544c0u: goto label_4544c0;
        case 0x4544c4u: goto label_4544c4;
        case 0x4544c8u: goto label_4544c8;
        case 0x4544ccu: goto label_4544cc;
        case 0x4544d0u: goto label_4544d0;
        case 0x4544d4u: goto label_4544d4;
        case 0x4544d8u: goto label_4544d8;
        case 0x4544dcu: goto label_4544dc;
        case 0x4544e0u: goto label_4544e0;
        case 0x4544e4u: goto label_4544e4;
        case 0x4544e8u: goto label_4544e8;
        case 0x4544ecu: goto label_4544ec;
        case 0x4544f0u: goto label_4544f0;
        case 0x4544f4u: goto label_4544f4;
        case 0x4544f8u: goto label_4544f8;
        case 0x4544fcu: goto label_4544fc;
        case 0x454500u: goto label_454500;
        case 0x454504u: goto label_454504;
        case 0x454508u: goto label_454508;
        case 0x45450cu: goto label_45450c;
        case 0x454510u: goto label_454510;
        case 0x454514u: goto label_454514;
        case 0x454518u: goto label_454518;
        case 0x45451cu: goto label_45451c;
        case 0x454520u: goto label_454520;
        case 0x454524u: goto label_454524;
        case 0x454528u: goto label_454528;
        case 0x45452cu: goto label_45452c;
        case 0x454530u: goto label_454530;
        case 0x454534u: goto label_454534;
        case 0x454538u: goto label_454538;
        case 0x45453cu: goto label_45453c;
        case 0x454540u: goto label_454540;
        case 0x454544u: goto label_454544;
        case 0x454548u: goto label_454548;
        case 0x45454cu: goto label_45454c;
        case 0x454550u: goto label_454550;
        case 0x454554u: goto label_454554;
        case 0x454558u: goto label_454558;
        case 0x45455cu: goto label_45455c;
        case 0x454560u: goto label_454560;
        case 0x454564u: goto label_454564;
        case 0x454568u: goto label_454568;
        case 0x45456cu: goto label_45456c;
        case 0x454570u: goto label_454570;
        case 0x454574u: goto label_454574;
        case 0x454578u: goto label_454578;
        case 0x45457cu: goto label_45457c;
        case 0x454580u: goto label_454580;
        case 0x454584u: goto label_454584;
        case 0x454588u: goto label_454588;
        case 0x45458cu: goto label_45458c;
        case 0x454590u: goto label_454590;
        case 0x454594u: goto label_454594;
        case 0x454598u: goto label_454598;
        case 0x45459cu: goto label_45459c;
        case 0x4545a0u: goto label_4545a0;
        case 0x4545a4u: goto label_4545a4;
        case 0x4545a8u: goto label_4545a8;
        case 0x4545acu: goto label_4545ac;
        case 0x4545b0u: goto label_4545b0;
        case 0x4545b4u: goto label_4545b4;
        case 0x4545b8u: goto label_4545b8;
        case 0x4545bcu: goto label_4545bc;
        case 0x4545c0u: goto label_4545c0;
        case 0x4545c4u: goto label_4545c4;
        case 0x4545c8u: goto label_4545c8;
        case 0x4545ccu: goto label_4545cc;
        case 0x4545d0u: goto label_4545d0;
        case 0x4545d4u: goto label_4545d4;
        case 0x4545d8u: goto label_4545d8;
        case 0x4545dcu: goto label_4545dc;
        case 0x4545e0u: goto label_4545e0;
        case 0x4545e4u: goto label_4545e4;
        case 0x4545e8u: goto label_4545e8;
        case 0x4545ecu: goto label_4545ec;
        case 0x4545f0u: goto label_4545f0;
        case 0x4545f4u: goto label_4545f4;
        case 0x4545f8u: goto label_4545f8;
        case 0x4545fcu: goto label_4545fc;
        case 0x454600u: goto label_454600;
        case 0x454604u: goto label_454604;
        case 0x454608u: goto label_454608;
        case 0x45460cu: goto label_45460c;
        case 0x454610u: goto label_454610;
        case 0x454614u: goto label_454614;
        case 0x454618u: goto label_454618;
        case 0x45461cu: goto label_45461c;
        case 0x454620u: goto label_454620;
        case 0x454624u: goto label_454624;
        case 0x454628u: goto label_454628;
        case 0x45462cu: goto label_45462c;
        case 0x454630u: goto label_454630;
        case 0x454634u: goto label_454634;
        case 0x454638u: goto label_454638;
        case 0x45463cu: goto label_45463c;
        case 0x454640u: goto label_454640;
        case 0x454644u: goto label_454644;
        case 0x454648u: goto label_454648;
        case 0x45464cu: goto label_45464c;
        case 0x454650u: goto label_454650;
        case 0x454654u: goto label_454654;
        case 0x454658u: goto label_454658;
        case 0x45465cu: goto label_45465c;
        case 0x454660u: goto label_454660;
        case 0x454664u: goto label_454664;
        case 0x454668u: goto label_454668;
        case 0x45466cu: goto label_45466c;
        case 0x454670u: goto label_454670;
        case 0x454674u: goto label_454674;
        case 0x454678u: goto label_454678;
        case 0x45467cu: goto label_45467c;
        case 0x454680u: goto label_454680;
        case 0x454684u: goto label_454684;
        case 0x454688u: goto label_454688;
        case 0x45468cu: goto label_45468c;
        case 0x454690u: goto label_454690;
        case 0x454694u: goto label_454694;
        case 0x454698u: goto label_454698;
        case 0x45469cu: goto label_45469c;
        case 0x4546a0u: goto label_4546a0;
        case 0x4546a4u: goto label_4546a4;
        case 0x4546a8u: goto label_4546a8;
        case 0x4546acu: goto label_4546ac;
        case 0x4546b0u: goto label_4546b0;
        case 0x4546b4u: goto label_4546b4;
        case 0x4546b8u: goto label_4546b8;
        case 0x4546bcu: goto label_4546bc;
        case 0x4546c0u: goto label_4546c0;
        case 0x4546c4u: goto label_4546c4;
        case 0x4546c8u: goto label_4546c8;
        case 0x4546ccu: goto label_4546cc;
        case 0x4546d0u: goto label_4546d0;
        case 0x4546d4u: goto label_4546d4;
        case 0x4546d8u: goto label_4546d8;
        case 0x4546dcu: goto label_4546dc;
        case 0x4546e0u: goto label_4546e0;
        case 0x4546e4u: goto label_4546e4;
        case 0x4546e8u: goto label_4546e8;
        case 0x4546ecu: goto label_4546ec;
        case 0x4546f0u: goto label_4546f0;
        case 0x4546f4u: goto label_4546f4;
        case 0x4546f8u: goto label_4546f8;
        case 0x4546fcu: goto label_4546fc;
        case 0x454700u: goto label_454700;
        case 0x454704u: goto label_454704;
        case 0x454708u: goto label_454708;
        case 0x45470cu: goto label_45470c;
        case 0x454710u: goto label_454710;
        case 0x454714u: goto label_454714;
        case 0x454718u: goto label_454718;
        case 0x45471cu: goto label_45471c;
        case 0x454720u: goto label_454720;
        case 0x454724u: goto label_454724;
        case 0x454728u: goto label_454728;
        case 0x45472cu: goto label_45472c;
        case 0x454730u: goto label_454730;
        case 0x454734u: goto label_454734;
        case 0x454738u: goto label_454738;
        case 0x45473cu: goto label_45473c;
        case 0x454740u: goto label_454740;
        case 0x454744u: goto label_454744;
        case 0x454748u: goto label_454748;
        case 0x45474cu: goto label_45474c;
        case 0x454750u: goto label_454750;
        case 0x454754u: goto label_454754;
        case 0x454758u: goto label_454758;
        case 0x45475cu: goto label_45475c;
        case 0x454760u: goto label_454760;
        case 0x454764u: goto label_454764;
        case 0x454768u: goto label_454768;
        case 0x45476cu: goto label_45476c;
        case 0x454770u: goto label_454770;
        case 0x454774u: goto label_454774;
        case 0x454778u: goto label_454778;
        case 0x45477cu: goto label_45477c;
        case 0x454780u: goto label_454780;
        case 0x454784u: goto label_454784;
        case 0x454788u: goto label_454788;
        case 0x45478cu: goto label_45478c;
        case 0x454790u: goto label_454790;
        case 0x454794u: goto label_454794;
        case 0x454798u: goto label_454798;
        case 0x45479cu: goto label_45479c;
        case 0x4547a0u: goto label_4547a0;
        case 0x4547a4u: goto label_4547a4;
        case 0x4547a8u: goto label_4547a8;
        case 0x4547acu: goto label_4547ac;
        case 0x4547b0u: goto label_4547b0;
        case 0x4547b4u: goto label_4547b4;
        case 0x4547b8u: goto label_4547b8;
        case 0x4547bcu: goto label_4547bc;
        case 0x4547c0u: goto label_4547c0;
        case 0x4547c4u: goto label_4547c4;
        case 0x4547c8u: goto label_4547c8;
        case 0x4547ccu: goto label_4547cc;
        case 0x4547d0u: goto label_4547d0;
        case 0x4547d4u: goto label_4547d4;
        case 0x4547d8u: goto label_4547d8;
        case 0x4547dcu: goto label_4547dc;
        case 0x4547e0u: goto label_4547e0;
        case 0x4547e4u: goto label_4547e4;
        case 0x4547e8u: goto label_4547e8;
        case 0x4547ecu: goto label_4547ec;
        case 0x4547f0u: goto label_4547f0;
        case 0x4547f4u: goto label_4547f4;
        case 0x4547f8u: goto label_4547f8;
        case 0x4547fcu: goto label_4547fc;
        case 0x454800u: goto label_454800;
        case 0x454804u: goto label_454804;
        case 0x454808u: goto label_454808;
        case 0x45480cu: goto label_45480c;
        case 0x454810u: goto label_454810;
        case 0x454814u: goto label_454814;
        case 0x454818u: goto label_454818;
        case 0x45481cu: goto label_45481c;
        case 0x454820u: goto label_454820;
        case 0x454824u: goto label_454824;
        case 0x454828u: goto label_454828;
        case 0x45482cu: goto label_45482c;
        case 0x454830u: goto label_454830;
        case 0x454834u: goto label_454834;
        case 0x454838u: goto label_454838;
        case 0x45483cu: goto label_45483c;
        case 0x454840u: goto label_454840;
        case 0x454844u: goto label_454844;
        case 0x454848u: goto label_454848;
        case 0x45484cu: goto label_45484c;
        case 0x454850u: goto label_454850;
        case 0x454854u: goto label_454854;
        case 0x454858u: goto label_454858;
        case 0x45485cu: goto label_45485c;
        case 0x454860u: goto label_454860;
        case 0x454864u: goto label_454864;
        case 0x454868u: goto label_454868;
        case 0x45486cu: goto label_45486c;
        case 0x454870u: goto label_454870;
        case 0x454874u: goto label_454874;
        case 0x454878u: goto label_454878;
        case 0x45487cu: goto label_45487c;
        case 0x454880u: goto label_454880;
        case 0x454884u: goto label_454884;
        case 0x454888u: goto label_454888;
        case 0x45488cu: goto label_45488c;
        case 0x454890u: goto label_454890;
        case 0x454894u: goto label_454894;
        case 0x454898u: goto label_454898;
        case 0x45489cu: goto label_45489c;
        case 0x4548a0u: goto label_4548a0;
        case 0x4548a4u: goto label_4548a4;
        case 0x4548a8u: goto label_4548a8;
        case 0x4548acu: goto label_4548ac;
        case 0x4548b0u: goto label_4548b0;
        case 0x4548b4u: goto label_4548b4;
        case 0x4548b8u: goto label_4548b8;
        case 0x4548bcu: goto label_4548bc;
        case 0x4548c0u: goto label_4548c0;
        case 0x4548c4u: goto label_4548c4;
        case 0x4548c8u: goto label_4548c8;
        case 0x4548ccu: goto label_4548cc;
        case 0x4548d0u: goto label_4548d0;
        case 0x4548d4u: goto label_4548d4;
        case 0x4548d8u: goto label_4548d8;
        case 0x4548dcu: goto label_4548dc;
        case 0x4548e0u: goto label_4548e0;
        case 0x4548e4u: goto label_4548e4;
        case 0x4548e8u: goto label_4548e8;
        case 0x4548ecu: goto label_4548ec;
        case 0x4548f0u: goto label_4548f0;
        case 0x4548f4u: goto label_4548f4;
        case 0x4548f8u: goto label_4548f8;
        case 0x4548fcu: goto label_4548fc;
        case 0x454900u: goto label_454900;
        case 0x454904u: goto label_454904;
        case 0x454908u: goto label_454908;
        case 0x45490cu: goto label_45490c;
        case 0x454910u: goto label_454910;
        case 0x454914u: goto label_454914;
        case 0x454918u: goto label_454918;
        case 0x45491cu: goto label_45491c;
        case 0x454920u: goto label_454920;
        case 0x454924u: goto label_454924;
        case 0x454928u: goto label_454928;
        case 0x45492cu: goto label_45492c;
        case 0x454930u: goto label_454930;
        case 0x454934u: goto label_454934;
        case 0x454938u: goto label_454938;
        case 0x45493cu: goto label_45493c;
        case 0x454940u: goto label_454940;
        case 0x454944u: goto label_454944;
        case 0x454948u: goto label_454948;
        case 0x45494cu: goto label_45494c;
        case 0x454950u: goto label_454950;
        case 0x454954u: goto label_454954;
        case 0x454958u: goto label_454958;
        case 0x45495cu: goto label_45495c;
        case 0x454960u: goto label_454960;
        case 0x454964u: goto label_454964;
        case 0x454968u: goto label_454968;
        case 0x45496cu: goto label_45496c;
        case 0x454970u: goto label_454970;
        case 0x454974u: goto label_454974;
        case 0x454978u: goto label_454978;
        case 0x45497cu: goto label_45497c;
        case 0x454980u: goto label_454980;
        case 0x454984u: goto label_454984;
        case 0x454988u: goto label_454988;
        case 0x45498cu: goto label_45498c;
        case 0x454990u: goto label_454990;
        case 0x454994u: goto label_454994;
        case 0x454998u: goto label_454998;
        case 0x45499cu: goto label_45499c;
        case 0x4549a0u: goto label_4549a0;
        case 0x4549a4u: goto label_4549a4;
        case 0x4549a8u: goto label_4549a8;
        case 0x4549acu: goto label_4549ac;
        case 0x4549b0u: goto label_4549b0;
        case 0x4549b4u: goto label_4549b4;
        case 0x4549b8u: goto label_4549b8;
        case 0x4549bcu: goto label_4549bc;
        case 0x4549c0u: goto label_4549c0;
        case 0x4549c4u: goto label_4549c4;
        case 0x4549c8u: goto label_4549c8;
        case 0x4549ccu: goto label_4549cc;
        case 0x4549d0u: goto label_4549d0;
        case 0x4549d4u: goto label_4549d4;
        case 0x4549d8u: goto label_4549d8;
        case 0x4549dcu: goto label_4549dc;
        case 0x4549e0u: goto label_4549e0;
        case 0x4549e4u: goto label_4549e4;
        case 0x4549e8u: goto label_4549e8;
        case 0x4549ecu: goto label_4549ec;
        case 0x4549f0u: goto label_4549f0;
        case 0x4549f4u: goto label_4549f4;
        case 0x4549f8u: goto label_4549f8;
        case 0x4549fcu: goto label_4549fc;
        case 0x454a00u: goto label_454a00;
        case 0x454a04u: goto label_454a04;
        case 0x454a08u: goto label_454a08;
        case 0x454a0cu: goto label_454a0c;
        case 0x454a10u: goto label_454a10;
        case 0x454a14u: goto label_454a14;
        case 0x454a18u: goto label_454a18;
        case 0x454a1cu: goto label_454a1c;
        case 0x454a20u: goto label_454a20;
        case 0x454a24u: goto label_454a24;
        case 0x454a28u: goto label_454a28;
        case 0x454a2cu: goto label_454a2c;
        case 0x454a30u: goto label_454a30;
        case 0x454a34u: goto label_454a34;
        case 0x454a38u: goto label_454a38;
        case 0x454a3cu: goto label_454a3c;
        case 0x454a40u: goto label_454a40;
        case 0x454a44u: goto label_454a44;
        case 0x454a48u: goto label_454a48;
        case 0x454a4cu: goto label_454a4c;
        case 0x454a50u: goto label_454a50;
        case 0x454a54u: goto label_454a54;
        case 0x454a58u: goto label_454a58;
        case 0x454a5cu: goto label_454a5c;
        case 0x454a60u: goto label_454a60;
        case 0x454a64u: goto label_454a64;
        case 0x454a68u: goto label_454a68;
        case 0x454a6cu: goto label_454a6c;
        case 0x454a70u: goto label_454a70;
        case 0x454a74u: goto label_454a74;
        case 0x454a78u: goto label_454a78;
        case 0x454a7cu: goto label_454a7c;
        case 0x454a80u: goto label_454a80;
        case 0x454a84u: goto label_454a84;
        case 0x454a88u: goto label_454a88;
        case 0x454a8cu: goto label_454a8c;
        case 0x454a90u: goto label_454a90;
        case 0x454a94u: goto label_454a94;
        case 0x454a98u: goto label_454a98;
        case 0x454a9cu: goto label_454a9c;
        case 0x454aa0u: goto label_454aa0;
        case 0x454aa4u: goto label_454aa4;
        case 0x454aa8u: goto label_454aa8;
        case 0x454aacu: goto label_454aac;
        case 0x454ab0u: goto label_454ab0;
        case 0x454ab4u: goto label_454ab4;
        case 0x454ab8u: goto label_454ab8;
        case 0x454abcu: goto label_454abc;
        case 0x454ac0u: goto label_454ac0;
        case 0x454ac4u: goto label_454ac4;
        case 0x454ac8u: goto label_454ac8;
        case 0x454accu: goto label_454acc;
        case 0x454ad0u: goto label_454ad0;
        case 0x454ad4u: goto label_454ad4;
        case 0x454ad8u: goto label_454ad8;
        case 0x454adcu: goto label_454adc;
        case 0x454ae0u: goto label_454ae0;
        case 0x454ae4u: goto label_454ae4;
        case 0x454ae8u: goto label_454ae8;
        case 0x454aecu: goto label_454aec;
        case 0x454af0u: goto label_454af0;
        case 0x454af4u: goto label_454af4;
        case 0x454af8u: goto label_454af8;
        case 0x454afcu: goto label_454afc;
        case 0x454b00u: goto label_454b00;
        case 0x454b04u: goto label_454b04;
        case 0x454b08u: goto label_454b08;
        case 0x454b0cu: goto label_454b0c;
        case 0x454b10u: goto label_454b10;
        case 0x454b14u: goto label_454b14;
        case 0x454b18u: goto label_454b18;
        case 0x454b1cu: goto label_454b1c;
        case 0x454b20u: goto label_454b20;
        case 0x454b24u: goto label_454b24;
        case 0x454b28u: goto label_454b28;
        case 0x454b2cu: goto label_454b2c;
        case 0x454b30u: goto label_454b30;
        case 0x454b34u: goto label_454b34;
        case 0x454b38u: goto label_454b38;
        case 0x454b3cu: goto label_454b3c;
        case 0x454b40u: goto label_454b40;
        case 0x454b44u: goto label_454b44;
        case 0x454b48u: goto label_454b48;
        case 0x454b4cu: goto label_454b4c;
        case 0x454b50u: goto label_454b50;
        case 0x454b54u: goto label_454b54;
        case 0x454b58u: goto label_454b58;
        case 0x454b5cu: goto label_454b5c;
        case 0x454b60u: goto label_454b60;
        case 0x454b64u: goto label_454b64;
        case 0x454b68u: goto label_454b68;
        case 0x454b6cu: goto label_454b6c;
        case 0x454b70u: goto label_454b70;
        case 0x454b74u: goto label_454b74;
        case 0x454b78u: goto label_454b78;
        case 0x454b7cu: goto label_454b7c;
        case 0x454b80u: goto label_454b80;
        case 0x454b84u: goto label_454b84;
        case 0x454b88u: goto label_454b88;
        case 0x454b8cu: goto label_454b8c;
        case 0x454b90u: goto label_454b90;
        case 0x454b94u: goto label_454b94;
        case 0x454b98u: goto label_454b98;
        case 0x454b9cu: goto label_454b9c;
        case 0x454ba0u: goto label_454ba0;
        case 0x454ba4u: goto label_454ba4;
        case 0x454ba8u: goto label_454ba8;
        case 0x454bacu: goto label_454bac;
        default: break;
    }

    ctx->pc = 0x453a60u;

label_453a60:
    // 0x453a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x453a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_453a64:
    // 0x453a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x453a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_453a68:
    // 0x453a68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x453a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_453a6c:
    // 0x453a6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x453a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_453a70:
    // 0x453a70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x453a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453a74:
    // 0x453a74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x453a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_453a78:
    // 0x453a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x453a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_453a7c:
    // 0x453a7c: 0xc0e39b4  jal         func_38E6D0
label_453a80:
    if (ctx->pc == 0x453A80u) {
        ctx->pc = 0x453A80u;
            // 0x453a80: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x453A84u;
        goto label_453a84;
    }
    ctx->pc = 0x453A7Cu;
    SET_GPR_U32(ctx, 31, 0x453A84u);
    ctx->pc = 0x453A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453A7Cu;
            // 0x453a80: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A84u; }
        if (ctx->pc != 0x453A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A84u; }
        if (ctx->pc != 0x453A84u) { return; }
    }
    ctx->pc = 0x453A84u;
label_453a84:
    // 0x453a84: 0xc60c0160  lwc1        $f12, 0x160($s0)
    ctx->pc = 0x453a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_453a88:
    // 0x453a88: 0xc60d0164  lwc1        $f13, 0x164($s0)
    ctx->pc = 0x453a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_453a8c:
    // 0x453a8c: 0xc60e0168  lwc1        $f14, 0x168($s0)
    ctx->pc = 0x453a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_453a90:
    // 0x453a90: 0xc0d3f08  jal         func_34FC20
label_453a94:
    if (ctx->pc == 0x453A94u) {
        ctx->pc = 0x453A94u;
            // 0x453a94: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x453A98u;
        goto label_453a98;
    }
    ctx->pc = 0x453A90u;
    SET_GPR_U32(ctx, 31, 0x453A98u);
    ctx->pc = 0x453A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453A90u;
            // 0x453a94: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A98u; }
        if (ctx->pc != 0x453A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453A98u; }
        if (ctx->pc != 0x453A98u) { return; }
    }
    ctx->pc = 0x453A98u;
label_453a98:
    // 0x453a98: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x453a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_453a9c:
    // 0x453a9c: 0xc0e1b28  jal         func_386CA0
label_453aa0:
    if (ctx->pc == 0x453AA0u) {
        ctx->pc = 0x453AA0u;
            // 0x453aa0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x453AA4u;
        goto label_453aa4;
    }
    ctx->pc = 0x453A9Cu;
    SET_GPR_U32(ctx, 31, 0x453AA4u);
    ctx->pc = 0x453AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453A9Cu;
            // 0x453aa0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AA4u; }
        if (ctx->pc != 0x453AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AA4u; }
        if (ctx->pc != 0x453AA4u) { return; }
    }
    ctx->pc = 0x453AA4u;
label_453aa4:
    // 0x453aa4: 0xc114bb0  jal         func_452EC0
label_453aa8:
    if (ctx->pc == 0x453AA8u) {
        ctx->pc = 0x453AACu;
        goto label_453aac;
    }
    ctx->pc = 0x453AA4u;
    SET_GPR_U32(ctx, 31, 0x453AACu);
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AACu; }
        if (ctx->pc != 0x453AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AACu; }
        if (ctx->pc != 0x453AACu) { return; }
    }
    ctx->pc = 0x453AACu;
label_453aac:
    // 0x453aac: 0xc114bac  jal         func_452EB0
label_453ab0:
    if (ctx->pc == 0x453AB0u) {
        ctx->pc = 0x453AB0u;
            // 0x453ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453AB4u;
        goto label_453ab4;
    }
    ctx->pc = 0x453AACu;
    SET_GPR_U32(ctx, 31, 0x453AB4u);
    ctx->pc = 0x453AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AACu;
            // 0x453ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EB0u;
    if (runtime->hasFunction(0x452EB0u)) {
        auto targetFn = runtime->lookupFunction(0x452EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AB4u; }
        if (ctx->pc != 0x453AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EB0_0x452eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AB4u; }
        if (ctx->pc != 0x453AB4u) { return; }
    }
    ctx->pc = 0x453AB4u;
label_453ab4:
    // 0x453ab4: 0xc114bb0  jal         func_452EC0
label_453ab8:
    if (ctx->pc == 0x453AB8u) {
        ctx->pc = 0x453AB8u;
            // 0x453ab8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x453ABCu;
        goto label_453abc;
    }
    ctx->pc = 0x453AB4u;
    SET_GPR_U32(ctx, 31, 0x453ABCu);
    ctx->pc = 0x453AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AB4u;
            // 0x453ab8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453ABCu; }
        if (ctx->pc != 0x453ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453ABCu; }
        if (ctx->pc != 0x453ABCu) { return; }
    }
    ctx->pc = 0x453ABCu;
label_453abc:
    // 0x453abc: 0xc114ba8  jal         func_452EA0
label_453ac0:
    if (ctx->pc == 0x453AC0u) {
        ctx->pc = 0x453AC0u;
            // 0x453ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453AC4u;
        goto label_453ac4;
    }
    ctx->pc = 0x453ABCu;
    SET_GPR_U32(ctx, 31, 0x453AC4u);
    ctx->pc = 0x453AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453ABCu;
            // 0x453ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AC4u; }
        if (ctx->pc != 0x453AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AC4u; }
        if (ctx->pc != 0x453AC4u) { return; }
    }
    ctx->pc = 0x453AC4u;
label_453ac4:
    // 0x453ac4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x453ac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_453ac8:
    // 0x453ac8: 0xc0775b8  jal         func_1DD6E0
label_453acc:
    if (ctx->pc == 0x453ACCu) {
        ctx->pc = 0x453ACCu;
            // 0x453acc: 0xe6000198  swc1        $f0, 0x198($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
        ctx->pc = 0x453AD0u;
        goto label_453ad0;
    }
    ctx->pc = 0x453AC8u;
    SET_GPR_U32(ctx, 31, 0x453AD0u);
    ctx->pc = 0x453ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AC8u;
            // 0x453acc: 0xe6000198  swc1        $f0, 0x198($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AD0u; }
        if (ctx->pc != 0x453AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AD0u; }
        if (ctx->pc != 0x453AD0u) { return; }
    }
    ctx->pc = 0x453AD0u;
label_453ad0:
    // 0x453ad0: 0xc0775b4  jal         func_1DD6D0
label_453ad4:
    if (ctx->pc == 0x453AD4u) {
        ctx->pc = 0x453AD4u;
            // 0x453ad4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x453AD8u;
        goto label_453ad8;
    }
    ctx->pc = 0x453AD0u;
    SET_GPR_U32(ctx, 31, 0x453AD8u);
    ctx->pc = 0x453AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AD0u;
            // 0x453ad4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AD8u; }
        if (ctx->pc != 0x453AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AD8u; }
        if (ctx->pc != 0x453AD8u) { return; }
    }
    ctx->pc = 0x453AD8u;
label_453ad8:
    // 0x453ad8: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x453ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
label_453adc:
    // 0x453adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x453adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_453ae0:
    // 0x453ae0: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x453ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_453ae4:
    // 0x453ae4: 0xc114bb0  jal         func_452EC0
label_453ae8:
    if (ctx->pc == 0x453AE8u) {
        ctx->pc = 0x453AE8u;
            // 0x453ae8: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->pc = 0x453AECu;
        goto label_453aec;
    }
    ctx->pc = 0x453AE4u;
    SET_GPR_U32(ctx, 31, 0x453AECu);
    ctx->pc = 0x453AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AE4u;
            // 0x453ae8: 0xae00013c  sw          $zero, 0x13C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AECu; }
        if (ctx->pc != 0x453AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AECu; }
        if (ctx->pc != 0x453AECu) { return; }
    }
    ctx->pc = 0x453AECu;
label_453aec:
    // 0x453aec: 0xc114ba8  jal         func_452EA0
label_453af0:
    if (ctx->pc == 0x453AF0u) {
        ctx->pc = 0x453AF0u;
            // 0x453af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453AF4u;
        goto label_453af4;
    }
    ctx->pc = 0x453AECu;
    SET_GPR_U32(ctx, 31, 0x453AF4u);
    ctx->pc = 0x453AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453AECu;
            // 0x453af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AF4u; }
        if (ctx->pc != 0x453AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453AF4u; }
        if (ctx->pc != 0x453AF4u) { return; }
    }
    ctx->pc = 0x453AF4u;
label_453af4:
    // 0x453af4: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x453af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_453af8:
    // 0x453af8: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x453af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_453afc:
    // 0x453afc: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x453afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
label_453b00:
    // 0x453b00: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x453b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_453b04:
    // 0x453b04: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x453b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_453b08:
    // 0x453b08: 0xc0e080c  jal         func_382030
label_453b0c:
    if (ctx->pc == 0x453B0Cu) {
        ctx->pc = 0x453B0Cu;
            // 0x453b0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x453B10u;
        goto label_453b10;
    }
    ctx->pc = 0x453B08u;
    SET_GPR_U32(ctx, 31, 0x453B10u);
    ctx->pc = 0x453B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B08u;
            // 0x453b0c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B10u; }
        if (ctx->pc != 0x453B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B10u; }
        if (ctx->pc != 0x453B10u) { return; }
    }
    ctx->pc = 0x453B10u;
label_453b10:
    // 0x453b10: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x453b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_453b14:
    // 0x453b14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x453b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_453b18:
    // 0x453b18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x453b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453b1c:
    // 0x453b1c: 0xc08914c  jal         func_224530
label_453b20:
    if (ctx->pc == 0x453B20u) {
        ctx->pc = 0x453B20u;
            // 0x453b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453B24u;
        goto label_453b24;
    }
    ctx->pc = 0x453B1Cu;
    SET_GPR_U32(ctx, 31, 0x453B24u);
    ctx->pc = 0x453B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B1Cu;
            // 0x453b20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B24u; }
        if (ctx->pc != 0x453B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B24u; }
        if (ctx->pc != 0x453B24u) { return; }
    }
    ctx->pc = 0x453B24u;
label_453b24:
    // 0x453b24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x453b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453b28:
    // 0x453b28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x453b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_453b2c:
    // 0x453b2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x453b2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_453b30:
    // 0x453b30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x453b30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_453b34:
    // 0x453b34: 0xc0b6df0  jal         func_2DB7C0
label_453b38:
    if (ctx->pc == 0x453B38u) {
        ctx->pc = 0x453B38u;
            // 0x453b38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x453B3Cu;
        goto label_453b3c;
    }
    ctx->pc = 0x453B34u;
    SET_GPR_U32(ctx, 31, 0x453B3Cu);
    ctx->pc = 0x453B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B34u;
            // 0x453b38: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B3Cu; }
        if (ctx->pc != 0x453B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B3Cu; }
        if (ctx->pc != 0x453B3Cu) { return; }
    }
    ctx->pc = 0x453B3Cu;
label_453b3c:
    // 0x453b3c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x453b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_453b40:
    // 0x453b40: 0xc0e07f8  jal         func_381FE0
label_453b44:
    if (ctx->pc == 0x453B44u) {
        ctx->pc = 0x453B44u;
            // 0x453b44: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x453B48u;
        goto label_453b48;
    }
    ctx->pc = 0x453B40u;
    SET_GPR_U32(ctx, 31, 0x453B48u);
    ctx->pc = 0x453B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B40u;
            // 0x453b44: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B48u; }
        if (ctx->pc != 0x453B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B48u; }
        if (ctx->pc != 0x453B48u) { return; }
    }
    ctx->pc = 0x453B48u;
label_453b48:
    // 0x453b48: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x453b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_453b4c:
    // 0x453b4c: 0xc0dc3f4  jal         func_370FD0
label_453b50:
    if (ctx->pc == 0x453B50u) {
        ctx->pc = 0x453B50u;
            // 0x453b50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x453B54u;
        goto label_453b54;
    }
    ctx->pc = 0x453B4Cu;
    SET_GPR_U32(ctx, 31, 0x453B54u);
    ctx->pc = 0x453B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B4Cu;
            // 0x453b50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B54u; }
        if (ctx->pc != 0x453B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B54u; }
        if (ctx->pc != 0x453B54u) { return; }
    }
    ctx->pc = 0x453B54u;
label_453b54:
    // 0x453b54: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x453b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_453b58:
    // 0x453b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x453b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453b5c:
    // 0x453b5c: 0xc0e1b08  jal         func_386C20
label_453b60:
    if (ctx->pc == 0x453B60u) {
        ctx->pc = 0x453B60u;
            // 0x453b60: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x453B64u;
        goto label_453b64;
    }
    ctx->pc = 0x453B5Cu;
    SET_GPR_U32(ctx, 31, 0x453B64u);
    ctx->pc = 0x453B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B5Cu;
            // 0x453b60: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B64u; }
        if (ctx->pc != 0x453B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B64u; }
        if (ctx->pc != 0x453B64u) { return; }
    }
    ctx->pc = 0x453B64u;
label_453b64:
    // 0x453b64: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x453b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_453b68:
    // 0x453b68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x453b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453b6c:
    // 0x453b6c: 0xc0e1b04  jal         func_386C10
label_453b70:
    if (ctx->pc == 0x453B70u) {
        ctx->pc = 0x453B70u;
            // 0x453b70: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x453B74u;
        goto label_453b74;
    }
    ctx->pc = 0x453B6Cu;
    SET_GPR_U32(ctx, 31, 0x453B74u);
    ctx->pc = 0x453B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B6Cu;
            // 0x453b70: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B74u; }
        if (ctx->pc != 0x453B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B74u; }
        if (ctx->pc != 0x453B74u) { return; }
    }
    ctx->pc = 0x453B74u;
label_453b74:
    // 0x453b74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x453b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453b78:
    // 0x453b78: 0xc0e1b00  jal         func_386C00
label_453b7c:
    if (ctx->pc == 0x453B7Cu) {
        ctx->pc = 0x453B7Cu;
            // 0x453b7c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x453B80u;
        goto label_453b80;
    }
    ctx->pc = 0x453B78u;
    SET_GPR_U32(ctx, 31, 0x453B80u);
    ctx->pc = 0x453B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B78u;
            // 0x453b7c: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B80u; }
        if (ctx->pc != 0x453B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B80u; }
        if (ctx->pc != 0x453B80u) { return; }
    }
    ctx->pc = 0x453B80u;
label_453b80:
    // 0x453b80: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x453b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_453b84:
    // 0x453b84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x453b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_453b88:
    // 0x453b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x453b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_453b8c:
    // 0x453b8c: 0xc0e1afc  jal         func_386BF0
label_453b90:
    if (ctx->pc == 0x453B90u) {
        ctx->pc = 0x453B90u;
            // 0x453b90: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x453B94u;
        goto label_453b94;
    }
    ctx->pc = 0x453B8Cu;
    SET_GPR_U32(ctx, 31, 0x453B94u);
    ctx->pc = 0x453B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B8Cu;
            // 0x453b90: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B94u; }
        if (ctx->pc != 0x453B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453B94u; }
        if (ctx->pc != 0x453B94u) { return; }
    }
    ctx->pc = 0x453B94u;
label_453b94:
    // 0x453b94: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x453b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_453b98:
    // 0x453b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453b9c:
    // 0x453b9c: 0xc0e1af4  jal         func_386BD0
label_453ba0:
    if (ctx->pc == 0x453BA0u) {
        ctx->pc = 0x453BA0u;
            // 0x453ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453BA4u;
        goto label_453ba4;
    }
    ctx->pc = 0x453B9Cu;
    SET_GPR_U32(ctx, 31, 0x453BA4u);
    ctx->pc = 0x453BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453B9Cu;
            // 0x453ba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BA4u; }
        if (ctx->pc != 0x453BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BA4u; }
        if (ctx->pc != 0x453BA4u) { return; }
    }
    ctx->pc = 0x453BA4u;
label_453ba4:
    // 0x453ba4: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x453ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_453ba8:
    // 0x453ba8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x453ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_453bac:
    // 0x453bac: 0xc0e1aec  jal         func_386BB0
label_453bb0:
    if (ctx->pc == 0x453BB0u) {
        ctx->pc = 0x453BB0u;
            // 0x453bb0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453BB4u;
        goto label_453bb4;
    }
    ctx->pc = 0x453BACu;
    SET_GPR_U32(ctx, 31, 0x453BB4u);
    ctx->pc = 0x453BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453BACu;
            // 0x453bb0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BB4u; }
        if (ctx->pc != 0x453BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BB4u; }
        if (ctx->pc != 0x453BB4u) { return; }
    }
    ctx->pc = 0x453BB4u;
label_453bb4:
    // 0x453bb4: 0xc0dc408  jal         func_371020
label_453bb8:
    if (ctx->pc == 0x453BB8u) {
        ctx->pc = 0x453BB8u;
            // 0x453bb8: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x453BBCu;
        goto label_453bbc;
    }
    ctx->pc = 0x453BB4u;
    SET_GPR_U32(ctx, 31, 0x453BBCu);
    ctx->pc = 0x453BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453BB4u;
            // 0x453bb8: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BBCu; }
        if (ctx->pc != 0x453BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BBCu; }
        if (ctx->pc != 0x453BBCu) { return; }
    }
    ctx->pc = 0x453BBCu;
label_453bbc:
    // 0x453bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453bc0:
    // 0x453bc0: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x453bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_453bc4:
    // 0x453bc4: 0xc0e1ad4  jal         func_386B50
label_453bc8:
    if (ctx->pc == 0x453BC8u) {
        ctx->pc = 0x453BC8u;
            // 0x453bc8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x453BCCu;
        goto label_453bcc;
    }
    ctx->pc = 0x453BC4u;
    SET_GPR_U32(ctx, 31, 0x453BCCu);
    ctx->pc = 0x453BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453BC4u;
            // 0x453bc8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BCCu; }
        if (ctx->pc != 0x453BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BCCu; }
        if (ctx->pc != 0x453BCCu) { return; }
    }
    ctx->pc = 0x453BCCu;
label_453bcc:
    // 0x453bcc: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x453bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_453bd0:
    // 0x453bd0: 0xc114ba4  jal         func_452E90
label_453bd4:
    if (ctx->pc == 0x453BD4u) {
        ctx->pc = 0x453BD4u;
            // 0x453bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453BD8u;
        goto label_453bd8;
    }
    ctx->pc = 0x453BD0u;
    SET_GPR_U32(ctx, 31, 0x453BD8u);
    ctx->pc = 0x453BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453BD0u;
            // 0x453bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E90u;
    if (runtime->hasFunction(0x452E90u)) {
        auto targetFn = runtime->lookupFunction(0x452E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BD8u; }
        if (ctx->pc != 0x453BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E90_0x452e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BD8u; }
        if (ctx->pc != 0x453BD8u) { return; }
    }
    ctx->pc = 0x453BD8u;
label_453bd8:
    // 0x453bd8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x453bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_453bdc:
    // 0x453bdc: 0xc114ba0  jal         func_452E80
label_453be0:
    if (ctx->pc == 0x453BE0u) {
        ctx->pc = 0x453BE0u;
            // 0x453be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453BE4u;
        goto label_453be4;
    }
    ctx->pc = 0x453BDCu;
    SET_GPR_U32(ctx, 31, 0x453BE4u);
    ctx->pc = 0x453BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453BDCu;
            // 0x453be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E80u;
    if (runtime->hasFunction(0x452E80u)) {
        auto targetFn = runtime->lookupFunction(0x452E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BE4u; }
        if (ctx->pc != 0x453BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E80_0x452e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453BE4u; }
        if (ctx->pc != 0x453BE4u) { return; }
    }
    ctx->pc = 0x453BE4u;
label_453be4:
    // 0x453be4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x453be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_453be8:
    // 0x453be8: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x453be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_453bec:
    // 0x453bec: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_453bf0:
    if (ctx->pc == 0x453BF0u) {
        ctx->pc = 0x453BF0u;
            // 0x453bf0: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x453BF4u;
        goto label_453bf4;
    }
    ctx->pc = 0x453BECu;
    {
        const bool branch_taken_0x453bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x453BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453BECu;
            // 0x453bf0: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453bec) {
            ctx->pc = 0x453A7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_453a7c;
        }
    }
    ctx->pc = 0x453BF4u;
label_453bf4:
    // 0x453bf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x453bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_453bf8:
    // 0x453bf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x453bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_453bfc:
    // 0x453bfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x453bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_453c00:
    // 0x453c00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x453c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_453c04:
    // 0x453c04: 0x3e00008  jr          $ra
label_453c08:
    if (ctx->pc == 0x453C08u) {
        ctx->pc = 0x453C08u;
            // 0x453c08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x453C0Cu;
        goto label_453c0c;
    }
    ctx->pc = 0x453C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453C04u;
            // 0x453c08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x453C0Cu;
label_453c0c:
    // 0x453c0c: 0x0  nop
    ctx->pc = 0x453c0cu;
    // NOP
label_453c10:
    // 0x453c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x453c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_453c14:
    // 0x453c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x453c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453c18:
    // 0x453c18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x453c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_453c1c:
    // 0x453c1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x453c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_453c20:
    // 0x453c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x453c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_453c24:
    // 0x453c24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x453c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_453c28:
    // 0x453c28: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x453c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_453c2c:
    // 0x453c2c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x453c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_453c30:
    // 0x453c30: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x453c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_453c34:
    // 0x453c34: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x453c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_453c38:
    // 0x453c38: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x453c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_453c3c:
    // 0x453c3c: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
label_453c40:
    if (ctx->pc == 0x453C40u) {
        ctx->pc = 0x453C40u;
            // 0x453c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453C44u;
        goto label_453c44;
    }
    ctx->pc = 0x453C3Cu;
    {
        const bool branch_taken_0x453c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x453C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453C3Cu;
            // 0x453c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453c3c) {
            ctx->pc = 0x453C6Cu;
            goto label_453c6c;
        }
    }
    ctx->pc = 0x453C44u;
label_453c44:
    // 0x453c44: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_453c48:
    if (ctx->pc == 0x453C48u) {
        ctx->pc = 0x453C48u;
            // 0x453c48: 0xae0500d4  sw          $a1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
        ctx->pc = 0x453C4Cu;
        goto label_453c4c;
    }
    ctx->pc = 0x453C44u;
    {
        const bool branch_taken_0x453c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c44) {
            ctx->pc = 0x453C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453C44u;
            // 0x453c48: 0xae0500d4  sw          $a1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453C54u;
            goto label_453c54;
        }
    }
    ctx->pc = 0x453C4Cu;
label_453c4c:
    // 0x453c4c: 0x10000197  b           . + 4 + (0x197 << 2)
label_453c50:
    if (ctx->pc == 0x453C50u) {
        ctx->pc = 0x453C50u;
            // 0x453c50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x453C54u;
        goto label_453c54;
    }
    ctx->pc = 0x453C4Cu;
    {
        const bool branch_taken_0x453c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453C4Cu;
            // 0x453c50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453c4c) {
            ctx->pc = 0x4542ACu;
            goto label_4542ac;
        }
    }
    ctx->pc = 0x453C54u;
label_453c54:
    // 0x453c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x453c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_453c58:
    // 0x453c58: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x453c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_453c5c:
    // 0x453c5c: 0x320f809  jalr        $t9
label_453c60:
    if (ctx->pc == 0x453C60u) {
        ctx->pc = 0x453C64u;
        goto label_453c64;
    }
    ctx->pc = 0x453C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x453C64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x453C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x453C64u; }
            if (ctx->pc != 0x453C64u) { return; }
        }
        }
    }
    ctx->pc = 0x453C64u;
label_453c64:
    // 0x453c64: 0x10000190  b           . + 4 + (0x190 << 2)
label_453c68:
    if (ctx->pc == 0x453C68u) {
        ctx->pc = 0x453C6Cu;
        goto label_453c6c;
    }
    ctx->pc = 0x453C64u;
    {
        const bool branch_taken_0x453c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c64) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x453C6Cu;
label_453c6c:
    // 0x453c6c: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x453c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_453c70:
    // 0x453c70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x453c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_453c74:
    // 0x453c74: 0x50e30185  beql        $a3, $v1, . + 4 + (0x185 << 2)
label_453c78:
    if (ctx->pc == 0x453C78u) {
        ctx->pc = 0x453C78u;
            // 0x453c78: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x453C7Cu;
        goto label_453c7c;
    }
    ctx->pc = 0x453C74u;
    {
        const bool branch_taken_0x453c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x453c74) {
            ctx->pc = 0x453C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453C74u;
            // 0x453c78: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45428Cu;
            goto label_45428c;
        }
    }
    ctx->pc = 0x453C7Cu;
label_453c7c:
    // 0x453c7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x453c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_453c80:
    // 0x453c80: 0x10e6009c  beq         $a3, $a2, . + 4 + (0x9C << 2)
label_453c84:
    if (ctx->pc == 0x453C84u) {
        ctx->pc = 0x453C88u;
        goto label_453c88;
    }
    ctx->pc = 0x453C80u;
    {
        const bool branch_taken_0x453c80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x453c80) {
            ctx->pc = 0x453EF4u;
            goto label_453ef4;
        }
    }
    ctx->pc = 0x453C88u;
label_453c88:
    // 0x453c88: 0x10e50003  beq         $a3, $a1, . + 4 + (0x3 << 2)
label_453c8c:
    if (ctx->pc == 0x453C8Cu) {
        ctx->pc = 0x453C90u;
        goto label_453c90;
    }
    ctx->pc = 0x453C88u;
    {
        const bool branch_taken_0x453c88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x453c88) {
            ctx->pc = 0x453C98u;
            goto label_453c98;
        }
    }
    ctx->pc = 0x453C90u;
label_453c90:
    // 0x453c90: 0x10000185  b           . + 4 + (0x185 << 2)
label_453c94:
    if (ctx->pc == 0x453C94u) {
        ctx->pc = 0x453C98u;
        goto label_453c98;
    }
    ctx->pc = 0x453C90u;
    {
        const bool branch_taken_0x453c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c90) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x453C98u;
label_453c98:
    // 0x453c98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x453c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_453c9c:
    // 0x453c9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x453c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_453ca0:
    // 0x453ca0: 0x8c4275a8  lw          $v0, 0x75A8($v0)
    ctx->pc = 0x453ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
label_453ca4:
    // 0x453ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x453ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453ca8:
    // 0x453ca8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x453ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453cac:
    // 0x453cac: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x453cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_453cb0:
    // 0x453cb0: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x453cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_453cb4:
    // 0x453cb4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x453cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_453cb8:
    // 0x453cb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x453cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453cbc:
    // 0x453cbc: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_453cc0:
    if (ctx->pc == 0x453CC0u) {
        ctx->pc = 0x453CC0u;
            // 0x453cc0: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->pc = 0x453CC4u;
        goto label_453cc4;
    }
    ctx->pc = 0x453CBCu;
    {
        const bool branch_taken_0x453cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453cbc) {
            ctx->pc = 0x453CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453CBCu;
            // 0x453cc0: 0xe6000130  swc1        $f0, 0x130($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x453D18u;
            goto label_453d18;
        }
    }
    ctx->pc = 0x453CC4u;
label_453cc4:
    // 0x453cc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x453cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_453cc8:
    // 0x453cc8: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x453cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_453ccc:
    // 0x453ccc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x453cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_453cd0:
    // 0x453cd0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x453cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453cd4:
    // 0x453cd4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x453cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_453cd8:
    // 0x453cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453cdc:
    // 0x453cdc: 0x0  nop
    ctx->pc = 0x453cdcu;
    // NOP
label_453ce0:
    // 0x453ce0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x453ce0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_453ce4:
    // 0x453ce4: 0x0  nop
    ctx->pc = 0x453ce4u;
    // NOP
label_453ce8:
    // 0x453ce8: 0x0  nop
    ctx->pc = 0x453ce8u;
    // NOP
label_453cec:
    // 0x453cec: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
label_453cf0:
    if (ctx->pc == 0x453CF0u) {
        ctx->pc = 0x453CF4u;
        goto label_453cf4;
    }
    ctx->pc = 0x453CECu;
    {
        const bool branch_taken_0x453cec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x453cec) {
            ctx->pc = 0x453CFCu;
            goto label_453cfc;
        }
    }
    ctx->pc = 0x453CF4u;
label_453cf4:
    // 0x453cf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_453cf8:
    if (ctx->pc == 0x453CF8u) {
        ctx->pc = 0x453CF8u;
            // 0x453cf8: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x453CFCu;
        goto label_453cfc;
    }
    ctx->pc = 0x453CF4u;
    {
        const bool branch_taken_0x453cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453CF4u;
            // 0x453cf8: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x453cf4) {
            ctx->pc = 0x453D10u;
            goto label_453d10;
        }
    }
    ctx->pc = 0x453CFCu;
label_453cfc:
    // 0x453cfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x453cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_453d00:
    // 0x453d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453d04:
    // 0x453d04: 0x0  nop
    ctx->pc = 0x453d04u;
    // NOP
label_453d08:
    // 0x453d08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x453d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_453d0c:
    // 0x453d0c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x453d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453d10:
    // 0x453d10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x453d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_453d14:
    // 0x453d14: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x453d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_453d18:
    // 0x453d18: 0xc6020134  lwc1        $f2, 0x134($s0)
    ctx->pc = 0x453d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_453d1c:
    // 0x453d1c: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x453d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
label_453d20:
    // 0x453d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453d24:
    // 0x453d24: 0x0  nop
    ctx->pc = 0x453d24u;
    // NOP
label_453d28:
    // 0x453d28: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x453d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453d2c:
    // 0x453d2c: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
label_453d30:
    if (ctx->pc == 0x453D30u) {
        ctx->pc = 0x453D30u;
            // 0x453d30: 0xc6010130  lwc1        $f1, 0x130($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x453D34u;
        goto label_453d34;
    }
    ctx->pc = 0x453D2Cu;
    {
        const bool branch_taken_0x453d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453d2c) {
            ctx->pc = 0x453D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453D2Cu;
            // 0x453d30: 0xc6010130  lwc1        $f1, 0x130($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x453DECu;
            goto label_453dec;
        }
    }
    ctx->pc = 0x453D34u;
label_453d34:
    // 0x453d34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x453d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_453d38:
    // 0x453d38: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x453d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_453d3c:
    // 0x453d3c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x453d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453d40:
    // 0x453d40: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_453d44:
    if (ctx->pc == 0x453D44u) {
        ctx->pc = 0x453D44u;
            // 0x453d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453D48u;
        goto label_453d48;
    }
    ctx->pc = 0x453D40u;
    {
        const bool branch_taken_0x453d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453D40u;
            // 0x453d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453d40) {
            ctx->pc = 0x453D5Cu;
            goto label_453d5c;
        }
    }
    ctx->pc = 0x453D48u;
label_453d48:
    // 0x453d48: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x453d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453d4c:
    // 0x453d4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x453d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453d50:
    // 0x453d50: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_453d54:
    if (ctx->pc == 0x453D54u) {
        ctx->pc = 0x453D54u;
            // 0x453d54: 0x3c0243c3  lui         $v0, 0x43C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
        ctx->pc = 0x453D58u;
        goto label_453d58;
    }
    ctx->pc = 0x453D50u;
    {
        const bool branch_taken_0x453d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453d50) {
            ctx->pc = 0x453D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453D50u;
            // 0x453d54: 0x3c0243c3  lui         $v0, 0x43C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453D60u;
            goto label_453d60;
        }
    }
    ctx->pc = 0x453D58u;
label_453d58:
    // 0x453d58: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x453d58u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_453d5c:
    // 0x453d5c: 0x3c0243c3  lui         $v0, 0x43C3
    ctx->pc = 0x453d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
label_453d60:
    // 0x453d60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x453d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_453d64:
    // 0x453d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453d68:
    // 0x453d68: 0x0  nop
    ctx->pc = 0x453d68u;
    // NOP
label_453d6c:
    // 0x453d6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x453d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453d70:
    // 0x453d70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_453d74:
    if (ctx->pc == 0x453D74u) {
        ctx->pc = 0x453D74u;
            // 0x453d74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453D78u;
        goto label_453d78;
    }
    ctx->pc = 0x453D70u;
    {
        const bool branch_taken_0x453d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453D70u;
            // 0x453d74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453d70) {
            ctx->pc = 0x453D7Cu;
            goto label_453d7c;
        }
    }
    ctx->pc = 0x453D78u;
label_453d78:
    // 0x453d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x453d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453d7c:
    // 0x453d7c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_453d80:
    if (ctx->pc == 0x453D80u) {
        ctx->pc = 0x453D80u;
            // 0x453d80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x453D84u;
        goto label_453d84;
    }
    ctx->pc = 0x453D7Cu;
    {
        const bool branch_taken_0x453d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x453d7c) {
            ctx->pc = 0x453D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453D7Cu;
            // 0x453d80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x453DA4u;
            goto label_453da4;
        }
    }
    ctx->pc = 0x453D84u;
label_453d84:
    // 0x453d84: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x453d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453d88:
    // 0x453d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x453d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453d8c:
    // 0x453d8c: 0x0  nop
    ctx->pc = 0x453d8cu;
    // NOP
label_453d90:
    // 0x453d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x453d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453d94:
    // 0x453d94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_453d98:
    if (ctx->pc == 0x453D98u) {
        ctx->pc = 0x453D98u;
            // 0x453d98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453D9Cu;
        goto label_453d9c;
    }
    ctx->pc = 0x453D94u;
    {
        const bool branch_taken_0x453d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453D94u;
            // 0x453d98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453d94) {
            ctx->pc = 0x453DA0u;
            goto label_453da0;
        }
    }
    ctx->pc = 0x453D9Cu;
label_453d9c:
    // 0x453d9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x453d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453da0:
    // 0x453da0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x453da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_453da4:
    // 0x453da4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x453da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_453da8:
    // 0x453da8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x453da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_453dac:
    // 0x453dac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_453db0:
    if (ctx->pc == 0x453DB0u) {
        ctx->pc = 0x453DB0u;
            // 0x453db0: 0xc601013c  lwc1        $f1, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x453DB4u;
        goto label_453db4;
    }
    ctx->pc = 0x453DACu;
    {
        const bool branch_taken_0x453dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453dac) {
            ctx->pc = 0x453DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453DACu;
            // 0x453db0: 0xc601013c  lwc1        $f1, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x453DD0u;
            goto label_453dd0;
        }
    }
    ctx->pc = 0x453DB4u;
label_453db4:
    // 0x453db4: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x453db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453db8:
    // 0x453db8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x453db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_453dbc:
    // 0x453dbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x453dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_453dc0:
    // 0x453dc0: 0x0  nop
    ctx->pc = 0x453dc0u;
    // NOP
label_453dc4:
    // 0x453dc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x453dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_453dc8:
    // 0x453dc8: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x453dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_453dcc:
    // 0x453dcc: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x453dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453dd0:
    // 0x453dd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x453dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_453dd4:
    // 0x453dd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x453dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_453dd8:
    // 0x453dd8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x453dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453ddc:
    // 0x453ddc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x453ddcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_453de0:
    // 0x453de0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x453de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_453de4:
    // 0x453de4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x453de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_453de8:
    // 0x453de8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x453de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453dec:
    // 0x453dec: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x453decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
label_453df0:
    // 0x453df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453df4:
    // 0x453df4: 0x0  nop
    ctx->pc = 0x453df4u;
    // NOP
label_453df8:
    // 0x453df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x453df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453dfc:
    // 0x453dfc: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_453e00:
    if (ctx->pc == 0x453E00u) {
        ctx->pc = 0x453E00u;
            // 0x453e00: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x453E04u;
        goto label_453e04;
    }
    ctx->pc = 0x453DFCu;
    {
        const bool branch_taken_0x453dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x453dfc) {
            ctx->pc = 0x453E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453DFCu;
            // 0x453e00: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453E8Cu;
            goto label_453e8c;
        }
    }
    ctx->pc = 0x453E04u;
label_453e04:
    // 0x453e04: 0x3c02431e  lui         $v0, 0x431E
    ctx->pc = 0x453e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17182 << 16));
label_453e08:
    // 0x453e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453e0c:
    // 0x453e0c: 0x0  nop
    ctx->pc = 0x453e0cu;
    // NOP
label_453e10:
    // 0x453e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x453e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453e14:
    // 0x453e14: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_453e18:
    if (ctx->pc == 0x453E18u) {
        ctx->pc = 0x453E1Cu;
        goto label_453e1c;
    }
    ctx->pc = 0x453E14u;
    {
        const bool branch_taken_0x453e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453e14) {
            ctx->pc = 0x453E88u;
            goto label_453e88;
        }
    }
    ctx->pc = 0x453E1Cu;
label_453e1c:
    // 0x453e1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x453e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_453e20:
    // 0x453e20: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x453e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_453e24:
    // 0x453e24: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x453e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_453e28:
    // 0x453e28: 0xc6060128  lwc1        $f6, 0x128($s0)
    ctx->pc = 0x453e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_453e2c:
    // 0x453e2c: 0xc6050124  lwc1        $f5, 0x124($s0)
    ctx->pc = 0x453e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_453e30:
    // 0x453e30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x453e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453e34:
    // 0x453e34: 0xc6040120  lwc1        $f4, 0x120($s0)
    ctx->pc = 0x453e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_453e38:
    // 0x453e38: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x453e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_453e3c:
    // 0x453e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453e40:
    // 0x453e40: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x453e40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_453e44:
    // 0x453e44: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x453e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_453e48:
    // 0x453e48: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x453e48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_453e4c:
    // 0x453e4c: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x453e4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_453e50:
    // 0x453e50: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x453e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453e54:
    // 0x453e54: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x453e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_453e58:
    // 0x453e58: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x453e58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_453e5c:
    // 0x453e5c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x453e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_453e60:
    // 0x453e60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x453e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_453e64:
    // 0x453e64: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x453e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_453e68:
    // 0x453e68: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x453e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_453e6c:
    // 0x453e6c: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x453e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_453e70:
    // 0x453e70: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x453e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_453e74:
    // 0x453e74: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x453e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_453e78:
    // 0x453e78: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x453e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_453e7c:
    // 0x453e7c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x453e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_453e80:
    // 0x453e80: 0xc08914c  jal         func_224530
label_453e84:
    if (ctx->pc == 0x453E84u) {
        ctx->pc = 0x453E84u;
            // 0x453e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453E88u;
        goto label_453e88;
    }
    ctx->pc = 0x453E80u;
    SET_GPR_U32(ctx, 31, 0x453E88u);
    ctx->pc = 0x453E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453E80u;
            // 0x453e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453E88u; }
        if (ctx->pc != 0x453E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453E88u; }
        if (ctx->pc != 0x453E88u) { return; }
    }
    ctx->pc = 0x453E88u;
label_453e88:
    // 0x453e88: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x453e88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_453e8c:
    // 0x453e8c: 0xc088b74  jal         func_222DD0
label_453e90:
    if (ctx->pc == 0x453E90u) {
        ctx->pc = 0x453E90u;
            // 0x453e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453E94u;
        goto label_453e94;
    }
    ctx->pc = 0x453E8Cu;
    SET_GPR_U32(ctx, 31, 0x453E94u);
    ctx->pc = 0x453E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453E8Cu;
            // 0x453e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453E94u; }
        if (ctx->pc != 0x453E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453E94u; }
        if (ctx->pc != 0x453E94u) { return; }
    }
    ctx->pc = 0x453E94u;
label_453e94:
    // 0x453e94: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x453e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_453e98:
    // 0x453e98: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x453e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_453e9c:
    // 0x453e9c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x453e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_453ea0:
    // 0x453ea0: 0x320f809  jalr        $t9
label_453ea4:
    if (ctx->pc == 0x453EA4u) {
        ctx->pc = 0x453EA4u;
            // 0x453ea4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x453EA8u;
        goto label_453ea8;
    }
    ctx->pc = 0x453EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x453EA8u);
        ctx->pc = 0x453EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453EA0u;
            // 0x453ea4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x453EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x453EA8u; }
            if (ctx->pc != 0x453EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x453EA8u;
label_453ea8:
    // 0x453ea8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x453ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453eac:
    // 0x453eac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x453eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453eb0:
    // 0x453eb0: 0x450100fd  bc1t        . + 4 + (0xFD << 2)
label_453eb4:
    if (ctx->pc == 0x453EB4u) {
        ctx->pc = 0x453EB8u;
        goto label_453eb8;
    }
    ctx->pc = 0x453EB0u;
    {
        const bool branch_taken_0x453eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x453eb0) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x453EB8u;
label_453eb8:
    // 0x453eb8: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x453eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_453ebc:
    // 0x453ebc: 0x8c630300  lw          $v1, 0x300($v1)
    ctx->pc = 0x453ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
label_453ec0:
    // 0x453ec0: 0x146000f9  bnez        $v1, . + 4 + (0xF9 << 2)
label_453ec4:
    if (ctx->pc == 0x453EC4u) {
        ctx->pc = 0x453EC8u;
        goto label_453ec8;
    }
    ctx->pc = 0x453EC0u;
    {
        const bool branch_taken_0x453ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x453ec0) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x453EC8u;
label_453ec8:
    // 0x453ec8: 0x3c03433f  lui         $v1, 0x433F
    ctx->pc = 0x453ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17215 << 16));
label_453ecc:
    // 0x453ecc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x453eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_453ed0:
    // 0x453ed0: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x453ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_453ed4:
    // 0x453ed4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x453ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_453ed8:
    // 0x453ed8: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x453ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_453edc:
    // 0x453edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x453edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453ee0:
    // 0x453ee0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x453ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_453ee4:
    // 0x453ee4: 0xc08914c  jal         func_224530
label_453ee8:
    if (ctx->pc == 0x453EE8u) {
        ctx->pc = 0x453EE8u;
            // 0x453ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453EECu;
        goto label_453eec;
    }
    ctx->pc = 0x453EE4u;
    SET_GPR_U32(ctx, 31, 0x453EECu);
    ctx->pc = 0x453EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x453EE4u;
            // 0x453ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453EECu; }
        if (ctx->pc != 0x453EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x453EECu; }
        if (ctx->pc != 0x453EECu) { return; }
    }
    ctx->pc = 0x453EECu;
label_453eec:
    // 0x453eec: 0x100000ee  b           . + 4 + (0xEE << 2)
label_453ef0:
    if (ctx->pc == 0x453EF0u) {
        ctx->pc = 0x453EF4u;
        goto label_453ef4;
    }
    ctx->pc = 0x453EECu;
    {
        const bool branch_taken_0x453eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453eec) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x453EF4u;
label_453ef4:
    // 0x453ef4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x453ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_453ef8:
    // 0x453ef8: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x453ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_453efc:
    // 0x453efc: 0x8c4575a8  lw          $a1, 0x75A8($v0)
    ctx->pc = 0x453efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
label_453f00:
    // 0x453f00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x453f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_453f04:
    // 0x453f04: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x453f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_453f08:
    // 0x453f08: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x453f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453f0c:
    // 0x453f0c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x453f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_453f10:
    // 0x453f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453f14:
    // 0x453f14: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x453f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_453f18:
    // 0x453f18: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x453f18u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_453f1c:
    // 0x453f1c: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x453f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_453f20:
    // 0x453f20: 0x0  nop
    ctx->pc = 0x453f20u;
    // NOP
label_453f24:
    // 0x453f24: 0x0  nop
    ctx->pc = 0x453f24u;
    // NOP
label_453f28:
    // 0x453f28: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
label_453f2c:
    if (ctx->pc == 0x453F2Cu) {
        ctx->pc = 0x453F30u;
        goto label_453f30;
    }
    ctx->pc = 0x453F28u;
    {
        const bool branch_taken_0x453f28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x453f28) {
            ctx->pc = 0x453F38u;
            goto label_453f38;
        }
    }
    ctx->pc = 0x453F30u;
label_453f30:
    // 0x453f30: 0x10000006  b           . + 4 + (0x6 << 2)
label_453f34:
    if (ctx->pc == 0x453F34u) {
        ctx->pc = 0x453F34u;
            // 0x453f34: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x453F38u;
        goto label_453f38;
    }
    ctx->pc = 0x453F30u;
    {
        const bool branch_taken_0x453f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453F30u;
            // 0x453f34: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x453f30) {
            ctx->pc = 0x453F4Cu;
            goto label_453f4c;
        }
    }
    ctx->pc = 0x453F38u;
label_453f38:
    // 0x453f38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x453f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_453f3c:
    // 0x453f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453f40:
    // 0x453f40: 0x0  nop
    ctx->pc = 0x453f40u;
    // NOP
label_453f44:
    // 0x453f44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x453f44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_453f48:
    // 0x453f48: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x453f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453f4c:
    // 0x453f4c: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x453f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
label_453f50:
    // 0x453f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453f54:
    // 0x453f54: 0x0  nop
    ctx->pc = 0x453f54u;
    // NOP
label_453f58:
    // 0x453f58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x453f58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_453f5c:
    // 0x453f5c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x453f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_453f60:
    // 0x453f60: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x453f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453f64:
    // 0x453f64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x453f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453f68:
    // 0x453f68: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
label_453f6c:
    if (ctx->pc == 0x453F6Cu) {
        ctx->pc = 0x453F6Cu;
            // 0x453f6c: 0xc6010130  lwc1        $f1, 0x130($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x453F70u;
        goto label_453f70;
    }
    ctx->pc = 0x453F68u;
    {
        const bool branch_taken_0x453f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453f68) {
            ctx->pc = 0x453F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453F68u;
            // 0x453f6c: 0xc6010130  lwc1        $f1, 0x130($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x454030u;
            goto label_454030;
        }
    }
    ctx->pc = 0x453F70u;
label_453f70:
    // 0x453f70: 0xc6020134  lwc1        $f2, 0x134($s0)
    ctx->pc = 0x453f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_453f74:
    // 0x453f74: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x453f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_453f78:
    // 0x453f78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x453f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_453f7c:
    // 0x453f7c: 0x0  nop
    ctx->pc = 0x453f7cu;
    // NOP
label_453f80:
    // 0x453f80: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x453f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453f84:
    // 0x453f84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_453f88:
    if (ctx->pc == 0x453F88u) {
        ctx->pc = 0x453F88u;
            // 0x453f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x453F8Cu;
        goto label_453f8c;
    }
    ctx->pc = 0x453F84u;
    {
        const bool branch_taken_0x453f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453F84u;
            // 0x453f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453f84) {
            ctx->pc = 0x453FA0u;
            goto label_453fa0;
        }
    }
    ctx->pc = 0x453F8Cu;
label_453f8c:
    // 0x453f8c: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x453f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453f90:
    // 0x453f90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x453f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453f94:
    // 0x453f94: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_453f98:
    if (ctx->pc == 0x453F98u) {
        ctx->pc = 0x453F98u;
            // 0x453f98: 0x3c0243c3  lui         $v0, 0x43C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
        ctx->pc = 0x453F9Cu;
        goto label_453f9c;
    }
    ctx->pc = 0x453F94u;
    {
        const bool branch_taken_0x453f94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453f94) {
            ctx->pc = 0x453F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453F94u;
            // 0x453f98: 0x3c0243c3  lui         $v0, 0x43C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x453FA4u;
            goto label_453fa4;
        }
    }
    ctx->pc = 0x453F9Cu;
label_453f9c:
    // 0x453f9c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x453f9cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_453fa0:
    // 0x453fa0: 0x3c0243c3  lui         $v0, 0x43C3
    ctx->pc = 0x453fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17347 << 16));
label_453fa4:
    // 0x453fa4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x453fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_453fa8:
    // 0x453fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453fac:
    // 0x453fac: 0x0  nop
    ctx->pc = 0x453facu;
    // NOP
label_453fb0:
    // 0x453fb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x453fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453fb4:
    // 0x453fb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_453fb8:
    if (ctx->pc == 0x453FB8u) {
        ctx->pc = 0x453FB8u;
            // 0x453fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453FBCu;
        goto label_453fbc;
    }
    ctx->pc = 0x453FB4u;
    {
        const bool branch_taken_0x453fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453FB4u;
            // 0x453fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453fb4) {
            ctx->pc = 0x453FC0u;
            goto label_453fc0;
        }
    }
    ctx->pc = 0x453FBCu;
label_453fbc:
    // 0x453fbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x453fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453fc0:
    // 0x453fc0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_453fc4:
    if (ctx->pc == 0x453FC4u) {
        ctx->pc = 0x453FC4u;
            // 0x453fc4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x453FC8u;
        goto label_453fc8;
    }
    ctx->pc = 0x453FC0u;
    {
        const bool branch_taken_0x453fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x453fc0) {
            ctx->pc = 0x453FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453FC0u;
            // 0x453fc4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x453FE8u;
            goto label_453fe8;
        }
    }
    ctx->pc = 0x453FC8u;
label_453fc8:
    // 0x453fc8: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x453fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_453fcc:
    // 0x453fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x453fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_453fd0:
    // 0x453fd0: 0x0  nop
    ctx->pc = 0x453fd0u;
    // NOP
label_453fd4:
    // 0x453fd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x453fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_453fd8:
    // 0x453fd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_453fdc:
    if (ctx->pc == 0x453FDCu) {
        ctx->pc = 0x453FDCu;
            // 0x453fdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x453FE0u;
        goto label_453fe0;
    }
    ctx->pc = 0x453FD8u;
    {
        const bool branch_taken_0x453fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x453FD8u;
            // 0x453fdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453fd8) {
            ctx->pc = 0x453FE4u;
            goto label_453fe4;
        }
    }
    ctx->pc = 0x453FE0u;
label_453fe0:
    // 0x453fe0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x453fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453fe4:
    // 0x453fe4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x453fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_453fe8:
    // 0x453fe8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x453fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_453fec:
    // 0x453fec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x453fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_453ff0:
    // 0x453ff0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_453ff4:
    if (ctx->pc == 0x453FF4u) {
        ctx->pc = 0x453FF4u;
            // 0x453ff4: 0xc601013c  lwc1        $f1, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x453FF8u;
        goto label_453ff8;
    }
    ctx->pc = 0x453FF0u;
    {
        const bool branch_taken_0x453ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453ff0) {
            ctx->pc = 0x453FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x453FF0u;
            // 0x453ff4: 0xc601013c  lwc1        $f1, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x454014u;
            goto label_454014;
        }
    }
    ctx->pc = 0x453FF8u;
label_453ff8:
    // 0x453ff8: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x453ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_453ffc:
    // 0x453ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x453ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_454000:
    // 0x454000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x454000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_454004:
    // 0x454004: 0x0  nop
    ctx->pc = 0x454004u;
    // NOP
label_454008:
    // 0x454008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x454008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_45400c:
    // 0x45400c: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x45400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_454010:
    // 0x454010: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x454010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_454014:
    // 0x454014: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x454014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_454018:
    // 0x454018: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x454018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45401c:
    // 0x45401c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x45401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454020:
    // 0x454020: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x454020u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_454024:
    // 0x454024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x454024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_454028:
    // 0x454028: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x454028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_45402c:
    // 0x45402c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x45402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_454030:
    // 0x454030: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x454030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
label_454034:
    // 0x454034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x454034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_454038:
    // 0x454038: 0x0  nop
    ctx->pc = 0x454038u;
    // NOP
label_45403c:
    // 0x45403c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x45403cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_454040:
    // 0x454040: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
label_454044:
    if (ctx->pc == 0x454044u) {
        ctx->pc = 0x454044u;
            // 0x454044: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454048u;
        goto label_454048;
    }
    ctx->pc = 0x454040u;
    {
        const bool branch_taken_0x454040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x454040) {
            ctx->pc = 0x454044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454040u;
            // 0x454044: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4540DCu;
            goto label_4540dc;
        }
    }
    ctx->pc = 0x454048u;
label_454048:
    // 0x454048: 0x3c02431e  lui         $v0, 0x431E
    ctx->pc = 0x454048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17182 << 16));
label_45404c:
    // 0x45404c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45404cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_454050:
    // 0x454050: 0x0  nop
    ctx->pc = 0x454050u;
    // NOP
label_454054:
    // 0x454054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x454054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_454058:
    // 0x454058: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_45405c:
    if (ctx->pc == 0x45405Cu) {
        ctx->pc = 0x454060u;
        goto label_454060;
    }
    ctx->pc = 0x454058u;
    {
        const bool branch_taken_0x454058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x454058) {
            ctx->pc = 0x4540D8u;
            goto label_4540d8;
        }
    }
    ctx->pc = 0x454060u;
label_454060:
    // 0x454060: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x454060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454064:
    // 0x454064: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x454064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_454068:
    // 0x454068: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x454068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45406c:
    // 0x45406c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x45406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_454070:
    // 0x454070: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x454070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454074:
    // 0x454074: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x454074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_454078:
    // 0x454078: 0x46001187  neg.s       $f6, $f2
    ctx->pc = 0x454078u;
    ctx->f[6] = FPU_NEG_S(ctx->f[2]);
label_45407c:
    // 0x45407c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45407cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454080:
    // 0x454080: 0x46000947  neg.s       $f5, $f1
    ctx->pc = 0x454080u;
    ctx->f[5] = FPU_NEG_S(ctx->f[1]);
label_454084:
    // 0x454084: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x454084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_454088:
    // 0x454088: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x454088u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
label_45408c:
    // 0x45408c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x45408cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_454090:
    // 0x454090: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x454090u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_454094:
    // 0x454094: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x454094u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_454098:
    // 0x454098: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x454098u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_45409c:
    // 0x45409c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x45409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4540a0:
    // 0x4540a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4540a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4540a4:
    // 0x4540a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4540a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4540a8:
    // 0x4540a8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x4540a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4540ac:
    // 0x4540ac: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4540acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4540b0:
    // 0x4540b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4540b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4540b4:
    // 0x4540b4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4540b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4540b8:
    // 0x4540b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4540b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4540bc:
    // 0x4540bc: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x4540bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4540c0:
    // 0x4540c0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4540c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4540c4:
    // 0x4540c4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4540c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4540c8:
    // 0x4540c8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4540c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4540cc:
    // 0x4540cc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4540ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4540d0:
    // 0x4540d0: 0xc08914c  jal         func_224530
label_4540d4:
    if (ctx->pc == 0x4540D4u) {
        ctx->pc = 0x4540D4u;
            // 0x4540d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4540D8u;
        goto label_4540d8;
    }
    ctx->pc = 0x4540D0u;
    SET_GPR_U32(ctx, 31, 0x4540D8u);
    ctx->pc = 0x4540D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4540D0u;
            // 0x4540d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4540D8u; }
        if (ctx->pc != 0x4540D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4540D8u; }
        if (ctx->pc != 0x4540D8u) { return; }
    }
    ctx->pc = 0x4540D8u;
label_4540d8:
    // 0x4540d8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4540d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4540dc:
    // 0x4540dc: 0xc088b74  jal         func_222DD0
label_4540e0:
    if (ctx->pc == 0x4540E0u) {
        ctx->pc = 0x4540E0u;
            // 0x4540e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4540E4u;
        goto label_4540e4;
    }
    ctx->pc = 0x4540DCu;
    SET_GPR_U32(ctx, 31, 0x4540E4u);
    ctx->pc = 0x4540E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4540DCu;
            // 0x4540e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4540E4u; }
        if (ctx->pc != 0x4540E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4540E4u; }
        if (ctx->pc != 0x4540E4u) { return; }
    }
    ctx->pc = 0x4540E4u;
label_4540e4:
    // 0x4540e4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4540e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4540e8:
    // 0x4540e8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4540e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4540ec:
    // 0x4540ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4540ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4540f0:
    // 0x4540f0: 0x320f809  jalr        $t9
label_4540f4:
    if (ctx->pc == 0x4540F4u) {
        ctx->pc = 0x4540F4u;
            // 0x4540f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4540F8u;
        goto label_4540f8;
    }
    ctx->pc = 0x4540F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4540F8u);
        ctx->pc = 0x4540F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4540F0u;
            // 0x4540f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4540F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4540F8u; }
            if (ctx->pc != 0x4540F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4540F8u;
label_4540f8:
    // 0x4540f8: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x4540f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4540fc:
    // 0x4540fc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x4540fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_454100:
    // 0x454100: 0x45000069  bc1f        . + 4 + (0x69 << 2)
label_454104:
    if (ctx->pc == 0x454104u) {
        ctx->pc = 0x454108u;
        goto label_454108;
    }
    ctx->pc = 0x454100u;
    {
        const bool branch_taken_0x454100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x454100) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x454108u;
label_454108:
    // 0x454108: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45410c:
    // 0x45410c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_454110:
    // 0x454110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x454110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454114:
    // 0x454114: 0xc08914c  jal         func_224530
label_454118:
    if (ctx->pc == 0x454118u) {
        ctx->pc = 0x454118u;
            // 0x454118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45411Cu;
        goto label_45411c;
    }
    ctx->pc = 0x454114u;
    SET_GPR_U32(ctx, 31, 0x45411Cu);
    ctx->pc = 0x454118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454114u;
            // 0x454118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45411Cu; }
        if (ctx->pc != 0x45411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45411Cu; }
        if (ctx->pc != 0x45411Cu) { return; }
    }
    ctx->pc = 0x45411Cu;
label_45411c:
    // 0x45411c: 0xc0e39b4  jal         func_38E6D0
label_454120:
    if (ctx->pc == 0x454120u) {
        ctx->pc = 0x454120u;
            // 0x454120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454124u;
        goto label_454124;
    }
    ctx->pc = 0x45411Cu;
    SET_GPR_U32(ctx, 31, 0x454124u);
    ctx->pc = 0x454120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45411Cu;
            // 0x454120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454124u; }
        if (ctx->pc != 0x454124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454124u; }
        if (ctx->pc != 0x454124u) { return; }
    }
    ctx->pc = 0x454124u;
label_454124:
    // 0x454124: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x454124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_454128:
    // 0x454128: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x454128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_45412c:
    // 0x45412c: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x45412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_454130:
    // 0x454130: 0xc0d3f08  jal         func_34FC20
label_454134:
    if (ctx->pc == 0x454134u) {
        ctx->pc = 0x454134u;
            // 0x454134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454138u;
        goto label_454138;
    }
    ctx->pc = 0x454130u;
    SET_GPR_U32(ctx, 31, 0x454138u);
    ctx->pc = 0x454134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454130u;
            // 0x454134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454138u; }
        if (ctx->pc != 0x454138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454138u; }
        if (ctx->pc != 0x454138u) { return; }
    }
    ctx->pc = 0x454138u;
label_454138:
    // 0x454138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45413c:
    // 0x45413c: 0xc0e1b28  jal         func_386CA0
label_454140:
    if (ctx->pc == 0x454140u) {
        ctx->pc = 0x454140u;
            // 0x454140: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x454144u;
        goto label_454144;
    }
    ctx->pc = 0x45413Cu;
    SET_GPR_U32(ctx, 31, 0x454144u);
    ctx->pc = 0x454140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45413Cu;
            // 0x454140: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454144u; }
        if (ctx->pc != 0x454144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454144u; }
        if (ctx->pc != 0x454144u) { return; }
    }
    ctx->pc = 0x454144u;
label_454144:
    // 0x454144: 0xc114bb0  jal         func_452EC0
label_454148:
    if (ctx->pc == 0x454148u) {
        ctx->pc = 0x45414Cu;
        goto label_45414c;
    }
    ctx->pc = 0x454144u;
    SET_GPR_U32(ctx, 31, 0x45414Cu);
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45414Cu; }
        if (ctx->pc != 0x45414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45414Cu; }
        if (ctx->pc != 0x45414Cu) { return; }
    }
    ctx->pc = 0x45414Cu;
label_45414c:
    // 0x45414c: 0xc114bac  jal         func_452EB0
label_454150:
    if (ctx->pc == 0x454150u) {
        ctx->pc = 0x454150u;
            // 0x454150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454154u;
        goto label_454154;
    }
    ctx->pc = 0x45414Cu;
    SET_GPR_U32(ctx, 31, 0x454154u);
    ctx->pc = 0x454150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45414Cu;
            // 0x454150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EB0u;
    if (runtime->hasFunction(0x452EB0u)) {
        auto targetFn = runtime->lookupFunction(0x452EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454154u; }
        if (ctx->pc != 0x454154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EB0_0x452eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454154u; }
        if (ctx->pc != 0x454154u) { return; }
    }
    ctx->pc = 0x454154u;
label_454154:
    // 0x454154: 0xc114bb0  jal         func_452EC0
label_454158:
    if (ctx->pc == 0x454158u) {
        ctx->pc = 0x454158u;
            // 0x454158: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x45415Cu;
        goto label_45415c;
    }
    ctx->pc = 0x454154u;
    SET_GPR_U32(ctx, 31, 0x45415Cu);
    ctx->pc = 0x454158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454154u;
            // 0x454158: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45415Cu; }
        if (ctx->pc != 0x45415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45415Cu; }
        if (ctx->pc != 0x45415Cu) { return; }
    }
    ctx->pc = 0x45415Cu;
label_45415c:
    // 0x45415c: 0xc114ba8  jal         func_452EA0
label_454160:
    if (ctx->pc == 0x454160u) {
        ctx->pc = 0x454160u;
            // 0x454160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454164u;
        goto label_454164;
    }
    ctx->pc = 0x45415Cu;
    SET_GPR_U32(ctx, 31, 0x454164u);
    ctx->pc = 0x454160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45415Cu;
            // 0x454160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454164u; }
        if (ctx->pc != 0x454164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454164u; }
        if (ctx->pc != 0x454164u) { return; }
    }
    ctx->pc = 0x454164u;
label_454164:
    // 0x454164: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x454164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_454168:
    // 0x454168: 0xc0775b8  jal         func_1DD6E0
label_45416c:
    if (ctx->pc == 0x45416Cu) {
        ctx->pc = 0x45416Cu;
            // 0x45416c: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->pc = 0x454170u;
        goto label_454170;
    }
    ctx->pc = 0x454168u;
    SET_GPR_U32(ctx, 31, 0x454170u);
    ctx->pc = 0x45416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454168u;
            // 0x45416c: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454170u; }
        if (ctx->pc != 0x454170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454170u; }
        if (ctx->pc != 0x454170u) { return; }
    }
    ctx->pc = 0x454170u;
label_454170:
    // 0x454170: 0xc0775b4  jal         func_1DD6D0
label_454174:
    if (ctx->pc == 0x454174u) {
        ctx->pc = 0x454174u;
            // 0x454174: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x454178u;
        goto label_454178;
    }
    ctx->pc = 0x454170u;
    SET_GPR_U32(ctx, 31, 0x454178u);
    ctx->pc = 0x454174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454170u;
            // 0x454174: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454178u; }
        if (ctx->pc != 0x454178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454178u; }
        if (ctx->pc != 0x454178u) { return; }
    }
    ctx->pc = 0x454178u;
label_454178:
    // 0x454178: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x454178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_45417c:
    // 0x45417c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x45417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454180:
    // 0x454180: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x454180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_454184:
    // 0x454184: 0xc114bb0  jal         func_452EC0
label_454188:
    if (ctx->pc == 0x454188u) {
        ctx->pc = 0x454188u;
            // 0x454188: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x45418Cu;
        goto label_45418c;
    }
    ctx->pc = 0x454184u;
    SET_GPR_U32(ctx, 31, 0x45418Cu);
    ctx->pc = 0x454188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454184u;
            // 0x454188: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45418Cu; }
        if (ctx->pc != 0x45418Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45418Cu; }
        if (ctx->pc != 0x45418Cu) { return; }
    }
    ctx->pc = 0x45418Cu;
label_45418c:
    // 0x45418c: 0xc114ba8  jal         func_452EA0
label_454190:
    if (ctx->pc == 0x454190u) {
        ctx->pc = 0x454190u;
            // 0x454190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454194u;
        goto label_454194;
    }
    ctx->pc = 0x45418Cu;
    SET_GPR_U32(ctx, 31, 0x454194u);
    ctx->pc = 0x454190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45418Cu;
            // 0x454190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454194u; }
        if (ctx->pc != 0x454194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454194u; }
        if (ctx->pc != 0x454194u) { return; }
    }
    ctx->pc = 0x454194u;
label_454194:
    // 0x454194: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x454194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_454198:
    // 0x454198: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x454198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_45419c:
    // 0x45419c: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x45419cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4541a0:
    // 0x4541a0: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x4541a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_4541a4:
    // 0x4541a4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4541a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4541a8:
    // 0x4541a8: 0xc0e080c  jal         func_382030
label_4541ac:
    if (ctx->pc == 0x4541ACu) {
        ctx->pc = 0x4541ACu;
            // 0x4541ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4541B0u;
        goto label_4541b0;
    }
    ctx->pc = 0x4541A8u;
    SET_GPR_U32(ctx, 31, 0x4541B0u);
    ctx->pc = 0x4541ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541A8u;
            // 0x4541ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541B0u; }
        if (ctx->pc != 0x4541B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541B0u; }
        if (ctx->pc != 0x4541B0u) { return; }
    }
    ctx->pc = 0x4541B0u;
label_4541b0:
    // 0x4541b0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4541b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4541b4:
    // 0x4541b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4541b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4541b8:
    // 0x4541b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4541b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4541bc:
    // 0x4541bc: 0xc08914c  jal         func_224530
label_4541c0:
    if (ctx->pc == 0x4541C0u) {
        ctx->pc = 0x4541C0u;
            // 0x4541c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4541C4u;
        goto label_4541c4;
    }
    ctx->pc = 0x4541BCu;
    SET_GPR_U32(ctx, 31, 0x4541C4u);
    ctx->pc = 0x4541C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541BCu;
            // 0x4541c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541C4u; }
        if (ctx->pc != 0x4541C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541C4u; }
        if (ctx->pc != 0x4541C4u) { return; }
    }
    ctx->pc = 0x4541C4u;
label_4541c4:
    // 0x4541c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4541c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4541c8:
    // 0x4541c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4541c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4541cc:
    // 0x4541cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4541ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4541d0:
    // 0x4541d0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4541d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4541d4:
    // 0x4541d4: 0xc0b6df0  jal         func_2DB7C0
label_4541d8:
    if (ctx->pc == 0x4541D8u) {
        ctx->pc = 0x4541D8u;
            // 0x4541d8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4541DCu;
        goto label_4541dc;
    }
    ctx->pc = 0x4541D4u;
    SET_GPR_U32(ctx, 31, 0x4541DCu);
    ctx->pc = 0x4541D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541D4u;
            // 0x4541d8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541DCu; }
        if (ctx->pc != 0x4541DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541DCu; }
        if (ctx->pc != 0x4541DCu) { return; }
    }
    ctx->pc = 0x4541DCu;
label_4541dc:
    // 0x4541dc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4541dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4541e0:
    // 0x4541e0: 0xc0e07f8  jal         func_381FE0
label_4541e4:
    if (ctx->pc == 0x4541E4u) {
        ctx->pc = 0x4541E4u;
            // 0x4541e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4541E8u;
        goto label_4541e8;
    }
    ctx->pc = 0x4541E0u;
    SET_GPR_U32(ctx, 31, 0x4541E8u);
    ctx->pc = 0x4541E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541E0u;
            // 0x4541e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541E8u; }
        if (ctx->pc != 0x4541E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541E8u; }
        if (ctx->pc != 0x4541E8u) { return; }
    }
    ctx->pc = 0x4541E8u;
label_4541e8:
    // 0x4541e8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4541e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4541ec:
    // 0x4541ec: 0xc0dc3f4  jal         func_370FD0
label_4541f0:
    if (ctx->pc == 0x4541F0u) {
        ctx->pc = 0x4541F0u;
            // 0x4541f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4541F4u;
        goto label_4541f4;
    }
    ctx->pc = 0x4541ECu;
    SET_GPR_U32(ctx, 31, 0x4541F4u);
    ctx->pc = 0x4541F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541ECu;
            // 0x4541f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541F4u; }
        if (ctx->pc != 0x4541F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4541F4u; }
        if (ctx->pc != 0x4541F4u) { return; }
    }
    ctx->pc = 0x4541F4u;
label_4541f4:
    // 0x4541f4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x4541f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_4541f8:
    // 0x4541f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4541f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4541fc:
    // 0x4541fc: 0xc0e1b08  jal         func_386C20
label_454200:
    if (ctx->pc == 0x454200u) {
        ctx->pc = 0x454200u;
            // 0x454200: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454204u;
        goto label_454204;
    }
    ctx->pc = 0x4541FCu;
    SET_GPR_U32(ctx, 31, 0x454204u);
    ctx->pc = 0x454200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4541FCu;
            // 0x454200: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454204u; }
        if (ctx->pc != 0x454204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454204u; }
        if (ctx->pc != 0x454204u) { return; }
    }
    ctx->pc = 0x454204u;
label_454204:
    // 0x454204: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x454204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_454208:
    // 0x454208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x454208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45420c:
    // 0x45420c: 0xc0e1b04  jal         func_386C10
label_454210:
    if (ctx->pc == 0x454210u) {
        ctx->pc = 0x454210u;
            // 0x454210: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454214u;
        goto label_454214;
    }
    ctx->pc = 0x45420Cu;
    SET_GPR_U32(ctx, 31, 0x454214u);
    ctx->pc = 0x454210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45420Cu;
            // 0x454210: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454214u; }
        if (ctx->pc != 0x454214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454214u; }
        if (ctx->pc != 0x454214u) { return; }
    }
    ctx->pc = 0x454214u;
label_454214:
    // 0x454214: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x454214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_454218:
    // 0x454218: 0xc0e1b00  jal         func_386C00
label_45421c:
    if (ctx->pc == 0x45421Cu) {
        ctx->pc = 0x45421Cu;
            // 0x45421c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454220u;
        goto label_454220;
    }
    ctx->pc = 0x454218u;
    SET_GPR_U32(ctx, 31, 0x454220u);
    ctx->pc = 0x45421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454218u;
            // 0x45421c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454220u; }
        if (ctx->pc != 0x454220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454220u; }
        if (ctx->pc != 0x454220u) { return; }
    }
    ctx->pc = 0x454220u;
label_454220:
    // 0x454220: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x454220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_454224:
    // 0x454224: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x454224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_454228:
    // 0x454228: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x454228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45422c:
    // 0x45422c: 0xc0e1afc  jal         func_386BF0
label_454230:
    if (ctx->pc == 0x454230u) {
        ctx->pc = 0x454230u;
            // 0x454230: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454234u;
        goto label_454234;
    }
    ctx->pc = 0x45422Cu;
    SET_GPR_U32(ctx, 31, 0x454234u);
    ctx->pc = 0x454230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45422Cu;
            // 0x454230: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454234u; }
        if (ctx->pc != 0x454234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454234u; }
        if (ctx->pc != 0x454234u) { return; }
    }
    ctx->pc = 0x454234u;
label_454234:
    // 0x454234: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_454238:
    // 0x454238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45423c:
    // 0x45423c: 0xc0e1af4  jal         func_386BD0
label_454240:
    if (ctx->pc == 0x454240u) {
        ctx->pc = 0x454240u;
            // 0x454240: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x454244u;
        goto label_454244;
    }
    ctx->pc = 0x45423Cu;
    SET_GPR_U32(ctx, 31, 0x454244u);
    ctx->pc = 0x454240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45423Cu;
            // 0x454240: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454244u; }
        if (ctx->pc != 0x454244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454244u; }
        if (ctx->pc != 0x454244u) { return; }
    }
    ctx->pc = 0x454244u;
label_454244:
    // 0x454244: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x454244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_454248:
    // 0x454248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45424c:
    // 0x45424c: 0xc0e1aec  jal         func_386BB0
label_454250:
    if (ctx->pc == 0x454250u) {
        ctx->pc = 0x454250u;
            // 0x454250: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454254u;
        goto label_454254;
    }
    ctx->pc = 0x45424Cu;
    SET_GPR_U32(ctx, 31, 0x454254u);
    ctx->pc = 0x454250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45424Cu;
            // 0x454250: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454254u; }
        if (ctx->pc != 0x454254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454254u; }
        if (ctx->pc != 0x454254u) { return; }
    }
    ctx->pc = 0x454254u;
label_454254:
    // 0x454254: 0xc0dc408  jal         func_371020
label_454258:
    if (ctx->pc == 0x454258u) {
        ctx->pc = 0x454258u;
            // 0x454258: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x45425Cu;
        goto label_45425c;
    }
    ctx->pc = 0x454254u;
    SET_GPR_U32(ctx, 31, 0x45425Cu);
    ctx->pc = 0x454258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454254u;
            // 0x454258: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45425Cu; }
        if (ctx->pc != 0x45425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45425Cu; }
        if (ctx->pc != 0x45425Cu) { return; }
    }
    ctx->pc = 0x45425Cu;
label_45425c:
    // 0x45425c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454260:
    // 0x454260: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x454260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_454264:
    // 0x454264: 0xc0e1ad4  jal         func_386B50
label_454268:
    if (ctx->pc == 0x454268u) {
        ctx->pc = 0x454268u;
            // 0x454268: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x45426Cu;
        goto label_45426c;
    }
    ctx->pc = 0x454264u;
    SET_GPR_U32(ctx, 31, 0x45426Cu);
    ctx->pc = 0x454268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454264u;
            // 0x454268: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45426Cu; }
        if (ctx->pc != 0x45426Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45426Cu; }
        if (ctx->pc != 0x45426Cu) { return; }
    }
    ctx->pc = 0x45426Cu;
label_45426c:
    // 0x45426c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x45426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_454270:
    // 0x454270: 0xc114ba4  jal         func_452E90
label_454274:
    if (ctx->pc == 0x454274u) {
        ctx->pc = 0x454274u;
            // 0x454274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454278u;
        goto label_454278;
    }
    ctx->pc = 0x454270u;
    SET_GPR_U32(ctx, 31, 0x454278u);
    ctx->pc = 0x454274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454270u;
            // 0x454274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E90u;
    if (runtime->hasFunction(0x452E90u)) {
        auto targetFn = runtime->lookupFunction(0x452E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454278u; }
        if (ctx->pc != 0x454278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E90_0x452e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454278u; }
        if (ctx->pc != 0x454278u) { return; }
    }
    ctx->pc = 0x454278u;
label_454278:
    // 0x454278: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x454278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_45427c:
    // 0x45427c: 0xc114ba0  jal         func_452E80
label_454280:
    if (ctx->pc == 0x454280u) {
        ctx->pc = 0x454280u;
            // 0x454280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454284u;
        goto label_454284;
    }
    ctx->pc = 0x45427Cu;
    SET_GPR_U32(ctx, 31, 0x454284u);
    ctx->pc = 0x454280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45427Cu;
            // 0x454280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E80u;
    if (runtime->hasFunction(0x452E80u)) {
        auto targetFn = runtime->lookupFunction(0x452E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454284u; }
        if (ctx->pc != 0x454284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E80_0x452e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454284u; }
        if (ctx->pc != 0x454284u) { return; }
    }
    ctx->pc = 0x454284u;
label_454284:
    // 0x454284: 0x10000008  b           . + 4 + (0x8 << 2)
label_454288:
    if (ctx->pc == 0x454288u) {
        ctx->pc = 0x45428Cu;
        goto label_45428c;
    }
    ctx->pc = 0x454284u;
    {
        const bool branch_taken_0x454284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454284) {
            ctx->pc = 0x4542A8u;
            goto label_4542a8;
        }
    }
    ctx->pc = 0x45428Cu;
label_45428c:
    // 0x45428c: 0xc088b74  jal         func_222DD0
label_454290:
    if (ctx->pc == 0x454290u) {
        ctx->pc = 0x454290u;
            // 0x454290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454294u;
        goto label_454294;
    }
    ctx->pc = 0x45428Cu;
    SET_GPR_U32(ctx, 31, 0x454294u);
    ctx->pc = 0x454290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45428Cu;
            // 0x454290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454294u; }
        if (ctx->pc != 0x454294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454294u; }
        if (ctx->pc != 0x454294u) { return; }
    }
    ctx->pc = 0x454294u;
label_454294:
    // 0x454294: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x454294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_454298:
    // 0x454298: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x454298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_45429c:
    // 0x45429c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x45429cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4542a0:
    // 0x4542a0: 0x320f809  jalr        $t9
label_4542a4:
    if (ctx->pc == 0x4542A4u) {
        ctx->pc = 0x4542A4u;
            // 0x4542a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4542A8u;
        goto label_4542a8;
    }
    ctx->pc = 0x4542A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4542A8u);
        ctx->pc = 0x4542A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4542A0u;
            // 0x4542a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4542A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4542A8u; }
            if (ctx->pc != 0x4542A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4542A8u;
label_4542a8:
    // 0x4542a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4542a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4542ac:
    // 0x4542ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4542acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4542b0:
    // 0x4542b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4542b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4542b4:
    // 0x4542b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4542b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4542b8:
    // 0x4542b8: 0x3e00008  jr          $ra
label_4542bc:
    if (ctx->pc == 0x4542BCu) {
        ctx->pc = 0x4542BCu;
            // 0x4542bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4542C0u;
        goto label_4542c0;
    }
    ctx->pc = 0x4542B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4542BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4542B8u;
            // 0x4542bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4542C0u;
label_4542c0:
    // 0x4542c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4542c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4542c4:
    // 0x4542c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4542c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4542c8:
    // 0x4542c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4542c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4542cc:
    // 0x4542cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4542ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4542d0:
    // 0x4542d0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4542d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4542d4:
    // 0x4542d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4542d8:
    if (ctx->pc == 0x4542D8u) {
        ctx->pc = 0x4542D8u;
            // 0x4542d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4542DCu;
        goto label_4542dc;
    }
    ctx->pc = 0x4542D4u;
    {
        const bool branch_taken_0x4542d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4542d4) {
            ctx->pc = 0x4542D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4542D4u;
            // 0x4542d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4542F0u;
            goto label_4542f0;
        }
    }
    ctx->pc = 0x4542DCu;
label_4542dc:
    // 0x4542dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4542dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4542e0:
    // 0x4542e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4542e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4542e4:
    // 0x4542e4: 0x320f809  jalr        $t9
label_4542e8:
    if (ctx->pc == 0x4542E8u) {
        ctx->pc = 0x4542E8u;
            // 0x4542e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4542ECu;
        goto label_4542ec;
    }
    ctx->pc = 0x4542E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4542ECu);
        ctx->pc = 0x4542E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4542E4u;
            // 0x4542e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4542ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4542ECu; }
            if (ctx->pc != 0x4542ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4542ECu;
label_4542ec:
    // 0x4542ec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4542ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4542f0:
    // 0x4542f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4542f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4542f4:
    // 0x4542f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4542f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4542f8:
    // 0x4542f8: 0x3e00008  jr          $ra
label_4542fc:
    if (ctx->pc == 0x4542FCu) {
        ctx->pc = 0x4542FCu;
            // 0x4542fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x454300u;
        goto label_454300;
    }
    ctx->pc = 0x4542F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4542FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4542F8u;
            // 0x4542fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454300u;
label_454300:
    // 0x454300: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x454300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_454304:
    // 0x454304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x454304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_454308:
    // 0x454308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x454308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45430c:
    // 0x45430c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_454310:
    // 0x454310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x454310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454314:
    // 0x454314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454318:
    // 0x454318: 0xc0892d0  jal         func_224B40
label_45431c:
    if (ctx->pc == 0x45431Cu) {
        ctx->pc = 0x45431Cu;
            // 0x45431c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x454320u;
        goto label_454320;
    }
    ctx->pc = 0x454318u;
    SET_GPR_U32(ctx, 31, 0x454320u);
    ctx->pc = 0x45431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454318u;
            // 0x45431c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454320u; }
        if (ctx->pc != 0x454320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454320u; }
        if (ctx->pc != 0x454320u) { return; }
    }
    ctx->pc = 0x454320u;
label_454320:
    // 0x454320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x454320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_454324:
    // 0x454324: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x454324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_454328:
    // 0x454328: 0x8c4275a8  lw          $v0, 0x75A8($v0)
    ctx->pc = 0x454328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
label_45432c:
    // 0x45432c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x45432cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_454330:
    // 0x454330: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x454330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_454334:
    // 0x454334: 0xc0b6e68  jal         func_2DB9A0
label_454338:
    if (ctx->pc == 0x454338u) {
        ctx->pc = 0x454338u;
            // 0x454338: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x45433Cu;
        goto label_45433c;
    }
    ctx->pc = 0x454334u;
    SET_GPR_U32(ctx, 31, 0x45433Cu);
    ctx->pc = 0x454338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454334u;
            // 0x454338: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45433Cu; }
        if (ctx->pc != 0x45433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45433Cu; }
        if (ctx->pc != 0x45433Cu) { return; }
    }
    ctx->pc = 0x45433Cu;
label_45433c:
    // 0x45433c: 0xc0b6dac  jal         func_2DB6B0
label_454340:
    if (ctx->pc == 0x454340u) {
        ctx->pc = 0x454340u;
            // 0x454340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x454344u;
        goto label_454344;
    }
    ctx->pc = 0x45433Cu;
    SET_GPR_U32(ctx, 31, 0x454344u);
    ctx->pc = 0x454340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45433Cu;
            // 0x454340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454344u; }
        if (ctx->pc != 0x454344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454344u; }
        if (ctx->pc != 0x454344u) { return; }
    }
    ctx->pc = 0x454344u;
label_454344:
    // 0x454344: 0xc0cac94  jal         func_32B250
label_454348:
    if (ctx->pc == 0x454348u) {
        ctx->pc = 0x454348u;
            // 0x454348: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x45434Cu;
        goto label_45434c;
    }
    ctx->pc = 0x454344u;
    SET_GPR_U32(ctx, 31, 0x45434Cu);
    ctx->pc = 0x454348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454344u;
            // 0x454348: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45434Cu; }
        if (ctx->pc != 0x45434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45434Cu; }
        if (ctx->pc != 0x45434Cu) { return; }
    }
    ctx->pc = 0x45434Cu;
label_45434c:
    // 0x45434c: 0xc0cac84  jal         func_32B210
label_454350:
    if (ctx->pc == 0x454350u) {
        ctx->pc = 0x454350u;
            // 0x454350: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x454354u;
        goto label_454354;
    }
    ctx->pc = 0x45434Cu;
    SET_GPR_U32(ctx, 31, 0x454354u);
    ctx->pc = 0x454350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45434Cu;
            // 0x454350: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454354u; }
        if (ctx->pc != 0x454354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454354u; }
        if (ctx->pc != 0x454354u) { return; }
    }
    ctx->pc = 0x454354u;
label_454354:
    // 0x454354: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x454354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_454358:
    // 0x454358: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x454358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_45435c:
    // 0x45435c: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x45435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_454360:
    // 0x454360: 0xc0a5a68  jal         func_2969A0
label_454364:
    if (ctx->pc == 0x454364u) {
        ctx->pc = 0x454364u;
            // 0x454364: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x454368u;
        goto label_454368;
    }
    ctx->pc = 0x454360u;
    SET_GPR_U32(ctx, 31, 0x454368u);
    ctx->pc = 0x454364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454360u;
            // 0x454364: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454368u; }
        if (ctx->pc != 0x454368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454368u; }
        if (ctx->pc != 0x454368u) { return; }
    }
    ctx->pc = 0x454368u;
label_454368:
    // 0x454368: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x454368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45436c:
    // 0x45436c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x45436cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_454370:
    // 0x454370: 0x8c4475a8  lw          $a0, 0x75A8($v0)
    ctx->pc = 0x454370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30120)));
label_454374:
    // 0x454374: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x454374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_454378:
    // 0x454378: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x454378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45437c:
    // 0x45437c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x45437cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454380:
    // 0x454380: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x454380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454384:
    // 0x454384: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x454384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454388:
    // 0x454388: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x454388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45438c:
    // 0x45438c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x45438cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_454390:
    // 0x454390: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x454390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_454394:
    // 0x454394: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x454394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_454398:
    // 0x454398: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x454398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_45439c:
    // 0x45439c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x45439cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4543a0:
    // 0x4543a0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x4543a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4543a4:
    // 0x4543a4: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x4543a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_4543a8:
    // 0x4543a8: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x4543a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4543ac:
    // 0x4543ac: 0x34430060  ori         $v1, $v0, 0x60
    ctx->pc = 0x4543acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_4543b0:
    // 0x4543b0: 0x8c8b0060  lw          $t3, 0x60($a0)
    ctx->pc = 0x4543b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4543b4:
    // 0x4543b4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x4543b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4543b8:
    // 0x4543b8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x4543b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4543bc:
    // 0x4543bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4543c0:
    // 0x4543c0: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4543c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4543c4:
    // 0x4543c4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x4543c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4543c8:
    // 0x4543c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4543c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4543cc:
    // 0x4543cc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x4543ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4543d0:
    // 0x4543d0: 0xafab00c4  sw          $t3, 0xC4($sp)
    ctx->pc = 0x4543d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 11));
label_4543d4:
    // 0x4543d4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x4543d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4543d8:
    // 0x4543d8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x4543d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_4543dc:
    // 0x4543dc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x4543dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4543e0:
    // 0x4543e0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x4543e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_4543e4:
    // 0x4543e4: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x4543e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4543e8:
    // 0x4543e8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x4543e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_4543ec:
    // 0x4543ec: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x4543ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4543f0:
    // 0x4543f0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x4543f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_4543f4:
    // 0x4543f4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x4543f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4543f8:
    // 0x4543f8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4543f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4543fc:
    // 0x4543fc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4543fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454400:
    // 0x454400: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x454400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_454404:
    // 0x454404: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x454404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454408:
    // 0x454408: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x454408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_45440c:
    // 0x45440c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x45440cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_454410:
    // 0x454410: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x454410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_454414:
    // 0x454414: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x454414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454418:
    // 0x454418: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x454418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45441c:
    // 0x45441c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x45441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454420:
    // 0x454420: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x454420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_454424:
    // 0x454424: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x454424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_454428:
    // 0x454428: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x454428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_45442c:
    // 0x45442c: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x45442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454430:
    // 0x454430: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x454430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_454434:
    // 0x454434: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x454434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454438:
    // 0x454438: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x454438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_45443c:
    // 0x45443c: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x45443cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_454440:
    // 0x454440: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x454440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_454444:
    // 0x454444: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x454444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454448:
    // 0x454448: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x454448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45444c:
    // 0x45444c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x45444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454450:
    // 0x454450: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x454450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_454454:
    // 0x454454: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x454454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_454458:
    // 0x454458: 0xc0a7a88  jal         func_29EA20
label_45445c:
    if (ctx->pc == 0x45445Cu) {
        ctx->pc = 0x45445Cu;
            // 0x45445c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x454460u;
        goto label_454460;
    }
    ctx->pc = 0x454458u;
    SET_GPR_U32(ctx, 31, 0x454460u);
    ctx->pc = 0x45445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454458u;
            // 0x45445c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454460u; }
        if (ctx->pc != 0x454460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454460u; }
        if (ctx->pc != 0x454460u) { return; }
    }
    ctx->pc = 0x454460u;
label_454460:
    // 0x454460: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x454460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_454464:
    // 0x454464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_454468:
    // 0x454468: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_45446c:
    if (ctx->pc == 0x45446Cu) {
        ctx->pc = 0x45446Cu;
            // 0x45446c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x454470u;
        goto label_454470;
    }
    ctx->pc = 0x454468u;
    {
        const bool branch_taken_0x454468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454468u;
            // 0x45446c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454468) {
            ctx->pc = 0x4544B8u;
            goto label_4544b8;
        }
    }
    ctx->pc = 0x454470u;
label_454470:
    // 0x454470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_454474:
    // 0x454474: 0xc088ef4  jal         func_223BD0
label_454478:
    if (ctx->pc == 0x454478u) {
        ctx->pc = 0x454478u;
            // 0x454478: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x45447Cu;
        goto label_45447c;
    }
    ctx->pc = 0x454474u;
    SET_GPR_U32(ctx, 31, 0x45447Cu);
    ctx->pc = 0x454478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454474u;
            // 0x454478: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45447Cu; }
        if (ctx->pc != 0x45447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45447Cu; }
        if (ctx->pc != 0x45447Cu) { return; }
    }
    ctx->pc = 0x45447Cu;
label_45447c:
    // 0x45447c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_454480:
    // 0x454480: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x454480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_454484:
    // 0x454484: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x454484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_454488:
    // 0x454488: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x454488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_45448c:
    // 0x45448c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45448cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_454490:
    // 0x454490: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x454490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_454494:
    // 0x454494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454498:
    // 0x454498: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x454498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_45449c:
    // 0x45449c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x45449cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4544a0:
    // 0x4544a0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4544a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4544a4:
    // 0x4544a4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4544a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4544a8:
    // 0x4544a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4544a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4544ac:
    // 0x4544ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4544acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4544b0:
    // 0x4544b0: 0xc088b38  jal         func_222CE0
label_4544b4:
    if (ctx->pc == 0x4544B4u) {
        ctx->pc = 0x4544B4u;
            // 0x4544b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4544B8u;
        goto label_4544b8;
    }
    ctx->pc = 0x4544B0u;
    SET_GPR_U32(ctx, 31, 0x4544B8u);
    ctx->pc = 0x4544B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4544B0u;
            // 0x4544b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4544B8u; }
        if (ctx->pc != 0x4544B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4544B8u; }
        if (ctx->pc != 0x4544B8u) { return; }
    }
    ctx->pc = 0x4544B8u;
label_4544b8:
    // 0x4544b8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4544bc:
    // 0x4544bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4544bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4544c0:
    // 0x4544c0: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x4544c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_4544c4:
    // 0x4544c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4544c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4544c8:
    // 0x4544c8: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x4544c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_4544cc:
    // 0x4544cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4544ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4544d0:
    // 0x4544d0: 0xc08914c  jal         func_224530
label_4544d4:
    if (ctx->pc == 0x4544D4u) {
        ctx->pc = 0x4544D4u;
            // 0x4544d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4544D8u;
        goto label_4544d8;
    }
    ctx->pc = 0x4544D0u;
    SET_GPR_U32(ctx, 31, 0x4544D8u);
    ctx->pc = 0x4544D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4544D0u;
            // 0x4544d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4544D8u; }
        if (ctx->pc != 0x4544D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4544D8u; }
        if (ctx->pc != 0x4544D8u) { return; }
    }
    ctx->pc = 0x4544D8u;
label_4544d8:
    // 0x4544d8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4544d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4544dc:
    // 0x4544dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4544dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4544e0:
    // 0x4544e0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4544e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4544e4:
    // 0x4544e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4544e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4544e8:
    // 0x4544e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4544e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4544ec:
    // 0x4544ec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4544ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4544f0:
    // 0x4544f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4544f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4544f4:
    // 0x4544f4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4544f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4544f8:
    // 0x4544f8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4544f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4544fc:
    // 0x4544fc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4544fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_454500:
    // 0x454500: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x454500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_454504:
    // 0x454504: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x454504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_454508:
    // 0x454508: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x454508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45450c:
    // 0x45450c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x45450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454510:
    // 0x454510: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x454510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_454514:
    // 0x454514: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x454514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_454518:
    // 0x454518: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x454518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_45451c:
    // 0x45451c: 0xc0892b0  jal         func_224AC0
label_454520:
    if (ctx->pc == 0x454520u) {
        ctx->pc = 0x454520u;
            // 0x454520: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x454524u;
        goto label_454524;
    }
    ctx->pc = 0x45451Cu;
    SET_GPR_U32(ctx, 31, 0x454524u);
    ctx->pc = 0x454520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45451Cu;
            // 0x454520: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454524u; }
        if (ctx->pc != 0x454524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454524u; }
        if (ctx->pc != 0x454524u) { return; }
    }
    ctx->pc = 0x454524u;
label_454524:
    // 0x454524: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x454524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_454528:
    // 0x454528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45452c:
    // 0x45452c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x45452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_454530:
    // 0x454530: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x454530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_454534:
    // 0x454534: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x454534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_454538:
    // 0x454538: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x454538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_45453c:
    // 0x45453c: 0xc0891d8  jal         func_224760
label_454540:
    if (ctx->pc == 0x454540u) {
        ctx->pc = 0x454540u;
            // 0x454540: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x454544u;
        goto label_454544;
    }
    ctx->pc = 0x45453Cu;
    SET_GPR_U32(ctx, 31, 0x454544u);
    ctx->pc = 0x454540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45453Cu;
            // 0x454540: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454544u; }
        if (ctx->pc != 0x454544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454544u; }
        if (ctx->pc != 0x454544u) { return; }
    }
    ctx->pc = 0x454544u;
label_454544:
    // 0x454544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454548:
    // 0x454548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x454548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45454c:
    // 0x45454c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x45454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_454550:
    // 0x454550: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x454550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_454554:
    // 0x454554: 0xc08c164  jal         func_230590
label_454558:
    if (ctx->pc == 0x454558u) {
        ctx->pc = 0x454558u;
            // 0x454558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45455Cu;
        goto label_45455c;
    }
    ctx->pc = 0x454554u;
    SET_GPR_U32(ctx, 31, 0x45455Cu);
    ctx->pc = 0x454558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454554u;
            // 0x454558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45455Cu; }
        if (ctx->pc != 0x45455Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45455Cu; }
        if (ctx->pc != 0x45455Cu) { return; }
    }
    ctx->pc = 0x45455Cu;
label_45455c:
    // 0x45455c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x45455cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_454560:
    // 0x454560: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x454560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_454564:
    // 0x454564: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x454564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_454568:
    // 0x454568: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x454568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_45456c:
    // 0x45456c: 0xc0a7a88  jal         func_29EA20
label_454570:
    if (ctx->pc == 0x454570u) {
        ctx->pc = 0x454570u;
            // 0x454570: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x454574u;
        goto label_454574;
    }
    ctx->pc = 0x45456Cu;
    SET_GPR_U32(ctx, 31, 0x454574u);
    ctx->pc = 0x454570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45456Cu;
            // 0x454570: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454574u; }
        if (ctx->pc != 0x454574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454574u; }
        if (ctx->pc != 0x454574u) { return; }
    }
    ctx->pc = 0x454574u;
label_454574:
    // 0x454574: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x454574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_454578:
    // 0x454578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x454578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45457c:
    // 0x45457c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_454580:
    if (ctx->pc == 0x454580u) {
        ctx->pc = 0x454580u;
            // 0x454580: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x454584u;
        goto label_454584;
    }
    ctx->pc = 0x45457Cu;
    {
        const bool branch_taken_0x45457c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x454580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45457Cu;
            // 0x454580: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45457c) {
            ctx->pc = 0x4545A0u;
            goto label_4545a0;
        }
    }
    ctx->pc = 0x454584u;
label_454584:
    // 0x454584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x454584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_454588:
    // 0x454588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x454588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45458c:
    // 0x45458c: 0xc0869d0  jal         func_21A740
label_454590:
    if (ctx->pc == 0x454590u) {
        ctx->pc = 0x454590u;
            // 0x454590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454594u;
        goto label_454594;
    }
    ctx->pc = 0x45458Cu;
    SET_GPR_U32(ctx, 31, 0x454594u);
    ctx->pc = 0x454590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45458Cu;
            // 0x454590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454594u; }
        if (ctx->pc != 0x454594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454594u; }
        if (ctx->pc != 0x454594u) { return; }
    }
    ctx->pc = 0x454594u;
label_454594:
    // 0x454594: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x454594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_454598:
    // 0x454598: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x454598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_45459c:
    // 0x45459c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x45459cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4545a0:
    // 0x4545a0: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4545a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4545a4:
    // 0x4545a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4545a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4545a8:
    // 0x4545a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4545a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4545ac:
    // 0x4545ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4545acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4545b0:
    // 0x4545b0: 0xc08c650  jal         func_231940
label_4545b4:
    if (ctx->pc == 0x4545B4u) {
        ctx->pc = 0x4545B4u;
            // 0x4545b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4545B8u;
        goto label_4545b8;
    }
    ctx->pc = 0x4545B0u;
    SET_GPR_U32(ctx, 31, 0x4545B8u);
    ctx->pc = 0x4545B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4545B0u;
            // 0x4545b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4545B8u; }
        if (ctx->pc != 0x4545B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4545B8u; }
        if (ctx->pc != 0x4545B8u) { return; }
    }
    ctx->pc = 0x4545B8u;
label_4545b8:
    // 0x4545b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4545bc:
    // 0x4545bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4545bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4545c0:
    // 0x4545c0: 0xa2240068  sb          $a0, 0x68($s1)
    ctx->pc = 0x4545c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 4));
label_4545c4:
    // 0x4545c4: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x4545c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_4545c8:
    // 0x4545c8: 0xa224006a  sb          $a0, 0x6A($s1)
    ctx->pc = 0x4545c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 4));
label_4545cc:
    // 0x4545cc: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x4545ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_4545d0:
    // 0x4545d0: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x4545d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_4545d4:
    // 0x4545d4: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x4545d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_4545d8:
    // 0x4545d8: 0xa2240064  sb          $a0, 0x64($s1)
    ctx->pc = 0x4545d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 4));
label_4545dc:
    // 0x4545dc: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x4545dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_4545e0:
    // 0x4545e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4545e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4545e4:
    // 0x4545e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4545e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4545e8:
    // 0x4545e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4545e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4545ec:
    // 0x4545ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4545ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4545f0:
    // 0x4545f0: 0x3e00008  jr          $ra
label_4545f4:
    if (ctx->pc == 0x4545F4u) {
        ctx->pc = 0x4545F4u;
            // 0x4545f4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4545F8u;
        goto label_4545f8;
    }
    ctx->pc = 0x4545F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4545F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4545F0u;
            // 0x4545f4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4545F8u;
label_4545f8:
    // 0x4545f8: 0x0  nop
    ctx->pc = 0x4545f8u;
    // NOP
label_4545fc:
    // 0x4545fc: 0x0  nop
    ctx->pc = 0x4545fcu;
    // NOP
label_454600:
    // 0x454600: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x454600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_454604:
    // 0x454604: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x454604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_454608:
    // 0x454608: 0x8cc30300  lw          $v1, 0x300($a2)
    ctx->pc = 0x454608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 768)));
label_45460c:
    // 0x45460c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454610:
    // 0x454610: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x454610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_454614:
    // 0x454614: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x454614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_454618:
    // 0x454618: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_45461c:
    if (ctx->pc == 0x45461Cu) {
        ctx->pc = 0x454620u;
        goto label_454620;
    }
    ctx->pc = 0x454618u;
    {
        const bool branch_taken_0x454618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x454618) {
            ctx->pc = 0x454668u;
            goto label_454668;
        }
    }
    ctx->pc = 0x454620u;
label_454620:
    // 0x454620: 0x8cc30300  lw          $v1, 0x300($a2)
    ctx->pc = 0x454620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 768)));
label_454624:
    // 0x454624: 0x802027  not         $a0, $a0
    ctx->pc = 0x454624u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_454628:
    // 0x454628: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x454628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_45462c:
    // 0x45462c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_454630:
    if (ctx->pc == 0x454630u) {
        ctx->pc = 0x454630u;
            // 0x454630: 0xacc30300  sw          $v1, 0x300($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 768), GPR_U32(ctx, 3));
        ctx->pc = 0x454634u;
        goto label_454634;
    }
    ctx->pc = 0x45462Cu;
    {
        const bool branch_taken_0x45462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x454630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45462Cu;
            // 0x454630: 0xacc30300  sw          $v1, 0x300($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45462c) {
            ctx->pc = 0x454668u;
            goto label_454668;
        }
    }
    ctx->pc = 0x454634u;
label_454634:
    // 0x454634: 0x90c30308  lbu         $v1, 0x308($a2)
    ctx->pc = 0x454634u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 776)));
label_454638:
    // 0x454638: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_45463c:
    if (ctx->pc == 0x45463Cu) {
        ctx->pc = 0x454640u;
        goto label_454640;
    }
    ctx->pc = 0x454638u;
    {
        const bool branch_taken_0x454638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x454638) {
            ctx->pc = 0x454668u;
            goto label_454668;
        }
    }
    ctx->pc = 0x454640u;
label_454640:
    // 0x454640: 0xa0c00308  sb          $zero, 0x308($a2)
    ctx->pc = 0x454640u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 776), (uint8_t)GPR_U32(ctx, 0));
label_454644:
    // 0x454644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454648:
    // 0x454648: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x454648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45464c:
    // 0x45464c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x45464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_454650:
    // 0x454650: 0xacc40138  sw          $a0, 0x138($a2)
    ctx->pc = 0x454650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 312), GPR_U32(ctx, 4));
label_454654:
    // 0x454654: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x454654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_454658:
    // 0x454658: 0x24c60150  addiu       $a2, $a2, 0x150
    ctx->pc = 0x454658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
label_45465c:
    // 0x45465c: 0x0  nop
    ctx->pc = 0x45465cu;
    // NOP
label_454660:
    // 0x454660: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_454664:
    if (ctx->pc == 0x454664u) {
        ctx->pc = 0x454668u;
        goto label_454668;
    }
    ctx->pc = 0x454660u;
    {
        const bool branch_taken_0x454660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x454660) {
            ctx->pc = 0x45464Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45464c;
        }
    }
    ctx->pc = 0x454668u;
label_454668:
    // 0x454668: 0x3e00008  jr          $ra
label_45466c:
    if (ctx->pc == 0x45466Cu) {
        ctx->pc = 0x454670u;
        goto label_454670;
    }
    ctx->pc = 0x454668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454670u;
label_454670:
    // 0x454670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x454670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_454674:
    // 0x454674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x454674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_454678:
    // 0x454678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x454678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45467c:
    // 0x45467c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_454680:
    // 0x454680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454684:
    // 0x454684: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x454684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_454688:
    // 0x454688: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x454688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_45468c:
    // 0x45468c: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x45468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_454690:
    // 0x454690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x454690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454694:
    // 0x454694: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x454694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_454698:
    // 0x454698: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x454698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_45469c:
    // 0x45469c: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
label_4546a0:
    if (ctx->pc == 0x4546A0u) {
        ctx->pc = 0x4546A0u;
            // 0x4546a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4546A4u;
        goto label_4546a4;
    }
    ctx->pc = 0x45469Cu;
    {
        const bool branch_taken_0x45469c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45469c) {
            ctx->pc = 0x4546A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45469Cu;
            // 0x4546a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454740u;
            goto label_454740;
        }
    }
    ctx->pc = 0x4546A4u;
label_4546a4:
    // 0x4546a4: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x4546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4546a8:
    // 0x4546a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4546a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4546ac:
    // 0x4546ac: 0xae030300  sw          $v1, 0x300($s0)
    ctx->pc = 0x4546acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 3));
label_4546b0:
    // 0x4546b0: 0x92030308  lbu         $v1, 0x308($s0)
    ctx->pc = 0x4546b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 776)));
label_4546b4:
    // 0x4546b4: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_4546b8:
    if (ctx->pc == 0x4546B8u) {
        ctx->pc = 0x4546BCu;
        goto label_4546bc;
    }
    ctx->pc = 0x4546B4u;
    {
        const bool branch_taken_0x4546b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4546b4) {
            ctx->pc = 0x45473Cu;
            goto label_45473c;
        }
    }
    ctx->pc = 0x4546BCu;
label_4546bc:
    // 0x4546bc: 0xa2050308  sb          $a1, 0x308($s0)
    ctx->pc = 0x4546bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 776), (uint8_t)GPR_U32(ctx, 5));
label_4546c0:
    // 0x4546c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4546c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4546c4:
    // 0x4546c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4546c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4546c8:
    // 0x4546c8: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x4546c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
label_4546cc:
    // 0x4546cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4546ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4546d0:
    // 0x4546d0: 0x8e240138  lw          $a0, 0x138($s1)
    ctx->pc = 0x4546d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_4546d4:
    // 0x4546d4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_4546d8:
    if (ctx->pc == 0x4546D8u) {
        ctx->pc = 0x4546D8u;
            // 0x4546d8: 0x26270060  addiu       $a3, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x4546DCu;
        goto label_4546dc;
    }
    ctx->pc = 0x4546D4u;
    {
        const bool branch_taken_0x4546d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4546D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4546D4u;
            // 0x4546d8: 0x26270060  addiu       $a3, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4546d4) {
            ctx->pc = 0x454720u;
            goto label_454720;
        }
    }
    ctx->pc = 0x4546DCu;
label_4546dc:
    // 0x4546dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4546dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4546e0:
    // 0x4546e0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_4546e4:
    if (ctx->pc == 0x4546E4u) {
        ctx->pc = 0x4546E8u;
        goto label_4546e8;
    }
    ctx->pc = 0x4546E0u;
    {
        const bool branch_taken_0x4546e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4546e0) {
            ctx->pc = 0x454700u;
            goto label_454700;
        }
    }
    ctx->pc = 0x4546E8u;
label_4546e8:
    // 0x4546e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4546e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4546ec:
    // 0x4546ec: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_4546f0:
    if (ctx->pc == 0x4546F0u) {
        ctx->pc = 0x4546F4u;
        goto label_4546f4;
    }
    ctx->pc = 0x4546ECu;
    {
        const bool branch_taken_0x4546ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4546ec) {
            ctx->pc = 0x454728u;
            goto label_454728;
        }
    }
    ctx->pc = 0x4546F4u;
label_4546f4:
    // 0x4546f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4546f8:
    if (ctx->pc == 0x4546F8u) {
        ctx->pc = 0x4546FCu;
        goto label_4546fc;
    }
    ctx->pc = 0x4546F4u;
    {
        const bool branch_taken_0x4546f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4546f4) {
            ctx->pc = 0x454728u;
            goto label_454728;
        }
    }
    ctx->pc = 0x4546FCu;
label_4546fc:
    // 0x4546fc: 0x0  nop
    ctx->pc = 0x4546fcu;
    // NOP
label_454700:
    // 0x454700: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x454700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454704:
    // 0x454704: 0xace600d8  sw          $a2, 0xD8($a3)
    ctx->pc = 0x454704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 6));
label_454708:
    // 0x454708: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x454708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45470c:
    // 0x45470c: 0x8ce40050  lw          $a0, 0x50($a3)
    ctx->pc = 0x45470cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_454710:
    // 0x454710: 0xc08914c  jal         func_224530
label_454714:
    if (ctx->pc == 0x454714u) {
        ctx->pc = 0x454714u;
            // 0x454714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454718u;
        goto label_454718;
    }
    ctx->pc = 0x454710u;
    SET_GPR_U32(ctx, 31, 0x454718u);
    ctx->pc = 0x454714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454710u;
            // 0x454714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454718u; }
        if (ctx->pc != 0x454718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454718u; }
        if (ctx->pc != 0x454718u) { return; }
    }
    ctx->pc = 0x454718u;
label_454718:
    // 0x454718: 0x10000003  b           . + 4 + (0x3 << 2)
label_45471c:
    if (ctx->pc == 0x45471Cu) {
        ctx->pc = 0x454720u;
        goto label_454720;
    }
    ctx->pc = 0x454718u;
    {
        const bool branch_taken_0x454718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x454718) {
            ctx->pc = 0x454728u;
            goto label_454728;
        }
    }
    ctx->pc = 0x454720u;
label_454720:
    // 0x454720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x454720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454724:
    // 0x454724: 0xace300d8  sw          $v1, 0xD8($a3)
    ctx->pc = 0x454724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 3));
label_454728:
    // 0x454728: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x454728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_45472c:
    // 0x45472c: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x45472cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_454730:
    // 0x454730: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_454734:
    if (ctx->pc == 0x454734u) {
        ctx->pc = 0x454734u;
            // 0x454734: 0x26310150  addiu       $s1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->pc = 0x454738u;
        goto label_454738;
    }
    ctx->pc = 0x454730u;
    {
        const bool branch_taken_0x454730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x454734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454730u;
            // 0x454734: 0x26310150  addiu       $s1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454730) {
            ctx->pc = 0x4546C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4546c8;
        }
    }
    ctx->pc = 0x454738u;
label_454738:
    // 0x454738: 0xa2000309  sb          $zero, 0x309($s0)
    ctx->pc = 0x454738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 777), (uint8_t)GPR_U32(ctx, 0));
label_45473c:
    // 0x45473c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45473cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_454740:
    // 0x454740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x454740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_454744:
    // 0x454744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454748:
    // 0x454748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45474c:
    // 0x45474c: 0x3e00008  jr          $ra
label_454750:
    if (ctx->pc == 0x454750u) {
        ctx->pc = 0x454750u;
            // 0x454750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x454754u;
        goto label_454754;
    }
    ctx->pc = 0x45474Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45474Cu;
            // 0x454750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454754u;
label_454754:
    // 0x454754: 0x0  nop
    ctx->pc = 0x454754u;
    // NOP
label_454758:
    // 0x454758: 0x0  nop
    ctx->pc = 0x454758u;
    // NOP
label_45475c:
    // 0x45475c: 0x0  nop
    ctx->pc = 0x45475cu;
    // NOP
label_454760:
    // 0x454760: 0x3e00008  jr          $ra
label_454764:
    if (ctx->pc == 0x454764u) {
        ctx->pc = 0x454764u;
            // 0x454764: 0x24025212  addiu       $v0, $zero, 0x5212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21010));
        ctx->pc = 0x454768u;
        goto label_454768;
    }
    ctx->pc = 0x454760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454760u;
            // 0x454764: 0x24025212  addiu       $v0, $zero, 0x5212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454768u;
label_454768:
    // 0x454768: 0x0  nop
    ctx->pc = 0x454768u;
    // NOP
label_45476c:
    // 0x45476c: 0x0  nop
    ctx->pc = 0x45476cu;
    // NOP
label_454770:
    // 0x454770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x454770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_454774:
    // 0x454774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_454778:
    // 0x454778: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x454778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45477c:
    // 0x45477c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45477cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454780:
    // 0x454780: 0xc0e39b4  jal         func_38E6D0
label_454784:
    if (ctx->pc == 0x454784u) {
        ctx->pc = 0x454784u;
            // 0x454784: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x454788u;
        goto label_454788;
    }
    ctx->pc = 0x454780u;
    SET_GPR_U32(ctx, 31, 0x454788u);
    ctx->pc = 0x454784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454780u;
            // 0x454784: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454788u; }
        if (ctx->pc != 0x454788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454788u; }
        if (ctx->pc != 0x454788u) { return; }
    }
    ctx->pc = 0x454788u;
label_454788:
    // 0x454788: 0xc60c0100  lwc1        $f12, 0x100($s0)
    ctx->pc = 0x454788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45478c:
    // 0x45478c: 0xc60d0104  lwc1        $f13, 0x104($s0)
    ctx->pc = 0x45478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_454790:
    // 0x454790: 0xc60e0108  lwc1        $f14, 0x108($s0)
    ctx->pc = 0x454790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_454794:
    // 0x454794: 0xc0d3f08  jal         func_34FC20
label_454798:
    if (ctx->pc == 0x454798u) {
        ctx->pc = 0x454798u;
            // 0x454798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45479Cu;
        goto label_45479c;
    }
    ctx->pc = 0x454794u;
    SET_GPR_U32(ctx, 31, 0x45479Cu);
    ctx->pc = 0x454798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454794u;
            // 0x454798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45479Cu; }
        if (ctx->pc != 0x45479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45479Cu; }
        if (ctx->pc != 0x45479Cu) { return; }
    }
    ctx->pc = 0x45479Cu;
label_45479c:
    // 0x45479c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4547a0:
    // 0x4547a0: 0xc0e1b28  jal         func_386CA0
label_4547a4:
    if (ctx->pc == 0x4547A4u) {
        ctx->pc = 0x4547A4u;
            // 0x4547a4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x4547A8u;
        goto label_4547a8;
    }
    ctx->pc = 0x4547A0u;
    SET_GPR_U32(ctx, 31, 0x4547A8u);
    ctx->pc = 0x4547A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547A0u;
            // 0x4547a4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547A8u; }
        if (ctx->pc != 0x4547A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547A8u; }
        if (ctx->pc != 0x4547A8u) { return; }
    }
    ctx->pc = 0x4547A8u;
label_4547a8:
    // 0x4547a8: 0xc114bb0  jal         func_452EC0
label_4547ac:
    if (ctx->pc == 0x4547ACu) {
        ctx->pc = 0x4547B0u;
        goto label_4547b0;
    }
    ctx->pc = 0x4547A8u;
    SET_GPR_U32(ctx, 31, 0x4547B0u);
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547B0u; }
        if (ctx->pc != 0x4547B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547B0u; }
        if (ctx->pc != 0x4547B0u) { return; }
    }
    ctx->pc = 0x4547B0u;
label_4547b0:
    // 0x4547b0: 0xc114bac  jal         func_452EB0
label_4547b4:
    if (ctx->pc == 0x4547B4u) {
        ctx->pc = 0x4547B4u;
            // 0x4547b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4547B8u;
        goto label_4547b8;
    }
    ctx->pc = 0x4547B0u;
    SET_GPR_U32(ctx, 31, 0x4547B8u);
    ctx->pc = 0x4547B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547B0u;
            // 0x4547b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EB0u;
    if (runtime->hasFunction(0x452EB0u)) {
        auto targetFn = runtime->lookupFunction(0x452EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547B8u; }
        if (ctx->pc != 0x4547B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EB0_0x452eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547B8u; }
        if (ctx->pc != 0x4547B8u) { return; }
    }
    ctx->pc = 0x4547B8u;
label_4547b8:
    // 0x4547b8: 0xc114bb0  jal         func_452EC0
label_4547bc:
    if (ctx->pc == 0x4547BCu) {
        ctx->pc = 0x4547BCu;
            // 0x4547bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4547C0u;
        goto label_4547c0;
    }
    ctx->pc = 0x4547B8u;
    SET_GPR_U32(ctx, 31, 0x4547C0u);
    ctx->pc = 0x4547BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547B8u;
            // 0x4547bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547C0u; }
        if (ctx->pc != 0x4547C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547C0u; }
        if (ctx->pc != 0x4547C0u) { return; }
    }
    ctx->pc = 0x4547C0u;
label_4547c0:
    // 0x4547c0: 0xc114ba8  jal         func_452EA0
label_4547c4:
    if (ctx->pc == 0x4547C4u) {
        ctx->pc = 0x4547C4u;
            // 0x4547c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4547C8u;
        goto label_4547c8;
    }
    ctx->pc = 0x4547C0u;
    SET_GPR_U32(ctx, 31, 0x4547C8u);
    ctx->pc = 0x4547C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547C0u;
            // 0x4547c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547C8u; }
        if (ctx->pc != 0x4547C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547C8u; }
        if (ctx->pc != 0x4547C8u) { return; }
    }
    ctx->pc = 0x4547C8u;
label_4547c8:
    // 0x4547c8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4547c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4547cc:
    // 0x4547cc: 0xc0775b8  jal         func_1DD6E0
label_4547d0:
    if (ctx->pc == 0x4547D0u) {
        ctx->pc = 0x4547D0u;
            // 0x4547d0: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->pc = 0x4547D4u;
        goto label_4547d4;
    }
    ctx->pc = 0x4547CCu;
    SET_GPR_U32(ctx, 31, 0x4547D4u);
    ctx->pc = 0x4547D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547CCu;
            // 0x4547d0: 0xe6000138  swc1        $f0, 0x138($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547D4u; }
        if (ctx->pc != 0x4547D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547D4u; }
        if (ctx->pc != 0x4547D4u) { return; }
    }
    ctx->pc = 0x4547D4u;
label_4547d4:
    // 0x4547d4: 0xc0775b4  jal         func_1DD6D0
label_4547d8:
    if (ctx->pc == 0x4547D8u) {
        ctx->pc = 0x4547D8u;
            // 0x4547d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4547DCu;
        goto label_4547dc;
    }
    ctx->pc = 0x4547D4u;
    SET_GPR_U32(ctx, 31, 0x4547DCu);
    ctx->pc = 0x4547D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547D4u;
            // 0x4547d8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547DCu; }
        if (ctx->pc != 0x4547DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547DCu; }
        if (ctx->pc != 0x4547DCu) { return; }
    }
    ctx->pc = 0x4547DCu;
label_4547dc:
    // 0x4547dc: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x4547dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_4547e0:
    // 0x4547e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4547e4:
    // 0x4547e4: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x4547e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_4547e8:
    // 0x4547e8: 0xc114bb0  jal         func_452EC0
label_4547ec:
    if (ctx->pc == 0x4547ECu) {
        ctx->pc = 0x4547ECu;
            // 0x4547ec: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x4547F0u;
        goto label_4547f0;
    }
    ctx->pc = 0x4547E8u;
    SET_GPR_U32(ctx, 31, 0x4547F0u);
    ctx->pc = 0x4547ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547E8u;
            // 0x4547ec: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EC0u;
    if (runtime->hasFunction(0x452EC0u)) {
        auto targetFn = runtime->lookupFunction(0x452EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547F0u; }
        if (ctx->pc != 0x4547F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EC0_0x452ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547F0u; }
        if (ctx->pc != 0x4547F0u) { return; }
    }
    ctx->pc = 0x4547F0u;
label_4547f0:
    // 0x4547f0: 0xc114ba8  jal         func_452EA0
label_4547f4:
    if (ctx->pc == 0x4547F4u) {
        ctx->pc = 0x4547F4u;
            // 0x4547f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4547F8u;
        goto label_4547f8;
    }
    ctx->pc = 0x4547F0u;
    SET_GPR_U32(ctx, 31, 0x4547F8u);
    ctx->pc = 0x4547F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4547F0u;
            // 0x4547f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452EA0u;
    if (runtime->hasFunction(0x452EA0u)) {
        auto targetFn = runtime->lookupFunction(0x452EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547F8u; }
        if (ctx->pc != 0x4547F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452EA0_0x452ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4547F8u; }
        if (ctx->pc != 0x4547F8u) { return; }
    }
    ctx->pc = 0x4547F8u;
label_4547f8:
    // 0x4547f8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x4547f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_4547fc:
    // 0x4547fc: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x4547fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_454800:
    // 0x454800: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x454800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_454804:
    // 0x454804: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x454804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_454808:
    // 0x454808: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45480c:
    // 0x45480c: 0xc0e080c  jal         func_382030
label_454810:
    if (ctx->pc == 0x454810u) {
        ctx->pc = 0x454810u;
            // 0x454810: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x454814u;
        goto label_454814;
    }
    ctx->pc = 0x45480Cu;
    SET_GPR_U32(ctx, 31, 0x454814u);
    ctx->pc = 0x454810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45480Cu;
            // 0x454810: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454814u; }
        if (ctx->pc != 0x454814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454814u; }
        if (ctx->pc != 0x454814u) { return; }
    }
    ctx->pc = 0x454814u;
label_454814:
    // 0x454814: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_454818:
    // 0x454818: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x454818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45481c:
    // 0x45481c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454820:
    // 0x454820: 0xc08914c  jal         func_224530
label_454824:
    if (ctx->pc == 0x454824u) {
        ctx->pc = 0x454824u;
            // 0x454824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454828u;
        goto label_454828;
    }
    ctx->pc = 0x454820u;
    SET_GPR_U32(ctx, 31, 0x454828u);
    ctx->pc = 0x454824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454820u;
            // 0x454824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454828u; }
        if (ctx->pc != 0x454828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454828u; }
        if (ctx->pc != 0x454828u) { return; }
    }
    ctx->pc = 0x454828u;
label_454828:
    // 0x454828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x454828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45482c:
    // 0x45482c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_454830:
    // 0x454830: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x454830u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_454834:
    // 0x454834: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x454834u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_454838:
    // 0x454838: 0xc0b6df0  jal         func_2DB7C0
label_45483c:
    if (ctx->pc == 0x45483Cu) {
        ctx->pc = 0x45483Cu;
            // 0x45483c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x454840u;
        goto label_454840;
    }
    ctx->pc = 0x454838u;
    SET_GPR_U32(ctx, 31, 0x454840u);
    ctx->pc = 0x45483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454838u;
            // 0x45483c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454840u; }
        if (ctx->pc != 0x454840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454840u; }
        if (ctx->pc != 0x454840u) { return; }
    }
    ctx->pc = 0x454840u;
label_454840:
    // 0x454840: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_454844:
    // 0x454844: 0xc0e07f8  jal         func_381FE0
label_454848:
    if (ctx->pc == 0x454848u) {
        ctx->pc = 0x454848u;
            // 0x454848: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45484Cu;
        goto label_45484c;
    }
    ctx->pc = 0x454844u;
    SET_GPR_U32(ctx, 31, 0x45484Cu);
    ctx->pc = 0x454848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454844u;
            // 0x454848: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45484Cu; }
        if (ctx->pc != 0x45484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45484Cu; }
        if (ctx->pc != 0x45484Cu) { return; }
    }
    ctx->pc = 0x45484Cu;
label_45484c:
    // 0x45484c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x45484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_454850:
    // 0x454850: 0xc0dc3f4  jal         func_370FD0
label_454854:
    if (ctx->pc == 0x454854u) {
        ctx->pc = 0x454854u;
            // 0x454854: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454858u;
        goto label_454858;
    }
    ctx->pc = 0x454850u;
    SET_GPR_U32(ctx, 31, 0x454858u);
    ctx->pc = 0x454854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454850u;
            // 0x454854: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454858u; }
        if (ctx->pc != 0x454858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454858u; }
        if (ctx->pc != 0x454858u) { return; }
    }
    ctx->pc = 0x454858u;
label_454858:
    // 0x454858: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x454858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_45485c:
    // 0x45485c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45485cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_454860:
    // 0x454860: 0xc0e1b08  jal         func_386C20
label_454864:
    if (ctx->pc == 0x454864u) {
        ctx->pc = 0x454864u;
            // 0x454864: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454868u;
        goto label_454868;
    }
    ctx->pc = 0x454860u;
    SET_GPR_U32(ctx, 31, 0x454868u);
    ctx->pc = 0x454864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454860u;
            // 0x454864: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454868u; }
        if (ctx->pc != 0x454868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454868u; }
        if (ctx->pc != 0x454868u) { return; }
    }
    ctx->pc = 0x454868u;
label_454868:
    // 0x454868: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x454868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_45486c:
    // 0x45486c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45486cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_454870:
    // 0x454870: 0xc0e1b04  jal         func_386C10
label_454874:
    if (ctx->pc == 0x454874u) {
        ctx->pc = 0x454874u;
            // 0x454874: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454878u;
        goto label_454878;
    }
    ctx->pc = 0x454870u;
    SET_GPR_U32(ctx, 31, 0x454878u);
    ctx->pc = 0x454874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454870u;
            // 0x454874: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454878u; }
        if (ctx->pc != 0x454878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454878u; }
        if (ctx->pc != 0x454878u) { return; }
    }
    ctx->pc = 0x454878u;
label_454878:
    // 0x454878: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x454878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45487c:
    // 0x45487c: 0xc0e1b00  jal         func_386C00
label_454880:
    if (ctx->pc == 0x454880u) {
        ctx->pc = 0x454880u;
            // 0x454880: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454884u;
        goto label_454884;
    }
    ctx->pc = 0x45487Cu;
    SET_GPR_U32(ctx, 31, 0x454884u);
    ctx->pc = 0x454880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45487Cu;
            // 0x454880: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454884u; }
        if (ctx->pc != 0x454884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454884u; }
        if (ctx->pc != 0x454884u) { return; }
    }
    ctx->pc = 0x454884u;
label_454884:
    // 0x454884: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x454884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_454888:
    // 0x454888: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x454888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45488c:
    // 0x45488c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_454890:
    // 0x454890: 0xc0e1afc  jal         func_386BF0
label_454894:
    if (ctx->pc == 0x454894u) {
        ctx->pc = 0x454894u;
            // 0x454894: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x454898u;
        goto label_454898;
    }
    ctx->pc = 0x454890u;
    SET_GPR_U32(ctx, 31, 0x454898u);
    ctx->pc = 0x454894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454890u;
            // 0x454894: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454898u; }
        if (ctx->pc != 0x454898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454898u; }
        if (ctx->pc != 0x454898u) { return; }
    }
    ctx->pc = 0x454898u;
label_454898:
    // 0x454898: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x454898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45489c:
    // 0x45489c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4548a0:
    // 0x4548a0: 0xc0e1af4  jal         func_386BD0
label_4548a4:
    if (ctx->pc == 0x4548A4u) {
        ctx->pc = 0x4548A4u;
            // 0x4548a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4548A8u;
        goto label_4548a8;
    }
    ctx->pc = 0x4548A0u;
    SET_GPR_U32(ctx, 31, 0x4548A8u);
    ctx->pc = 0x4548A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548A0u;
            // 0x4548a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548A8u; }
        if (ctx->pc != 0x4548A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548A8u; }
        if (ctx->pc != 0x4548A8u) { return; }
    }
    ctx->pc = 0x4548A8u;
label_4548a8:
    // 0x4548a8: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x4548a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_4548ac:
    // 0x4548ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4548acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4548b0:
    // 0x4548b0: 0xc0e1aec  jal         func_386BB0
label_4548b4:
    if (ctx->pc == 0x4548B4u) {
        ctx->pc = 0x4548B4u;
            // 0x4548b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4548B8u;
        goto label_4548b8;
    }
    ctx->pc = 0x4548B0u;
    SET_GPR_U32(ctx, 31, 0x4548B8u);
    ctx->pc = 0x4548B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548B0u;
            // 0x4548b4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548B8u; }
        if (ctx->pc != 0x4548B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548B8u; }
        if (ctx->pc != 0x4548B8u) { return; }
    }
    ctx->pc = 0x4548B8u;
label_4548b8:
    // 0x4548b8: 0xc0dc408  jal         func_371020
label_4548bc:
    if (ctx->pc == 0x4548BCu) {
        ctx->pc = 0x4548BCu;
            // 0x4548bc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4548C0u;
        goto label_4548c0;
    }
    ctx->pc = 0x4548B8u;
    SET_GPR_U32(ctx, 31, 0x4548C0u);
    ctx->pc = 0x4548BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548B8u;
            // 0x4548bc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548C0u; }
        if (ctx->pc != 0x4548C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548C0u; }
        if (ctx->pc != 0x4548C0u) { return; }
    }
    ctx->pc = 0x4548C0u;
label_4548c0:
    // 0x4548c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4548c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4548c4:
    // 0x4548c4: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x4548c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_4548c8:
    // 0x4548c8: 0xc0e1ad4  jal         func_386B50
label_4548cc:
    if (ctx->pc == 0x4548CCu) {
        ctx->pc = 0x4548CCu;
            // 0x4548cc: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x4548D0u;
        goto label_4548d0;
    }
    ctx->pc = 0x4548C8u;
    SET_GPR_U32(ctx, 31, 0x4548D0u);
    ctx->pc = 0x4548CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548C8u;
            // 0x4548cc: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548D0u; }
        if (ctx->pc != 0x4548D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548D0u; }
        if (ctx->pc != 0x4548D0u) { return; }
    }
    ctx->pc = 0x4548D0u;
label_4548d0:
    // 0x4548d0: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x4548d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4548d4:
    // 0x4548d4: 0xc114ba4  jal         func_452E90
label_4548d8:
    if (ctx->pc == 0x4548D8u) {
        ctx->pc = 0x4548D8u;
            // 0x4548d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4548DCu;
        goto label_4548dc;
    }
    ctx->pc = 0x4548D4u;
    SET_GPR_U32(ctx, 31, 0x4548DCu);
    ctx->pc = 0x4548D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548D4u;
            // 0x4548d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E90u;
    if (runtime->hasFunction(0x452E90u)) {
        auto targetFn = runtime->lookupFunction(0x452E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548DCu; }
        if (ctx->pc != 0x4548DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E90_0x452e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548DCu; }
        if (ctx->pc != 0x4548DCu) { return; }
    }
    ctx->pc = 0x4548DCu;
label_4548dc:
    // 0x4548dc: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x4548dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4548e0:
    // 0x4548e0: 0xc114ba0  jal         func_452E80
label_4548e4:
    if (ctx->pc == 0x4548E4u) {
        ctx->pc = 0x4548E4u;
            // 0x4548e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4548E8u;
        goto label_4548e8;
    }
    ctx->pc = 0x4548E0u;
    SET_GPR_U32(ctx, 31, 0x4548E8u);
    ctx->pc = 0x4548E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4548E0u;
            // 0x4548e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452E80u;
    if (runtime->hasFunction(0x452E80u)) {
        auto targetFn = runtime->lookupFunction(0x452E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548E8u; }
        if (ctx->pc != 0x4548E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00452E80_0x452e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4548E8u; }
        if (ctx->pc != 0x4548E8u) { return; }
    }
    ctx->pc = 0x4548E8u;
label_4548e8:
    // 0x4548e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4548e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4548ec:
    // 0x4548ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4548ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4548f0:
    // 0x4548f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4548f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4548f4:
    // 0x4548f4: 0x3e00008  jr          $ra
label_4548f8:
    if (ctx->pc == 0x4548F8u) {
        ctx->pc = 0x4548F8u;
            // 0x4548f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4548FCu;
        goto label_4548fc;
    }
    ctx->pc = 0x4548F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4548F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4548F4u;
            // 0x4548f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4548FCu;
label_4548fc:
    // 0x4548fc: 0x0  nop
    ctx->pc = 0x4548fcu;
    // NOP
label_454900:
    // 0x454900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x454900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_454904:
    // 0x454904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x454904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454908:
    // 0x454908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x454908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45490c:
    // 0x45490c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x45490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_454910:
    // 0x454910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454914:
    // 0x454914: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x454914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_454918:
    // 0x454918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x454918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_45491c:
    // 0x45491c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x45491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_454920:
    // 0x454920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x454920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_454924:
    // 0x454924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x454924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_454928:
    // 0x454928: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x454928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_45492c:
    // 0x45492c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x45492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_454930:
    // 0x454930: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x454930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_454934:
    // 0x454934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x454934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_454938:
    // 0x454938: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x454938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_45493c:
    // 0x45493c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x45493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_454940:
    // 0x454940: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x454940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_454944:
    // 0x454944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x454944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_454948:
    // 0x454948: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x454948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_45494c:
    // 0x45494c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x45494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_454950:
    // 0x454950: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x454950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_454954:
    // 0x454954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x454954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_454958:
    // 0x454958: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x454958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45495c:
    // 0x45495c: 0xc0a997c  jal         func_2A65F0
label_454960:
    if (ctx->pc == 0x454960u) {
        ctx->pc = 0x454960u;
            // 0x454960: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x454964u;
        goto label_454964;
    }
    ctx->pc = 0x45495Cu;
    SET_GPR_U32(ctx, 31, 0x454964u);
    ctx->pc = 0x454960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45495Cu;
            // 0x454960: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454964u; }
        if (ctx->pc != 0x454964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454964u; }
        if (ctx->pc != 0x454964u) { return; }
    }
    ctx->pc = 0x454964u;
label_454964:
    // 0x454964: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x454964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_454968:
    // 0x454968: 0xc0d879c  jal         func_361E70
label_45496c:
    if (ctx->pc == 0x45496Cu) {
        ctx->pc = 0x45496Cu;
            // 0x45496c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454970u;
        goto label_454970;
    }
    ctx->pc = 0x454968u;
    SET_GPR_U32(ctx, 31, 0x454970u);
    ctx->pc = 0x45496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454968u;
            // 0x45496c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454970u; }
        if (ctx->pc != 0x454970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454970u; }
        if (ctx->pc != 0x454970u) { return; }
    }
    ctx->pc = 0x454970u;
label_454970:
    // 0x454970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x454970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_454974:
    // 0x454974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454978:
    // 0x454978: 0x3e00008  jr          $ra
label_45497c:
    if (ctx->pc == 0x45497Cu) {
        ctx->pc = 0x45497Cu;
            // 0x45497c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454980u;
        goto label_454980;
    }
    ctx->pc = 0x454978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454978u;
            // 0x45497c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454980u;
label_454980:
    // 0x454980: 0x8114c94  j           func_453250
label_454984:
    if (ctx->pc == 0x454984u) {
        ctx->pc = 0x454984u;
            // 0x454984: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x454988u;
        goto label_454988;
    }
    ctx->pc = 0x454980u;
    ctx->pc = 0x454984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454980u;
            // 0x454984: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x453250u;
    {
        auto targetFn = runtime->lookupFunction(0x453250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x454988u;
label_454988:
    // 0x454988: 0x0  nop
    ctx->pc = 0x454988u;
    // NOP
label_45498c:
    // 0x45498c: 0x0  nop
    ctx->pc = 0x45498cu;
    // NOP
label_454990:
    // 0x454990: 0x811498c  j           func_452630
label_454994:
    if (ctx->pc == 0x454994u) {
        ctx->pc = 0x454994u;
            // 0x454994: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x454998u;
        goto label_454998;
    }
    ctx->pc = 0x454990u;
    ctx->pc = 0x454994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454990u;
            // 0x454994: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452630u;
    {
        auto targetFn = runtime->lookupFunction(0x452630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x454998u;
label_454998:
    // 0x454998: 0x0  nop
    ctx->pc = 0x454998u;
    // NOP
label_45499c:
    // 0x45499c: 0x0  nop
    ctx->pc = 0x45499cu;
    // NOP
label_4549a0:
    // 0x4549a0: 0x81148cc  j           func_452330
label_4549a4:
    if (ctx->pc == 0x4549A4u) {
        ctx->pc = 0x4549A4u;
            // 0x4549a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4549A8u;
        goto label_4549a8;
    }
    ctx->pc = 0x4549A0u;
    ctx->pc = 0x4549A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4549A0u;
            // 0x4549a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x452330u;
    {
        auto targetFn = runtime->lookupFunction(0x452330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4549A8u;
label_4549a8:
    // 0x4549a8: 0x0  nop
    ctx->pc = 0x4549a8u;
    // NOP
label_4549ac:
    // 0x4549ac: 0x0  nop
    ctx->pc = 0x4549acu;
    // NOP
label_4549b0:
    // 0x4549b0: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x4549b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_4549b4:
    // 0x4549b4: 0x24830a50  addiu       $v1, $a0, 0xA50
    ctx->pc = 0x4549b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_4549b8:
    // 0x4549b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4549bc:
    // 0x4549bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4549bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4549c0:
    // 0x4549c0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4549c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4549c4:
    // 0x4549c4: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4549c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4549c8:
    // 0x4549c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4549c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4549cc:
    // 0x4549cc: 0x3200008  jr          $t9
label_4549d0:
    if (ctx->pc == 0x4549D0u) {
        ctx->pc = 0x4549D4u;
        goto label_4549d4;
    }
    ctx->pc = 0x4549CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4549D4u;
label_4549d4:
    // 0x4549d4: 0x0  nop
    ctx->pc = 0x4549d4u;
    // NOP
label_4549d8:
    // 0x4549d8: 0x0  nop
    ctx->pc = 0x4549d8u;
    // NOP
label_4549dc:
    // 0x4549dc: 0x0  nop
    ctx->pc = 0x4549dcu;
    // NOP
label_4549e0:
    // 0x4549e0: 0x24840a50  addiu       $a0, $a0, 0xA50
    ctx->pc = 0x4549e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_4549e4:
    // 0x4549e4: 0x80eec24  j           func_3BB090
label_4549e8:
    if (ctx->pc == 0x4549E8u) {
        ctx->pc = 0x4549E8u;
            // 0x4549e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4549ECu;
        goto label_4549ec;
    }
    ctx->pc = 0x4549E4u;
    ctx->pc = 0x4549E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4549E4u;
            // 0x4549e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003BB090_0x3bb090(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4549ECu;
label_4549ec:
    // 0x4549ec: 0x0  nop
    ctx->pc = 0x4549ecu;
    // NOP
label_4549f0:
    // 0x4549f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4549f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4549f4:
    // 0x4549f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4549f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4549f8:
    // 0x4549f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4549f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4549fc:
    // 0x4549fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4549fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454a00:
    // 0x454a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x454a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454a04:
    // 0x454a04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_454a08:
    if (ctx->pc == 0x454A08u) {
        ctx->pc = 0x454A08u;
            // 0x454a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454A0Cu;
        goto label_454a0c;
    }
    ctx->pc = 0x454A04u;
    {
        const bool branch_taken_0x454a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x454A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454A04u;
            // 0x454a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a04) {
            ctx->pc = 0x454A38u;
            goto label_454a38;
        }
    }
    ctx->pc = 0x454A0Cu;
label_454a0c:
    // 0x454a0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454a10:
    // 0x454a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454a14:
    // 0x454a14: 0x2442e020  addiu       $v0, $v0, -0x1FE0
    ctx->pc = 0x454a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
label_454a18:
    // 0x454a18: 0xc0f19e4  jal         func_3C6790
label_454a1c:
    if (ctx->pc == 0x454A1Cu) {
        ctx->pc = 0x454A1Cu;
            // 0x454a1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x454A20u;
        goto label_454a20;
    }
    ctx->pc = 0x454A18u;
    SET_GPR_U32(ctx, 31, 0x454A20u);
    ctx->pc = 0x454A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454A18u;
            // 0x454a1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C6790u;
    if (runtime->hasFunction(0x3C6790u)) {
        auto targetFn = runtime->lookupFunction(0x3C6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454A20u; }
        if (ctx->pc != 0x454A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C6790_0x3c6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454A20u; }
        if (ctx->pc != 0x454A20u) { return; }
    }
    ctx->pc = 0x454A20u;
label_454a20:
    // 0x454a20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x454a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_454a24:
    // 0x454a24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x454a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_454a28:
    // 0x454a28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_454a2c:
    if (ctx->pc == 0x454A2Cu) {
        ctx->pc = 0x454A2Cu;
            // 0x454a2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454A30u;
        goto label_454a30;
    }
    ctx->pc = 0x454A28u;
    {
        const bool branch_taken_0x454a28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x454a28) {
            ctx->pc = 0x454A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454A28u;
            // 0x454a2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454A3Cu;
            goto label_454a3c;
        }
    }
    ctx->pc = 0x454A30u;
label_454a30:
    // 0x454a30: 0xc0400a8  jal         func_1002A0
label_454a34:
    if (ctx->pc == 0x454A34u) {
        ctx->pc = 0x454A34u;
            // 0x454a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454A38u;
        goto label_454a38;
    }
    ctx->pc = 0x454A30u;
    SET_GPR_U32(ctx, 31, 0x454A38u);
    ctx->pc = 0x454A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454A30u;
            // 0x454a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454A38u; }
        if (ctx->pc != 0x454A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454A38u; }
        if (ctx->pc != 0x454A38u) { return; }
    }
    ctx->pc = 0x454A38u;
label_454a38:
    // 0x454a38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x454a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_454a3c:
    // 0x454a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x454a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_454a40:
    // 0x454a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454a44:
    // 0x454a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454a48:
    // 0x454a48: 0x3e00008  jr          $ra
label_454a4c:
    if (ctx->pc == 0x454A4Cu) {
        ctx->pc = 0x454A4Cu;
            // 0x454a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454A50u;
        goto label_454a50;
    }
    ctx->pc = 0x454A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454A48u;
            // 0x454a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454A50u;
label_454a50:
    // 0x454a50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x454a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_454a54:
    // 0x454a54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x454a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_454a58:
    // 0x454a58: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x454a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_454a5c:
    // 0x454a5c: 0xa08000c1  sb          $zero, 0xC1($a0)
    ctx->pc = 0x454a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 0));
label_454a60:
    // 0x454a60: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x454a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_454a64:
    // 0x454a64: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x454a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_454a68:
    // 0x454a68: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x454a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_454a6c:
    // 0x454a6c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_454a70:
    if (ctx->pc == 0x454A70u) {
        ctx->pc = 0x454A74u;
        goto label_454a74;
    }
    ctx->pc = 0x454A6Cu;
    {
        const bool branch_taken_0x454a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x454a6c) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454A74u;
label_454a74:
    // 0x454a74: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x454a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_454a78:
    // 0x454a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x454a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_454a7c:
    // 0x454a7c: 0x24a5dc90  addiu       $a1, $a1, -0x2370
    ctx->pc = 0x454a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958224));
label_454a80:
    // 0x454a80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x454a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_454a84:
    // 0x454a84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x454a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_454a88:
    // 0x454a88: 0x600008  jr          $v1
label_454a8c:
    if (ctx->pc == 0x454A8Cu) {
        ctx->pc = 0x454A90u;
        goto label_454a90;
    }
    ctx->pc = 0x454A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x454A90u: goto label_454a90;
            case 0x454AA0u: goto label_454aa0;
            case 0x454AACu: goto label_454aac;
            case 0x454AC0u: goto label_454ac0;
            case 0x454AD0u: goto label_454ad0;
            case 0x454AE4u: goto label_454ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x454A90u;
label_454a90:
    // 0x454a90: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x454a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_454a94:
    // 0x454a94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x454a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_454a98:
    // 0x454a98: 0x10000015  b           . + 4 + (0x15 << 2)
label_454a9c:
    if (ctx->pc == 0x454A9Cu) {
        ctx->pc = 0x454A9Cu;
            // 0x454a9c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x454AA0u;
        goto label_454aa0;
    }
    ctx->pc = 0x454A98u;
    {
        const bool branch_taken_0x454a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454A98u;
            // 0x454a9c: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454a98) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454AA0u;
label_454aa0:
    // 0x454aa0: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x454aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_454aa4:
    // 0x454aa4: 0x10000012  b           . + 4 + (0x12 << 2)
label_454aa8:
    if (ctx->pc == 0x454AA8u) {
        ctx->pc = 0x454AA8u;
            // 0x454aa8: 0xa08000c1  sb          $zero, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x454AACu;
        goto label_454aac;
    }
    ctx->pc = 0x454AA4u;
    {
        const bool branch_taken_0x454aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454AA4u;
            // 0x454aa8: 0xa08000c1  sb          $zero, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454aa4) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454AACu;
label_454aac:
    // 0x454aac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x454aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454ab0:
    // 0x454ab0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x454ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_454ab4:
    // 0x454ab4: 0xa08500c0  sb          $a1, 0xC0($a0)
    ctx->pc = 0x454ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 5));
label_454ab8:
    // 0x454ab8: 0x1000000d  b           . + 4 + (0xD << 2)
label_454abc:
    if (ctx->pc == 0x454ABCu) {
        ctx->pc = 0x454ABCu;
            // 0x454abc: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x454AC0u;
        goto label_454ac0;
    }
    ctx->pc = 0x454AB8u;
    {
        const bool branch_taken_0x454ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454AB8u;
            // 0x454abc: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454ab8) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454AC0u;
label_454ac0:
    // 0x454ac0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x454ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454ac4:
    // 0x454ac4: 0xa08300c0  sb          $v1, 0xC0($a0)
    ctx->pc = 0x454ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 3));
label_454ac8:
    // 0x454ac8: 0x10000009  b           . + 4 + (0x9 << 2)
label_454acc:
    if (ctx->pc == 0x454ACCu) {
        ctx->pc = 0x454ACCu;
            // 0x454acc: 0xa08600c1  sb          $a2, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x454AD0u;
        goto label_454ad0;
    }
    ctx->pc = 0x454AC8u;
    {
        const bool branch_taken_0x454ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454AC8u;
            // 0x454acc: 0xa08600c1  sb          $a2, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454ac8) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454AD0u;
label_454ad0:
    // 0x454ad0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x454ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_454ad4:
    // 0x454ad4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x454ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_454ad8:
    // 0x454ad8: 0xa08500c0  sb          $a1, 0xC0($a0)
    ctx->pc = 0x454ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 5));
label_454adc:
    // 0x454adc: 0x10000004  b           . + 4 + (0x4 << 2)
label_454ae0:
    if (ctx->pc == 0x454AE0u) {
        ctx->pc = 0x454AE0u;
            // 0x454ae0: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x454AE4u;
        goto label_454ae4;
    }
    ctx->pc = 0x454ADCu;
    {
        const bool branch_taken_0x454adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x454AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454ADCu;
            // 0x454ae0: 0xa08300c1  sb          $v1, 0xC1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454adc) {
            ctx->pc = 0x454AF0u;
            goto label_454af0;
        }
    }
    ctx->pc = 0x454AE4u;
label_454ae4:
    // 0x454ae4: 0xa08600c0  sb          $a2, 0xC0($a0)
    ctx->pc = 0x454ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 6));
label_454ae8:
    // 0x454ae8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x454ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_454aec:
    // 0x454aec: 0xa08300c1  sb          $v1, 0xC1($a0)
    ctx->pc = 0x454aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 193), (uint8_t)GPR_U32(ctx, 3));
label_454af0:
    // 0x454af0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x454af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_454af4:
    // 0x454af4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x454af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_454af8:
    // 0x454af8: 0x2463db40  addiu       $v1, $v1, -0x24C0
    ctx->pc = 0x454af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957888));
label_454afc:
    // 0x454afc: 0x24a5db30  addiu       $a1, $a1, -0x24D0
    ctx->pc = 0x454afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
label_454b00:
    // 0x454b00: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x454b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
label_454b04:
    // 0x454b04: 0xac8500b4  sw          $a1, 0xB4($a0)
    ctx->pc = 0x454b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 5));
label_454b08:
    // 0x454b08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x454b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_454b0c:
    // 0x454b0c: 0x8c637c30  lw          $v1, 0x7C30($v1)
    ctx->pc = 0x454b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31792)));
label_454b10:
    // 0x454b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x454b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_454b14:
    // 0x454b14: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x454b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
label_454b18:
    // 0x454b18: 0x3e00008  jr          $ra
label_454b1c:
    if (ctx->pc == 0x454B1Cu) {
        ctx->pc = 0x454B1Cu;
            // 0x454b1c: 0xac8500bc  sw          $a1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
        ctx->pc = 0x454B20u;
        goto label_454b20;
    }
    ctx->pc = 0x454B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454B18u;
            // 0x454b1c: 0xac8500bc  sw          $a1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454B20u;
label_454b20:
    // 0x454b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x454b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_454b24:
    // 0x454b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x454b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_454b28:
    // 0x454b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x454b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_454b2c:
    // 0x454b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_454b30:
    // 0x454b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x454b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_454b34:
    // 0x454b34: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_454b38:
    if (ctx->pc == 0x454B38u) {
        ctx->pc = 0x454B38u;
            // 0x454b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454B3Cu;
        goto label_454b3c;
    }
    ctx->pc = 0x454B34u;
    {
        const bool branch_taken_0x454b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x454B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454B34u;
            // 0x454b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454b34) {
            ctx->pc = 0x454B90u;
            goto label_454b90;
        }
    }
    ctx->pc = 0x454B3Cu;
label_454b3c:
    // 0x454b3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454b40:
    // 0x454b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454b44:
    // 0x454b44: 0x2463e060  addiu       $v1, $v1, -0x1FA0
    ctx->pc = 0x454b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959200));
label_454b48:
    // 0x454b48: 0x2442e098  addiu       $v0, $v0, -0x1F68
    ctx->pc = 0x454b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959256));
label_454b4c:
    // 0x454b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x454b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_454b50:
    // 0x454b50: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_454b54:
    if (ctx->pc == 0x454B54u) {
        ctx->pc = 0x454B54u;
            // 0x454b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x454B58u;
        goto label_454b58;
    }
    ctx->pc = 0x454B50u;
    {
        const bool branch_taken_0x454b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x454B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454B50u;
            // 0x454b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x454b50) {
            ctx->pc = 0x454B78u;
            goto label_454b78;
        }
    }
    ctx->pc = 0x454B58u;
label_454b58:
    // 0x454b58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x454b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_454b5c:
    // 0x454b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x454b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_454b60:
    // 0x454b60: 0x2463e1c0  addiu       $v1, $v1, -0x1E40
    ctx->pc = 0x454b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959552));
label_454b64:
    // 0x454b64: 0x2442e1f8  addiu       $v0, $v0, -0x1E08
    ctx->pc = 0x454b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959608));
label_454b68:
    // 0x454b68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x454b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_454b6c:
    // 0x454b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x454b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_454b70:
    // 0x454b70: 0xc1152ec  jal         func_454BB0
label_454b74:
    if (ctx->pc == 0x454B74u) {
        ctx->pc = 0x454B74u;
            // 0x454b74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x454B78u;
        goto label_454b78;
    }
    ctx->pc = 0x454B70u;
    SET_GPR_U32(ctx, 31, 0x454B78u);
    ctx->pc = 0x454B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454B70u;
            // 0x454b74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x454BB0u;
    if (runtime->hasFunction(0x454BB0u)) {
        auto targetFn = runtime->lookupFunction(0x454BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454B78u; }
        if (ctx->pc != 0x454B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00454BB0_0x454bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454B78u; }
        if (ctx->pc != 0x454B78u) { return; }
    }
    ctx->pc = 0x454B78u;
label_454b78:
    // 0x454b78: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x454b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_454b7c:
    // 0x454b7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x454b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_454b80:
    // 0x454b80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_454b84:
    if (ctx->pc == 0x454B84u) {
        ctx->pc = 0x454B84u;
            // 0x454b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454B88u;
        goto label_454b88;
    }
    ctx->pc = 0x454B80u;
    {
        const bool branch_taken_0x454b80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x454b80) {
            ctx->pc = 0x454B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x454B80u;
            // 0x454b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x454B94u;
            goto label_454b94;
        }
    }
    ctx->pc = 0x454B88u;
label_454b88:
    // 0x454b88: 0xc0400a8  jal         func_1002A0
label_454b8c:
    if (ctx->pc == 0x454B8Cu) {
        ctx->pc = 0x454B8Cu;
            // 0x454b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x454B90u;
        goto label_454b90;
    }
    ctx->pc = 0x454B88u;
    SET_GPR_U32(ctx, 31, 0x454B90u);
    ctx->pc = 0x454B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x454B88u;
            // 0x454b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454B90u; }
        if (ctx->pc != 0x454B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x454B90u; }
        if (ctx->pc != 0x454B90u) { return; }
    }
    ctx->pc = 0x454B90u;
label_454b90:
    // 0x454b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x454b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_454b94:
    // 0x454b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x454b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_454b98:
    // 0x454b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454b9c:
    // 0x454b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454ba0:
    // 0x454ba0: 0x3e00008  jr          $ra
label_454ba4:
    if (ctx->pc == 0x454BA4u) {
        ctx->pc = 0x454BA4u;
            // 0x454ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x454BA8u;
        goto label_454ba8;
    }
    ctx->pc = 0x454BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x454BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x454BA0u;
            // 0x454ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x454BA8u;
label_454ba8:
    // 0x454ba8: 0x0  nop
    ctx->pc = 0x454ba8u;
    // NOP
label_454bac:
    // 0x454bac: 0x0  nop
    ctx->pc = 0x454bacu;
    // NOP
}
