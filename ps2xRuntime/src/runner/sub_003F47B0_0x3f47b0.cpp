#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F47B0
// Address: 0x3f47b0 - 0x3f4d80
void sub_003F47B0_0x3f47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F47B0_0x3f47b0");
#endif

    switch (ctx->pc) {
        case 0x3f47b0u: goto label_3f47b0;
        case 0x3f47b4u: goto label_3f47b4;
        case 0x3f47b8u: goto label_3f47b8;
        case 0x3f47bcu: goto label_3f47bc;
        case 0x3f47c0u: goto label_3f47c0;
        case 0x3f47c4u: goto label_3f47c4;
        case 0x3f47c8u: goto label_3f47c8;
        case 0x3f47ccu: goto label_3f47cc;
        case 0x3f47d0u: goto label_3f47d0;
        case 0x3f47d4u: goto label_3f47d4;
        case 0x3f47d8u: goto label_3f47d8;
        case 0x3f47dcu: goto label_3f47dc;
        case 0x3f47e0u: goto label_3f47e0;
        case 0x3f47e4u: goto label_3f47e4;
        case 0x3f47e8u: goto label_3f47e8;
        case 0x3f47ecu: goto label_3f47ec;
        case 0x3f47f0u: goto label_3f47f0;
        case 0x3f47f4u: goto label_3f47f4;
        case 0x3f47f8u: goto label_3f47f8;
        case 0x3f47fcu: goto label_3f47fc;
        case 0x3f4800u: goto label_3f4800;
        case 0x3f4804u: goto label_3f4804;
        case 0x3f4808u: goto label_3f4808;
        case 0x3f480cu: goto label_3f480c;
        case 0x3f4810u: goto label_3f4810;
        case 0x3f4814u: goto label_3f4814;
        case 0x3f4818u: goto label_3f4818;
        case 0x3f481cu: goto label_3f481c;
        case 0x3f4820u: goto label_3f4820;
        case 0x3f4824u: goto label_3f4824;
        case 0x3f4828u: goto label_3f4828;
        case 0x3f482cu: goto label_3f482c;
        case 0x3f4830u: goto label_3f4830;
        case 0x3f4834u: goto label_3f4834;
        case 0x3f4838u: goto label_3f4838;
        case 0x3f483cu: goto label_3f483c;
        case 0x3f4840u: goto label_3f4840;
        case 0x3f4844u: goto label_3f4844;
        case 0x3f4848u: goto label_3f4848;
        case 0x3f484cu: goto label_3f484c;
        case 0x3f4850u: goto label_3f4850;
        case 0x3f4854u: goto label_3f4854;
        case 0x3f4858u: goto label_3f4858;
        case 0x3f485cu: goto label_3f485c;
        case 0x3f4860u: goto label_3f4860;
        case 0x3f4864u: goto label_3f4864;
        case 0x3f4868u: goto label_3f4868;
        case 0x3f486cu: goto label_3f486c;
        case 0x3f4870u: goto label_3f4870;
        case 0x3f4874u: goto label_3f4874;
        case 0x3f4878u: goto label_3f4878;
        case 0x3f487cu: goto label_3f487c;
        case 0x3f4880u: goto label_3f4880;
        case 0x3f4884u: goto label_3f4884;
        case 0x3f4888u: goto label_3f4888;
        case 0x3f488cu: goto label_3f488c;
        case 0x3f4890u: goto label_3f4890;
        case 0x3f4894u: goto label_3f4894;
        case 0x3f4898u: goto label_3f4898;
        case 0x3f489cu: goto label_3f489c;
        case 0x3f48a0u: goto label_3f48a0;
        case 0x3f48a4u: goto label_3f48a4;
        case 0x3f48a8u: goto label_3f48a8;
        case 0x3f48acu: goto label_3f48ac;
        case 0x3f48b0u: goto label_3f48b0;
        case 0x3f48b4u: goto label_3f48b4;
        case 0x3f48b8u: goto label_3f48b8;
        case 0x3f48bcu: goto label_3f48bc;
        case 0x3f48c0u: goto label_3f48c0;
        case 0x3f48c4u: goto label_3f48c4;
        case 0x3f48c8u: goto label_3f48c8;
        case 0x3f48ccu: goto label_3f48cc;
        case 0x3f48d0u: goto label_3f48d0;
        case 0x3f48d4u: goto label_3f48d4;
        case 0x3f48d8u: goto label_3f48d8;
        case 0x3f48dcu: goto label_3f48dc;
        case 0x3f48e0u: goto label_3f48e0;
        case 0x3f48e4u: goto label_3f48e4;
        case 0x3f48e8u: goto label_3f48e8;
        case 0x3f48ecu: goto label_3f48ec;
        case 0x3f48f0u: goto label_3f48f0;
        case 0x3f48f4u: goto label_3f48f4;
        case 0x3f48f8u: goto label_3f48f8;
        case 0x3f48fcu: goto label_3f48fc;
        case 0x3f4900u: goto label_3f4900;
        case 0x3f4904u: goto label_3f4904;
        case 0x3f4908u: goto label_3f4908;
        case 0x3f490cu: goto label_3f490c;
        case 0x3f4910u: goto label_3f4910;
        case 0x3f4914u: goto label_3f4914;
        case 0x3f4918u: goto label_3f4918;
        case 0x3f491cu: goto label_3f491c;
        case 0x3f4920u: goto label_3f4920;
        case 0x3f4924u: goto label_3f4924;
        case 0x3f4928u: goto label_3f4928;
        case 0x3f492cu: goto label_3f492c;
        case 0x3f4930u: goto label_3f4930;
        case 0x3f4934u: goto label_3f4934;
        case 0x3f4938u: goto label_3f4938;
        case 0x3f493cu: goto label_3f493c;
        case 0x3f4940u: goto label_3f4940;
        case 0x3f4944u: goto label_3f4944;
        case 0x3f4948u: goto label_3f4948;
        case 0x3f494cu: goto label_3f494c;
        case 0x3f4950u: goto label_3f4950;
        case 0x3f4954u: goto label_3f4954;
        case 0x3f4958u: goto label_3f4958;
        case 0x3f495cu: goto label_3f495c;
        case 0x3f4960u: goto label_3f4960;
        case 0x3f4964u: goto label_3f4964;
        case 0x3f4968u: goto label_3f4968;
        case 0x3f496cu: goto label_3f496c;
        case 0x3f4970u: goto label_3f4970;
        case 0x3f4974u: goto label_3f4974;
        case 0x3f4978u: goto label_3f4978;
        case 0x3f497cu: goto label_3f497c;
        case 0x3f4980u: goto label_3f4980;
        case 0x3f4984u: goto label_3f4984;
        case 0x3f4988u: goto label_3f4988;
        case 0x3f498cu: goto label_3f498c;
        case 0x3f4990u: goto label_3f4990;
        case 0x3f4994u: goto label_3f4994;
        case 0x3f4998u: goto label_3f4998;
        case 0x3f499cu: goto label_3f499c;
        case 0x3f49a0u: goto label_3f49a0;
        case 0x3f49a4u: goto label_3f49a4;
        case 0x3f49a8u: goto label_3f49a8;
        case 0x3f49acu: goto label_3f49ac;
        case 0x3f49b0u: goto label_3f49b0;
        case 0x3f49b4u: goto label_3f49b4;
        case 0x3f49b8u: goto label_3f49b8;
        case 0x3f49bcu: goto label_3f49bc;
        case 0x3f49c0u: goto label_3f49c0;
        case 0x3f49c4u: goto label_3f49c4;
        case 0x3f49c8u: goto label_3f49c8;
        case 0x3f49ccu: goto label_3f49cc;
        case 0x3f49d0u: goto label_3f49d0;
        case 0x3f49d4u: goto label_3f49d4;
        case 0x3f49d8u: goto label_3f49d8;
        case 0x3f49dcu: goto label_3f49dc;
        case 0x3f49e0u: goto label_3f49e0;
        case 0x3f49e4u: goto label_3f49e4;
        case 0x3f49e8u: goto label_3f49e8;
        case 0x3f49ecu: goto label_3f49ec;
        case 0x3f49f0u: goto label_3f49f0;
        case 0x3f49f4u: goto label_3f49f4;
        case 0x3f49f8u: goto label_3f49f8;
        case 0x3f49fcu: goto label_3f49fc;
        case 0x3f4a00u: goto label_3f4a00;
        case 0x3f4a04u: goto label_3f4a04;
        case 0x3f4a08u: goto label_3f4a08;
        case 0x3f4a0cu: goto label_3f4a0c;
        case 0x3f4a10u: goto label_3f4a10;
        case 0x3f4a14u: goto label_3f4a14;
        case 0x3f4a18u: goto label_3f4a18;
        case 0x3f4a1cu: goto label_3f4a1c;
        case 0x3f4a20u: goto label_3f4a20;
        case 0x3f4a24u: goto label_3f4a24;
        case 0x3f4a28u: goto label_3f4a28;
        case 0x3f4a2cu: goto label_3f4a2c;
        case 0x3f4a30u: goto label_3f4a30;
        case 0x3f4a34u: goto label_3f4a34;
        case 0x3f4a38u: goto label_3f4a38;
        case 0x3f4a3cu: goto label_3f4a3c;
        case 0x3f4a40u: goto label_3f4a40;
        case 0x3f4a44u: goto label_3f4a44;
        case 0x3f4a48u: goto label_3f4a48;
        case 0x3f4a4cu: goto label_3f4a4c;
        case 0x3f4a50u: goto label_3f4a50;
        case 0x3f4a54u: goto label_3f4a54;
        case 0x3f4a58u: goto label_3f4a58;
        case 0x3f4a5cu: goto label_3f4a5c;
        case 0x3f4a60u: goto label_3f4a60;
        case 0x3f4a64u: goto label_3f4a64;
        case 0x3f4a68u: goto label_3f4a68;
        case 0x3f4a6cu: goto label_3f4a6c;
        case 0x3f4a70u: goto label_3f4a70;
        case 0x3f4a74u: goto label_3f4a74;
        case 0x3f4a78u: goto label_3f4a78;
        case 0x3f4a7cu: goto label_3f4a7c;
        case 0x3f4a80u: goto label_3f4a80;
        case 0x3f4a84u: goto label_3f4a84;
        case 0x3f4a88u: goto label_3f4a88;
        case 0x3f4a8cu: goto label_3f4a8c;
        case 0x3f4a90u: goto label_3f4a90;
        case 0x3f4a94u: goto label_3f4a94;
        case 0x3f4a98u: goto label_3f4a98;
        case 0x3f4a9cu: goto label_3f4a9c;
        case 0x3f4aa0u: goto label_3f4aa0;
        case 0x3f4aa4u: goto label_3f4aa4;
        case 0x3f4aa8u: goto label_3f4aa8;
        case 0x3f4aacu: goto label_3f4aac;
        case 0x3f4ab0u: goto label_3f4ab0;
        case 0x3f4ab4u: goto label_3f4ab4;
        case 0x3f4ab8u: goto label_3f4ab8;
        case 0x3f4abcu: goto label_3f4abc;
        case 0x3f4ac0u: goto label_3f4ac0;
        case 0x3f4ac4u: goto label_3f4ac4;
        case 0x3f4ac8u: goto label_3f4ac8;
        case 0x3f4accu: goto label_3f4acc;
        case 0x3f4ad0u: goto label_3f4ad0;
        case 0x3f4ad4u: goto label_3f4ad4;
        case 0x3f4ad8u: goto label_3f4ad8;
        case 0x3f4adcu: goto label_3f4adc;
        case 0x3f4ae0u: goto label_3f4ae0;
        case 0x3f4ae4u: goto label_3f4ae4;
        case 0x3f4ae8u: goto label_3f4ae8;
        case 0x3f4aecu: goto label_3f4aec;
        case 0x3f4af0u: goto label_3f4af0;
        case 0x3f4af4u: goto label_3f4af4;
        case 0x3f4af8u: goto label_3f4af8;
        case 0x3f4afcu: goto label_3f4afc;
        case 0x3f4b00u: goto label_3f4b00;
        case 0x3f4b04u: goto label_3f4b04;
        case 0x3f4b08u: goto label_3f4b08;
        case 0x3f4b0cu: goto label_3f4b0c;
        case 0x3f4b10u: goto label_3f4b10;
        case 0x3f4b14u: goto label_3f4b14;
        case 0x3f4b18u: goto label_3f4b18;
        case 0x3f4b1cu: goto label_3f4b1c;
        case 0x3f4b20u: goto label_3f4b20;
        case 0x3f4b24u: goto label_3f4b24;
        case 0x3f4b28u: goto label_3f4b28;
        case 0x3f4b2cu: goto label_3f4b2c;
        case 0x3f4b30u: goto label_3f4b30;
        case 0x3f4b34u: goto label_3f4b34;
        case 0x3f4b38u: goto label_3f4b38;
        case 0x3f4b3cu: goto label_3f4b3c;
        case 0x3f4b40u: goto label_3f4b40;
        case 0x3f4b44u: goto label_3f4b44;
        case 0x3f4b48u: goto label_3f4b48;
        case 0x3f4b4cu: goto label_3f4b4c;
        case 0x3f4b50u: goto label_3f4b50;
        case 0x3f4b54u: goto label_3f4b54;
        case 0x3f4b58u: goto label_3f4b58;
        case 0x3f4b5cu: goto label_3f4b5c;
        case 0x3f4b60u: goto label_3f4b60;
        case 0x3f4b64u: goto label_3f4b64;
        case 0x3f4b68u: goto label_3f4b68;
        case 0x3f4b6cu: goto label_3f4b6c;
        case 0x3f4b70u: goto label_3f4b70;
        case 0x3f4b74u: goto label_3f4b74;
        case 0x3f4b78u: goto label_3f4b78;
        case 0x3f4b7cu: goto label_3f4b7c;
        case 0x3f4b80u: goto label_3f4b80;
        case 0x3f4b84u: goto label_3f4b84;
        case 0x3f4b88u: goto label_3f4b88;
        case 0x3f4b8cu: goto label_3f4b8c;
        case 0x3f4b90u: goto label_3f4b90;
        case 0x3f4b94u: goto label_3f4b94;
        case 0x3f4b98u: goto label_3f4b98;
        case 0x3f4b9cu: goto label_3f4b9c;
        case 0x3f4ba0u: goto label_3f4ba0;
        case 0x3f4ba4u: goto label_3f4ba4;
        case 0x3f4ba8u: goto label_3f4ba8;
        case 0x3f4bacu: goto label_3f4bac;
        case 0x3f4bb0u: goto label_3f4bb0;
        case 0x3f4bb4u: goto label_3f4bb4;
        case 0x3f4bb8u: goto label_3f4bb8;
        case 0x3f4bbcu: goto label_3f4bbc;
        case 0x3f4bc0u: goto label_3f4bc0;
        case 0x3f4bc4u: goto label_3f4bc4;
        case 0x3f4bc8u: goto label_3f4bc8;
        case 0x3f4bccu: goto label_3f4bcc;
        case 0x3f4bd0u: goto label_3f4bd0;
        case 0x3f4bd4u: goto label_3f4bd4;
        case 0x3f4bd8u: goto label_3f4bd8;
        case 0x3f4bdcu: goto label_3f4bdc;
        case 0x3f4be0u: goto label_3f4be0;
        case 0x3f4be4u: goto label_3f4be4;
        case 0x3f4be8u: goto label_3f4be8;
        case 0x3f4becu: goto label_3f4bec;
        case 0x3f4bf0u: goto label_3f4bf0;
        case 0x3f4bf4u: goto label_3f4bf4;
        case 0x3f4bf8u: goto label_3f4bf8;
        case 0x3f4bfcu: goto label_3f4bfc;
        case 0x3f4c00u: goto label_3f4c00;
        case 0x3f4c04u: goto label_3f4c04;
        case 0x3f4c08u: goto label_3f4c08;
        case 0x3f4c0cu: goto label_3f4c0c;
        case 0x3f4c10u: goto label_3f4c10;
        case 0x3f4c14u: goto label_3f4c14;
        case 0x3f4c18u: goto label_3f4c18;
        case 0x3f4c1cu: goto label_3f4c1c;
        case 0x3f4c20u: goto label_3f4c20;
        case 0x3f4c24u: goto label_3f4c24;
        case 0x3f4c28u: goto label_3f4c28;
        case 0x3f4c2cu: goto label_3f4c2c;
        case 0x3f4c30u: goto label_3f4c30;
        case 0x3f4c34u: goto label_3f4c34;
        case 0x3f4c38u: goto label_3f4c38;
        case 0x3f4c3cu: goto label_3f4c3c;
        case 0x3f4c40u: goto label_3f4c40;
        case 0x3f4c44u: goto label_3f4c44;
        case 0x3f4c48u: goto label_3f4c48;
        case 0x3f4c4cu: goto label_3f4c4c;
        case 0x3f4c50u: goto label_3f4c50;
        case 0x3f4c54u: goto label_3f4c54;
        case 0x3f4c58u: goto label_3f4c58;
        case 0x3f4c5cu: goto label_3f4c5c;
        case 0x3f4c60u: goto label_3f4c60;
        case 0x3f4c64u: goto label_3f4c64;
        case 0x3f4c68u: goto label_3f4c68;
        case 0x3f4c6cu: goto label_3f4c6c;
        case 0x3f4c70u: goto label_3f4c70;
        case 0x3f4c74u: goto label_3f4c74;
        case 0x3f4c78u: goto label_3f4c78;
        case 0x3f4c7cu: goto label_3f4c7c;
        case 0x3f4c80u: goto label_3f4c80;
        case 0x3f4c84u: goto label_3f4c84;
        case 0x3f4c88u: goto label_3f4c88;
        case 0x3f4c8cu: goto label_3f4c8c;
        case 0x3f4c90u: goto label_3f4c90;
        case 0x3f4c94u: goto label_3f4c94;
        case 0x3f4c98u: goto label_3f4c98;
        case 0x3f4c9cu: goto label_3f4c9c;
        case 0x3f4ca0u: goto label_3f4ca0;
        case 0x3f4ca4u: goto label_3f4ca4;
        case 0x3f4ca8u: goto label_3f4ca8;
        case 0x3f4cacu: goto label_3f4cac;
        case 0x3f4cb0u: goto label_3f4cb0;
        case 0x3f4cb4u: goto label_3f4cb4;
        case 0x3f4cb8u: goto label_3f4cb8;
        case 0x3f4cbcu: goto label_3f4cbc;
        case 0x3f4cc0u: goto label_3f4cc0;
        case 0x3f4cc4u: goto label_3f4cc4;
        case 0x3f4cc8u: goto label_3f4cc8;
        case 0x3f4cccu: goto label_3f4ccc;
        case 0x3f4cd0u: goto label_3f4cd0;
        case 0x3f4cd4u: goto label_3f4cd4;
        case 0x3f4cd8u: goto label_3f4cd8;
        case 0x3f4cdcu: goto label_3f4cdc;
        case 0x3f4ce0u: goto label_3f4ce0;
        case 0x3f4ce4u: goto label_3f4ce4;
        case 0x3f4ce8u: goto label_3f4ce8;
        case 0x3f4cecu: goto label_3f4cec;
        case 0x3f4cf0u: goto label_3f4cf0;
        case 0x3f4cf4u: goto label_3f4cf4;
        case 0x3f4cf8u: goto label_3f4cf8;
        case 0x3f4cfcu: goto label_3f4cfc;
        case 0x3f4d00u: goto label_3f4d00;
        case 0x3f4d04u: goto label_3f4d04;
        case 0x3f4d08u: goto label_3f4d08;
        case 0x3f4d0cu: goto label_3f4d0c;
        case 0x3f4d10u: goto label_3f4d10;
        case 0x3f4d14u: goto label_3f4d14;
        case 0x3f4d18u: goto label_3f4d18;
        case 0x3f4d1cu: goto label_3f4d1c;
        case 0x3f4d20u: goto label_3f4d20;
        case 0x3f4d24u: goto label_3f4d24;
        case 0x3f4d28u: goto label_3f4d28;
        case 0x3f4d2cu: goto label_3f4d2c;
        case 0x3f4d30u: goto label_3f4d30;
        case 0x3f4d34u: goto label_3f4d34;
        case 0x3f4d38u: goto label_3f4d38;
        case 0x3f4d3cu: goto label_3f4d3c;
        case 0x3f4d40u: goto label_3f4d40;
        case 0x3f4d44u: goto label_3f4d44;
        case 0x3f4d48u: goto label_3f4d48;
        case 0x3f4d4cu: goto label_3f4d4c;
        case 0x3f4d50u: goto label_3f4d50;
        case 0x3f4d54u: goto label_3f4d54;
        case 0x3f4d58u: goto label_3f4d58;
        case 0x3f4d5cu: goto label_3f4d5c;
        case 0x3f4d60u: goto label_3f4d60;
        case 0x3f4d64u: goto label_3f4d64;
        case 0x3f4d68u: goto label_3f4d68;
        case 0x3f4d6cu: goto label_3f4d6c;
        case 0x3f4d70u: goto label_3f4d70;
        case 0x3f4d74u: goto label_3f4d74;
        case 0x3f4d78u: goto label_3f4d78;
        case 0x3f4d7cu: goto label_3f4d7c;
        default: break;
    }

    ctx->pc = 0x3f47b0u;

label_3f47b0:
    // 0x3f47b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3f47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3f47b4:
    // 0x3f47b4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x3f47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3f47b8:
    // 0x3f47b8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3f47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3f47bc:
    // 0x3f47bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f47bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f47c0:
    // 0x3f47c0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3f47c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3f47c4:
    // 0x3f47c4: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x3f47c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
label_3f47c8:
    // 0x3f47c8: 0x3e00008  jr          $ra
label_3f47cc:
    if (ctx->pc == 0x3F47CCu) {
        ctx->pc = 0x3F47CCu;
            // 0x3f47cc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x3F47D0u;
        goto label_3f47d0;
    }
    ctx->pc = 0x3F47C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F47CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F47C8u;
            // 0x3f47cc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F47D0u;
label_3f47d0:
    // 0x3f47d0: 0x80fcd6c  j           func_3F35B0
label_3f47d4:
    if (ctx->pc == 0x3F47D4u) {
        ctx->pc = 0x3F47D4u;
            // 0x3f47d4: 0x2484ffb4  addiu       $a0, $a0, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967220));
        ctx->pc = 0x3F47D8u;
        goto label_3f47d8;
    }
    ctx->pc = 0x3F47D0u;
    ctx->pc = 0x3F47D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F47D0u;
            // 0x3f47d4: 0x2484ffb4  addiu       $a0, $a0, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F35B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3F35B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F47D8u;
label_3f47d8:
    // 0x3f47d8: 0x0  nop
    ctx->pc = 0x3f47d8u;
    // NOP
label_3f47dc:
    // 0x3f47dc: 0x0  nop
    ctx->pc = 0x3f47dcu;
    // NOP
label_3f47e0:
    // 0x3f47e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f47e4:
    // 0x3f47e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f47e8:
    // 0x3f47e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f47ec:
    // 0x3f47ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f47ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f47f0:
    // 0x3f47f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f47f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f47f4:
    // 0x3f47f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3f47f8:
    if (ctx->pc == 0x3F47F8u) {
        ctx->pc = 0x3F47F8u;
            // 0x3f47f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F47FCu;
        goto label_3f47fc;
    }
    ctx->pc = 0x3F47F4u;
    {
        const bool branch_taken_0x3f47f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F47F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F47F4u;
            // 0x3f47f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f47f4) {
            ctx->pc = 0x3F4838u;
            goto label_3f4838;
        }
    }
    ctx->pc = 0x3F47FCu;
label_3f47fc:
    // 0x3f47fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f4800:
    // 0x3f4800: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x3f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
label_3f4804:
    // 0x3f4804: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3f4808:
    if (ctx->pc == 0x3F4808u) {
        ctx->pc = 0x3F4808u;
            // 0x3f4808: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F480Cu;
        goto label_3f480c;
    }
    ctx->pc = 0x3F4804u;
    {
        const bool branch_taken_0x3f4804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4804u;
            // 0x3f4808: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4804) {
            ctx->pc = 0x3F4820u;
            goto label_3f4820;
        }
    }
    ctx->pc = 0x3F480Cu;
label_3f480c:
    // 0x3f480c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f4810:
    // 0x3f4810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4814:
    // 0x3f4814: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3f4814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3f4818:
    // 0x3f4818: 0xc057a68  jal         func_15E9A0
label_3f481c:
    if (ctx->pc == 0x3F481Cu) {
        ctx->pc = 0x3F481Cu;
            // 0x3f481c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3F4820u;
        goto label_3f4820;
    }
    ctx->pc = 0x3F4818u;
    SET_GPR_U32(ctx, 31, 0x3F4820u);
    ctx->pc = 0x3F481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4818u;
            // 0x3f481c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4820u; }
        if (ctx->pc != 0x3F4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4820u; }
        if (ctx->pc != 0x3F4820u) { return; }
    }
    ctx->pc = 0x3F4820u;
label_3f4820:
    // 0x3f4820: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3f4820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3f4824:
    // 0x3f4824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f4824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f4828:
    // 0x3f4828: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3f482c:
    if (ctx->pc == 0x3F482Cu) {
        ctx->pc = 0x3F482Cu;
            // 0x3f482c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4830u;
        goto label_3f4830;
    }
    ctx->pc = 0x3F4828u;
    {
        const bool branch_taken_0x3f4828 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f4828) {
            ctx->pc = 0x3F482Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4828u;
            // 0x3f482c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F483Cu;
            goto label_3f483c;
        }
    }
    ctx->pc = 0x3F4830u;
label_3f4830:
    // 0x3f4830: 0xc0400a8  jal         func_1002A0
label_3f4834:
    if (ctx->pc == 0x3F4834u) {
        ctx->pc = 0x3F4834u;
            // 0x3f4834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4838u;
        goto label_3f4838;
    }
    ctx->pc = 0x3F4830u;
    SET_GPR_U32(ctx, 31, 0x3F4838u);
    ctx->pc = 0x3F4834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4830u;
            // 0x3f4834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4838u; }
        if (ctx->pc != 0x3F4838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4838u; }
        if (ctx->pc != 0x3F4838u) { return; }
    }
    ctx->pc = 0x3F4838u;
label_3f4838:
    // 0x3f4838: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3f4838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f483c:
    // 0x3f483c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4840:
    // 0x3f4840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4844:
    // 0x3f4844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4848:
    // 0x3f4848: 0x3e00008  jr          $ra
label_3f484c:
    if (ctx->pc == 0x3F484Cu) {
        ctx->pc = 0x3F484Cu;
            // 0x3f484c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F4850u;
        goto label_3f4850;
    }
    ctx->pc = 0x3F4848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4848u;
            // 0x3f484c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4850u;
label_3f4850:
    // 0x3f4850: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3f4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3f4854:
    // 0x3f4854: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3f4854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3f4858:
    // 0x3f4858: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3f4858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3f485c:
    // 0x3f485c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3f485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3f4860:
    // 0x3f4860: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f4860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f4864:
    // 0x3f4864: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f4864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f4868:
    // 0x3f4868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f4868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f486c:
    // 0x3f486c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f4870:
    // 0x3f4870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f4874:
    // 0x3f4874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f4878:
    // 0x3f4878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f487c:
    // 0x3f487c: 0x9083005c  lbu         $v1, 0x5C($a0)
    ctx->pc = 0x3f487cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_3f4880:
    // 0x3f4880: 0x18600104  blez        $v1, . + 4 + (0x104 << 2)
label_3f4884:
    if (ctx->pc == 0x3F4884u) {
        ctx->pc = 0x3F4884u;
            // 0x3f4884: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4888u;
        goto label_3f4888;
    }
    ctx->pc = 0x3F4880u;
    {
        const bool branch_taken_0x3f4880 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F4884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4880u;
            // 0x3f4884: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4880) {
            ctx->pc = 0x3F4C94u;
            goto label_3f4c94;
        }
    }
    ctx->pc = 0x3F4888u;
label_3f4888:
    // 0x3f4888: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3f4888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3f488c:
    // 0x3f488c: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x3f488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3f4890:
    // 0x3f4890: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x3f4890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3f4894:
    // 0x3f4894: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x3f4894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3f4898:
    // 0x3f4898: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_3f489c:
    if (ctx->pc == 0x3F489Cu) {
        ctx->pc = 0x3F489Cu;
            // 0x3f489c: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F48A0u;
        goto label_3f48a0;
    }
    ctx->pc = 0x3F4898u;
    {
        const bool branch_taken_0x3f4898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3F489Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4898u;
            // 0x3f489c: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4898) {
            ctx->pc = 0x3F48A4u;
            goto label_3f48a4;
        }
    }
    ctx->pc = 0x3F48A0u;
label_3f48a0:
    // 0x3f48a0: 0x8eb40068  lw          $s4, 0x68($s5)
    ctx->pc = 0x3f48a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_3f48a4:
    // 0x3f48a4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3f48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3f48a8:
    // 0x3f48a8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x3f48a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3f48ac:
    // 0x3f48ac: 0x8c66d120  lw          $a2, -0x2EE0($v1)
    ctx->pc = 0x3f48acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3f48b0:
    // 0x3f48b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f48b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f48b4:
    // 0x3f48b4: 0x8ea80080  lw          $t0, 0x80($s5)
    ctx->pc = 0x3f48b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_3f48b8:
    // 0x3f48b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3f48b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f48bc:
    // 0x3f48bc: 0x92a50010  lbu         $a1, 0x10($s5)
    ctx->pc = 0x3f48bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_3f48c0:
    // 0x3f48c0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x3f48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3f48c4:
    // 0x3f48c4: 0x91030e3d  lbu         $v1, 0xE3D($t0)
    ctx->pc = 0x3f48c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3645)));
label_3f48c8:
    // 0x3f48c8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3f48c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3f48cc:
    // 0x3f48cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3f48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3f48d0:
    // 0x3f48d0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3f48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3f48d4:
    // 0x3f48d4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3f48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3f48d8:
    // 0x3f48d8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3f48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_3f48dc:
    // 0x3f48dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3f48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3f48e0:
    // 0x3f48e0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_3f48e4:
    if (ctx->pc == 0x3F48E4u) {
        ctx->pc = 0x3F48E4u;
            // 0x3f48e4: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x3F48E8u;
        goto label_3f48e8;
    }
    ctx->pc = 0x3F48E0u;
    {
        const bool branch_taken_0x3f48e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3F48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F48E0u;
            // 0x3f48e4: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48e0) {
            ctx->pc = 0x3F48F0u;
            goto label_3f48f0;
        }
    }
    ctx->pc = 0x3F48E8u;
label_3f48e8:
    // 0x3f48e8: 0x100000eb  b           . + 4 + (0xEB << 2)
label_3f48ec:
    if (ctx->pc == 0x3F48ECu) {
        ctx->pc = 0x3F48ECu;
            // 0x3f48ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3F48F0u;
        goto label_3f48f0;
    }
    ctx->pc = 0x3F48E8u;
    {
        const bool branch_taken_0x3f48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F48ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F48E8u;
            // 0x3f48ec: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48e8) {
            ctx->pc = 0x3F4C98u;
            goto label_3f4c98;
        }
    }
    ctx->pc = 0x3F48F0u;
label_3f48f0:
    // 0x3f48f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f48f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f48f4:
    // 0x3f48f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f48f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f48f8:
    // 0x3f48f8: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3f48f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f48fc:
    // 0x3f48fc: 0x96030090  lhu         $v1, 0x90($s0)
    ctx->pc = 0x3f48fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_3f4900:
    // 0x3f4900: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
label_3f4904:
    if (ctx->pc == 0x3F4904u) {
        ctx->pc = 0x3F4904u;
            // 0x3f4904: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3F4908u;
        goto label_3f4908;
    }
    ctx->pc = 0x3F4900u;
    {
        const bool branch_taken_0x3f4900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4900u;
            // 0x3f4904: 0x26110090  addiu       $s1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4900) {
            ctx->pc = 0x3F4C40u;
            goto label_3f4c40;
        }
    }
    ctx->pc = 0x3F4908u;
label_3f4908:
    // 0x3f4908: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3f4908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3f490c:
    // 0x3f490c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3f490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3f4910:
    // 0x3f4910: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x3f4910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3f4914:
    // 0x3f4914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f4914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4918:
    // 0x3f4918: 0xc04ce10  jal         func_133840
label_3f491c:
    if (ctx->pc == 0x3F491Cu) {
        ctx->pc = 0x3F491Cu;
            // 0x3f491c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4920u;
        goto label_3f4920;
    }
    ctx->pc = 0x3F4918u;
    SET_GPR_U32(ctx, 31, 0x3F4920u);
    ctx->pc = 0x3F491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4918u;
            // 0x3f491c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133840u;
    if (runtime->hasFunction(0x133840u)) {
        auto targetFn = runtime->lookupFunction(0x133840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4920u; }
        if (ctx->pc != 0x3F4920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133840_0x133840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4920u; }
        if (ctx->pc != 0x3F4920u) { return; }
    }
    ctx->pc = 0x3F4920u;
label_3f4920:
    // 0x3f4920: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x3f4920u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3f4924:
    // 0x3f4924: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3f4924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f4928:
    // 0x3f4928: 0x142000c5  bnez        $at, . + 4 + (0xC5 << 2)
label_3f492c:
    if (ctx->pc == 0x3F492Cu) {
        ctx->pc = 0x3F4930u;
        goto label_3f4930;
    }
    ctx->pc = 0x3F4928u;
    {
        const bool branch_taken_0x3f4928 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4928) {
            ctx->pc = 0x3F4C40u;
            goto label_3f4c40;
        }
    }
    ctx->pc = 0x3F4930u;
label_3f4930:
    // 0x3f4930: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f4930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f4934:
    // 0x3f4934: 0x293082a  slt         $at, $s4, $s3
    ctx->pc = 0x3f4934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3f4938:
    // 0x3f4938: 0x142000c1  bnez        $at, . + 4 + (0xC1 << 2)
label_3f493c:
    if (ctx->pc == 0x3F493Cu) {
        ctx->pc = 0x3F4940u;
        goto label_3f4940;
    }
    ctx->pc = 0x3F4938u;
    {
        const bool branch_taken_0x3f4938 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4938) {
            ctx->pc = 0x3F4C40u;
            goto label_3f4c40;
        }
    }
    ctx->pc = 0x3F4940u;
label_3f4940:
    // 0x3f4940: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x3f4940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3f4944:
    // 0x3f4944: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3f4948:
    if (ctx->pc == 0x3F4948u) {
        ctx->pc = 0x3F4948u;
            // 0x3f4948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3F494Cu;
        goto label_3f494c;
    }
    ctx->pc = 0x3F4944u;
    {
        const bool branch_taken_0x3f4944 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f4944) {
            ctx->pc = 0x3F4948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4944u;
            // 0x3f4948: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4958u;
            goto label_3f4958;
        }
    }
    ctx->pc = 0x3F494Cu;
label_3f494c:
    // 0x3f494c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f494cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4950:
    // 0x3f4950: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f4954:
    if (ctx->pc == 0x3F4954u) {
        ctx->pc = 0x3F4954u;
            // 0x3f4954: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F4958u;
        goto label_3f4958;
    }
    ctx->pc = 0x3F4950u;
    {
        const bool branch_taken_0x3f4950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4950u;
            // 0x3f4954: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4950) {
            ctx->pc = 0x3F4970u;
            goto label_3f4970;
        }
    }
    ctx->pc = 0x3F4958u;
label_3f4958:
    // 0x3f4958: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f4958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3f495c:
    // 0x3f495c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f495cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f4960:
    // 0x3f4960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4964:
    // 0x3f4964: 0x0  nop
    ctx->pc = 0x3f4964u;
    // NOP
label_3f4968:
    // 0x3f4968: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f4968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3f496c:
    // 0x3f496c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f496cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f4970:
    // 0x3f4970: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3f4970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4974:
    // 0x3f4974: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f4974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3f4978:
    // 0x3f4978: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x3f4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f497c:
    // 0x3f497c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f497cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4980:
    // 0x3f4980: 0x0  nop
    ctx->pc = 0x3f4980u;
    // NOP
label_3f4984:
    // 0x3f4984: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x3f4984u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3f4988:
    // 0x3f4988: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3f4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f498c:
    // 0x3f498c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3f498cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3f4990:
    // 0x3f4990: 0x0  nop
    ctx->pc = 0x3f4990u;
    // NOP
label_3f4994:
    // 0x3f4994: 0x0  nop
    ctx->pc = 0x3f4994u;
    // NOP
label_3f4998:
    // 0x3f4998: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f4998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f499c:
    // 0x3f499c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3f49a0:
    if (ctx->pc == 0x3F49A0u) {
        ctx->pc = 0x3F49A0u;
            // 0x3f49a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3F49A4u;
        goto label_3f49a4;
    }
    ctx->pc = 0x3F499Cu;
    {
        const bool branch_taken_0x3f499c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f499c) {
            ctx->pc = 0x3F49A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F499Cu;
            // 0x3f49a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F49B4u;
            goto label_3f49b4;
        }
    }
    ctx->pc = 0x3F49A4u;
label_3f49a4:
    // 0x3f49a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f49a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f49a8:
    // 0x3f49a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3f49a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3f49ac:
    // 0x3f49ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f49b0:
    if (ctx->pc == 0x3F49B0u) {
        ctx->pc = 0x3F49B0u;
            // 0x3f49b0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3F49B4u;
        goto label_3f49b4;
    }
    ctx->pc = 0x3F49ACu;
    {
        const bool branch_taken_0x3f49ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F49B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F49ACu;
            // 0x3f49b0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f49ac) {
            ctx->pc = 0x3F49CCu;
            goto label_3f49cc;
        }
    }
    ctx->pc = 0x3F49B4u;
label_3f49b4:
    // 0x3f49b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3f49b8:
    // 0x3f49b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f49b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f49bc:
    // 0x3f49bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3f49bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3f49c0:
    // 0x3f49c0: 0x0  nop
    ctx->pc = 0x3f49c0u;
    // NOP
label_3f49c4:
    // 0x3f49c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f49c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f49c8:
    // 0x3f49c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3f49c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f49cc:
    // 0x3f49cc: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x3f49ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f49d0:
    // 0x3f49d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3f49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f49d4:
    // 0x3f49d4: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3f49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3f49d8:
    // 0x3f49d8: 0xc04cbbc  jal         func_132EF0
label_3f49dc:
    if (ctx->pc == 0x3F49DCu) {
        ctx->pc = 0x3F49DCu;
            // 0x3f49dc: 0x26260024  addiu       $a2, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->pc = 0x3F49E0u;
        goto label_3f49e0;
    }
    ctx->pc = 0x3F49D8u;
    SET_GPR_U32(ctx, 31, 0x3F49E0u);
    ctx->pc = 0x3F49DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F49D8u;
            // 0x3f49dc: 0x26260024  addiu       $a2, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F49E0u; }
        if (ctx->pc != 0x3F49E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F49E0u; }
        if (ctx->pc != 0x3F49E0u) { return; }
    }
    ctx->pc = 0x3F49E0u;
label_3f49e0:
    // 0x3f49e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f49e4:
    // 0x3f49e4: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3f49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_3f49e8:
    // 0x3f49e8: 0xc04cbbc  jal         func_132EF0
label_3f49ec:
    if (ctx->pc == 0x3F49ECu) {
        ctx->pc = 0x3F49ECu;
            // 0x3f49ec: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3F49F0u;
        goto label_3f49f0;
    }
    ctx->pc = 0x3F49E8u;
    SET_GPR_U32(ctx, 31, 0x3F49F0u);
    ctx->pc = 0x3F49ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F49E8u;
            // 0x3f49ec: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F49F0u; }
        if (ctx->pc != 0x3F49F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F49F0u; }
        if (ctx->pc != 0x3F49F0u) { return; }
    }
    ctx->pc = 0x3F49F0u;
label_3f49f0:
    // 0x3f49f0: 0xc7aa00c0  lwc1        $f10, 0xC0($sp)
    ctx->pc = 0x3f49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3f49f4:
    // 0x3f49f4: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x3f49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
label_3f49f8:
    // 0x3f49f8: 0x3c0c00af  lui         $t4, 0xAF
    ctx->pc = 0x3f49f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)175 << 16));
label_3f49fc:
    // 0x3f49fc: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x3f49fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3f4a00:
    // 0x3f4a00: 0xc7a900d0  lwc1        $f9, 0xD0($sp)
    ctx->pc = 0x3f4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3f4a04:
    // 0x3f4a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f4a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4a08:
    // 0x3f4a08: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x3f4a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3f4a0c:
    // 0x3f4a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f4a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4a10:
    // 0x3f4a10: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x3f4a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3f4a14:
    // 0x3f4a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4a18:
    // 0x3f4a18: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x3f4a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f4a1c:
    // 0x3f4a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f4a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f4a20:
    // 0x3f4a20: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x3f4a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f4a24:
    // 0x3f4a24: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x3f4a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
label_3f4a28:
    // 0x3f4a28: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x3f4a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_3f4a2c:
    // 0x3f4a2c: 0x258c6f60  addiu       $t4, $t4, 0x6F60
    ctx->pc = 0x3f4a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 28512));
label_3f4a30:
    // 0x3f4a30: 0x240aff00  addiu       $t2, $zero, -0x100
    ctx->pc = 0x3f4a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3f4a34:
    // 0x3f4a34: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x3f4a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_3f4a38:
    // 0x3f4a38: 0x28e10007  slti        $at, $a3, 0x7
    ctx->pc = 0x3f4a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
label_3f4a3c:
    // 0x3f4a3c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_3f4a40:
    if (ctx->pc == 0x3F4A40u) {
        ctx->pc = 0x3F4A44u;
        goto label_3f4a44;
    }
    ctx->pc = 0x3F4A3Cu;
    {
        const bool branch_taken_0x3f4a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4a3c) {
            ctx->pc = 0x3F4A68u;
            goto label_3f4a68;
        }
    }
    ctx->pc = 0x3F4A44u;
label_3f4a44:
    // 0x3f4a44: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x3f4a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3f4a48:
    // 0x3f4a48: 0x55fc2  srl         $t3, $a1, 31
    ctx->pc = 0x3f4a48u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_3f4a4c:
    // 0x3f4a4c: 0x0  nop
    ctx->pc = 0x3f4a4cu;
    // NOP
label_3f4a50:
    // 0x3f4a50: 0x4010  mfhi        $t0
    ctx->pc = 0x3f4a50u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_3f4a54:
    // 0x3f4a54: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x3f4a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_3f4a58:
    // 0x3f4a58: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x3f4a58u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_3f4a5c:
    // 0x3f4a5c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x3f4a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_3f4a60:
    // 0x3f4a60: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f4a64:
    if (ctx->pc == 0x3F4A64u) {
        ctx->pc = 0x3F4A64u;
            // 0x3f4a64: 0x310f00ff  andi        $t7, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3F4A68u;
        goto label_3f4a68;
    }
    ctx->pc = 0x3F4A60u;
    {
        const bool branch_taken_0x3f4a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4A60u;
            // 0x3f4a64: 0x310f00ff  andi        $t7, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4a60) {
            ctx->pc = 0x3F4A90u;
            goto label_3f4a90;
        }
    }
    ctx->pc = 0x3F4A68u;
label_3f4a68:
    // 0x3f4a68: 0x922b0002  lbu         $t3, 0x2($s1)
    ctx->pc = 0x3f4a68u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3f4a6c:
    // 0x3f4a6c: 0x24e8fffa  addiu       $t0, $a3, -0x6
    ctx->pc = 0x3f4a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967290));
label_3f4a70:
    // 0x3f4a70: 0x256bfff9  addiu       $t3, $t3, -0x7
    ctx->pc = 0x3f4a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
label_3f4a74:
    // 0x3f4a74: 0x1684023  subu        $t0, $t3, $t0
    ctx->pc = 0x3f4a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_3f4a78:
    // 0x3f4a78: 0x684018  mult        $t0, $v1, $t0
    ctx->pc = 0x3f4a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3f4a7c:
    // 0x3f4a7c: 0x10b001a  div         $zero, $t0, $t3
    ctx->pc = 0x3f4a7cu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3f4a80:
    // 0x3f4a80: 0x0  nop
    ctx->pc = 0x3f4a80u;
    // NOP
label_3f4a84:
    // 0x3f4a84: 0x0  nop
    ctx->pc = 0x3f4a84u;
    // NOP
label_3f4a88:
    // 0x3f4a88: 0x4012  mflo        $t0
    ctx->pc = 0x3f4a88u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_3f4a8c:
    // 0x3f4a8c: 0x310f00ff  andi        $t7, $t0, 0xFF
    ctx->pc = 0x3f4a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3f4a90:
    // 0x3f4a90: 0x922d0002  lbu         $t5, 0x2($s1)
    ctx->pc = 0x3f4a90u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3f4a94:
    // 0x3f4a94: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3f4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4a98:
    // 0x3f4a98: 0x27ab00b0  addiu       $t3, $sp, 0xB0
    ctx->pc = 0x3f4a98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3f4a9c:
    // 0x3f4a9c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3f4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4aa0:
    // 0x3f4aa0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x3f4aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f4aa4:
    // 0x3f4aa4: 0x25aeffff  addiu       $t6, $t5, -0x1
    ctx->pc = 0x3f4aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_3f4aa8:
    // 0x3f4aa8: 0x1c76823  subu        $t5, $t6, $a3
    ctx->pc = 0x3f4aa8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_3f4aac:
    // 0x3f4aac: 0x448d2000  mtc1        $t5, $f4
    ctx->pc = 0x3f4aacu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3f4ab0:
    // 0x3f4ab0: 0x0  nop
    ctx->pc = 0x3f4ab0u;
    // NOP
label_3f4ab4:
    // 0x3f4ab4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3f4ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3f4ab8:
    // 0x3f4ab8: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x3f4ab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3f4abc:
    // 0x3f4abc: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x3f4abcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f4ac0:
    // 0x3f4ac0: 0x0  nop
    ctx->pc = 0x3f4ac0u;
    // NOP
label_3f4ac4:
    // 0x3f4ac4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f4ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f4ac8:
    // 0x3f4ac8: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x3f4ac8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[1] = ctx->f[4] / ctx->f[1];
label_3f4acc:
    // 0x3f4acc: 0x0  nop
    ctx->pc = 0x3f4accu;
    // NOP
label_3f4ad0:
    // 0x3f4ad0: 0x0  nop
    ctx->pc = 0x3f4ad0u;
    // NOP
label_3f4ad4:
    // 0x3f4ad4: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
label_3f4ad8:
    if (ctx->pc == 0x3F4AD8u) {
        ctx->pc = 0x3F4AD8u;
            // 0x3f4ad8: 0x460102c0  add.s       $f11, $f0, $f1 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3F4ADCu;
        goto label_3f4adc;
    }
    ctx->pc = 0x3F4AD4u;
    {
        const bool branch_taken_0x3f4ad4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4AD4u;
            // 0x3f4ad8: 0x460102c0  add.s       $f11, $f0, $f1 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ad4) {
            ctx->pc = 0x3F4AF8u;
            goto label_3f4af8;
        }
    }
    ctx->pc = 0x3F4ADCu;
label_3f4adc:
    // 0x3f4adc: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x3f4adcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f4ae0:
    // 0x3f4ae0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3f4ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3f4ae4:
    // 0x3f4ae4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3f4ae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3f4ae8:
    // 0x3f4ae8: 0x0  nop
    ctx->pc = 0x3f4ae8u;
    // NOP
label_3f4aec:
    // 0x3f4aec: 0x0  nop
    ctx->pc = 0x3f4aecu;
    // NOP
label_3f4af0:
    // 0x3f4af0: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
label_3f4af4:
    if (ctx->pc == 0x3F4AF4u) {
        ctx->pc = 0x3F4AF8u;
        goto label_3f4af8;
    }
    ctx->pc = 0x3F4AF0u;
    {
        const bool branch_taken_0x3f4af0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4af0) {
            ctx->pc = 0x3F4ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f4adc;
        }
    }
    ctx->pc = 0x3F4AF8u;
label_3f4af8:
    // 0x3f4af8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3f4af8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4afc:
    // 0x3f4afc: 0x65840  sll         $t3, $a2, 1
    ctx->pc = 0x3f4afcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3f4b00:
    // 0x3f4b00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f4b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f4b04:
    // 0x3f4b04: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x3f4b04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_3f4b08:
    // 0x3f4b08: 0x31e800ff  andi        $t0, $t7, 0xFF
    ctx->pc = 0x3f4b08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_3f4b0c:
    // 0x3f4b0c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x3f4b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_3f4b10:
    // 0x3f4b10: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x3f4b10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
label_3f4b14:
    // 0x3f4b14: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x3f4b14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_3f4b18:
    // 0x3f4b18: 0xad680024  sw          $t0, 0x24($t3)
    ctx->pc = 0x3f4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 8));
label_3f4b1c:
    // 0x3f4b1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3f4b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3f4b20:
    // 0x3f4b20: 0xad68000c  sw          $t0, 0xC($t3)
    ctx->pc = 0x3f4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
label_3f4b24:
    // 0x3f4b24: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3f4b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3f4b28:
    // 0x3f4b28: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3f4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3f4b2c:
    // 0x3f4b2c: 0x46093818  adda.s      $f7, $f9
    ctx->pc = 0x3f4b2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
label_3f4b30:
    // 0x3f4b30: 0x4600521c  madd.s      $f8, $f10, $f0
    ctx->pc = 0x3f4b30u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
label_3f4b34:
    // 0x3f4b34: 0x46053818  adda.s      $f7, $f5
    ctx->pc = 0x3f4b34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
label_3f4b38:
    // 0x3f4b38: 0x4600311c  madd.s      $f4, $f6, $f0
    ctx->pc = 0x3f4b38u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_3f4b3c:
    // 0x3f4b3c: 0x46023818  adda.s      $f7, $f2
    ctx->pc = 0x3f4b3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3f4b40:
    // 0x3f4b40: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x3f4b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_3f4b44:
    // 0x3f4b44: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x3f4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b48:
    // 0x3f4b48: 0xe7a800b0  swc1        $f8, 0xB0($sp)
    ctx->pc = 0x3f4b48u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3f4b4c:
    // 0x3f4b4c: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x3f4b4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3f4b50:
    // 0x3f4b50: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3f4b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_3f4b54:
    // 0x3f4b54: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x3f4b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_3f4b58:
    // 0x3f4b58: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x3f4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b5c:
    // 0x3f4b5c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3f4b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3f4b60:
    // 0x3f4b60: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3f4b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3f4b64:
    // 0x3f4b64: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x3f4b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_3f4b68:
    // 0x3f4b68: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x3f4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b6c:
    // 0x3f4b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f4b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f4b70:
    // 0x3f4b70: 0xe5600008  swc1        $f0, 0x8($t3)
    ctx->pc = 0x3f4b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_3f4b74:
    // 0x3f4b74: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x3f4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b78:
    // 0x3f4b78: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3f4b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
label_3f4b7c:
    // 0x3f4b7c: 0xe5600018  swc1        $f0, 0x18($t3)
    ctx->pc = 0x3f4b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
label_3f4b80:
    // 0x3f4b80: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x3f4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b84:
    // 0x3f4b84: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3f4b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_3f4b88:
    // 0x3f4b88: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x3f4b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_3f4b8c:
    // 0x3f4b8c: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x3f4b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4b90:
    // 0x3f4b90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3f4b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3f4b94:
    // 0x3f4b94: 0xe5600020  swc1        $f0, 0x20($t3)
    ctx->pc = 0x3f4b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 32), bits); }
label_3f4b98:
    // 0x3f4b98: 0xe56b0028  swc1        $f11, 0x28($t3)
    ctx->pc = 0x3f4b98u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 40), bits); }
label_3f4b9c:
    // 0x3f4b9c: 0xe56b0010  swc1        $f11, 0x10($t3)
    ctx->pc = 0x3f4b9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
label_3f4ba0:
    // 0x3f4ba0: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x3f4ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
label_3f4ba4:
    // 0x3f4ba4: 0xad69002c  sw          $t1, 0x2C($t3)
    ctx->pc = 0x3f4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 9));
label_3f4ba8:
    // 0x3f4ba8: 0x92280002  lbu         $t0, 0x2($s1)
    ctx->pc = 0x3f4ba8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3f4bac:
    // 0x3f4bac: 0xe8402a  slt         $t0, $a3, $t0
    ctx->pc = 0x3f4bacu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3f4bb0:
    // 0x3f4bb0: 0x1500ffa1  bnez        $t0, . + 4 + (-0x5F << 2)
label_3f4bb4:
    if (ctx->pc == 0x3F4BB4u) {
        ctx->pc = 0x3F4BB4u;
            // 0x3f4bb4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x3F4BB8u;
        goto label_3f4bb8;
    }
    ctx->pc = 0x3F4BB0u;
    {
        const bool branch_taken_0x3f4bb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4BB0u;
            // 0x3f4bb4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4bb0) {
            ctx->pc = 0x3F4A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f4a38;
        }
    }
    ctx->pc = 0x3F4BB8u;
label_3f4bb8:
    // 0x3f4bb8: 0x16c0001b  bnez        $s6, . + 4 + (0x1B << 2)
label_3f4bbc:
    if (ctx->pc == 0x3F4BBCu) {
        ctx->pc = 0x3F4BC0u;
        goto label_3f4bc0;
    }
    ctx->pc = 0x3F4BB8u;
    {
        const bool branch_taken_0x3f4bb8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4bb8) {
            ctx->pc = 0x3F4C28u;
            goto label_3f4c28;
        }
    }
    ctx->pc = 0x3F4BC0u;
label_3f4bc0:
    // 0x3f4bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4bc4:
    // 0x3f4bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4bc8:
    // 0x3f4bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f4bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4bcc:
    // 0x3f4bcc: 0xc0506b8  jal         func_141AE0
label_3f4bd0:
    if (ctx->pc == 0x3F4BD0u) {
        ctx->pc = 0x3F4BD0u;
            // 0x3f4bd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4BD4u;
        goto label_3f4bd4;
    }
    ctx->pc = 0x3F4BCCu;
    SET_GPR_U32(ctx, 31, 0x3F4BD4u);
    ctx->pc = 0x3F4BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4BCCu;
            // 0x3f4bd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BD4u; }
        if (ctx->pc != 0x3F4BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BD4u; }
        if (ctx->pc != 0x3F4BD4u) { return; }
    }
    ctx->pc = 0x3F4BD4u;
label_3f4bd4:
    // 0x3f4bd4: 0xc0508b0  jal         func_1422C0
label_3f4bd8:
    if (ctx->pc == 0x3F4BD8u) {
        ctx->pc = 0x3F4BD8u;
            // 0x3f4bd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4BDCu;
        goto label_3f4bdc;
    }
    ctx->pc = 0x3F4BD4u;
    SET_GPR_U32(ctx, 31, 0x3F4BDCu);
    ctx->pc = 0x3F4BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4BD4u;
            // 0x3f4bd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BDCu; }
        if (ctx->pc != 0x3F4BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BDCu; }
        if (ctx->pc != 0x3F4BDCu) { return; }
    }
    ctx->pc = 0x3F4BDCu;
label_3f4bdc:
    // 0x3f4bdc: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x3f4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3f4be0:
    // 0x3f4be0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f4be4:
    // 0x3f4be4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3f4be4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3f4be8:
    // 0x3f4be8: 0xc0506ac  jal         func_141AB0
label_3f4bec:
    if (ctx->pc == 0x3F4BECu) {
        ctx->pc = 0x3F4BECu;
            // 0x3f4bec: 0x8c443db8  lw          $a0, 0x3DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
        ctx->pc = 0x3F4BF0u;
        goto label_3f4bf0;
    }
    ctx->pc = 0x3F4BE8u;
    SET_GPR_U32(ctx, 31, 0x3F4BF0u);
    ctx->pc = 0x3F4BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4BE8u;
            // 0x3f4bec: 0x8c443db8  lw          $a0, 0x3DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BF0u; }
        if (ctx->pc != 0x3F4BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4BF0u; }
        if (ctx->pc != 0x3F4BF0u) { return; }
    }
    ctx->pc = 0x3F4BF0u;
label_3f4bf0:
    // 0x3f4bf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f4bf4:
    // 0x3f4bf4: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3f4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3f4bf8:
    // 0x3f4bf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f4bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f4bfc:
    // 0x3f4bfc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f4bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f4c00:
    // 0x3f4c00: 0x320f809  jalr        $t9
label_3f4c04:
    if (ctx->pc == 0x3F4C04u) {
        ctx->pc = 0x3F4C04u;
            // 0x3f4c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C08u;
        goto label_3f4c08;
    }
    ctx->pc = 0x3F4C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4C08u);
        ctx->pc = 0x3F4C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C00u;
            // 0x3f4c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C08u; }
            if (ctx->pc != 0x3F4C08u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4C08u;
label_3f4c08:
    // 0x3f4c08: 0xc05068c  jal         func_141A30
label_3f4c0c:
    if (ctx->pc == 0x3F4C0Cu) {
        ctx->pc = 0x3F4C0Cu;
            // 0x3f4c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C10u;
        goto label_3f4c10;
    }
    ctx->pc = 0x3F4C08u;
    SET_GPR_U32(ctx, 31, 0x3F4C10u);
    ctx->pc = 0x3F4C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C08u;
            // 0x3f4c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C10u; }
        if (ctx->pc != 0x3F4C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C10u; }
        if (ctx->pc != 0x3F4C10u) { return; }
    }
    ctx->pc = 0x3F4C10u;
label_3f4c10:
    // 0x3f4c10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f4c14:
    // 0x3f4c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4c18:
    // 0x3f4c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f4c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4c1c:
    // 0x3f4c1c: 0xc0508b4  jal         func_1422D0
label_3f4c20:
    if (ctx->pc == 0x3F4C20u) {
        ctx->pc = 0x3F4C20u;
            // 0x3f4c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C24u;
        goto label_3f4c24;
    }
    ctx->pc = 0x3F4C1Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C24u);
    ctx->pc = 0x3F4C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C1Cu;
            // 0x3f4c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C24u; }
        if (ctx->pc != 0x3F4C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C24u; }
        if (ctx->pc != 0x3F4C24u) { return; }
    }
    ctx->pc = 0x3F4C24u;
label_3f4c24:
    // 0x3f4c24: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x3f4c24u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f4c28:
    // 0x3f4c28: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3f4c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3f4c2c:
    // 0x3f4c2c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3f4c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3f4c30:
    // 0x3f4c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4c34:
    // 0x3f4c34: 0x24a56f60  addiu       $a1, $a1, 0x6F60
    ctx->pc = 0x3f4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28512));
label_3f4c38:
    // 0x3f4c38: 0xc050a08  jal         func_142820
label_3f4c3c:
    if (ctx->pc == 0x3F4C3Cu) {
        ctx->pc = 0x3F4C3Cu;
            // 0x3f4c3c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3F4C40u;
        goto label_3f4c40;
    }
    ctx->pc = 0x3F4C38u;
    SET_GPR_U32(ctx, 31, 0x3F4C40u);
    ctx->pc = 0x3F4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C38u;
            // 0x3f4c3c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C40u; }
        if (ctx->pc != 0x3F4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C40u; }
        if (ctx->pc != 0x3F4C40u) { return; }
    }
    ctx->pc = 0x3F4C40u;
label_3f4c40:
    // 0x3f4c40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f4c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3f4c44:
    // 0x3f4c44: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x3f4c44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3f4c48:
    // 0x3f4c48: 0x1460ff2c  bnez        $v1, . + 4 + (-0xD4 << 2)
label_3f4c4c:
    if (ctx->pc == 0x3F4C4Cu) {
        ctx->pc = 0x3F4C4Cu;
            // 0x3f4c4c: 0x26100160  addiu       $s0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->pc = 0x3F4C50u;
        goto label_3f4c50;
    }
    ctx->pc = 0x3F4C48u;
    {
        const bool branch_taken_0x3f4c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C48u;
            // 0x3f4c4c: 0x26100160  addiu       $s0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4c48) {
            ctx->pc = 0x3F48FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f48fc;
        }
    }
    ctx->pc = 0x3F4C50u;
label_3f4c50:
    // 0x3f4c50: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_3f4c54:
    if (ctx->pc == 0x3F4C54u) {
        ctx->pc = 0x3F4C58u;
        goto label_3f4c58;
    }
    ctx->pc = 0x3F4C50u;
    {
        const bool branch_taken_0x3f4c50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4c50) {
            ctx->pc = 0x3F4C94u;
            goto label_3f4c94;
        }
    }
    ctx->pc = 0x3F4C58u;
label_3f4c58:
    // 0x3f4c58: 0xc050a88  jal         func_142A20
label_3f4c5c:
    if (ctx->pc == 0x3F4C5Cu) {
        ctx->pc = 0x3F4C60u;
        goto label_3f4c60;
    }
    ctx->pc = 0x3F4C58u;
    SET_GPR_U32(ctx, 31, 0x3F4C60u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C60u; }
        if (ctx->pc != 0x3F4C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C60u; }
        if (ctx->pc != 0x3F4C60u) { return; }
    }
    ctx->pc = 0x3F4C60u;
label_3f4c60:
    // 0x3f4c60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f4c64:
    // 0x3f4c64: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3f4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3f4c68:
    // 0x3f4c68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f4c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f4c6c:
    // 0x3f4c6c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3f4c6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3f4c70:
    // 0x3f4c70: 0x320f809  jalr        $t9
label_3f4c74:
    if (ctx->pc == 0x3F4C74u) {
        ctx->pc = 0x3F4C78u;
        goto label_3f4c78;
    }
    ctx->pc = 0x3F4C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4C78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4C78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C78u; }
            if (ctx->pc != 0x3F4C78u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4C78u;
label_3f4c78:
    // 0x3f4c78: 0xc05068c  jal         func_141A30
label_3f4c7c:
    if (ctx->pc == 0x3F4C7Cu) {
        ctx->pc = 0x3F4C7Cu;
            // 0x3f4c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F4C80u;
        goto label_3f4c80;
    }
    ctx->pc = 0x3F4C78u;
    SET_GPR_U32(ctx, 31, 0x3F4C80u);
    ctx->pc = 0x3F4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C78u;
            // 0x3f4c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C80u; }
        if (ctx->pc != 0x3F4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C80u; }
        if (ctx->pc != 0x3F4C80u) { return; }
    }
    ctx->pc = 0x3F4C80u;
label_3f4c80:
    // 0x3f4c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f4c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4c84:
    // 0x3f4c84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f4c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4c88:
    // 0x3f4c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f4c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4c8c:
    // 0x3f4c8c: 0xc0506b8  jal         func_141AE0
label_3f4c90:
    if (ctx->pc == 0x3F4C90u) {
        ctx->pc = 0x3F4C90u;
            // 0x3f4c90: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4C94u;
        goto label_3f4c94;
    }
    ctx->pc = 0x3F4C8Cu;
    SET_GPR_U32(ctx, 31, 0x3F4C94u);
    ctx->pc = 0x3F4C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4C8Cu;
            // 0x3f4c90: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C94u; }
        if (ctx->pc != 0x3F4C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4C94u; }
        if (ctx->pc != 0x3F4C94u) { return; }
    }
    ctx->pc = 0x3F4C94u;
label_3f4c94:
    // 0x3f4c94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3f4c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3f4c98:
    // 0x3f4c98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3f4c98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f4c9c:
    // 0x3f4c9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3f4c9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f4ca0:
    // 0x3f4ca0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f4ca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f4ca4:
    // 0x3f4ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f4ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f4ca8:
    // 0x3f4ca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f4ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f4cac:
    // 0x3f4cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f4cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f4cb0:
    // 0x3f4cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f4cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f4cb4:
    // 0x3f4cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f4cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4cb8:
    // 0x3f4cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4cbc:
    // 0x3f4cbc: 0x3e00008  jr          $ra
label_3f4cc0:
    if (ctx->pc == 0x3F4CC0u) {
        ctx->pc = 0x3F4CC0u;
            // 0x3f4cc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3F4CC4u;
        goto label_3f4cc4;
    }
    ctx->pc = 0x3F4CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4CBCu;
            // 0x3f4cc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4CC4u;
label_3f4cc4:
    // 0x3f4cc4: 0x0  nop
    ctx->pc = 0x3f4cc4u;
    // NOP
label_3f4cc8:
    // 0x3f4cc8: 0x0  nop
    ctx->pc = 0x3f4cc8u;
    // NOP
label_3f4ccc:
    // 0x3f4ccc: 0x0  nop
    ctx->pc = 0x3f4cccu;
    // NOP
label_3f4cd0:
    // 0x3f4cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f4cd4:
    // 0x3f4cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f4cd8:
    // 0x3f4cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f4cdc:
    // 0x3f4cdc: 0x9083005c  lbu         $v1, 0x5C($a0)
    ctx->pc = 0x3f4cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_3f4ce0:
    // 0x3f4ce0: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
label_3f4ce4:
    if (ctx->pc == 0x3F4CE4u) {
        ctx->pc = 0x3F4CE4u;
            // 0x3f4ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4CE8u;
        goto label_3f4ce8;
    }
    ctx->pc = 0x3F4CE0u;
    {
        const bool branch_taken_0x3f4ce0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F4CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4CE0u;
            // 0x3f4ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ce0) {
            ctx->pc = 0x3F4D68u;
            goto label_3f4d68;
        }
    }
    ctx->pc = 0x3F4CE8u;
label_3f4ce8:
    // 0x3f4ce8: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x3f4ce8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3f4cec:
    // 0x3f4cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f4cf0:
    // 0x3f4cf0: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_3f4cf4:
    if (ctx->pc == 0x3F4CF4u) {
        ctx->pc = 0x3F4CF8u;
        goto label_3f4cf8;
    }
    ctx->pc = 0x3F4CF0u;
    {
        const bool branch_taken_0x3f4cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4cf0) {
            ctx->pc = 0x3F4D54u;
            goto label_3f4d54;
        }
    }
    ctx->pc = 0x3F4CF8u;
label_3f4cf8:
    // 0x3f4cf8: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
label_3f4cfc:
    if (ctx->pc == 0x3F4CFCu) {
        ctx->pc = 0x3F4CFCu;
            // 0x3f4cfc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F4D00u;
        goto label_3f4d00;
    }
    ctx->pc = 0x3F4CF8u;
    {
        const bool branch_taken_0x3f4cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4cf8) {
            ctx->pc = 0x3F4CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4CF8u;
            // 0x3f4cfc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4D40u;
            goto label_3f4d40;
        }
    }
    ctx->pc = 0x3F4D00u;
label_3f4d00:
    // 0x3f4d00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f4d04:
    // 0x3f4d04: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
label_3f4d08:
    if (ctx->pc == 0x3F4D08u) {
        ctx->pc = 0x3F4D08u;
            // 0x3f4d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D0Cu;
        goto label_3f4d0c;
    }
    ctx->pc = 0x3F4D04u;
    {
        const bool branch_taken_0x3f4d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4d04) {
            ctx->pc = 0x3F4D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4D04u;
            // 0x3f4d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4D30u;
            goto label_3f4d30;
        }
    }
    ctx->pc = 0x3F4D0Cu;
label_3f4d0c:
    // 0x3f4d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f4d10:
    // 0x3f4d10: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3f4d14:
    if (ctx->pc == 0x3F4D14u) {
        ctx->pc = 0x3F4D14u;
            // 0x3f4d14: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3F4D18u;
        goto label_3f4d18;
    }
    ctx->pc = 0x3F4D10u;
    {
        const bool branch_taken_0x3f4d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4d10) {
            ctx->pc = 0x3F4D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4D10u;
            // 0x3f4d14: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4D20u;
            goto label_3f4d20;
        }
    }
    ctx->pc = 0x3F4D18u;
label_3f4d18:
    // 0x3f4d18: 0x10000014  b           . + 4 + (0x14 << 2)
label_3f4d1c:
    if (ctx->pc == 0x3F4D1Cu) {
        ctx->pc = 0x3F4D1Cu;
            // 0x3f4d1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3F4D20u;
        goto label_3f4d20;
    }
    ctx->pc = 0x3F4D18u;
    {
        const bool branch_taken_0x3f4d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4D18u;
            // 0x3f4d1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4d18) {
            ctx->pc = 0x3F4D6Cu;
            goto label_3f4d6c;
        }
    }
    ctx->pc = 0x3F4D20u;
label_3f4d20:
    // 0x3f4d20: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3f4d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3f4d24:
    // 0x3f4d24: 0x320f809  jalr        $t9
label_3f4d28:
    if (ctx->pc == 0x3F4D28u) {
        ctx->pc = 0x3F4D2Cu;
        goto label_3f4d2c;
    }
    ctx->pc = 0x3F4D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4D2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4D2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D2Cu; }
            if (ctx->pc != 0x3F4D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F4D2Cu;
label_3f4d2c:
    // 0x3f4d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4d30:
    // 0x3f4d30: 0xc0fd360  jal         func_3F4D80
label_3f4d34:
    if (ctx->pc == 0x3F4D34u) {
        ctx->pc = 0x3F4D38u;
        goto label_3f4d38;
    }
    ctx->pc = 0x3F4D30u;
    SET_GPR_U32(ctx, 31, 0x3F4D38u);
    ctx->pc = 0x3F4D80u;
    if (runtime->hasFunction(0x3F4D80u)) {
        auto targetFn = runtime->lookupFunction(0x3F4D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D38u; }
        if (ctx->pc != 0x3F4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4D80_0x3f4d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D38u; }
        if (ctx->pc != 0x3F4D38u) { return; }
    }
    ctx->pc = 0x3F4D38u;
label_3f4d38:
    // 0x3f4d38: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f4d3c:
    if (ctx->pc == 0x3F4D3Cu) {
        ctx->pc = 0x3F4D40u;
        goto label_3f4d40;
    }
    ctx->pc = 0x3F4D38u;
    {
        const bool branch_taken_0x3f4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d38) {
            ctx->pc = 0x3F4D68u;
            goto label_3f4d68;
        }
    }
    ctx->pc = 0x3F4D40u;
label_3f4d40:
    // 0x3f4d40: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3f4d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3f4d44:
    // 0x3f4d44: 0x320f809  jalr        $t9
label_3f4d48:
    if (ctx->pc == 0x3F4D48u) {
        ctx->pc = 0x3F4D4Cu;
        goto label_3f4d4c;
    }
    ctx->pc = 0x3F4D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4D4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D4Cu; }
            if (ctx->pc != 0x3F4D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F4D4Cu;
label_3f4d4c:
    // 0x3f4d4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f4d50:
    if (ctx->pc == 0x3F4D50u) {
        ctx->pc = 0x3F4D54u;
        goto label_3f4d54;
    }
    ctx->pc = 0x3F4D4Cu;
    {
        const bool branch_taken_0x3f4d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4d4c) {
            ctx->pc = 0x3F4D68u;
            goto label_3f4d68;
        }
    }
    ctx->pc = 0x3F4D54u;
label_3f4d54:
    // 0x3f4d54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f4d58:
    // 0x3f4d58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4d5c:
    // 0x3f4d5c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3f4d60:
    // 0x3f4d60: 0xc057b7c  jal         func_15EDF0
label_3f4d64:
    if (ctx->pc == 0x3F4D64u) {
        ctx->pc = 0x3F4D64u;
            // 0x3f4d64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F4D68u;
        goto label_3f4d68;
    }
    ctx->pc = 0x3F4D60u;
    SET_GPR_U32(ctx, 31, 0x3F4D68u);
    ctx->pc = 0x3F4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4D60u;
            // 0x3f4d64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D68u; }
        if (ctx->pc != 0x3F4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4D68u; }
        if (ctx->pc != 0x3F4D68u) { return; }
    }
    ctx->pc = 0x3F4D68u;
label_3f4d68:
    // 0x3f4d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f4d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f4d6c:
    // 0x3f4d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f4d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f4d70:
    // 0x3f4d70: 0x3e00008  jr          $ra
label_3f4d74:
    if (ctx->pc == 0x3F4D74u) {
        ctx->pc = 0x3F4D74u;
            // 0x3f4d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3F4D78u;
        goto label_3f4d78;
    }
    ctx->pc = 0x3F4D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4D70u;
            // 0x3f4d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F4D78u;
label_3f4d78:
    // 0x3f4d78: 0x0  nop
    ctx->pc = 0x3f4d78u;
    // NOP
label_3f4d7c:
    // 0x3f4d7c: 0x0  nop
    ctx->pc = 0x3f4d7cu;
    // NOP
}
