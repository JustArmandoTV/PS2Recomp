#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004748C0
// Address: 0x4748c0 - 0x4751c0
void sub_004748C0_0x4748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004748C0_0x4748c0");
#endif

    switch (ctx->pc) {
        case 0x4748c0u: goto label_4748c0;
        case 0x4748c4u: goto label_4748c4;
        case 0x4748c8u: goto label_4748c8;
        case 0x4748ccu: goto label_4748cc;
        case 0x4748d0u: goto label_4748d0;
        case 0x4748d4u: goto label_4748d4;
        case 0x4748d8u: goto label_4748d8;
        case 0x4748dcu: goto label_4748dc;
        case 0x4748e0u: goto label_4748e0;
        case 0x4748e4u: goto label_4748e4;
        case 0x4748e8u: goto label_4748e8;
        case 0x4748ecu: goto label_4748ec;
        case 0x4748f0u: goto label_4748f0;
        case 0x4748f4u: goto label_4748f4;
        case 0x4748f8u: goto label_4748f8;
        case 0x4748fcu: goto label_4748fc;
        case 0x474900u: goto label_474900;
        case 0x474904u: goto label_474904;
        case 0x474908u: goto label_474908;
        case 0x47490cu: goto label_47490c;
        case 0x474910u: goto label_474910;
        case 0x474914u: goto label_474914;
        case 0x474918u: goto label_474918;
        case 0x47491cu: goto label_47491c;
        case 0x474920u: goto label_474920;
        case 0x474924u: goto label_474924;
        case 0x474928u: goto label_474928;
        case 0x47492cu: goto label_47492c;
        case 0x474930u: goto label_474930;
        case 0x474934u: goto label_474934;
        case 0x474938u: goto label_474938;
        case 0x47493cu: goto label_47493c;
        case 0x474940u: goto label_474940;
        case 0x474944u: goto label_474944;
        case 0x474948u: goto label_474948;
        case 0x47494cu: goto label_47494c;
        case 0x474950u: goto label_474950;
        case 0x474954u: goto label_474954;
        case 0x474958u: goto label_474958;
        case 0x47495cu: goto label_47495c;
        case 0x474960u: goto label_474960;
        case 0x474964u: goto label_474964;
        case 0x474968u: goto label_474968;
        case 0x47496cu: goto label_47496c;
        case 0x474970u: goto label_474970;
        case 0x474974u: goto label_474974;
        case 0x474978u: goto label_474978;
        case 0x47497cu: goto label_47497c;
        case 0x474980u: goto label_474980;
        case 0x474984u: goto label_474984;
        case 0x474988u: goto label_474988;
        case 0x47498cu: goto label_47498c;
        case 0x474990u: goto label_474990;
        case 0x474994u: goto label_474994;
        case 0x474998u: goto label_474998;
        case 0x47499cu: goto label_47499c;
        case 0x4749a0u: goto label_4749a0;
        case 0x4749a4u: goto label_4749a4;
        case 0x4749a8u: goto label_4749a8;
        case 0x4749acu: goto label_4749ac;
        case 0x4749b0u: goto label_4749b0;
        case 0x4749b4u: goto label_4749b4;
        case 0x4749b8u: goto label_4749b8;
        case 0x4749bcu: goto label_4749bc;
        case 0x4749c0u: goto label_4749c0;
        case 0x4749c4u: goto label_4749c4;
        case 0x4749c8u: goto label_4749c8;
        case 0x4749ccu: goto label_4749cc;
        case 0x4749d0u: goto label_4749d0;
        case 0x4749d4u: goto label_4749d4;
        case 0x4749d8u: goto label_4749d8;
        case 0x4749dcu: goto label_4749dc;
        case 0x4749e0u: goto label_4749e0;
        case 0x4749e4u: goto label_4749e4;
        case 0x4749e8u: goto label_4749e8;
        case 0x4749ecu: goto label_4749ec;
        case 0x4749f0u: goto label_4749f0;
        case 0x4749f4u: goto label_4749f4;
        case 0x4749f8u: goto label_4749f8;
        case 0x4749fcu: goto label_4749fc;
        case 0x474a00u: goto label_474a00;
        case 0x474a04u: goto label_474a04;
        case 0x474a08u: goto label_474a08;
        case 0x474a0cu: goto label_474a0c;
        case 0x474a10u: goto label_474a10;
        case 0x474a14u: goto label_474a14;
        case 0x474a18u: goto label_474a18;
        case 0x474a1cu: goto label_474a1c;
        case 0x474a20u: goto label_474a20;
        case 0x474a24u: goto label_474a24;
        case 0x474a28u: goto label_474a28;
        case 0x474a2cu: goto label_474a2c;
        case 0x474a30u: goto label_474a30;
        case 0x474a34u: goto label_474a34;
        case 0x474a38u: goto label_474a38;
        case 0x474a3cu: goto label_474a3c;
        case 0x474a40u: goto label_474a40;
        case 0x474a44u: goto label_474a44;
        case 0x474a48u: goto label_474a48;
        case 0x474a4cu: goto label_474a4c;
        case 0x474a50u: goto label_474a50;
        case 0x474a54u: goto label_474a54;
        case 0x474a58u: goto label_474a58;
        case 0x474a5cu: goto label_474a5c;
        case 0x474a60u: goto label_474a60;
        case 0x474a64u: goto label_474a64;
        case 0x474a68u: goto label_474a68;
        case 0x474a6cu: goto label_474a6c;
        case 0x474a70u: goto label_474a70;
        case 0x474a74u: goto label_474a74;
        case 0x474a78u: goto label_474a78;
        case 0x474a7cu: goto label_474a7c;
        case 0x474a80u: goto label_474a80;
        case 0x474a84u: goto label_474a84;
        case 0x474a88u: goto label_474a88;
        case 0x474a8cu: goto label_474a8c;
        case 0x474a90u: goto label_474a90;
        case 0x474a94u: goto label_474a94;
        case 0x474a98u: goto label_474a98;
        case 0x474a9cu: goto label_474a9c;
        case 0x474aa0u: goto label_474aa0;
        case 0x474aa4u: goto label_474aa4;
        case 0x474aa8u: goto label_474aa8;
        case 0x474aacu: goto label_474aac;
        case 0x474ab0u: goto label_474ab0;
        case 0x474ab4u: goto label_474ab4;
        case 0x474ab8u: goto label_474ab8;
        case 0x474abcu: goto label_474abc;
        case 0x474ac0u: goto label_474ac0;
        case 0x474ac4u: goto label_474ac4;
        case 0x474ac8u: goto label_474ac8;
        case 0x474accu: goto label_474acc;
        case 0x474ad0u: goto label_474ad0;
        case 0x474ad4u: goto label_474ad4;
        case 0x474ad8u: goto label_474ad8;
        case 0x474adcu: goto label_474adc;
        case 0x474ae0u: goto label_474ae0;
        case 0x474ae4u: goto label_474ae4;
        case 0x474ae8u: goto label_474ae8;
        case 0x474aecu: goto label_474aec;
        case 0x474af0u: goto label_474af0;
        case 0x474af4u: goto label_474af4;
        case 0x474af8u: goto label_474af8;
        case 0x474afcu: goto label_474afc;
        case 0x474b00u: goto label_474b00;
        case 0x474b04u: goto label_474b04;
        case 0x474b08u: goto label_474b08;
        case 0x474b0cu: goto label_474b0c;
        case 0x474b10u: goto label_474b10;
        case 0x474b14u: goto label_474b14;
        case 0x474b18u: goto label_474b18;
        case 0x474b1cu: goto label_474b1c;
        case 0x474b20u: goto label_474b20;
        case 0x474b24u: goto label_474b24;
        case 0x474b28u: goto label_474b28;
        case 0x474b2cu: goto label_474b2c;
        case 0x474b30u: goto label_474b30;
        case 0x474b34u: goto label_474b34;
        case 0x474b38u: goto label_474b38;
        case 0x474b3cu: goto label_474b3c;
        case 0x474b40u: goto label_474b40;
        case 0x474b44u: goto label_474b44;
        case 0x474b48u: goto label_474b48;
        case 0x474b4cu: goto label_474b4c;
        case 0x474b50u: goto label_474b50;
        case 0x474b54u: goto label_474b54;
        case 0x474b58u: goto label_474b58;
        case 0x474b5cu: goto label_474b5c;
        case 0x474b60u: goto label_474b60;
        case 0x474b64u: goto label_474b64;
        case 0x474b68u: goto label_474b68;
        case 0x474b6cu: goto label_474b6c;
        case 0x474b70u: goto label_474b70;
        case 0x474b74u: goto label_474b74;
        case 0x474b78u: goto label_474b78;
        case 0x474b7cu: goto label_474b7c;
        case 0x474b80u: goto label_474b80;
        case 0x474b84u: goto label_474b84;
        case 0x474b88u: goto label_474b88;
        case 0x474b8cu: goto label_474b8c;
        case 0x474b90u: goto label_474b90;
        case 0x474b94u: goto label_474b94;
        case 0x474b98u: goto label_474b98;
        case 0x474b9cu: goto label_474b9c;
        case 0x474ba0u: goto label_474ba0;
        case 0x474ba4u: goto label_474ba4;
        case 0x474ba8u: goto label_474ba8;
        case 0x474bacu: goto label_474bac;
        case 0x474bb0u: goto label_474bb0;
        case 0x474bb4u: goto label_474bb4;
        case 0x474bb8u: goto label_474bb8;
        case 0x474bbcu: goto label_474bbc;
        case 0x474bc0u: goto label_474bc0;
        case 0x474bc4u: goto label_474bc4;
        case 0x474bc8u: goto label_474bc8;
        case 0x474bccu: goto label_474bcc;
        case 0x474bd0u: goto label_474bd0;
        case 0x474bd4u: goto label_474bd4;
        case 0x474bd8u: goto label_474bd8;
        case 0x474bdcu: goto label_474bdc;
        case 0x474be0u: goto label_474be0;
        case 0x474be4u: goto label_474be4;
        case 0x474be8u: goto label_474be8;
        case 0x474becu: goto label_474bec;
        case 0x474bf0u: goto label_474bf0;
        case 0x474bf4u: goto label_474bf4;
        case 0x474bf8u: goto label_474bf8;
        case 0x474bfcu: goto label_474bfc;
        case 0x474c00u: goto label_474c00;
        case 0x474c04u: goto label_474c04;
        case 0x474c08u: goto label_474c08;
        case 0x474c0cu: goto label_474c0c;
        case 0x474c10u: goto label_474c10;
        case 0x474c14u: goto label_474c14;
        case 0x474c18u: goto label_474c18;
        case 0x474c1cu: goto label_474c1c;
        case 0x474c20u: goto label_474c20;
        case 0x474c24u: goto label_474c24;
        case 0x474c28u: goto label_474c28;
        case 0x474c2cu: goto label_474c2c;
        case 0x474c30u: goto label_474c30;
        case 0x474c34u: goto label_474c34;
        case 0x474c38u: goto label_474c38;
        case 0x474c3cu: goto label_474c3c;
        case 0x474c40u: goto label_474c40;
        case 0x474c44u: goto label_474c44;
        case 0x474c48u: goto label_474c48;
        case 0x474c4cu: goto label_474c4c;
        case 0x474c50u: goto label_474c50;
        case 0x474c54u: goto label_474c54;
        case 0x474c58u: goto label_474c58;
        case 0x474c5cu: goto label_474c5c;
        case 0x474c60u: goto label_474c60;
        case 0x474c64u: goto label_474c64;
        case 0x474c68u: goto label_474c68;
        case 0x474c6cu: goto label_474c6c;
        case 0x474c70u: goto label_474c70;
        case 0x474c74u: goto label_474c74;
        case 0x474c78u: goto label_474c78;
        case 0x474c7cu: goto label_474c7c;
        case 0x474c80u: goto label_474c80;
        case 0x474c84u: goto label_474c84;
        case 0x474c88u: goto label_474c88;
        case 0x474c8cu: goto label_474c8c;
        case 0x474c90u: goto label_474c90;
        case 0x474c94u: goto label_474c94;
        case 0x474c98u: goto label_474c98;
        case 0x474c9cu: goto label_474c9c;
        case 0x474ca0u: goto label_474ca0;
        case 0x474ca4u: goto label_474ca4;
        case 0x474ca8u: goto label_474ca8;
        case 0x474cacu: goto label_474cac;
        case 0x474cb0u: goto label_474cb0;
        case 0x474cb4u: goto label_474cb4;
        case 0x474cb8u: goto label_474cb8;
        case 0x474cbcu: goto label_474cbc;
        case 0x474cc0u: goto label_474cc0;
        case 0x474cc4u: goto label_474cc4;
        case 0x474cc8u: goto label_474cc8;
        case 0x474cccu: goto label_474ccc;
        case 0x474cd0u: goto label_474cd0;
        case 0x474cd4u: goto label_474cd4;
        case 0x474cd8u: goto label_474cd8;
        case 0x474cdcu: goto label_474cdc;
        case 0x474ce0u: goto label_474ce0;
        case 0x474ce4u: goto label_474ce4;
        case 0x474ce8u: goto label_474ce8;
        case 0x474cecu: goto label_474cec;
        case 0x474cf0u: goto label_474cf0;
        case 0x474cf4u: goto label_474cf4;
        case 0x474cf8u: goto label_474cf8;
        case 0x474cfcu: goto label_474cfc;
        case 0x474d00u: goto label_474d00;
        case 0x474d04u: goto label_474d04;
        case 0x474d08u: goto label_474d08;
        case 0x474d0cu: goto label_474d0c;
        case 0x474d10u: goto label_474d10;
        case 0x474d14u: goto label_474d14;
        case 0x474d18u: goto label_474d18;
        case 0x474d1cu: goto label_474d1c;
        case 0x474d20u: goto label_474d20;
        case 0x474d24u: goto label_474d24;
        case 0x474d28u: goto label_474d28;
        case 0x474d2cu: goto label_474d2c;
        case 0x474d30u: goto label_474d30;
        case 0x474d34u: goto label_474d34;
        case 0x474d38u: goto label_474d38;
        case 0x474d3cu: goto label_474d3c;
        case 0x474d40u: goto label_474d40;
        case 0x474d44u: goto label_474d44;
        case 0x474d48u: goto label_474d48;
        case 0x474d4cu: goto label_474d4c;
        case 0x474d50u: goto label_474d50;
        case 0x474d54u: goto label_474d54;
        case 0x474d58u: goto label_474d58;
        case 0x474d5cu: goto label_474d5c;
        case 0x474d60u: goto label_474d60;
        case 0x474d64u: goto label_474d64;
        case 0x474d68u: goto label_474d68;
        case 0x474d6cu: goto label_474d6c;
        case 0x474d70u: goto label_474d70;
        case 0x474d74u: goto label_474d74;
        case 0x474d78u: goto label_474d78;
        case 0x474d7cu: goto label_474d7c;
        case 0x474d80u: goto label_474d80;
        case 0x474d84u: goto label_474d84;
        case 0x474d88u: goto label_474d88;
        case 0x474d8cu: goto label_474d8c;
        case 0x474d90u: goto label_474d90;
        case 0x474d94u: goto label_474d94;
        case 0x474d98u: goto label_474d98;
        case 0x474d9cu: goto label_474d9c;
        case 0x474da0u: goto label_474da0;
        case 0x474da4u: goto label_474da4;
        case 0x474da8u: goto label_474da8;
        case 0x474dacu: goto label_474dac;
        case 0x474db0u: goto label_474db0;
        case 0x474db4u: goto label_474db4;
        case 0x474db8u: goto label_474db8;
        case 0x474dbcu: goto label_474dbc;
        case 0x474dc0u: goto label_474dc0;
        case 0x474dc4u: goto label_474dc4;
        case 0x474dc8u: goto label_474dc8;
        case 0x474dccu: goto label_474dcc;
        case 0x474dd0u: goto label_474dd0;
        case 0x474dd4u: goto label_474dd4;
        case 0x474dd8u: goto label_474dd8;
        case 0x474ddcu: goto label_474ddc;
        case 0x474de0u: goto label_474de0;
        case 0x474de4u: goto label_474de4;
        case 0x474de8u: goto label_474de8;
        case 0x474decu: goto label_474dec;
        case 0x474df0u: goto label_474df0;
        case 0x474df4u: goto label_474df4;
        case 0x474df8u: goto label_474df8;
        case 0x474dfcu: goto label_474dfc;
        case 0x474e00u: goto label_474e00;
        case 0x474e04u: goto label_474e04;
        case 0x474e08u: goto label_474e08;
        case 0x474e0cu: goto label_474e0c;
        case 0x474e10u: goto label_474e10;
        case 0x474e14u: goto label_474e14;
        case 0x474e18u: goto label_474e18;
        case 0x474e1cu: goto label_474e1c;
        case 0x474e20u: goto label_474e20;
        case 0x474e24u: goto label_474e24;
        case 0x474e28u: goto label_474e28;
        case 0x474e2cu: goto label_474e2c;
        case 0x474e30u: goto label_474e30;
        case 0x474e34u: goto label_474e34;
        case 0x474e38u: goto label_474e38;
        case 0x474e3cu: goto label_474e3c;
        case 0x474e40u: goto label_474e40;
        case 0x474e44u: goto label_474e44;
        case 0x474e48u: goto label_474e48;
        case 0x474e4cu: goto label_474e4c;
        case 0x474e50u: goto label_474e50;
        case 0x474e54u: goto label_474e54;
        case 0x474e58u: goto label_474e58;
        case 0x474e5cu: goto label_474e5c;
        case 0x474e60u: goto label_474e60;
        case 0x474e64u: goto label_474e64;
        case 0x474e68u: goto label_474e68;
        case 0x474e6cu: goto label_474e6c;
        case 0x474e70u: goto label_474e70;
        case 0x474e74u: goto label_474e74;
        case 0x474e78u: goto label_474e78;
        case 0x474e7cu: goto label_474e7c;
        case 0x474e80u: goto label_474e80;
        case 0x474e84u: goto label_474e84;
        case 0x474e88u: goto label_474e88;
        case 0x474e8cu: goto label_474e8c;
        case 0x474e90u: goto label_474e90;
        case 0x474e94u: goto label_474e94;
        case 0x474e98u: goto label_474e98;
        case 0x474e9cu: goto label_474e9c;
        case 0x474ea0u: goto label_474ea0;
        case 0x474ea4u: goto label_474ea4;
        case 0x474ea8u: goto label_474ea8;
        case 0x474eacu: goto label_474eac;
        case 0x474eb0u: goto label_474eb0;
        case 0x474eb4u: goto label_474eb4;
        case 0x474eb8u: goto label_474eb8;
        case 0x474ebcu: goto label_474ebc;
        case 0x474ec0u: goto label_474ec0;
        case 0x474ec4u: goto label_474ec4;
        case 0x474ec8u: goto label_474ec8;
        case 0x474eccu: goto label_474ecc;
        case 0x474ed0u: goto label_474ed0;
        case 0x474ed4u: goto label_474ed4;
        case 0x474ed8u: goto label_474ed8;
        case 0x474edcu: goto label_474edc;
        case 0x474ee0u: goto label_474ee0;
        case 0x474ee4u: goto label_474ee4;
        case 0x474ee8u: goto label_474ee8;
        case 0x474eecu: goto label_474eec;
        case 0x474ef0u: goto label_474ef0;
        case 0x474ef4u: goto label_474ef4;
        case 0x474ef8u: goto label_474ef8;
        case 0x474efcu: goto label_474efc;
        case 0x474f00u: goto label_474f00;
        case 0x474f04u: goto label_474f04;
        case 0x474f08u: goto label_474f08;
        case 0x474f0cu: goto label_474f0c;
        case 0x474f10u: goto label_474f10;
        case 0x474f14u: goto label_474f14;
        case 0x474f18u: goto label_474f18;
        case 0x474f1cu: goto label_474f1c;
        case 0x474f20u: goto label_474f20;
        case 0x474f24u: goto label_474f24;
        case 0x474f28u: goto label_474f28;
        case 0x474f2cu: goto label_474f2c;
        case 0x474f30u: goto label_474f30;
        case 0x474f34u: goto label_474f34;
        case 0x474f38u: goto label_474f38;
        case 0x474f3cu: goto label_474f3c;
        case 0x474f40u: goto label_474f40;
        case 0x474f44u: goto label_474f44;
        case 0x474f48u: goto label_474f48;
        case 0x474f4cu: goto label_474f4c;
        case 0x474f50u: goto label_474f50;
        case 0x474f54u: goto label_474f54;
        case 0x474f58u: goto label_474f58;
        case 0x474f5cu: goto label_474f5c;
        case 0x474f60u: goto label_474f60;
        case 0x474f64u: goto label_474f64;
        case 0x474f68u: goto label_474f68;
        case 0x474f6cu: goto label_474f6c;
        case 0x474f70u: goto label_474f70;
        case 0x474f74u: goto label_474f74;
        case 0x474f78u: goto label_474f78;
        case 0x474f7cu: goto label_474f7c;
        case 0x474f80u: goto label_474f80;
        case 0x474f84u: goto label_474f84;
        case 0x474f88u: goto label_474f88;
        case 0x474f8cu: goto label_474f8c;
        case 0x474f90u: goto label_474f90;
        case 0x474f94u: goto label_474f94;
        case 0x474f98u: goto label_474f98;
        case 0x474f9cu: goto label_474f9c;
        case 0x474fa0u: goto label_474fa0;
        case 0x474fa4u: goto label_474fa4;
        case 0x474fa8u: goto label_474fa8;
        case 0x474facu: goto label_474fac;
        case 0x474fb0u: goto label_474fb0;
        case 0x474fb4u: goto label_474fb4;
        case 0x474fb8u: goto label_474fb8;
        case 0x474fbcu: goto label_474fbc;
        case 0x474fc0u: goto label_474fc0;
        case 0x474fc4u: goto label_474fc4;
        case 0x474fc8u: goto label_474fc8;
        case 0x474fccu: goto label_474fcc;
        case 0x474fd0u: goto label_474fd0;
        case 0x474fd4u: goto label_474fd4;
        case 0x474fd8u: goto label_474fd8;
        case 0x474fdcu: goto label_474fdc;
        case 0x474fe0u: goto label_474fe0;
        case 0x474fe4u: goto label_474fe4;
        case 0x474fe8u: goto label_474fe8;
        case 0x474fecu: goto label_474fec;
        case 0x474ff0u: goto label_474ff0;
        case 0x474ff4u: goto label_474ff4;
        case 0x474ff8u: goto label_474ff8;
        case 0x474ffcu: goto label_474ffc;
        case 0x475000u: goto label_475000;
        case 0x475004u: goto label_475004;
        case 0x475008u: goto label_475008;
        case 0x47500cu: goto label_47500c;
        case 0x475010u: goto label_475010;
        case 0x475014u: goto label_475014;
        case 0x475018u: goto label_475018;
        case 0x47501cu: goto label_47501c;
        case 0x475020u: goto label_475020;
        case 0x475024u: goto label_475024;
        case 0x475028u: goto label_475028;
        case 0x47502cu: goto label_47502c;
        case 0x475030u: goto label_475030;
        case 0x475034u: goto label_475034;
        case 0x475038u: goto label_475038;
        case 0x47503cu: goto label_47503c;
        case 0x475040u: goto label_475040;
        case 0x475044u: goto label_475044;
        case 0x475048u: goto label_475048;
        case 0x47504cu: goto label_47504c;
        case 0x475050u: goto label_475050;
        case 0x475054u: goto label_475054;
        case 0x475058u: goto label_475058;
        case 0x47505cu: goto label_47505c;
        case 0x475060u: goto label_475060;
        case 0x475064u: goto label_475064;
        case 0x475068u: goto label_475068;
        case 0x47506cu: goto label_47506c;
        case 0x475070u: goto label_475070;
        case 0x475074u: goto label_475074;
        case 0x475078u: goto label_475078;
        case 0x47507cu: goto label_47507c;
        case 0x475080u: goto label_475080;
        case 0x475084u: goto label_475084;
        case 0x475088u: goto label_475088;
        case 0x47508cu: goto label_47508c;
        case 0x475090u: goto label_475090;
        case 0x475094u: goto label_475094;
        case 0x475098u: goto label_475098;
        case 0x47509cu: goto label_47509c;
        case 0x4750a0u: goto label_4750a0;
        case 0x4750a4u: goto label_4750a4;
        case 0x4750a8u: goto label_4750a8;
        case 0x4750acu: goto label_4750ac;
        case 0x4750b0u: goto label_4750b0;
        case 0x4750b4u: goto label_4750b4;
        case 0x4750b8u: goto label_4750b8;
        case 0x4750bcu: goto label_4750bc;
        case 0x4750c0u: goto label_4750c0;
        case 0x4750c4u: goto label_4750c4;
        case 0x4750c8u: goto label_4750c8;
        case 0x4750ccu: goto label_4750cc;
        case 0x4750d0u: goto label_4750d0;
        case 0x4750d4u: goto label_4750d4;
        case 0x4750d8u: goto label_4750d8;
        case 0x4750dcu: goto label_4750dc;
        case 0x4750e0u: goto label_4750e0;
        case 0x4750e4u: goto label_4750e4;
        case 0x4750e8u: goto label_4750e8;
        case 0x4750ecu: goto label_4750ec;
        case 0x4750f0u: goto label_4750f0;
        case 0x4750f4u: goto label_4750f4;
        case 0x4750f8u: goto label_4750f8;
        case 0x4750fcu: goto label_4750fc;
        case 0x475100u: goto label_475100;
        case 0x475104u: goto label_475104;
        case 0x475108u: goto label_475108;
        case 0x47510cu: goto label_47510c;
        case 0x475110u: goto label_475110;
        case 0x475114u: goto label_475114;
        case 0x475118u: goto label_475118;
        case 0x47511cu: goto label_47511c;
        case 0x475120u: goto label_475120;
        case 0x475124u: goto label_475124;
        case 0x475128u: goto label_475128;
        case 0x47512cu: goto label_47512c;
        case 0x475130u: goto label_475130;
        case 0x475134u: goto label_475134;
        case 0x475138u: goto label_475138;
        case 0x47513cu: goto label_47513c;
        case 0x475140u: goto label_475140;
        case 0x475144u: goto label_475144;
        case 0x475148u: goto label_475148;
        case 0x47514cu: goto label_47514c;
        case 0x475150u: goto label_475150;
        case 0x475154u: goto label_475154;
        case 0x475158u: goto label_475158;
        case 0x47515cu: goto label_47515c;
        case 0x475160u: goto label_475160;
        case 0x475164u: goto label_475164;
        case 0x475168u: goto label_475168;
        case 0x47516cu: goto label_47516c;
        case 0x475170u: goto label_475170;
        case 0x475174u: goto label_475174;
        case 0x475178u: goto label_475178;
        case 0x47517cu: goto label_47517c;
        case 0x475180u: goto label_475180;
        case 0x475184u: goto label_475184;
        case 0x475188u: goto label_475188;
        case 0x47518cu: goto label_47518c;
        case 0x475190u: goto label_475190;
        case 0x475194u: goto label_475194;
        case 0x475198u: goto label_475198;
        case 0x47519cu: goto label_47519c;
        case 0x4751a0u: goto label_4751a0;
        case 0x4751a4u: goto label_4751a4;
        case 0x4751a8u: goto label_4751a8;
        case 0x4751acu: goto label_4751ac;
        case 0x4751b0u: goto label_4751b0;
        case 0x4751b4u: goto label_4751b4;
        case 0x4751b8u: goto label_4751b8;
        case 0x4751bcu: goto label_4751bc;
        default: break;
    }

    ctx->pc = 0x4748c0u;

label_4748c0:
    // 0x4748c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4748c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4748c4:
    // 0x4748c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4748c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4748c8:
    // 0x4748c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4748c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4748cc:
    // 0x4748cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4748ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4748d0:
    // 0x4748d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4748d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4748d4:
    // 0x4748d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4748d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4748d8:
    // 0x4748d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4748d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4748dc:
    // 0x4748dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4748dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4748e0:
    // 0x4748e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4748e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4748e4:
    // 0x4748e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4748e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4748e8:
    // 0x4748e8: 0xc10ca68  jal         func_4329A0
label_4748ec:
    if (ctx->pc == 0x4748ECu) {
        ctx->pc = 0x4748ECu;
            // 0x4748ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4748F0u;
        goto label_4748f0;
    }
    ctx->pc = 0x4748E8u;
    SET_GPR_U32(ctx, 31, 0x4748F0u);
    ctx->pc = 0x4748ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4748E8u;
            // 0x4748ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4748F0u; }
        if (ctx->pc != 0x4748F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4748F0u; }
        if (ctx->pc != 0x4748F0u) { return; }
    }
    ctx->pc = 0x4748F0u;
label_4748f0:
    // 0x4748f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4748f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4748f4:
    // 0x4748f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4748f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4748f8:
    // 0x4748f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4748f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4748fc:
    // 0x4748fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4748fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_474900:
    // 0x474900: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x474900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_474904:
    // 0x474904: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x474904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_474908:
    // 0x474908: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x474908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_47490c:
    // 0x47490c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_474910:
    // 0x474910: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x474910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_474914:
    // 0x474914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x474914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_474918:
    // 0x474918: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x474918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_47491c:
    // 0x47491c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x47491cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_474920:
    // 0x474920: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x474920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_474924:
    // 0x474924: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x474924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_474928:
    // 0x474928: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x474928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_47492c:
    // 0x47492c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x47492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_474930:
    // 0x474930: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x474930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_474934:
    // 0x474934: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x474934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_474938:
    // 0x474938: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x474938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_47493c:
    // 0x47493c: 0xc0582cc  jal         func_160B30
label_474940:
    if (ctx->pc == 0x474940u) {
        ctx->pc = 0x474940u;
            // 0x474940: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x474944u;
        goto label_474944;
    }
    ctx->pc = 0x47493Cu;
    SET_GPR_U32(ctx, 31, 0x474944u);
    ctx->pc = 0x474940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47493Cu;
            // 0x474940: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474944u; }
        if (ctx->pc != 0x474944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474944u; }
        if (ctx->pc != 0x474944u) { return; }
    }
    ctx->pc = 0x474944u;
label_474944:
    // 0x474944: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x474944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_474948:
    // 0x474948: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x474948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_47494c:
    // 0x47494c: 0x2463ea68  addiu       $v1, $v1, -0x1598
    ctx->pc = 0x47494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961768));
label_474950:
    // 0x474950: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x474950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_474954:
    // 0x474954: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x474954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_474958:
    // 0x474958: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x474958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47495c:
    // 0x47495c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_474960:
    // 0x474960: 0xac447608  sw          $a0, 0x7608($v0)
    ctx->pc = 0x474960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30216), GPR_U32(ctx, 4));
label_474964:
    // 0x474964: 0x2463ea80  addiu       $v1, $v1, -0x1580
    ctx->pc = 0x474964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961792));
label_474968:
    // 0x474968: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x474968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47496c:
    // 0x47496c: 0x2442eab8  addiu       $v0, $v0, -0x1548
    ctx->pc = 0x47496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
label_474970:
    // 0x474970: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x474970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_474974:
    // 0x474974: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x474974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_474978:
    // 0x474978: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x474978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_47497c:
    // 0x47497c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x47497cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_474980:
    // 0x474980: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x474980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_474984:
    // 0x474984: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x474984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_474988:
    // 0x474988: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x474988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_47498c:
    // 0x47498c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x47498cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_474990:
    // 0x474990: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x474990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_474994:
    // 0x474994: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x474994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_474998:
    // 0x474998: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x474998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_47499c:
    // 0x47499c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x47499cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4749a0:
    // 0x4749a0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4749a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4749a4:
    // 0x4749a4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4749a8:
    if (ctx->pc == 0x4749A8u) {
        ctx->pc = 0x4749ACu;
        goto label_4749ac;
    }
    ctx->pc = 0x4749A4u;
    {
        const bool branch_taken_0x4749a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4749a4) {
            ctx->pc = 0x474A40u;
            goto label_474a40;
        }
    }
    ctx->pc = 0x4749ACu;
label_4749ac:
    // 0x4749ac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4749acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4749b0:
    // 0x4749b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4749b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4749b4:
    // 0x4749b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4749b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4749b8:
    // 0x4749b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4749b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4749bc:
    // 0x4749bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4749bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4749c0:
    // 0x4749c0: 0xc040138  jal         func_1004E0
label_4749c4:
    if (ctx->pc == 0x4749C4u) {
        ctx->pc = 0x4749C4u;
            // 0x4749c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4749C8u;
        goto label_4749c8;
    }
    ctx->pc = 0x4749C0u;
    SET_GPR_U32(ctx, 31, 0x4749C8u);
    ctx->pc = 0x4749C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4749C0u;
            // 0x4749c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749C8u; }
        if (ctx->pc != 0x4749C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749C8u; }
        if (ctx->pc != 0x4749C8u) { return; }
    }
    ctx->pc = 0x4749C8u;
label_4749c8:
    // 0x4749c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x4749c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_4749cc:
    // 0x4749cc: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4749ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_4749d0:
    // 0x4749d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4749d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4749d4:
    // 0x4749d4: 0x24a54a60  addiu       $a1, $a1, 0x4A60
    ctx->pc = 0x4749d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19040));
label_4749d8:
    // 0x4749d8: 0x24c63a00  addiu       $a2, $a2, 0x3A00
    ctx->pc = 0x4749d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14848));
label_4749dc:
    // 0x4749dc: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x4749dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4749e0:
    // 0x4749e0: 0xc040840  jal         func_102100
label_4749e4:
    if (ctx->pc == 0x4749E4u) {
        ctx->pc = 0x4749E4u;
            // 0x4749e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4749E8u;
        goto label_4749e8;
    }
    ctx->pc = 0x4749E0u;
    SET_GPR_U32(ctx, 31, 0x4749E8u);
    ctx->pc = 0x4749E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4749E0u;
            // 0x4749e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749E8u; }
        if (ctx->pc != 0x4749E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749E8u; }
        if (ctx->pc != 0x4749E8u) { return; }
    }
    ctx->pc = 0x4749E8u;
label_4749e8:
    // 0x4749e8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4749e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4749ec:
    // 0x4749ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4749ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4749f0:
    // 0x4749f0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4749f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4749f4:
    // 0x4749f4: 0xc0788fc  jal         func_1E23F0
label_4749f8:
    if (ctx->pc == 0x4749F8u) {
        ctx->pc = 0x4749F8u;
            // 0x4749f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4749FCu;
        goto label_4749fc;
    }
    ctx->pc = 0x4749F4u;
    SET_GPR_U32(ctx, 31, 0x4749FCu);
    ctx->pc = 0x4749F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4749F4u;
            // 0x4749f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749FCu; }
        if (ctx->pc != 0x4749FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4749FCu; }
        if (ctx->pc != 0x4749FCu) { return; }
    }
    ctx->pc = 0x4749FCu;
label_4749fc:
    // 0x4749fc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4749fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_474a00:
    // 0x474a00: 0xc0788fc  jal         func_1E23F0
label_474a04:
    if (ctx->pc == 0x474A04u) {
        ctx->pc = 0x474A04u;
            // 0x474a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474A08u;
        goto label_474a08;
    }
    ctx->pc = 0x474A00u;
    SET_GPR_U32(ctx, 31, 0x474A08u);
    ctx->pc = 0x474A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474A00u;
            // 0x474a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474A08u; }
        if (ctx->pc != 0x474A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474A08u; }
        if (ctx->pc != 0x474A08u) { return; }
    }
    ctx->pc = 0x474A08u;
label_474a08:
    // 0x474a08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x474a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474a0c:
    // 0x474a0c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x474a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_474a10:
    // 0x474a10: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x474a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_474a14:
    // 0x474a14: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x474a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_474a18:
    // 0x474a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x474a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474a1c:
    // 0x474a1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x474a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_474a20:
    // 0x474a20: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x474a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_474a24:
    // 0x474a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x474a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_474a28:
    // 0x474a28: 0xc0a997c  jal         func_2A65F0
label_474a2c:
    if (ctx->pc == 0x474A2Cu) {
        ctx->pc = 0x474A2Cu;
            // 0x474a2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x474A30u;
        goto label_474a30;
    }
    ctx->pc = 0x474A28u;
    SET_GPR_U32(ctx, 31, 0x474A30u);
    ctx->pc = 0x474A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474A28u;
            // 0x474a2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474A30u; }
        if (ctx->pc != 0x474A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474A30u; }
        if (ctx->pc != 0x474A30u) { return; }
    }
    ctx->pc = 0x474A30u;
label_474a30:
    // 0x474a30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x474a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_474a34:
    // 0x474a34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x474a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_474a38:
    // 0x474a38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_474a3c:
    if (ctx->pc == 0x474A3Cu) {
        ctx->pc = 0x474A3Cu;
            // 0x474a3c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->pc = 0x474A40u;
        goto label_474a40;
    }
    ctx->pc = 0x474A38u;
    {
        const bool branch_taken_0x474a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474A38u;
            // 0x474a3c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474a38) {
            ctx->pc = 0x474A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_474a0c;
        }
    }
    ctx->pc = 0x474A40u;
label_474a40:
    // 0x474a40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x474a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_474a44:
    // 0x474a44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x474a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_474a48:
    // 0x474a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x474a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_474a4c:
    // 0x474a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x474a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_474a50:
    // 0x474a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474a54:
    // 0x474a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474a58:
    // 0x474a58: 0x3e00008  jr          $ra
label_474a5c:
    if (ctx->pc == 0x474A5Cu) {
        ctx->pc = 0x474A5Cu;
            // 0x474a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x474A60u;
        goto label_474a60;
    }
    ctx->pc = 0x474A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474A58u;
            // 0x474a5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474A60u;
label_474a60:
    // 0x474a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x474a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_474a64:
    // 0x474a64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x474a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_474a68:
    // 0x474a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x474a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_474a6c:
    // 0x474a6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x474a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474a70:
    // 0x474a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474a74:
    // 0x474a74: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x474a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_474a78:
    // 0x474a78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x474a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_474a7c:
    // 0x474a7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x474a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_474a80:
    // 0x474a80: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x474a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_474a84:
    // 0x474a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474a88:
    // 0x474a88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x474a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_474a8c:
    // 0x474a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x474a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474a90:
    // 0x474a90: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x474a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_474a94:
    // 0x474a94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x474a94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_474a98:
    // 0x474a98: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x474a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_474a9c:
    // 0x474a9c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x474a9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_474aa0:
    // 0x474aa0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x474aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_474aa4:
    // 0x474aa4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x474aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_474aa8:
    // 0x474aa8: 0xc04cbd8  jal         func_132F60
label_474aac:
    if (ctx->pc == 0x474AACu) {
        ctx->pc = 0x474AACu;
            // 0x474aac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x474AB0u;
        goto label_474ab0;
    }
    ctx->pc = 0x474AA8u;
    SET_GPR_U32(ctx, 31, 0x474AB0u);
    ctx->pc = 0x474AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474AA8u;
            // 0x474aac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474AB0u; }
        if (ctx->pc != 0x474AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474AB0u; }
        if (ctx->pc != 0x474AB0u) { return; }
    }
    ctx->pc = 0x474AB0u;
label_474ab0:
    // 0x474ab0: 0xc04c968  jal         func_1325A0
label_474ab4:
    if (ctx->pc == 0x474AB4u) {
        ctx->pc = 0x474AB4u;
            // 0x474ab4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x474AB8u;
        goto label_474ab8;
    }
    ctx->pc = 0x474AB0u;
    SET_GPR_U32(ctx, 31, 0x474AB8u);
    ctx->pc = 0x474AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474AB0u;
            // 0x474ab4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474AB8u; }
        if (ctx->pc != 0x474AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474AB8u; }
        if (ctx->pc != 0x474AB8u) { return; }
    }
    ctx->pc = 0x474AB8u;
label_474ab8:
    // 0x474ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x474ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_474abc:
    // 0x474abc: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x474abcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_474ac0:
    // 0x474ac0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x474ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_474ac4:
    // 0x474ac4: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x474ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_474ac8:
    // 0x474ac8: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x474ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_474acc:
    // 0x474acc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x474accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_474ad0:
    // 0x474ad0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x474ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_474ad4:
    // 0x474ad4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x474ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_474ad8:
    // 0x474ad8: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x474ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_474adc:
    // 0x474adc: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x474adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_474ae0:
    // 0x474ae0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x474ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_474ae4:
    // 0x474ae4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x474ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_474ae8:
    // 0x474ae8: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x474ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
label_474aec:
    // 0x474aec: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x474aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
label_474af0:
    // 0x474af0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x474af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_474af4:
    // 0x474af4: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x474af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
label_474af8:
    // 0x474af8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x474af8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_474afc:
    // 0x474afc: 0x24c6eb20  addiu       $a2, $a2, -0x14E0
    ctx->pc = 0x474afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961952));
label_474b00:
    // 0x474b00: 0x24a5eb60  addiu       $a1, $a1, -0x14A0
    ctx->pc = 0x474b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962016));
label_474b04:
    // 0x474b04: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x474b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
label_474b08:
    // 0x474b08: 0x2463ea58  addiu       $v1, $v1, -0x15A8
    ctx->pc = 0x474b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961752));
label_474b0c:
    // 0x474b0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x474b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_474b10:
    // 0x474b10: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x474b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_474b14:
    // 0x474b14: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x474b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_474b18:
    // 0x474b18: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x474b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_474b1c:
    // 0x474b1c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x474b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_474b20:
    // 0x474b20: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x474b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_474b24:
    // 0x474b24: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x474b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_474b28:
    // 0x474b28: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x474b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_474b2c:
    // 0x474b2c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x474b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_474b30:
    // 0x474b30: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x474b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_474b34:
    // 0x474b34: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x474b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_474b38:
    // 0x474b38: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x474b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_474b3c:
    // 0x474b3c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x474b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_474b40:
    // 0x474b40: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x474b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_474b44:
    // 0x474b44: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x474b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_474b48:
    // 0x474b48: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x474b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_474b4c:
    // 0x474b4c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x474b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_474b50:
    // 0x474b50: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x474b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_474b54:
    // 0x474b54: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x474b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_474b58:
    // 0x474b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x474b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_474b5c:
    // 0x474b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474b60:
    // 0x474b60: 0x3e00008  jr          $ra
label_474b64:
    if (ctx->pc == 0x474B64u) {
        ctx->pc = 0x474B64u;
            // 0x474b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x474B68u;
        goto label_474b68;
    }
    ctx->pc = 0x474B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474B60u;
            // 0x474b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474B68u;
label_474b68:
    // 0x474b68: 0x0  nop
    ctx->pc = 0x474b68u;
    // NOP
label_474b6c:
    // 0x474b6c: 0x0  nop
    ctx->pc = 0x474b6cu;
    // NOP
label_474b70:
    // 0x474b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x474b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_474b74:
    // 0x474b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x474b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_474b78:
    // 0x474b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_474b7c:
    // 0x474b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474b80:
    // 0x474b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x474b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474b84:
    // 0x474b84: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_474b88:
    if (ctx->pc == 0x474B88u) {
        ctx->pc = 0x474B88u;
            // 0x474b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474B8Cu;
        goto label_474b8c;
    }
    ctx->pc = 0x474B84u;
    {
        const bool branch_taken_0x474b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x474B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474B84u;
            // 0x474b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474b84) {
            ctx->pc = 0x474BD4u;
            goto label_474bd4;
        }
    }
    ctx->pc = 0x474B8Cu;
label_474b8c:
    // 0x474b8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x474b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_474b90:
    // 0x474b90: 0x2442ea58  addiu       $v0, $v0, -0x15A8
    ctx->pc = 0x474b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961752));
label_474b94:
    // 0x474b94: 0xc11d4b4  jal         func_4752D0
label_474b98:
    if (ctx->pc == 0x474B98u) {
        ctx->pc = 0x474B98u;
            // 0x474b98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x474B9Cu;
        goto label_474b9c;
    }
    ctx->pc = 0x474B94u;
    SET_GPR_U32(ctx, 31, 0x474B9Cu);
    ctx->pc = 0x474B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474B94u;
            // 0x474b98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4752D0u;
    if (runtime->hasFunction(0x4752D0u)) {
        auto targetFn = runtime->lookupFunction(0x4752D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474B9Cu; }
        if (ctx->pc != 0x474B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004752D0_0x4752d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474B9Cu; }
        if (ctx->pc != 0x474B9Cu) { return; }
    }
    ctx->pc = 0x474B9Cu;
label_474b9c:
    // 0x474b9c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_474ba0:
    if (ctx->pc == 0x474BA0u) {
        ctx->pc = 0x474BA0u;
            // 0x474ba0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x474BA4u;
        goto label_474ba4;
    }
    ctx->pc = 0x474B9Cu;
    {
        const bool branch_taken_0x474b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x474b9c) {
            ctx->pc = 0x474BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474B9Cu;
            // 0x474ba0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474BC0u;
            goto label_474bc0;
        }
    }
    ctx->pc = 0x474BA4u;
label_474ba4:
    // 0x474ba4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x474ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_474ba8:
    // 0x474ba8: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x474ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_474bac:
    // 0x474bac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x474bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_474bb0:
    // 0x474bb0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x474bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_474bb4:
    // 0x474bb4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x474bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_474bb8:
    // 0x474bb8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x474bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_474bbc:
    // 0x474bbc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x474bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_474bc0:
    // 0x474bc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x474bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_474bc4:
    // 0x474bc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_474bc8:
    if (ctx->pc == 0x474BC8u) {
        ctx->pc = 0x474BC8u;
            // 0x474bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474BCCu;
        goto label_474bcc;
    }
    ctx->pc = 0x474BC4u;
    {
        const bool branch_taken_0x474bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x474bc4) {
            ctx->pc = 0x474BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474BC4u;
            // 0x474bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474BD8u;
            goto label_474bd8;
        }
    }
    ctx->pc = 0x474BCCu;
label_474bcc:
    // 0x474bcc: 0xc0400a8  jal         func_1002A0
label_474bd0:
    if (ctx->pc == 0x474BD0u) {
        ctx->pc = 0x474BD0u;
            // 0x474bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474BD4u;
        goto label_474bd4;
    }
    ctx->pc = 0x474BCCu;
    SET_GPR_U32(ctx, 31, 0x474BD4u);
    ctx->pc = 0x474BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474BCCu;
            // 0x474bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474BD4u; }
        if (ctx->pc != 0x474BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474BD4u; }
        if (ctx->pc != 0x474BD4u) { return; }
    }
    ctx->pc = 0x474BD4u;
label_474bd4:
    // 0x474bd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x474bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_474bd8:
    // 0x474bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x474bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_474bdc:
    // 0x474bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474be0:
    // 0x474be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474be4:
    // 0x474be4: 0x3e00008  jr          $ra
label_474be8:
    if (ctx->pc == 0x474BE8u) {
        ctx->pc = 0x474BE8u;
            // 0x474be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x474BECu;
        goto label_474bec;
    }
    ctx->pc = 0x474BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474BE4u;
            // 0x474be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474BECu;
label_474bec:
    // 0x474bec: 0x0  nop
    ctx->pc = 0x474becu;
    // NOP
label_474bf0:
    // 0x474bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x474bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_474bf4:
    // 0x474bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x474bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_474bf8:
    // 0x474bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474bfc:
    // 0x474bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x474bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474c00:
    // 0x474c00: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x474c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_474c04:
    // 0x474c04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_474c08:
    if (ctx->pc == 0x474C08u) {
        ctx->pc = 0x474C08u;
            // 0x474c08: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x474C0Cu;
        goto label_474c0c;
    }
    ctx->pc = 0x474C04u;
    {
        const bool branch_taken_0x474c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c04) {
            ctx->pc = 0x474C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474C04u;
            // 0x474c08: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474C20u;
            goto label_474c20;
        }
    }
    ctx->pc = 0x474C0Cu;
label_474c0c:
    // 0x474c0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x474c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_474c10:
    // 0x474c10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x474c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_474c14:
    // 0x474c14: 0x320f809  jalr        $t9
label_474c18:
    if (ctx->pc == 0x474C18u) {
        ctx->pc = 0x474C18u;
            // 0x474c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x474C1Cu;
        goto label_474c1c;
    }
    ctx->pc = 0x474C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474C1Cu);
        ctx->pc = 0x474C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474C14u;
            // 0x474c18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x474C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474C1Cu; }
            if (ctx->pc != 0x474C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x474C1Cu;
label_474c1c:
    // 0x474c1c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x474c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_474c20:
    // 0x474c20: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x474c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_474c24:
    // 0x474c24: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_474c28:
    if (ctx->pc == 0x474C28u) {
        ctx->pc = 0x474C28u;
            // 0x474c28: 0x260400ac  addiu       $a0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->pc = 0x474C2Cu;
        goto label_474c2c;
    }
    ctx->pc = 0x474C24u;
    {
        const bool branch_taken_0x474c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c24) {
            ctx->pc = 0x474C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474C24u;
            // 0x474c28: 0x260400ac  addiu       $a0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474C4Cu;
            goto label_474c4c;
        }
    }
    ctx->pc = 0x474C2Cu;
label_474c2c:
    // 0x474c2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_474c30:
    if (ctx->pc == 0x474C30u) {
        ctx->pc = 0x474C30u;
            // 0x474c30: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x474C34u;
        goto label_474c34;
    }
    ctx->pc = 0x474C2Cu;
    {
        const bool branch_taken_0x474c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x474c2c) {
            ctx->pc = 0x474C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474C2Cu;
            // 0x474c30: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474C48u;
            goto label_474c48;
        }
    }
    ctx->pc = 0x474C34u;
label_474c34:
    // 0x474c34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x474c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_474c38:
    // 0x474c38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x474c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_474c3c:
    // 0x474c3c: 0x320f809  jalr        $t9
label_474c40:
    if (ctx->pc == 0x474C40u) {
        ctx->pc = 0x474C40u;
            // 0x474c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x474C44u;
        goto label_474c44;
    }
    ctx->pc = 0x474C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474C44u);
        ctx->pc = 0x474C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474C3Cu;
            // 0x474c40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x474C44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474C44u; }
            if (ctx->pc != 0x474C44u) { return; }
        }
        }
    }
    ctx->pc = 0x474C44u;
label_474c44:
    // 0x474c44: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x474c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_474c48:
    // 0x474c48: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x474c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_474c4c:
    // 0x474c4c: 0xc11d4b4  jal         func_4752D0
label_474c50:
    if (ctx->pc == 0x474C50u) {
        ctx->pc = 0x474C54u;
        goto label_474c54;
    }
    ctx->pc = 0x474C4Cu;
    SET_GPR_U32(ctx, 31, 0x474C54u);
    ctx->pc = 0x4752D0u;
    if (runtime->hasFunction(0x4752D0u)) {
        auto targetFn = runtime->lookupFunction(0x4752D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474C54u; }
        if (ctx->pc != 0x474C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004752D0_0x4752d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474C54u; }
        if (ctx->pc != 0x474C54u) { return; }
    }
    ctx->pc = 0x474C54u;
label_474c54:
    // 0x474c54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x474c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_474c58:
    // 0x474c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474c5c:
    // 0x474c5c: 0x3e00008  jr          $ra
label_474c60:
    if (ctx->pc == 0x474C60u) {
        ctx->pc = 0x474C60u;
            // 0x474c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x474C64u;
        goto label_474c64;
    }
    ctx->pc = 0x474C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474C5Cu;
            // 0x474c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474C64u;
label_474c64:
    // 0x474c64: 0x0  nop
    ctx->pc = 0x474c64u;
    // NOP
label_474c68:
    // 0x474c68: 0x0  nop
    ctx->pc = 0x474c68u;
    // NOP
label_474c6c:
    // 0x474c6c: 0x0  nop
    ctx->pc = 0x474c6cu;
    // NOP
label_474c70:
    // 0x474c70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x474c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_474c74:
    // 0x474c74: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x474c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_474c78:
    // 0x474c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x474c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_474c7c:
    // 0x474c7c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x474c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_474c80:
    // 0x474c80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x474c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_474c84:
    // 0x474c84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x474c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_474c88:
    // 0x474c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_474c8c:
    // 0x474c8c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x474c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_474c90:
    // 0x474c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474c94:
    // 0x474c94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x474c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_474c98:
    // 0x474c98: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x474c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_474c9c:
    // 0x474c9c: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x474c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_474ca0:
    // 0x474ca0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x474ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_474ca4:
    // 0x474ca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x474ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474ca8:
    // 0x474ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x474ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_474cac:
    // 0x474cac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x474cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_474cb0:
    // 0x474cb0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x474cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474cb4:
    // 0x474cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x474cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_474cb8:
    // 0x474cb8: 0x3c094100  lui         $t1, 0x4100
    ctx->pc = 0x474cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16640 << 16));
label_474cbc:
    // 0x474cbc: 0x3c084080  lui         $t0, 0x4080
    ctx->pc = 0x474cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16512 << 16));
label_474cc0:
    // 0x474cc0: 0x3c0740c0  lui         $a3, 0x40C0
    ctx->pc = 0x474cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16576 << 16));
label_474cc4:
    // 0x474cc4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x474cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_474cc8:
    // 0x474cc8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x474cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_474ccc:
    // 0x474ccc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x474cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_474cd0:
    // 0x474cd0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x474cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_474cd4:
    // 0x474cd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x474cd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_474cd8:
    // 0x474cd8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x474cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_474cdc:
    // 0x474cdc: 0x8c8a003c  lw          $t2, 0x3C($a0)
    ctx->pc = 0x474cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_474ce0:
    // 0x474ce0: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x474ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474ce4:
    // 0x474ce4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x474ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_474ce8:
    // 0x474ce8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x474ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_474cec:
    // 0x474cec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x474cecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_474cf0:
    // 0x474cf0: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x474cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_474cf4:
    // 0x474cf4: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x474cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_474cf8:
    // 0x474cf8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x474cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_474cfc:
    // 0x474cfc: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x474cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
label_474d00:
    // 0x474d00: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x474d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
label_474d04:
    // 0x474d04: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x474d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_474d08:
    // 0x474d08: 0xc0a7a88  jal         func_29EA20
label_474d0c:
    if (ctx->pc == 0x474D0Cu) {
        ctx->pc = 0x474D0Cu;
            // 0x474d0c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x474D10u;
        goto label_474d10;
    }
    ctx->pc = 0x474D08u;
    SET_GPR_U32(ctx, 31, 0x474D10u);
    ctx->pc = 0x474D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474D08u;
            // 0x474d0c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D10u; }
        if (ctx->pc != 0x474D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D10u; }
        if (ctx->pc != 0x474D10u) { return; }
    }
    ctx->pc = 0x474D10u;
label_474d10:
    // 0x474d10: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x474d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_474d14:
    // 0x474d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x474d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_474d18:
    // 0x474d18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_474d1c:
    if (ctx->pc == 0x474D1Cu) {
        ctx->pc = 0x474D1Cu;
            // 0x474d1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x474D20u;
        goto label_474d20;
    }
    ctx->pc = 0x474D18u;
    {
        const bool branch_taken_0x474d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x474D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474D18u;
            // 0x474d1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d18) {
            ctx->pc = 0x474D34u;
            goto label_474d34;
        }
    }
    ctx->pc = 0x474D20u;
label_474d20:
    // 0x474d20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x474d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_474d24:
    // 0x474d24: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x474d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_474d28:
    // 0x474d28: 0xc0804bc  jal         func_2012F0
label_474d2c:
    if (ctx->pc == 0x474D2Cu) {
        ctx->pc = 0x474D2Cu;
            // 0x474d2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x474D30u;
        goto label_474d30;
    }
    ctx->pc = 0x474D28u;
    SET_GPR_U32(ctx, 31, 0x474D30u);
    ctx->pc = 0x474D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474D28u;
            // 0x474d2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D30u; }
        if (ctx->pc != 0x474D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D30u; }
        if (ctx->pc != 0x474D30u) { return; }
    }
    ctx->pc = 0x474D30u;
label_474d30:
    // 0x474d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x474d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_474d34:
    // 0x474d34: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x474d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_474d38:
    // 0x474d38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x474d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_474d3c:
    // 0x474d3c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x474d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_474d40:
    // 0x474d40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x474d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_474d44:
    // 0x474d44: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x474d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_474d48:
    // 0x474d48: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x474d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474d4c:
    // 0x474d4c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x474d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_474d50:
    // 0x474d50: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x474d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_474d54:
    // 0x474d54: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x474d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_474d58:
    // 0x474d58: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x474d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_474d5c:
    // 0x474d5c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x474d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_474d60:
    // 0x474d60: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x474d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_474d64:
    // 0x474d64: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x474d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_474d68:
    // 0x474d68: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x474d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_474d6c:
    // 0x474d6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x474d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_474d70:
    // 0x474d70: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x474d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_474d74:
    // 0x474d74: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x474d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_474d78:
    // 0x474d78: 0xc0a3830  jal         func_28E0C0
label_474d7c:
    if (ctx->pc == 0x474D7Cu) {
        ctx->pc = 0x474D7Cu;
            // 0x474d7c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x474D80u;
        goto label_474d80;
    }
    ctx->pc = 0x474D78u;
    SET_GPR_U32(ctx, 31, 0x474D80u);
    ctx->pc = 0x474D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474D78u;
            // 0x474d7c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D80u; }
        if (ctx->pc != 0x474D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D80u; }
        if (ctx->pc != 0x474D80u) { return; }
    }
    ctx->pc = 0x474D80u;
label_474d80:
    // 0x474d80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x474d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_474d84:
    // 0x474d84: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x474d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_474d88:
    // 0x474d88: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x474d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_474d8c:
    // 0x474d8c: 0xc0a7a88  jal         func_29EA20
label_474d90:
    if (ctx->pc == 0x474D90u) {
        ctx->pc = 0x474D90u;
            // 0x474d90: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x474D94u;
        goto label_474d94;
    }
    ctx->pc = 0x474D8Cu;
    SET_GPR_U32(ctx, 31, 0x474D94u);
    ctx->pc = 0x474D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474D8Cu;
            // 0x474d90: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D94u; }
        if (ctx->pc != 0x474D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474D94u; }
        if (ctx->pc != 0x474D94u) { return; }
    }
    ctx->pc = 0x474D94u;
label_474d94:
    // 0x474d94: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x474d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_474d98:
    // 0x474d98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x474d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_474d9c:
    // 0x474d9c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_474da0:
    if (ctx->pc == 0x474DA0u) {
        ctx->pc = 0x474DA0u;
            // 0x474da0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x474DA4u;
        goto label_474da4;
    }
    ctx->pc = 0x474D9Cu;
    {
        const bool branch_taken_0x474d9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x474DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474D9Cu;
            // 0x474da0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474d9c) {
            ctx->pc = 0x474DD0u;
            goto label_474dd0;
        }
    }
    ctx->pc = 0x474DA4u;
label_474da4:
    // 0x474da4: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x474da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_474da8:
    // 0x474da8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x474da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_474dac:
    // 0x474dac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x474dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_474db0:
    // 0x474db0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x474db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_474db4:
    // 0x474db4: 0xc08afe0  jal         func_22BF80
label_474db8:
    if (ctx->pc == 0x474DB8u) {
        ctx->pc = 0x474DB8u;
            // 0x474db8: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x474DBCu;
        goto label_474dbc;
    }
    ctx->pc = 0x474DB4u;
    SET_GPR_U32(ctx, 31, 0x474DBCu);
    ctx->pc = 0x474DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474DB4u;
            // 0x474db8: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DBCu; }
        if (ctx->pc != 0x474DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DBCu; }
        if (ctx->pc != 0x474DBCu) { return; }
    }
    ctx->pc = 0x474DBCu;
label_474dbc:
    // 0x474dbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x474dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_474dc0:
    // 0x474dc0: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x474dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_474dc4:
    // 0x474dc4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x474dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_474dc8:
    // 0x474dc8: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x474dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_474dcc:
    // 0x474dcc: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x474dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_474dd0:
    // 0x474dd0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x474dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_474dd4:
    // 0x474dd4: 0xc08c798  jal         func_231E60
label_474dd8:
    if (ctx->pc == 0x474DD8u) {
        ctx->pc = 0x474DD8u;
            // 0x474dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474DDCu;
        goto label_474ddc;
    }
    ctx->pc = 0x474DD4u;
    SET_GPR_U32(ctx, 31, 0x474DDCu);
    ctx->pc = 0x474DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474DD4u;
            // 0x474dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DDCu; }
        if (ctx->pc != 0x474DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DDCu; }
        if (ctx->pc != 0x474DDCu) { return; }
    }
    ctx->pc = 0x474DDCu;
label_474ddc:
    // 0x474ddc: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x474ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
label_474de0:
    // 0x474de0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x474de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_474de4:
    // 0x474de4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x474de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_474de8:
    // 0x474de8: 0x262400ac  addiu       $a0, $s1, 0xAC
    ctx->pc = 0x474de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_474dec:
    // 0x474dec: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x474decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_474df0:
    // 0x474df0: 0xc11d484  jal         func_475210
label_474df4:
    if (ctx->pc == 0x474DF4u) {
        ctx->pc = 0x474DF4u;
            // 0x474df4: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x474DF8u;
        goto label_474df8;
    }
    ctx->pc = 0x474DF0u;
    SET_GPR_U32(ctx, 31, 0x474DF8u);
    ctx->pc = 0x474DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474DF0u;
            // 0x474df4: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475210u;
    if (runtime->hasFunction(0x475210u)) {
        auto targetFn = runtime->lookupFunction(0x475210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DF8u; }
        if (ctx->pc != 0x474DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475210_0x475210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474DF8u; }
        if (ctx->pc != 0x474DF8u) { return; }
    }
    ctx->pc = 0x474DF8u;
label_474df8:
    // 0x474df8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x474df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_474dfc:
    // 0x474dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x474dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_474e00:
    // 0x474e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474e04:
    // 0x474e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474e08:
    // 0x474e08: 0x3e00008  jr          $ra
label_474e0c:
    if (ctx->pc == 0x474E0Cu) {
        ctx->pc = 0x474E0Cu;
            // 0x474e0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x474E10u;
        goto label_474e10;
    }
    ctx->pc = 0x474E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474E08u;
            // 0x474e0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474E10u;
label_474e10:
    // 0x474e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x474e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_474e14:
    // 0x474e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x474e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_474e18:
    // 0x474e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x474e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_474e1c:
    // 0x474e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x474e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_474e20:
    // 0x474e20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x474e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_474e24:
    // 0x474e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x474e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_474e28:
    // 0x474e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x474e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474e2c:
    // 0x474e2c: 0x8cc50db0  lw          $a1, 0xDB0($a2)
    ctx->pc = 0x474e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_474e30:
    // 0x474e30: 0x8cd10d98  lw          $s1, 0xD98($a2)
    ctx->pc = 0x474e30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_474e34:
    // 0x474e34: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x474e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_474e38:
    // 0x474e38: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_474e3c:
    if (ctx->pc == 0x474E3Cu) {
        ctx->pc = 0x474E3Cu;
            // 0x474e3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474E40u;
        goto label_474e40;
    }
    ctx->pc = 0x474E38u;
    {
        const bool branch_taken_0x474e38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x474E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474E38u;
            // 0x474e3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474e38) {
            ctx->pc = 0x474E4Cu;
            goto label_474e4c;
        }
    }
    ctx->pc = 0x474E40u;
label_474e40:
    // 0x474e40: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x474e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_474e44:
    // 0x474e44: 0x54a30063  bnel        $a1, $v1, . + 4 + (0x63 << 2)
label_474e48:
    if (ctx->pc == 0x474E48u) {
        ctx->pc = 0x474E48u;
            // 0x474e48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x474E4Cu;
        goto label_474e4c;
    }
    ctx->pc = 0x474E44u;
    {
        const bool branch_taken_0x474e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x474e44) {
            ctx->pc = 0x474E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474E44u;
            // 0x474e48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474FD4u;
            goto label_474fd4;
        }
    }
    ctx->pc = 0x474E4Cu;
label_474e4c:
    // 0x474e4c: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x474e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_474e50:
    // 0x474e50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x474e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_474e54:
    // 0x474e54: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_474e58:
    if (ctx->pc == 0x474E58u) {
        ctx->pc = 0x474E5Cu;
        goto label_474e5c;
    }
    ctx->pc = 0x474E54u;
    {
        const bool branch_taken_0x474e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e54) {
            ctx->pc = 0x474FD0u;
            goto label_474fd0;
        }
    }
    ctx->pc = 0x474E5Cu;
label_474e5c:
    // 0x474e5c: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x474e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_474e60:
    // 0x474e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x474e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474e64:
    // 0x474e64: 0x2248004  sllv        $s0, $a0, $s1
    ctx->pc = 0x474e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_474e68:
    // 0x474e68: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x474e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_474e6c:
    // 0x474e6c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_474e70:
    if (ctx->pc == 0x474E70u) {
        ctx->pc = 0x474E70u;
            // 0x474e70: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x474E74u;
        goto label_474e74;
    }
    ctx->pc = 0x474E6Cu;
    {
        const bool branch_taken_0x474e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e6c) {
            ctx->pc = 0x474E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474E6Cu;
            // 0x474e70: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474E80u;
            goto label_474e80;
        }
    }
    ctx->pc = 0x474E74u;
label_474e74:
    // 0x474e74: 0x10000056  b           . + 4 + (0x56 << 2)
label_474e78:
    if (ctx->pc == 0x474E78u) {
        ctx->pc = 0x474E7Cu;
        goto label_474e7c;
    }
    ctx->pc = 0x474E74u;
    {
        const bool branch_taken_0x474e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474e74) {
            ctx->pc = 0x474FD0u;
            goto label_474fd0;
        }
    }
    ctx->pc = 0x474E7Cu;
label_474e7c:
    // 0x474e7c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x474e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_474e80:
    // 0x474e80: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_474e84:
    if (ctx->pc == 0x474E84u) {
        ctx->pc = 0x474E84u;
            // 0x474e84: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x474E88u;
        goto label_474e88;
    }
    ctx->pc = 0x474E80u;
    {
        const bool branch_taken_0x474e80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x474e80) {
            ctx->pc = 0x474E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474E80u;
            // 0x474e84: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x474E94u;
            goto label_474e94;
        }
    }
    ctx->pc = 0x474E88u;
label_474e88:
    // 0x474e88: 0xc0b6764  jal         func_2D9D90
label_474e8c:
    if (ctx->pc == 0x474E8Cu) {
        ctx->pc = 0x474E8Cu;
            // 0x474e8c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x474E90u;
        goto label_474e90;
    }
    ctx->pc = 0x474E88u;
    SET_GPR_U32(ctx, 31, 0x474E90u);
    ctx->pc = 0x474E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474E88u;
            // 0x474e8c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474E90u; }
        if (ctx->pc != 0x474E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474E90u; }
        if (ctx->pc != 0x474E90u) { return; }
    }
    ctx->pc = 0x474E90u;
label_474e90:
    // 0x474e90: 0xae40118c  sw          $zero, 0x118C($s2)
    ctx->pc = 0x474e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
label_474e94:
    // 0x474e94: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x474e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_474e98:
    // 0x474e98: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x474e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_474e9c:
    // 0x474e9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x474e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474ea0:
    // 0x474ea0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x474ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_474ea4:
    // 0x474ea4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x474ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_474ea8:
    // 0x474ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x474ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474eac:
    // 0x474eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x474eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_474eb0:
    // 0x474eb0: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x474eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_474eb4:
    // 0x474eb4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x474eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_474eb8:
    // 0x474eb8: 0xae660088  sw          $a2, 0x88($s3)
    ctx->pc = 0x474eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 6));
label_474ebc:
    // 0x474ebc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x474ebcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_474ec0:
    // 0x474ec0: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x474ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
label_474ec4:
    // 0x474ec4: 0x8e420d60  lw          $v0, 0xD60($s2)
    ctx->pc = 0x474ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_474ec8:
    // 0x474ec8: 0xc0767f0  jal         func_1D9FC0
label_474ecc:
    if (ctx->pc == 0x474ECCu) {
        ctx->pc = 0x474ECCu;
            // 0x474ecc: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x474ED0u;
        goto label_474ed0;
    }
    ctx->pc = 0x474EC8u;
    SET_GPR_U32(ctx, 31, 0x474ED0u);
    ctx->pc = 0x474ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474EC8u;
            // 0x474ecc: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474ED0u; }
        if (ctx->pc != 0x474ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474ED0u; }
        if (ctx->pc != 0x474ED0u) { return; }
    }
    ctx->pc = 0x474ED0u;
label_474ed0:
    // 0x474ed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x474ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474ed4:
    // 0x474ed4: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x474ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_474ed8:
    // 0x474ed8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x474ed8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_474edc:
    // 0x474edc: 0xc04cbd8  jal         func_132F60
label_474ee0:
    if (ctx->pc == 0x474EE0u) {
        ctx->pc = 0x474EE0u;
            // 0x474ee0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x474EE4u;
        goto label_474ee4;
    }
    ctx->pc = 0x474EDCu;
    SET_GPR_U32(ctx, 31, 0x474EE4u);
    ctx->pc = 0x474EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474EDCu;
            // 0x474ee0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474EE4u; }
        if (ctx->pc != 0x474EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474EE4u; }
        if (ctx->pc != 0x474EE4u) { return; }
    }
    ctx->pc = 0x474EE4u;
label_474ee4:
    // 0x474ee4: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x474ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_474ee8:
    // 0x474ee8: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x474ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_474eec:
    // 0x474eec: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x474eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_474ef0:
    // 0x474ef0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x474ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_474ef4:
    // 0x474ef4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x474ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_474ef8:
    // 0x474ef8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x474ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_474efc:
    // 0x474efc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x474efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_474f00:
    // 0x474f00: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x474f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_474f04:
    // 0x474f04: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x474f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_474f08:
    // 0x474f08: 0xc0a545c  jal         func_295170
label_474f0c:
    if (ctx->pc == 0x474F0Cu) {
        ctx->pc = 0x474F0Cu;
            // 0x474f0c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x474F10u;
        goto label_474f10;
    }
    ctx->pc = 0x474F08u;
    SET_GPR_U32(ctx, 31, 0x474F10u);
    ctx->pc = 0x474F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F08u;
            // 0x474f0c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F10u; }
        if (ctx->pc != 0x474F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F10u; }
        if (ctx->pc != 0x474F10u) { return; }
    }
    ctx->pc = 0x474F10u;
label_474f10:
    // 0x474f10: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x474f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_474f14:
    // 0x474f14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x474f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_474f18:
    // 0x474f18: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x474f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_474f1c:
    // 0x474f1c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x474f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_474f20:
    // 0x474f20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x474f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_474f24:
    // 0x474f24: 0xc08bf20  jal         func_22FC80
label_474f28:
    if (ctx->pc == 0x474F28u) {
        ctx->pc = 0x474F28u;
            // 0x474f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474F2Cu;
        goto label_474f2c;
    }
    ctx->pc = 0x474F24u;
    SET_GPR_U32(ctx, 31, 0x474F2Cu);
    ctx->pc = 0x474F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F24u;
            // 0x474f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F2Cu; }
        if (ctx->pc != 0x474F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F2Cu; }
        if (ctx->pc != 0x474F2Cu) { return; }
    }
    ctx->pc = 0x474F2Cu;
label_474f2c:
    // 0x474f2c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x474f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_474f30:
    // 0x474f30: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x474f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_474f34:
    // 0x474f34: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x474f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_474f38:
    // 0x474f38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x474f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_474f3c:
    // 0x474f3c: 0xae420de4  sw          $v0, 0xDE4($s2)
    ctx->pc = 0x474f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
label_474f40:
    // 0x474f40: 0xc04cc90  jal         func_133240
label_474f44:
    if (ctx->pc == 0x474F44u) {
        ctx->pc = 0x474F44u;
            // 0x474f44: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x474F48u;
        goto label_474f48;
    }
    ctx->pc = 0x474F40u;
    SET_GPR_U32(ctx, 31, 0x474F48u);
    ctx->pc = 0x474F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F40u;
            // 0x474f44: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F48u; }
        if (ctx->pc != 0x474F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F48u; }
        if (ctx->pc != 0x474F48u) { return; }
    }
    ctx->pc = 0x474F48u;
label_474f48:
    // 0x474f48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x474f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_474f4c:
    // 0x474f4c: 0xc04cc44  jal         func_133110
label_474f50:
    if (ctx->pc == 0x474F50u) {
        ctx->pc = 0x474F50u;
            // 0x474f50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474F54u;
        goto label_474f54;
    }
    ctx->pc = 0x474F4Cu;
    SET_GPR_U32(ctx, 31, 0x474F54u);
    ctx->pc = 0x474F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F4Cu;
            // 0x474f50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F54u; }
        if (ctx->pc != 0x474F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F54u; }
        if (ctx->pc != 0x474F54u) { return; }
    }
    ctx->pc = 0x474F54u;
label_474f54:
    // 0x474f54: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x474f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_474f58:
    // 0x474f58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x474f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_474f5c:
    // 0x474f5c: 0xc075378  jal         func_1D4DE0
label_474f60:
    if (ctx->pc == 0x474F60u) {
        ctx->pc = 0x474F60u;
            // 0x474f60: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x474F64u;
        goto label_474f64;
    }
    ctx->pc = 0x474F5Cu;
    SET_GPR_U32(ctx, 31, 0x474F64u);
    ctx->pc = 0x474F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F5Cu;
            // 0x474f60: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F64u; }
        if (ctx->pc != 0x474F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F64u; }
        if (ctx->pc != 0x474F64u) { return; }
    }
    ctx->pc = 0x474F64u;
label_474f64:
    // 0x474f64: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x474f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_474f68:
    // 0x474f68: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x474f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_474f6c:
    // 0x474f6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x474f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_474f70:
    // 0x474f70: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x474f70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_474f74:
    // 0x474f74: 0xc0c753c  jal         func_31D4F0
label_474f78:
    if (ctx->pc == 0x474F78u) {
        ctx->pc = 0x474F78u;
            // 0x474f78: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x474F7Cu;
        goto label_474f7c;
    }
    ctx->pc = 0x474F74u;
    SET_GPR_U32(ctx, 31, 0x474F7Cu);
    ctx->pc = 0x474F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F74u;
            // 0x474f78: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F7Cu; }
        if (ctx->pc != 0x474F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F7Cu; }
        if (ctx->pc != 0x474F7Cu) { return; }
    }
    ctx->pc = 0x474F7Cu;
label_474f7c:
    // 0x474f7c: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x474f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_474f80:
    // 0x474f80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x474f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_474f84:
    // 0x474f84: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x474f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_474f88:
    // 0x474f88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x474f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_474f8c:
    // 0x474f8c: 0xc0c753c  jal         func_31D4F0
label_474f90:
    if (ctx->pc == 0x474F90u) {
        ctx->pc = 0x474F90u;
            // 0x474f90: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->pc = 0x474F94u;
        goto label_474f94;
    }
    ctx->pc = 0x474F8Cu;
    SET_GPR_U32(ctx, 31, 0x474F94u);
    ctx->pc = 0x474F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474F8Cu;
            // 0x474f90: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F94u; }
        if (ctx->pc != 0x474F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474F94u; }
        if (ctx->pc != 0x474F94u) { return; }
    }
    ctx->pc = 0x474F94u;
label_474f94:
    // 0x474f94: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x474f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_474f98:
    // 0x474f98: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x474f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_474f9c:
    // 0x474f9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x474f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_474fa0:
    // 0x474fa0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x474fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_474fa4:
    // 0x474fa4: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x474fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_474fa8:
    // 0x474fa8: 0xc0c6250  jal         func_318940
label_474fac:
    if (ctx->pc == 0x474FACu) {
        ctx->pc = 0x474FACu;
            // 0x474fac: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x474FB0u;
        goto label_474fb0;
    }
    ctx->pc = 0x474FA8u;
    SET_GPR_U32(ctx, 31, 0x474FB0u);
    ctx->pc = 0x474FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474FA8u;
            // 0x474fac: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474FB0u; }
        if (ctx->pc != 0x474FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474FB0u; }
        if (ctx->pc != 0x474FB0u) { return; }
    }
    ctx->pc = 0x474FB0u;
label_474fb0:
    // 0x474fb0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x474fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_474fb4:
    // 0x474fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x474fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_474fb8:
    // 0x474fb8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x474fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_474fbc:
    // 0x474fbc: 0x320f809  jalr        $t9
label_474fc0:
    if (ctx->pc == 0x474FC0u) {
        ctx->pc = 0x474FC0u;
            // 0x474fc0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x474FC4u;
        goto label_474fc4;
    }
    ctx->pc = 0x474FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474FC4u);
        ctx->pc = 0x474FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474FBCu;
            // 0x474fc0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x474FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474FC4u; }
            if (ctx->pc != 0x474FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x474FC4u;
label_474fc4:
    // 0x474fc4: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x474fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_474fc8:
    // 0x474fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x474fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474fcc:
    // 0x474fcc: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x474fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_474fd0:
    // 0x474fd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x474fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_474fd4:
    // 0x474fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x474fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_474fd8:
    // 0x474fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x474fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_474fdc:
    // 0x474fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x474fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474fe0:
    // 0x474fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x474fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_474fe4:
    // 0x474fe4: 0x3e00008  jr          $ra
label_474fe8:
    if (ctx->pc == 0x474FE8u) {
        ctx->pc = 0x474FE8u;
            // 0x474fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x474FECu;
        goto label_474fec;
    }
    ctx->pc = 0x474FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474FE4u;
            // 0x474fe8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474FECu;
label_474fec:
    // 0x474fec: 0x0  nop
    ctx->pc = 0x474fecu;
    // NOP
label_474ff0:
    // 0x474ff0: 0x3e00008  jr          $ra
label_474ff4:
    if (ctx->pc == 0x474FF4u) {
        ctx->pc = 0x474FF8u;
        goto label_474ff8;
    }
    ctx->pc = 0x474FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x474FF8u;
label_474ff8:
    // 0x474ff8: 0x0  nop
    ctx->pc = 0x474ff8u;
    // NOP
label_474ffc:
    // 0x474ffc: 0x0  nop
    ctx->pc = 0x474ffcu;
    // NOP
label_475000:
    // 0x475000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x475000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_475004:
    // 0x475004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_475008:
    // 0x475008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47500c:
    // 0x47500c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_475010:
    // 0x475010: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_475014:
    if (ctx->pc == 0x475014u) {
        ctx->pc = 0x475014u;
            // 0x475014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475018u;
        goto label_475018;
    }
    ctx->pc = 0x475010u;
    {
        const bool branch_taken_0x475010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x475010) {
            ctx->pc = 0x475014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475010u;
            // 0x475014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475064u;
            goto label_475064;
        }
    }
    ctx->pc = 0x475018u;
label_475018:
    // 0x475018: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x475018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47501c:
    // 0x47501c: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x47501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_475020:
    // 0x475020: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_475024:
    if (ctx->pc == 0x475024u) {
        ctx->pc = 0x475024u;
            // 0x475024: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x475028u;
        goto label_475028;
    }
    ctx->pc = 0x475020u;
    {
        const bool branch_taken_0x475020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x475024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475020u;
            // 0x475024: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475020) {
            ctx->pc = 0x475048u;
            goto label_475048;
        }
    }
    ctx->pc = 0x475028u;
label_475028:
    // 0x475028: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x475028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47502c:
    // 0x47502c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x47502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_475030:
    // 0x475030: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x475030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_475034:
    // 0x475034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_475038:
    if (ctx->pc == 0x475038u) {
        ctx->pc = 0x475038u;
            // 0x475038: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x47503Cu;
        goto label_47503c;
    }
    ctx->pc = 0x475034u;
    {
        const bool branch_taken_0x475034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475034u;
            // 0x475038: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475034) {
            ctx->pc = 0x475048u;
            goto label_475048;
        }
    }
    ctx->pc = 0x47503Cu;
label_47503c:
    // 0x47503c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_475040:
    // 0x475040: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x475040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_475044:
    // 0x475044: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x475044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_475048:
    // 0x475048: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x475048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_47504c:
    // 0x47504c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47504cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_475050:
    // 0x475050: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_475054:
    if (ctx->pc == 0x475054u) {
        ctx->pc = 0x475058u;
        goto label_475058;
    }
    ctx->pc = 0x475050u;
    {
        const bool branch_taken_0x475050 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x475050) {
            ctx->pc = 0x475060u;
            goto label_475060;
        }
    }
    ctx->pc = 0x475058u;
label_475058:
    // 0x475058: 0xc0400a8  jal         func_1002A0
label_47505c:
    if (ctx->pc == 0x47505Cu) {
        ctx->pc = 0x47505Cu;
            // 0x47505c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475060u;
        goto label_475060;
    }
    ctx->pc = 0x475058u;
    SET_GPR_U32(ctx, 31, 0x475060u);
    ctx->pc = 0x47505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475058u;
            // 0x47505c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475060u; }
        if (ctx->pc != 0x475060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475060u; }
        if (ctx->pc != 0x475060u) { return; }
    }
    ctx->pc = 0x475060u;
label_475060:
    // 0x475060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x475060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475064:
    // 0x475064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_475068:
    // 0x475068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47506c:
    // 0x47506c: 0x3e00008  jr          $ra
label_475070:
    if (ctx->pc == 0x475070u) {
        ctx->pc = 0x475070u;
            // 0x475070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x475074u;
        goto label_475074;
    }
    ctx->pc = 0x47506Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47506Cu;
            // 0x475070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x475074u;
label_475074:
    // 0x475074: 0x0  nop
    ctx->pc = 0x475074u;
    // NOP
label_475078:
    // 0x475078: 0x0  nop
    ctx->pc = 0x475078u;
    // NOP
label_47507c:
    // 0x47507c: 0x0  nop
    ctx->pc = 0x47507cu;
    // NOP
label_475080:
    // 0x475080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x475080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_475084:
    // 0x475084: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x475084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_475088:
    // 0x475088: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x475088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47508c:
    // 0x47508c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x47508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_475090:
    // 0x475090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x475090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_475094:
    // 0x475094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x475094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_475098:
    // 0x475098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47509c:
    // 0x47509c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47509cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4750a0:
    // 0x4750a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4750a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4750a4:
    // 0x4750a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4750a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4750a8:
    // 0x4750a8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x4750a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4750ac:
    // 0x4750ac: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x4750acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_4750b0:
    // 0x4750b0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4750b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4750b4:
    // 0x4750b4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x4750b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_4750b8:
    // 0x4750b8: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x4750b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_4750bc:
    // 0x4750bc: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x4750bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_4750c0:
    // 0x4750c0: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x4750c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_4750c4:
    // 0x4750c4: 0xc04c968  jal         func_1325A0
label_4750c8:
    if (ctx->pc == 0x4750C8u) {
        ctx->pc = 0x4750C8u;
            // 0x4750c8: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x4750CCu;
        goto label_4750cc;
    }
    ctx->pc = 0x4750C4u;
    SET_GPR_U32(ctx, 31, 0x4750CCu);
    ctx->pc = 0x4750C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4750C4u;
            // 0x4750c8: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750CCu; }
        if (ctx->pc != 0x4750CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750CCu; }
        if (ctx->pc != 0x4750CCu) { return; }
    }
    ctx->pc = 0x4750CCu;
label_4750cc:
    // 0x4750cc: 0xc04c968  jal         func_1325A0
label_4750d0:
    if (ctx->pc == 0x4750D0u) {
        ctx->pc = 0x4750D0u;
            // 0x4750d0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x4750D4u;
        goto label_4750d4;
    }
    ctx->pc = 0x4750CCu;
    SET_GPR_U32(ctx, 31, 0x4750D4u);
    ctx->pc = 0x4750D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4750CCu;
            // 0x4750d0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750D4u; }
        if (ctx->pc != 0x4750D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750D4u; }
        if (ctx->pc != 0x4750D4u) { return; }
    }
    ctx->pc = 0x4750D4u;
label_4750d4:
    // 0x4750d4: 0xc04c968  jal         func_1325A0
label_4750d8:
    if (ctx->pc == 0x4750D8u) {
        ctx->pc = 0x4750D8u;
            // 0x4750d8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x4750DCu;
        goto label_4750dc;
    }
    ctx->pc = 0x4750D4u;
    SET_GPR_U32(ctx, 31, 0x4750DCu);
    ctx->pc = 0x4750D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4750D4u;
            // 0x4750d8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750DCu; }
        if (ctx->pc != 0x4750DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750DCu; }
        if (ctx->pc != 0x4750DCu) { return; }
    }
    ctx->pc = 0x4750DCu;
label_4750dc:
    // 0x4750dc: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x4750dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_4750e0:
    // 0x4750e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4750e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4750e4:
    // 0x4750e4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x4750e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_4750e8:
    // 0x4750e8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x4750e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_4750ec:
    // 0x4750ec: 0xc04f26c  jal         func_13C9B0
label_4750f0:
    if (ctx->pc == 0x4750F0u) {
        ctx->pc = 0x4750F0u;
            // 0x4750f0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x4750F4u;
        goto label_4750f4;
    }
    ctx->pc = 0x4750ECu;
    SET_GPR_U32(ctx, 31, 0x4750F4u);
    ctx->pc = 0x4750F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4750ECu;
            // 0x4750f0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750F4u; }
        if (ctx->pc != 0x4750F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750F4u; }
        if (ctx->pc != 0x4750F4u) { return; }
    }
    ctx->pc = 0x4750F4u;
label_4750f4:
    // 0x4750f4: 0xc04c968  jal         func_1325A0
label_4750f8:
    if (ctx->pc == 0x4750F8u) {
        ctx->pc = 0x4750F8u;
            // 0x4750f8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4750FCu;
        goto label_4750fc;
    }
    ctx->pc = 0x4750F4u;
    SET_GPR_U32(ctx, 31, 0x4750FCu);
    ctx->pc = 0x4750F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4750F4u;
            // 0x4750f8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750FCu; }
        if (ctx->pc != 0x4750FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4750FCu; }
        if (ctx->pc != 0x4750FCu) { return; }
    }
    ctx->pc = 0x4750FCu;
label_4750fc:
    // 0x4750fc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4750fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_475100:
    // 0x475100: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x475100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_475104:
    // 0x475104: 0xc04cc04  jal         func_133010
label_475108:
    if (ctx->pc == 0x475108u) {
        ctx->pc = 0x475108u;
            // 0x475108: 0x24a5f2b0  addiu       $a1, $a1, -0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
        ctx->pc = 0x47510Cu;
        goto label_47510c;
    }
    ctx->pc = 0x475104u;
    SET_GPR_U32(ctx, 31, 0x47510Cu);
    ctx->pc = 0x475108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475104u;
            // 0x475108: 0x24a5f2b0  addiu       $a1, $a1, -0xD50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47510Cu; }
        if (ctx->pc != 0x47510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47510Cu; }
        if (ctx->pc != 0x47510Cu) { return; }
    }
    ctx->pc = 0x47510Cu;
label_47510c:
    // 0x47510c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x47510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_475110:
    // 0x475110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475114:
    // 0x475114: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x475114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_475118:
    // 0x475118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x475118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47511c:
    // 0x47511c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x47511cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_475120:
    // 0x475120: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x475120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_475124:
    // 0x475124: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x475124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_475128:
    // 0x475128: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x475128u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_47512c:
    // 0x47512c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x47512cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_475130:
    // 0x475130: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x475130u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_475134:
    // 0x475134: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x475134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_475138:
    // 0x475138: 0xc04cbd8  jal         func_132F60
label_47513c:
    if (ctx->pc == 0x47513Cu) {
        ctx->pc = 0x47513Cu;
            // 0x47513c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x475140u;
        goto label_475140;
    }
    ctx->pc = 0x475138u;
    SET_GPR_U32(ctx, 31, 0x475140u);
    ctx->pc = 0x47513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475138u;
            // 0x47513c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475140u; }
        if (ctx->pc != 0x475140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475140u; }
        if (ctx->pc != 0x475140u) { return; }
    }
    ctx->pc = 0x475140u;
label_475140:
    // 0x475140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475144:
    // 0x475144: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x475144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_475148:
    // 0x475148: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x475148u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_47514c:
    // 0x47514c: 0xc04cbd8  jal         func_132F60
label_475150:
    if (ctx->pc == 0x475150u) {
        ctx->pc = 0x475150u;
            // 0x475150: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x475154u;
        goto label_475154;
    }
    ctx->pc = 0x47514Cu;
    SET_GPR_U32(ctx, 31, 0x475154u);
    ctx->pc = 0x475150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47514Cu;
            // 0x475150: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475154u; }
        if (ctx->pc != 0x475154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475154u; }
        if (ctx->pc != 0x475154u) { return; }
    }
    ctx->pc = 0x475154u;
label_475154:
    // 0x475154: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475158:
    // 0x475158: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x475158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_47515c:
    // 0x47515c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x47515cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_475160:
    // 0x475160: 0xc04cbd8  jal         func_132F60
label_475164:
    if (ctx->pc == 0x475164u) {
        ctx->pc = 0x475164u;
            // 0x475164: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x475168u;
        goto label_475168;
    }
    ctx->pc = 0x475160u;
    SET_GPR_U32(ctx, 31, 0x475168u);
    ctx->pc = 0x475164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475160u;
            // 0x475164: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475168u; }
        if (ctx->pc != 0x475168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475168u; }
        if (ctx->pc != 0x475168u) { return; }
    }
    ctx->pc = 0x475168u;
label_475168:
    // 0x475168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47516c:
    // 0x47516c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x47516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_475170:
    // 0x475170: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x475170u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_475174:
    // 0x475174: 0xc04cbd8  jal         func_132F60
label_475178:
    if (ctx->pc == 0x475178u) {
        ctx->pc = 0x475178u;
            // 0x475178: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x47517Cu;
        goto label_47517c;
    }
    ctx->pc = 0x475174u;
    SET_GPR_U32(ctx, 31, 0x47517Cu);
    ctx->pc = 0x475178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475174u;
            // 0x475178: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47517Cu; }
        if (ctx->pc != 0x47517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47517Cu; }
        if (ctx->pc != 0x47517Cu) { return; }
    }
    ctx->pc = 0x47517Cu;
label_47517c:
    // 0x47517c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_475180:
    // 0x475180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x475180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475184:
    // 0x475184: 0x2463eb70  addiu       $v1, $v1, -0x1490
    ctx->pc = 0x475184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962032));
label_475188:
    // 0x475188: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x475188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47518c:
    // 0x47518c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_475190:
    // 0x475190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x475190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_475194:
    // 0x475194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x475194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_475198:
    // 0x475198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47519c:
    // 0x47519c: 0x3e00008  jr          $ra
label_4751a0:
    if (ctx->pc == 0x4751A0u) {
        ctx->pc = 0x4751A0u;
            // 0x4751a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4751A4u;
        goto label_4751a4;
    }
    ctx->pc = 0x47519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4751A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47519Cu;
            // 0x4751a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4751A4u;
label_4751a4:
    // 0x4751a4: 0x0  nop
    ctx->pc = 0x4751a4u;
    // NOP
label_4751a8:
    // 0x4751a8: 0x0  nop
    ctx->pc = 0x4751a8u;
    // NOP
label_4751ac:
    // 0x4751ac: 0x0  nop
    ctx->pc = 0x4751acu;
    // NOP
label_4751b0:
    // 0x4751b0: 0x3e00008  jr          $ra
label_4751b4:
    if (ctx->pc == 0x4751B4u) {
        ctx->pc = 0x4751B4u;
            // 0x4751b4: 0x24023ea8  addiu       $v0, $zero, 0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16040));
        ctx->pc = 0x4751B8u;
        goto label_4751b8;
    }
    ctx->pc = 0x4751B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4751B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4751B0u;
            // 0x4751b4: 0x24023ea8  addiu       $v0, $zero, 0x3EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4751B8u;
label_4751b8:
    // 0x4751b8: 0x0  nop
    ctx->pc = 0x4751b8u;
    // NOP
label_4751bc:
    // 0x4751bc: 0x0  nop
    ctx->pc = 0x4751bcu;
    // NOP
}
