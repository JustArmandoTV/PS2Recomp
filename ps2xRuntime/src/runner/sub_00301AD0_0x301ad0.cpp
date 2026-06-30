#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301AD0
// Address: 0x301ad0 - 0x302490
void sub_00301AD0_0x301ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301AD0_0x301ad0");
#endif

    switch (ctx->pc) {
        case 0x301ad0u: goto label_301ad0;
        case 0x301ad4u: goto label_301ad4;
        case 0x301ad8u: goto label_301ad8;
        case 0x301adcu: goto label_301adc;
        case 0x301ae0u: goto label_301ae0;
        case 0x301ae4u: goto label_301ae4;
        case 0x301ae8u: goto label_301ae8;
        case 0x301aecu: goto label_301aec;
        case 0x301af0u: goto label_301af0;
        case 0x301af4u: goto label_301af4;
        case 0x301af8u: goto label_301af8;
        case 0x301afcu: goto label_301afc;
        case 0x301b00u: goto label_301b00;
        case 0x301b04u: goto label_301b04;
        case 0x301b08u: goto label_301b08;
        case 0x301b0cu: goto label_301b0c;
        case 0x301b10u: goto label_301b10;
        case 0x301b14u: goto label_301b14;
        case 0x301b18u: goto label_301b18;
        case 0x301b1cu: goto label_301b1c;
        case 0x301b20u: goto label_301b20;
        case 0x301b24u: goto label_301b24;
        case 0x301b28u: goto label_301b28;
        case 0x301b2cu: goto label_301b2c;
        case 0x301b30u: goto label_301b30;
        case 0x301b34u: goto label_301b34;
        case 0x301b38u: goto label_301b38;
        case 0x301b3cu: goto label_301b3c;
        case 0x301b40u: goto label_301b40;
        case 0x301b44u: goto label_301b44;
        case 0x301b48u: goto label_301b48;
        case 0x301b4cu: goto label_301b4c;
        case 0x301b50u: goto label_301b50;
        case 0x301b54u: goto label_301b54;
        case 0x301b58u: goto label_301b58;
        case 0x301b5cu: goto label_301b5c;
        case 0x301b60u: goto label_301b60;
        case 0x301b64u: goto label_301b64;
        case 0x301b68u: goto label_301b68;
        case 0x301b6cu: goto label_301b6c;
        case 0x301b70u: goto label_301b70;
        case 0x301b74u: goto label_301b74;
        case 0x301b78u: goto label_301b78;
        case 0x301b7cu: goto label_301b7c;
        case 0x301b80u: goto label_301b80;
        case 0x301b84u: goto label_301b84;
        case 0x301b88u: goto label_301b88;
        case 0x301b8cu: goto label_301b8c;
        case 0x301b90u: goto label_301b90;
        case 0x301b94u: goto label_301b94;
        case 0x301b98u: goto label_301b98;
        case 0x301b9cu: goto label_301b9c;
        case 0x301ba0u: goto label_301ba0;
        case 0x301ba4u: goto label_301ba4;
        case 0x301ba8u: goto label_301ba8;
        case 0x301bacu: goto label_301bac;
        case 0x301bb0u: goto label_301bb0;
        case 0x301bb4u: goto label_301bb4;
        case 0x301bb8u: goto label_301bb8;
        case 0x301bbcu: goto label_301bbc;
        case 0x301bc0u: goto label_301bc0;
        case 0x301bc4u: goto label_301bc4;
        case 0x301bc8u: goto label_301bc8;
        case 0x301bccu: goto label_301bcc;
        case 0x301bd0u: goto label_301bd0;
        case 0x301bd4u: goto label_301bd4;
        case 0x301bd8u: goto label_301bd8;
        case 0x301bdcu: goto label_301bdc;
        case 0x301be0u: goto label_301be0;
        case 0x301be4u: goto label_301be4;
        case 0x301be8u: goto label_301be8;
        case 0x301becu: goto label_301bec;
        case 0x301bf0u: goto label_301bf0;
        case 0x301bf4u: goto label_301bf4;
        case 0x301bf8u: goto label_301bf8;
        case 0x301bfcu: goto label_301bfc;
        case 0x301c00u: goto label_301c00;
        case 0x301c04u: goto label_301c04;
        case 0x301c08u: goto label_301c08;
        case 0x301c0cu: goto label_301c0c;
        case 0x301c10u: goto label_301c10;
        case 0x301c14u: goto label_301c14;
        case 0x301c18u: goto label_301c18;
        case 0x301c1cu: goto label_301c1c;
        case 0x301c20u: goto label_301c20;
        case 0x301c24u: goto label_301c24;
        case 0x301c28u: goto label_301c28;
        case 0x301c2cu: goto label_301c2c;
        case 0x301c30u: goto label_301c30;
        case 0x301c34u: goto label_301c34;
        case 0x301c38u: goto label_301c38;
        case 0x301c3cu: goto label_301c3c;
        case 0x301c40u: goto label_301c40;
        case 0x301c44u: goto label_301c44;
        case 0x301c48u: goto label_301c48;
        case 0x301c4cu: goto label_301c4c;
        case 0x301c50u: goto label_301c50;
        case 0x301c54u: goto label_301c54;
        case 0x301c58u: goto label_301c58;
        case 0x301c5cu: goto label_301c5c;
        case 0x301c60u: goto label_301c60;
        case 0x301c64u: goto label_301c64;
        case 0x301c68u: goto label_301c68;
        case 0x301c6cu: goto label_301c6c;
        case 0x301c70u: goto label_301c70;
        case 0x301c74u: goto label_301c74;
        case 0x301c78u: goto label_301c78;
        case 0x301c7cu: goto label_301c7c;
        case 0x301c80u: goto label_301c80;
        case 0x301c84u: goto label_301c84;
        case 0x301c88u: goto label_301c88;
        case 0x301c8cu: goto label_301c8c;
        case 0x301c90u: goto label_301c90;
        case 0x301c94u: goto label_301c94;
        case 0x301c98u: goto label_301c98;
        case 0x301c9cu: goto label_301c9c;
        case 0x301ca0u: goto label_301ca0;
        case 0x301ca4u: goto label_301ca4;
        case 0x301ca8u: goto label_301ca8;
        case 0x301cacu: goto label_301cac;
        case 0x301cb0u: goto label_301cb0;
        case 0x301cb4u: goto label_301cb4;
        case 0x301cb8u: goto label_301cb8;
        case 0x301cbcu: goto label_301cbc;
        case 0x301cc0u: goto label_301cc0;
        case 0x301cc4u: goto label_301cc4;
        case 0x301cc8u: goto label_301cc8;
        case 0x301cccu: goto label_301ccc;
        case 0x301cd0u: goto label_301cd0;
        case 0x301cd4u: goto label_301cd4;
        case 0x301cd8u: goto label_301cd8;
        case 0x301cdcu: goto label_301cdc;
        case 0x301ce0u: goto label_301ce0;
        case 0x301ce4u: goto label_301ce4;
        case 0x301ce8u: goto label_301ce8;
        case 0x301cecu: goto label_301cec;
        case 0x301cf0u: goto label_301cf0;
        case 0x301cf4u: goto label_301cf4;
        case 0x301cf8u: goto label_301cf8;
        case 0x301cfcu: goto label_301cfc;
        case 0x301d00u: goto label_301d00;
        case 0x301d04u: goto label_301d04;
        case 0x301d08u: goto label_301d08;
        case 0x301d0cu: goto label_301d0c;
        case 0x301d10u: goto label_301d10;
        case 0x301d14u: goto label_301d14;
        case 0x301d18u: goto label_301d18;
        case 0x301d1cu: goto label_301d1c;
        case 0x301d20u: goto label_301d20;
        case 0x301d24u: goto label_301d24;
        case 0x301d28u: goto label_301d28;
        case 0x301d2cu: goto label_301d2c;
        case 0x301d30u: goto label_301d30;
        case 0x301d34u: goto label_301d34;
        case 0x301d38u: goto label_301d38;
        case 0x301d3cu: goto label_301d3c;
        case 0x301d40u: goto label_301d40;
        case 0x301d44u: goto label_301d44;
        case 0x301d48u: goto label_301d48;
        case 0x301d4cu: goto label_301d4c;
        case 0x301d50u: goto label_301d50;
        case 0x301d54u: goto label_301d54;
        case 0x301d58u: goto label_301d58;
        case 0x301d5cu: goto label_301d5c;
        case 0x301d60u: goto label_301d60;
        case 0x301d64u: goto label_301d64;
        case 0x301d68u: goto label_301d68;
        case 0x301d6cu: goto label_301d6c;
        case 0x301d70u: goto label_301d70;
        case 0x301d74u: goto label_301d74;
        case 0x301d78u: goto label_301d78;
        case 0x301d7cu: goto label_301d7c;
        case 0x301d80u: goto label_301d80;
        case 0x301d84u: goto label_301d84;
        case 0x301d88u: goto label_301d88;
        case 0x301d8cu: goto label_301d8c;
        case 0x301d90u: goto label_301d90;
        case 0x301d94u: goto label_301d94;
        case 0x301d98u: goto label_301d98;
        case 0x301d9cu: goto label_301d9c;
        case 0x301da0u: goto label_301da0;
        case 0x301da4u: goto label_301da4;
        case 0x301da8u: goto label_301da8;
        case 0x301dacu: goto label_301dac;
        case 0x301db0u: goto label_301db0;
        case 0x301db4u: goto label_301db4;
        case 0x301db8u: goto label_301db8;
        case 0x301dbcu: goto label_301dbc;
        case 0x301dc0u: goto label_301dc0;
        case 0x301dc4u: goto label_301dc4;
        case 0x301dc8u: goto label_301dc8;
        case 0x301dccu: goto label_301dcc;
        case 0x301dd0u: goto label_301dd0;
        case 0x301dd4u: goto label_301dd4;
        case 0x301dd8u: goto label_301dd8;
        case 0x301ddcu: goto label_301ddc;
        case 0x301de0u: goto label_301de0;
        case 0x301de4u: goto label_301de4;
        case 0x301de8u: goto label_301de8;
        case 0x301decu: goto label_301dec;
        case 0x301df0u: goto label_301df0;
        case 0x301df4u: goto label_301df4;
        case 0x301df8u: goto label_301df8;
        case 0x301dfcu: goto label_301dfc;
        case 0x301e00u: goto label_301e00;
        case 0x301e04u: goto label_301e04;
        case 0x301e08u: goto label_301e08;
        case 0x301e0cu: goto label_301e0c;
        case 0x301e10u: goto label_301e10;
        case 0x301e14u: goto label_301e14;
        case 0x301e18u: goto label_301e18;
        case 0x301e1cu: goto label_301e1c;
        case 0x301e20u: goto label_301e20;
        case 0x301e24u: goto label_301e24;
        case 0x301e28u: goto label_301e28;
        case 0x301e2cu: goto label_301e2c;
        case 0x301e30u: goto label_301e30;
        case 0x301e34u: goto label_301e34;
        case 0x301e38u: goto label_301e38;
        case 0x301e3cu: goto label_301e3c;
        case 0x301e40u: goto label_301e40;
        case 0x301e44u: goto label_301e44;
        case 0x301e48u: goto label_301e48;
        case 0x301e4cu: goto label_301e4c;
        case 0x301e50u: goto label_301e50;
        case 0x301e54u: goto label_301e54;
        case 0x301e58u: goto label_301e58;
        case 0x301e5cu: goto label_301e5c;
        case 0x301e60u: goto label_301e60;
        case 0x301e64u: goto label_301e64;
        case 0x301e68u: goto label_301e68;
        case 0x301e6cu: goto label_301e6c;
        case 0x301e70u: goto label_301e70;
        case 0x301e74u: goto label_301e74;
        case 0x301e78u: goto label_301e78;
        case 0x301e7cu: goto label_301e7c;
        case 0x301e80u: goto label_301e80;
        case 0x301e84u: goto label_301e84;
        case 0x301e88u: goto label_301e88;
        case 0x301e8cu: goto label_301e8c;
        case 0x301e90u: goto label_301e90;
        case 0x301e94u: goto label_301e94;
        case 0x301e98u: goto label_301e98;
        case 0x301e9cu: goto label_301e9c;
        case 0x301ea0u: goto label_301ea0;
        case 0x301ea4u: goto label_301ea4;
        case 0x301ea8u: goto label_301ea8;
        case 0x301eacu: goto label_301eac;
        case 0x301eb0u: goto label_301eb0;
        case 0x301eb4u: goto label_301eb4;
        case 0x301eb8u: goto label_301eb8;
        case 0x301ebcu: goto label_301ebc;
        case 0x301ec0u: goto label_301ec0;
        case 0x301ec4u: goto label_301ec4;
        case 0x301ec8u: goto label_301ec8;
        case 0x301eccu: goto label_301ecc;
        case 0x301ed0u: goto label_301ed0;
        case 0x301ed4u: goto label_301ed4;
        case 0x301ed8u: goto label_301ed8;
        case 0x301edcu: goto label_301edc;
        case 0x301ee0u: goto label_301ee0;
        case 0x301ee4u: goto label_301ee4;
        case 0x301ee8u: goto label_301ee8;
        case 0x301eecu: goto label_301eec;
        case 0x301ef0u: goto label_301ef0;
        case 0x301ef4u: goto label_301ef4;
        case 0x301ef8u: goto label_301ef8;
        case 0x301efcu: goto label_301efc;
        case 0x301f00u: goto label_301f00;
        case 0x301f04u: goto label_301f04;
        case 0x301f08u: goto label_301f08;
        case 0x301f0cu: goto label_301f0c;
        case 0x301f10u: goto label_301f10;
        case 0x301f14u: goto label_301f14;
        case 0x301f18u: goto label_301f18;
        case 0x301f1cu: goto label_301f1c;
        case 0x301f20u: goto label_301f20;
        case 0x301f24u: goto label_301f24;
        case 0x301f28u: goto label_301f28;
        case 0x301f2cu: goto label_301f2c;
        case 0x301f30u: goto label_301f30;
        case 0x301f34u: goto label_301f34;
        case 0x301f38u: goto label_301f38;
        case 0x301f3cu: goto label_301f3c;
        case 0x301f40u: goto label_301f40;
        case 0x301f44u: goto label_301f44;
        case 0x301f48u: goto label_301f48;
        case 0x301f4cu: goto label_301f4c;
        case 0x301f50u: goto label_301f50;
        case 0x301f54u: goto label_301f54;
        case 0x301f58u: goto label_301f58;
        case 0x301f5cu: goto label_301f5c;
        case 0x301f60u: goto label_301f60;
        case 0x301f64u: goto label_301f64;
        case 0x301f68u: goto label_301f68;
        case 0x301f6cu: goto label_301f6c;
        case 0x301f70u: goto label_301f70;
        case 0x301f74u: goto label_301f74;
        case 0x301f78u: goto label_301f78;
        case 0x301f7cu: goto label_301f7c;
        case 0x301f80u: goto label_301f80;
        case 0x301f84u: goto label_301f84;
        case 0x301f88u: goto label_301f88;
        case 0x301f8cu: goto label_301f8c;
        case 0x301f90u: goto label_301f90;
        case 0x301f94u: goto label_301f94;
        case 0x301f98u: goto label_301f98;
        case 0x301f9cu: goto label_301f9c;
        case 0x301fa0u: goto label_301fa0;
        case 0x301fa4u: goto label_301fa4;
        case 0x301fa8u: goto label_301fa8;
        case 0x301facu: goto label_301fac;
        case 0x301fb0u: goto label_301fb0;
        case 0x301fb4u: goto label_301fb4;
        case 0x301fb8u: goto label_301fb8;
        case 0x301fbcu: goto label_301fbc;
        case 0x301fc0u: goto label_301fc0;
        case 0x301fc4u: goto label_301fc4;
        case 0x301fc8u: goto label_301fc8;
        case 0x301fccu: goto label_301fcc;
        case 0x301fd0u: goto label_301fd0;
        case 0x301fd4u: goto label_301fd4;
        case 0x301fd8u: goto label_301fd8;
        case 0x301fdcu: goto label_301fdc;
        case 0x301fe0u: goto label_301fe0;
        case 0x301fe4u: goto label_301fe4;
        case 0x301fe8u: goto label_301fe8;
        case 0x301fecu: goto label_301fec;
        case 0x301ff0u: goto label_301ff0;
        case 0x301ff4u: goto label_301ff4;
        case 0x301ff8u: goto label_301ff8;
        case 0x301ffcu: goto label_301ffc;
        case 0x302000u: goto label_302000;
        case 0x302004u: goto label_302004;
        case 0x302008u: goto label_302008;
        case 0x30200cu: goto label_30200c;
        case 0x302010u: goto label_302010;
        case 0x302014u: goto label_302014;
        case 0x302018u: goto label_302018;
        case 0x30201cu: goto label_30201c;
        case 0x302020u: goto label_302020;
        case 0x302024u: goto label_302024;
        case 0x302028u: goto label_302028;
        case 0x30202cu: goto label_30202c;
        case 0x302030u: goto label_302030;
        case 0x302034u: goto label_302034;
        case 0x302038u: goto label_302038;
        case 0x30203cu: goto label_30203c;
        case 0x302040u: goto label_302040;
        case 0x302044u: goto label_302044;
        case 0x302048u: goto label_302048;
        case 0x30204cu: goto label_30204c;
        case 0x302050u: goto label_302050;
        case 0x302054u: goto label_302054;
        case 0x302058u: goto label_302058;
        case 0x30205cu: goto label_30205c;
        case 0x302060u: goto label_302060;
        case 0x302064u: goto label_302064;
        case 0x302068u: goto label_302068;
        case 0x30206cu: goto label_30206c;
        case 0x302070u: goto label_302070;
        case 0x302074u: goto label_302074;
        case 0x302078u: goto label_302078;
        case 0x30207cu: goto label_30207c;
        case 0x302080u: goto label_302080;
        case 0x302084u: goto label_302084;
        case 0x302088u: goto label_302088;
        case 0x30208cu: goto label_30208c;
        case 0x302090u: goto label_302090;
        case 0x302094u: goto label_302094;
        case 0x302098u: goto label_302098;
        case 0x30209cu: goto label_30209c;
        case 0x3020a0u: goto label_3020a0;
        case 0x3020a4u: goto label_3020a4;
        case 0x3020a8u: goto label_3020a8;
        case 0x3020acu: goto label_3020ac;
        case 0x3020b0u: goto label_3020b0;
        case 0x3020b4u: goto label_3020b4;
        case 0x3020b8u: goto label_3020b8;
        case 0x3020bcu: goto label_3020bc;
        case 0x3020c0u: goto label_3020c0;
        case 0x3020c4u: goto label_3020c4;
        case 0x3020c8u: goto label_3020c8;
        case 0x3020ccu: goto label_3020cc;
        case 0x3020d0u: goto label_3020d0;
        case 0x3020d4u: goto label_3020d4;
        case 0x3020d8u: goto label_3020d8;
        case 0x3020dcu: goto label_3020dc;
        case 0x3020e0u: goto label_3020e0;
        case 0x3020e4u: goto label_3020e4;
        case 0x3020e8u: goto label_3020e8;
        case 0x3020ecu: goto label_3020ec;
        case 0x3020f0u: goto label_3020f0;
        case 0x3020f4u: goto label_3020f4;
        case 0x3020f8u: goto label_3020f8;
        case 0x3020fcu: goto label_3020fc;
        case 0x302100u: goto label_302100;
        case 0x302104u: goto label_302104;
        case 0x302108u: goto label_302108;
        case 0x30210cu: goto label_30210c;
        case 0x302110u: goto label_302110;
        case 0x302114u: goto label_302114;
        case 0x302118u: goto label_302118;
        case 0x30211cu: goto label_30211c;
        case 0x302120u: goto label_302120;
        case 0x302124u: goto label_302124;
        case 0x302128u: goto label_302128;
        case 0x30212cu: goto label_30212c;
        case 0x302130u: goto label_302130;
        case 0x302134u: goto label_302134;
        case 0x302138u: goto label_302138;
        case 0x30213cu: goto label_30213c;
        case 0x302140u: goto label_302140;
        case 0x302144u: goto label_302144;
        case 0x302148u: goto label_302148;
        case 0x30214cu: goto label_30214c;
        case 0x302150u: goto label_302150;
        case 0x302154u: goto label_302154;
        case 0x302158u: goto label_302158;
        case 0x30215cu: goto label_30215c;
        case 0x302160u: goto label_302160;
        case 0x302164u: goto label_302164;
        case 0x302168u: goto label_302168;
        case 0x30216cu: goto label_30216c;
        case 0x302170u: goto label_302170;
        case 0x302174u: goto label_302174;
        case 0x302178u: goto label_302178;
        case 0x30217cu: goto label_30217c;
        case 0x302180u: goto label_302180;
        case 0x302184u: goto label_302184;
        case 0x302188u: goto label_302188;
        case 0x30218cu: goto label_30218c;
        case 0x302190u: goto label_302190;
        case 0x302194u: goto label_302194;
        case 0x302198u: goto label_302198;
        case 0x30219cu: goto label_30219c;
        case 0x3021a0u: goto label_3021a0;
        case 0x3021a4u: goto label_3021a4;
        case 0x3021a8u: goto label_3021a8;
        case 0x3021acu: goto label_3021ac;
        case 0x3021b0u: goto label_3021b0;
        case 0x3021b4u: goto label_3021b4;
        case 0x3021b8u: goto label_3021b8;
        case 0x3021bcu: goto label_3021bc;
        case 0x3021c0u: goto label_3021c0;
        case 0x3021c4u: goto label_3021c4;
        case 0x3021c8u: goto label_3021c8;
        case 0x3021ccu: goto label_3021cc;
        case 0x3021d0u: goto label_3021d0;
        case 0x3021d4u: goto label_3021d4;
        case 0x3021d8u: goto label_3021d8;
        case 0x3021dcu: goto label_3021dc;
        case 0x3021e0u: goto label_3021e0;
        case 0x3021e4u: goto label_3021e4;
        case 0x3021e8u: goto label_3021e8;
        case 0x3021ecu: goto label_3021ec;
        case 0x3021f0u: goto label_3021f0;
        case 0x3021f4u: goto label_3021f4;
        case 0x3021f8u: goto label_3021f8;
        case 0x3021fcu: goto label_3021fc;
        case 0x302200u: goto label_302200;
        case 0x302204u: goto label_302204;
        case 0x302208u: goto label_302208;
        case 0x30220cu: goto label_30220c;
        case 0x302210u: goto label_302210;
        case 0x302214u: goto label_302214;
        case 0x302218u: goto label_302218;
        case 0x30221cu: goto label_30221c;
        case 0x302220u: goto label_302220;
        case 0x302224u: goto label_302224;
        case 0x302228u: goto label_302228;
        case 0x30222cu: goto label_30222c;
        case 0x302230u: goto label_302230;
        case 0x302234u: goto label_302234;
        case 0x302238u: goto label_302238;
        case 0x30223cu: goto label_30223c;
        case 0x302240u: goto label_302240;
        case 0x302244u: goto label_302244;
        case 0x302248u: goto label_302248;
        case 0x30224cu: goto label_30224c;
        case 0x302250u: goto label_302250;
        case 0x302254u: goto label_302254;
        case 0x302258u: goto label_302258;
        case 0x30225cu: goto label_30225c;
        case 0x302260u: goto label_302260;
        case 0x302264u: goto label_302264;
        case 0x302268u: goto label_302268;
        case 0x30226cu: goto label_30226c;
        case 0x302270u: goto label_302270;
        case 0x302274u: goto label_302274;
        case 0x302278u: goto label_302278;
        case 0x30227cu: goto label_30227c;
        case 0x302280u: goto label_302280;
        case 0x302284u: goto label_302284;
        case 0x302288u: goto label_302288;
        case 0x30228cu: goto label_30228c;
        case 0x302290u: goto label_302290;
        case 0x302294u: goto label_302294;
        case 0x302298u: goto label_302298;
        case 0x30229cu: goto label_30229c;
        case 0x3022a0u: goto label_3022a0;
        case 0x3022a4u: goto label_3022a4;
        case 0x3022a8u: goto label_3022a8;
        case 0x3022acu: goto label_3022ac;
        case 0x3022b0u: goto label_3022b0;
        case 0x3022b4u: goto label_3022b4;
        case 0x3022b8u: goto label_3022b8;
        case 0x3022bcu: goto label_3022bc;
        case 0x3022c0u: goto label_3022c0;
        case 0x3022c4u: goto label_3022c4;
        case 0x3022c8u: goto label_3022c8;
        case 0x3022ccu: goto label_3022cc;
        case 0x3022d0u: goto label_3022d0;
        case 0x3022d4u: goto label_3022d4;
        case 0x3022d8u: goto label_3022d8;
        case 0x3022dcu: goto label_3022dc;
        case 0x3022e0u: goto label_3022e0;
        case 0x3022e4u: goto label_3022e4;
        case 0x3022e8u: goto label_3022e8;
        case 0x3022ecu: goto label_3022ec;
        case 0x3022f0u: goto label_3022f0;
        case 0x3022f4u: goto label_3022f4;
        case 0x3022f8u: goto label_3022f8;
        case 0x3022fcu: goto label_3022fc;
        case 0x302300u: goto label_302300;
        case 0x302304u: goto label_302304;
        case 0x302308u: goto label_302308;
        case 0x30230cu: goto label_30230c;
        case 0x302310u: goto label_302310;
        case 0x302314u: goto label_302314;
        case 0x302318u: goto label_302318;
        case 0x30231cu: goto label_30231c;
        case 0x302320u: goto label_302320;
        case 0x302324u: goto label_302324;
        case 0x302328u: goto label_302328;
        case 0x30232cu: goto label_30232c;
        case 0x302330u: goto label_302330;
        case 0x302334u: goto label_302334;
        case 0x302338u: goto label_302338;
        case 0x30233cu: goto label_30233c;
        case 0x302340u: goto label_302340;
        case 0x302344u: goto label_302344;
        case 0x302348u: goto label_302348;
        case 0x30234cu: goto label_30234c;
        case 0x302350u: goto label_302350;
        case 0x302354u: goto label_302354;
        case 0x302358u: goto label_302358;
        case 0x30235cu: goto label_30235c;
        case 0x302360u: goto label_302360;
        case 0x302364u: goto label_302364;
        case 0x302368u: goto label_302368;
        case 0x30236cu: goto label_30236c;
        case 0x302370u: goto label_302370;
        case 0x302374u: goto label_302374;
        case 0x302378u: goto label_302378;
        case 0x30237cu: goto label_30237c;
        case 0x302380u: goto label_302380;
        case 0x302384u: goto label_302384;
        case 0x302388u: goto label_302388;
        case 0x30238cu: goto label_30238c;
        case 0x302390u: goto label_302390;
        case 0x302394u: goto label_302394;
        case 0x302398u: goto label_302398;
        case 0x30239cu: goto label_30239c;
        case 0x3023a0u: goto label_3023a0;
        case 0x3023a4u: goto label_3023a4;
        case 0x3023a8u: goto label_3023a8;
        case 0x3023acu: goto label_3023ac;
        case 0x3023b0u: goto label_3023b0;
        case 0x3023b4u: goto label_3023b4;
        case 0x3023b8u: goto label_3023b8;
        case 0x3023bcu: goto label_3023bc;
        case 0x3023c0u: goto label_3023c0;
        case 0x3023c4u: goto label_3023c4;
        case 0x3023c8u: goto label_3023c8;
        case 0x3023ccu: goto label_3023cc;
        case 0x3023d0u: goto label_3023d0;
        case 0x3023d4u: goto label_3023d4;
        case 0x3023d8u: goto label_3023d8;
        case 0x3023dcu: goto label_3023dc;
        case 0x3023e0u: goto label_3023e0;
        case 0x3023e4u: goto label_3023e4;
        case 0x3023e8u: goto label_3023e8;
        case 0x3023ecu: goto label_3023ec;
        case 0x3023f0u: goto label_3023f0;
        case 0x3023f4u: goto label_3023f4;
        case 0x3023f8u: goto label_3023f8;
        case 0x3023fcu: goto label_3023fc;
        case 0x302400u: goto label_302400;
        case 0x302404u: goto label_302404;
        case 0x302408u: goto label_302408;
        case 0x30240cu: goto label_30240c;
        case 0x302410u: goto label_302410;
        case 0x302414u: goto label_302414;
        case 0x302418u: goto label_302418;
        case 0x30241cu: goto label_30241c;
        case 0x302420u: goto label_302420;
        case 0x302424u: goto label_302424;
        case 0x302428u: goto label_302428;
        case 0x30242cu: goto label_30242c;
        case 0x302430u: goto label_302430;
        case 0x302434u: goto label_302434;
        case 0x302438u: goto label_302438;
        case 0x30243cu: goto label_30243c;
        case 0x302440u: goto label_302440;
        case 0x302444u: goto label_302444;
        case 0x302448u: goto label_302448;
        case 0x30244cu: goto label_30244c;
        case 0x302450u: goto label_302450;
        case 0x302454u: goto label_302454;
        case 0x302458u: goto label_302458;
        case 0x30245cu: goto label_30245c;
        case 0x302460u: goto label_302460;
        case 0x302464u: goto label_302464;
        case 0x302468u: goto label_302468;
        case 0x30246cu: goto label_30246c;
        case 0x302470u: goto label_302470;
        case 0x302474u: goto label_302474;
        case 0x302478u: goto label_302478;
        case 0x30247cu: goto label_30247c;
        case 0x302480u: goto label_302480;
        case 0x302484u: goto label_302484;
        case 0x302488u: goto label_302488;
        case 0x30248cu: goto label_30248c;
        default: break;
    }

    ctx->pc = 0x301ad0u;

label_301ad0:
    // 0x301ad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x301ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_301ad4:
    // 0x301ad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x301ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_301ad8:
    // 0x301ad8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x301ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_301adc:
    // 0x301adc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x301adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_301ae0:
    // 0x301ae0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x301ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_301ae4:
    // 0x301ae4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x301ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_301ae8:
    // 0x301ae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x301ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_301aec:
    // 0x301aec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x301aecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_301af0:
    // 0x301af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301af4:
    // 0x301af4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x301af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_301af8:
    // 0x301af8: 0x8c920d60  lw          $s2, 0xD60($a0)
    ctx->pc = 0x301af8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_301afc:
    // 0x301afc: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x301afcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_301b00:
    // 0x301b00: 0xc0be258  jal         func_2F8960
label_301b04:
    if (ctx->pc == 0x301B04u) {
        ctx->pc = 0x301B04u;
            // 0x301b04: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x301B08u;
        goto label_301b08;
    }
    ctx->pc = 0x301B00u;
    SET_GPR_U32(ctx, 31, 0x301B08u);
    ctx->pc = 0x301B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B00u;
            // 0x301b04: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B08u; }
        if (ctx->pc != 0x301B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B08u; }
        if (ctx->pc != 0x301B08u) { return; }
    }
    ctx->pc = 0x301B08u;
label_301b08:
    // 0x301b08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x301b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301b0c:
    // 0x301b0c: 0x8e0211f0  lw          $v0, 0x11F0($s0)
    ctx->pc = 0x301b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
label_301b10:
    // 0x301b10: 0x4420039  bltzl       $v0, . + 4 + (0x39 << 2)
label_301b14:
    if (ctx->pc == 0x301B14u) {
        ctx->pc = 0x301B14u;
            // 0x301b14: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x301B18u;
        goto label_301b18;
    }
    ctx->pc = 0x301B10u;
    {
        const bool branch_taken_0x301b10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x301b10) {
            ctx->pc = 0x301B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301B10u;
            // 0x301b14: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301BF8u;
            goto label_301bf8;
        }
    }
    ctx->pc = 0x301B18u;
label_301b18:
    // 0x301b18: 0x8223010f  lb          $v1, 0x10F($s1)
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_301b1c:
    // 0x301b1c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_301b20:
    // 0x301b20: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_301b24:
    if (ctx->pc == 0x301B24u) {
        ctx->pc = 0x301B28u;
        goto label_301b28;
    }
    ctx->pc = 0x301B20u;
    {
        const bool branch_taken_0x301b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301b20) {
            ctx->pc = 0x301BF4u;
            goto label_301bf4;
        }
    }
    ctx->pc = 0x301B28u;
label_301b28:
    // 0x301b28: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x301b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_301b2c:
    // 0x301b2c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_301b30:
    if (ctx->pc == 0x301B30u) {
        ctx->pc = 0x301B34u;
        goto label_301b34;
    }
    ctx->pc = 0x301B2Cu;
    {
        const bool branch_taken_0x301b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301b2c) {
            ctx->pc = 0x301BF4u;
            goto label_301bf4;
        }
    }
    ctx->pc = 0x301B34u;
label_301b34:
    // 0x301b34: 0xc0bd780  jal         func_2F5E00
label_301b38:
    if (ctx->pc == 0x301B38u) {
        ctx->pc = 0x301B38u;
            // 0x301b38: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x301B3Cu;
        goto label_301b3c;
    }
    ctx->pc = 0x301B34u;
    SET_GPR_U32(ctx, 31, 0x301B3Cu);
    ctx->pc = 0x301B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B34u;
            // 0x301b38: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B3Cu; }
        if (ctx->pc != 0x301B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B3Cu; }
        if (ctx->pc != 0x301B3Cu) { return; }
    }
    ctx->pc = 0x301B3Cu;
label_301b3c:
    // 0x301b3c: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x301b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_301b40:
    // 0x301b40: 0x5020002b  beql        $at, $zero, . + 4 + (0x2B << 2)
label_301b44:
    if (ctx->pc == 0x301B44u) {
        ctx->pc = 0x301B44u;
            // 0x301b44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x301B48u;
        goto label_301b48;
    }
    ctx->pc = 0x301B40u;
    {
        const bool branch_taken_0x301b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b40) {
            ctx->pc = 0x301B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301B40u;
            // 0x301b44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301BF0u;
            goto label_301bf0;
        }
    }
    ctx->pc = 0x301B48u;
label_301b48:
    // 0x301b48: 0x8e110550  lw          $s1, 0x550($s0)
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_301b4c:
    // 0x301b4c: 0xc0bd778  jal         func_2F5DE0
label_301b50:
    if (ctx->pc == 0x301B50u) {
        ctx->pc = 0x301B50u;
            // 0x301b50: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x301B54u;
        goto label_301b54;
    }
    ctx->pc = 0x301B4Cu;
    SET_GPR_U32(ctx, 31, 0x301B54u);
    ctx->pc = 0x301B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B4Cu;
            // 0x301b50: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DE0u;
    if (runtime->hasFunction(0x2F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B54u; }
        if (ctx->pc != 0x301B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5DE0_0x2f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B54u; }
        if (ctx->pc != 0x301B54u) { return; }
    }
    ctx->pc = 0x301B54u;
label_301b54:
    // 0x301b54: 0x8226010d  lb          $a2, 0x10D($s1)
    ctx->pc = 0x301b54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_301b58:
    // 0x301b58: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x301b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_301b5c:
    // 0x301b5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x301b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301b60:
    // 0x301b60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x301b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301b64:
    // 0x301b64: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x301b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_301b68:
    // 0x301b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301b6c:
    // 0x301b6c: 0xa226010e  sb          $a2, 0x10E($s1)
    ctx->pc = 0x301b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 270), (uint8_t)GPR_U32(ctx, 6));
label_301b70:
    // 0x301b70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x301b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301b74:
    // 0x301b74: 0xa222010d  sb          $v0, 0x10D($s1)
    ctx->pc = 0x301b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 2));
label_301b78:
    // 0x301b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301b7c:
    // 0x301b7c: 0x8222010c  lb          $v0, 0x10C($s1)
    ctx->pc = 0x301b7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_301b80:
    // 0x301b80: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x301b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_301b84:
    // 0x301b84: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x301b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_301b88:
    // 0x301b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_301b8c:
    // 0x301b8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x301b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_301b90:
    // 0x301b90: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_301b94:
    // 0x301b94: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x301b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_301b98:
    // 0x301b98: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x301b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_301b9c:
    // 0x301b9c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x301b9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_301ba0:
    // 0x301ba0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x301ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_301ba4:
    // 0x301ba4: 0x320f809  jalr        $t9
label_301ba8:
    if (ctx->pc == 0x301BA8u) {
        ctx->pc = 0x301BA8u;
            // 0x301ba8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x301BACu;
        goto label_301bac;
    }
    ctx->pc = 0x301BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301BACu);
        ctx->pc = 0x301BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BA4u;
            // 0x301ba8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301BACu; }
            if (ctx->pc != 0x301BACu) { return; }
        }
        }
    }
    ctx->pc = 0x301BACu;
label_301bac:
    // 0x301bac: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x301bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_301bb0:
    // 0x301bb0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x301bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_301bb4:
    // 0x301bb4: 0x820611f0  lb          $a2, 0x11F0($s0)
    ctx->pc = 0x301bb4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4592)));
label_301bb8:
    // 0x301bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x301bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301bbc:
    // 0x301bbc: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x301bbcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_301bc0:
    // 0x301bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301bc4:
    // 0x301bc4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x301bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_301bc8:
    // 0x301bc8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_301bcc:
    // 0x301bcc: 0x320f809  jalr        $t9
label_301bd0:
    if (ctx->pc == 0x301BD0u) {
        ctx->pc = 0x301BD0u;
            // 0x301bd0: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x301BD4u;
        goto label_301bd4;
    }
    ctx->pc = 0x301BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301BD4u);
        ctx->pc = 0x301BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BCCu;
            // 0x301bd0: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301BD4u; }
            if (ctx->pc != 0x301BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x301BD4u;
label_301bd4:
    // 0x301bd4: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x301bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_301bd8:
    // 0x301bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301bdc:
    // 0x301bdc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x301bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301be0:
    // 0x301be0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x301be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_301be4:
    // 0x301be4: 0x320f809  jalr        $t9
label_301be8:
    if (ctx->pc == 0x301BE8u) {
        ctx->pc = 0x301BE8u;
            // 0x301be8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x301BECu;
        goto label_301bec;
    }
    ctx->pc = 0x301BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301BECu);
        ctx->pc = 0x301BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301BE4u;
            // 0x301be8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301BECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301BECu; }
            if (ctx->pc != 0x301BECu) { return; }
        }
        }
    }
    ctx->pc = 0x301BECu;
label_301bec:
    // 0x301bec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x301becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301bf0:
    // 0x301bf0: 0xae0211f0  sw          $v0, 0x11F0($s0)
    ctx->pc = 0x301bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 2));
label_301bf4:
    // 0x301bf4: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x301bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_301bf8:
    // 0x301bf8: 0xc0754b4  jal         func_1D52D0
label_301bfc:
    if (ctx->pc == 0x301BFCu) {
        ctx->pc = 0x301C00u;
        goto label_301c00;
    }
    ctx->pc = 0x301BF8u;
    SET_GPR_U32(ctx, 31, 0x301C00u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C00u; }
        if (ctx->pc != 0x301C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C00u; }
        if (ctx->pc != 0x301C00u) { return; }
    }
    ctx->pc = 0x301C00u;
label_301c00:
    // 0x301c00: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_301c04:
    // 0x301c04: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x301c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_301c08:
    // 0x301c08: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_301c0c:
    if (ctx->pc == 0x301C0Cu) {
        ctx->pc = 0x301C0Cu;
            // 0x301c0c: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->pc = 0x301C10u;
        goto label_301c10;
    }
    ctx->pc = 0x301C08u;
    {
        const bool branch_taken_0x301c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c08) {
            ctx->pc = 0x301C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301C08u;
            // 0x301c0c: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301C44u;
            goto label_301c44;
        }
    }
    ctx->pc = 0x301C10u;
label_301c10:
    // 0x301c10: 0xc6000e00  lwc1        $f0, 0xE00($s0)
    ctx->pc = 0x301c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301c14:
    // 0x301c14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x301c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_301c18:
    // 0x301c18: 0xc455cf10  lwc1        $f21, -0x30F0($v0)
    ctx->pc = 0x301c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_301c1c:
    // 0x301c1c: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x301c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_301c20:
    // 0x301c20: 0xc0754b4  jal         func_1D52D0
label_301c24:
    if (ctx->pc == 0x301C24u) {
        ctx->pc = 0x301C24u;
            // 0x301c24: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x301C28u;
        goto label_301c28;
    }
    ctx->pc = 0x301C20u;
    SET_GPR_U32(ctx, 31, 0x301C28u);
    ctx->pc = 0x301C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C20u;
            // 0x301c24: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C28u; }
        if (ctx->pc != 0x301C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C28u; }
        if (ctx->pc != 0x301C28u) { return; }
    }
    ctx->pc = 0x301C28u;
label_301c28:
    // 0x301c28: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x301c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301c2c:
    // 0x301c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x301c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301c30:
    // 0x301c30: 0x0  nop
    ctx->pc = 0x301c30u;
    // NOP
label_301c34:
    // 0x301c34: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x301c34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_301c38:
    // 0x301c38: 0x4614a81c  madd.s      $f0, $f21, $f20
    ctx->pc = 0x301c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[20]));
label_301c3c:
    // 0x301c3c: 0xe6000de0  swc1        $f0, 0xDE0($s0)
    ctx->pc = 0x301c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
label_301c40:
    // 0x301c40: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x301c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_301c44:
    // 0x301c44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x301c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301c48:
    // 0x301c48: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x301c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_301c4c:
    // 0x301c4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_301c50:
    // 0x301c50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x301c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_301c54:
    // 0x301c54: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x301c54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_301c58:
    // 0x301c58: 0x5062005d  beql        $v1, $v0, . + 4 + (0x5D << 2)
label_301c5c:
    if (ctx->pc == 0x301C5Cu) {
        ctx->pc = 0x301C5Cu;
            // 0x301c5c: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->pc = 0x301C60u;
        goto label_301c60;
    }
    ctx->pc = 0x301C58u;
    {
        const bool branch_taken_0x301c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301c58) {
            ctx->pc = 0x301C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301C58u;
            // 0x301c5c: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301DD0u;
            goto label_301dd0;
        }
    }
    ctx->pc = 0x301C60u;
label_301c60:
    // 0x301c60: 0xc0754b4  jal         func_1D52D0
label_301c64:
    if (ctx->pc == 0x301C64u) {
        ctx->pc = 0x301C64u;
            // 0x301c64: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x301C68u;
        goto label_301c68;
    }
    ctx->pc = 0x301C60u;
    SET_GPR_U32(ctx, 31, 0x301C68u);
    ctx->pc = 0x301C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C60u;
            // 0x301c64: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C68u; }
        if (ctx->pc != 0x301C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C68u; }
        if (ctx->pc != 0x301C68u) { return; }
    }
    ctx->pc = 0x301C68u;
label_301c68:
    // 0x301c68: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x301c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_301c6c:
    // 0x301c6c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x301c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_301c70:
    // 0x301c70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x301c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_301c74:
    // 0x301c74: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_301c78:
    if (ctx->pc == 0x301C78u) {
        ctx->pc = 0x301C78u;
            // 0x301c78: 0xc600118c  lwc1        $f0, 0x118C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x301C7Cu;
        goto label_301c7c;
    }
    ctx->pc = 0x301C74u;
    {
        const bool branch_taken_0x301c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301c74) {
            ctx->pc = 0x301C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301C74u;
            // 0x301c78: 0xc600118c  lwc1        $f0, 0x118C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x301CD4u;
            goto label_301cd4;
        }
    }
    ctx->pc = 0x301C7Cu;
label_301c7c:
    // 0x301c7c: 0xc6140a7c  lwc1        $f20, 0xA7C($s0)
    ctx->pc = 0x301c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301c80:
    // 0x301c80: 0xc0754b4  jal         func_1D52D0
label_301c84:
    if (ctx->pc == 0x301C84u) {
        ctx->pc = 0x301C84u;
            // 0x301c84: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x301C88u;
        goto label_301c88;
    }
    ctx->pc = 0x301C80u;
    SET_GPR_U32(ctx, 31, 0x301C88u);
    ctx->pc = 0x301C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C80u;
            // 0x301c84: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C88u; }
        if (ctx->pc != 0x301C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301C88u; }
        if (ctx->pc != 0x301C88u) { return; }
    }
    ctx->pc = 0x301C88u;
label_301c88:
    // 0x301c88: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x301c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301c8c:
    // 0x301c8c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x301c8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301c90:
    // 0x301c90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_301c94:
    if (ctx->pc == 0x301C94u) {
        ctx->pc = 0x301C98u;
        goto label_301c98;
    }
    ctx->pc = 0x301C90u;
    {
        const bool branch_taken_0x301c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301c90) {
            ctx->pc = 0x301CD0u;
            goto label_301cd0;
        }
    }
    ctx->pc = 0x301C98u;
label_301c98:
    // 0x301c98: 0xc0c0cdc  jal         func_303370
label_301c9c:
    if (ctx->pc == 0x301C9Cu) {
        ctx->pc = 0x301C9Cu;
            // 0x301c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301CA0u;
        goto label_301ca0;
    }
    ctx->pc = 0x301C98u;
    SET_GPR_U32(ctx, 31, 0x301CA0u);
    ctx->pc = 0x301C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301C98u;
            // 0x301c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (runtime->hasFunction(0x303370u)) {
        auto targetFn = runtime->lookupFunction(0x303370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CA0u; }
        if (ctx->pc != 0x301CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303370_0x303370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CA0u; }
        if (ctx->pc != 0x301CA0u) { return; }
    }
    ctx->pc = 0x301CA0u;
label_301ca0:
    // 0x301ca0: 0xc0754b4  jal         func_1D52D0
label_301ca4:
    if (ctx->pc == 0x301CA4u) {
        ctx->pc = 0x301CA4u;
            // 0x301ca4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x301CA8u;
        goto label_301ca8;
    }
    ctx->pc = 0x301CA0u;
    SET_GPR_U32(ctx, 31, 0x301CA8u);
    ctx->pc = 0x301CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301CA0u;
            // 0x301ca4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CA8u; }
        if (ctx->pc != 0x301CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CA8u; }
        if (ctx->pc != 0x301CA8u) { return; }
    }
    ctx->pc = 0x301CA8u;
label_301ca8:
    // 0x301ca8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x301ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301cac:
    // 0x301cac: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x301cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_301cb0:
    // 0x301cb0: 0xc6000a7c  lwc1        $f0, 0xA7C($s0)
    ctx->pc = 0x301cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301cb4:
    // 0x301cb4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x301cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_301cb8:
    // 0x301cb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x301cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_301cbc:
    // 0x301cbc: 0x0  nop
    ctx->pc = 0x301cbcu;
    // NOP
label_301cc0:
    // 0x301cc0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x301cc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_301cc4:
    // 0x301cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_301cc8:
    // 0x301cc8: 0xc0eea24  jal         func_3BA890
label_301ccc:
    if (ctx->pc == 0x301CCCu) {
        ctx->pc = 0x301CCCu;
            // 0x301ccc: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x301CD0u;
        goto label_301cd0;
    }
    ctx->pc = 0x301CC8u;
    SET_GPR_U32(ctx, 31, 0x301CD0u);
    ctx->pc = 0x301CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301CC8u;
            // 0x301ccc: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CD0u; }
        if (ctx->pc != 0x301CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301CD0u; }
        if (ctx->pc != 0x301CD0u) { return; }
    }
    ctx->pc = 0x301CD0u;
label_301cd0:
    // 0x301cd0: 0xc600118c  lwc1        $f0, 0x118C($s0)
    ctx->pc = 0x301cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301cd4:
    // 0x301cd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x301cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301cd8:
    // 0x301cd8: 0x0  nop
    ctx->pc = 0x301cd8u;
    // NOP
label_301cdc:
    // 0x301cdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301ce0:
    // 0x301ce0: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_301ce4:
    if (ctx->pc == 0x301CE4u) {
        ctx->pc = 0x301CE4u;
            // 0x301ce4: 0x8e030d6c  lw          $v1, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->pc = 0x301CE8u;
        goto label_301ce8;
    }
    ctx->pc = 0x301CE0u;
    {
        const bool branch_taken_0x301ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301ce0) {
            ctx->pc = 0x301CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301CE0u;
            // 0x301ce4: 0x8e030d6c  lw          $v1, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301D38u;
            goto label_301d38;
        }
    }
    ctx->pc = 0x301CE8u;
label_301ce8:
    // 0x301ce8: 0xc6000de4  lwc1        $f0, 0xDE4($s0)
    ctx->pc = 0x301ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301cec:
    // 0x301cec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x301cecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301cf0:
    // 0x301cf0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_301cf4:
    if (ctx->pc == 0x301CF4u) {
        ctx->pc = 0x301CF8u;
        goto label_301cf8;
    }
    ctx->pc = 0x301CF0u;
    {
        const bool branch_taken_0x301cf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301cf0) {
            ctx->pc = 0x301D34u;
            goto label_301d34;
        }
    }
    ctx->pc = 0x301CF8u;
label_301cf8:
    // 0x301cf8: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_301cfc:
    // 0x301cfc: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x301cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_301d00:
    // 0x301d00: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_301d04:
    if (ctx->pc == 0x301D04u) {
        ctx->pc = 0x301D04u;
            // 0x301d04: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x301D08u;
        goto label_301d08;
    }
    ctx->pc = 0x301D00u;
    {
        const bool branch_taken_0x301d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d00) {
            ctx->pc = 0x301D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301D00u;
            // 0x301d04: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301D24u;
            goto label_301d24;
        }
    }
    ctx->pc = 0x301D08u;
label_301d08:
    // 0x301d08: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x301d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_301d0c:
    // 0x301d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301d10:
    // 0x301d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301d14:
    // 0x301d14: 0xc0bdf94  jal         func_2F7E50
label_301d18:
    if (ctx->pc == 0x301D18u) {
        ctx->pc = 0x301D18u;
            // 0x301d18: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x301D1Cu;
        goto label_301d1c;
    }
    ctx->pc = 0x301D14u;
    SET_GPR_U32(ctx, 31, 0x301D1Cu);
    ctx->pc = 0x301D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301D14u;
            // 0x301d18: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D1Cu; }
        if (ctx->pc != 0x301D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301D1Cu; }
        if (ctx->pc != 0x301D1Cu) { return; }
    }
    ctx->pc = 0x301D1Cu;
label_301d1c:
    // 0x301d1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_301d20:
    if (ctx->pc == 0x301D20u) {
        ctx->pc = 0x301D24u;
        goto label_301d24;
    }
    ctx->pc = 0x301D1Cu;
    {
        const bool branch_taken_0x301d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d1c) {
            ctx->pc = 0x301D34u;
            goto label_301d34;
        }
    }
    ctx->pc = 0x301D24u;
label_301d24:
    // 0x301d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301d28:
    // 0x301d28: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x301d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_301d2c:
    // 0x301d2c: 0x320f809  jalr        $t9
label_301d30:
    if (ctx->pc == 0x301D30u) {
        ctx->pc = 0x301D30u;
            // 0x301d30: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x301D34u;
        goto label_301d34;
    }
    ctx->pc = 0x301D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301D34u);
        ctx->pc = 0x301D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301D2Cu;
            // 0x301d30: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301D34u; }
            if (ctx->pc != 0x301D34u) { return; }
        }
        }
    }
    ctx->pc = 0x301D34u;
label_301d34:
    // 0x301d34: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x301d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_301d38:
    // 0x301d38: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x301d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_301d3c:
    // 0x301d3c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x301d3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_301d40:
    // 0x301d40: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_301d44:
    if (ctx->pc == 0x301D44u) {
        ctx->pc = 0x301D48u;
        goto label_301d48;
    }
    ctx->pc = 0x301D40u;
    {
        const bool branch_taken_0x301d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301d40) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301D48u;
label_301d48:
    // 0x301d48: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x301d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_301d4c:
    // 0x301d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301d50:
    // 0x301d50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x301d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301d54:
    // 0x301d54: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x301d54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_301d58:
    // 0x301d58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_301d5c:
    // 0x301d5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_301d60:
    // 0x301d60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x301d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_301d64:
    // 0x301d64: 0x90420281  lbu         $v0, 0x281($v0)
    ctx->pc = 0x301d64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
label_301d68:
    // 0x301d68: 0x10460018  beq         $v0, $a2, . + 4 + (0x18 << 2)
label_301d6c:
    if (ctx->pc == 0x301D6Cu) {
        ctx->pc = 0x301D70u;
        goto label_301d70;
    }
    ctx->pc = 0x301D68u;
    {
        const bool branch_taken_0x301d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x301d68) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301D70u;
label_301d70:
    // 0x301d70: 0x8e0211d4  lw          $v0, 0x11D4($s0)
    ctx->pc = 0x301d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4564)));
label_301d74:
    // 0x301d74: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_301d78:
    if (ctx->pc == 0x301D78u) {
        ctx->pc = 0x301D7Cu;
        goto label_301d7c;
    }
    ctx->pc = 0x301D74u;
    {
        const bool branch_taken_0x301d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d74) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301D7Cu;
label_301d7c:
    // 0x301d7c: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_301d80:
    // 0x301d80: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_301d84:
    // 0x301d84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_301d88:
    if (ctx->pc == 0x301D88u) {
        ctx->pc = 0x301D8Cu;
        goto label_301d8c;
    }
    ctx->pc = 0x301D84u;
    {
        const bool branch_taken_0x301d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d84) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301D8Cu;
label_301d8c:
    // 0x301d8c: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x301d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_301d90:
    // 0x301d90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_301d94:
    // 0x301d94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_301d98:
    if (ctx->pc == 0x301D98u) {
        ctx->pc = 0x301D9Cu;
        goto label_301d9c;
    }
    ctx->pc = 0x301D94u;
    {
        const bool branch_taken_0x301d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d94) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301D9Cu;
label_301d9c:
    // 0x301d9c: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x301d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301da0:
    // 0x301da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x301da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301da4:
    // 0x301da4: 0x0  nop
    ctx->pc = 0x301da4u;
    // NOP
label_301da8:
    // 0x301da8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301dac:
    // 0x301dac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_301db0:
    if (ctx->pc == 0x301DB0u) {
        ctx->pc = 0x301DB4u;
        goto label_301db4;
    }
    ctx->pc = 0x301DACu;
    {
        const bool branch_taken_0x301dac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301dac) {
            ctx->pc = 0x301DCCu;
            goto label_301dcc;
        }
    }
    ctx->pc = 0x301DB4u;
label_301db4:
    // 0x301db4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x301db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_301db8:
    // 0x301db8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301dbc:
    // 0x301dbc: 0xc0bdf9c  jal         func_2F7E70
label_301dc0:
    if (ctx->pc == 0x301DC0u) {
        ctx->pc = 0x301DC0u;
            // 0x301dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301DC4u;
        goto label_301dc4;
    }
    ctx->pc = 0x301DBCu;
    SET_GPR_U32(ctx, 31, 0x301DC4u);
    ctx->pc = 0x301DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301DBCu;
            // 0x301dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DC4u; }
        if (ctx->pc != 0x301DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DC4u; }
        if (ctx->pc != 0x301DC4u) { return; }
    }
    ctx->pc = 0x301DC4u;
label_301dc4:
    // 0x301dc4: 0x10000163  b           . + 4 + (0x163 << 2)
label_301dc8:
    if (ctx->pc == 0x301DC8u) {
        ctx->pc = 0x301DC8u;
            // 0x301dc8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x301DCCu;
        goto label_301dcc;
    }
    ctx->pc = 0x301DC4u;
    {
        const bool branch_taken_0x301dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301DC4u;
            // 0x301dc8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301dc4) {
            ctx->pc = 0x302354u;
            goto label_302354;
        }
    }
    ctx->pc = 0x301DCCu;
label_301dcc:
    // 0x301dcc: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x301dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_301dd0:
    // 0x301dd0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x301dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_301dd4:
    // 0x301dd4: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x301dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_301dd8:
    // 0x301dd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x301dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_301ddc:
    // 0x301ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x301ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_301de0:
    // 0x301de0: 0x90640281  lbu         $a0, 0x281($v1)
    ctx->pc = 0x301de0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_301de4:
    // 0x301de4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_301de8:
    if (ctx->pc == 0x301DE8u) {
        ctx->pc = 0x301DECu;
        goto label_301dec;
    }
    ctx->pc = 0x301DE4u;
    {
        const bool branch_taken_0x301de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x301de4) {
            ctx->pc = 0x301DFCu;
            goto label_301dfc;
        }
    }
    ctx->pc = 0x301DECu;
label_301dec:
    // 0x301dec: 0xc0c1334  jal         func_304CD0
label_301df0:
    if (ctx->pc == 0x301DF0u) {
        ctx->pc = 0x301DF0u;
            // 0x301df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301DF4u;
        goto label_301df4;
    }
    ctx->pc = 0x301DECu;
    SET_GPR_U32(ctx, 31, 0x301DF4u);
    ctx->pc = 0x301DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301DECu;
            // 0x301df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304CD0u;
    if (runtime->hasFunction(0x304CD0u)) {
        auto targetFn = runtime->lookupFunction(0x304CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DF4u; }
        if (ctx->pc != 0x301DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304CD0_0x304cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DF4u; }
        if (ctx->pc != 0x301DF4u) { return; }
    }
    ctx->pc = 0x301DF4u;
label_301df4:
    // 0x301df4: 0x10000156  b           . + 4 + (0x156 << 2)
label_301df8:
    if (ctx->pc == 0x301DF8u) {
        ctx->pc = 0x301DFCu;
        goto label_301dfc;
    }
    ctx->pc = 0x301DF4u;
    {
        const bool branch_taken_0x301df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301df4) {
            ctx->pc = 0x302350u;
            goto label_302350;
        }
    }
    ctx->pc = 0x301DFCu;
label_301dfc:
    // 0x301dfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_301e00:
    // 0x301e00: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x301e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_301e04:
    // 0x301e04: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x301e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_301e08:
    // 0x301e08: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_301e0c:
    if (ctx->pc == 0x301E0Cu) {
        ctx->pc = 0x301E0Cu;
            // 0x301e0c: 0x8c510968  lw          $s1, 0x968($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
        ctx->pc = 0x301E10u;
        goto label_301e10;
    }
    ctx->pc = 0x301E08u;
    {
        const bool branch_taken_0x301e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x301E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301E08u;
            // 0x301e0c: 0x8c510968  lw          $s1, 0x968($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e08) {
            ctx->pc = 0x301F1Cu;
            goto label_301f1c;
        }
    }
    ctx->pc = 0x301E10u;
label_301e10:
    // 0x301e10: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x301e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_301e14:
    // 0x301e14: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x301e14u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_301e18:
    // 0x301e18: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_301e1c:
    if (ctx->pc == 0x301E1Cu) {
        ctx->pc = 0x301E1Cu;
            // 0x301e1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301E20u;
        goto label_301e20;
    }
    ctx->pc = 0x301E18u;
    {
        const bool branch_taken_0x301e18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301E18u;
            // 0x301e1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e18) {
            ctx->pc = 0x301E30u;
            goto label_301e30;
        }
    }
    ctx->pc = 0x301E20u;
label_301e20:
    // 0x301e20: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x301e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_301e24:
    // 0x301e24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_301e28:
    if (ctx->pc == 0x301E28u) {
        ctx->pc = 0x301E2Cu;
        goto label_301e2c;
    }
    ctx->pc = 0x301E24u;
    {
        const bool branch_taken_0x301e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e24) {
            ctx->pc = 0x301E30u;
            goto label_301e30;
        }
    }
    ctx->pc = 0x301E2Cu;
label_301e2c:
    // 0x301e2c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x301e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301e30:
    // 0x301e30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_301e34:
    if (ctx->pc == 0x301E34u) {
        ctx->pc = 0x301E38u;
        goto label_301e38;
    }
    ctx->pc = 0x301E30u;
    {
        const bool branch_taken_0x301e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301e30) {
            ctx->pc = 0x301E4Cu;
            goto label_301e4c;
        }
    }
    ctx->pc = 0x301E38u;
label_301e38:
    // 0x301e38: 0xc075eb4  jal         func_1D7AD0
label_301e3c:
    if (ctx->pc == 0x301E3Cu) {
        ctx->pc = 0x301E3Cu;
            // 0x301e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301E40u;
        goto label_301e40;
    }
    ctx->pc = 0x301E38u;
    SET_GPR_U32(ctx, 31, 0x301E40u);
    ctx->pc = 0x301E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301E38u;
            // 0x301e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E40u; }
        if (ctx->pc != 0x301E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E40u; }
        if (ctx->pc != 0x301E40u) { return; }
    }
    ctx->pc = 0x301E40u;
label_301e40:
    // 0x301e40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_301e44:
    if (ctx->pc == 0x301E44u) {
        ctx->pc = 0x301E48u;
        goto label_301e48;
    }
    ctx->pc = 0x301E40u;
    {
        const bool branch_taken_0x301e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301e40) {
            ctx->pc = 0x301E4Cu;
            goto label_301e4c;
        }
    }
    ctx->pc = 0x301E48u;
label_301e48:
    // 0x301e48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x301e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301e4c:
    // 0x301e4c: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_301e50:
    if (ctx->pc == 0x301E50u) {
        ctx->pc = 0x301E50u;
            // 0x301e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301E54u;
        goto label_301e54;
    }
    ctx->pc = 0x301E4Cu;
    {
        const bool branch_taken_0x301e4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x301e4c) {
            ctx->pc = 0x301E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301E4Cu;
            // 0x301e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301E68u;
            goto label_301e68;
        }
    }
    ctx->pc = 0x301E54u;
label_301e54:
    // 0x301e54: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x301e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_301e58:
    // 0x301e58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x301e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301e5c:
    // 0x301e5c: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_301e60:
    if (ctx->pc == 0x301E60u) {
        ctx->pc = 0x301E60u;
            // 0x301e60: 0x8e050d74  lw          $a1, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->pc = 0x301E64u;
        goto label_301e64;
    }
    ctx->pc = 0x301E5Cu;
    {
        const bool branch_taken_0x301e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301e5c) {
            ctx->pc = 0x301E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301E5Cu;
            // 0x301e60: 0x8e050d74  lw          $a1, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301F20u;
            goto label_301f20;
        }
    }
    ctx->pc = 0x301E64u;
label_301e64:
    // 0x301e64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301e68:
    // 0x301e68: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_301e6c:
    if (ctx->pc == 0x301E6Cu) {
        ctx->pc = 0x301E70u;
        goto label_301e70;
    }
    ctx->pc = 0x301E68u;
    {
        const bool branch_taken_0x301e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e68) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301E70u;
label_301e70:
    // 0x301e70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x301e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_301e74:
    // 0x301e74: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
label_301e78:
    if (ctx->pc == 0x301E78u) {
        ctx->pc = 0x301E7Cu;
        goto label_301e7c;
    }
    ctx->pc = 0x301E74u;
    {
        const bool branch_taken_0x301e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301e74) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301E7Cu;
label_301e7c:
    // 0x301e7c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x301e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_301e80:
    // 0x301e80: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
label_301e84:
    if (ctx->pc == 0x301E84u) {
        ctx->pc = 0x301E88u;
        goto label_301e88;
    }
    ctx->pc = 0x301E80u;
    {
        const bool branch_taken_0x301e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301e80) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301E88u;
label_301e88:
    // 0x301e88: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x301e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_301e8c:
    // 0x301e8c: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
label_301e90:
    if (ctx->pc == 0x301E90u) {
        ctx->pc = 0x301E94u;
        goto label_301e94;
    }
    ctx->pc = 0x301E8Cu;
    {
        const bool branch_taken_0x301e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301e8c) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301E94u;
label_301e94:
    // 0x301e94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_301e98:
    // 0x301e98: 0x8c430dc8  lw          $v1, 0xDC8($v0)
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3528)));
label_301e9c:
    // 0x301e9c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_301ea0:
    // 0x301ea0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_301ea4:
    if (ctx->pc == 0x301EA4u) {
        ctx->pc = 0x301EA8u;
        goto label_301ea8;
    }
    ctx->pc = 0x301EA0u;
    {
        const bool branch_taken_0x301ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ea0) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301EA8u;
label_301ea8:
    // 0x301ea8: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x301ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_301eac:
    // 0x301eac: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x301eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_301eb0:
    // 0x301eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301eb4:
    // 0x301eb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301eb8:
    // 0x301eb8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x301eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_301ebc:
    // 0x301ebc: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x301ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_301ec0:
    // 0x301ec0: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_301ec4:
    if (ctx->pc == 0x301EC4u) {
        ctx->pc = 0x301EC4u;
            // 0x301ec4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x301EC8u;
        goto label_301ec8;
    }
    ctx->pc = 0x301EC0u;
    {
        const bool branch_taken_0x301ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x301ec0) {
            ctx->pc = 0x301EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301EC0u;
            // 0x301ec4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301EE0u;
            goto label_301ee0;
        }
    }
    ctx->pc = 0x301EC8u;
label_301ec8:
    // 0x301ec8: 0x90820060  lbu         $v0, 0x60($a0)
    ctx->pc = 0x301ec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_301ecc:
    // 0x301ecc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_301ed0:
    if (ctx->pc == 0x301ED0u) {
        ctx->pc = 0x301ED4u;
        goto label_301ed4;
    }
    ctx->pc = 0x301ECCu;
    {
        const bool branch_taken_0x301ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x301ecc) {
            ctx->pc = 0x301EDCu;
            goto label_301edc;
        }
    }
    ctx->pc = 0x301ED4u;
label_301ed4:
    // 0x301ed4: 0x10000006  b           . + 4 + (0x6 << 2)
label_301ed8:
    if (ctx->pc == 0x301ED8u) {
        ctx->pc = 0x301ED8u;
            // 0x301ed8: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x301EDCu;
        goto label_301edc;
    }
    ctx->pc = 0x301ED4u;
    {
        const bool branch_taken_0x301ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301ED4u;
            // 0x301ed8: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ed4) {
            ctx->pc = 0x301EF0u;
            goto label_301ef0;
        }
    }
    ctx->pc = 0x301EDCu;
label_301edc:
    // 0x301edc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301ee0:
    // 0x301ee0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x301ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_301ee4:
    // 0x301ee4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x301ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_301ee8:
    // 0x301ee8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_301eec:
    if (ctx->pc == 0x301EECu) {
        ctx->pc = 0x301EECu;
            // 0x301eec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x301EF0u;
        goto label_301ef0;
    }
    ctx->pc = 0x301EE8u;
    {
        const bool branch_taken_0x301ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301EE8u;
            // 0x301eec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ee8) {
            ctx->pc = 0x301EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301eb8;
        }
    }
    ctx->pc = 0x301EF0u;
label_301ef0:
    // 0x301ef0: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
label_301ef4:
    if (ctx->pc == 0x301EF4u) {
        ctx->pc = 0x301EF8u;
        goto label_301ef8;
    }
    ctx->pc = 0x301EF0u;
    {
        const bool branch_taken_0x301ef0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x301ef0) {
            ctx->pc = 0x301F1Cu;
            goto label_301f1c;
        }
    }
    ctx->pc = 0x301EF8u;
label_301ef8:
    // 0x301ef8: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x301ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_301efc:
    // 0x301efc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x301efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301f00:
    // 0x301f00: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_301f04:
    if (ctx->pc == 0x301F04u) {
        ctx->pc = 0x301F08u;
        goto label_301f08;
    }
    ctx->pc = 0x301F00u;
    {
        const bool branch_taken_0x301f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x301f00) {
            ctx->pc = 0x301F1Cu;
            goto label_301f1c;
        }
    }
    ctx->pc = 0x301F08u;
label_301f08:
    // 0x301f08: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x301f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_301f0c:
    // 0x301f0c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x301f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_301f10:
    // 0x301f10: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x301f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_301f14:
    // 0x301f14: 0x320f809  jalr        $t9
label_301f18:
    if (ctx->pc == 0x301F18u) {
        ctx->pc = 0x301F1Cu;
        goto label_301f1c;
    }
    ctx->pc = 0x301F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301F1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x301F1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301F1Cu; }
            if (ctx->pc != 0x301F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x301F1Cu;
label_301f1c:
    // 0x301f1c: 0x8e050d74  lw          $a1, 0xD74($s0)
    ctx->pc = 0x301f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_301f20:
    // 0x301f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301f24:
    // 0x301f24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x301f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_301f28:
    // 0x301f28: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x301f28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_301f2c:
    // 0x301f2c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x301f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_301f30:
    // 0x301f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x301f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_301f34:
    // 0x301f34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x301f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_301f38:
    // 0x301f38: 0x90420281  lbu         $v0, 0x281($v0)
    ctx->pc = 0x301f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
label_301f3c:
    // 0x301f3c: 0x50430065  beql        $v0, $v1, . + 4 + (0x65 << 2)
label_301f40:
    if (ctx->pc == 0x301F40u) {
        ctx->pc = 0x301F40u;
            // 0x301f40: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x301F44u;
        goto label_301f44;
    }
    ctx->pc = 0x301F3Cu;
    {
        const bool branch_taken_0x301f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x301f3c) {
            ctx->pc = 0x301F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301F3Cu;
            // 0x301f40: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3020D4u;
            goto label_3020d4;
        }
    }
    ctx->pc = 0x301F44u;
label_301f44:
    // 0x301f44: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x301f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_301f48:
    // 0x301f48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x301f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_301f4c:
    // 0x301f4c: 0x90420281  lbu         $v0, 0x281($v0)
    ctx->pc = 0x301f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
label_301f50:
    // 0x301f50: 0x1443005f  bne         $v0, $v1, . + 4 + (0x5F << 2)
label_301f54:
    if (ctx->pc == 0x301F54u) {
        ctx->pc = 0x301F58u;
        goto label_301f58;
    }
    ctx->pc = 0x301F50u;
    {
        const bool branch_taken_0x301f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x301f50) {
            ctx->pc = 0x3020D0u;
            goto label_3020d0;
        }
    }
    ctx->pc = 0x301F58u;
label_301f58:
    // 0x301f58: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_301f5c:
    if (ctx->pc == 0x301F5Cu) {
        ctx->pc = 0x301F5Cu;
            // 0x301f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301F60u;
        goto label_301f60;
    }
    ctx->pc = 0x301F58u;
    {
        const bool branch_taken_0x301f58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301F58u;
            // 0x301f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f58) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301F60u;
label_301f60:
    // 0x301f60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x301f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_301f64:
    // 0x301f64: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
label_301f68:
    if (ctx->pc == 0x301F68u) {
        ctx->pc = 0x301F6Cu;
        goto label_301f6c;
    }
    ctx->pc = 0x301F64u;
    {
        const bool branch_taken_0x301f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301f64) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301F6Cu;
label_301f6c:
    // 0x301f6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x301f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_301f70:
    // 0x301f70: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
label_301f74:
    if (ctx->pc == 0x301F74u) {
        ctx->pc = 0x301F78u;
        goto label_301f78;
    }
    ctx->pc = 0x301F70u;
    {
        const bool branch_taken_0x301f70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301f70) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301F78u;
label_301f78:
    // 0x301f78: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x301f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_301f7c:
    // 0x301f7c: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
label_301f80:
    if (ctx->pc == 0x301F80u) {
        ctx->pc = 0x301F84u;
        goto label_301f84;
    }
    ctx->pc = 0x301F7Cu;
    {
        const bool branch_taken_0x301f7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x301f7c) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301F84u;
label_301f84:
    // 0x301f84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_301f88:
    // 0x301f88: 0x8c430dc8  lw          $v1, 0xDC8($v0)
    ctx->pc = 0x301f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3528)));
label_301f8c:
    // 0x301f8c: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x301f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_301f90:
    // 0x301f90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_301f94:
    if (ctx->pc == 0x301F94u) {
        ctx->pc = 0x301F98u;
        goto label_301f98;
    }
    ctx->pc = 0x301F90u;
    {
        const bool branch_taken_0x301f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301f90) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301F98u;
label_301f98:
    // 0x301f98: 0x8c670074  lw          $a3, 0x74($v1)
    ctx->pc = 0x301f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_301f9c:
    // 0x301f9c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x301f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_301fa0:
    // 0x301fa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301fa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301fa4:
    // 0x301fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301fa8:
    // 0x301fa8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x301fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_301fac:
    // 0x301fac: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x301facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_301fb0:
    // 0x301fb0: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_301fb4:
    if (ctx->pc == 0x301FB4u) {
        ctx->pc = 0x301FB4u;
            // 0x301fb4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x301FB8u;
        goto label_301fb8;
    }
    ctx->pc = 0x301FB0u;
    {
        const bool branch_taken_0x301fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x301fb0) {
            ctx->pc = 0x301FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301FB0u;
            // 0x301fb4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301FD0u;
            goto label_301fd0;
        }
    }
    ctx->pc = 0x301FB8u;
label_301fb8:
    // 0x301fb8: 0x90820060  lbu         $v0, 0x60($a0)
    ctx->pc = 0x301fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_301fbc:
    // 0x301fbc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_301fc0:
    if (ctx->pc == 0x301FC0u) {
        ctx->pc = 0x301FC4u;
        goto label_301fc4;
    }
    ctx->pc = 0x301FBCu;
    {
        const bool branch_taken_0x301fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x301fbc) {
            ctx->pc = 0x301FCCu;
            goto label_301fcc;
        }
    }
    ctx->pc = 0x301FC4u;
label_301fc4:
    // 0x301fc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_301fc8:
    if (ctx->pc == 0x301FC8u) {
        ctx->pc = 0x301FC8u;
            // 0x301fc8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x301FCCu;
        goto label_301fcc;
    }
    ctx->pc = 0x301FC4u;
    {
        const bool branch_taken_0x301fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301FC4u;
            // 0x301fc8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301fc4) {
            ctx->pc = 0x301FE0u;
            goto label_301fe0;
        }
    }
    ctx->pc = 0x301FCCu;
label_301fcc:
    // 0x301fcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x301fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301fd0:
    // 0x301fd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_301fd4:
    // 0x301fd4: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x301fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_301fd8:
    // 0x301fd8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_301fdc:
    if (ctx->pc == 0x301FDCu) {
        ctx->pc = 0x301FDCu;
            // 0x301fdc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x301FE0u;
        goto label_301fe0;
    }
    ctx->pc = 0x301FD8u;
    {
        const bool branch_taken_0x301fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301FD8u;
            // 0x301fdc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301fd8) {
            ctx->pc = 0x301FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301fa8;
        }
    }
    ctx->pc = 0x301FE0u;
label_301fe0:
    // 0x301fe0: 0x54c0005d  bnel        $a2, $zero, . + 4 + (0x5D << 2)
label_301fe4:
    if (ctx->pc == 0x301FE4u) {
        ctx->pc = 0x301FE4u;
            // 0x301fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301FE8u;
        goto label_301fe8;
    }
    ctx->pc = 0x301FE0u;
    {
        const bool branch_taken_0x301fe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x301fe0) {
            ctx->pc = 0x301FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301FE0u;
            // 0x301fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302158u;
            goto label_302158;
        }
    }
    ctx->pc = 0x301FE8u;
label_301fe8:
    // 0x301fe8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x301fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_301fec:
    // 0x301fec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_301ff0:
    // 0x301ff0: 0xc461c6c0  lwc1        $f1, -0x3940($v1)
    ctx->pc = 0x301ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301ff4:
    // 0x301ff4: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x301ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_301ff8:
    // 0x301ff8: 0xc440c6c8  lwc1        $f0, -0x3938($v0)
    ctx->pc = 0x301ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301ffc:
    // 0x301ffc: 0xe6010ddc  swc1        $f1, 0xDDC($s0)
    ctx->pc = 0x301ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3548), bits); }
label_302000:
    // 0x302000: 0xc0754b4  jal         func_1D52D0
label_302004:
    if (ctx->pc == 0x302004u) {
        ctx->pc = 0x302004u;
            // 0x302004: 0xe6000de0  swc1        $f0, 0xDE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
        ctx->pc = 0x302008u;
        goto label_302008;
    }
    ctx->pc = 0x302000u;
    SET_GPR_U32(ctx, 31, 0x302008u);
    ctx->pc = 0x302004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302000u;
            // 0x302004: 0xe6000de0  swc1        $f0, 0xDE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302008u; }
        if (ctx->pc != 0x302008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302008u; }
        if (ctx->pc != 0x302008u) { return; }
    }
    ctx->pc = 0x302008u;
label_302008:
    // 0x302008: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x302008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_30200c:
    // 0x30200c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x30200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_302010:
    // 0x302010: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_302014:
    // 0x302014: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_302018:
    if (ctx->pc == 0x302018u) {
        ctx->pc = 0x30201Cu;
        goto label_30201c;
    }
    ctx->pc = 0x302014u;
    {
        const bool branch_taken_0x302014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302014) {
            ctx->pc = 0x302154u;
            goto label_302154;
        }
    }
    ctx->pc = 0x30201Cu;
label_30201c:
    // 0x30201c: 0xc0754b4  jal         func_1D52D0
label_302020:
    if (ctx->pc == 0x302020u) {
        ctx->pc = 0x302020u;
            // 0x302020: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x302024u;
        goto label_302024;
    }
    ctx->pc = 0x30201Cu;
    SET_GPR_U32(ctx, 31, 0x302024u);
    ctx->pc = 0x302020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30201Cu;
            // 0x302020: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302024u; }
        if (ctx->pc != 0x302024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302024u; }
        if (ctx->pc != 0x302024u) { return; }
    }
    ctx->pc = 0x302024u;
label_302024:
    // 0x302024: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x302024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302028:
    // 0x302028: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x302028u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_30202c:
    // 0x30202c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30202cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302030:
    // 0x302030: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x302030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_302034:
    // 0x302034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x302034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_302038:
    // 0x302038: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x302038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_30203c:
    // 0x30203c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_302040:
    if (ctx->pc == 0x302040u) {
        ctx->pc = 0x302040u;
            // 0x302040: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x302044u;
        goto label_302044;
    }
    ctx->pc = 0x30203Cu;
    {
        const bool branch_taken_0x30203c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30203Cu;
            // 0x302040: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30203c) {
            ctx->pc = 0x302054u;
            goto label_302054;
        }
    }
    ctx->pc = 0x302044u;
label_302044:
    // 0x302044: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x302044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_302048:
    // 0x302048: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_30204c:
    if (ctx->pc == 0x30204Cu) {
        ctx->pc = 0x302050u;
        goto label_302050;
    }
    ctx->pc = 0x302048u;
    {
        const bool branch_taken_0x302048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x302048) {
            ctx->pc = 0x302054u;
            goto label_302054;
        }
    }
    ctx->pc = 0x302050u;
label_302050:
    // 0x302050: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x302050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302054:
    // 0x302054: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_302058:
    if (ctx->pc == 0x302058u) {
        ctx->pc = 0x30205Cu;
        goto label_30205c;
    }
    ctx->pc = 0x302054u;
    {
        const bool branch_taken_0x302054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302054) {
            ctx->pc = 0x302070u;
            goto label_302070;
        }
    }
    ctx->pc = 0x30205Cu;
label_30205c:
    // 0x30205c: 0xc075eb4  jal         func_1D7AD0
label_302060:
    if (ctx->pc == 0x302060u) {
        ctx->pc = 0x302060u;
            // 0x302060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302064u;
        goto label_302064;
    }
    ctx->pc = 0x30205Cu;
    SET_GPR_U32(ctx, 31, 0x302064u);
    ctx->pc = 0x302060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30205Cu;
            // 0x302060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302064u; }
        if (ctx->pc != 0x302064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302064u; }
        if (ctx->pc != 0x302064u) { return; }
    }
    ctx->pc = 0x302064u;
label_302064:
    // 0x302064: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_302068:
    if (ctx->pc == 0x302068u) {
        ctx->pc = 0x30206Cu;
        goto label_30206c;
    }
    ctx->pc = 0x302064u;
    {
        const bool branch_taken_0x302064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302064) {
            ctx->pc = 0x302070u;
            goto label_302070;
        }
    }
    ctx->pc = 0x30206Cu;
label_30206c:
    // 0x30206c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30206cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302070:
    // 0x302070: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_302074:
    if (ctx->pc == 0x302074u) {
        ctx->pc = 0x302074u;
            // 0x302074: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x302078u;
        goto label_302078;
    }
    ctx->pc = 0x302070u;
    {
        const bool branch_taken_0x302070 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x302070) {
            ctx->pc = 0x302074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302070u;
            // 0x302074: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30208Cu;
            goto label_30208c;
        }
    }
    ctx->pc = 0x302078u;
label_302078:
    // 0x302078: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x302078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_30207c:
    // 0x30207c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_302080:
    // 0x302080: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_302084:
    if (ctx->pc == 0x302084u) {
        ctx->pc = 0x302084u;
            // 0x302084: 0xc6000a7c  lwc1        $f0, 0xA7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x302088u;
        goto label_302088;
    }
    ctx->pc = 0x302080u;
    {
        const bool branch_taken_0x302080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302080) {
            ctx->pc = 0x302084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302080u;
            // 0x302084: 0xc6000a7c  lwc1        $f0, 0xA7C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3020B8u;
            goto label_3020b8;
        }
    }
    ctx->pc = 0x302088u;
label_302088:
    // 0x302088: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x302088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_30208c:
    // 0x30208c: 0xc040180  jal         func_100600
label_302090:
    if (ctx->pc == 0x302090u) {
        ctx->pc = 0x302094u;
        goto label_302094;
    }
    ctx->pc = 0x30208Cu;
    SET_GPR_U32(ctx, 31, 0x302094u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302094u; }
        if (ctx->pc != 0x302094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302094u; }
        if (ctx->pc != 0x302094u) { return; }
    }
    ctx->pc = 0x302094u;
label_302094:
    // 0x302094: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_302098:
    if (ctx->pc == 0x302098u) {
        ctx->pc = 0x30209Cu;
        goto label_30209c;
    }
    ctx->pc = 0x302094u;
    {
        const bool branch_taken_0x302094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302094) {
            ctx->pc = 0x3020B4u;
            goto label_3020b4;
        }
    }
    ctx->pc = 0x30209Cu;
label_30209c:
    // 0x30209c: 0xc6000a7c  lwc1        $f0, 0xA7C($s0)
    ctx->pc = 0x30209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3020a0:
    // 0x3020a0: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3020a4:
    // 0x3020a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3020a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3020a8:
    // 0x3020a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3020a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3020ac:
    // 0x3020ac: 0xc11ebc4  jal         func_47AF10
label_3020b0:
    if (ctx->pc == 0x3020B0u) {
        ctx->pc = 0x3020B0u;
            // 0x3020b0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3020B4u;
        goto label_3020b4;
    }
    ctx->pc = 0x3020ACu;
    SET_GPR_U32(ctx, 31, 0x3020B4u);
    ctx->pc = 0x3020B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020ACu;
            // 0x3020b0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020B4u; }
        if (ctx->pc != 0x3020B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020B4u; }
        if (ctx->pc != 0x3020B4u) { return; }
    }
    ctx->pc = 0x3020B4u;
label_3020b4:
    // 0x3020b4: 0xc6000a7c  lwc1        $f0, 0xA7C($s0)
    ctx->pc = 0x3020b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3020b8:
    // 0x3020b8: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x3020b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_3020bc:
    // 0x3020bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3020bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3020c0:
    // 0x3020c0: 0xc0eea24  jal         func_3BA890
label_3020c4:
    if (ctx->pc == 0x3020C4u) {
        ctx->pc = 0x3020C4u;
            // 0x3020c4: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x3020C8u;
        goto label_3020c8;
    }
    ctx->pc = 0x3020C0u;
    SET_GPR_U32(ctx, 31, 0x3020C8u);
    ctx->pc = 0x3020C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020C0u;
            // 0x3020c4: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020C8u; }
        if (ctx->pc != 0x3020C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020C8u; }
        if (ctx->pc != 0x3020C8u) { return; }
    }
    ctx->pc = 0x3020C8u;
label_3020c8:
    // 0x3020c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_3020cc:
    if (ctx->pc == 0x3020CCu) {
        ctx->pc = 0x3020D0u;
        goto label_3020d0;
    }
    ctx->pc = 0x3020C8u;
    {
        const bool branch_taken_0x3020c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3020c8) {
            ctx->pc = 0x302154u;
            goto label_302154;
        }
    }
    ctx->pc = 0x3020D0u;
label_3020d0:
    // 0x3020d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3020d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3020d4:
    // 0x3020d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3020d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3020d8:
    // 0x3020d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3020d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3020dc:
    // 0x3020dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3020dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3020e0:
    // 0x3020e0: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x3020e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_3020e4:
    // 0x3020e4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_3020e8:
    if (ctx->pc == 0x3020E8u) {
        ctx->pc = 0x3020ECu;
        goto label_3020ec;
    }
    ctx->pc = 0x3020E4u;
    {
        const bool branch_taken_0x3020e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3020e4) {
            ctx->pc = 0x302154u;
            goto label_302154;
        }
    }
    ctx->pc = 0x3020ECu;
label_3020ec:
    // 0x3020ec: 0xc0754b4  jal         func_1D52D0
label_3020f0:
    if (ctx->pc == 0x3020F0u) {
        ctx->pc = 0x3020F0u;
            // 0x3020f0: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x3020F4u;
        goto label_3020f4;
    }
    ctx->pc = 0x3020ECu;
    SET_GPR_U32(ctx, 31, 0x3020F4u);
    ctx->pc = 0x3020F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3020ECu;
            // 0x3020f0: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3020F4u; }
        if (ctx->pc != 0x3020F4u) { return; }
    }
    ctx->pc = 0x3020F4u;
label_3020f4:
    // 0x3020f4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3020f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3020f8:
    // 0x3020f8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3020f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_3020fc:
    // 0x3020fc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_302100:
    if (ctx->pc == 0x302100u) {
        ctx->pc = 0x302100u;
            // 0x302100: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x302104u;
        goto label_302104;
    }
    ctx->pc = 0x3020FCu;
    {
        const bool branch_taken_0x3020fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3020fc) {
            ctx->pc = 0x302100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3020FCu;
            // 0x302100: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302138u;
            goto label_302138;
        }
    }
    ctx->pc = 0x302104u;
label_302104:
    // 0x302104: 0xc6000e00  lwc1        $f0, 0xE00($s0)
    ctx->pc = 0x302104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302108:
    // 0x302108: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x302108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_30210c:
    // 0x30210c: 0xc455cf10  lwc1        $f21, -0x30F0($v0)
    ctx->pc = 0x30210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_302110:
    // 0x302110: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x302110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_302114:
    // 0x302114: 0xc0754b4  jal         func_1D52D0
label_302118:
    if (ctx->pc == 0x302118u) {
        ctx->pc = 0x302118u;
            // 0x302118: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x30211Cu;
        goto label_30211c;
    }
    ctx->pc = 0x302114u;
    SET_GPR_U32(ctx, 31, 0x30211Cu);
    ctx->pc = 0x302118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302114u;
            // 0x302118: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30211Cu; }
        if (ctx->pc != 0x30211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30211Cu; }
        if (ctx->pc != 0x30211Cu) { return; }
    }
    ctx->pc = 0x30211Cu;
label_30211c:
    // 0x30211c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302120:
    // 0x302120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x302120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_302124:
    // 0x302124: 0x0  nop
    ctx->pc = 0x302124u;
    // NOP
label_302128:
    // 0x302128: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x302128u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30212c:
    // 0x30212c: 0x4614a81c  madd.s      $f0, $f21, $f20
    ctx->pc = 0x30212cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[20]));
label_302130:
    // 0x302130: 0x10000005  b           . + 4 + (0x5 << 2)
label_302134:
    if (ctx->pc == 0x302134u) {
        ctx->pc = 0x302134u;
            // 0x302134: 0xe6000de0  swc1        $f0, 0xDE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
        ctx->pc = 0x302138u;
        goto label_302138;
    }
    ctx->pc = 0x302130u;
    {
        const bool branch_taken_0x302130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302130u;
            // 0x302134: 0xe6000de0  swc1        $f0, 0xDE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302130) {
            ctx->pc = 0x302148u;
            goto label_302148;
        }
    }
    ctx->pc = 0x302138u;
label_302138:
    // 0x302138: 0xc0754b4  jal         func_1D52D0
label_30213c:
    if (ctx->pc == 0x30213Cu) {
        ctx->pc = 0x302140u;
        goto label_302140;
    }
    ctx->pc = 0x302138u;
    SET_GPR_U32(ctx, 31, 0x302140u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302140u; }
        if (ctx->pc != 0x302140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302140u; }
        if (ctx->pc != 0x302140u) { return; }
    }
    ctx->pc = 0x302140u;
label_302140:
    // 0x302140: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x302140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302144:
    // 0x302144: 0xe6000de0  swc1        $f0, 0xDE0($s0)
    ctx->pc = 0x302144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
label_302148:
    // 0x302148: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_30214c:
    // 0x30214c: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x30214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_302150:
    // 0x302150: 0xe6000ddc  swc1        $f0, 0xDDC($s0)
    ctx->pc = 0x302150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3548), bits); }
label_302154:
    // 0x302154: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302158:
    // 0x302158: 0xc102a2c  jal         func_40A8B0
label_30215c:
    if (ctx->pc == 0x30215Cu) {
        ctx->pc = 0x302160u;
        goto label_302160;
    }
    ctx->pc = 0x302158u;
    SET_GPR_U32(ctx, 31, 0x302160u);
    ctx->pc = 0x40A8B0u;
    if (runtime->hasFunction(0x40A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x40A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302160u; }
        if (ctx->pc != 0x302160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040A8B0_0x40a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302160u; }
        if (ctx->pc != 0x302160u) { return; }
    }
    ctx->pc = 0x302160u;
label_302160:
    // 0x302160: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x302160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302164:
    // 0x302164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x302164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_302168:
    // 0x302168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30216c:
    // 0x30216c: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_302170:
    // 0x302170: 0x320f809  jalr        $t9
label_302174:
    if (ctx->pc == 0x302174u) {
        ctx->pc = 0x302174u;
            // 0x302174: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302178u;
        goto label_302178;
    }
    ctx->pc = 0x302170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302178u);
        ctx->pc = 0x302174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302170u;
            // 0x302174: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302178u; }
            if (ctx->pc != 0x302178u) { return; }
        }
        }
    }
    ctx->pc = 0x302178u;
label_302178:
    // 0x302178: 0x26040c90  addiu       $a0, $s0, 0xC90
    ctx->pc = 0x302178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
label_30217c:
    // 0x30217c: 0xc1309f8  jal         func_4C27E0
label_302180:
    if (ctx->pc == 0x302180u) {
        ctx->pc = 0x302180u;
            // 0x302180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302184u;
        goto label_302184;
    }
    ctx->pc = 0x30217Cu;
    SET_GPR_U32(ctx, 31, 0x302184u);
    ctx->pc = 0x302180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30217Cu;
            // 0x302180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C27E0u;
    if (runtime->hasFunction(0x4C27E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C27E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302184u; }
        if (ctx->pc != 0x302184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C27E0_0x4c27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302184u; }
        if (ctx->pc != 0x302184u) { return; }
    }
    ctx->pc = 0x302184u;
label_302184:
    // 0x302184: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x302184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_302188:
    // 0x302188: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x302188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_30218c:
    // 0x30218c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_302190:
    if (ctx->pc == 0x302190u) {
        ctx->pc = 0x302194u;
        goto label_302194;
    }
    ctx->pc = 0x30218Cu;
    {
        const bool branch_taken_0x30218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30218c) {
            ctx->pc = 0x3021A4u;
            goto label_3021a4;
        }
    }
    ctx->pc = 0x302194u;
label_302194:
    // 0x302194: 0xc0c1298  jal         func_304A60
label_302198:
    if (ctx->pc == 0x302198u) {
        ctx->pc = 0x302198u;
            // 0x302198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30219Cu;
        goto label_30219c;
    }
    ctx->pc = 0x302194u;
    SET_GPR_U32(ctx, 31, 0x30219Cu);
    ctx->pc = 0x302198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302194u;
            // 0x302198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304A60u;
    if (runtime->hasFunction(0x304A60u)) {
        auto targetFn = runtime->lookupFunction(0x304A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30219Cu; }
        if (ctx->pc != 0x30219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304A60_0x304a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30219Cu; }
        if (ctx->pc != 0x30219Cu) { return; }
    }
    ctx->pc = 0x30219Cu;
label_30219c:
    // 0x30219c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3021a0:
    if (ctx->pc == 0x3021A0u) {
        ctx->pc = 0x3021A4u;
        goto label_3021a4;
    }
    ctx->pc = 0x30219Cu;
    {
        const bool branch_taken_0x30219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30219c) {
            ctx->pc = 0x302350u;
            goto label_302350;
        }
    }
    ctx->pc = 0x3021A4u;
label_3021a4:
    // 0x3021a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3021a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3021a8:
    // 0x3021a8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3021a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3021ac:
    // 0x3021ac: 0xc601117c  lwc1        $f1, 0x117C($s0)
    ctx->pc = 0x3021acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3021b0:
    // 0x3021b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3021b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3021b4:
    // 0x3021b4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3021b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3021b8:
    // 0x3021b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3021b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3021bc:
    // 0x3021bc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3021bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3021c0:
    // 0x3021c0: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_3021c4:
    if (ctx->pc == 0x3021C4u) {
        ctx->pc = 0x3021C4u;
            // 0x3021c4: 0xe600117c  swc1        $f0, 0x117C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4476), bits); }
        ctx->pc = 0x3021C8u;
        goto label_3021c8;
    }
    ctx->pc = 0x3021C0u;
    {
        const bool branch_taken_0x3021c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3021C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3021C0u;
            // 0x3021c4: 0xe600117c  swc1        $f0, 0x117C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021c0) {
            ctx->pc = 0x30230Cu;
            goto label_30230c;
        }
    }
    ctx->pc = 0x3021C8u;
label_3021c8:
    // 0x3021c8: 0x8e110550  lw          $s1, 0x550($s0)
    ctx->pc = 0x3021c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_3021cc:
    // 0x3021cc: 0x8222010f  lb          $v0, 0x10F($s1)
    ctx->pc = 0x3021ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_3021d0:
    // 0x3021d0: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x3021d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_3021d4:
    // 0x3021d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3021d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3021d8:
    // 0x3021d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3021d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3021dc:
    // 0x3021dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3021dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3021e0:
    // 0x3021e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3021e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3021e4:
    // 0x3021e4: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_3021e8:
    if (ctx->pc == 0x3021E8u) {
        ctx->pc = 0x3021E8u;
            // 0x3021e8: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->pc = 0x3021ECu;
        goto label_3021ec;
    }
    ctx->pc = 0x3021E4u;
    {
        const bool branch_taken_0x3021e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3021e4) {
            ctx->pc = 0x3021E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3021E4u;
            // 0x3021e8: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302308u;
            goto label_302308;
        }
    }
    ctx->pc = 0x3021ECu;
label_3021ec:
    // 0x3021ec: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x3021ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3021f0:
    // 0x3021f0: 0x3c023db8  lui         $v0, 0x3DB8
    ctx->pc = 0x3021f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
label_3021f4:
    // 0x3021f4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x3021f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_3021f8:
    // 0x3021f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3021f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3021fc:
    // 0x3021fc: 0x0  nop
    ctx->pc = 0x3021fcu;
    // NOP
label_302200:
    // 0x302200: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x302200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_302204:
    // 0x302204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_302208:
    // 0x302208: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_30220c:
    if (ctx->pc == 0x30220Cu) {
        ctx->pc = 0x302210u;
        goto label_302210;
    }
    ctx->pc = 0x302208u;
    {
        const bool branch_taken_0x302208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302208) {
            ctx->pc = 0x302304u;
            goto label_302304;
        }
    }
    ctx->pc = 0x302210u;
label_302210:
    // 0x302210: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x302210u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_302214:
    // 0x302214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302218:
    // 0x302218: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x302218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_30221c:
    // 0x30221c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x30221cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302220:
    // 0x302220: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302224:
    // 0x302224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302228:
    // 0x302228: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x302228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30222c:
    // 0x30222c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30222cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302230:
    // 0x302230: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x302230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_302234:
    // 0x302234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_302238:
    // 0x302238: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x302238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_30223c:
    // 0x30223c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_302240:
    // 0x302240: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x302240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_302244:
    // 0x302244: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x302244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_302248:
    // 0x302248: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x302248u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_30224c:
    // 0x30224c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x30224cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302250:
    // 0x302250: 0x320f809  jalr        $t9
label_302254:
    if (ctx->pc == 0x302254u) {
        ctx->pc = 0x302254u;
            // 0x302254: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302258u;
        goto label_302258;
    }
    ctx->pc = 0x302250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302258u);
        ctx->pc = 0x302254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302250u;
            // 0x302254: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302258u; }
            if (ctx->pc != 0x302258u) { return; }
        }
        }
    }
    ctx->pc = 0x302258u;
label_302258:
    // 0x302258: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_30225c:
    // 0x30225c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_302260:
    // 0x302260: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x302260u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_302264:
    // 0x302264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_302268:
    // 0x302268: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_30226c:
    // 0x30226c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302270:
    // 0x302270: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302274:
    // 0x302274: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_302278:
    // 0x302278: 0x320f809  jalr        $t9
label_30227c:
    if (ctx->pc == 0x30227Cu) {
        ctx->pc = 0x30227Cu;
            // 0x30227c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302280u;
        goto label_302280;
    }
    ctx->pc = 0x302278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302280u);
        ctx->pc = 0x30227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302278u;
            // 0x30227c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302280u; }
            if (ctx->pc != 0x302280u) { return; }
        }
        }
    }
    ctx->pc = 0x302280u;
label_302280:
    // 0x302280: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_302284:
    // 0x302284: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_302288:
    // 0x302288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30228c:
    // 0x30228c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x30228cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302290:
    // 0x302290: 0x320f809  jalr        $t9
label_302294:
    if (ctx->pc == 0x302294u) {
        ctx->pc = 0x302294u;
            // 0x302294: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302298u;
        goto label_302298;
    }
    ctx->pc = 0x302290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302298u);
        ctx->pc = 0x302294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302290u;
            // 0x302294: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302298u; }
            if (ctx->pc != 0x302298u) { return; }
        }
        }
    }
    ctx->pc = 0x302298u;
label_302298:
    // 0x302298: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x302298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30229c:
    // 0x30229c: 0xc074740  jal         func_1D1D00
label_3022a0:
    if (ctx->pc == 0x3022A0u) {
        ctx->pc = 0x3022A0u;
            // 0x3022a0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x3022A4u;
        goto label_3022a4;
    }
    ctx->pc = 0x30229Cu;
    SET_GPR_U32(ctx, 31, 0x3022A4u);
    ctx->pc = 0x3022A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30229Cu;
            // 0x3022a0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A4u; }
        if (ctx->pc != 0x3022A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3022A4u; }
        if (ctx->pc != 0x3022A4u) { return; }
    }
    ctx->pc = 0x3022A4u;
label_3022a4:
    // 0x3022a4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3022a8:
    if (ctx->pc == 0x3022A8u) {
        ctx->pc = 0x3022A8u;
            // 0x3022a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3022ACu;
        goto label_3022ac;
    }
    ctx->pc = 0x3022A4u;
    {
        const bool branch_taken_0x3022a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3022a4) {
            ctx->pc = 0x3022A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3022A4u;
            // 0x3022a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3022B8u;
            goto label_3022b8;
        }
    }
    ctx->pc = 0x3022ACu;
label_3022ac:
    // 0x3022ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3022acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3022b0:
    // 0x3022b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3022b4:
    if (ctx->pc == 0x3022B4u) {
        ctx->pc = 0x3022B4u;
            // 0x3022b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3022B8u;
        goto label_3022b8;
    }
    ctx->pc = 0x3022B0u;
    {
        const bool branch_taken_0x3022b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3022B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3022B0u;
            // 0x3022b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022b0) {
            ctx->pc = 0x3022D0u;
            goto label_3022d0;
        }
    }
    ctx->pc = 0x3022B8u;
label_3022b8:
    // 0x3022b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3022b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3022bc:
    // 0x3022bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3022bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3022c0:
    // 0x3022c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3022c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3022c4:
    // 0x3022c4: 0x0  nop
    ctx->pc = 0x3022c4u;
    // NOP
label_3022c8:
    // 0x3022c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3022c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3022cc:
    // 0x3022cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3022ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3022d0:
    // 0x3022d0: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3022d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_3022d4:
    // 0x3022d4: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3022d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_3022d8:
    // 0x3022d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3022d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3022dc:
    // 0x3022dc: 0x0  nop
    ctx->pc = 0x3022dcu;
    // NOP
label_3022e0:
    // 0x3022e0: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x3022e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3022e4:
    // 0x3022e4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3022e8:
    // 0x3022e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3022e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3022ec:
    // 0x3022ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3022ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3022f0:
    // 0x3022f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3022f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3022f4:
    // 0x3022f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3022f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3022f8:
    // 0x3022f8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3022f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3022fc:
    // 0x3022fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_302300:
    if (ctx->pc == 0x302300u) {
        ctx->pc = 0x302300u;
            // 0x302300: 0xe600117c  swc1        $f0, 0x117C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4476), bits); }
        ctx->pc = 0x302304u;
        goto label_302304;
    }
    ctx->pc = 0x3022FCu;
    {
        const bool branch_taken_0x3022fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3022FCu;
            // 0x302300: 0xe600117c  swc1        $f0, 0x117C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022fc) {
            ctx->pc = 0x30230Cu;
            goto label_30230c;
        }
    }
    ctx->pc = 0x302304u;
label_302304:
    // 0x302304: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x302304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_302308:
    // 0x302308: 0xae02117c  sw          $v0, 0x117C($s0)
    ctx->pc = 0x302308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4476), GPR_U32(ctx, 2));
label_30230c:
    // 0x30230c: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x30230cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_302310:
    // 0x302310: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x302310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_302314:
    // 0x302314: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x302314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_302318:
    // 0x302318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x302318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30231c:
    // 0x30231c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_302320:
    // 0x302320: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x302320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_302324:
    // 0x302324: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_302328:
    if (ctx->pc == 0x302328u) {
        ctx->pc = 0x302328u;
            // 0x302328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30232Cu;
        goto label_30232c;
    }
    ctx->pc = 0x302324u;
    {
        const bool branch_taken_0x302324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302324) {
            ctx->pc = 0x302328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x302324u;
            // 0x302328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302338u;
            goto label_302338;
        }
    }
    ctx->pc = 0x30232Cu;
label_30232c:
    // 0x30232c: 0xc0c1530  jal         func_3054C0
label_302330:
    if (ctx->pc == 0x302330u) {
        ctx->pc = 0x302330u;
            // 0x302330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302334u;
        goto label_302334;
    }
    ctx->pc = 0x30232Cu;
    SET_GPR_U32(ctx, 31, 0x302334u);
    ctx->pc = 0x302330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30232Cu;
            // 0x302330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3054C0u;
    if (runtime->hasFunction(0x3054C0u)) {
        auto targetFn = runtime->lookupFunction(0x3054C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302334u; }
        if (ctx->pc != 0x302334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003054C0_0x3054c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302334u; }
        if (ctx->pc != 0x302334u) { return; }
    }
    ctx->pc = 0x302334u;
label_302334:
    // 0x302334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302338:
    // 0x302338: 0xc0c14cc  jal         func_305330
label_30233c:
    if (ctx->pc == 0x30233Cu) {
        ctx->pc = 0x302340u;
        goto label_302340;
    }
    ctx->pc = 0x302338u;
    SET_GPR_U32(ctx, 31, 0x302340u);
    ctx->pc = 0x305330u;
    if (runtime->hasFunction(0x305330u)) {
        auto targetFn = runtime->lookupFunction(0x305330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302340u; }
        if (ctx->pc != 0x302340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305330_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302340u; }
        if (ctx->pc != 0x302340u) { return; }
    }
    ctx->pc = 0x302340u;
label_302340:
    // 0x302340: 0xc0c144c  jal         func_305130
label_302344:
    if (ctx->pc == 0x302344u) {
        ctx->pc = 0x302344u;
            // 0x302344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302348u;
        goto label_302348;
    }
    ctx->pc = 0x302340u;
    SET_GPR_U32(ctx, 31, 0x302348u);
    ctx->pc = 0x302344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302340u;
            // 0x302344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302348u; }
        if (ctx->pc != 0x302348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302348u; }
        if (ctx->pc != 0x302348u) { return; }
    }
    ctx->pc = 0x302348u;
label_302348:
    // 0x302348: 0xc0c13c8  jal         func_304F20
label_30234c:
    if (ctx->pc == 0x30234Cu) {
        ctx->pc = 0x30234Cu;
            // 0x30234c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x302350u;
        goto label_302350;
    }
    ctx->pc = 0x302348u;
    SET_GPR_U32(ctx, 31, 0x302350u);
    ctx->pc = 0x30234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302348u;
            // 0x30234c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304F20u;
    if (runtime->hasFunction(0x304F20u)) {
        auto targetFn = runtime->lookupFunction(0x304F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302350u; }
        if (ctx->pc != 0x302350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F20_0x304f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302350u; }
        if (ctx->pc != 0x302350u) { return; }
    }
    ctx->pc = 0x302350u;
label_302350:
    // 0x302350: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x302350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_302354:
    // 0x302354: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x302354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_302358:
    // 0x302358: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x302358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30235c:
    // 0x30235c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_302360:
    // 0x302360: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x302360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_302364:
    // 0x302364: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x302364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302368:
    // 0x302368: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30236c:
    // 0x30236c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302370:
    // 0x302370: 0x3e00008  jr          $ra
label_302374:
    if (ctx->pc == 0x302374u) {
        ctx->pc = 0x302374u;
            // 0x302374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x302378u;
        goto label_302378;
    }
    ctx->pc = 0x302370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302370u;
            // 0x302374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302378u;
label_302378:
    // 0x302378: 0x0  nop
    ctx->pc = 0x302378u;
    // NOP
label_30237c:
    // 0x30237c: 0x0  nop
    ctx->pc = 0x30237cu;
    // NOP
label_302380:
    // 0x302380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_302384:
    // 0x302384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_302388:
    // 0x302388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30238c:
    // 0x30238c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_302390:
    // 0x302390: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_302394:
    // 0x302394: 0xc0c15dc  jal         func_305770
label_302398:
    if (ctx->pc == 0x302398u) {
        ctx->pc = 0x302398u;
            // 0x302398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30239Cu;
        goto label_30239c;
    }
    ctx->pc = 0x302394u;
    SET_GPR_U32(ctx, 31, 0x30239Cu);
    ctx->pc = 0x302398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302394u;
            // 0x302398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30239Cu; }
        if (ctx->pc != 0x30239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30239Cu; }
        if (ctx->pc != 0x30239Cu) { return; }
    }
    ctx->pc = 0x30239Cu;
label_30239c:
    // 0x30239c: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x30239cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3023a0:
    // 0x3023a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3023a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3023a4:
    // 0x3023a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3023a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3023a8:
    // 0x3023a8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x3023a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3023ac:
    // 0x3023ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3023acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3023b0:
    // 0x3023b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3023b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3023b4:
    // 0x3023b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3023b8:
    // 0x3023b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3023b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3023bc:
    // 0x3023bc: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x3023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_3023c0:
    // 0x3023c0: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x3023c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_3023c4:
    // 0x3023c4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_3023c8:
    // 0x3023c8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_3023cc:
    if (ctx->pc == 0x3023CCu) {
        ctx->pc = 0x3023CCu;
            // 0x3023cc: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x3023D0u;
        goto label_3023d0;
    }
    ctx->pc = 0x3023C8u;
    {
        const bool branch_taken_0x3023c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023c8) {
            ctx->pc = 0x3023CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3023C8u;
            // 0x3023cc: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x302430u;
            goto label_302430;
        }
    }
    ctx->pc = 0x3023D0u;
label_3023d0:
    // 0x3023d0: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x3023d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3023d4:
    // 0x3023d4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3023d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_3023d8:
    // 0x3023d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3023d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3023dc:
    // 0x3023dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3023e0:
    if (ctx->pc == 0x3023E0u) {
        ctx->pc = 0x3023E4u;
        goto label_3023e4;
    }
    ctx->pc = 0x3023DCu;
    {
        const bool branch_taken_0x3023dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023dc) {
            ctx->pc = 0x3023F4u;
            goto label_3023f4;
        }
    }
    ctx->pc = 0x3023E4u;
label_3023e4:
    // 0x3023e4: 0xc075eb4  jal         func_1D7AD0
label_3023e8:
    if (ctx->pc == 0x3023E8u) {
        ctx->pc = 0x3023E8u;
            // 0x3023e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3023ECu;
        goto label_3023ec;
    }
    ctx->pc = 0x3023E4u;
    SET_GPR_U32(ctx, 31, 0x3023ECu);
    ctx->pc = 0x3023E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3023E4u;
            // 0x3023e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023ECu; }
        if (ctx->pc != 0x3023ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3023ECu; }
        if (ctx->pc != 0x3023ECu) { return; }
    }
    ctx->pc = 0x3023ECu;
label_3023ec:
    // 0x3023ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3023ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3023f0:
    // 0x3023f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3023f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3023f4:
    // 0x3023f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3023f8:
    if (ctx->pc == 0x3023F8u) {
        ctx->pc = 0x3023FCu;
        goto label_3023fc;
    }
    ctx->pc = 0x3023F4u;
    {
        const bool branch_taken_0x3023f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3023f4) {
            ctx->pc = 0x30242Cu;
            goto label_30242c;
        }
    }
    ctx->pc = 0x3023FCu;
label_3023fc:
    // 0x3023fc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3023fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302400:
    // 0x302400: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x302400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_302404:
    // 0x302404: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302404u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302408:
    // 0x302408: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30240c:
    // 0x30240c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30240cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302410:
    // 0x302410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302414:
    // 0x302414: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302418:
    // 0x302418: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x302418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_30241c:
    // 0x30241c: 0x320f809  jalr        $t9
label_302420:
    if (ctx->pc == 0x302420u) {
        ctx->pc = 0x302420u;
            // 0x302420: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302424u;
        goto label_302424;
    }
    ctx->pc = 0x30241Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302424u);
        ctx->pc = 0x302420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30241Cu;
            // 0x302420: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302424u; }
            if (ctx->pc != 0x302424u) { return; }
        }
        }
    }
    ctx->pc = 0x302424u;
label_302424:
    // 0x302424: 0x1000000c  b           . + 4 + (0xC << 2)
label_302428:
    if (ctx->pc == 0x302428u) {
        ctx->pc = 0x302428u;
            // 0x302428: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x30242Cu;
        goto label_30242c;
    }
    ctx->pc = 0x302424u;
    {
        const bool branch_taken_0x302424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302424u;
            // 0x302428: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302424) {
            ctx->pc = 0x302458u;
            goto label_302458;
        }
    }
    ctx->pc = 0x30242Cu;
label_30242c:
    // 0x30242c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x30242cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302430:
    // 0x302430: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x302430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_302434:
    // 0x302434: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x302434u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_302438:
    // 0x302438: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x302438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30243c:
    // 0x30243c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30243cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_302440:
    // 0x302440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302444:
    // 0x302444: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x302444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_302448:
    // 0x302448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30244c:
    // 0x30244c: 0x320f809  jalr        $t9
label_302450:
    if (ctx->pc == 0x302450u) {
        ctx->pc = 0x302450u;
            // 0x302450: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x302454u;
        goto label_302454;
    }
    ctx->pc = 0x30244Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x302454u);
        ctx->pc = 0x302450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30244Cu;
            // 0x302450: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x302454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x302454u; }
            if (ctx->pc != 0x302454u) { return; }
        }
        }
    }
    ctx->pc = 0x302454u;
label_302454:
    // 0x302454: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x302454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_302458:
    // 0x302458: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x302458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30245c:
    // 0x30245c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302460:
    // 0x302460: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x302460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_302464:
    // 0x302464: 0x320f809  jalr        $t9
label_302468:
    if (ctx->pc == 0x302468u) {
        ctx->pc = 0x302468u;
            // 0x302468: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30246Cu;
        goto label_30246c;
    }
    ctx->pc = 0x302464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30246Cu);
        ctx->pc = 0x302468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302464u;
            // 0x302468: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30246Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30246Cu; }
            if (ctx->pc != 0x30246Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30246Cu;
label_30246c:
    // 0x30246c: 0xc142be8  jal         func_50AFA0
label_302470:
    if (ctx->pc == 0x302470u) {
        ctx->pc = 0x302470u;
            // 0x302470: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->pc = 0x302474u;
        goto label_302474;
    }
    ctx->pc = 0x30246Cu;
    SET_GPR_U32(ctx, 31, 0x302474u);
    ctx->pc = 0x302470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30246Cu;
            // 0x302470: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50AFA0u;
    if (runtime->hasFunction(0x50AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x50AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302474u; }
        if (ctx->pc != 0x302474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050AFA0_0x50afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302474u; }
        if (ctx->pc != 0x302474u) { return; }
    }
    ctx->pc = 0x302474u;
label_302474:
    // 0x302474: 0xc0c0f84  jal         func_303E10
label_302478:
    if (ctx->pc == 0x302478u) {
        ctx->pc = 0x302478u;
            // 0x302478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30247Cu;
        goto label_30247c;
    }
    ctx->pc = 0x302474u;
    SET_GPR_U32(ctx, 31, 0x30247Cu);
    ctx->pc = 0x302478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302474u;
            // 0x302478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30247Cu; }
        if (ctx->pc != 0x30247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30247Cu; }
        if (ctx->pc != 0x30247Cu) { return; }
    }
    ctx->pc = 0x30247Cu;
label_30247c:
    // 0x30247c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_302480:
    // 0x302480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_302484:
    // 0x302484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_302488:
    // 0x302488: 0x3e00008  jr          $ra
label_30248c:
    if (ctx->pc == 0x30248Cu) {
        ctx->pc = 0x30248Cu;
            // 0x30248c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x302490u;
        goto label_fallthrough_0x302488;
    }
    ctx->pc = 0x302488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302488u;
            // 0x30248c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x302488:
    ctx->pc = 0x302490u;
}
