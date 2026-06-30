#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004808A0
// Address: 0x4808a0 - 0x481180
void sub_004808A0_0x4808a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004808A0_0x4808a0");
#endif

    switch (ctx->pc) {
        case 0x4808a0u: goto label_4808a0;
        case 0x4808a4u: goto label_4808a4;
        case 0x4808a8u: goto label_4808a8;
        case 0x4808acu: goto label_4808ac;
        case 0x4808b0u: goto label_4808b0;
        case 0x4808b4u: goto label_4808b4;
        case 0x4808b8u: goto label_4808b8;
        case 0x4808bcu: goto label_4808bc;
        case 0x4808c0u: goto label_4808c0;
        case 0x4808c4u: goto label_4808c4;
        case 0x4808c8u: goto label_4808c8;
        case 0x4808ccu: goto label_4808cc;
        case 0x4808d0u: goto label_4808d0;
        case 0x4808d4u: goto label_4808d4;
        case 0x4808d8u: goto label_4808d8;
        case 0x4808dcu: goto label_4808dc;
        case 0x4808e0u: goto label_4808e0;
        case 0x4808e4u: goto label_4808e4;
        case 0x4808e8u: goto label_4808e8;
        case 0x4808ecu: goto label_4808ec;
        case 0x4808f0u: goto label_4808f0;
        case 0x4808f4u: goto label_4808f4;
        case 0x4808f8u: goto label_4808f8;
        case 0x4808fcu: goto label_4808fc;
        case 0x480900u: goto label_480900;
        case 0x480904u: goto label_480904;
        case 0x480908u: goto label_480908;
        case 0x48090cu: goto label_48090c;
        case 0x480910u: goto label_480910;
        case 0x480914u: goto label_480914;
        case 0x480918u: goto label_480918;
        case 0x48091cu: goto label_48091c;
        case 0x480920u: goto label_480920;
        case 0x480924u: goto label_480924;
        case 0x480928u: goto label_480928;
        case 0x48092cu: goto label_48092c;
        case 0x480930u: goto label_480930;
        case 0x480934u: goto label_480934;
        case 0x480938u: goto label_480938;
        case 0x48093cu: goto label_48093c;
        case 0x480940u: goto label_480940;
        case 0x480944u: goto label_480944;
        case 0x480948u: goto label_480948;
        case 0x48094cu: goto label_48094c;
        case 0x480950u: goto label_480950;
        case 0x480954u: goto label_480954;
        case 0x480958u: goto label_480958;
        case 0x48095cu: goto label_48095c;
        case 0x480960u: goto label_480960;
        case 0x480964u: goto label_480964;
        case 0x480968u: goto label_480968;
        case 0x48096cu: goto label_48096c;
        case 0x480970u: goto label_480970;
        case 0x480974u: goto label_480974;
        case 0x480978u: goto label_480978;
        case 0x48097cu: goto label_48097c;
        case 0x480980u: goto label_480980;
        case 0x480984u: goto label_480984;
        case 0x480988u: goto label_480988;
        case 0x48098cu: goto label_48098c;
        case 0x480990u: goto label_480990;
        case 0x480994u: goto label_480994;
        case 0x480998u: goto label_480998;
        case 0x48099cu: goto label_48099c;
        case 0x4809a0u: goto label_4809a0;
        case 0x4809a4u: goto label_4809a4;
        case 0x4809a8u: goto label_4809a8;
        case 0x4809acu: goto label_4809ac;
        case 0x4809b0u: goto label_4809b0;
        case 0x4809b4u: goto label_4809b4;
        case 0x4809b8u: goto label_4809b8;
        case 0x4809bcu: goto label_4809bc;
        case 0x4809c0u: goto label_4809c0;
        case 0x4809c4u: goto label_4809c4;
        case 0x4809c8u: goto label_4809c8;
        case 0x4809ccu: goto label_4809cc;
        case 0x4809d0u: goto label_4809d0;
        case 0x4809d4u: goto label_4809d4;
        case 0x4809d8u: goto label_4809d8;
        case 0x4809dcu: goto label_4809dc;
        case 0x4809e0u: goto label_4809e0;
        case 0x4809e4u: goto label_4809e4;
        case 0x4809e8u: goto label_4809e8;
        case 0x4809ecu: goto label_4809ec;
        case 0x4809f0u: goto label_4809f0;
        case 0x4809f4u: goto label_4809f4;
        case 0x4809f8u: goto label_4809f8;
        case 0x4809fcu: goto label_4809fc;
        case 0x480a00u: goto label_480a00;
        case 0x480a04u: goto label_480a04;
        case 0x480a08u: goto label_480a08;
        case 0x480a0cu: goto label_480a0c;
        case 0x480a10u: goto label_480a10;
        case 0x480a14u: goto label_480a14;
        case 0x480a18u: goto label_480a18;
        case 0x480a1cu: goto label_480a1c;
        case 0x480a20u: goto label_480a20;
        case 0x480a24u: goto label_480a24;
        case 0x480a28u: goto label_480a28;
        case 0x480a2cu: goto label_480a2c;
        case 0x480a30u: goto label_480a30;
        case 0x480a34u: goto label_480a34;
        case 0x480a38u: goto label_480a38;
        case 0x480a3cu: goto label_480a3c;
        case 0x480a40u: goto label_480a40;
        case 0x480a44u: goto label_480a44;
        case 0x480a48u: goto label_480a48;
        case 0x480a4cu: goto label_480a4c;
        case 0x480a50u: goto label_480a50;
        case 0x480a54u: goto label_480a54;
        case 0x480a58u: goto label_480a58;
        case 0x480a5cu: goto label_480a5c;
        case 0x480a60u: goto label_480a60;
        case 0x480a64u: goto label_480a64;
        case 0x480a68u: goto label_480a68;
        case 0x480a6cu: goto label_480a6c;
        case 0x480a70u: goto label_480a70;
        case 0x480a74u: goto label_480a74;
        case 0x480a78u: goto label_480a78;
        case 0x480a7cu: goto label_480a7c;
        case 0x480a80u: goto label_480a80;
        case 0x480a84u: goto label_480a84;
        case 0x480a88u: goto label_480a88;
        case 0x480a8cu: goto label_480a8c;
        case 0x480a90u: goto label_480a90;
        case 0x480a94u: goto label_480a94;
        case 0x480a98u: goto label_480a98;
        case 0x480a9cu: goto label_480a9c;
        case 0x480aa0u: goto label_480aa0;
        case 0x480aa4u: goto label_480aa4;
        case 0x480aa8u: goto label_480aa8;
        case 0x480aacu: goto label_480aac;
        case 0x480ab0u: goto label_480ab0;
        case 0x480ab4u: goto label_480ab4;
        case 0x480ab8u: goto label_480ab8;
        case 0x480abcu: goto label_480abc;
        case 0x480ac0u: goto label_480ac0;
        case 0x480ac4u: goto label_480ac4;
        case 0x480ac8u: goto label_480ac8;
        case 0x480accu: goto label_480acc;
        case 0x480ad0u: goto label_480ad0;
        case 0x480ad4u: goto label_480ad4;
        case 0x480ad8u: goto label_480ad8;
        case 0x480adcu: goto label_480adc;
        case 0x480ae0u: goto label_480ae0;
        case 0x480ae4u: goto label_480ae4;
        case 0x480ae8u: goto label_480ae8;
        case 0x480aecu: goto label_480aec;
        case 0x480af0u: goto label_480af0;
        case 0x480af4u: goto label_480af4;
        case 0x480af8u: goto label_480af8;
        case 0x480afcu: goto label_480afc;
        case 0x480b00u: goto label_480b00;
        case 0x480b04u: goto label_480b04;
        case 0x480b08u: goto label_480b08;
        case 0x480b0cu: goto label_480b0c;
        case 0x480b10u: goto label_480b10;
        case 0x480b14u: goto label_480b14;
        case 0x480b18u: goto label_480b18;
        case 0x480b1cu: goto label_480b1c;
        case 0x480b20u: goto label_480b20;
        case 0x480b24u: goto label_480b24;
        case 0x480b28u: goto label_480b28;
        case 0x480b2cu: goto label_480b2c;
        case 0x480b30u: goto label_480b30;
        case 0x480b34u: goto label_480b34;
        case 0x480b38u: goto label_480b38;
        case 0x480b3cu: goto label_480b3c;
        case 0x480b40u: goto label_480b40;
        case 0x480b44u: goto label_480b44;
        case 0x480b48u: goto label_480b48;
        case 0x480b4cu: goto label_480b4c;
        case 0x480b50u: goto label_480b50;
        case 0x480b54u: goto label_480b54;
        case 0x480b58u: goto label_480b58;
        case 0x480b5cu: goto label_480b5c;
        case 0x480b60u: goto label_480b60;
        case 0x480b64u: goto label_480b64;
        case 0x480b68u: goto label_480b68;
        case 0x480b6cu: goto label_480b6c;
        case 0x480b70u: goto label_480b70;
        case 0x480b74u: goto label_480b74;
        case 0x480b78u: goto label_480b78;
        case 0x480b7cu: goto label_480b7c;
        case 0x480b80u: goto label_480b80;
        case 0x480b84u: goto label_480b84;
        case 0x480b88u: goto label_480b88;
        case 0x480b8cu: goto label_480b8c;
        case 0x480b90u: goto label_480b90;
        case 0x480b94u: goto label_480b94;
        case 0x480b98u: goto label_480b98;
        case 0x480b9cu: goto label_480b9c;
        case 0x480ba0u: goto label_480ba0;
        case 0x480ba4u: goto label_480ba4;
        case 0x480ba8u: goto label_480ba8;
        case 0x480bacu: goto label_480bac;
        case 0x480bb0u: goto label_480bb0;
        case 0x480bb4u: goto label_480bb4;
        case 0x480bb8u: goto label_480bb8;
        case 0x480bbcu: goto label_480bbc;
        case 0x480bc0u: goto label_480bc0;
        case 0x480bc4u: goto label_480bc4;
        case 0x480bc8u: goto label_480bc8;
        case 0x480bccu: goto label_480bcc;
        case 0x480bd0u: goto label_480bd0;
        case 0x480bd4u: goto label_480bd4;
        case 0x480bd8u: goto label_480bd8;
        case 0x480bdcu: goto label_480bdc;
        case 0x480be0u: goto label_480be0;
        case 0x480be4u: goto label_480be4;
        case 0x480be8u: goto label_480be8;
        case 0x480becu: goto label_480bec;
        case 0x480bf0u: goto label_480bf0;
        case 0x480bf4u: goto label_480bf4;
        case 0x480bf8u: goto label_480bf8;
        case 0x480bfcu: goto label_480bfc;
        case 0x480c00u: goto label_480c00;
        case 0x480c04u: goto label_480c04;
        case 0x480c08u: goto label_480c08;
        case 0x480c0cu: goto label_480c0c;
        case 0x480c10u: goto label_480c10;
        case 0x480c14u: goto label_480c14;
        case 0x480c18u: goto label_480c18;
        case 0x480c1cu: goto label_480c1c;
        case 0x480c20u: goto label_480c20;
        case 0x480c24u: goto label_480c24;
        case 0x480c28u: goto label_480c28;
        case 0x480c2cu: goto label_480c2c;
        case 0x480c30u: goto label_480c30;
        case 0x480c34u: goto label_480c34;
        case 0x480c38u: goto label_480c38;
        case 0x480c3cu: goto label_480c3c;
        case 0x480c40u: goto label_480c40;
        case 0x480c44u: goto label_480c44;
        case 0x480c48u: goto label_480c48;
        case 0x480c4cu: goto label_480c4c;
        case 0x480c50u: goto label_480c50;
        case 0x480c54u: goto label_480c54;
        case 0x480c58u: goto label_480c58;
        case 0x480c5cu: goto label_480c5c;
        case 0x480c60u: goto label_480c60;
        case 0x480c64u: goto label_480c64;
        case 0x480c68u: goto label_480c68;
        case 0x480c6cu: goto label_480c6c;
        case 0x480c70u: goto label_480c70;
        case 0x480c74u: goto label_480c74;
        case 0x480c78u: goto label_480c78;
        case 0x480c7cu: goto label_480c7c;
        case 0x480c80u: goto label_480c80;
        case 0x480c84u: goto label_480c84;
        case 0x480c88u: goto label_480c88;
        case 0x480c8cu: goto label_480c8c;
        case 0x480c90u: goto label_480c90;
        case 0x480c94u: goto label_480c94;
        case 0x480c98u: goto label_480c98;
        case 0x480c9cu: goto label_480c9c;
        case 0x480ca0u: goto label_480ca0;
        case 0x480ca4u: goto label_480ca4;
        case 0x480ca8u: goto label_480ca8;
        case 0x480cacu: goto label_480cac;
        case 0x480cb0u: goto label_480cb0;
        case 0x480cb4u: goto label_480cb4;
        case 0x480cb8u: goto label_480cb8;
        case 0x480cbcu: goto label_480cbc;
        case 0x480cc0u: goto label_480cc0;
        case 0x480cc4u: goto label_480cc4;
        case 0x480cc8u: goto label_480cc8;
        case 0x480cccu: goto label_480ccc;
        case 0x480cd0u: goto label_480cd0;
        case 0x480cd4u: goto label_480cd4;
        case 0x480cd8u: goto label_480cd8;
        case 0x480cdcu: goto label_480cdc;
        case 0x480ce0u: goto label_480ce0;
        case 0x480ce4u: goto label_480ce4;
        case 0x480ce8u: goto label_480ce8;
        case 0x480cecu: goto label_480cec;
        case 0x480cf0u: goto label_480cf0;
        case 0x480cf4u: goto label_480cf4;
        case 0x480cf8u: goto label_480cf8;
        case 0x480cfcu: goto label_480cfc;
        case 0x480d00u: goto label_480d00;
        case 0x480d04u: goto label_480d04;
        case 0x480d08u: goto label_480d08;
        case 0x480d0cu: goto label_480d0c;
        case 0x480d10u: goto label_480d10;
        case 0x480d14u: goto label_480d14;
        case 0x480d18u: goto label_480d18;
        case 0x480d1cu: goto label_480d1c;
        case 0x480d20u: goto label_480d20;
        case 0x480d24u: goto label_480d24;
        case 0x480d28u: goto label_480d28;
        case 0x480d2cu: goto label_480d2c;
        case 0x480d30u: goto label_480d30;
        case 0x480d34u: goto label_480d34;
        case 0x480d38u: goto label_480d38;
        case 0x480d3cu: goto label_480d3c;
        case 0x480d40u: goto label_480d40;
        case 0x480d44u: goto label_480d44;
        case 0x480d48u: goto label_480d48;
        case 0x480d4cu: goto label_480d4c;
        case 0x480d50u: goto label_480d50;
        case 0x480d54u: goto label_480d54;
        case 0x480d58u: goto label_480d58;
        case 0x480d5cu: goto label_480d5c;
        case 0x480d60u: goto label_480d60;
        case 0x480d64u: goto label_480d64;
        case 0x480d68u: goto label_480d68;
        case 0x480d6cu: goto label_480d6c;
        case 0x480d70u: goto label_480d70;
        case 0x480d74u: goto label_480d74;
        case 0x480d78u: goto label_480d78;
        case 0x480d7cu: goto label_480d7c;
        case 0x480d80u: goto label_480d80;
        case 0x480d84u: goto label_480d84;
        case 0x480d88u: goto label_480d88;
        case 0x480d8cu: goto label_480d8c;
        case 0x480d90u: goto label_480d90;
        case 0x480d94u: goto label_480d94;
        case 0x480d98u: goto label_480d98;
        case 0x480d9cu: goto label_480d9c;
        case 0x480da0u: goto label_480da0;
        case 0x480da4u: goto label_480da4;
        case 0x480da8u: goto label_480da8;
        case 0x480dacu: goto label_480dac;
        case 0x480db0u: goto label_480db0;
        case 0x480db4u: goto label_480db4;
        case 0x480db8u: goto label_480db8;
        case 0x480dbcu: goto label_480dbc;
        case 0x480dc0u: goto label_480dc0;
        case 0x480dc4u: goto label_480dc4;
        case 0x480dc8u: goto label_480dc8;
        case 0x480dccu: goto label_480dcc;
        case 0x480dd0u: goto label_480dd0;
        case 0x480dd4u: goto label_480dd4;
        case 0x480dd8u: goto label_480dd8;
        case 0x480ddcu: goto label_480ddc;
        case 0x480de0u: goto label_480de0;
        case 0x480de4u: goto label_480de4;
        case 0x480de8u: goto label_480de8;
        case 0x480decu: goto label_480dec;
        case 0x480df0u: goto label_480df0;
        case 0x480df4u: goto label_480df4;
        case 0x480df8u: goto label_480df8;
        case 0x480dfcu: goto label_480dfc;
        case 0x480e00u: goto label_480e00;
        case 0x480e04u: goto label_480e04;
        case 0x480e08u: goto label_480e08;
        case 0x480e0cu: goto label_480e0c;
        case 0x480e10u: goto label_480e10;
        case 0x480e14u: goto label_480e14;
        case 0x480e18u: goto label_480e18;
        case 0x480e1cu: goto label_480e1c;
        case 0x480e20u: goto label_480e20;
        case 0x480e24u: goto label_480e24;
        case 0x480e28u: goto label_480e28;
        case 0x480e2cu: goto label_480e2c;
        case 0x480e30u: goto label_480e30;
        case 0x480e34u: goto label_480e34;
        case 0x480e38u: goto label_480e38;
        case 0x480e3cu: goto label_480e3c;
        case 0x480e40u: goto label_480e40;
        case 0x480e44u: goto label_480e44;
        case 0x480e48u: goto label_480e48;
        case 0x480e4cu: goto label_480e4c;
        case 0x480e50u: goto label_480e50;
        case 0x480e54u: goto label_480e54;
        case 0x480e58u: goto label_480e58;
        case 0x480e5cu: goto label_480e5c;
        case 0x480e60u: goto label_480e60;
        case 0x480e64u: goto label_480e64;
        case 0x480e68u: goto label_480e68;
        case 0x480e6cu: goto label_480e6c;
        case 0x480e70u: goto label_480e70;
        case 0x480e74u: goto label_480e74;
        case 0x480e78u: goto label_480e78;
        case 0x480e7cu: goto label_480e7c;
        case 0x480e80u: goto label_480e80;
        case 0x480e84u: goto label_480e84;
        case 0x480e88u: goto label_480e88;
        case 0x480e8cu: goto label_480e8c;
        case 0x480e90u: goto label_480e90;
        case 0x480e94u: goto label_480e94;
        case 0x480e98u: goto label_480e98;
        case 0x480e9cu: goto label_480e9c;
        case 0x480ea0u: goto label_480ea0;
        case 0x480ea4u: goto label_480ea4;
        case 0x480ea8u: goto label_480ea8;
        case 0x480eacu: goto label_480eac;
        case 0x480eb0u: goto label_480eb0;
        case 0x480eb4u: goto label_480eb4;
        case 0x480eb8u: goto label_480eb8;
        case 0x480ebcu: goto label_480ebc;
        case 0x480ec0u: goto label_480ec0;
        case 0x480ec4u: goto label_480ec4;
        case 0x480ec8u: goto label_480ec8;
        case 0x480eccu: goto label_480ecc;
        case 0x480ed0u: goto label_480ed0;
        case 0x480ed4u: goto label_480ed4;
        case 0x480ed8u: goto label_480ed8;
        case 0x480edcu: goto label_480edc;
        case 0x480ee0u: goto label_480ee0;
        case 0x480ee4u: goto label_480ee4;
        case 0x480ee8u: goto label_480ee8;
        case 0x480eecu: goto label_480eec;
        case 0x480ef0u: goto label_480ef0;
        case 0x480ef4u: goto label_480ef4;
        case 0x480ef8u: goto label_480ef8;
        case 0x480efcu: goto label_480efc;
        case 0x480f00u: goto label_480f00;
        case 0x480f04u: goto label_480f04;
        case 0x480f08u: goto label_480f08;
        case 0x480f0cu: goto label_480f0c;
        case 0x480f10u: goto label_480f10;
        case 0x480f14u: goto label_480f14;
        case 0x480f18u: goto label_480f18;
        case 0x480f1cu: goto label_480f1c;
        case 0x480f20u: goto label_480f20;
        case 0x480f24u: goto label_480f24;
        case 0x480f28u: goto label_480f28;
        case 0x480f2cu: goto label_480f2c;
        case 0x480f30u: goto label_480f30;
        case 0x480f34u: goto label_480f34;
        case 0x480f38u: goto label_480f38;
        case 0x480f3cu: goto label_480f3c;
        case 0x480f40u: goto label_480f40;
        case 0x480f44u: goto label_480f44;
        case 0x480f48u: goto label_480f48;
        case 0x480f4cu: goto label_480f4c;
        case 0x480f50u: goto label_480f50;
        case 0x480f54u: goto label_480f54;
        case 0x480f58u: goto label_480f58;
        case 0x480f5cu: goto label_480f5c;
        case 0x480f60u: goto label_480f60;
        case 0x480f64u: goto label_480f64;
        case 0x480f68u: goto label_480f68;
        case 0x480f6cu: goto label_480f6c;
        case 0x480f70u: goto label_480f70;
        case 0x480f74u: goto label_480f74;
        case 0x480f78u: goto label_480f78;
        case 0x480f7cu: goto label_480f7c;
        case 0x480f80u: goto label_480f80;
        case 0x480f84u: goto label_480f84;
        case 0x480f88u: goto label_480f88;
        case 0x480f8cu: goto label_480f8c;
        case 0x480f90u: goto label_480f90;
        case 0x480f94u: goto label_480f94;
        case 0x480f98u: goto label_480f98;
        case 0x480f9cu: goto label_480f9c;
        case 0x480fa0u: goto label_480fa0;
        case 0x480fa4u: goto label_480fa4;
        case 0x480fa8u: goto label_480fa8;
        case 0x480facu: goto label_480fac;
        case 0x480fb0u: goto label_480fb0;
        case 0x480fb4u: goto label_480fb4;
        case 0x480fb8u: goto label_480fb8;
        case 0x480fbcu: goto label_480fbc;
        case 0x480fc0u: goto label_480fc0;
        case 0x480fc4u: goto label_480fc4;
        case 0x480fc8u: goto label_480fc8;
        case 0x480fccu: goto label_480fcc;
        case 0x480fd0u: goto label_480fd0;
        case 0x480fd4u: goto label_480fd4;
        case 0x480fd8u: goto label_480fd8;
        case 0x480fdcu: goto label_480fdc;
        case 0x480fe0u: goto label_480fe0;
        case 0x480fe4u: goto label_480fe4;
        case 0x480fe8u: goto label_480fe8;
        case 0x480fecu: goto label_480fec;
        case 0x480ff0u: goto label_480ff0;
        case 0x480ff4u: goto label_480ff4;
        case 0x480ff8u: goto label_480ff8;
        case 0x480ffcu: goto label_480ffc;
        case 0x481000u: goto label_481000;
        case 0x481004u: goto label_481004;
        case 0x481008u: goto label_481008;
        case 0x48100cu: goto label_48100c;
        case 0x481010u: goto label_481010;
        case 0x481014u: goto label_481014;
        case 0x481018u: goto label_481018;
        case 0x48101cu: goto label_48101c;
        case 0x481020u: goto label_481020;
        case 0x481024u: goto label_481024;
        case 0x481028u: goto label_481028;
        case 0x48102cu: goto label_48102c;
        case 0x481030u: goto label_481030;
        case 0x481034u: goto label_481034;
        case 0x481038u: goto label_481038;
        case 0x48103cu: goto label_48103c;
        case 0x481040u: goto label_481040;
        case 0x481044u: goto label_481044;
        case 0x481048u: goto label_481048;
        case 0x48104cu: goto label_48104c;
        case 0x481050u: goto label_481050;
        case 0x481054u: goto label_481054;
        case 0x481058u: goto label_481058;
        case 0x48105cu: goto label_48105c;
        case 0x481060u: goto label_481060;
        case 0x481064u: goto label_481064;
        case 0x481068u: goto label_481068;
        case 0x48106cu: goto label_48106c;
        case 0x481070u: goto label_481070;
        case 0x481074u: goto label_481074;
        case 0x481078u: goto label_481078;
        case 0x48107cu: goto label_48107c;
        case 0x481080u: goto label_481080;
        case 0x481084u: goto label_481084;
        case 0x481088u: goto label_481088;
        case 0x48108cu: goto label_48108c;
        case 0x481090u: goto label_481090;
        case 0x481094u: goto label_481094;
        case 0x481098u: goto label_481098;
        case 0x48109cu: goto label_48109c;
        case 0x4810a0u: goto label_4810a0;
        case 0x4810a4u: goto label_4810a4;
        case 0x4810a8u: goto label_4810a8;
        case 0x4810acu: goto label_4810ac;
        case 0x4810b0u: goto label_4810b0;
        case 0x4810b4u: goto label_4810b4;
        case 0x4810b8u: goto label_4810b8;
        case 0x4810bcu: goto label_4810bc;
        case 0x4810c0u: goto label_4810c0;
        case 0x4810c4u: goto label_4810c4;
        case 0x4810c8u: goto label_4810c8;
        case 0x4810ccu: goto label_4810cc;
        case 0x4810d0u: goto label_4810d0;
        case 0x4810d4u: goto label_4810d4;
        case 0x4810d8u: goto label_4810d8;
        case 0x4810dcu: goto label_4810dc;
        case 0x4810e0u: goto label_4810e0;
        case 0x4810e4u: goto label_4810e4;
        case 0x4810e8u: goto label_4810e8;
        case 0x4810ecu: goto label_4810ec;
        case 0x4810f0u: goto label_4810f0;
        case 0x4810f4u: goto label_4810f4;
        case 0x4810f8u: goto label_4810f8;
        case 0x4810fcu: goto label_4810fc;
        case 0x481100u: goto label_481100;
        case 0x481104u: goto label_481104;
        case 0x481108u: goto label_481108;
        case 0x48110cu: goto label_48110c;
        case 0x481110u: goto label_481110;
        case 0x481114u: goto label_481114;
        case 0x481118u: goto label_481118;
        case 0x48111cu: goto label_48111c;
        case 0x481120u: goto label_481120;
        case 0x481124u: goto label_481124;
        case 0x481128u: goto label_481128;
        case 0x48112cu: goto label_48112c;
        case 0x481130u: goto label_481130;
        case 0x481134u: goto label_481134;
        case 0x481138u: goto label_481138;
        case 0x48113cu: goto label_48113c;
        case 0x481140u: goto label_481140;
        case 0x481144u: goto label_481144;
        case 0x481148u: goto label_481148;
        case 0x48114cu: goto label_48114c;
        case 0x481150u: goto label_481150;
        case 0x481154u: goto label_481154;
        case 0x481158u: goto label_481158;
        case 0x48115cu: goto label_48115c;
        case 0x481160u: goto label_481160;
        case 0x481164u: goto label_481164;
        case 0x481168u: goto label_481168;
        case 0x48116cu: goto label_48116c;
        case 0x481170u: goto label_481170;
        case 0x481174u: goto label_481174;
        case 0x481178u: goto label_481178;
        case 0x48117cu: goto label_48117c;
        default: break;
    }

    ctx->pc = 0x4808a0u;

label_4808a0:
    // 0x4808a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4808a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4808a4:
    // 0x4808a4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x4808a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_4808a8:
    // 0x4808a8: 0x2442eef8  addiu       $v0, $v0, -0x1108
    ctx->pc = 0x4808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962936));
label_4808ac:
    // 0x4808ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4808acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4808b0:
    // 0x4808b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4808b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4808b4:
    // 0x4808b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4808b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4808b8:
    // 0x4808b8: 0x3e00008  jr          $ra
label_4808bc:
    if (ctx->pc == 0x4808BCu) {
        ctx->pc = 0x4808BCu;
            // 0x4808bc: 0xac657780  sw          $a1, 0x7780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30592), GPR_U32(ctx, 5));
        ctx->pc = 0x4808C0u;
        goto label_4808c0;
    }
    ctx->pc = 0x4808B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4808BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4808B8u;
            // 0x4808bc: 0xac657780  sw          $a1, 0x7780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4808C0u;
label_4808c0:
    // 0x4808c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4808c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4808c4:
    // 0x4808c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4808c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4808c8:
    // 0x4808c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4808c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4808cc:
    // 0x4808cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4808ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4808d0:
    // 0x4808d0: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x4808d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4808d4:
    // 0x4808d4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x4808d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4808d8:
    // 0x4808d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4808d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4808dc:
    // 0x4808dc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4808dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4808e0:
    // 0x4808e0: 0x320f809  jalr        $t9
label_4808e4:
    if (ctx->pc == 0x4808E4u) {
        ctx->pc = 0x4808E4u;
            // 0x4808e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4808E8u;
        goto label_4808e8;
    }
    ctx->pc = 0x4808E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4808E8u);
        ctx->pc = 0x4808E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4808E0u;
            // 0x4808e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4808E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4808E8u; }
            if (ctx->pc != 0x4808E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4808E8u;
label_4808e8:
    // 0x4808e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4808e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4808ec:
    // 0x4808ec: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_4808f0:
    if (ctx->pc == 0x4808F0u) {
        ctx->pc = 0x4808F0u;
            // 0x4808f0: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x4808F4u;
        goto label_4808f4;
    }
    ctx->pc = 0x4808ECu;
    {
        const bool branch_taken_0x4808ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4808F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4808ECu;
            // 0x4808f0: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4808ec) {
            ctx->pc = 0x4808D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4808d8;
        }
    }
    ctx->pc = 0x4808F4u;
label_4808f4:
    // 0x4808f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4808f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4808f8:
    // 0x4808f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4808f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4808fc:
    // 0x4808fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4808fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480900:
    // 0x480900: 0x3e00008  jr          $ra
label_480904:
    if (ctx->pc == 0x480904u) {
        ctx->pc = 0x480904u;
            // 0x480904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x480908u;
        goto label_480908;
    }
    ctx->pc = 0x480900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480900u;
            // 0x480904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480908u;
label_480908:
    // 0x480908: 0x0  nop
    ctx->pc = 0x480908u;
    // NOP
label_48090c:
    // 0x48090c: 0x0  nop
    ctx->pc = 0x48090cu;
    // NOP
label_480910:
    // 0x480910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x480910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_480914:
    // 0x480914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x480914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_480918:
    // 0x480918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48091c:
    // 0x48091c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480920:
    // 0x480920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x480920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480924:
    // 0x480924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480928:
    // 0x480928: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x480928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_48092c:
    // 0x48092c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48092cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480930:
    // 0x480930: 0xae3200d4  sw          $s2, 0xD4($s1)
    ctx->pc = 0x480930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 18));
label_480934:
    // 0x480934: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x480934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_480938:
    // 0x480938: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x480938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_48093c:
    // 0x48093c: 0xc0d879c  jal         func_361E70
label_480940:
    if (ctx->pc == 0x480940u) {
        ctx->pc = 0x480940u;
            // 0x480940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480944u;
        goto label_480944;
    }
    ctx->pc = 0x48093Cu;
    SET_GPR_U32(ctx, 31, 0x480944u);
    ctx->pc = 0x480940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48093Cu;
            // 0x480940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480944u; }
        if (ctx->pc != 0x480944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480944u; }
        if (ctx->pc != 0x480944u) { return; }
    }
    ctx->pc = 0x480944u;
label_480944:
    // 0x480944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x480944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_480948:
    // 0x480948: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x480948u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_48094c:
    // 0x48094c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_480950:
    if (ctx->pc == 0x480950u) {
        ctx->pc = 0x480950u;
            // 0x480950: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x480954u;
        goto label_480954;
    }
    ctx->pc = 0x48094Cu;
    {
        const bool branch_taken_0x48094c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x480950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48094Cu;
            // 0x480950: 0x263100e0  addiu       $s1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48094c) {
            ctx->pc = 0x480930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_480930;
        }
    }
    ctx->pc = 0x480954u;
label_480954:
    // 0x480954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x480954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_480958:
    // 0x480958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48095c:
    // 0x48095c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48095cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480960:
    // 0x480960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480964:
    // 0x480964: 0x3e00008  jr          $ra
label_480968:
    if (ctx->pc == 0x480968u) {
        ctx->pc = 0x480968u;
            // 0x480968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48096Cu;
        goto label_48096c;
    }
    ctx->pc = 0x480964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480964u;
            // 0x480968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48096Cu;
label_48096c:
    // 0x48096c: 0x0  nop
    ctx->pc = 0x48096cu;
    // NOP
label_480970:
    // 0x480970: 0x3e00008  jr          $ra
label_480974:
    if (ctx->pc == 0x480974u) {
        ctx->pc = 0x480978u;
        goto label_480978;
    }
    ctx->pc = 0x480970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480978u;
label_480978:
    // 0x480978: 0x0  nop
    ctx->pc = 0x480978u;
    // NOP
label_48097c:
    // 0x48097c: 0x0  nop
    ctx->pc = 0x48097cu;
    // NOP
label_480980:
    // 0x480980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x480980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_480984:
    // 0x480984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x480984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_480988:
    // 0x480988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48098c:
    // 0x48098c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480990:
    // 0x480990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x480990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480994:
    // 0x480994: 0xc0e34b0  jal         func_38D2C0
label_480998:
    if (ctx->pc == 0x480998u) {
        ctx->pc = 0x480998u;
            // 0x480998: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48099Cu;
        goto label_48099c;
    }
    ctx->pc = 0x480994u;
    SET_GPR_U32(ctx, 31, 0x48099Cu);
    ctx->pc = 0x480998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480994u;
            // 0x480998: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48099Cu; }
        if (ctx->pc != 0x48099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48099Cu; }
        if (ctx->pc != 0x48099Cu) { return; }
    }
    ctx->pc = 0x48099Cu;
label_48099c:
    // 0x48099c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x48099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4809a0:
    // 0x4809a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4809a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4809a4:
    // 0x4809a4: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_4809a8:
    if (ctx->pc == 0x4809A8u) {
        ctx->pc = 0x4809A8u;
            // 0x4809a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4809ACu;
        goto label_4809ac;
    }
    ctx->pc = 0x4809A4u;
    {
        const bool branch_taken_0x4809a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4809a4) {
            ctx->pc = 0x4809A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4809A4u;
            // 0x4809a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4809C8u;
            goto label_4809c8;
        }
    }
    ctx->pc = 0x4809ACu;
label_4809ac:
    // 0x4809ac: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x4809acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4809b0:
    // 0x4809b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4809b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4809b4:
    // 0x4809b4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4809b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4809b8:
    // 0x4809b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4809b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4809bc:
    // 0x4809bc: 0x320f809  jalr        $t9
label_4809c0:
    if (ctx->pc == 0x4809C0u) {
        ctx->pc = 0x4809C0u;
            // 0x4809c0: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->pc = 0x4809C4u;
        goto label_4809c4;
    }
    ctx->pc = 0x4809BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4809C4u);
        ctx->pc = 0x4809C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4809BCu;
            // 0x4809c0: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4809C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4809C4u; }
            if (ctx->pc != 0x4809C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4809C4u;
label_4809c4:
    // 0x4809c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4809c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4809c8:
    // 0x4809c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4809c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4809cc:
    // 0x4809cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4809ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4809d0:
    // 0x4809d0: 0x3e00008  jr          $ra
label_4809d4:
    if (ctx->pc == 0x4809D4u) {
        ctx->pc = 0x4809D4u;
            // 0x4809d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4809D8u;
        goto label_4809d8;
    }
    ctx->pc = 0x4809D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4809D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4809D0u;
            // 0x4809d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4809D8u;
label_4809d8:
    // 0x4809d8: 0x0  nop
    ctx->pc = 0x4809d8u;
    // NOP
label_4809dc:
    // 0x4809dc: 0x0  nop
    ctx->pc = 0x4809dcu;
    // NOP
label_4809e0:
    // 0x4809e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4809e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4809e4:
    // 0x4809e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4809e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4809e8:
    // 0x4809e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4809e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4809ec:
    // 0x4809ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4809ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4809f0:
    // 0x4809f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4809f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4809f4:
    // 0x4809f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4809f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4809f8:
    // 0x4809f8: 0xac8200d0  sw          $v0, 0xD0($a0)
    ctx->pc = 0x4809f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 2));
label_4809fc:
    // 0x4809fc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4809fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_480a00:
    // 0x480a00: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x480a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_480a04:
    // 0x480a04: 0xc0dc9bc  jal         func_3726F0
label_480a08:
    if (ctx->pc == 0x480A08u) {
        ctx->pc = 0x480A08u;
            // 0x480a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480A0Cu;
        goto label_480a0c;
    }
    ctx->pc = 0x480A04u;
    SET_GPR_U32(ctx, 31, 0x480A0Cu);
    ctx->pc = 0x480A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A04u;
            // 0x480a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A0Cu; }
        if (ctx->pc != 0x480A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A0Cu; }
        if (ctx->pc != 0x480A0Cu) { return; }
    }
    ctx->pc = 0x480A0Cu;
label_480a0c:
    // 0x480a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480a10:
    // 0x480a10: 0xc0dc9a0  jal         func_372680
label_480a14:
    if (ctx->pc == 0x480A14u) {
        ctx->pc = 0x480A14u;
            // 0x480a14: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x480A18u;
        goto label_480a18;
    }
    ctx->pc = 0x480A10u;
    SET_GPR_U32(ctx, 31, 0x480A18u);
    ctx->pc = 0x480A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A10u;
            // 0x480a14: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A18u; }
        if (ctx->pc != 0x480A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A18u; }
        if (ctx->pc != 0x480A18u) { return; }
    }
    ctx->pc = 0x480A18u;
label_480a18:
    // 0x480a18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x480a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480a1c:
    // 0x480a1c: 0xc04f278  jal         func_13C9E0
label_480a20:
    if (ctx->pc == 0x480A20u) {
        ctx->pc = 0x480A20u;
            // 0x480a20: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x480A24u;
        goto label_480a24;
    }
    ctx->pc = 0x480A1Cu;
    SET_GPR_U32(ctx, 31, 0x480A24u);
    ctx->pc = 0x480A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A1Cu;
            // 0x480a20: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A24u; }
        if (ctx->pc != 0x480A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A24u; }
        if (ctx->pc != 0x480A24u) { return; }
    }
    ctx->pc = 0x480A24u;
label_480a24:
    // 0x480a24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x480a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480a28:
    // 0x480a28: 0xc04ce80  jal         func_133A00
label_480a2c:
    if (ctx->pc == 0x480A2Cu) {
        ctx->pc = 0x480A2Cu;
            // 0x480a2c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x480A30u;
        goto label_480a30;
    }
    ctx->pc = 0x480A28u;
    SET_GPR_U32(ctx, 31, 0x480A30u);
    ctx->pc = 0x480A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A28u;
            // 0x480a2c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A30u; }
        if (ctx->pc != 0x480A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A30u; }
        if (ctx->pc != 0x480A30u) { return; }
    }
    ctx->pc = 0x480A30u;
label_480a30:
    // 0x480a30: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x480a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_480a34:
    // 0x480a34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x480a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_480a38:
    // 0x480a38: 0x2442fa10  addiu       $v0, $v0, -0x5F0
    ctx->pc = 0x480a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
label_480a3c:
    // 0x480a3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x480a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_480a40:
    // 0x480a40: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x480a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480a44:
    // 0x480a44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x480a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_480a48:
    // 0x480a48: 0xc04cca0  jal         func_133280
label_480a4c:
    if (ctx->pc == 0x480A4Cu) {
        ctx->pc = 0x480A4Cu;
            // 0x480a4c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x480A50u;
        goto label_480a50;
    }
    ctx->pc = 0x480A48u;
    SET_GPR_U32(ctx, 31, 0x480A50u);
    ctx->pc = 0x480A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A48u;
            // 0x480a4c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A50u; }
        if (ctx->pc != 0x480A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A50u; }
        if (ctx->pc != 0x480A50u) { return; }
    }
    ctx->pc = 0x480A50u;
label_480a50:
    // 0x480a50: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x480a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_480a54:
    // 0x480a54: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x480a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480a58:
    // 0x480a58: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x480a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480a5c:
    // 0x480a5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x480a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_480a60:
    // 0x480a60: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x480a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_480a64:
    // 0x480a64: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x480a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_480a68:
    // 0x480a68: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x480a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480a6c:
    // 0x480a6c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x480a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_480a70:
    // 0x480a70: 0xc089290  jal         func_224A40
label_480a74:
    if (ctx->pc == 0x480A74u) {
        ctx->pc = 0x480A74u;
            // 0x480a74: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x480A78u;
        goto label_480a78;
    }
    ctx->pc = 0x480A70u;
    SET_GPR_U32(ctx, 31, 0x480A78u);
    ctx->pc = 0x480A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A70u;
            // 0x480a74: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A78u; }
        if (ctx->pc != 0x480A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A78u; }
        if (ctx->pc != 0x480A78u) { return; }
    }
    ctx->pc = 0x480A78u;
label_480a78:
    // 0x480a78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x480a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_480a7c:
    // 0x480a7c: 0xc0ba938  jal         func_2EA4E0
label_480a80:
    if (ctx->pc == 0x480A80u) {
        ctx->pc = 0x480A80u;
            // 0x480a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x480A84u;
        goto label_480a84;
    }
    ctx->pc = 0x480A7Cu;
    SET_GPR_U32(ctx, 31, 0x480A84u);
    ctx->pc = 0x480A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A7Cu;
            // 0x480a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A84u; }
        if (ctx->pc != 0x480A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480A84u; }
        if (ctx->pc != 0x480A84u) { return; }
    }
    ctx->pc = 0x480A84u;
label_480a84:
    // 0x480a84: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x480a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_480a88:
    // 0x480a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480a8c:
    // 0x480a8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x480a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480a90:
    // 0x480a90: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x480a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_480a94:
    // 0x480a94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x480a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_480a98:
    // 0x480a98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x480a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_480a9c:
    // 0x480a9c: 0xc08bff0  jal         func_22FFC0
label_480aa0:
    if (ctx->pc == 0x480AA0u) {
        ctx->pc = 0x480AA0u;
            // 0x480aa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480AA4u;
        goto label_480aa4;
    }
    ctx->pc = 0x480A9Cu;
    SET_GPR_U32(ctx, 31, 0x480AA4u);
    ctx->pc = 0x480AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480A9Cu;
            // 0x480aa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480AA4u; }
        if (ctx->pc != 0x480AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480AA4u; }
        if (ctx->pc != 0x480AA4u) { return; }
    }
    ctx->pc = 0x480AA4u;
label_480aa4:
    // 0x480aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x480aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_480aa8:
    // 0x480aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480aac:
    // 0x480aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480ab0:
    // 0x480ab0: 0x3e00008  jr          $ra
label_480ab4:
    if (ctx->pc == 0x480AB4u) {
        ctx->pc = 0x480AB4u;
            // 0x480ab4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x480AB8u;
        goto label_480ab8;
    }
    ctx->pc = 0x480AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480AB0u;
            // 0x480ab4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480AB8u;
label_480ab8:
    // 0x480ab8: 0x0  nop
    ctx->pc = 0x480ab8u;
    // NOP
label_480abc:
    // 0x480abc: 0x0  nop
    ctx->pc = 0x480abcu;
    // NOP
label_480ac0:
    // 0x480ac0: 0x3e00008  jr          $ra
label_480ac4:
    if (ctx->pc == 0x480AC4u) {
        ctx->pc = 0x480AC8u;
        goto label_480ac8;
    }
    ctx->pc = 0x480AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480AC8u;
label_480ac8:
    // 0x480ac8: 0x0  nop
    ctx->pc = 0x480ac8u;
    // NOP
label_480acc:
    // 0x480acc: 0x0  nop
    ctx->pc = 0x480accu;
    // NOP
label_480ad0:
    // 0x480ad0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x480ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_480ad4:
    // 0x480ad4: 0x80baaa0  j           func_2EAA80
label_480ad8:
    if (ctx->pc == 0x480AD8u) {
        ctx->pc = 0x480AD8u;
            // 0x480ad8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x480ADCu;
        goto label_480adc;
    }
    ctx->pc = 0x480AD4u;
    ctx->pc = 0x480AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480AD4u;
            // 0x480ad8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x480ADCu;
label_480adc:
    // 0x480adc: 0x0  nop
    ctx->pc = 0x480adcu;
    // NOP
label_480ae0:
    // 0x480ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x480ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_480ae4:
    // 0x480ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x480ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_480ae8:
    // 0x480ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480aec:
    // 0x480aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x480aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480af0:
    // 0x480af0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x480af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_480af4:
    // 0x480af4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_480af8:
    if (ctx->pc == 0x480AF8u) {
        ctx->pc = 0x480AF8u;
            // 0x480af8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x480AFCu;
        goto label_480afc;
    }
    ctx->pc = 0x480AF4u;
    {
        const bool branch_taken_0x480af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x480af4) {
            ctx->pc = 0x480AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480AF4u;
            // 0x480af8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480B10u;
            goto label_480b10;
        }
    }
    ctx->pc = 0x480AFCu;
label_480afc:
    // 0x480afc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x480afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_480b00:
    // 0x480b00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x480b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_480b04:
    // 0x480b04: 0x320f809  jalr        $t9
label_480b08:
    if (ctx->pc == 0x480B08u) {
        ctx->pc = 0x480B08u;
            // 0x480b08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x480B0Cu;
        goto label_480b0c;
    }
    ctx->pc = 0x480B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480B0Cu);
        ctx->pc = 0x480B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480B04u;
            // 0x480b08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480B0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480B0Cu; }
            if (ctx->pc != 0x480B0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x480B0Cu;
label_480b0c:
    // 0x480b0c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x480b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_480b10:
    // 0x480b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x480b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_480b14:
    // 0x480b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480b18:
    // 0x480b18: 0x3e00008  jr          $ra
label_480b1c:
    if (ctx->pc == 0x480B1Cu) {
        ctx->pc = 0x480B1Cu;
            // 0x480b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x480B20u;
        goto label_480b20;
    }
    ctx->pc = 0x480B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480B18u;
            // 0x480b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480B20u;
label_480b20:
    // 0x480b20: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x480b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_480b24:
    // 0x480b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x480b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_480b28:
    // 0x480b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_480b2c:
    // 0x480b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x480b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480b30:
    // 0x480b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480b34:
    // 0x480b34: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x480b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480b38:
    // 0x480b38: 0xc0892d0  jal         func_224B40
label_480b3c:
    if (ctx->pc == 0x480B3Cu) {
        ctx->pc = 0x480B3Cu;
            // 0x480b3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x480B40u;
        goto label_480b40;
    }
    ctx->pc = 0x480B38u;
    SET_GPR_U32(ctx, 31, 0x480B40u);
    ctx->pc = 0x480B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480B38u;
            // 0x480b3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480B40u; }
        if (ctx->pc != 0x480B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480B40u; }
        if (ctx->pc != 0x480B40u) { return; }
    }
    ctx->pc = 0x480B40u;
label_480b40:
    // 0x480b40: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x480b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_480b44:
    // 0x480b44: 0x54600099  bnel        $v1, $zero, . + 4 + (0x99 << 2)
label_480b48:
    if (ctx->pc == 0x480B48u) {
        ctx->pc = 0x480B48u;
            // 0x480b48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x480B4Cu;
        goto label_480b4c;
    }
    ctx->pc = 0x480B44u;
    {
        const bool branch_taken_0x480b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x480b44) {
            ctx->pc = 0x480B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480B44u;
            // 0x480b48: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480DACu;
            goto label_480dac;
        }
    }
    ctx->pc = 0x480B4Cu;
label_480b4c:
    // 0x480b4c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x480b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_480b50:
    // 0x480b50: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x480b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_480b54:
    // 0x480b54: 0x344acccd  ori         $t2, $v0, 0xCCCD
    ctx->pc = 0x480b54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_480b58:
    // 0x480b58: 0x34680040  ori         $t0, $v1, 0x40
    ctx->pc = 0x480b58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_480b5c:
    // 0x480b5c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x480b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_480b60:
    // 0x480b60: 0x3c0c42c8  lui         $t4, 0x42C8
    ctx->pc = 0x480b60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17096 << 16));
label_480b64:
    // 0x480b64: 0x3447999a  ori         $a3, $v0, 0x999A
    ctx->pc = 0x480b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_480b68:
    // 0x480b68: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x480b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480b6c:
    // 0x480b6c: 0x3c02406c  lui         $v0, 0x406C
    ctx->pc = 0x480b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16492 << 16));
label_480b70:
    // 0x480b70: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x480b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_480b74:
    // 0x480b74: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x480b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_480b78:
    // 0x480b78: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x480b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_480b7c:
    // 0x480b7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480b80:
    // 0x480b80: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x480b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_480b84:
    // 0x480b84: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x480b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_480b88:
    // 0x480b88: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x480b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_480b8c:
    // 0x480b8c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x480b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480b90:
    // 0x480b90: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x480b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480b94:
    // 0x480b94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x480b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_480b98:
    // 0x480b98: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x480b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_480b9c:
    // 0x480b9c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x480b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_480ba0:
    // 0x480ba0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x480ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_480ba4:
    // 0x480ba4: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x480ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_480ba8:
    // 0x480ba8: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x480ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_480bac:
    // 0x480bac: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x480bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480bb0:
    // 0x480bb0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x480bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480bb4:
    // 0x480bb4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x480bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_480bb8:
    // 0x480bb8: 0xa3ab0100  sb          $t3, 0x100($sp)
    ctx->pc = 0x480bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 11));
label_480bbc:
    // 0x480bbc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x480bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_480bc0:
    // 0x480bc0: 0xa3a90102  sb          $t1, 0x102($sp)
    ctx->pc = 0x480bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 9));
label_480bc4:
    // 0x480bc4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x480bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_480bc8:
    // 0x480bc8: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x480bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
label_480bcc:
    // 0x480bcc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x480bccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_480bd0:
    // 0x480bd0: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x480bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_480bd4:
    // 0x480bd4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x480bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_480bd8:
    // 0x480bd8: 0xafac00e0  sw          $t4, 0xE0($sp)
    ctx->pc = 0x480bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 12));
label_480bdc:
    // 0x480bdc: 0xafac00f8  sw          $t4, 0xF8($sp)
    ctx->pc = 0x480bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 12));
label_480be0:
    // 0x480be0: 0xafaa00fc  sw          $t2, 0xFC($sp)
    ctx->pc = 0x480be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 10));
label_480be4:
    // 0x480be4: 0xafaa0048  sw          $t2, 0x48($sp)
    ctx->pc = 0x480be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 10));
label_480be8:
    // 0x480be8: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x480be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_480bec:
    // 0x480bec: 0xc0a7a88  jal         func_29EA20
label_480bf0:
    if (ctx->pc == 0x480BF0u) {
        ctx->pc = 0x480BF0u;
            // 0x480bf0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x480BF4u;
        goto label_480bf4;
    }
    ctx->pc = 0x480BECu;
    SET_GPR_U32(ctx, 31, 0x480BF4u);
    ctx->pc = 0x480BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480BECu;
            // 0x480bf0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480BF4u; }
        if (ctx->pc != 0x480BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480BF4u; }
        if (ctx->pc != 0x480BF4u) { return; }
    }
    ctx->pc = 0x480BF4u;
label_480bf4:
    // 0x480bf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x480bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_480bf8:
    // 0x480bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480bfc:
    // 0x480bfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_480c00:
    if (ctx->pc == 0x480C00u) {
        ctx->pc = 0x480C00u;
            // 0x480c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x480C04u;
        goto label_480c04;
    }
    ctx->pc = 0x480BFCu;
    {
        const bool branch_taken_0x480bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x480C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480BFCu;
            // 0x480c00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480bfc) {
            ctx->pc = 0x480C14u;
            goto label_480c14;
        }
    }
    ctx->pc = 0x480C04u;
label_480c04:
    // 0x480c04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x480c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_480c08:
    // 0x480c08: 0xc0804bc  jal         func_2012F0
label_480c0c:
    if (ctx->pc == 0x480C0Cu) {
        ctx->pc = 0x480C0Cu;
            // 0x480c0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x480C10u;
        goto label_480c10;
    }
    ctx->pc = 0x480C08u;
    SET_GPR_U32(ctx, 31, 0x480C10u);
    ctx->pc = 0x480C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480C08u;
            // 0x480c0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C10u; }
        if (ctx->pc != 0x480C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C10u; }
        if (ctx->pc != 0x480C10u) { return; }
    }
    ctx->pc = 0x480C10u;
label_480c10:
    // 0x480c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x480c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480c14:
    // 0x480c14: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x480c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_480c18:
    // 0x480c18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x480c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_480c1c:
    // 0x480c1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480c20:
    // 0x480c20: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x480c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_480c24:
    // 0x480c24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x480c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_480c28:
    // 0x480c28: 0xc0a7a88  jal         func_29EA20
label_480c2c:
    if (ctx->pc == 0x480C2Cu) {
        ctx->pc = 0x480C2Cu;
            // 0x480c2c: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x480C30u;
        goto label_480c30;
    }
    ctx->pc = 0x480C28u;
    SET_GPR_U32(ctx, 31, 0x480C30u);
    ctx->pc = 0x480C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480C28u;
            // 0x480c2c: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C30u; }
        if (ctx->pc != 0x480C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C30u; }
        if (ctx->pc != 0x480C30u) { return; }
    }
    ctx->pc = 0x480C30u;
label_480c30:
    // 0x480c30: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x480c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_480c34:
    // 0x480c34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480c38:
    // 0x480c38: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_480c3c:
    if (ctx->pc == 0x480C3Cu) {
        ctx->pc = 0x480C3Cu;
            // 0x480c3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x480C40u;
        goto label_480c40;
    }
    ctx->pc = 0x480C38u;
    {
        const bool branch_taken_0x480c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x480C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480C38u;
            // 0x480c3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c38) {
            ctx->pc = 0x480C88u;
            goto label_480c88;
        }
    }
    ctx->pc = 0x480C40u;
label_480c40:
    // 0x480c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480c44:
    // 0x480c44: 0xc088ef4  jal         func_223BD0
label_480c48:
    if (ctx->pc == 0x480C48u) {
        ctx->pc = 0x480C48u;
            // 0x480c48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x480C4Cu;
        goto label_480c4c;
    }
    ctx->pc = 0x480C44u;
    SET_GPR_U32(ctx, 31, 0x480C4Cu);
    ctx->pc = 0x480C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480C44u;
            // 0x480c48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C4Cu; }
        if (ctx->pc != 0x480C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C4Cu; }
        if (ctx->pc != 0x480C4Cu) { return; }
    }
    ctx->pc = 0x480C4Cu;
label_480c4c:
    // 0x480c4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x480c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_480c50:
    // 0x480c50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x480c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_480c54:
    // 0x480c54: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x480c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_480c58:
    // 0x480c58: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x480c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_480c5c:
    // 0x480c5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x480c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_480c60:
    // 0x480c60: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x480c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_480c64:
    // 0x480c64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480c68:
    // 0x480c68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x480c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_480c6c:
    // 0x480c6c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x480c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_480c70:
    // 0x480c70: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x480c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_480c74:
    // 0x480c74: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x480c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_480c78:
    // 0x480c78: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x480c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_480c7c:
    // 0x480c7c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x480c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_480c80:
    // 0x480c80: 0xc088b38  jal         func_222CE0
label_480c84:
    if (ctx->pc == 0x480C84u) {
        ctx->pc = 0x480C84u;
            // 0x480c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480C88u;
        goto label_480c88;
    }
    ctx->pc = 0x480C80u;
    SET_GPR_U32(ctx, 31, 0x480C88u);
    ctx->pc = 0x480C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480C80u;
            // 0x480c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C88u; }
        if (ctx->pc != 0x480C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480C88u; }
        if (ctx->pc != 0x480C88u) { return; }
    }
    ctx->pc = 0x480C88u;
label_480c88:
    // 0x480c88: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x480c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_480c8c:
    // 0x480c8c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_480c90:
    if (ctx->pc == 0x480C90u) {
        ctx->pc = 0x480C90u;
            // 0x480c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480C94u;
        goto label_480c94;
    }
    ctx->pc = 0x480C8Cu;
    {
        const bool branch_taken_0x480c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480c8c) {
            ctx->pc = 0x480C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480C8Cu;
            // 0x480c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480CD0u;
            goto label_480cd0;
        }
    }
    ctx->pc = 0x480C94u;
label_480c94:
    // 0x480c94: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x480c94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_480c98:
    // 0x480c98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x480c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_480c9c:
    // 0x480c9c: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x480c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_480ca0:
    // 0x480ca0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x480ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_480ca4:
    // 0x480ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x480ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_480ca8:
    // 0x480ca8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_480cac:
    if (ctx->pc == 0x480CACu) {
        ctx->pc = 0x480CB0u;
        goto label_480cb0;
    }
    ctx->pc = 0x480CA8u;
    {
        const bool branch_taken_0x480ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480ca8) {
            ctx->pc = 0x480CCCu;
            goto label_480ccc;
        }
    }
    ctx->pc = 0x480CB0u;
label_480cb0:
    // 0x480cb0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_480cb4:
    if (ctx->pc == 0x480CB4u) {
        ctx->pc = 0x480CB8u;
        goto label_480cb8;
    }
    ctx->pc = 0x480CB0u;
    {
        const bool branch_taken_0x480cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x480cb0) {
            ctx->pc = 0x480CCCu;
            goto label_480ccc;
        }
    }
    ctx->pc = 0x480CB8u;
label_480cb8:
    // 0x480cb8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x480cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_480cbc:
    // 0x480cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480cc0:
    // 0x480cc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x480cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_480cc4:
    // 0x480cc4: 0x320f809  jalr        $t9
label_480cc8:
    if (ctx->pc == 0x480CC8u) {
        ctx->pc = 0x480CC8u;
            // 0x480cc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x480CCCu;
        goto label_480ccc;
    }
    ctx->pc = 0x480CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480CCCu);
        ctx->pc = 0x480CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480CC4u;
            // 0x480cc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480CCCu; }
            if (ctx->pc != 0x480CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x480CCCu;
label_480ccc:
    // 0x480ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480cd0:
    // 0x480cd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x480cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_480cd4:
    // 0x480cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x480cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480cd8:
    // 0x480cd8: 0xc08914c  jal         func_224530
label_480cdc:
    if (ctx->pc == 0x480CDCu) {
        ctx->pc = 0x480CDCu;
            // 0x480cdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480CE0u;
        goto label_480ce0;
    }
    ctx->pc = 0x480CD8u;
    SET_GPR_U32(ctx, 31, 0x480CE0u);
    ctx->pc = 0x480CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480CD8u;
            // 0x480cdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480CE0u; }
        if (ctx->pc != 0x480CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480CE0u; }
        if (ctx->pc != 0x480CE0u) { return; }
    }
    ctx->pc = 0x480CE0u;
label_480ce0:
    // 0x480ce0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x480ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_480ce4:
    // 0x480ce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480ce8:
    // 0x480ce8: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x480ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
label_480cec:
    // 0x480cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x480cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480cf0:
    // 0x480cf0: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x480cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_480cf4:
    // 0x480cf4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x480cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_480cf8:
    // 0x480cf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x480cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_480cfc:
    // 0x480cfc: 0xc08c164  jal         func_230590
label_480d00:
    if (ctx->pc == 0x480D00u) {
        ctx->pc = 0x480D00u;
            // 0x480d00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x480D04u;
        goto label_480d04;
    }
    ctx->pc = 0x480CFCu;
    SET_GPR_U32(ctx, 31, 0x480D04u);
    ctx->pc = 0x480D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480CFCu;
            // 0x480d00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D04u; }
        if (ctx->pc != 0x480D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D04u; }
        if (ctx->pc != 0x480D04u) { return; }
    }
    ctx->pc = 0x480D04u;
label_480d04:
    // 0x480d04: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x480d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_480d08:
    // 0x480d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480d0c:
    // 0x480d0c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x480d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_480d10:
    // 0x480d10: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x480d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_480d14:
    // 0x480d14: 0xc0a7a88  jal         func_29EA20
label_480d18:
    if (ctx->pc == 0x480D18u) {
        ctx->pc = 0x480D18u;
            // 0x480d18: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x480D1Cu;
        goto label_480d1c;
    }
    ctx->pc = 0x480D14u;
    SET_GPR_U32(ctx, 31, 0x480D1Cu);
    ctx->pc = 0x480D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480D14u;
            // 0x480d18: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D1Cu; }
        if (ctx->pc != 0x480D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D1Cu; }
        if (ctx->pc != 0x480D1Cu) { return; }
    }
    ctx->pc = 0x480D1Cu;
label_480d1c:
    // 0x480d1c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x480d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_480d20:
    // 0x480d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x480d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480d24:
    // 0x480d24: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_480d28:
    if (ctx->pc == 0x480D28u) {
        ctx->pc = 0x480D28u;
            // 0x480d28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x480D2Cu;
        goto label_480d2c;
    }
    ctx->pc = 0x480D24u;
    {
        const bool branch_taken_0x480d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x480D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480D24u;
            // 0x480d28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480d24) {
            ctx->pc = 0x480D48u;
            goto label_480d48;
        }
    }
    ctx->pc = 0x480D2Cu;
label_480d2c:
    // 0x480d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480d30:
    // 0x480d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x480d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480d34:
    // 0x480d34: 0xc0869d0  jal         func_21A740
label_480d38:
    if (ctx->pc == 0x480D38u) {
        ctx->pc = 0x480D38u;
            // 0x480d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480D3Cu;
        goto label_480d3c;
    }
    ctx->pc = 0x480D34u;
    SET_GPR_U32(ctx, 31, 0x480D3Cu);
    ctx->pc = 0x480D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480D34u;
            // 0x480d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D3Cu; }
        if (ctx->pc != 0x480D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D3Cu; }
        if (ctx->pc != 0x480D3Cu) { return; }
    }
    ctx->pc = 0x480D3Cu;
label_480d3c:
    // 0x480d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x480d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_480d40:
    // 0x480d40: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x480d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_480d44:
    // 0x480d44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x480d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_480d48:
    // 0x480d48: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x480d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_480d4c:
    // 0x480d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x480d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_480d50:
    // 0x480d50: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x480d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_480d54:
    // 0x480d54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x480d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_480d58:
    // 0x480d58: 0xc08c650  jal         func_231940
label_480d5c:
    if (ctx->pc == 0x480D5Cu) {
        ctx->pc = 0x480D5Cu;
            // 0x480d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480D60u;
        goto label_480d60;
    }
    ctx->pc = 0x480D58u;
    SET_GPR_U32(ctx, 31, 0x480D60u);
    ctx->pc = 0x480D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480D58u;
            // 0x480d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D60u; }
        if (ctx->pc != 0x480D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480D60u; }
        if (ctx->pc != 0x480D60u) { return; }
    }
    ctx->pc = 0x480D60u;
label_480d60:
    // 0x480d60: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x480d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_480d64:
    // 0x480d64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x480d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480d68:
    // 0x480d68: 0xa2430064  sb          $v1, 0x64($s2)
    ctx->pc = 0x480d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 3));
label_480d6c:
    // 0x480d6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x480d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_480d70:
    // 0x480d70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x480d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_480d74:
    // 0x480d74: 0xa2460065  sb          $a2, 0x65($s2)
    ctx->pc = 0x480d74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 6));
label_480d78:
    // 0x480d78: 0xa2430066  sb          $v1, 0x66($s2)
    ctx->pc = 0x480d78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 3));
label_480d7c:
    // 0x480d7c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x480d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_480d80:
    // 0x480d80: 0xa2460067  sb          $a2, 0x67($s2)
    ctx->pc = 0x480d80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 103), (uint8_t)GPR_U32(ctx, 6));
label_480d84:
    // 0x480d84: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x480d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_480d88:
    // 0x480d88: 0xa2450068  sb          $a1, 0x68($s2)
    ctx->pc = 0x480d88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 5));
label_480d8c:
    // 0x480d8c: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x480d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_480d90:
    // 0x480d90: 0xa245006a  sb          $a1, 0x6A($s2)
    ctx->pc = 0x480d90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 5));
label_480d94:
    // 0x480d94: 0xa240006b  sb          $zero, 0x6B($s2)
    ctx->pc = 0x480d94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
label_480d98:
    // 0x480d98: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x480d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_480d9c:
    // 0x480d9c: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x480d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_480da0:
    // 0x480da0: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x480da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_480da4:
    // 0x480da4: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x480da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_480da8:
    // 0x480da8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x480da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_480dac:
    // 0x480dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_480db0:
    // 0x480db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480db4:
    // 0x480db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480db8:
    // 0x480db8: 0x3e00008  jr          $ra
label_480dbc:
    if (ctx->pc == 0x480DBCu) {
        ctx->pc = 0x480DBCu;
            // 0x480dbc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x480DC0u;
        goto label_480dc0;
    }
    ctx->pc = 0x480DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480DB8u;
            // 0x480dbc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480DC0u;
label_480dc0:
    // 0x480dc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x480dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_480dc4:
    // 0x480dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x480dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_480dc8:
    // 0x480dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_480dcc:
    // 0x480dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480dd0:
    // 0x480dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480dd4:
    // 0x480dd4: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x480dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_480dd8:
    // 0x480dd8: 0xc0e39b4  jal         func_38E6D0
label_480ddc:
    if (ctx->pc == 0x480DDCu) {
        ctx->pc = 0x480DDCu;
            // 0x480ddc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480DE0u;
        goto label_480de0;
    }
    ctx->pc = 0x480DD8u;
    SET_GPR_U32(ctx, 31, 0x480DE0u);
    ctx->pc = 0x480DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480DD8u;
            // 0x480ddc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480DE0u; }
        if (ctx->pc != 0x480DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480DE0u; }
        if (ctx->pc != 0x480DE0u) { return; }
    }
    ctx->pc = 0x480DE0u;
label_480de0:
    // 0x480de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480de4:
    // 0x480de4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x480de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_480de8:
    // 0x480de8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x480de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480dec:
    // 0x480dec: 0xc08914c  jal         func_224530
label_480df0:
    if (ctx->pc == 0x480DF0u) {
        ctx->pc = 0x480DF0u;
            // 0x480df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480DF4u;
        goto label_480df4;
    }
    ctx->pc = 0x480DECu;
    SET_GPR_U32(ctx, 31, 0x480DF4u);
    ctx->pc = 0x480DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480DECu;
            // 0x480df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480DF4u; }
        if (ctx->pc != 0x480DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480DF4u; }
        if (ctx->pc != 0x480DF4u) { return; }
    }
    ctx->pc = 0x480DF4u;
label_480df4:
    // 0x480df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480df8:
    // 0x480df8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x480df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_480dfc:
    // 0x480dfc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x480dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_480e00:
    // 0x480e00: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x480e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_480e04:
    // 0x480e04: 0xc088b74  jal         func_222DD0
label_480e08:
    if (ctx->pc == 0x480E08u) {
        ctx->pc = 0x480E08u;
            // 0x480e08: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x480E0Cu;
        goto label_480e0c;
    }
    ctx->pc = 0x480E04u;
    SET_GPR_U32(ctx, 31, 0x480E0Cu);
    ctx->pc = 0x480E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480E04u;
            // 0x480e08: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480E0Cu; }
        if (ctx->pc != 0x480E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480E0Cu; }
        if (ctx->pc != 0x480E0Cu) { return; }
    }
    ctx->pc = 0x480E0Cu;
label_480e0c:
    // 0x480e0c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x480e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_480e10:
    // 0x480e10: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x480e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_480e14:
    // 0x480e14: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x480e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_480e18:
    // 0x480e18: 0x320f809  jalr        $t9
label_480e1c:
    if (ctx->pc == 0x480E1Cu) {
        ctx->pc = 0x480E1Cu;
            // 0x480e1c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x480E20u;
        goto label_480e20;
    }
    ctx->pc = 0x480E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480E20u);
        ctx->pc = 0x480E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480E18u;
            // 0x480e1c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480E20u; }
            if (ctx->pc != 0x480E20u) { return; }
        }
        }
    }
    ctx->pc = 0x480E20u;
label_480e20:
    // 0x480e20: 0xc088b74  jal         func_222DD0
label_480e24:
    if (ctx->pc == 0x480E24u) {
        ctx->pc = 0x480E24u;
            // 0x480e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480E28u;
        goto label_480e28;
    }
    ctx->pc = 0x480E20u;
    SET_GPR_U32(ctx, 31, 0x480E28u);
    ctx->pc = 0x480E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480E20u;
            // 0x480e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480E28u; }
        if (ctx->pc != 0x480E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480E28u; }
        if (ctx->pc != 0x480E28u) { return; }
    }
    ctx->pc = 0x480E28u;
label_480e28:
    // 0x480e28: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x480e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_480e2c:
    // 0x480e2c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x480e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_480e30:
    // 0x480e30: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x480e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_480e34:
    // 0x480e34: 0x320f809  jalr        $t9
label_480e38:
    if (ctx->pc == 0x480E38u) {
        ctx->pc = 0x480E38u;
            // 0x480e38: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x480E3Cu;
        goto label_480e3c;
    }
    ctx->pc = 0x480E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x480E3Cu);
        ctx->pc = 0x480E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480E34u;
            // 0x480e38: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x480E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x480E3Cu; }
            if (ctx->pc != 0x480E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x480E3Cu;
label_480e3c:
    // 0x480e3c: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x480e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_480e40:
    // 0x480e40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_480e44:
    if (ctx->pc == 0x480E44u) {
        ctx->pc = 0x480E44u;
            // 0x480e44: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->pc = 0x480E48u;
        goto label_480e48;
    }
    ctx->pc = 0x480E40u;
    {
        const bool branch_taken_0x480e40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x480E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480E40u;
            // 0x480e44: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e40) {
            ctx->pc = 0x480E54u;
            goto label_480e54;
        }
    }
    ctx->pc = 0x480E48u;
label_480e48:
    // 0x480e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x480e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_480e4c:
    // 0x480e4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_480e50:
    if (ctx->pc == 0x480E50u) {
        ctx->pc = 0x480E50u;
            // 0x480e50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x480E54u;
        goto label_480e54;
    }
    ctx->pc = 0x480E4Cu;
    {
        const bool branch_taken_0x480e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480E4Cu;
            // 0x480e50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x480e4c) {
            ctx->pc = 0x480E70u;
            goto label_480e70;
        }
    }
    ctx->pc = 0x480E54u;
label_480e54:
    // 0x480e54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x480e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_480e58:
    // 0x480e58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x480e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_480e5c:
    // 0x480e5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x480e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_480e60:
    // 0x480e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x480e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_480e64:
    // 0x480e64: 0x0  nop
    ctx->pc = 0x480e64u;
    // NOP
label_480e68:
    // 0x480e68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x480e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_480e6c:
    // 0x480e6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x480e6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_480e70:
    // 0x480e70: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x480e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_480e74:
    // 0x480e74: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x480e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_480e78:
    // 0x480e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x480e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_480e7c:
    // 0x480e7c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x480e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_480e80:
    // 0x480e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x480e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_480e84:
    // 0x480e84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x480e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_480e88:
    // 0x480e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x480e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480e8c:
    // 0x480e8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x480e8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_480e90:
    // 0x480e90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x480e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_480e94:
    // 0x480e94: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x480e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_480e98:
    // 0x480e98: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x480e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480e9c:
    // 0x480e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x480e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_480ea0:
    // 0x480ea0: 0x0  nop
    ctx->pc = 0x480ea0u;
    // NOP
label_480ea4:
    // 0x480ea4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x480ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_480ea8:
    // 0x480ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x480ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_480eac:
    // 0x480eac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x480eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_480eb0:
    // 0x480eb0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x480eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_480eb4:
    // 0x480eb4: 0xc04ca18  jal         func_132860
label_480eb8:
    if (ctx->pc == 0x480EB8u) {
        ctx->pc = 0x480EB8u;
            // 0x480eb8: 0x24060e38  addiu       $a2, $zero, 0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
        ctx->pc = 0x480EBCu;
        goto label_480ebc;
    }
    ctx->pc = 0x480EB4u;
    SET_GPR_U32(ctx, 31, 0x480EBCu);
    ctx->pc = 0x480EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480EB4u;
            // 0x480eb8: 0x24060e38  addiu       $a2, $zero, 0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480EBCu; }
        if (ctx->pc != 0x480EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480EBCu; }
        if (ctx->pc != 0x480EBCu) { return; }
    }
    ctx->pc = 0x480EBCu;
label_480ebc:
    // 0x480ebc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x480ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_480ec0:
    // 0x480ec0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x480ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_480ec4:
    // 0x480ec4: 0xc04c72c  jal         func_131CB0
label_480ec8:
    if (ctx->pc == 0x480EC8u) {
        ctx->pc = 0x480EC8u;
            // 0x480ec8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480ECCu;
        goto label_480ecc;
    }
    ctx->pc = 0x480EC4u;
    SET_GPR_U32(ctx, 31, 0x480ECCu);
    ctx->pc = 0x480EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480EC4u;
            // 0x480ec8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480ECCu; }
        if (ctx->pc != 0x480ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480ECCu; }
        if (ctx->pc != 0x480ECCu) { return; }
    }
    ctx->pc = 0x480ECCu;
label_480ecc:
    // 0x480ecc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x480eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_480ed0:
    // 0x480ed0: 0xc04f278  jal         func_13C9E0
label_480ed4:
    if (ctx->pc == 0x480ED4u) {
        ctx->pc = 0x480ED4u;
            // 0x480ed4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x480ED8u;
        goto label_480ed8;
    }
    ctx->pc = 0x480ED0u;
    SET_GPR_U32(ctx, 31, 0x480ED8u);
    ctx->pc = 0x480ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480ED0u;
            // 0x480ed4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480ED8u; }
        if (ctx->pc != 0x480ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480ED8u; }
        if (ctx->pc != 0x480ED8u) { return; }
    }
    ctx->pc = 0x480ED8u;
label_480ed8:
    // 0x480ed8: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x480ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_480edc:
    // 0x480edc: 0xc04ce80  jal         func_133A00
label_480ee0:
    if (ctx->pc == 0x480EE0u) {
        ctx->pc = 0x480EE0u;
            // 0x480ee0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x480EE4u;
        goto label_480ee4;
    }
    ctx->pc = 0x480EDCu;
    SET_GPR_U32(ctx, 31, 0x480EE4u);
    ctx->pc = 0x480EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480EDCu;
            // 0x480ee0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480EE4u; }
        if (ctx->pc != 0x480EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480EE4u; }
        if (ctx->pc != 0x480EE4u) { return; }
    }
    ctx->pc = 0x480EE4u;
label_480ee4:
    // 0x480ee4: 0x3c02406c  lui         $v0, 0x406C
    ctx->pc = 0x480ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16492 << 16));
label_480ee8:
    // 0x480ee8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480eec:
    // 0x480eec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x480eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_480ef0:
    // 0x480ef0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x480ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_480ef4:
    // 0x480ef4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x480ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_480ef8:
    // 0x480ef8: 0xc04cbd8  jal         func_132F60
label_480efc:
    if (ctx->pc == 0x480EFCu) {
        ctx->pc = 0x480EFCu;
            // 0x480efc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x480F00u;
        goto label_480f00;
    }
    ctx->pc = 0x480EF8u;
    SET_GPR_U32(ctx, 31, 0x480F00u);
    ctx->pc = 0x480EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480EF8u;
            // 0x480efc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F00u; }
        if (ctx->pc != 0x480F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F00u; }
        if (ctx->pc != 0x480F00u) { return; }
    }
    ctx->pc = 0x480F00u;
label_480f00:
    // 0x480f00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480f04:
    // 0x480f04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x480f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_480f08:
    // 0x480f08: 0xc04cca0  jal         func_133280
label_480f0c:
    if (ctx->pc == 0x480F0Cu) {
        ctx->pc = 0x480F0Cu;
            // 0x480f0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x480F10u;
        goto label_480f10;
    }
    ctx->pc = 0x480F08u;
    SET_GPR_U32(ctx, 31, 0x480F10u);
    ctx->pc = 0x480F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480F08u;
            // 0x480f0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F10u; }
        if (ctx->pc != 0x480F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F10u; }
        if (ctx->pc != 0x480F10u) { return; }
    }
    ctx->pc = 0x480F10u;
label_480f10:
    // 0x480f10: 0x3c02c06c  lui         $v0, 0xC06C
    ctx->pc = 0x480f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49260 << 16));
label_480f14:
    // 0x480f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480f18:
    // 0x480f18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x480f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_480f1c:
    // 0x480f1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x480f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_480f20:
    // 0x480f20: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x480f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_480f24:
    // 0x480f24: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x480f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_480f28:
    // 0x480f28: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x480f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_480f2c:
    // 0x480f2c: 0xc0891d8  jal         func_224760
label_480f30:
    if (ctx->pc == 0x480F30u) {
        ctx->pc = 0x480F30u;
            // 0x480f30: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x480F34u;
        goto label_480f34;
    }
    ctx->pc = 0x480F2Cu;
    SET_GPR_U32(ctx, 31, 0x480F34u);
    ctx->pc = 0x480F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480F2Cu;
            // 0x480f30: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F34u; }
        if (ctx->pc != 0x480F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F34u; }
        if (ctx->pc != 0x480F34u) { return; }
    }
    ctx->pc = 0x480F34u;
label_480f34:
    // 0x480f34: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x480f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480f38:
    // 0x480f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480f3c:
    // 0x480f3c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x480f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_480f40:
    // 0x480f40: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x480f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480f44:
    // 0x480f44: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x480f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480f48:
    // 0x480f48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x480f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_480f4c:
    // 0x480f4c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x480f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_480f50:
    // 0x480f50: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x480f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_480f54:
    // 0x480f54: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x480f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480f58:
    // 0x480f58: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x480f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_480f5c:
    // 0x480f5c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x480f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_480f60:
    // 0x480f60: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x480f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_480f64:
    // 0x480f64: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x480f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_480f68:
    // 0x480f68: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x480f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480f6c:
    // 0x480f6c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x480f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_480f70:
    // 0x480f70: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x480f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_480f74:
    // 0x480f74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x480f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_480f78:
    // 0x480f78: 0xc0892b0  jal         func_224AC0
label_480f7c:
    if (ctx->pc == 0x480F7Cu) {
        ctx->pc = 0x480F7Cu;
            // 0x480f7c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x480F80u;
        goto label_480f80;
    }
    ctx->pc = 0x480F78u;
    SET_GPR_U32(ctx, 31, 0x480F80u);
    ctx->pc = 0x480F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x480F78u;
            // 0x480f7c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F80u; }
        if (ctx->pc != 0x480F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x480F80u; }
        if (ctx->pc != 0x480F80u) { return; }
    }
    ctx->pc = 0x480F80u;
label_480f80:
    // 0x480f80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x480f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_480f84:
    // 0x480f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_480f88:
    // 0x480f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480f8c:
    // 0x480f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480f90:
    // 0x480f90: 0x3e00008  jr          $ra
label_480f94:
    if (ctx->pc == 0x480F94u) {
        ctx->pc = 0x480F94u;
            // 0x480f94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x480F98u;
        goto label_480f98;
    }
    ctx->pc = 0x480F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480F90u;
            // 0x480f94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x480F98u;
label_480f98:
    // 0x480f98: 0x0  nop
    ctx->pc = 0x480f98u;
    // NOP
label_480f9c:
    // 0x480f9c: 0x0  nop
    ctx->pc = 0x480f9cu;
    // NOP
label_480fa0:
    // 0x480fa0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x480fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_480fa4:
    // 0x480fa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x480fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480fa8:
    // 0x480fa8: 0x50680020  beql        $v1, $t0, . + 4 + (0x20 << 2)
label_480fac:
    if (ctx->pc == 0x480FACu) {
        ctx->pc = 0x480FACu;
            // 0x480fac: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x480FB0u;
        goto label_480fb0;
    }
    ctx->pc = 0x480FA8u;
    {
        const bool branch_taken_0x480fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x480fa8) {
            ctx->pc = 0x480FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480FA8u;
            // 0x480fac: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48102Cu;
            goto label_48102c;
        }
    }
    ctx->pc = 0x480FB0u;
label_480fb0:
    // 0x480fb0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_480fb4:
    if (ctx->pc == 0x480FB4u) {
        ctx->pc = 0x480FB4u;
            // 0x480fb4: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x480FB8u;
        goto label_480fb8;
    }
    ctx->pc = 0x480FB0u;
    {
        const bool branch_taken_0x480fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x480fb0) {
            ctx->pc = 0x480FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x480FB0u;
            // 0x480fb4: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x480FC0u;
            goto label_480fc0;
        }
    }
    ctx->pc = 0x480FB8u;
label_480fb8:
    // 0x480fb8: 0x10000039  b           . + 4 + (0x39 << 2)
label_480fbc:
    if (ctx->pc == 0x480FBCu) {
        ctx->pc = 0x480FC0u;
        goto label_480fc0;
    }
    ctx->pc = 0x480FB8u;
    {
        const bool branch_taken_0x480fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480fb8) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x480FC0u;
label_480fc0:
    // 0x480fc0: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x480fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_480fc4:
    // 0x480fc4: 0x8cc300cc  lw          $v1, 0xCC($a2)
    ctx->pc = 0x480fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
label_480fc8:
    // 0x480fc8: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x480fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_480fcc:
    // 0x480fcc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x480fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_480fd0:
    // 0x480fd0: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_480fd4:
    if (ctx->pc == 0x480FD4u) {
        ctx->pc = 0x480FD8u;
        goto label_480fd8;
    }
    ctx->pc = 0x480FD0u;
    {
        const bool branch_taken_0x480fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x480fd0) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x480FD8u;
label_480fd8:
    // 0x480fd8: 0x8cc300cc  lw          $v1, 0xCC($a2)
    ctx->pc = 0x480fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
label_480fdc:
    // 0x480fdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x480fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_480fe0:
    // 0x480fe0: 0xacc300cc  sw          $v1, 0xCC($a2)
    ctx->pc = 0x480fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 3));
label_480fe4:
    // 0x480fe4: 0x8cc300c8  lw          $v1, 0xC8($a2)
    ctx->pc = 0x480fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
label_480fe8:
    // 0x480fe8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_480fec:
    if (ctx->pc == 0x480FECu) {
        ctx->pc = 0x480FF0u;
        goto label_480ff0;
    }
    ctx->pc = 0x480FE8u;
    {
        const bool branch_taken_0x480fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x480fe8) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x480FF0u;
label_480ff0:
    // 0x480ff0: 0xacc000c8  sw          $zero, 0xC8($a2)
    ctx->pc = 0x480ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 0));
label_480ff4:
    // 0x480ff4: 0x8cc50070  lw          $a1, 0x70($a2)
    ctx->pc = 0x480ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_480ff8:
    // 0x480ff8: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_480ffc:
    if (ctx->pc == 0x480FFCu) {
        ctx->pc = 0x480FFCu;
            // 0x480ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x481000u;
        goto label_481000;
    }
    ctx->pc = 0x480FF8u;
    {
        const bool branch_taken_0x480ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x480FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x480FF8u;
            // 0x480ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480ff8) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x481000u;
label_481000:
    // 0x481000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x481000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481004:
    // 0x481004: 0x8cc40074  lw          $a0, 0x74($a2)
    ctx->pc = 0x481004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_481008:
    // 0x481008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x481008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_48100c:
    // 0x48100c: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x48100cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_481010:
    // 0x481010: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x481010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_481014:
    // 0x481014: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x481014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_481018:
    // 0x481018: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x481018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_48101c:
    // 0x48101c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_481020:
    if (ctx->pc == 0x481020u) {
        ctx->pc = 0x481020u;
            // 0x481020: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x481024u;
        goto label_481024;
    }
    ctx->pc = 0x48101Cu;
    {
        const bool branch_taken_0x48101c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x481020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48101Cu;
            // 0x481020: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48101c) {
            ctx->pc = 0x481004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_481004;
        }
    }
    ctx->pc = 0x481024u;
label_481024:
    // 0x481024: 0x1000001e  b           . + 4 + (0x1E << 2)
label_481028:
    if (ctx->pc == 0x481028u) {
        ctx->pc = 0x48102Cu;
        goto label_48102c;
    }
    ctx->pc = 0x481024u;
    {
        const bool branch_taken_0x481024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x481024) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x48102Cu;
label_48102c:
    // 0x48102c: 0x8ca40d98  lw          $a0, 0xD98($a1)
    ctx->pc = 0x48102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_481030:
    // 0x481030: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x481030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
label_481034:
    // 0x481034: 0x882004  sllv        $a0, $t0, $a0
    ctx->pc = 0x481034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
label_481038:
    // 0x481038: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x481038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_48103c:
    // 0x48103c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_481040:
    if (ctx->pc == 0x481040u) {
        ctx->pc = 0x481044u;
        goto label_481044;
    }
    ctx->pc = 0x48103Cu;
    {
        const bool branch_taken_0x48103c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48103c) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x481044u;
label_481044:
    // 0x481044: 0x8ce300cc  lw          $v1, 0xCC($a3)
    ctx->pc = 0x481044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
label_481048:
    // 0x481048: 0x802027  not         $a0, $a0
    ctx->pc = 0x481048u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_48104c:
    // 0x48104c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x48104cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_481050:
    // 0x481050: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_481054:
    if (ctx->pc == 0x481054u) {
        ctx->pc = 0x481054u;
            // 0x481054: 0xace300cc  sw          $v1, 0xCC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 204), GPR_U32(ctx, 3));
        ctx->pc = 0x481058u;
        goto label_481058;
    }
    ctx->pc = 0x481050u;
    {
        const bool branch_taken_0x481050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x481054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481050u;
            // 0x481054: 0xace300cc  sw          $v1, 0xCC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481050) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x481058u;
label_481058:
    // 0x481058: 0x8ce300c8  lw          $v1, 0xC8($a3)
    ctx->pc = 0x481058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
label_48105c:
    // 0x48105c: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
label_481060:
    if (ctx->pc == 0x481060u) {
        ctx->pc = 0x481064u;
        goto label_481064;
    }
    ctx->pc = 0x48105Cu;
    {
        const bool branch_taken_0x48105c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x48105c) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x481064u;
label_481064:
    // 0x481064: 0xace800c8  sw          $t0, 0xC8($a3)
    ctx->pc = 0x481064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 200), GPR_U32(ctx, 8));
label_481068:
    // 0x481068: 0x8ce60070  lw          $a2, 0x70($a3)
    ctx->pc = 0x481068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_48106c:
    // 0x48106c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_481070:
    if (ctx->pc == 0x481070u) {
        ctx->pc = 0x481070u;
            // 0x481070: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x481074u;
        goto label_481074;
    }
    ctx->pc = 0x48106Cu;
    {
        const bool branch_taken_0x48106c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x481070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48106Cu;
            // 0x481070: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48106c) {
            ctx->pc = 0x4810A0u;
            goto label_4810a0;
        }
    }
    ctx->pc = 0x481074u;
label_481074:
    // 0x481074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x481074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481078:
    // 0x481078: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x481078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48107c:
    // 0x48107c: 0x8ce40074  lw          $a0, 0x74($a3)
    ctx->pc = 0x48107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
label_481080:
    // 0x481080: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x481080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_481084:
    // 0x481084: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x481084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_481088:
    // 0x481088: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x481088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_48108c:
    // 0x48108c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x48108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_481090:
    // 0x481090: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x481090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_481094:
    // 0x481094: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_481098:
    if (ctx->pc == 0x481098u) {
        ctx->pc = 0x481098u;
            // 0x481098: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->pc = 0x48109Cu;
        goto label_48109c;
    }
    ctx->pc = 0x481094u;
    {
        const bool branch_taken_0x481094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x481098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481094u;
            // 0x481098: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481094) {
            ctx->pc = 0x48107Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48107c;
        }
    }
    ctx->pc = 0x48109Cu;
label_48109c:
    // 0x48109c: 0x0  nop
    ctx->pc = 0x48109cu;
    // NOP
label_4810a0:
    // 0x4810a0: 0x3e00008  jr          $ra
label_4810a4:
    if (ctx->pc == 0x4810A4u) {
        ctx->pc = 0x4810A8u;
        goto label_4810a8;
    }
    ctx->pc = 0x4810A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4810A8u;
label_4810a8:
    // 0x4810a8: 0x0  nop
    ctx->pc = 0x4810a8u;
    // NOP
label_4810ac:
    // 0x4810ac: 0x0  nop
    ctx->pc = 0x4810acu;
    // NOP
label_4810b0:
    // 0x4810b0: 0x3e00008  jr          $ra
label_4810b4:
    if (ctx->pc == 0x4810B4u) {
        ctx->pc = 0x4810B4u;
            // 0x4810b4: 0x24025226  addiu       $v0, $zero, 0x5226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21030));
        ctx->pc = 0x4810B8u;
        goto label_4810b8;
    }
    ctx->pc = 0x4810B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4810B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4810B0u;
            // 0x4810b4: 0x24025226  addiu       $v0, $zero, 0x5226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4810B8u;
label_4810b8:
    // 0x4810b8: 0x0  nop
    ctx->pc = 0x4810b8u;
    // NOP
label_4810bc:
    // 0x4810bc: 0x0  nop
    ctx->pc = 0x4810bcu;
    // NOP
label_4810c0:
    // 0x4810c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4810c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4810c4:
    // 0x4810c4: 0x3e00008  jr          $ra
label_4810c8:
    if (ctx->pc == 0x4810C8u) {
        ctx->pc = 0x4810C8u;
            // 0x4810c8: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4810CCu;
        goto label_4810cc;
    }
    ctx->pc = 0x4810C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4810C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4810C4u;
            // 0x4810c8: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4810CCu;
label_4810cc:
    // 0x4810cc: 0x0  nop
    ctx->pc = 0x4810ccu;
    // NOP
label_4810d0:
    // 0x4810d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4810d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4810d4:
    // 0x4810d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4810d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4810d8:
    // 0x4810d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4810d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4810dc:
    // 0x4810dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4810dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4810e0:
    // 0x4810e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4810e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4810e4:
    // 0x4810e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4810e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4810e8:
    // 0x4810e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4810e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4810ec:
    // 0x4810ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4810f0:
    // 0x4810f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4810f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4810f4:
    // 0x4810f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4810f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4810f8:
    // 0x4810f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4810f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4810fc:
    // 0x4810fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4810fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_481100:
    // 0x481100: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x481100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_481104:
    // 0x481104: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_481108:
    // 0x481108: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x481108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_48110c:
    // 0x48110c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x48110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_481110:
    // 0x481110: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x481110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_481114:
    // 0x481114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x481114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_481118:
    // 0x481118: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x481118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_48111c:
    // 0x48111c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x48111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_481120:
    // 0x481120: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x481120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_481124:
    // 0x481124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x481124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_481128:
    // 0x481128: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x481128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48112c:
    // 0x48112c: 0xc0a997c  jal         func_2A65F0
label_481130:
    if (ctx->pc == 0x481130u) {
        ctx->pc = 0x481130u;
            // 0x481130: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x481134u;
        goto label_481134;
    }
    ctx->pc = 0x48112Cu;
    SET_GPR_U32(ctx, 31, 0x481134u);
    ctx->pc = 0x481130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48112Cu;
            // 0x481130: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481134u; }
        if (ctx->pc != 0x481134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481134u; }
        if (ctx->pc != 0x481134u) { return; }
    }
    ctx->pc = 0x481134u;
label_481134:
    // 0x481134: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x481134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_481138:
    // 0x481138: 0xc0d879c  jal         func_361E70
label_48113c:
    if (ctx->pc == 0x48113Cu) {
        ctx->pc = 0x48113Cu;
            // 0x48113c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x481140u;
        goto label_481140;
    }
    ctx->pc = 0x481138u;
    SET_GPR_U32(ctx, 31, 0x481140u);
    ctx->pc = 0x48113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481138u;
            // 0x48113c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481140u; }
        if (ctx->pc != 0x481140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481140u; }
        if (ctx->pc != 0x481140u) { return; }
    }
    ctx->pc = 0x481140u;
label_481140:
    // 0x481140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_481144:
    // 0x481144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_481148:
    // 0x481148: 0x3e00008  jr          $ra
label_48114c:
    if (ctx->pc == 0x48114Cu) {
        ctx->pc = 0x48114Cu;
            // 0x48114c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x481150u;
        goto label_481150;
    }
    ctx->pc = 0x481148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481148u;
            // 0x48114c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481150u;
label_481150:
    // 0x481150: 0x811fcb0  j           func_47F2C0
label_481154:
    if (ctx->pc == 0x481154u) {
        ctx->pc = 0x481154u;
            // 0x481154: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x481158u;
        goto label_481158;
    }
    ctx->pc = 0x481150u;
    ctx->pc = 0x481154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481150u;
            // 0x481154: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F2C0u;
    {
        auto targetFn = runtime->lookupFunction(0x47F2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x481158u;
label_481158:
    // 0x481158: 0x0  nop
    ctx->pc = 0x481158u;
    // NOP
label_48115c:
    // 0x48115c: 0x0  nop
    ctx->pc = 0x48115cu;
    // NOP
label_481160:
    // 0x481160: 0x8120130  j           func_4804C0
label_481164:
    if (ctx->pc == 0x481164u) {
        ctx->pc = 0x481164u;
            // 0x481164: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x481168u;
        goto label_481168;
    }
    ctx->pc = 0x481160u;
    ctx->pc = 0x481164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481160u;
            // 0x481164: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4804C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4804C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x481168u;
label_481168:
    // 0x481168: 0x0  nop
    ctx->pc = 0x481168u;
    // NOP
label_48116c:
    // 0x48116c: 0x0  nop
    ctx->pc = 0x48116cu;
    // NOP
label_481170:
    // 0x481170: 0x811fbcc  j           func_47EF30
label_481174:
    if (ctx->pc == 0x481174u) {
        ctx->pc = 0x481174u;
            // 0x481174: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x481178u;
        goto label_481178;
    }
    ctx->pc = 0x481170u;
    ctx->pc = 0x481174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481170u;
            // 0x481174: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47EF30u;
    {
        auto targetFn = runtime->lookupFunction(0x47EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x481178u;
label_481178:
    // 0x481178: 0x0  nop
    ctx->pc = 0x481178u;
    // NOP
label_48117c:
    // 0x48117c: 0x0  nop
    ctx->pc = 0x48117cu;
    // NOP
}
