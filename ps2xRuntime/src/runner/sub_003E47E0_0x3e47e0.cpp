#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E47E0
// Address: 0x3e47e0 - 0x3e5610
void sub_003E47E0_0x3e47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E47E0_0x3e47e0");
#endif

    switch (ctx->pc) {
        case 0x3e47e0u: goto label_3e47e0;
        case 0x3e47e4u: goto label_3e47e4;
        case 0x3e47e8u: goto label_3e47e8;
        case 0x3e47ecu: goto label_3e47ec;
        case 0x3e47f0u: goto label_3e47f0;
        case 0x3e47f4u: goto label_3e47f4;
        case 0x3e47f8u: goto label_3e47f8;
        case 0x3e47fcu: goto label_3e47fc;
        case 0x3e4800u: goto label_3e4800;
        case 0x3e4804u: goto label_3e4804;
        case 0x3e4808u: goto label_3e4808;
        case 0x3e480cu: goto label_3e480c;
        case 0x3e4810u: goto label_3e4810;
        case 0x3e4814u: goto label_3e4814;
        case 0x3e4818u: goto label_3e4818;
        case 0x3e481cu: goto label_3e481c;
        case 0x3e4820u: goto label_3e4820;
        case 0x3e4824u: goto label_3e4824;
        case 0x3e4828u: goto label_3e4828;
        case 0x3e482cu: goto label_3e482c;
        case 0x3e4830u: goto label_3e4830;
        case 0x3e4834u: goto label_3e4834;
        case 0x3e4838u: goto label_3e4838;
        case 0x3e483cu: goto label_3e483c;
        case 0x3e4840u: goto label_3e4840;
        case 0x3e4844u: goto label_3e4844;
        case 0x3e4848u: goto label_3e4848;
        case 0x3e484cu: goto label_3e484c;
        case 0x3e4850u: goto label_3e4850;
        case 0x3e4854u: goto label_3e4854;
        case 0x3e4858u: goto label_3e4858;
        case 0x3e485cu: goto label_3e485c;
        case 0x3e4860u: goto label_3e4860;
        case 0x3e4864u: goto label_3e4864;
        case 0x3e4868u: goto label_3e4868;
        case 0x3e486cu: goto label_3e486c;
        case 0x3e4870u: goto label_3e4870;
        case 0x3e4874u: goto label_3e4874;
        case 0x3e4878u: goto label_3e4878;
        case 0x3e487cu: goto label_3e487c;
        case 0x3e4880u: goto label_3e4880;
        case 0x3e4884u: goto label_3e4884;
        case 0x3e4888u: goto label_3e4888;
        case 0x3e488cu: goto label_3e488c;
        case 0x3e4890u: goto label_3e4890;
        case 0x3e4894u: goto label_3e4894;
        case 0x3e4898u: goto label_3e4898;
        case 0x3e489cu: goto label_3e489c;
        case 0x3e48a0u: goto label_3e48a0;
        case 0x3e48a4u: goto label_3e48a4;
        case 0x3e48a8u: goto label_3e48a8;
        case 0x3e48acu: goto label_3e48ac;
        case 0x3e48b0u: goto label_3e48b0;
        case 0x3e48b4u: goto label_3e48b4;
        case 0x3e48b8u: goto label_3e48b8;
        case 0x3e48bcu: goto label_3e48bc;
        case 0x3e48c0u: goto label_3e48c0;
        case 0x3e48c4u: goto label_3e48c4;
        case 0x3e48c8u: goto label_3e48c8;
        case 0x3e48ccu: goto label_3e48cc;
        case 0x3e48d0u: goto label_3e48d0;
        case 0x3e48d4u: goto label_3e48d4;
        case 0x3e48d8u: goto label_3e48d8;
        case 0x3e48dcu: goto label_3e48dc;
        case 0x3e48e0u: goto label_3e48e0;
        case 0x3e48e4u: goto label_3e48e4;
        case 0x3e48e8u: goto label_3e48e8;
        case 0x3e48ecu: goto label_3e48ec;
        case 0x3e48f0u: goto label_3e48f0;
        case 0x3e48f4u: goto label_3e48f4;
        case 0x3e48f8u: goto label_3e48f8;
        case 0x3e48fcu: goto label_3e48fc;
        case 0x3e4900u: goto label_3e4900;
        case 0x3e4904u: goto label_3e4904;
        case 0x3e4908u: goto label_3e4908;
        case 0x3e490cu: goto label_3e490c;
        case 0x3e4910u: goto label_3e4910;
        case 0x3e4914u: goto label_3e4914;
        case 0x3e4918u: goto label_3e4918;
        case 0x3e491cu: goto label_3e491c;
        case 0x3e4920u: goto label_3e4920;
        case 0x3e4924u: goto label_3e4924;
        case 0x3e4928u: goto label_3e4928;
        case 0x3e492cu: goto label_3e492c;
        case 0x3e4930u: goto label_3e4930;
        case 0x3e4934u: goto label_3e4934;
        case 0x3e4938u: goto label_3e4938;
        case 0x3e493cu: goto label_3e493c;
        case 0x3e4940u: goto label_3e4940;
        case 0x3e4944u: goto label_3e4944;
        case 0x3e4948u: goto label_3e4948;
        case 0x3e494cu: goto label_3e494c;
        case 0x3e4950u: goto label_3e4950;
        case 0x3e4954u: goto label_3e4954;
        case 0x3e4958u: goto label_3e4958;
        case 0x3e495cu: goto label_3e495c;
        case 0x3e4960u: goto label_3e4960;
        case 0x3e4964u: goto label_3e4964;
        case 0x3e4968u: goto label_3e4968;
        case 0x3e496cu: goto label_3e496c;
        case 0x3e4970u: goto label_3e4970;
        case 0x3e4974u: goto label_3e4974;
        case 0x3e4978u: goto label_3e4978;
        case 0x3e497cu: goto label_3e497c;
        case 0x3e4980u: goto label_3e4980;
        case 0x3e4984u: goto label_3e4984;
        case 0x3e4988u: goto label_3e4988;
        case 0x3e498cu: goto label_3e498c;
        case 0x3e4990u: goto label_3e4990;
        case 0x3e4994u: goto label_3e4994;
        case 0x3e4998u: goto label_3e4998;
        case 0x3e499cu: goto label_3e499c;
        case 0x3e49a0u: goto label_3e49a0;
        case 0x3e49a4u: goto label_3e49a4;
        case 0x3e49a8u: goto label_3e49a8;
        case 0x3e49acu: goto label_3e49ac;
        case 0x3e49b0u: goto label_3e49b0;
        case 0x3e49b4u: goto label_3e49b4;
        case 0x3e49b8u: goto label_3e49b8;
        case 0x3e49bcu: goto label_3e49bc;
        case 0x3e49c0u: goto label_3e49c0;
        case 0x3e49c4u: goto label_3e49c4;
        case 0x3e49c8u: goto label_3e49c8;
        case 0x3e49ccu: goto label_3e49cc;
        case 0x3e49d0u: goto label_3e49d0;
        case 0x3e49d4u: goto label_3e49d4;
        case 0x3e49d8u: goto label_3e49d8;
        case 0x3e49dcu: goto label_3e49dc;
        case 0x3e49e0u: goto label_3e49e0;
        case 0x3e49e4u: goto label_3e49e4;
        case 0x3e49e8u: goto label_3e49e8;
        case 0x3e49ecu: goto label_3e49ec;
        case 0x3e49f0u: goto label_3e49f0;
        case 0x3e49f4u: goto label_3e49f4;
        case 0x3e49f8u: goto label_3e49f8;
        case 0x3e49fcu: goto label_3e49fc;
        case 0x3e4a00u: goto label_3e4a00;
        case 0x3e4a04u: goto label_3e4a04;
        case 0x3e4a08u: goto label_3e4a08;
        case 0x3e4a0cu: goto label_3e4a0c;
        case 0x3e4a10u: goto label_3e4a10;
        case 0x3e4a14u: goto label_3e4a14;
        case 0x3e4a18u: goto label_3e4a18;
        case 0x3e4a1cu: goto label_3e4a1c;
        case 0x3e4a20u: goto label_3e4a20;
        case 0x3e4a24u: goto label_3e4a24;
        case 0x3e4a28u: goto label_3e4a28;
        case 0x3e4a2cu: goto label_3e4a2c;
        case 0x3e4a30u: goto label_3e4a30;
        case 0x3e4a34u: goto label_3e4a34;
        case 0x3e4a38u: goto label_3e4a38;
        case 0x3e4a3cu: goto label_3e4a3c;
        case 0x3e4a40u: goto label_3e4a40;
        case 0x3e4a44u: goto label_3e4a44;
        case 0x3e4a48u: goto label_3e4a48;
        case 0x3e4a4cu: goto label_3e4a4c;
        case 0x3e4a50u: goto label_3e4a50;
        case 0x3e4a54u: goto label_3e4a54;
        case 0x3e4a58u: goto label_3e4a58;
        case 0x3e4a5cu: goto label_3e4a5c;
        case 0x3e4a60u: goto label_3e4a60;
        case 0x3e4a64u: goto label_3e4a64;
        case 0x3e4a68u: goto label_3e4a68;
        case 0x3e4a6cu: goto label_3e4a6c;
        case 0x3e4a70u: goto label_3e4a70;
        case 0x3e4a74u: goto label_3e4a74;
        case 0x3e4a78u: goto label_3e4a78;
        case 0x3e4a7cu: goto label_3e4a7c;
        case 0x3e4a80u: goto label_3e4a80;
        case 0x3e4a84u: goto label_3e4a84;
        case 0x3e4a88u: goto label_3e4a88;
        case 0x3e4a8cu: goto label_3e4a8c;
        case 0x3e4a90u: goto label_3e4a90;
        case 0x3e4a94u: goto label_3e4a94;
        case 0x3e4a98u: goto label_3e4a98;
        case 0x3e4a9cu: goto label_3e4a9c;
        case 0x3e4aa0u: goto label_3e4aa0;
        case 0x3e4aa4u: goto label_3e4aa4;
        case 0x3e4aa8u: goto label_3e4aa8;
        case 0x3e4aacu: goto label_3e4aac;
        case 0x3e4ab0u: goto label_3e4ab0;
        case 0x3e4ab4u: goto label_3e4ab4;
        case 0x3e4ab8u: goto label_3e4ab8;
        case 0x3e4abcu: goto label_3e4abc;
        case 0x3e4ac0u: goto label_3e4ac0;
        case 0x3e4ac4u: goto label_3e4ac4;
        case 0x3e4ac8u: goto label_3e4ac8;
        case 0x3e4accu: goto label_3e4acc;
        case 0x3e4ad0u: goto label_3e4ad0;
        case 0x3e4ad4u: goto label_3e4ad4;
        case 0x3e4ad8u: goto label_3e4ad8;
        case 0x3e4adcu: goto label_3e4adc;
        case 0x3e4ae0u: goto label_3e4ae0;
        case 0x3e4ae4u: goto label_3e4ae4;
        case 0x3e4ae8u: goto label_3e4ae8;
        case 0x3e4aecu: goto label_3e4aec;
        case 0x3e4af0u: goto label_3e4af0;
        case 0x3e4af4u: goto label_3e4af4;
        case 0x3e4af8u: goto label_3e4af8;
        case 0x3e4afcu: goto label_3e4afc;
        case 0x3e4b00u: goto label_3e4b00;
        case 0x3e4b04u: goto label_3e4b04;
        case 0x3e4b08u: goto label_3e4b08;
        case 0x3e4b0cu: goto label_3e4b0c;
        case 0x3e4b10u: goto label_3e4b10;
        case 0x3e4b14u: goto label_3e4b14;
        case 0x3e4b18u: goto label_3e4b18;
        case 0x3e4b1cu: goto label_3e4b1c;
        case 0x3e4b20u: goto label_3e4b20;
        case 0x3e4b24u: goto label_3e4b24;
        case 0x3e4b28u: goto label_3e4b28;
        case 0x3e4b2cu: goto label_3e4b2c;
        case 0x3e4b30u: goto label_3e4b30;
        case 0x3e4b34u: goto label_3e4b34;
        case 0x3e4b38u: goto label_3e4b38;
        case 0x3e4b3cu: goto label_3e4b3c;
        case 0x3e4b40u: goto label_3e4b40;
        case 0x3e4b44u: goto label_3e4b44;
        case 0x3e4b48u: goto label_3e4b48;
        case 0x3e4b4cu: goto label_3e4b4c;
        case 0x3e4b50u: goto label_3e4b50;
        case 0x3e4b54u: goto label_3e4b54;
        case 0x3e4b58u: goto label_3e4b58;
        case 0x3e4b5cu: goto label_3e4b5c;
        case 0x3e4b60u: goto label_3e4b60;
        case 0x3e4b64u: goto label_3e4b64;
        case 0x3e4b68u: goto label_3e4b68;
        case 0x3e4b6cu: goto label_3e4b6c;
        case 0x3e4b70u: goto label_3e4b70;
        case 0x3e4b74u: goto label_3e4b74;
        case 0x3e4b78u: goto label_3e4b78;
        case 0x3e4b7cu: goto label_3e4b7c;
        case 0x3e4b80u: goto label_3e4b80;
        case 0x3e4b84u: goto label_3e4b84;
        case 0x3e4b88u: goto label_3e4b88;
        case 0x3e4b8cu: goto label_3e4b8c;
        case 0x3e4b90u: goto label_3e4b90;
        case 0x3e4b94u: goto label_3e4b94;
        case 0x3e4b98u: goto label_3e4b98;
        case 0x3e4b9cu: goto label_3e4b9c;
        case 0x3e4ba0u: goto label_3e4ba0;
        case 0x3e4ba4u: goto label_3e4ba4;
        case 0x3e4ba8u: goto label_3e4ba8;
        case 0x3e4bacu: goto label_3e4bac;
        case 0x3e4bb0u: goto label_3e4bb0;
        case 0x3e4bb4u: goto label_3e4bb4;
        case 0x3e4bb8u: goto label_3e4bb8;
        case 0x3e4bbcu: goto label_3e4bbc;
        case 0x3e4bc0u: goto label_3e4bc0;
        case 0x3e4bc4u: goto label_3e4bc4;
        case 0x3e4bc8u: goto label_3e4bc8;
        case 0x3e4bccu: goto label_3e4bcc;
        case 0x3e4bd0u: goto label_3e4bd0;
        case 0x3e4bd4u: goto label_3e4bd4;
        case 0x3e4bd8u: goto label_3e4bd8;
        case 0x3e4bdcu: goto label_3e4bdc;
        case 0x3e4be0u: goto label_3e4be0;
        case 0x3e4be4u: goto label_3e4be4;
        case 0x3e4be8u: goto label_3e4be8;
        case 0x3e4becu: goto label_3e4bec;
        case 0x3e4bf0u: goto label_3e4bf0;
        case 0x3e4bf4u: goto label_3e4bf4;
        case 0x3e4bf8u: goto label_3e4bf8;
        case 0x3e4bfcu: goto label_3e4bfc;
        case 0x3e4c00u: goto label_3e4c00;
        case 0x3e4c04u: goto label_3e4c04;
        case 0x3e4c08u: goto label_3e4c08;
        case 0x3e4c0cu: goto label_3e4c0c;
        case 0x3e4c10u: goto label_3e4c10;
        case 0x3e4c14u: goto label_3e4c14;
        case 0x3e4c18u: goto label_3e4c18;
        case 0x3e4c1cu: goto label_3e4c1c;
        case 0x3e4c20u: goto label_3e4c20;
        case 0x3e4c24u: goto label_3e4c24;
        case 0x3e4c28u: goto label_3e4c28;
        case 0x3e4c2cu: goto label_3e4c2c;
        case 0x3e4c30u: goto label_3e4c30;
        case 0x3e4c34u: goto label_3e4c34;
        case 0x3e4c38u: goto label_3e4c38;
        case 0x3e4c3cu: goto label_3e4c3c;
        case 0x3e4c40u: goto label_3e4c40;
        case 0x3e4c44u: goto label_3e4c44;
        case 0x3e4c48u: goto label_3e4c48;
        case 0x3e4c4cu: goto label_3e4c4c;
        case 0x3e4c50u: goto label_3e4c50;
        case 0x3e4c54u: goto label_3e4c54;
        case 0x3e4c58u: goto label_3e4c58;
        case 0x3e4c5cu: goto label_3e4c5c;
        case 0x3e4c60u: goto label_3e4c60;
        case 0x3e4c64u: goto label_3e4c64;
        case 0x3e4c68u: goto label_3e4c68;
        case 0x3e4c6cu: goto label_3e4c6c;
        case 0x3e4c70u: goto label_3e4c70;
        case 0x3e4c74u: goto label_3e4c74;
        case 0x3e4c78u: goto label_3e4c78;
        case 0x3e4c7cu: goto label_3e4c7c;
        case 0x3e4c80u: goto label_3e4c80;
        case 0x3e4c84u: goto label_3e4c84;
        case 0x3e4c88u: goto label_3e4c88;
        case 0x3e4c8cu: goto label_3e4c8c;
        case 0x3e4c90u: goto label_3e4c90;
        case 0x3e4c94u: goto label_3e4c94;
        case 0x3e4c98u: goto label_3e4c98;
        case 0x3e4c9cu: goto label_3e4c9c;
        case 0x3e4ca0u: goto label_3e4ca0;
        case 0x3e4ca4u: goto label_3e4ca4;
        case 0x3e4ca8u: goto label_3e4ca8;
        case 0x3e4cacu: goto label_3e4cac;
        case 0x3e4cb0u: goto label_3e4cb0;
        case 0x3e4cb4u: goto label_3e4cb4;
        case 0x3e4cb8u: goto label_3e4cb8;
        case 0x3e4cbcu: goto label_3e4cbc;
        case 0x3e4cc0u: goto label_3e4cc0;
        case 0x3e4cc4u: goto label_3e4cc4;
        case 0x3e4cc8u: goto label_3e4cc8;
        case 0x3e4cccu: goto label_3e4ccc;
        case 0x3e4cd0u: goto label_3e4cd0;
        case 0x3e4cd4u: goto label_3e4cd4;
        case 0x3e4cd8u: goto label_3e4cd8;
        case 0x3e4cdcu: goto label_3e4cdc;
        case 0x3e4ce0u: goto label_3e4ce0;
        case 0x3e4ce4u: goto label_3e4ce4;
        case 0x3e4ce8u: goto label_3e4ce8;
        case 0x3e4cecu: goto label_3e4cec;
        case 0x3e4cf0u: goto label_3e4cf0;
        case 0x3e4cf4u: goto label_3e4cf4;
        case 0x3e4cf8u: goto label_3e4cf8;
        case 0x3e4cfcu: goto label_3e4cfc;
        case 0x3e4d00u: goto label_3e4d00;
        case 0x3e4d04u: goto label_3e4d04;
        case 0x3e4d08u: goto label_3e4d08;
        case 0x3e4d0cu: goto label_3e4d0c;
        case 0x3e4d10u: goto label_3e4d10;
        case 0x3e4d14u: goto label_3e4d14;
        case 0x3e4d18u: goto label_3e4d18;
        case 0x3e4d1cu: goto label_3e4d1c;
        case 0x3e4d20u: goto label_3e4d20;
        case 0x3e4d24u: goto label_3e4d24;
        case 0x3e4d28u: goto label_3e4d28;
        case 0x3e4d2cu: goto label_3e4d2c;
        case 0x3e4d30u: goto label_3e4d30;
        case 0x3e4d34u: goto label_3e4d34;
        case 0x3e4d38u: goto label_3e4d38;
        case 0x3e4d3cu: goto label_3e4d3c;
        case 0x3e4d40u: goto label_3e4d40;
        case 0x3e4d44u: goto label_3e4d44;
        case 0x3e4d48u: goto label_3e4d48;
        case 0x3e4d4cu: goto label_3e4d4c;
        case 0x3e4d50u: goto label_3e4d50;
        case 0x3e4d54u: goto label_3e4d54;
        case 0x3e4d58u: goto label_3e4d58;
        case 0x3e4d5cu: goto label_3e4d5c;
        case 0x3e4d60u: goto label_3e4d60;
        case 0x3e4d64u: goto label_3e4d64;
        case 0x3e4d68u: goto label_3e4d68;
        case 0x3e4d6cu: goto label_3e4d6c;
        case 0x3e4d70u: goto label_3e4d70;
        case 0x3e4d74u: goto label_3e4d74;
        case 0x3e4d78u: goto label_3e4d78;
        case 0x3e4d7cu: goto label_3e4d7c;
        case 0x3e4d80u: goto label_3e4d80;
        case 0x3e4d84u: goto label_3e4d84;
        case 0x3e4d88u: goto label_3e4d88;
        case 0x3e4d8cu: goto label_3e4d8c;
        case 0x3e4d90u: goto label_3e4d90;
        case 0x3e4d94u: goto label_3e4d94;
        case 0x3e4d98u: goto label_3e4d98;
        case 0x3e4d9cu: goto label_3e4d9c;
        case 0x3e4da0u: goto label_3e4da0;
        case 0x3e4da4u: goto label_3e4da4;
        case 0x3e4da8u: goto label_3e4da8;
        case 0x3e4dacu: goto label_3e4dac;
        case 0x3e4db0u: goto label_3e4db0;
        case 0x3e4db4u: goto label_3e4db4;
        case 0x3e4db8u: goto label_3e4db8;
        case 0x3e4dbcu: goto label_3e4dbc;
        case 0x3e4dc0u: goto label_3e4dc0;
        case 0x3e4dc4u: goto label_3e4dc4;
        case 0x3e4dc8u: goto label_3e4dc8;
        case 0x3e4dccu: goto label_3e4dcc;
        case 0x3e4dd0u: goto label_3e4dd0;
        case 0x3e4dd4u: goto label_3e4dd4;
        case 0x3e4dd8u: goto label_3e4dd8;
        case 0x3e4ddcu: goto label_3e4ddc;
        case 0x3e4de0u: goto label_3e4de0;
        case 0x3e4de4u: goto label_3e4de4;
        case 0x3e4de8u: goto label_3e4de8;
        case 0x3e4decu: goto label_3e4dec;
        case 0x3e4df0u: goto label_3e4df0;
        case 0x3e4df4u: goto label_3e4df4;
        case 0x3e4df8u: goto label_3e4df8;
        case 0x3e4dfcu: goto label_3e4dfc;
        case 0x3e4e00u: goto label_3e4e00;
        case 0x3e4e04u: goto label_3e4e04;
        case 0x3e4e08u: goto label_3e4e08;
        case 0x3e4e0cu: goto label_3e4e0c;
        case 0x3e4e10u: goto label_3e4e10;
        case 0x3e4e14u: goto label_3e4e14;
        case 0x3e4e18u: goto label_3e4e18;
        case 0x3e4e1cu: goto label_3e4e1c;
        case 0x3e4e20u: goto label_3e4e20;
        case 0x3e4e24u: goto label_3e4e24;
        case 0x3e4e28u: goto label_3e4e28;
        case 0x3e4e2cu: goto label_3e4e2c;
        case 0x3e4e30u: goto label_3e4e30;
        case 0x3e4e34u: goto label_3e4e34;
        case 0x3e4e38u: goto label_3e4e38;
        case 0x3e4e3cu: goto label_3e4e3c;
        case 0x3e4e40u: goto label_3e4e40;
        case 0x3e4e44u: goto label_3e4e44;
        case 0x3e4e48u: goto label_3e4e48;
        case 0x3e4e4cu: goto label_3e4e4c;
        case 0x3e4e50u: goto label_3e4e50;
        case 0x3e4e54u: goto label_3e4e54;
        case 0x3e4e58u: goto label_3e4e58;
        case 0x3e4e5cu: goto label_3e4e5c;
        case 0x3e4e60u: goto label_3e4e60;
        case 0x3e4e64u: goto label_3e4e64;
        case 0x3e4e68u: goto label_3e4e68;
        case 0x3e4e6cu: goto label_3e4e6c;
        case 0x3e4e70u: goto label_3e4e70;
        case 0x3e4e74u: goto label_3e4e74;
        case 0x3e4e78u: goto label_3e4e78;
        case 0x3e4e7cu: goto label_3e4e7c;
        case 0x3e4e80u: goto label_3e4e80;
        case 0x3e4e84u: goto label_3e4e84;
        case 0x3e4e88u: goto label_3e4e88;
        case 0x3e4e8cu: goto label_3e4e8c;
        case 0x3e4e90u: goto label_3e4e90;
        case 0x3e4e94u: goto label_3e4e94;
        case 0x3e4e98u: goto label_3e4e98;
        case 0x3e4e9cu: goto label_3e4e9c;
        case 0x3e4ea0u: goto label_3e4ea0;
        case 0x3e4ea4u: goto label_3e4ea4;
        case 0x3e4ea8u: goto label_3e4ea8;
        case 0x3e4eacu: goto label_3e4eac;
        case 0x3e4eb0u: goto label_3e4eb0;
        case 0x3e4eb4u: goto label_3e4eb4;
        case 0x3e4eb8u: goto label_3e4eb8;
        case 0x3e4ebcu: goto label_3e4ebc;
        case 0x3e4ec0u: goto label_3e4ec0;
        case 0x3e4ec4u: goto label_3e4ec4;
        case 0x3e4ec8u: goto label_3e4ec8;
        case 0x3e4eccu: goto label_3e4ecc;
        case 0x3e4ed0u: goto label_3e4ed0;
        case 0x3e4ed4u: goto label_3e4ed4;
        case 0x3e4ed8u: goto label_3e4ed8;
        case 0x3e4edcu: goto label_3e4edc;
        case 0x3e4ee0u: goto label_3e4ee0;
        case 0x3e4ee4u: goto label_3e4ee4;
        case 0x3e4ee8u: goto label_3e4ee8;
        case 0x3e4eecu: goto label_3e4eec;
        case 0x3e4ef0u: goto label_3e4ef0;
        case 0x3e4ef4u: goto label_3e4ef4;
        case 0x3e4ef8u: goto label_3e4ef8;
        case 0x3e4efcu: goto label_3e4efc;
        case 0x3e4f00u: goto label_3e4f00;
        case 0x3e4f04u: goto label_3e4f04;
        case 0x3e4f08u: goto label_3e4f08;
        case 0x3e4f0cu: goto label_3e4f0c;
        case 0x3e4f10u: goto label_3e4f10;
        case 0x3e4f14u: goto label_3e4f14;
        case 0x3e4f18u: goto label_3e4f18;
        case 0x3e4f1cu: goto label_3e4f1c;
        case 0x3e4f20u: goto label_3e4f20;
        case 0x3e4f24u: goto label_3e4f24;
        case 0x3e4f28u: goto label_3e4f28;
        case 0x3e4f2cu: goto label_3e4f2c;
        case 0x3e4f30u: goto label_3e4f30;
        case 0x3e4f34u: goto label_3e4f34;
        case 0x3e4f38u: goto label_3e4f38;
        case 0x3e4f3cu: goto label_3e4f3c;
        case 0x3e4f40u: goto label_3e4f40;
        case 0x3e4f44u: goto label_3e4f44;
        case 0x3e4f48u: goto label_3e4f48;
        case 0x3e4f4cu: goto label_3e4f4c;
        case 0x3e4f50u: goto label_3e4f50;
        case 0x3e4f54u: goto label_3e4f54;
        case 0x3e4f58u: goto label_3e4f58;
        case 0x3e4f5cu: goto label_3e4f5c;
        case 0x3e4f60u: goto label_3e4f60;
        case 0x3e4f64u: goto label_3e4f64;
        case 0x3e4f68u: goto label_3e4f68;
        case 0x3e4f6cu: goto label_3e4f6c;
        case 0x3e4f70u: goto label_3e4f70;
        case 0x3e4f74u: goto label_3e4f74;
        case 0x3e4f78u: goto label_3e4f78;
        case 0x3e4f7cu: goto label_3e4f7c;
        case 0x3e4f80u: goto label_3e4f80;
        case 0x3e4f84u: goto label_3e4f84;
        case 0x3e4f88u: goto label_3e4f88;
        case 0x3e4f8cu: goto label_3e4f8c;
        case 0x3e4f90u: goto label_3e4f90;
        case 0x3e4f94u: goto label_3e4f94;
        case 0x3e4f98u: goto label_3e4f98;
        case 0x3e4f9cu: goto label_3e4f9c;
        case 0x3e4fa0u: goto label_3e4fa0;
        case 0x3e4fa4u: goto label_3e4fa4;
        case 0x3e4fa8u: goto label_3e4fa8;
        case 0x3e4facu: goto label_3e4fac;
        case 0x3e4fb0u: goto label_3e4fb0;
        case 0x3e4fb4u: goto label_3e4fb4;
        case 0x3e4fb8u: goto label_3e4fb8;
        case 0x3e4fbcu: goto label_3e4fbc;
        case 0x3e4fc0u: goto label_3e4fc0;
        case 0x3e4fc4u: goto label_3e4fc4;
        case 0x3e4fc8u: goto label_3e4fc8;
        case 0x3e4fccu: goto label_3e4fcc;
        case 0x3e4fd0u: goto label_3e4fd0;
        case 0x3e4fd4u: goto label_3e4fd4;
        case 0x3e4fd8u: goto label_3e4fd8;
        case 0x3e4fdcu: goto label_3e4fdc;
        case 0x3e4fe0u: goto label_3e4fe0;
        case 0x3e4fe4u: goto label_3e4fe4;
        case 0x3e4fe8u: goto label_3e4fe8;
        case 0x3e4fecu: goto label_3e4fec;
        case 0x3e4ff0u: goto label_3e4ff0;
        case 0x3e4ff4u: goto label_3e4ff4;
        case 0x3e4ff8u: goto label_3e4ff8;
        case 0x3e4ffcu: goto label_3e4ffc;
        case 0x3e5000u: goto label_3e5000;
        case 0x3e5004u: goto label_3e5004;
        case 0x3e5008u: goto label_3e5008;
        case 0x3e500cu: goto label_3e500c;
        case 0x3e5010u: goto label_3e5010;
        case 0x3e5014u: goto label_3e5014;
        case 0x3e5018u: goto label_3e5018;
        case 0x3e501cu: goto label_3e501c;
        case 0x3e5020u: goto label_3e5020;
        case 0x3e5024u: goto label_3e5024;
        case 0x3e5028u: goto label_3e5028;
        case 0x3e502cu: goto label_3e502c;
        case 0x3e5030u: goto label_3e5030;
        case 0x3e5034u: goto label_3e5034;
        case 0x3e5038u: goto label_3e5038;
        case 0x3e503cu: goto label_3e503c;
        case 0x3e5040u: goto label_3e5040;
        case 0x3e5044u: goto label_3e5044;
        case 0x3e5048u: goto label_3e5048;
        case 0x3e504cu: goto label_3e504c;
        case 0x3e5050u: goto label_3e5050;
        case 0x3e5054u: goto label_3e5054;
        case 0x3e5058u: goto label_3e5058;
        case 0x3e505cu: goto label_3e505c;
        case 0x3e5060u: goto label_3e5060;
        case 0x3e5064u: goto label_3e5064;
        case 0x3e5068u: goto label_3e5068;
        case 0x3e506cu: goto label_3e506c;
        case 0x3e5070u: goto label_3e5070;
        case 0x3e5074u: goto label_3e5074;
        case 0x3e5078u: goto label_3e5078;
        case 0x3e507cu: goto label_3e507c;
        case 0x3e5080u: goto label_3e5080;
        case 0x3e5084u: goto label_3e5084;
        case 0x3e5088u: goto label_3e5088;
        case 0x3e508cu: goto label_3e508c;
        case 0x3e5090u: goto label_3e5090;
        case 0x3e5094u: goto label_3e5094;
        case 0x3e5098u: goto label_3e5098;
        case 0x3e509cu: goto label_3e509c;
        case 0x3e50a0u: goto label_3e50a0;
        case 0x3e50a4u: goto label_3e50a4;
        case 0x3e50a8u: goto label_3e50a8;
        case 0x3e50acu: goto label_3e50ac;
        case 0x3e50b0u: goto label_3e50b0;
        case 0x3e50b4u: goto label_3e50b4;
        case 0x3e50b8u: goto label_3e50b8;
        case 0x3e50bcu: goto label_3e50bc;
        case 0x3e50c0u: goto label_3e50c0;
        case 0x3e50c4u: goto label_3e50c4;
        case 0x3e50c8u: goto label_3e50c8;
        case 0x3e50ccu: goto label_3e50cc;
        case 0x3e50d0u: goto label_3e50d0;
        case 0x3e50d4u: goto label_3e50d4;
        case 0x3e50d8u: goto label_3e50d8;
        case 0x3e50dcu: goto label_3e50dc;
        case 0x3e50e0u: goto label_3e50e0;
        case 0x3e50e4u: goto label_3e50e4;
        case 0x3e50e8u: goto label_3e50e8;
        case 0x3e50ecu: goto label_3e50ec;
        case 0x3e50f0u: goto label_3e50f0;
        case 0x3e50f4u: goto label_3e50f4;
        case 0x3e50f8u: goto label_3e50f8;
        case 0x3e50fcu: goto label_3e50fc;
        case 0x3e5100u: goto label_3e5100;
        case 0x3e5104u: goto label_3e5104;
        case 0x3e5108u: goto label_3e5108;
        case 0x3e510cu: goto label_3e510c;
        case 0x3e5110u: goto label_3e5110;
        case 0x3e5114u: goto label_3e5114;
        case 0x3e5118u: goto label_3e5118;
        case 0x3e511cu: goto label_3e511c;
        case 0x3e5120u: goto label_3e5120;
        case 0x3e5124u: goto label_3e5124;
        case 0x3e5128u: goto label_3e5128;
        case 0x3e512cu: goto label_3e512c;
        case 0x3e5130u: goto label_3e5130;
        case 0x3e5134u: goto label_3e5134;
        case 0x3e5138u: goto label_3e5138;
        case 0x3e513cu: goto label_3e513c;
        case 0x3e5140u: goto label_3e5140;
        case 0x3e5144u: goto label_3e5144;
        case 0x3e5148u: goto label_3e5148;
        case 0x3e514cu: goto label_3e514c;
        case 0x3e5150u: goto label_3e5150;
        case 0x3e5154u: goto label_3e5154;
        case 0x3e5158u: goto label_3e5158;
        case 0x3e515cu: goto label_3e515c;
        case 0x3e5160u: goto label_3e5160;
        case 0x3e5164u: goto label_3e5164;
        case 0x3e5168u: goto label_3e5168;
        case 0x3e516cu: goto label_3e516c;
        case 0x3e5170u: goto label_3e5170;
        case 0x3e5174u: goto label_3e5174;
        case 0x3e5178u: goto label_3e5178;
        case 0x3e517cu: goto label_3e517c;
        case 0x3e5180u: goto label_3e5180;
        case 0x3e5184u: goto label_3e5184;
        case 0x3e5188u: goto label_3e5188;
        case 0x3e518cu: goto label_3e518c;
        case 0x3e5190u: goto label_3e5190;
        case 0x3e5194u: goto label_3e5194;
        case 0x3e5198u: goto label_3e5198;
        case 0x3e519cu: goto label_3e519c;
        case 0x3e51a0u: goto label_3e51a0;
        case 0x3e51a4u: goto label_3e51a4;
        case 0x3e51a8u: goto label_3e51a8;
        case 0x3e51acu: goto label_3e51ac;
        case 0x3e51b0u: goto label_3e51b0;
        case 0x3e51b4u: goto label_3e51b4;
        case 0x3e51b8u: goto label_3e51b8;
        case 0x3e51bcu: goto label_3e51bc;
        case 0x3e51c0u: goto label_3e51c0;
        case 0x3e51c4u: goto label_3e51c4;
        case 0x3e51c8u: goto label_3e51c8;
        case 0x3e51ccu: goto label_3e51cc;
        case 0x3e51d0u: goto label_3e51d0;
        case 0x3e51d4u: goto label_3e51d4;
        case 0x3e51d8u: goto label_3e51d8;
        case 0x3e51dcu: goto label_3e51dc;
        case 0x3e51e0u: goto label_3e51e0;
        case 0x3e51e4u: goto label_3e51e4;
        case 0x3e51e8u: goto label_3e51e8;
        case 0x3e51ecu: goto label_3e51ec;
        case 0x3e51f0u: goto label_3e51f0;
        case 0x3e51f4u: goto label_3e51f4;
        case 0x3e51f8u: goto label_3e51f8;
        case 0x3e51fcu: goto label_3e51fc;
        case 0x3e5200u: goto label_3e5200;
        case 0x3e5204u: goto label_3e5204;
        case 0x3e5208u: goto label_3e5208;
        case 0x3e520cu: goto label_3e520c;
        case 0x3e5210u: goto label_3e5210;
        case 0x3e5214u: goto label_3e5214;
        case 0x3e5218u: goto label_3e5218;
        case 0x3e521cu: goto label_3e521c;
        case 0x3e5220u: goto label_3e5220;
        case 0x3e5224u: goto label_3e5224;
        case 0x3e5228u: goto label_3e5228;
        case 0x3e522cu: goto label_3e522c;
        case 0x3e5230u: goto label_3e5230;
        case 0x3e5234u: goto label_3e5234;
        case 0x3e5238u: goto label_3e5238;
        case 0x3e523cu: goto label_3e523c;
        case 0x3e5240u: goto label_3e5240;
        case 0x3e5244u: goto label_3e5244;
        case 0x3e5248u: goto label_3e5248;
        case 0x3e524cu: goto label_3e524c;
        case 0x3e5250u: goto label_3e5250;
        case 0x3e5254u: goto label_3e5254;
        case 0x3e5258u: goto label_3e5258;
        case 0x3e525cu: goto label_3e525c;
        case 0x3e5260u: goto label_3e5260;
        case 0x3e5264u: goto label_3e5264;
        case 0x3e5268u: goto label_3e5268;
        case 0x3e526cu: goto label_3e526c;
        case 0x3e5270u: goto label_3e5270;
        case 0x3e5274u: goto label_3e5274;
        case 0x3e5278u: goto label_3e5278;
        case 0x3e527cu: goto label_3e527c;
        case 0x3e5280u: goto label_3e5280;
        case 0x3e5284u: goto label_3e5284;
        case 0x3e5288u: goto label_3e5288;
        case 0x3e528cu: goto label_3e528c;
        case 0x3e5290u: goto label_3e5290;
        case 0x3e5294u: goto label_3e5294;
        case 0x3e5298u: goto label_3e5298;
        case 0x3e529cu: goto label_3e529c;
        case 0x3e52a0u: goto label_3e52a0;
        case 0x3e52a4u: goto label_3e52a4;
        case 0x3e52a8u: goto label_3e52a8;
        case 0x3e52acu: goto label_3e52ac;
        case 0x3e52b0u: goto label_3e52b0;
        case 0x3e52b4u: goto label_3e52b4;
        case 0x3e52b8u: goto label_3e52b8;
        case 0x3e52bcu: goto label_3e52bc;
        case 0x3e52c0u: goto label_3e52c0;
        case 0x3e52c4u: goto label_3e52c4;
        case 0x3e52c8u: goto label_3e52c8;
        case 0x3e52ccu: goto label_3e52cc;
        case 0x3e52d0u: goto label_3e52d0;
        case 0x3e52d4u: goto label_3e52d4;
        case 0x3e52d8u: goto label_3e52d8;
        case 0x3e52dcu: goto label_3e52dc;
        case 0x3e52e0u: goto label_3e52e0;
        case 0x3e52e4u: goto label_3e52e4;
        case 0x3e52e8u: goto label_3e52e8;
        case 0x3e52ecu: goto label_3e52ec;
        case 0x3e52f0u: goto label_3e52f0;
        case 0x3e52f4u: goto label_3e52f4;
        case 0x3e52f8u: goto label_3e52f8;
        case 0x3e52fcu: goto label_3e52fc;
        case 0x3e5300u: goto label_3e5300;
        case 0x3e5304u: goto label_3e5304;
        case 0x3e5308u: goto label_3e5308;
        case 0x3e530cu: goto label_3e530c;
        case 0x3e5310u: goto label_3e5310;
        case 0x3e5314u: goto label_3e5314;
        case 0x3e5318u: goto label_3e5318;
        case 0x3e531cu: goto label_3e531c;
        case 0x3e5320u: goto label_3e5320;
        case 0x3e5324u: goto label_3e5324;
        case 0x3e5328u: goto label_3e5328;
        case 0x3e532cu: goto label_3e532c;
        case 0x3e5330u: goto label_3e5330;
        case 0x3e5334u: goto label_3e5334;
        case 0x3e5338u: goto label_3e5338;
        case 0x3e533cu: goto label_3e533c;
        case 0x3e5340u: goto label_3e5340;
        case 0x3e5344u: goto label_3e5344;
        case 0x3e5348u: goto label_3e5348;
        case 0x3e534cu: goto label_3e534c;
        case 0x3e5350u: goto label_3e5350;
        case 0x3e5354u: goto label_3e5354;
        case 0x3e5358u: goto label_3e5358;
        case 0x3e535cu: goto label_3e535c;
        case 0x3e5360u: goto label_3e5360;
        case 0x3e5364u: goto label_3e5364;
        case 0x3e5368u: goto label_3e5368;
        case 0x3e536cu: goto label_3e536c;
        case 0x3e5370u: goto label_3e5370;
        case 0x3e5374u: goto label_3e5374;
        case 0x3e5378u: goto label_3e5378;
        case 0x3e537cu: goto label_3e537c;
        case 0x3e5380u: goto label_3e5380;
        case 0x3e5384u: goto label_3e5384;
        case 0x3e5388u: goto label_3e5388;
        case 0x3e538cu: goto label_3e538c;
        case 0x3e5390u: goto label_3e5390;
        case 0x3e5394u: goto label_3e5394;
        case 0x3e5398u: goto label_3e5398;
        case 0x3e539cu: goto label_3e539c;
        case 0x3e53a0u: goto label_3e53a0;
        case 0x3e53a4u: goto label_3e53a4;
        case 0x3e53a8u: goto label_3e53a8;
        case 0x3e53acu: goto label_3e53ac;
        case 0x3e53b0u: goto label_3e53b0;
        case 0x3e53b4u: goto label_3e53b4;
        case 0x3e53b8u: goto label_3e53b8;
        case 0x3e53bcu: goto label_3e53bc;
        case 0x3e53c0u: goto label_3e53c0;
        case 0x3e53c4u: goto label_3e53c4;
        case 0x3e53c8u: goto label_3e53c8;
        case 0x3e53ccu: goto label_3e53cc;
        case 0x3e53d0u: goto label_3e53d0;
        case 0x3e53d4u: goto label_3e53d4;
        case 0x3e53d8u: goto label_3e53d8;
        case 0x3e53dcu: goto label_3e53dc;
        case 0x3e53e0u: goto label_3e53e0;
        case 0x3e53e4u: goto label_3e53e4;
        case 0x3e53e8u: goto label_3e53e8;
        case 0x3e53ecu: goto label_3e53ec;
        case 0x3e53f0u: goto label_3e53f0;
        case 0x3e53f4u: goto label_3e53f4;
        case 0x3e53f8u: goto label_3e53f8;
        case 0x3e53fcu: goto label_3e53fc;
        case 0x3e5400u: goto label_3e5400;
        case 0x3e5404u: goto label_3e5404;
        case 0x3e5408u: goto label_3e5408;
        case 0x3e540cu: goto label_3e540c;
        case 0x3e5410u: goto label_3e5410;
        case 0x3e5414u: goto label_3e5414;
        case 0x3e5418u: goto label_3e5418;
        case 0x3e541cu: goto label_3e541c;
        case 0x3e5420u: goto label_3e5420;
        case 0x3e5424u: goto label_3e5424;
        case 0x3e5428u: goto label_3e5428;
        case 0x3e542cu: goto label_3e542c;
        case 0x3e5430u: goto label_3e5430;
        case 0x3e5434u: goto label_3e5434;
        case 0x3e5438u: goto label_3e5438;
        case 0x3e543cu: goto label_3e543c;
        case 0x3e5440u: goto label_3e5440;
        case 0x3e5444u: goto label_3e5444;
        case 0x3e5448u: goto label_3e5448;
        case 0x3e544cu: goto label_3e544c;
        case 0x3e5450u: goto label_3e5450;
        case 0x3e5454u: goto label_3e5454;
        case 0x3e5458u: goto label_3e5458;
        case 0x3e545cu: goto label_3e545c;
        case 0x3e5460u: goto label_3e5460;
        case 0x3e5464u: goto label_3e5464;
        case 0x3e5468u: goto label_3e5468;
        case 0x3e546cu: goto label_3e546c;
        case 0x3e5470u: goto label_3e5470;
        case 0x3e5474u: goto label_3e5474;
        case 0x3e5478u: goto label_3e5478;
        case 0x3e547cu: goto label_3e547c;
        case 0x3e5480u: goto label_3e5480;
        case 0x3e5484u: goto label_3e5484;
        case 0x3e5488u: goto label_3e5488;
        case 0x3e548cu: goto label_3e548c;
        case 0x3e5490u: goto label_3e5490;
        case 0x3e5494u: goto label_3e5494;
        case 0x3e5498u: goto label_3e5498;
        case 0x3e549cu: goto label_3e549c;
        case 0x3e54a0u: goto label_3e54a0;
        case 0x3e54a4u: goto label_3e54a4;
        case 0x3e54a8u: goto label_3e54a8;
        case 0x3e54acu: goto label_3e54ac;
        case 0x3e54b0u: goto label_3e54b0;
        case 0x3e54b4u: goto label_3e54b4;
        case 0x3e54b8u: goto label_3e54b8;
        case 0x3e54bcu: goto label_3e54bc;
        case 0x3e54c0u: goto label_3e54c0;
        case 0x3e54c4u: goto label_3e54c4;
        case 0x3e54c8u: goto label_3e54c8;
        case 0x3e54ccu: goto label_3e54cc;
        case 0x3e54d0u: goto label_3e54d0;
        case 0x3e54d4u: goto label_3e54d4;
        case 0x3e54d8u: goto label_3e54d8;
        case 0x3e54dcu: goto label_3e54dc;
        case 0x3e54e0u: goto label_3e54e0;
        case 0x3e54e4u: goto label_3e54e4;
        case 0x3e54e8u: goto label_3e54e8;
        case 0x3e54ecu: goto label_3e54ec;
        case 0x3e54f0u: goto label_3e54f0;
        case 0x3e54f4u: goto label_3e54f4;
        case 0x3e54f8u: goto label_3e54f8;
        case 0x3e54fcu: goto label_3e54fc;
        case 0x3e5500u: goto label_3e5500;
        case 0x3e5504u: goto label_3e5504;
        case 0x3e5508u: goto label_3e5508;
        case 0x3e550cu: goto label_3e550c;
        case 0x3e5510u: goto label_3e5510;
        case 0x3e5514u: goto label_3e5514;
        case 0x3e5518u: goto label_3e5518;
        case 0x3e551cu: goto label_3e551c;
        case 0x3e5520u: goto label_3e5520;
        case 0x3e5524u: goto label_3e5524;
        case 0x3e5528u: goto label_3e5528;
        case 0x3e552cu: goto label_3e552c;
        case 0x3e5530u: goto label_3e5530;
        case 0x3e5534u: goto label_3e5534;
        case 0x3e5538u: goto label_3e5538;
        case 0x3e553cu: goto label_3e553c;
        case 0x3e5540u: goto label_3e5540;
        case 0x3e5544u: goto label_3e5544;
        case 0x3e5548u: goto label_3e5548;
        case 0x3e554cu: goto label_3e554c;
        case 0x3e5550u: goto label_3e5550;
        case 0x3e5554u: goto label_3e5554;
        case 0x3e5558u: goto label_3e5558;
        case 0x3e555cu: goto label_3e555c;
        case 0x3e5560u: goto label_3e5560;
        case 0x3e5564u: goto label_3e5564;
        case 0x3e5568u: goto label_3e5568;
        case 0x3e556cu: goto label_3e556c;
        case 0x3e5570u: goto label_3e5570;
        case 0x3e5574u: goto label_3e5574;
        case 0x3e5578u: goto label_3e5578;
        case 0x3e557cu: goto label_3e557c;
        case 0x3e5580u: goto label_3e5580;
        case 0x3e5584u: goto label_3e5584;
        case 0x3e5588u: goto label_3e5588;
        case 0x3e558cu: goto label_3e558c;
        case 0x3e5590u: goto label_3e5590;
        case 0x3e5594u: goto label_3e5594;
        case 0x3e5598u: goto label_3e5598;
        case 0x3e559cu: goto label_3e559c;
        case 0x3e55a0u: goto label_3e55a0;
        case 0x3e55a4u: goto label_3e55a4;
        case 0x3e55a8u: goto label_3e55a8;
        case 0x3e55acu: goto label_3e55ac;
        case 0x3e55b0u: goto label_3e55b0;
        case 0x3e55b4u: goto label_3e55b4;
        case 0x3e55b8u: goto label_3e55b8;
        case 0x3e55bcu: goto label_3e55bc;
        case 0x3e55c0u: goto label_3e55c0;
        case 0x3e55c4u: goto label_3e55c4;
        case 0x3e55c8u: goto label_3e55c8;
        case 0x3e55ccu: goto label_3e55cc;
        case 0x3e55d0u: goto label_3e55d0;
        case 0x3e55d4u: goto label_3e55d4;
        case 0x3e55d8u: goto label_3e55d8;
        case 0x3e55dcu: goto label_3e55dc;
        case 0x3e55e0u: goto label_3e55e0;
        case 0x3e55e4u: goto label_3e55e4;
        case 0x3e55e8u: goto label_3e55e8;
        case 0x3e55ecu: goto label_3e55ec;
        case 0x3e55f0u: goto label_3e55f0;
        case 0x3e55f4u: goto label_3e55f4;
        case 0x3e55f8u: goto label_3e55f8;
        case 0x3e55fcu: goto label_3e55fc;
        case 0x3e5600u: goto label_3e5600;
        case 0x3e5604u: goto label_3e5604;
        case 0x3e5608u: goto label_3e5608;
        case 0x3e560cu: goto label_3e560c;
        default: break;
    }

    ctx->pc = 0x3e47e0u;

label_3e47e0:
    // 0x3e47e0: 0x80f91fc  j           func_3E47F0
label_3e47e4:
    if (ctx->pc == 0x3E47E4u) {
        ctx->pc = 0x3E47E8u;
        goto label_3e47e8;
    }
    ctx->pc = 0x3E47E0u;
    ctx->pc = 0x3E47F0u;
    goto label_3e47f0;
    ctx->pc = 0x3E47E8u;
label_3e47e8:
    // 0x3e47e8: 0x0  nop
    ctx->pc = 0x3e47e8u;
    // NOP
label_3e47ec:
    // 0x3e47ec: 0x0  nop
    ctx->pc = 0x3e47ecu;
    // NOP
label_3e47f0:
    // 0x3e47f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3e47f4:
    // 0x3e47f4: 0x3c0b0066  lui         $t3, 0x66
    ctx->pc = 0x3e47f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)102 << 16));
label_3e47f8:
    // 0x3e47f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e47fc:
    // 0x3e47fc: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x3e47fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_3e4800:
    // 0x3e4800: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e4800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e4804:
    // 0x3e4804: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4808:
    // 0x3e4808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e480c:
    // 0x3e480c: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x3e480cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e4810:
    // 0x3e4810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e4810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e4814:
    // 0x3e4814: 0x256b9d70  addiu       $t3, $t3, -0x6290
    ctx->pc = 0x3e4814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294942064));
label_3e4818:
    // 0x3e4818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e4818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e481c:
    // 0x3e481c: 0x254a9d90  addiu       $t2, $t2, -0x6270
    ctx->pc = 0x3e481cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942096));
label_3e4820:
    // 0x3e4820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e4820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e4824:
    // 0x3e4824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e4824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e4828:
    // 0x3e4828: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3e4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3e482c:
    // 0x3e482c: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x3e482cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
label_3e4830:
    // 0x3e4830: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x3e4830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e4834:
    // 0x3e4834: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e4838:
    // 0x3e4838: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x3e4838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e483c:
    // 0x3e483c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3e483cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3e4840:
    // 0x3e4840: 0x3447097b  ori         $a3, $v0, 0x97B
    ctx->pc = 0x3e4840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3e4844:
    // 0x3e4844: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e4848:
    // 0x3e4848: 0xa08c004c  sb          $t4, 0x4C($a0)
    ctx->pc = 0x3e4848u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 12));
label_3e484c:
    // 0x3e484c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e4850:
    // 0x3e4850: 0xac8b0270  sw          $t3, 0x270($a0)
    ctx->pc = 0x3e4850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 11));
label_3e4854:
    // 0x3e4854: 0xac8a0274  sw          $t2, 0x274($a0)
    ctx->pc = 0x3e4854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 10));
label_3e4858:
    // 0x3e4858: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x3e4858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
label_3e485c:
    // 0x3e485c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3e485cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_3e4860:
    // 0x3e4860: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x3e4860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
label_3e4864:
    // 0x3e4864: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3e4864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_3e4868:
    // 0x3e4868: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3e4868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_3e486c:
    // 0x3e486c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x3e486cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_3e4870:
    // 0x3e4870: 0xac800278  sw          $zero, 0x278($a0)
    ctx->pc = 0x3e4870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
label_3e4874:
    // 0x3e4874: 0xac89027c  sw          $t1, 0x27C($a0)
    ctx->pc = 0x3e4874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 9));
label_3e4878:
    // 0x3e4878: 0xac870280  sw          $a3, 0x280($a0)
    ctx->pc = 0x3e4878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 7));
label_3e487c:
    // 0x3e487c: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x3e487cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_3e4880:
    // 0x3e4880: 0xac80028c  sw          $zero, 0x28C($a0)
    ctx->pc = 0x3e4880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 0));
label_3e4884:
    // 0x3e4884: 0xac800290  sw          $zero, 0x290($a0)
    ctx->pc = 0x3e4884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 0));
label_3e4888:
    // 0x3e4888: 0xac800294  sw          $zero, 0x294($a0)
    ctx->pc = 0x3e4888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 0));
label_3e488c:
    // 0x3e488c: 0xac8802c4  sw          $t0, 0x2C4($a0)
    ctx->pc = 0x3e488cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 708), GPR_U32(ctx, 8));
label_3e4890:
    // 0x3e4890: 0xac8002c8  sw          $zero, 0x2C8($a0)
    ctx->pc = 0x3e4890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 712), GPR_U32(ctx, 0));
label_3e4894:
    // 0x3e4894: 0xac8002cc  sw          $zero, 0x2CC($a0)
    ctx->pc = 0x3e4894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 0));
label_3e4898:
    // 0x3e4898: 0xac8002d0  sw          $zero, 0x2D0($a0)
    ctx->pc = 0x3e4898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
label_3e489c:
    // 0x3e489c: 0xac8002d4  sw          $zero, 0x2D4($a0)
    ctx->pc = 0x3e489cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 724), GPR_U32(ctx, 0));
label_3e48a0:
    // 0x3e48a0: 0xa08002d8  sb          $zero, 0x2D8($a0)
    ctx->pc = 0x3e48a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 728), (uint8_t)GPR_U32(ctx, 0));
label_3e48a4:
    // 0x3e48a4: 0xa08602d9  sb          $a2, 0x2D9($a0)
    ctx->pc = 0x3e48a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 729), (uint8_t)GPR_U32(ctx, 6));
label_3e48a8:
    // 0x3e48a8: 0xa08602da  sb          $a2, 0x2DA($a0)
    ctx->pc = 0x3e48a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 730), (uint8_t)GPR_U32(ctx, 6));
label_3e48ac:
    // 0x3e48ac: 0xa08002db  sb          $zero, 0x2DB($a0)
    ctx->pc = 0x3e48acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 731), (uint8_t)GPR_U32(ctx, 0));
label_3e48b0:
    // 0x3e48b0: 0xac8502e4  sw          $a1, 0x2E4($a0)
    ctx->pc = 0x3e48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 5));
label_3e48b4:
    // 0x3e48b4: 0xa08002e8  sb          $zero, 0x2E8($a0)
    ctx->pc = 0x3e48b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 0));
label_3e48b8:
    // 0x3e48b8: 0xa08502e9  sb          $a1, 0x2E9($a0)
    ctx->pc = 0x3e48b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 745), (uint8_t)GPR_U32(ctx, 5));
label_3e48bc:
    // 0x3e48bc: 0xa08602ea  sb          $a2, 0x2EA($a0)
    ctx->pc = 0x3e48bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 746), (uint8_t)GPR_U32(ctx, 6));
label_3e48c0:
    // 0x3e48c0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3e48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e48c4:
    // 0x3e48c4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3e48c8:
    // 0x3e48c8: 0x14430070  bne         $v0, $v1, . + 4 + (0x70 << 2)
label_3e48cc:
    if (ctx->pc == 0x3E48CCu) {
        ctx->pc = 0x3E48CCu;
            // 0x3e48cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E48D0u;
        goto label_3e48d0;
    }
    ctx->pc = 0x3E48C8u;
    {
        const bool branch_taken_0x3e48c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E48CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E48C8u;
            // 0x3e48cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48c8) {
            ctx->pc = 0x3E4A8Cu;
            goto label_3e4a8c;
        }
    }
    ctx->pc = 0x3E48D0u;
label_3e48d0:
    // 0x3e48d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e48d4:
    // 0x3e48d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e48d8:
    // 0x3e48d8: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x3e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_3e48dc:
    // 0x3e48dc: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x3e48dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3e48e0:
    // 0x3e48e0: 0x50200077  beql        $at, $zero, . + 4 + (0x77 << 2)
label_3e48e4:
    if (ctx->pc == 0x3E48E4u) {
        ctx->pc = 0x3E48E4u;
            // 0x3e48e4: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3E48E8u;
        goto label_3e48e8;
    }
    ctx->pc = 0x3E48E0u;
    {
        const bool branch_taken_0x3e48e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48e0) {
            ctx->pc = 0x3E48E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E48E0u;
            // 0x3e48e4: 0xc6010030  lwc1        $f1, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4AC0u;
            goto label_3e4ac0;
        }
    }
    ctx->pc = 0x3E48E8u;
label_3e48e8:
    // 0x3e48e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e48ec:
    // 0x3e48ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e48f0:
    // 0x3e48f0: 0x24639fa0  addiu       $v1, $v1, -0x6060
    ctx->pc = 0x3e48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942624));
label_3e48f4:
    // 0x3e48f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e48f8:
    // 0x3e48f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e48fc:
    // 0x3e48fc: 0x400008  jr          $v0
label_3e4900:
    if (ctx->pc == 0x3E4900u) {
        ctx->pc = 0x3E4904u;
        goto label_3e4904;
    }
    ctx->pc = 0x3E48FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E4904u: goto label_3e4904;
            case 0x3E4930u: goto label_3e4930;
            case 0x3E4980u: goto label_3e4980;
            case 0x3E49B4u: goto label_3e49b4;
            case 0x3E4A04u: goto label_3e4a04;
            case 0x3E4A44u: goto label_3e4a44;
            case 0x3E4A54u: goto label_3e4a54;
            case 0x3E4ABCu: goto label_3e4abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3E4904u;
label_3e4904:
    // 0x3e4904: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x3e4904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_3e4908:
    // 0x3e4908: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e4908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e490c:
    // 0x3e490c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e4910:
    // 0x3e4910: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e4910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e4914:
    // 0x3e4914: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e4918:
    // 0x3e4918: 0x24e7f850  addiu       $a3, $a3, -0x7B0
    ctx->pc = 0x3e4918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965328));
label_3e491c:
    // 0x3e491c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e491cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e4920:
    // 0x3e4920: 0xc0b4904  jal         func_2D2410
label_3e4924:
    if (ctx->pc == 0x3E4924u) {
        ctx->pc = 0x3E4924u;
            // 0x3e4924: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E4928u;
        goto label_3e4928;
    }
    ctx->pc = 0x3E4920u;
    SET_GPR_U32(ctx, 31, 0x3E4928u);
    ctx->pc = 0x3E4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4920u;
            // 0x3e4924: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4928u; }
        if (ctx->pc != 0x3E4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4928u; }
        if (ctx->pc != 0x3E4928u) { return; }
    }
    ctx->pc = 0x3E4928u;
label_3e4928:
    // 0x3e4928: 0x10000064  b           . + 4 + (0x64 << 2)
label_3e492c:
    if (ctx->pc == 0x3E492Cu) {
        ctx->pc = 0x3E4930u;
        goto label_3e4930;
    }
    ctx->pc = 0x3E4928u;
    {
        const bool branch_taken_0x3e4928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4928) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4930u;
label_3e4930:
    // 0x3e4930: 0xae0502c4  sw          $a1, 0x2C4($s0)
    ctx->pc = 0x3e4930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 5));
label_3e4934:
    // 0x3e4934: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e4934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e4938:
    // 0x3e4938: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e493c:
    // 0x3e493c: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x3e493cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_3e4940:
    // 0x3e4940: 0xa20202e9  sb          $v0, 0x2E9($s0)
    ctx->pc = 0x3e4940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 2));
label_3e4944:
    // 0x3e4944: 0x24639db0  addiu       $v1, $v1, -0x6250
    ctx->pc = 0x3e4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942128));
label_3e4948:
    // 0x3e4948: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e494c:
    // 0x3e494c: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e494cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e4950:
    // 0x3e4950: 0x24429d78  addiu       $v0, $v0, -0x6288
    ctx->pc = 0x3e4950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942072));
label_3e4954:
    // 0x3e4954: 0xae030274  sw          $v1, 0x274($s0)
    ctx->pc = 0x3e4954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
label_3e4958:
    // 0x3e4958: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x3e4958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_3e495c:
    // 0x3e495c: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e4960:
    // 0x3e4960: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e4960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e4964:
    // 0x3e4964: 0x24e7f858  addiu       $a3, $a3, -0x7A8
    ctx->pc = 0x3e4964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965336));
label_3e4968:
    // 0x3e4968: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e496c:
    // 0x3e496c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e4970:
    // 0x3e4970: 0xc0b4904  jal         func_2D2410
label_3e4974:
    if (ctx->pc == 0x3E4974u) {
        ctx->pc = 0x3E4974u;
            // 0x3e4974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E4978u;
        goto label_3e4978;
    }
    ctx->pc = 0x3E4970u;
    SET_GPR_U32(ctx, 31, 0x3E4978u);
    ctx->pc = 0x3E4974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4970u;
            // 0x3e4974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4978u; }
        if (ctx->pc != 0x3E4978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4978u; }
        if (ctx->pc != 0x3E4978u) { return; }
    }
    ctx->pc = 0x3E4978u;
label_3e4978:
    // 0x3e4978: 0x10000050  b           . + 4 + (0x50 << 2)
label_3e497c:
    if (ctx->pc == 0x3E497Cu) {
        ctx->pc = 0x3E4980u;
        goto label_3e4980;
    }
    ctx->pc = 0x3E4978u;
    {
        const bool branch_taken_0x3e4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4978) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4980u;
label_3e4980:
    // 0x3e4980: 0xa20002d9  sb          $zero, 0x2D9($s0)
    ctx->pc = 0x3e4980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 0));
label_3e4984:
    // 0x3e4984: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e4988:
    // 0x3e4988: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e4988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3e498c:
    // 0x3e498c: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e498cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e4990:
    // 0x3e4990: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e4990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e4994:
    // 0x3e4994: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e4998:
    // 0x3e4998: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e499c:
    // 0x3e499c: 0x24e7f860  addiu       $a3, $a3, -0x7A0
    ctx->pc = 0x3e499cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965344));
label_3e49a0:
    // 0x3e49a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e49a4:
    // 0x3e49a4: 0xc0b4904  jal         func_2D2410
label_3e49a8:
    if (ctx->pc == 0x3E49A8u) {
        ctx->pc = 0x3E49A8u;
            // 0x3e49a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E49ACu;
        goto label_3e49ac;
    }
    ctx->pc = 0x3E49A4u;
    SET_GPR_U32(ctx, 31, 0x3E49ACu);
    ctx->pc = 0x3E49A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E49A4u;
            // 0x3e49a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E49ACu; }
        if (ctx->pc != 0x3E49ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E49ACu; }
        if (ctx->pc != 0x3E49ACu) { return; }
    }
    ctx->pc = 0x3E49ACu;
label_3e49ac:
    // 0x3e49ac: 0x100000ed  b           . + 4 + (0xED << 2)
label_3e49b0:
    if (ctx->pc == 0x3E49B0u) {
        ctx->pc = 0x3E49B0u;
            // 0x3e49b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3E49B4u;
        goto label_3e49b4;
    }
    ctx->pc = 0x3E49ACu;
    {
        const bool branch_taken_0x3e49ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E49B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E49ACu;
            // 0x3e49b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e49ac) {
            ctx->pc = 0x3E4D64u;
            goto label_3e4d64;
        }
    }
    ctx->pc = 0x3E49B4u;
label_3e49b4:
    // 0x3e49b4: 0xae0502c4  sw          $a1, 0x2C4($s0)
    ctx->pc = 0x3e49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 5));
label_3e49b8:
    // 0x3e49b8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e49bc:
    // 0x3e49bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3e49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e49c0:
    // 0x3e49c0: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x3e49c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_3e49c4:
    // 0x3e49c4: 0xa20202e9  sb          $v0, 0x2E9($s0)
    ctx->pc = 0x3e49c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 2));
label_3e49c8:
    // 0x3e49c8: 0x24639dd0  addiu       $v1, $v1, -0x6230
    ctx->pc = 0x3e49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942160));
label_3e49cc:
    // 0x3e49cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e49d0:
    // 0x3e49d0: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e49d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e49d4:
    // 0x3e49d4: 0x24429d78  addiu       $v0, $v0, -0x6288
    ctx->pc = 0x3e49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942072));
label_3e49d8:
    // 0x3e49d8: 0xae030274  sw          $v1, 0x274($s0)
    ctx->pc = 0x3e49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 3));
label_3e49dc:
    // 0x3e49dc: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x3e49dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_3e49e0:
    // 0x3e49e0: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e49e4:
    // 0x3e49e4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e49e8:
    // 0x3e49e8: 0x24e7f868  addiu       $a3, $a3, -0x798
    ctx->pc = 0x3e49e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965352));
label_3e49ec:
    // 0x3e49ec: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e49f0:
    // 0x3e49f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e49f4:
    // 0x3e49f4: 0xc0b4904  jal         func_2D2410
label_3e49f8:
    if (ctx->pc == 0x3E49F8u) {
        ctx->pc = 0x3E49F8u;
            // 0x3e49f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E49FCu;
        goto label_3e49fc;
    }
    ctx->pc = 0x3E49F4u;
    SET_GPR_U32(ctx, 31, 0x3E49FCu);
    ctx->pc = 0x3E49F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E49F4u;
            // 0x3e49f8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E49FCu; }
        if (ctx->pc != 0x3E49FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E49FCu; }
        if (ctx->pc != 0x3E49FCu) { return; }
    }
    ctx->pc = 0x3E49FCu;
label_3e49fc:
    // 0x3e49fc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3e4a00:
    if (ctx->pc == 0x3E4A00u) {
        ctx->pc = 0x3E4A04u;
        goto label_3e4a04;
    }
    ctx->pc = 0x3E49FCu;
    {
        const bool branch_taken_0x3e49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e49fc) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4A04u;
label_3e4a04:
    // 0x3e4a04: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x3e4a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_3e4a08:
    // 0x3e4a08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e4a0c:
    // 0x3e4a0c: 0x24429d80  addiu       $v0, $v0, -0x6280
    ctx->pc = 0x3e4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942080));
label_3e4a10:
    // 0x3e4a10: 0xa20002d9  sb          $zero, 0x2D9($s0)
    ctx->pc = 0x3e4a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 0));
label_3e4a14:
    // 0x3e4a14: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x3e4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_3e4a18:
    // 0x3e4a18: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e4a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e4a1c:
    // 0x3e4a1c: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x3e4a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
label_3e4a20:
    // 0x3e4a20: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e4a24:
    // 0x3e4a24: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e4a28:
    // 0x3e4a28: 0x24e7f870  addiu       $a3, $a3, -0x790
    ctx->pc = 0x3e4a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965360));
label_3e4a2c:
    // 0x3e4a2c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e4a30:
    // 0x3e4a30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e4a34:
    // 0x3e4a34: 0xc0b4904  jal         func_2D2410
label_3e4a38:
    if (ctx->pc == 0x3E4A38u) {
        ctx->pc = 0x3E4A38u;
            // 0x3e4a38: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E4A3Cu;
        goto label_3e4a3c;
    }
    ctx->pc = 0x3E4A34u;
    SET_GPR_U32(ctx, 31, 0x3E4A3Cu);
    ctx->pc = 0x3E4A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4A34u;
            // 0x3e4a38: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4A3Cu; }
        if (ctx->pc != 0x3E4A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4A3Cu; }
        if (ctx->pc != 0x3E4A3Cu) { return; }
    }
    ctx->pc = 0x3E4A3Cu;
label_3e4a3c:
    // 0x3e4a3c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3e4a40:
    if (ctx->pc == 0x3E4A40u) {
        ctx->pc = 0x3E4A44u;
        goto label_3e4a44;
    }
    ctx->pc = 0x3E4A3Cu;
    {
        const bool branch_taken_0x3e4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4a3c) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4A44u;
label_3e4a44:
    // 0x3e4a44: 0xae0502c4  sw          $a1, 0x2C4($s0)
    ctx->pc = 0x3e4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 5));
label_3e4a48:
    // 0x3e4a48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e4a4c:
    // 0x3e4a4c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3e4a50:
    if (ctx->pc == 0x3E4A50u) {
        ctx->pc = 0x3E4A50u;
            // 0x3e4a50: 0xa20202ea  sb          $v0, 0x2EA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E4A54u;
        goto label_3e4a54;
    }
    ctx->pc = 0x3E4A4Cu;
    {
        const bool branch_taken_0x3e4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4A4Cu;
            // 0x3e4a50: 0xa20202ea  sb          $v0, 0x2EA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a4c) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4A54u;
label_3e4a54:
    // 0x3e4a54: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x3e4a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_3e4a58:
    // 0x3e4a58: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3e4a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3e4a5c:
    // 0x3e4a5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e4a60:
    // 0x3e4a60: 0xa20002d9  sb          $zero, 0x2D9($s0)
    ctx->pc = 0x3e4a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 729), (uint8_t)GPR_U32(ctx, 0));
label_3e4a64:
    // 0x3e4a64: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3e4a68:
    // 0x3e4a68: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x3e4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_3e4a6c:
    // 0x3e4a6c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x3e4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3e4a70:
    // 0x3e4a70: 0x24e7f878  addiu       $a3, $a3, -0x788
    ctx->pc = 0x3e4a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965368));
label_3e4a74:
    // 0x3e4a74: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x3e4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3e4a78:
    // 0x3e4a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e4a7c:
    // 0x3e4a7c: 0xc0b4904  jal         func_2D2410
label_3e4a80:
    if (ctx->pc == 0x3E4A80u) {
        ctx->pc = 0x3E4A80u;
            // 0x3e4a80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E4A84u;
        goto label_3e4a84;
    }
    ctx->pc = 0x3E4A7Cu;
    SET_GPR_U32(ctx, 31, 0x3E4A84u);
    ctx->pc = 0x3E4A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4A7Cu;
            // 0x3e4a80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4A84u; }
        if (ctx->pc != 0x3E4A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4A84u; }
        if (ctx->pc != 0x3E4A84u) { return; }
    }
    ctx->pc = 0x3E4A84u;
label_3e4a84:
    // 0x3e4a84: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e4a88:
    if (ctx->pc == 0x3E4A88u) {
        ctx->pc = 0x3E4A8Cu;
        goto label_3e4a8c;
    }
    ctx->pc = 0x3E4A84u;
    {
        const bool branch_taken_0x3e4a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4a84) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4A8Cu;
label_3e4a8c:
    // 0x3e4a8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4a90:
    // 0x3e4a90: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e4a94:
    // 0x3e4a94: 0x8c44078c  lw          $a0, 0x78C($v0)
    ctx->pc = 0x3e4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_3e4a98:
    // 0x3e4a98: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x3e4a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e4a9c:
    // 0x3e4a9c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3e4aa0:
    if (ctx->pc == 0x3E4AA0u) {
        ctx->pc = 0x3E4AA4u;
        goto label_3e4aa4;
    }
    ctx->pc = 0x3E4A9Cu;
    {
        const bool branch_taken_0x3e4a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4a9c) {
            ctx->pc = 0x3E4ABCu;
            goto label_3e4abc;
        }
    }
    ctx->pc = 0x3E4AA4u;
label_3e4aa4:
    // 0x3e4aa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e4aa8:
    // 0x3e4aa8: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x3e4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e4aac:
    // 0x3e4aac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3e4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e4ab0:
    // 0x3e4ab0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3e4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3e4ab4:
    // 0x3e4ab4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e4ab8:
    // 0x3e4ab8: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x3e4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_3e4abc:
    // 0x3e4abc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3e4abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e4ac0:
    // 0x3e4ac0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3e4ac4:
    // 0x3e4ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e4ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e4ac8:
    // 0x3e4ac8: 0x0  nop
    ctx->pc = 0x3e4ac8u;
    // NOP
label_3e4acc:
    // 0x3e4acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e4accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e4ad0:
    // 0x3e4ad0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3e4ad4:
    if (ctx->pc == 0x3E4AD4u) {
        ctx->pc = 0x3E4AD4u;
            // 0x3e4ad4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3E4AD8u;
        goto label_3e4ad8;
    }
    ctx->pc = 0x3E4AD0u;
    {
        const bool branch_taken_0x3e4ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e4ad0) {
            ctx->pc = 0x3E4AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4AD0u;
            // 0x3e4ad4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4AE8u;
            goto label_3e4ae8;
        }
    }
    ctx->pc = 0x3E4AD8u;
label_3e4ad8:
    // 0x3e4ad8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3e4adc:
    // 0x3e4adc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3e4adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3e4ae0:
    // 0x3e4ae0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e4ae4:
    if (ctx->pc == 0x3E4AE4u) {
        ctx->pc = 0x3E4AE4u;
            // 0x3e4ae4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3E4AE8u;
        goto label_3e4ae8;
    }
    ctx->pc = 0x3E4AE0u;
    {
        const bool branch_taken_0x3e4ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4AE0u;
            // 0x3e4ae4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ae0) {
            ctx->pc = 0x3E4B00u;
            goto label_3e4b00;
        }
    }
    ctx->pc = 0x3E4AE8u;
label_3e4ae8:
    // 0x3e4ae8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3e4aec:
    // 0x3e4aec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e4aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3e4af0:
    // 0x3e4af0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3e4af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3e4af4:
    // 0x3e4af4: 0x0  nop
    ctx->pc = 0x3e4af4u;
    // NOP
label_3e4af8:
    // 0x3e4af8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e4af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e4afc:
    // 0x3e4afc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e4afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e4b00:
    // 0x3e4b00: 0xa20302eb  sb          $v1, 0x2EB($s0)
    ctx->pc = 0x3e4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 3));
label_3e4b04:
    // 0x3e4b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e4b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b08:
    // 0x3e4b08: 0x920602eb  lbu         $a2, 0x2EB($s0)
    ctx->pc = 0x3e4b08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 747)));
label_3e4b0c:
    // 0x3e4b0c: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x3e4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_3e4b10:
    // 0x3e4b10: 0xc0b89e4  jal         func_2E2790
label_3e4b14:
    if (ctx->pc == 0x3E4B14u) {
        ctx->pc = 0x3E4B14u;
            // 0x3e4b14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E4B18u;
        goto label_3e4b18;
    }
    ctx->pc = 0x3E4B10u;
    SET_GPR_U32(ctx, 31, 0x3E4B18u);
    ctx->pc = 0x3E4B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B10u;
            // 0x3e4b14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B18u; }
        if (ctx->pc != 0x3E4B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B18u; }
        if (ctx->pc != 0x3E4B18u) { return; }
    }
    ctx->pc = 0x3E4B18u;
label_3e4b18:
    // 0x3e4b18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e4b1c:
    // 0x3e4b1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e4b20:
    // 0x3e4b20: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3e4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e4b24:
    // 0x3e4b24: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x3e4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3e4b28:
    // 0x3e4b28: 0x54830013  bnel        $a0, $v1, . + 4 + (0x13 << 2)
label_3e4b2c:
    if (ctx->pc == 0x3E4B2Cu) {
        ctx->pc = 0x3E4B2Cu;
            // 0x3e4b2c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x3E4B30u;
        goto label_3e4b30;
    }
    ctx->pc = 0x3E4B28u;
    {
        const bool branch_taken_0x3e4b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4b28) {
            ctx->pc = 0x3E4B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B28u;
            // 0x3e4b2c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B78u;
            goto label_3e4b78;
        }
    }
    ctx->pc = 0x3E4B30u;
label_3e4b30:
    // 0x3e4b30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4b34:
    // 0x3e4b34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e4b38:
    // 0x3e4b38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3e4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e4b3c:
    // 0x3e4b3c: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x3e4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_3e4b40:
    // 0x3e4b40: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_3e4b44:
    if (ctx->pc == 0x3E4B44u) {
        ctx->pc = 0x3E4B44u;
            // 0x3e4b44: 0x3c024454  lui         $v0, 0x4454 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
        ctx->pc = 0x3E4B48u;
        goto label_3e4b48;
    }
    ctx->pc = 0x3E4B40u;
    {
        const bool branch_taken_0x3e4b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e4b40) {
            ctx->pc = 0x3E4B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B40u;
            // 0x3e4b44: 0x3c024454  lui         $v0, 0x4454 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B60u;
            goto label_3e4b60;
        }
    }
    ctx->pc = 0x3E4B48u;
label_3e4b48:
    // 0x3e4b48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3e4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3e4b4c:
    // 0x3e4b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e4b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4b50:
    // 0x3e4b50: 0xc0b8160  jal         func_2E0580
label_3e4b54:
    if (ctx->pc == 0x3E4B54u) {
        ctx->pc = 0x3E4B54u;
            // 0x3e4b54: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x3E4B58u;
        goto label_3e4b58;
    }
    ctx->pc = 0x3E4B50u;
    SET_GPR_U32(ctx, 31, 0x3E4B58u);
    ctx->pc = 0x3E4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B50u;
            // 0x3e4b54: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B58u; }
        if (ctx->pc != 0x3E4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B58u; }
        if (ctx->pc != 0x3E4B58u) { return; }
    }
    ctx->pc = 0x3E4B58u;
label_3e4b58:
    // 0x3e4b58: 0x10000013  b           . + 4 + (0x13 << 2)
label_3e4b5c:
    if (ctx->pc == 0x3E4B5Cu) {
        ctx->pc = 0x3E4B5Cu;
            // 0x3e4b5c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E4B60u;
        goto label_3e4b60;
    }
    ctx->pc = 0x3E4B58u;
    {
        const bool branch_taken_0x3e4b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B58u;
            // 0x3e4b5c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4b58) {
            ctx->pc = 0x3E4BA8u;
            goto label_3e4ba8;
        }
    }
    ctx->pc = 0x3E4B60u;
label_3e4b60:
    // 0x3e4b60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3e4b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3e4b64:
    // 0x3e4b64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e4b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4b68:
    // 0x3e4b68: 0xc0b8160  jal         func_2E0580
label_3e4b6c:
    if (ctx->pc == 0x3E4B6Cu) {
        ctx->pc = 0x3E4B6Cu;
            // 0x3e4b6c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x3E4B70u;
        goto label_3e4b70;
    }
    ctx->pc = 0x3E4B68u;
    SET_GPR_U32(ctx, 31, 0x3E4B70u);
    ctx->pc = 0x3E4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B68u;
            // 0x3e4b6c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B70u; }
        if (ctx->pc != 0x3E4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B70u; }
        if (ctx->pc != 0x3E4B70u) { return; }
    }
    ctx->pc = 0x3E4B70u;
label_3e4b70:
    // 0x3e4b70: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e4b74:
    if (ctx->pc == 0x3E4B74u) {
        ctx->pc = 0x3E4B78u;
        goto label_3e4b78;
    }
    ctx->pc = 0x3E4B70u;
    {
        const bool branch_taken_0x3e4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4b70) {
            ctx->pc = 0x3E4BA4u;
            goto label_3e4ba4;
        }
    }
    ctx->pc = 0x3E4B78u;
label_3e4b78:
    // 0x3e4b78: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_3e4b7c:
    if (ctx->pc == 0x3E4B7Cu) {
        ctx->pc = 0x3E4B7Cu;
            // 0x3e4b7c: 0x3c02428c  lui         $v0, 0x428C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
        ctx->pc = 0x3E4B80u;
        goto label_3e4b80;
    }
    ctx->pc = 0x3E4B78u;
    {
        const bool branch_taken_0x3e4b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e4b78) {
            ctx->pc = 0x3E4B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B78u;
            // 0x3e4b7c: 0x3c02428c  lui         $v0, 0x428C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4B98u;
            goto label_3e4b98;
        }
    }
    ctx->pc = 0x3E4B80u;
label_3e4b80:
    // 0x3e4b80: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3e4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_3e4b84:
    // 0x3e4b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e4b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4b88:
    // 0x3e4b88: 0xc0b8160  jal         func_2E0580
label_3e4b8c:
    if (ctx->pc == 0x3E4B8Cu) {
        ctx->pc = 0x3E4B8Cu;
            // 0x3e4b8c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x3E4B90u;
        goto label_3e4b90;
    }
    ctx->pc = 0x3E4B88u;
    SET_GPR_U32(ctx, 31, 0x3E4B90u);
    ctx->pc = 0x3E4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B88u;
            // 0x3e4b8c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B90u; }
        if (ctx->pc != 0x3E4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4B90u; }
        if (ctx->pc != 0x3E4B90u) { return; }
    }
    ctx->pc = 0x3E4B90u;
label_3e4b90:
    // 0x3e4b90: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e4b94:
    if (ctx->pc == 0x3E4B94u) {
        ctx->pc = 0x3E4B98u;
        goto label_3e4b98;
    }
    ctx->pc = 0x3E4B90u;
    {
        const bool branch_taken_0x3e4b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4b90) {
            ctx->pc = 0x3E4BA4u;
            goto label_3e4ba4;
        }
    }
    ctx->pc = 0x3E4B98u;
label_3e4b98:
    // 0x3e4b98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e4b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4b9c:
    // 0x3e4b9c: 0xc0b8160  jal         func_2E0580
label_3e4ba0:
    if (ctx->pc == 0x3E4BA0u) {
        ctx->pc = 0x3E4BA0u;
            // 0x3e4ba0: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x3E4BA4u;
        goto label_3e4ba4;
    }
    ctx->pc = 0x3E4B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E4BA4u);
    ctx->pc = 0x3E4BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4B9Cu;
            // 0x3e4ba0: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BA4u; }
        if (ctx->pc != 0x3E4BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BA4u; }
        if (ctx->pc != 0x3E4BA4u) { return; }
    }
    ctx->pc = 0x3E4BA4u;
label_3e4ba4:
    // 0x3e4ba4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e4ba8:
    // 0x3e4ba8: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x3e4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_3e4bac:
    // 0x3e4bac: 0xc04cbf0  jal         func_132FC0
label_3e4bb0:
    if (ctx->pc == 0x3E4BB0u) {
        ctx->pc = 0x3E4BB0u;
            // 0x3e4bb0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x3E4BB4u;
        goto label_3e4bb4;
    }
    ctx->pc = 0x3E4BACu;
    SET_GPR_U32(ctx, 31, 0x3E4BB4u);
    ctx->pc = 0x3E4BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4BACu;
            // 0x3e4bb0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BB4u; }
        if (ctx->pc != 0x3E4BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BB4u; }
        if (ctx->pc != 0x3E4BB4u) { return; }
    }
    ctx->pc = 0x3E4BB4u;
label_3e4bb4:
    // 0x3e4bb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e4bb8:
    // 0x3e4bb8: 0xc04cc44  jal         func_133110
label_3e4bbc:
    if (ctx->pc == 0x3E4BBCu) {
        ctx->pc = 0x3E4BBCu;
            // 0x3e4bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4BC0u;
        goto label_3e4bc0;
    }
    ctx->pc = 0x3E4BB8u;
    SET_GPR_U32(ctx, 31, 0x3E4BC0u);
    ctx->pc = 0x3E4BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4BB8u;
            // 0x3e4bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BC0u; }
        if (ctx->pc != 0x3E4BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4BC0u; }
        if (ctx->pc != 0x3E4BC0u) { return; }
    }
    ctx->pc = 0x3E4BC0u;
label_3e4bc0:
    // 0x3e4bc0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x3e4bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e4bc4:
    // 0x3e4bc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e4bc8:
    // 0x3e4bc8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x3e4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e4bcc:
    // 0x3e4bcc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3e4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e4bd0:
    // 0x3e4bd0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3e4bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e4bd4:
    // 0x3e4bd4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3e4bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e4bd8:
    // 0x3e4bd8: 0xc7a4006c  lwc1        $f4, 0x6C($sp)
    ctx->pc = 0x3e4bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4bdc:
    // 0x3e4bdc: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x3e4bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3e4be0:
    // 0x3e4be0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3e4be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3e4be4:
    // 0x3e4be4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3e4be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3e4be8:
    // 0x3e4be8: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x3e4be8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3e4bec:
    // 0x3e4bec: 0xc6040140  lwc1        $f4, 0x140($s0)
    ctx->pc = 0x3e4becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4bf0:
    // 0x3e4bf0: 0xc443a080  lwc1        $f3, -0x5F80($v0)
    ctx->pc = 0x3e4bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e4bf4:
    // 0x3e4bf4: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x3e4bf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3e4bf8:
    // 0x3e4bf8: 0xc6040144  lwc1        $f4, 0x144($s0)
    ctx->pc = 0x3e4bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4bfc:
    // 0x3e4bfc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e4c00:
    // 0x3e4c00: 0xc442a084  lwc1        $f2, -0x5F7C($v0)
    ctx->pc = 0x3e4c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e4c04:
    // 0x3e4c04: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x3e4c04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3e4c08:
    // 0x3e4c08: 0xc6040148  lwc1        $f4, 0x148($s0)
    ctx->pc = 0x3e4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4c0c:
    // 0x3e4c0c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e4c10:
    // 0x3e4c10: 0xc441a088  lwc1        $f1, -0x5F78($v0)
    ctx->pc = 0x3e4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e4c14:
    // 0x3e4c14: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x3e4c14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3e4c18:
    // 0x3e4c18: 0xc604014c  lwc1        $f4, 0x14C($s0)
    ctx->pc = 0x3e4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4c1c:
    // 0x3e4c1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e4c20:
    // 0x3e4c20: 0xc440a08c  lwc1        $f0, -0x5F74($v0)
    ctx->pc = 0x3e4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e4c24:
    // 0x3e4c24: 0xe7a4009c  swc1        $f4, 0x9C($sp)
    ctx->pc = 0x3e4c24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3e4c28:
    // 0x3e4c28: 0xc6040150  lwc1        $f4, 0x150($s0)
    ctx->pc = 0x3e4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4c2c:
    // 0x3e4c2c: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x3e4c2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3e4c30:
    // 0x3e4c30: 0xc6040154  lwc1        $f4, 0x154($s0)
    ctx->pc = 0x3e4c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4c34:
    // 0x3e4c34: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x3e4c34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3e4c38:
    // 0x3e4c38: 0xc6040158  lwc1        $f4, 0x158($s0)
    ctx->pc = 0x3e4c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e4c3c:
    // 0x3e4c3c: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x3e4c3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3e4c40:
    // 0x3e4c40: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3e4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3e4c44:
    // 0x3e4c44: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x3e4c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3e4c48:
    // 0x3e4c48: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3e4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3e4c4c:
    // 0x3e4c4c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x3e4c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3e4c50:
    // 0x3e4c50: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3e4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3e4c54:
    // 0x3e4c54: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3e4c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3e4c58:
    // 0x3e4c58: 0xc04c994  jal         func_132650
label_3e4c5c:
    if (ctx->pc == 0x3E4C5Cu) {
        ctx->pc = 0x3E4C5Cu;
            // 0x3e4c5c: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x3E4C60u;
        goto label_3e4c60;
    }
    ctx->pc = 0x3E4C58u;
    SET_GPR_U32(ctx, 31, 0x3E4C60u);
    ctx->pc = 0x3E4C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4C58u;
            // 0x3e4c5c: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C60u; }
        if (ctx->pc != 0x3E4C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C60u; }
        if (ctx->pc != 0x3E4C60u) { return; }
    }
    ctx->pc = 0x3E4C60u;
label_3e4c60:
    // 0x3e4c60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e4c64:
    // 0x3e4c64: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3e4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_3e4c68:
    // 0x3e4c68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e4c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4c6c:
    // 0x3e4c6c: 0xc0c6250  jal         func_318940
label_3e4c70:
    if (ctx->pc == 0x3E4C70u) {
        ctx->pc = 0x3E4C70u;
            // 0x3e4c70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C74u;
        goto label_3e4c74;
    }
    ctx->pc = 0x3E4C6Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C74u);
    ctx->pc = 0x3E4C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4C6Cu;
            // 0x3e4c70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C74u; }
        if (ctx->pc != 0x3E4C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C74u; }
        if (ctx->pc != 0x3E4C74u) { return; }
    }
    ctx->pc = 0x3E4C74u;
label_3e4c74:
    // 0x3e4c74: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3e4c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3e4c78:
    // 0x3e4c78: 0xc04c720  jal         func_131C80
label_3e4c7c:
    if (ctx->pc == 0x3E4C7Cu) {
        ctx->pc = 0x3E4C7Cu;
            // 0x3e4c7c: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x3E4C80u;
        goto label_3e4c80;
    }
    ctx->pc = 0x3E4C78u;
    SET_GPR_U32(ctx, 31, 0x3E4C80u);
    ctx->pc = 0x3E4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4C78u;
            // 0x3e4c7c: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C80u; }
        if (ctx->pc != 0x3E4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C80u; }
        if (ctx->pc != 0x3E4C80u) { return; }
    }
    ctx->pc = 0x3E4C80u;
label_3e4c80:
    // 0x3e4c80: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e4c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3e4c84:
    // 0x3e4c84: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x3e4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_3e4c88:
    // 0x3e4c88: 0xc04cc04  jal         func_133010
label_3e4c8c:
    if (ctx->pc == 0x3E4C8Cu) {
        ctx->pc = 0x3E4C8Cu;
            // 0x3e4c8c: 0x24a5a060  addiu       $a1, $a1, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
        ctx->pc = 0x3E4C90u;
        goto label_3e4c90;
    }
    ctx->pc = 0x3E4C88u;
    SET_GPR_U32(ctx, 31, 0x3E4C90u);
    ctx->pc = 0x3E4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4C88u;
            // 0x3e4c8c: 0x24a5a060  addiu       $a1, $a1, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C90u; }
        if (ctx->pc != 0x3E4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4C90u; }
        if (ctx->pc != 0x3E4C90u) { return; }
    }
    ctx->pc = 0x3E4C90u;
label_3e4c90:
    // 0x3e4c90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e4c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4c94:
    // 0x3e4c94: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3e4c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3e4c98:
    // 0x3e4c98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e4c9c:
    // 0x3e4c9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3e4ca0:
    // 0x3e4ca0: 0x8c440350  lw          $a0, 0x350($v0)
    ctx->pc = 0x3e4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
label_3e4ca4:
    // 0x3e4ca4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e4ca8:
    if (ctx->pc == 0x3E4CA8u) {
        ctx->pc = 0x3E4CA8u;
            // 0x3e4ca8: 0x24520350  addiu       $s2, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->pc = 0x3E4CACu;
        goto label_3e4cac;
    }
    ctx->pc = 0x3E4CA4u;
    {
        const bool branch_taken_0x3e4ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4CA4u;
            // 0x3e4ca8: 0x24520350  addiu       $s2, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4ca4) {
            ctx->pc = 0x3E4CC0u;
            goto label_3e4cc0;
        }
    }
    ctx->pc = 0x3E4CACu;
label_3e4cac:
    // 0x3e4cac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e4cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e4cb0:
    // 0x3e4cb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3e4cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3e4cb4:
    // 0x3e4cb4: 0x320f809  jalr        $t9
label_3e4cb8:
    if (ctx->pc == 0x3E4CB8u) {
        ctx->pc = 0x3E4CB8u;
            // 0x3e4cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E4CBCu;
        goto label_3e4cbc;
    }
    ctx->pc = 0x3E4CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4CBCu);
        ctx->pc = 0x3E4CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4CB4u;
            // 0x3e4cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4CBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4CBCu; }
            if (ctx->pc != 0x3E4CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x3E4CBCu;
label_3e4cbc:
    // 0x3e4cbc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e4cc0:
    // 0x3e4cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e4cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e4cc4:
    // 0x3e4cc4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3e4cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e4cc8:
    // 0x3e4cc8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_3e4ccc:
    if (ctx->pc == 0x3E4CCCu) {
        ctx->pc = 0x3E4CCCu;
            // 0x3e4ccc: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3E4CD0u;
        goto label_3e4cd0;
    }
    ctx->pc = 0x3E4CC8u;
    {
        const bool branch_taken_0x3e4cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4cc8) {
            ctx->pc = 0x3E4CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4CC8u;
            // 0x3e4ccc: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e4c98;
        }
    }
    ctx->pc = 0x3E4CD0u;
label_3e4cd0:
    // 0x3e4cd0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3e4cd4:
    // 0x3e4cd4: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e4cd8:
    // 0x3e4cd8: 0xc04cce8  jal         func_1333A0
label_3e4cdc:
    if (ctx->pc == 0x3E4CDCu) {
        ctx->pc = 0x3E4CDCu;
            // 0x3e4cdc: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->pc = 0x3E4CE0u;
        goto label_3e4ce0;
    }
    ctx->pc = 0x3E4CD8u;
    SET_GPR_U32(ctx, 31, 0x3E4CE0u);
    ctx->pc = 0x3E4CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4CD8u;
            // 0x3e4cdc: 0x24a5a020  addiu       $a1, $a1, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4CE0u; }
        if (ctx->pc != 0x3E4CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4CE0u; }
        if (ctx->pc != 0x3E4CE0u) { return; }
    }
    ctx->pc = 0x3E4CE0u;
label_3e4ce0:
    // 0x3e4ce0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4ce4:
    // 0x3e4ce4: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x3e4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e4ce8:
    // 0x3e4ce8: 0x8c443da0  lw          $a0, 0x3DA0($v0)
    ctx->pc = 0x3e4ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e4cec:
    // 0x3e4cec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e4cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4cf0:
    // 0x3e4cf0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e4cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4cf4:
    // 0x3e4cf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3e4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e4cf8:
    // 0x3e4cf8: 0x24920084  addiu       $s2, $a0, 0x84
    ctx->pc = 0x3e4cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_3e4cfc:
    // 0x3e4cfc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e4d00:
    // 0x3e4d00: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e4d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e4d04:
    // 0x3e4d04: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e4d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e4d08:
    // 0x3e4d08: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e4d0c:
    // 0x3e4d0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e4d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4d10:
    // 0x3e4d10: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e4d14:
    // 0x3e4d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e4d18:
    // 0x3e4d18: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e4d1c:
    // 0x3e4d1c: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e4d20:
    // 0x3e4d20: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e4d24:
    // 0x3e4d24: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e4d28:
    // 0x3e4d28: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e4d2c:
    // 0x3e4d2c: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e4d30:
    // 0x3e4d30: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e4d30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e4d34:
    // 0x3e4d34: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e4d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e4d38:
    // 0x3e4d38: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e4d38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e4d3c:
    // 0x3e4d3c: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e4d40:
    // 0x3e4d40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e4d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e4d44:
    // 0x3e4d44: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e4d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e4d48:
    // 0x3e4d48: 0x320f809  jalr        $t9
label_3e4d4c:
    if (ctx->pc == 0x3E4D4Cu) {
        ctx->pc = 0x3E4D50u;
        goto label_3e4d50;
    }
    ctx->pc = 0x3E4D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4D50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4D50u; }
            if (ctx->pc != 0x3E4D50u) { return; }
        }
        }
    }
    ctx->pc = 0x3E4D50u;
label_3e4d50:
    // 0x3e4d50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e4d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e4d54:
    // 0x3e4d54: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x3e4d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e4d58:
    // 0x3e4d58: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3e4d5c:
    if (ctx->pc == 0x3E4D5Cu) {
        ctx->pc = 0x3E4D5Cu;
            // 0x3e4d5c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E4D60u;
        goto label_3e4d60;
    }
    ctx->pc = 0x3E4D58u;
    {
        const bool branch_taken_0x3e4d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4D58u;
            // 0x3e4d5c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4d58) {
            ctx->pc = 0x3E4D04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e4d04;
        }
    }
    ctx->pc = 0x3E4D60u;
label_3e4d60:
    // 0x3e4d60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e4d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e4d64:
    // 0x3e4d64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e4d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e4d68:
    // 0x3e4d68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e4d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e4d6c:
    // 0x3e4d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e4d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4d70:
    // 0x3e4d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e4d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e4d74:
    // 0x3e4d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e4d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4d78:
    // 0x3e4d78: 0x3e00008  jr          $ra
label_3e4d7c:
    if (ctx->pc == 0x3E4D7Cu) {
        ctx->pc = 0x3E4D7Cu;
            // 0x3e4d7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3E4D80u;
        goto label_3e4d80;
    }
    ctx->pc = 0x3E4D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4D78u;
            // 0x3e4d7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E4D80u;
label_3e4d80:
    // 0x3e4d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e4d84:
    // 0x3e4d84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3e4d88:
    // 0x3e4d88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e4d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e4d8c:
    // 0x3e4d8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e4d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e4d90:
    // 0x3e4d90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e4d94:
    // 0x3e4d94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e4d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e4d98:
    // 0x3e4d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e4d9c:
    // 0x3e4d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e4d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e4da0:
    // 0x3e4da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e4da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4da4:
    // 0x3e4da4: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x3e4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3e4da8:
    // 0x3e4da8: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x3e4da8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_3e4dac:
    // 0x3e4dac: 0x5460020d  bnel        $v1, $zero, . + 4 + (0x20D << 2)
label_3e4db0:
    if (ctx->pc == 0x3E4DB0u) {
        ctx->pc = 0x3E4DB0u;
            // 0x3e4db0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3E4DB4u;
        goto label_3e4db4;
    }
    ctx->pc = 0x3E4DACu;
    {
        const bool branch_taken_0x3e4dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4dac) {
            ctx->pc = 0x3E4DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4DACu;
            // 0x3e4db0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E55E4u;
            goto label_3e55e4;
        }
    }
    ctx->pc = 0x3E4DB4u;
label_3e4db4:
    // 0x3e4db4: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x3e4db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_3e4db8:
    // 0x3e4db8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3e4dbc:
    if (ctx->pc == 0x3E4DBCu) {
        ctx->pc = 0x3E4DC0u;
        goto label_3e4dc0;
    }
    ctx->pc = 0x3E4DB8u;
    {
        const bool branch_taken_0x3e4db8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4db8) {
            ctx->pc = 0x3E4DC8u;
            goto label_3e4dc8;
        }
    }
    ctx->pc = 0x3E4DC0u;
label_3e4dc0:
    // 0x3e4dc0: 0x10000207  b           . + 4 + (0x207 << 2)
label_3e4dc4:
    if (ctx->pc == 0x3E4DC4u) {
        ctx->pc = 0x3E4DC8u;
        goto label_3e4dc8;
    }
    ctx->pc = 0x3E4DC0u;
    {
        const bool branch_taken_0x3e4dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4dc0) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E4DC8u;
label_3e4dc8:
    // 0x3e4dc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e4dcc:
    // 0x3e4dcc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3e4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e4dd0:
    // 0x3e4dd0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3e4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3e4dd4:
    // 0x3e4dd4: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3e4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3e4dd8:
    // 0x3e4dd8: 0x54640066  bnel        $v1, $a0, . + 4 + (0x66 << 2)
label_3e4ddc:
    if (ctx->pc == 0x3E4DDCu) {
        ctx->pc = 0x3E4DDCu;
            // 0x3e4ddc: 0x8cc40d98  lw          $a0, 0xD98($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
        ctx->pc = 0x3E4DE0u;
        goto label_3e4de0;
    }
    ctx->pc = 0x3E4DD8u;
    {
        const bool branch_taken_0x3e4dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e4dd8) {
            ctx->pc = 0x3E4DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4DD8u;
            // 0x3e4ddc: 0x8cc40d98  lw          $a0, 0xD98($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F74u;
            goto label_3e4f74;
        }
    }
    ctx->pc = 0x3E4DE0u;
label_3e4de0:
    // 0x3e4de0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e4de4:
    // 0x3e4de4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3e4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e4de8:
    // 0x3e4de8: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e4dec:
    // 0x3e4dec: 0x8c830cc4  lw          $v1, 0xCC4($a0)
    ctx->pc = 0x3e4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_3e4df0:
    // 0x3e4df0: 0x1465005f  bne         $v1, $a1, . + 4 + (0x5F << 2)
label_3e4df4:
    if (ctx->pc == 0x3E4DF4u) {
        ctx->pc = 0x3E4DF8u;
        goto label_3e4df8;
    }
    ctx->pc = 0x3E4DF0u;
    {
        const bool branch_taken_0x3e4df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e4df0) {
            ctx->pc = 0x3E4F70u;
            goto label_3e4f70;
        }
    }
    ctx->pc = 0x3E4DF8u;
label_3e4df8:
    // 0x3e4df8: 0xc0ae0e4  jal         func_2B8390
label_3e4dfc:
    if (ctx->pc == 0x3E4DFCu) {
        ctx->pc = 0x3E4E00u;
        goto label_3e4e00;
    }
    ctx->pc = 0x3E4DF8u;
    SET_GPR_U32(ctx, 31, 0x3E4E00u);
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E00u; }
        if (ctx->pc != 0x3E4E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E00u; }
        if (ctx->pc != 0x3E4E00u) { return; }
    }
    ctx->pc = 0x3E4E00u;
label_3e4e00:
    // 0x3e4e00: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e4e00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e4e04:
    // 0x3e4e04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e4e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e08:
    // 0x3e4e08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e4e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e0c:
    // 0x3e4e0c: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e4e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e4e10:
    // 0x3e4e10: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x3e4e10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3e4e14:
    // 0x3e4e14: 0xc077574  jal         func_1DD5D0
label_3e4e18:
    if (ctx->pc == 0x3E4E18u) {
        ctx->pc = 0x3E4E18u;
            // 0x3e4e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E1Cu;
        goto label_3e4e1c;
    }
    ctx->pc = 0x3E4E14u;
    SET_GPR_U32(ctx, 31, 0x3E4E1Cu);
    ctx->pc = 0x3E4E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E14u;
            // 0x3e4e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E1Cu; }
        if (ctx->pc != 0x3E4E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E1Cu; }
        if (ctx->pc != 0x3E4E1Cu) { return; }
    }
    ctx->pc = 0x3E4E1Cu;
label_3e4e1c:
    // 0x3e4e1c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3e4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e4e20:
    // 0x3e4e20: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3e4e24:
    if (ctx->pc == 0x3E4E24u) {
        ctx->pc = 0x3E4E28u;
        goto label_3e4e28;
    }
    ctx->pc = 0x3E4E20u;
    {
        const bool branch_taken_0x3e4e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4e20) {
            ctx->pc = 0x3E4E40u;
            goto label_3e4e40;
        }
    }
    ctx->pc = 0x3E4E28u;
label_3e4e28:
    // 0x3e4e28: 0xc077570  jal         func_1DD5C0
label_3e4e2c:
    if (ctx->pc == 0x3E4E2Cu) {
        ctx->pc = 0x3E4E2Cu;
            // 0x3e4e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E30u;
        goto label_3e4e30;
    }
    ctx->pc = 0x3E4E28u;
    SET_GPR_U32(ctx, 31, 0x3E4E30u);
    ctx->pc = 0x3E4E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E28u;
            // 0x3e4e2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E30u; }
        if (ctx->pc != 0x3E4E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E30u; }
        if (ctx->pc != 0x3E4E30u) { return; }
    }
    ctx->pc = 0x3E4E30u;
label_3e4e30:
    // 0x3e4e30: 0xc0f95a0  jal         func_3E5680
label_3e4e34:
    if (ctx->pc == 0x3E4E34u) {
        ctx->pc = 0x3E4E34u;
            // 0x3e4e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E38u;
        goto label_3e4e38;
    }
    ctx->pc = 0x3E4E30u;
    SET_GPR_U32(ctx, 31, 0x3E4E38u);
    ctx->pc = 0x3E4E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E30u;
            // 0x3e4e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5680u;
    if (runtime->hasFunction(0x3E5680u)) {
        auto targetFn = runtime->lookupFunction(0x3E5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E38u; }
        if (ctx->pc != 0x3E4E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5680_0x3e5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E38u; }
        if (ctx->pc != 0x3E4E38u) { return; }
    }
    ctx->pc = 0x3E4E38u;
label_3e4e38:
    // 0x3e4e38: 0xc0f959c  jal         func_3E5670
label_3e4e3c:
    if (ctx->pc == 0x3E4E3Cu) {
        ctx->pc = 0x3E4E3Cu;
            // 0x3e4e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E40u;
        goto label_3e4e40;
    }
    ctx->pc = 0x3E4E38u;
    SET_GPR_U32(ctx, 31, 0x3E4E40u);
    ctx->pc = 0x3E4E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E38u;
            // 0x3e4e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5670u;
    if (runtime->hasFunction(0x3E5670u)) {
        auto targetFn = runtime->lookupFunction(0x3E5670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E40u; }
        if (ctx->pc != 0x3E4E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5670_0x3e5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E40u; }
        if (ctx->pc != 0x3E4E40u) { return; }
    }
    ctx->pc = 0x3E4E40u;
label_3e4e40:
    // 0x3e4e40: 0xc077570  jal         func_1DD5C0
label_3e4e44:
    if (ctx->pc == 0x3E4E44u) {
        ctx->pc = 0x3E4E44u;
            // 0x3e4e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E48u;
        goto label_3e4e48;
    }
    ctx->pc = 0x3E4E40u;
    SET_GPR_U32(ctx, 31, 0x3E4E48u);
    ctx->pc = 0x3E4E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E40u;
            // 0x3e4e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E48u; }
        if (ctx->pc != 0x3E4E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E48u; }
        if (ctx->pc != 0x3E4E48u) { return; }
    }
    ctx->pc = 0x3E4E48u;
label_3e4e48:
    // 0x3e4e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e4c:
    // 0x3e4e4c: 0xc0f0e7c  jal         func_3C39F0
label_3e4e50:
    if (ctx->pc == 0x3E4E50u) {
        ctx->pc = 0x3E4E50u;
            // 0x3e4e50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E4E54u;
        goto label_3e4e54;
    }
    ctx->pc = 0x3E4E4Cu;
    SET_GPR_U32(ctx, 31, 0x3E4E54u);
    ctx->pc = 0x3E4E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E4Cu;
            // 0x3e4e50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E54u; }
        if (ctx->pc != 0x3E4E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E54u; }
        if (ctx->pc != 0x3E4E54u) { return; }
    }
    ctx->pc = 0x3E4E54u;
label_3e4e54:
    // 0x3e4e54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e4e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e4e58:
    // 0x3e4e58: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x3e4e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e4e5c:
    // 0x3e4e5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3e4e60:
    if (ctx->pc == 0x3E4E60u) {
        ctx->pc = 0x3E4E60u;
            // 0x3e4e60: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E4E64u;
        goto label_3e4e64;
    }
    ctx->pc = 0x3E4E5Cu;
    {
        const bool branch_taken_0x3e4e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E5Cu;
            // 0x3e4e60: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4e5c) {
            ctx->pc = 0x3E4E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e4e10;
        }
    }
    ctx->pc = 0x3E4E64u;
label_3e4e64:
    // 0x3e4e64: 0xc0f9598  jal         func_3E5660
label_3e4e68:
    if (ctx->pc == 0x3E4E68u) {
        ctx->pc = 0x3E4E6Cu;
        goto label_3e4e6c;
    }
    ctx->pc = 0x3E4E64u;
    SET_GPR_U32(ctx, 31, 0x3E4E6Cu);
    ctx->pc = 0x3E5660u;
    if (runtime->hasFunction(0x3E5660u)) {
        auto targetFn = runtime->lookupFunction(0x3E5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E6Cu; }
        if (ctx->pc != 0x3E4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5660_0x3e5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E6Cu; }
        if (ctx->pc != 0x3E4E6Cu) { return; }
    }
    ctx->pc = 0x3E4E6Cu;
label_3e4e6c:
    // 0x3e4e6c: 0xc109d50  jal         func_427540
label_3e4e70:
    if (ctx->pc == 0x3E4E70u) {
        ctx->pc = 0x3E4E70u;
            // 0x3e4e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E74u;
        goto label_3e4e74;
    }
    ctx->pc = 0x3E4E6Cu;
    SET_GPR_U32(ctx, 31, 0x3E4E74u);
    ctx->pc = 0x3E4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E6Cu;
            // 0x3e4e70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427540u;
    if (runtime->hasFunction(0x427540u)) {
        auto targetFn = runtime->lookupFunction(0x427540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E74u; }
        if (ctx->pc != 0x3E4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427540_0x427540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E74u; }
        if (ctx->pc != 0x3E4E74u) { return; }
    }
    ctx->pc = 0x3E4E74u;
label_3e4e74:
    // 0x3e4e74: 0xc0f9594  jal         func_3E5650
label_3e4e78:
    if (ctx->pc == 0x3E4E78u) {
        ctx->pc = 0x3E4E7Cu;
        goto label_3e4e7c;
    }
    ctx->pc = 0x3E4E74u;
    SET_GPR_U32(ctx, 31, 0x3E4E7Cu);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E7Cu; }
        if (ctx->pc != 0x3E4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E7Cu; }
        if (ctx->pc != 0x3E4E7Cu) { return; }
    }
    ctx->pc = 0x3E4E7Cu;
label_3e4e7c:
    // 0x3e4e7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e4e80:
    if (ctx->pc == 0x3E4E80u) {
        ctx->pc = 0x3E4E84u;
        goto label_3e4e84;
    }
    ctx->pc = 0x3E4E7Cu;
    {
        const bool branch_taken_0x3e4e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4e7c) {
            ctx->pc = 0x3E4E98u;
            goto label_3e4e98;
        }
    }
    ctx->pc = 0x3E4E84u;
label_3e4e84:
    // 0x3e4e84: 0xc0f9594  jal         func_3E5650
label_3e4e88:
    if (ctx->pc == 0x3E4E88u) {
        ctx->pc = 0x3E4E8Cu;
        goto label_3e4e8c;
    }
    ctx->pc = 0x3E4E84u;
    SET_GPR_U32(ctx, 31, 0x3E4E8Cu);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E8Cu; }
        if (ctx->pc != 0x3E4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E8Cu; }
        if (ctx->pc != 0x3E4E8Cu) { return; }
    }
    ctx->pc = 0x3E4E8Cu;
label_3e4e8c:
    // 0x3e4e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e4e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4e90:
    // 0x3e4e90: 0xc0f9590  jal         func_3E5640
label_3e4e94:
    if (ctx->pc == 0x3E4E94u) {
        ctx->pc = 0x3E4E94u;
            // 0x3e4e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4E98u;
        goto label_3e4e98;
    }
    ctx->pc = 0x3E4E90u;
    SET_GPR_U32(ctx, 31, 0x3E4E98u);
    ctx->pc = 0x3E4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4E90u;
            // 0x3e4e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5640u;
    if (runtime->hasFunction(0x3E5640u)) {
        auto targetFn = runtime->lookupFunction(0x3E5640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E98u; }
        if (ctx->pc != 0x3E4E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5640_0x3e5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4E98u; }
        if (ctx->pc != 0x3E4E98u) { return; }
    }
    ctx->pc = 0x3E4E98u;
label_3e4e98:
    // 0x3e4e98: 0xc0f958c  jal         func_3E5630
label_3e4e9c:
    if (ctx->pc == 0x3E4E9Cu) {
        ctx->pc = 0x3E4EA0u;
        goto label_3e4ea0;
    }
    ctx->pc = 0x3E4E98u;
    SET_GPR_U32(ctx, 31, 0x3E4EA0u);
    ctx->pc = 0x3E5630u;
    if (runtime->hasFunction(0x3E5630u)) {
        auto targetFn = runtime->lookupFunction(0x3E5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EA0u; }
        if (ctx->pc != 0x3E4EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5630_0x3e5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EA0u; }
        if (ctx->pc != 0x3E4EA0u) { return; }
    }
    ctx->pc = 0x3E4EA0u;
label_3e4ea0:
    // 0x3e4ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e4ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ea4:
    // 0x3e4ea4: 0xc10e6ec  jal         func_439BB0
label_3e4ea8:
    if (ctx->pc == 0x3E4EA8u) {
        ctx->pc = 0x3E4EA8u;
            // 0x3e4ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EACu;
        goto label_3e4eac;
    }
    ctx->pc = 0x3E4EA4u;
    SET_GPR_U32(ctx, 31, 0x3E4EACu);
    ctx->pc = 0x3E4EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4EA4u;
            // 0x3e4ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439BB0u;
    if (runtime->hasFunction(0x439BB0u)) {
        auto targetFn = runtime->lookupFunction(0x439BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EACu; }
        if (ctx->pc != 0x3E4EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439BB0_0x439bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EACu; }
        if (ctx->pc != 0x3E4EACu) { return; }
    }
    ctx->pc = 0x3E4EACu;
label_3e4eac:
    // 0x3e4eac: 0xc10e6ac  jal         func_439AB0
label_3e4eb0:
    if (ctx->pc == 0x3E4EB0u) {
        ctx->pc = 0x3E4EB0u;
            // 0x3e4eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4EB4u;
        goto label_3e4eb4;
    }
    ctx->pc = 0x3E4EACu;
    SET_GPR_U32(ctx, 31, 0x3E4EB4u);
    ctx->pc = 0x3E4EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4EACu;
            // 0x3e4eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439AB0u;
    if (runtime->hasFunction(0x439AB0u)) {
        auto targetFn = runtime->lookupFunction(0x439AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EB4u; }
        if (ctx->pc != 0x3E4EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439AB0_0x439ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EB4u; }
        if (ctx->pc != 0x3E4EB4u) { return; }
    }
    ctx->pc = 0x3E4EB4u;
label_3e4eb4:
    // 0x3e4eb4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e4eb8:
    // 0x3e4eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ebc:
    // 0x3e4ebc: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x3e4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_3e4ec0:
    // 0x3e4ec0: 0xc0f8ffc  jal         func_3E3FF0
label_3e4ec4:
    if (ctx->pc == 0x3E4EC4u) {
        ctx->pc = 0x3E4EC4u;
            // 0x3e4ec4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E4EC8u;
        goto label_3e4ec8;
    }
    ctx->pc = 0x3E4EC0u;
    SET_GPR_U32(ctx, 31, 0x3E4EC8u);
    ctx->pc = 0x3E4EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4EC0u;
            // 0x3e4ec4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EC8u; }
        if (ctx->pc != 0x3E4EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EC8u; }
        if (ctx->pc != 0x3E4EC8u) { return; }
    }
    ctx->pc = 0x3E4EC8u;
label_3e4ec8:
    // 0x3e4ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4ecc:
    // 0x3e4ecc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e4ed0:
    // 0x3e4ed0: 0xc0f9588  jal         func_3E5620
label_3e4ed4:
    if (ctx->pc == 0x3E4ED4u) {
        ctx->pc = 0x3E4ED4u;
            // 0x3e4ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E4ED8u;
        goto label_3e4ed8;
    }
    ctx->pc = 0x3E4ED0u;
    SET_GPR_U32(ctx, 31, 0x3E4ED8u);
    ctx->pc = 0x3E4ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4ED0u;
            // 0x3e4ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5620u;
    if (runtime->hasFunction(0x3E5620u)) {
        auto targetFn = runtime->lookupFunction(0x3E5620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4ED8u; }
        if (ctx->pc != 0x3E4ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5620_0x3e5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4ED8u; }
        if (ctx->pc != 0x3E4ED8u) { return; }
    }
    ctx->pc = 0x3E4ED8u;
label_3e4ed8:
    // 0x3e4ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4edc:
    // 0x3e4edc: 0xc0f0d18  jal         func_3C3460
label_3e4ee0:
    if (ctx->pc == 0x3E4EE0u) {
        ctx->pc = 0x3E4EE0u;
            // 0x3e4ee0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E4EE4u;
        goto label_3e4ee4;
    }
    ctx->pc = 0x3E4EDCu;
    SET_GPR_U32(ctx, 31, 0x3E4EE4u);
    ctx->pc = 0x3E4EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4EDCu;
            // 0x3e4ee0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EE4u; }
        if (ctx->pc != 0x3E4EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4EE4u; }
        if (ctx->pc != 0x3E4EE4u) { return; }
    }
    ctx->pc = 0x3E4EE4u;
label_3e4ee4:
    // 0x3e4ee4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3e4ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e4ee8:
    // 0x3e4ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e4eec:
    if (ctx->pc == 0x3E4EECu) {
        ctx->pc = 0x3E4EF0u;
        goto label_3e4ef0;
    }
    ctx->pc = 0x3E4EE8u;
    {
        const bool branch_taken_0x3e4ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ee8) {
            ctx->pc = 0x3E4F00u;
            goto label_3e4f00;
        }
    }
    ctx->pc = 0x3E4EF0u;
label_3e4ef0:
    // 0x3e4ef0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4ef4:
    // 0x3e4ef4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3e4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3e4ef8:
    // 0x3e4ef8: 0xc0f9584  jal         func_3E5610
label_3e4efc:
    if (ctx->pc == 0x3E4EFCu) {
        ctx->pc = 0x3E4EFCu;
            // 0x3e4efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E4F00u;
        goto label_3e4f00;
    }
    ctx->pc = 0x3E4EF8u;
    SET_GPR_U32(ctx, 31, 0x3E4F00u);
    ctx->pc = 0x3E4EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4EF8u;
            // 0x3e4efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5610u;
    if (runtime->hasFunction(0x3E5610u)) {
        auto targetFn = runtime->lookupFunction(0x3E5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F00u; }
        if (ctx->pc != 0x3E4F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5610_0x3e5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F00u; }
        if (ctx->pc != 0x3E4F00u) { return; }
    }
    ctx->pc = 0x3E4F00u;
label_3e4f00:
    // 0x3e4f00: 0xc0775b0  jal         func_1DD6C0
label_3e4f04:
    if (ctx->pc == 0x3E4F04u) {
        ctx->pc = 0x3E4F08u;
        goto label_3e4f08;
    }
    ctx->pc = 0x3E4F00u;
    SET_GPR_U32(ctx, 31, 0x3E4F08u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F08u; }
        if (ctx->pc != 0x3E4F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F08u; }
        if (ctx->pc != 0x3E4F08u) { return; }
    }
    ctx->pc = 0x3E4F08u;
label_3e4f08:
    // 0x3e4f08: 0xc0775ac  jal         func_1DD6B0
label_3e4f0c:
    if (ctx->pc == 0x3E4F0Cu) {
        ctx->pc = 0x3E4F0Cu;
            // 0x3e4f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F10u;
        goto label_3e4f10;
    }
    ctx->pc = 0x3E4F08u;
    SET_GPR_U32(ctx, 31, 0x3E4F10u);
    ctx->pc = 0x3E4F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F08u;
            // 0x3e4f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F10u; }
        if (ctx->pc != 0x3E4F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F10u; }
        if (ctx->pc != 0x3E4F10u) { return; }
    }
    ctx->pc = 0x3E4F10u;
label_3e4f10:
    // 0x3e4f10: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e4f14:
    // 0x3e4f14: 0x144301b2  bne         $v0, $v1, . + 4 + (0x1B2 << 2)
label_3e4f18:
    if (ctx->pc == 0x3E4F18u) {
        ctx->pc = 0x3E4F1Cu;
        goto label_3e4f1c;
    }
    ctx->pc = 0x3E4F14u;
    {
        const bool branch_taken_0x3e4f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4f14) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E4F1Cu;
label_3e4f1c:
    // 0x3e4f1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4f20:
    // 0x3e4f20: 0xc0dc47c  jal         func_3711F0
label_3e4f24:
    if (ctx->pc == 0x3E4F24u) {
        ctx->pc = 0x3E4F24u;
            // 0x3e4f24: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E4F28u;
        goto label_3e4f28;
    }
    ctx->pc = 0x3E4F20u;
    SET_GPR_U32(ctx, 31, 0x3E4F28u);
    ctx->pc = 0x3E4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F20u;
            // 0x3e4f24: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F28u; }
        if (ctx->pc != 0x3E4F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F28u; }
        if (ctx->pc != 0x3E4F28u) { return; }
    }
    ctx->pc = 0x3E4F28u;
label_3e4f28:
    // 0x3e4f28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e4f2c:
    // 0x3e4f2c: 0x144301ac  bne         $v0, $v1, . + 4 + (0x1AC << 2)
label_3e4f30:
    if (ctx->pc == 0x3E4F30u) {
        ctx->pc = 0x3E4F34u;
        goto label_3e4f34;
    }
    ctx->pc = 0x3E4F2Cu;
    {
        const bool branch_taken_0x3e4f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e4f2c) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E4F34u;
label_3e4f34:
    // 0x3e4f34: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3e4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e4f38:
    // 0x3e4f38: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e4f3c:
    if (ctx->pc == 0x3E4F3Cu) {
        ctx->pc = 0x3E4F3Cu;
            // 0x3e4f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F40u;
        goto label_3e4f40;
    }
    ctx->pc = 0x3E4F38u;
    {
        const bool branch_taken_0x3e4f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4f38) {
            ctx->pc = 0x3E4F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F38u;
            // 0x3e4f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4F58u;
            goto label_3e4f58;
        }
    }
    ctx->pc = 0x3E4F40u;
label_3e4f40:
    // 0x3e4f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4f44:
    // 0x3e4f44: 0xc0f8ffc  jal         func_3E3FF0
label_3e4f48:
    if (ctx->pc == 0x3E4F48u) {
        ctx->pc = 0x3E4F48u;
            // 0x3e4f48: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3E4F4Cu;
        goto label_3e4f4c;
    }
    ctx->pc = 0x3E4F44u;
    SET_GPR_U32(ctx, 31, 0x3E4F4Cu);
    ctx->pc = 0x3E4F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F44u;
            // 0x3e4f48: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F4Cu; }
        if (ctx->pc != 0x3E4F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F4Cu; }
        if (ctx->pc != 0x3E4F4Cu) { return; }
    }
    ctx->pc = 0x3E4F4Cu;
label_3e4f4c:
    // 0x3e4f4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e4f50:
    if (ctx->pc == 0x3E4F50u) {
        ctx->pc = 0x3E4F50u;
            // 0x3e4f50: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3E4F54u;
        goto label_3e4f54;
    }
    ctx->pc = 0x3E4F4Cu;
    {
        const bool branch_taken_0x3e4f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F4Cu;
            // 0x3e4f50: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f4c) {
            ctx->pc = 0x3E4F64u;
            goto label_3e4f64;
        }
    }
    ctx->pc = 0x3E4F54u;
label_3e4f54:
    // 0x3e4f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4f58:
    // 0x3e4f58: 0xc0f8ffc  jal         func_3E3FF0
label_3e4f5c:
    if (ctx->pc == 0x3E4F5Cu) {
        ctx->pc = 0x3E4F5Cu;
            // 0x3e4f5c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x3E4F60u;
        goto label_3e4f60;
    }
    ctx->pc = 0x3E4F58u;
    SET_GPR_U32(ctx, 31, 0x3E4F60u);
    ctx->pc = 0x3E4F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F58u;
            // 0x3e4f5c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F60u; }
        if (ctx->pc != 0x3E4F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4F60u; }
        if (ctx->pc != 0x3E4F60u) { return; }
    }
    ctx->pc = 0x3E4F60u;
label_3e4f60:
    // 0x3e4f60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e4f64:
    // 0x3e4f64: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e4f68:
    // 0x3e4f68: 0x1000019d  b           . + 4 + (0x19D << 2)
label_3e4f6c:
    if (ctx->pc == 0x3E4F6Cu) {
        ctx->pc = 0x3E4F70u;
        goto label_3e4f70;
    }
    ctx->pc = 0x3E4F68u;
    {
        const bool branch_taken_0x3e4f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4f68) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E4F70u;
label_3e4f70:
    // 0x3e4f70: 0x8cc40d98  lw          $a0, 0xD98($a2)
    ctx->pc = 0x3e4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_3e4f74:
    // 0x3e4f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e4f78:
    // 0x3e4f78: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x3e4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_3e4f7c:
    // 0x3e4f7c: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x3e4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3e4f80:
    // 0x3e4f80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e4f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3e4f84:
    // 0x3e4f84: 0x10600196  beqz        $v1, . + 4 + (0x196 << 2)
label_3e4f88:
    if (ctx->pc == 0x3E4F88u) {
        ctx->pc = 0x3E4F88u;
            // 0x3e4f88: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F8Cu;
        goto label_3e4f8c;
    }
    ctx->pc = 0x3E4F84u;
    {
        const bool branch_taken_0x3e4f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4F84u;
            // 0x3e4f88: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f84) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E4F8Cu;
label_3e4f8c:
    // 0x3e4f8c: 0x8cc30db0  lw          $v1, 0xDB0($a2)
    ctx->pc = 0x3e4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_3e4f90:
    // 0x3e4f90: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x3e4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e4f94:
    // 0x3e4f94: 0x14620135  bne         $v1, $v0, . + 4 + (0x135 << 2)
label_3e4f98:
    if (ctx->pc == 0x3E4F98u) {
        ctx->pc = 0x3E4F9Cu;
        goto label_3e4f9c;
    }
    ctx->pc = 0x3E4F94u;
    {
        const bool branch_taken_0x3e4f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e4f94) {
            ctx->pc = 0x3E546Cu;
            goto label_3e546c;
        }
    }
    ctx->pc = 0x3E4F9Cu;
label_3e4f9c:
    // 0x3e4f9c: 0xc4c10a7c  lwc1        $f1, 0xA7C($a2)
    ctx->pc = 0x3e4f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e4fa0:
    // 0x3e4fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e4fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e4fa4:
    // 0x3e4fa4: 0x0  nop
    ctx->pc = 0x3e4fa4u;
    // NOP
label_3e4fa8:
    // 0x3e4fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e4fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e4fac:
    // 0x3e4fac: 0x4501012f  bc1t        . + 4 + (0x12F << 2)
label_3e4fb0:
    if (ctx->pc == 0x3E4FB0u) {
        ctx->pc = 0x3E4FB4u;
        goto label_3e4fb4;
    }
    ctx->pc = 0x3E4FACu;
    {
        const bool branch_taken_0x3e4fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e4fac) {
            ctx->pc = 0x3E546Cu;
            goto label_3e546c;
        }
    }
    ctx->pc = 0x3E4FB4u;
label_3e4fb4:
    // 0x3e4fb4: 0x8cc20e34  lw          $v0, 0xE34($a2)
    ctx->pc = 0x3e4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_3e4fb8:
    // 0x3e4fb8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x3e4fb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e4fbc:
    // 0x3e4fbc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3e4fc0:
    if (ctx->pc == 0x3E4FC0u) {
        ctx->pc = 0x3E4FC0u;
            // 0x3e4fc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FC4u;
        goto label_3e4fc4;
    }
    ctx->pc = 0x3E4FBCu;
    {
        const bool branch_taken_0x3e4fbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3E4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4FBCu;
            // 0x3e4fc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fbc) {
            ctx->pc = 0x3E4FD4u;
            goto label_3e4fd4;
        }
    }
    ctx->pc = 0x3E4FC4u;
label_3e4fc4:
    // 0x3e4fc4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3e4fc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3e4fc8:
    // 0x3e4fc8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3e4fcc:
    if (ctx->pc == 0x3E4FCCu) {
        ctx->pc = 0x3E4FD0u;
        goto label_3e4fd0;
    }
    ctx->pc = 0x3E4FC8u;
    {
        const bool branch_taken_0x3e4fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fc8) {
            ctx->pc = 0x3E4FD4u;
            goto label_3e4fd4;
        }
    }
    ctx->pc = 0x3E4FD0u;
label_3e4fd0:
    // 0x3e4fd0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3e4fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4fd4:
    // 0x3e4fd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3e4fd8:
    if (ctx->pc == 0x3E4FD8u) {
        ctx->pc = 0x3E4FDCu;
        goto label_3e4fdc;
    }
    ctx->pc = 0x3E4FD4u;
    {
        const bool branch_taken_0x3e4fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fd4) {
            ctx->pc = 0x3E4FF0u;
            goto label_3e4ff0;
        }
    }
    ctx->pc = 0x3E4FDCu;
label_3e4fdc:
    // 0x3e4fdc: 0xc075eb4  jal         func_1D7AD0
label_3e4fe0:
    if (ctx->pc == 0x3E4FE0u) {
        ctx->pc = 0x3E4FE0u;
            // 0x3e4fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FE4u;
        goto label_3e4fe4;
    }
    ctx->pc = 0x3E4FDCu;
    SET_GPR_U32(ctx, 31, 0x3E4FE4u);
    ctx->pc = 0x3E4FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4FDCu;
            // 0x3e4fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4FE4u; }
        if (ctx->pc != 0x3E4FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E4FE4u; }
        if (ctx->pc != 0x3E4FE4u) { return; }
    }
    ctx->pc = 0x3E4FE4u;
label_3e4fe4:
    // 0x3e4fe4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3e4fe8:
    if (ctx->pc == 0x3E4FE8u) {
        ctx->pc = 0x3E4FECu;
        goto label_3e4fec;
    }
    ctx->pc = 0x3E4FE4u;
    {
        const bool branch_taken_0x3e4fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fe4) {
            ctx->pc = 0x3E4FF0u;
            goto label_3e4ff0;
        }
    }
    ctx->pc = 0x3E4FECu;
label_3e4fec:
    // 0x3e4fec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e4fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ff0:
    // 0x3e4ff0: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
label_3e4ff4:
    if (ctx->pc == 0x3E4FF4u) {
        ctx->pc = 0x3E4FF4u;
            // 0x3e4ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FF8u;
        goto label_3e4ff8;
    }
    ctx->pc = 0x3E4FF0u;
    {
        const bool branch_taken_0x3e4ff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ff0) {
            ctx->pc = 0x3E4FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4FF0u;
            // 0x3e4ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5024u;
            goto label_3e5024;
        }
    }
    ctx->pc = 0x3E4FF8u;
label_3e4ff8:
    // 0x3e4ff8: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x3e4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_3e4ffc:
    // 0x3e4ffc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e5000:
    // 0x3e5000: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3e5004:
    if (ctx->pc == 0x3E5004u) {
        ctx->pc = 0x3E5008u;
        goto label_3e5008;
    }
    ctx->pc = 0x3E5000u;
    {
        const bool branch_taken_0x3e5000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e5000) {
            ctx->pc = 0x3E5020u;
            goto label_3e5020;
        }
    }
    ctx->pc = 0x3E5008u;
label_3e5008:
    // 0x3e5008: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e5008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e500c:
    // 0x3e500c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3e500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3e5010:
    // 0x3e5010: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3e5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3e5014:
    // 0x3e5014: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3e5014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3e5018:
    // 0x3e5018: 0x144300b5  bne         $v0, $v1, . + 4 + (0xB5 << 2)
label_3e501c:
    if (ctx->pc == 0x3E501Cu) {
        ctx->pc = 0x3E5020u;
        goto label_3e5020;
    }
    ctx->pc = 0x3E5018u;
    {
        const bool branch_taken_0x3e5018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5018) {
            ctx->pc = 0x3E52F0u;
            goto label_3e52f0;
        }
    }
    ctx->pc = 0x3E5020u;
label_3e5020:
    // 0x3e5020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5024:
    // 0x3e5024: 0xc0f95b8  jal         func_3E56E0
label_3e5028:
    if (ctx->pc == 0x3E5028u) {
        ctx->pc = 0x3E502Cu;
        goto label_3e502c;
    }
    ctx->pc = 0x3E5024u;
    SET_GPR_U32(ctx, 31, 0x3E502Cu);
    ctx->pc = 0x3E56E0u;
    if (runtime->hasFunction(0x3E56E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E56E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E502Cu; }
        if (ctx->pc != 0x3E502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E56E0_0x3e56e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E502Cu; }
        if (ctx->pc != 0x3E502Cu) { return; }
    }
    ctx->pc = 0x3E502Cu;
label_3e502c:
    // 0x3e502c: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x3e502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e5030:
    // 0x3e5030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e5034:
    // 0x3e5034: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e5038:
    if (ctx->pc == 0x3E5038u) {
        ctx->pc = 0x3E5038u;
            // 0x3e5038: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x3E503Cu;
        goto label_3e503c;
    }
    ctx->pc = 0x3E5034u;
    {
        const bool branch_taken_0x3e5034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e5034) {
            ctx->pc = 0x3E5038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5034u;
            // 0x3e5038: 0x8ea40d60  lw          $a0, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E504Cu;
            goto label_3e504c;
        }
    }
    ctx->pc = 0x3E503Cu;
label_3e503c:
    // 0x3e503c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e5040:
    // 0x3e5040: 0x24429da0  addiu       $v0, $v0, -0x6260
    ctx->pc = 0x3e5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942112));
label_3e5044:
    // 0x3e5044: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x3e5044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
label_3e5048:
    // 0x3e5048: 0x8ea40d60  lw          $a0, 0xD60($s5)
    ctx->pc = 0x3e5048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_3e504c:
    // 0x3e504c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3e504cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3e5050:
    // 0x3e5050: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3e5050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3e5054:
    // 0x3e5054: 0x320f809  jalr        $t9
label_3e5058:
    if (ctx->pc == 0x3E5058u) {
        ctx->pc = 0x3E5058u;
            // 0x3e5058: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3E505Cu;
        goto label_3e505c;
    }
    ctx->pc = 0x3E5054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E505Cu);
        ctx->pc = 0x3E5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5054u;
            // 0x3e5058: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E505Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E505Cu; }
            if (ctx->pc != 0x3E505Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E505Cu;
label_3e505c:
    // 0x3e505c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x3e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3e5060:
    // 0x3e5060: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_3e5064:
    if (ctx->pc == 0x3E5064u) {
        ctx->pc = 0x3E5064u;
            // 0x3e5064: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3E5068u;
        goto label_3e5068;
    }
    ctx->pc = 0x3E5060u;
    {
        const bool branch_taken_0x3e5060 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3E5064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5060u;
            // 0x3e5064: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5060) {
            ctx->pc = 0x3E5074u;
            goto label_3e5074;
        }
    }
    ctx->pc = 0x3E5068u;
label_3e5068:
    // 0x3e5068: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3e506c:
    if (ctx->pc == 0x3E506Cu) {
        ctx->pc = 0x3E506Cu;
            // 0x3e506c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3E5070u;
        goto label_3e5070;
    }
    ctx->pc = 0x3E5068u;
    {
        const bool branch_taken_0x3e5068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5068) {
            ctx->pc = 0x3E506Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5068u;
            // 0x3e506c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5078u;
            goto label_3e5078;
        }
    }
    ctx->pc = 0x3E5070u;
label_3e5070:
    // 0x3e5070: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3e5070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3e5074:
    // 0x3e5074: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e5074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e5078:
    // 0x3e5078: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e5078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e507c:
    // 0x3e507c: 0xa20202e8  sb          $v0, 0x2E8($s0)
    ctx->pc = 0x3e507cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
label_3e5080:
    // 0x3e5080: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x3e5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_3e5084:
    // 0x3e5084: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3e5088:
    if (ctx->pc == 0x3E5088u) {
        ctx->pc = 0x3E5088u;
            // 0x3e5088: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E508Cu;
        goto label_3e508c;
    }
    ctx->pc = 0x3E5084u;
    {
        const bool branch_taken_0x3e5084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5084u;
            // 0x3e5088: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5084) {
            ctx->pc = 0x3E50B0u;
            goto label_3e50b0;
        }
    }
    ctx->pc = 0x3E508Cu;
label_3e508c:
    // 0x3e508c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5090:
    // 0x3e5090: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e5094:
    // 0x3e5094: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e5094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3e5098:
    // 0x3e5098: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x3e5098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_3e509c:
    // 0x3e509c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e509cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e50a0:
    // 0x3e50a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e50a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e50a4:
    // 0x3e50a4: 0xc0bb0e8  jal         func_2EC3A0
label_3e50a8:
    if (ctx->pc == 0x3E50A8u) {
        ctx->pc = 0x3E50A8u;
            // 0x3e50a8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E50ACu;
        goto label_3e50ac;
    }
    ctx->pc = 0x3E50A4u;
    SET_GPR_U32(ctx, 31, 0x3E50ACu);
    ctx->pc = 0x3E50A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E50A4u;
            // 0x3e50a8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E50ACu; }
        if (ctx->pc != 0x3E50ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E50ACu; }
        if (ctx->pc != 0x3E50ACu) { return; }
    }
    ctx->pc = 0x3E50ACu;
label_3e50ac:
    // 0x3e50ac: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x3e50acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
label_3e50b0:
    // 0x3e50b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e50b4:
    // 0x3e50b4: 0x3c034005  lui         $v1, 0x4005
    ctx->pc = 0x3e50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16389 << 16));
label_3e50b8:
    // 0x3e50b8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x3e50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3e50bc:
    // 0x3e50bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e50bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e50c0:
    // 0x3e50c0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x3e50c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e50c4:
    // 0x3e50c4: 0x34625555  ori         $v0, $v1, 0x5555
    ctx->pc = 0x3e50c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_3e50c8:
    // 0x3e50c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e50c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e50cc:
    // 0x3e50cc: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x3e50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
label_3e50d0:
    // 0x3e50d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e50d4:
    // 0x3e50d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e50d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e50d8:
    // 0x3e50d8: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x3e50d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_3e50dc:
    // 0x3e50dc: 0xae03027c  sw          $v1, 0x27C($s0)
    ctx->pc = 0x3e50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
label_3e50e0:
    // 0x3e50e0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3e50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3e50e4:
    // 0x3e50e4: 0x8c440198  lw          $a0, 0x198($v0)
    ctx->pc = 0x3e50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
label_3e50e8:
    // 0x3e50e8: 0xc05d7c2  jal         func_175F08
label_3e50ec:
    if (ctx->pc == 0x3E50ECu) {
        ctx->pc = 0x3E50ECu;
            // 0x3e50ec: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->pc = 0x3E50F0u;
        goto label_3e50f0;
    }
    ctx->pc = 0x3E50E8u;
    SET_GPR_U32(ctx, 31, 0x3E50F0u);
    ctx->pc = 0x3E50ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E50E8u;
            // 0x3e50ec: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E50F0u; }
        if (ctx->pc != 0x3E50F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E50F0u; }
        if (ctx->pc != 0x3E50F0u) { return; }
    }
    ctx->pc = 0x3E50F0u;
label_3e50f0:
    // 0x3e50f0: 0x8ea40d60  lw          $a0, 0xD60($s5)
    ctx->pc = 0x3e50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_3e50f4:
    // 0x3e50f4: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3e50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_3e50f8:
    // 0x3e50f8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3e50f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3e50fc:
    // 0x3e50fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3e50fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3e5100:
    // 0x3e5100: 0x320f809  jalr        $t9
label_3e5104:
    if (ctx->pc == 0x3E5104u) {
        ctx->pc = 0x3E5104u;
            // 0x3e5104: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E5108u;
        goto label_3e5108;
    }
    ctx->pc = 0x3E5100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E5108u);
        ctx->pc = 0x3E5104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5100u;
            // 0x3e5104: 0x344518a9  ori         $a1, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E5108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E5108u; }
            if (ctx->pc != 0x3E5108u) { return; }
        }
        }
    }
    ctx->pc = 0x3E5108u;
label_3e5108:
    // 0x3e5108: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3e5108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3e510c:
    // 0x3e510c: 0xc073234  jal         func_1CC8D0
label_3e5110:
    if (ctx->pc == 0x3E5110u) {
        ctx->pc = 0x3E5110u;
            // 0x3e5110: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x3E5114u;
        goto label_3e5114;
    }
    ctx->pc = 0x3E510Cu;
    SET_GPR_U32(ctx, 31, 0x3E5114u);
    ctx->pc = 0x3E5110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E510Cu;
            // 0x3e5110: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5114u; }
        if (ctx->pc != 0x3E5114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5114u; }
        if (ctx->pc != 0x3E5114u) { return; }
    }
    ctx->pc = 0x3E5114u;
label_3e5114:
    // 0x3e5114: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e5118:
    // 0x3e5118: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e5118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3e511c:
    // 0x3e511c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x3e511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_3e5120:
    // 0x3e5120: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_3e5124:
    if (ctx->pc == 0x3E5124u) {
        ctx->pc = 0x3E5124u;
            // 0x3e5124: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3E5128u;
        goto label_3e5128;
    }
    ctx->pc = 0x3E5120u;
    {
        const bool branch_taken_0x3e5120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5120) {
            ctx->pc = 0x3E5124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5120u;
            // 0x3e5124: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5224u;
            goto label_3e5224;
        }
    }
    ctx->pc = 0x3E5128u;
label_3e5128:
    // 0x3e5128: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3e5128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e512c:
    // 0x3e512c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e5130:
    // 0x3e5130: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3e5130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3e5134:
    // 0x3e5134: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e5134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5138:
    // 0x3e5138: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_3e513c:
    // 0x3e513c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5140:
    // 0x3e5140: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e5144:
    // 0x3e5144: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5148:
    // 0x3e5148: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e5148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e514c:
    // 0x3e514c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e514cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5150:
    // 0x3e5150: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e5150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e5154:
    // 0x3e5154: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e5154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e5158:
    // 0x3e5158: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e5158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e515c:
    // 0x3e515c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e515cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e5160:
    // 0x3e5160: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e5164:
    // 0x3e5164: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e5164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e5168:
    // 0x3e5168: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e5168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e516c:
    // 0x3e516c: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e5170:
    // 0x3e5170: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e5170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e5174:
    // 0x3e5174: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e5174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e5178:
    // 0x3e5178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e5178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e517c:
    // 0x3e517c: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e517cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e5180:
    // 0x3e5180: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e5180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e5184:
    // 0x3e5184: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e5184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e5188:
    // 0x3e5188: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e5188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e518c:
    // 0x3e518c: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e518cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e5190:
    // 0x3e5190: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e5190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e5194:
    // 0x3e5194: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e5194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e5198:
    // 0x3e5198: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e5198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e519c:
    // 0x3e519c: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e519cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e51a0:
    // 0x3e51a0: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e51a4:
    // 0x3e51a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e51a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e51a8:
    // 0x3e51a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e51a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e51ac:
    // 0x3e51ac: 0x320f809  jalr        $t9
label_3e51b0:
    if (ctx->pc == 0x3E51B0u) {
        ctx->pc = 0x3E51B4u;
        goto label_3e51b4;
    }
    ctx->pc = 0x3E51ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E51B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E51B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E51B4u; }
            if (ctx->pc != 0x3E51B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E51B4u;
label_3e51b4:
    // 0x3e51b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e51b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e51b8:
    // 0x3e51b8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3e51b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e51bc:
    // 0x3e51bc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3e51c0:
    if (ctx->pc == 0x3E51C0u) {
        ctx->pc = 0x3E51C0u;
            // 0x3e51c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E51C4u;
        goto label_3e51c4;
    }
    ctx->pc = 0x3E51BCu;
    {
        const bool branch_taken_0x3e51bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E51C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E51BCu;
            // 0x3e51c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51bc) {
            ctx->pc = 0x3E5168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5168;
        }
    }
    ctx->pc = 0x3E51C4u;
label_3e51c4:
    // 0x3e51c4: 0xc040180  jal         func_100600
label_3e51c8:
    if (ctx->pc == 0x3E51C8u) {
        ctx->pc = 0x3E51C8u;
            // 0x3e51c8: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x3E51CCu;
        goto label_3e51cc;
    }
    ctx->pc = 0x3E51C4u;
    SET_GPR_U32(ctx, 31, 0x3E51CCu);
    ctx->pc = 0x3E51C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E51C4u;
            // 0x3e51c8: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E51CCu; }
        if (ctx->pc != 0x3E51CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E51CCu; }
        if (ctx->pc != 0x3E51CCu) { return; }
    }
    ctx->pc = 0x3E51CCu;
label_3e51cc:
    // 0x3e51cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3e51d0:
    if (ctx->pc == 0x3E51D0u) {
        ctx->pc = 0x3E51D0u;
            // 0x3e51d0: 0xae020358  sw          $v0, 0x358($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
        ctx->pc = 0x3E51D4u;
        goto label_3e51d4;
    }
    ctx->pc = 0x3E51CCu;
    {
        const bool branch_taken_0x3e51cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e51cc) {
            ctx->pc = 0x3E51D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E51CCu;
            // 0x3e51d0: 0xae020358  sw          $v0, 0x358($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E51E8u;
            goto label_3e51e8;
        }
    }
    ctx->pc = 0x3E51D4u;
label_3e51d4:
    // 0x3e51d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e51d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e51d8:
    // 0x3e51d8: 0x26050310  addiu       $a1, $s0, 0x310
    ctx->pc = 0x3e51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_3e51dc:
    // 0x3e51dc: 0xc138cfc  jal         func_4E33F0
label_3e51e0:
    if (ctx->pc == 0x3E51E0u) {
        ctx->pc = 0x3E51E0u;
            // 0x3e51e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E51E4u;
        goto label_3e51e4;
    }
    ctx->pc = 0x3E51DCu;
    SET_GPR_U32(ctx, 31, 0x3E51E4u);
    ctx->pc = 0x3E51E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E51DCu;
            // 0x3e51e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E33F0u;
    if (runtime->hasFunction(0x4E33F0u)) {
        auto targetFn = runtime->lookupFunction(0x4E33F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E51E4u; }
        if (ctx->pc != 0x3E51E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E33F0_0x4e33f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E51E4u; }
        if (ctx->pc != 0x3E51E4u) { return; }
    }
    ctx->pc = 0x3E51E4u;
label_3e51e4:
    // 0x3e51e4: 0xae020358  sw          $v0, 0x358($s0)
    ctx->pc = 0x3e51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
label_3e51e8:
    // 0x3e51e8: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x3e51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_3e51ec:
    // 0x3e51ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e51f0:
    // 0x3e51f0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3e51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_3e51f4:
    // 0x3e51f4: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3e51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3e51f8:
    // 0x3e51f8: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x3e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_3e51fc:
    // 0x3e51fc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3e51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3e5200:
    // 0x3e5200: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3e5200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e5204:
    // 0x3e5204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e5204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e5208:
    // 0x3e5208: 0x0  nop
    ctx->pc = 0x3e5208u;
    // NOP
label_3e520c:
    // 0x3e520c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e520cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e5210:
    // 0x3e5210: 0xc04cc04  jal         func_133010
label_3e5214:
    if (ctx->pc == 0x3E5214u) {
        ctx->pc = 0x3E5214u;
            // 0x3e5214: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->pc = 0x3E5218u;
        goto label_3e5218;
    }
    ctx->pc = 0x3E5210u;
    SET_GPR_U32(ctx, 31, 0x3E5218u);
    ctx->pc = 0x3E5214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5210u;
            // 0x3e5214: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5218u; }
        if (ctx->pc != 0x3E5218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5218u; }
        if (ctx->pc != 0x3E5218u) { return; }
    }
    ctx->pc = 0x3E5218u;
label_3e5218:
    // 0x3e5218: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_3e521c:
    if (ctx->pc == 0x3E521Cu) {
        ctx->pc = 0x3E5220u;
        goto label_3e5220;
    }
    ctx->pc = 0x3E5218u;
    {
        const bool branch_taken_0x3e5218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e5218) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E5220u;
label_3e5220:
    // 0x3e5220: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e5220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e5224:
    // 0x3e5224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e5228:
    // 0x3e5228: 0xae0202d4  sw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e5228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 2));
label_3e522c:
    // 0x3e522c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e522cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5230:
    // 0x3e5230: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x3e5230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_3e5234:
    // 0x3e5234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5238:
    // 0x3e5238: 0xa20302da  sb          $v1, 0x2DA($s0)
    ctx->pc = 0x3e5238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 730), (uint8_t)GPR_U32(ctx, 3));
label_3e523c:
    // 0x3e523c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3e523cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5240:
    // 0x3e5240: 0x8c433da0  lw          $v1, 0x3DA0($v0)
    ctx->pc = 0x3e5240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3e5244:
    // 0x3e5244: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e5244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_3e5248:
    // 0x3e5248: 0x24720084  addiu       $s2, $v1, 0x84
    ctx->pc = 0x3e5248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_3e524c:
    // 0x3e524c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e524cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e5250:
    // 0x3e5250: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e5250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e5254:
    // 0x3e5254: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3e5254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e5258:
    // 0x3e5258: 0x8e6603a0  lw          $a2, 0x3A0($s3)
    ctx->pc = 0x3e5258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e525c:
    // 0x3e525c: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x3e525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_3e5260:
    // 0x3e5260: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e5260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e5264:
    // 0x3e5264: 0x26030284  addiu       $v1, $s0, 0x284
    ctx->pc = 0x3e5264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_3e5268:
    // 0x3e5268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e5268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e526c:
    // 0x3e526c: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x3e526cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
label_3e5270:
    // 0x3e5270: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x3e5270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
label_3e5274:
    // 0x3e5274: 0xacc40088  sw          $a0, 0x88($a2)
    ctx->pc = 0x3e5274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 4));
label_3e5278:
    // 0x3e5278: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x3e5278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_3e527c:
    // 0x3e527c: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x3e527cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
label_3e5280:
    // 0x3e5280: 0x8e6303a0  lw          $v1, 0x3A0($s3)
    ctx->pc = 0x3e5280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e5284:
    // 0x3e5284: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x3e5284u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_3e5288:
    // 0x3e5288: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e5288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3e528c:
    // 0x3e528c: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x3e528cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_3e5290:
    // 0x3e5290: 0x8e6403a0  lw          $a0, 0x3A0($s3)
    ctx->pc = 0x3e5290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 928)));
label_3e5294:
    // 0x3e5294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e5294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e5298:
    // 0x3e5298: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e5298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e529c:
    // 0x3e529c: 0x320f809  jalr        $t9
label_3e52a0:
    if (ctx->pc == 0x3E52A0u) {
        ctx->pc = 0x3E52A4u;
        goto label_3e52a4;
    }
    ctx->pc = 0x3E529Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E52A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E52A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E52A4u; }
            if (ctx->pc != 0x3E52A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E52A4u;
label_3e52a4:
    // 0x3e52a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e52a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3e52a8:
    // 0x3e52a8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3e52a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e52ac:
    // 0x3e52ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3e52b0:
    if (ctx->pc == 0x3E52B0u) {
        ctx->pc = 0x3E52B0u;
            // 0x3e52b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3E52B4u;
        goto label_3e52b4;
    }
    ctx->pc = 0x3E52ACu;
    {
        const bool branch_taken_0x3e52ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E52B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52ACu;
            // 0x3e52b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52ac) {
            ctx->pc = 0x3E5258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5258;
        }
    }
    ctx->pc = 0x3E52B4u;
label_3e52b4:
    // 0x3e52b4: 0xc040180  jal         func_100600
label_3e52b8:
    if (ctx->pc == 0x3E52B8u) {
        ctx->pc = 0x3E52B8u;
            // 0x3e52b8: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x3E52BCu;
        goto label_3e52bc;
    }
    ctx->pc = 0x3E52B4u;
    SET_GPR_U32(ctx, 31, 0x3E52BCu);
    ctx->pc = 0x3E52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52B4u;
            // 0x3e52b8: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52BCu; }
        if (ctx->pc != 0x3E52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52BCu; }
        if (ctx->pc != 0x3E52BCu) { return; }
    }
    ctx->pc = 0x3E52BCu;
label_3e52bc:
    // 0x3e52bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3e52c0:
    if (ctx->pc == 0x3E52C0u) {
        ctx->pc = 0x3E52C0u;
            // 0x3e52c0: 0x260401f0  addiu       $a0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->pc = 0x3E52C4u;
        goto label_3e52c4;
    }
    ctx->pc = 0x3E52BCu;
    {
        const bool branch_taken_0x3e52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e52bc) {
            ctx->pc = 0x3E52C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52BCu;
            // 0x3e52c0: 0x260401f0  addiu       $a0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E52E0u;
            goto label_3e52e0;
        }
    }
    ctx->pc = 0x3E52C4u;
label_3e52c4:
    // 0x3e52c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e52c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e52c8:
    // 0x3e52c8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3e52c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3e52cc:
    // 0x3e52cc: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3e52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3e52d0:
    // 0x3e52d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e52d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e52d4:
    // 0x3e52d4: 0xc12d1b0  jal         func_4B46C0
label_3e52d8:
    if (ctx->pc == 0x3E52D8u) {
        ctx->pc = 0x3E52D8u;
            // 0x3e52d8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x3E52DCu;
        goto label_3e52dc;
    }
    ctx->pc = 0x3E52D4u;
    SET_GPR_U32(ctx, 31, 0x3E52DCu);
    ctx->pc = 0x3E52D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52D4u;
            // 0x3e52d8: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (runtime->hasFunction(0x4B46C0u)) {
        auto targetFn = runtime->lookupFunction(0x4B46C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52DCu; }
        if (ctx->pc != 0x3E52DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B46C0_0x4b46c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52DCu; }
        if (ctx->pc != 0x3E52DCu) { return; }
    }
    ctx->pc = 0x3E52DCu;
label_3e52dc:
    // 0x3e52dc: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x3e52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_3e52e0:
    // 0x3e52e0: 0xc04cc04  jal         func_133010
label_3e52e4:
    if (ctx->pc == 0x3E52E4u) {
        ctx->pc = 0x3E52E4u;
            // 0x3e52e4: 0x26a503d0  addiu       $a1, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->pc = 0x3E52E8u;
        goto label_3e52e8;
    }
    ctx->pc = 0x3E52E0u;
    SET_GPR_U32(ctx, 31, 0x3E52E8u);
    ctx->pc = 0x3E52E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52E0u;
            // 0x3e52e4: 0x26a503d0  addiu       $a1, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52E8u; }
        if (ctx->pc != 0x3E52E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52E8u; }
        if (ctx->pc != 0x3E52E8u) { return; }
    }
    ctx->pc = 0x3E52E8u;
label_3e52e8:
    // 0x3e52e8: 0x100000bd  b           . + 4 + (0xBD << 2)
label_3e52ec:
    if (ctx->pc == 0x3E52ECu) {
        ctx->pc = 0x3E52F0u;
        goto label_3e52f0;
    }
    ctx->pc = 0x3E52E8u;
    {
        const bool branch_taken_0x3e52e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e52e8) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E52F0u;
label_3e52f0:
    // 0x3e52f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e52f4:
    // 0x3e52f4: 0xc0ae0e4  jal         func_2B8390
label_3e52f8:
    if (ctx->pc == 0x3E52F8u) {
        ctx->pc = 0x3E52F8u;
            // 0x3e52f8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E52FCu;
        goto label_3e52fc;
    }
    ctx->pc = 0x3E52F4u;
    SET_GPR_U32(ctx, 31, 0x3E52FCu);
    ctx->pc = 0x3E52F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E52F4u;
            // 0x3e52f8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52FCu; }
        if (ctx->pc != 0x3E52FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E52FCu; }
        if (ctx->pc != 0x3E52FCu) { return; }
    }
    ctx->pc = 0x3E52FCu;
label_3e52fc:
    // 0x3e52fc: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e52fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e5300:
    // 0x3e5300: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e5300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5304:
    // 0x3e5304: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e5304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5308:
    // 0x3e5308: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e5308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e530c:
    // 0x3e530c: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x3e530cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3e5310:
    // 0x3e5310: 0xc077574  jal         func_1DD5D0
label_3e5314:
    if (ctx->pc == 0x3E5314u) {
        ctx->pc = 0x3E5314u;
            // 0x3e5314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5318u;
        goto label_3e5318;
    }
    ctx->pc = 0x3E5310u;
    SET_GPR_U32(ctx, 31, 0x3E5318u);
    ctx->pc = 0x3E5314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5310u;
            // 0x3e5314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5318u; }
        if (ctx->pc != 0x3E5318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5318u; }
        if (ctx->pc != 0x3E5318u) { return; }
    }
    ctx->pc = 0x3E5318u;
label_3e5318:
    // 0x3e5318: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3e5318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e531c:
    // 0x3e531c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_3e5320:
    if (ctx->pc == 0x3E5320u) {
        ctx->pc = 0x3E5324u;
        goto label_3e5324;
    }
    ctx->pc = 0x3E531Cu;
    {
        const bool branch_taken_0x3e531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e531c) {
            ctx->pc = 0x3E5340u;
            goto label_3e5340;
        }
    }
    ctx->pc = 0x3E5324u;
label_3e5324:
    // 0x3e5324: 0xc077570  jal         func_1DD5C0
label_3e5328:
    if (ctx->pc == 0x3E5328u) {
        ctx->pc = 0x3E5328u;
            // 0x3e5328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E532Cu;
        goto label_3e532c;
    }
    ctx->pc = 0x3E5324u;
    SET_GPR_U32(ctx, 31, 0x3E532Cu);
    ctx->pc = 0x3E5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5324u;
            // 0x3e5328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E532Cu; }
        if (ctx->pc != 0x3E532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E532Cu; }
        if (ctx->pc != 0x3E532Cu) { return; }
    }
    ctx->pc = 0x3E532Cu;
label_3e532c:
    // 0x3e532c: 0xc0f95a0  jal         func_3E5680
label_3e5330:
    if (ctx->pc == 0x3E5330u) {
        ctx->pc = 0x3E5330u;
            // 0x3e5330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5334u;
        goto label_3e5334;
    }
    ctx->pc = 0x3E532Cu;
    SET_GPR_U32(ctx, 31, 0x3E5334u);
    ctx->pc = 0x3E5330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E532Cu;
            // 0x3e5330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5680u;
    if (runtime->hasFunction(0x3E5680u)) {
        auto targetFn = runtime->lookupFunction(0x3E5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5334u; }
        if (ctx->pc != 0x3E5334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5680_0x3e5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5334u; }
        if (ctx->pc != 0x3E5334u) { return; }
    }
    ctx->pc = 0x3E5334u;
label_3e5334:
    // 0x3e5334: 0xc0f959c  jal         func_3E5670
label_3e5338:
    if (ctx->pc == 0x3E5338u) {
        ctx->pc = 0x3E5338u;
            // 0x3e5338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E533Cu;
        goto label_3e533c;
    }
    ctx->pc = 0x3E5334u;
    SET_GPR_U32(ctx, 31, 0x3E533Cu);
    ctx->pc = 0x3E5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5334u;
            // 0x3e5338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5670u;
    if (runtime->hasFunction(0x3E5670u)) {
        auto targetFn = runtime->lookupFunction(0x3E5670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E533Cu; }
        if (ctx->pc != 0x3E533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5670_0x3e5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E533Cu; }
        if (ctx->pc != 0x3E533Cu) { return; }
    }
    ctx->pc = 0x3E533Cu;
label_3e533c:
    // 0x3e533c: 0x0  nop
    ctx->pc = 0x3e533cu;
    // NOP
label_3e5340:
    // 0x3e5340: 0xc077570  jal         func_1DD5C0
label_3e5344:
    if (ctx->pc == 0x3E5344u) {
        ctx->pc = 0x3E5344u;
            // 0x3e5344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5348u;
        goto label_3e5348;
    }
    ctx->pc = 0x3E5340u;
    SET_GPR_U32(ctx, 31, 0x3E5348u);
    ctx->pc = 0x3E5344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5340u;
            // 0x3e5344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5348u; }
        if (ctx->pc != 0x3E5348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5348u; }
        if (ctx->pc != 0x3E5348u) { return; }
    }
    ctx->pc = 0x3E5348u;
label_3e5348:
    // 0x3e5348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e5348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e534c:
    // 0x3e534c: 0xc0f0e7c  jal         func_3C39F0
label_3e5350:
    if (ctx->pc == 0x3E5350u) {
        ctx->pc = 0x3E5350u;
            // 0x3e5350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E5354u;
        goto label_3e5354;
    }
    ctx->pc = 0x3E534Cu;
    SET_GPR_U32(ctx, 31, 0x3E5354u);
    ctx->pc = 0x3E5350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E534Cu;
            // 0x3e5350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5354u; }
        if (ctx->pc != 0x3E5354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5354u; }
        if (ctx->pc != 0x3E5354u) { return; }
    }
    ctx->pc = 0x3E5354u;
label_3e5354:
    // 0x3e5354: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e5354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e5358:
    // 0x3e5358: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x3e5358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e535c:
    // 0x3e535c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3e5360:
    if (ctx->pc == 0x3E5360u) {
        ctx->pc = 0x3E5360u;
            // 0x3e5360: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E5364u;
        goto label_3e5364;
    }
    ctx->pc = 0x3E535Cu;
    {
        const bool branch_taken_0x3e535c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E535Cu;
            // 0x3e5360: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e535c) {
            ctx->pc = 0x3E530Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e530c;
        }
    }
    ctx->pc = 0x3E5364u;
label_3e5364:
    // 0x3e5364: 0xc0f9598  jal         func_3E5660
label_3e5368:
    if (ctx->pc == 0x3E5368u) {
        ctx->pc = 0x3E536Cu;
        goto label_3e536c;
    }
    ctx->pc = 0x3E5364u;
    SET_GPR_U32(ctx, 31, 0x3E536Cu);
    ctx->pc = 0x3E5660u;
    if (runtime->hasFunction(0x3E5660u)) {
        auto targetFn = runtime->lookupFunction(0x3E5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E536Cu; }
        if (ctx->pc != 0x3E536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5660_0x3e5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E536Cu; }
        if (ctx->pc != 0x3E536Cu) { return; }
    }
    ctx->pc = 0x3E536Cu;
label_3e536c:
    // 0x3e536c: 0xc109d50  jal         func_427540
label_3e5370:
    if (ctx->pc == 0x3E5370u) {
        ctx->pc = 0x3E5370u;
            // 0x3e5370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5374u;
        goto label_3e5374;
    }
    ctx->pc = 0x3E536Cu;
    SET_GPR_U32(ctx, 31, 0x3E5374u);
    ctx->pc = 0x3E5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E536Cu;
            // 0x3e5370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427540u;
    if (runtime->hasFunction(0x427540u)) {
        auto targetFn = runtime->lookupFunction(0x427540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5374u; }
        if (ctx->pc != 0x3E5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427540_0x427540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5374u; }
        if (ctx->pc != 0x3E5374u) { return; }
    }
    ctx->pc = 0x3E5374u;
label_3e5374:
    // 0x3e5374: 0xc0f9594  jal         func_3E5650
label_3e5378:
    if (ctx->pc == 0x3E5378u) {
        ctx->pc = 0x3E537Cu;
        goto label_3e537c;
    }
    ctx->pc = 0x3E5374u;
    SET_GPR_U32(ctx, 31, 0x3E537Cu);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E537Cu; }
        if (ctx->pc != 0x3E537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E537Cu; }
        if (ctx->pc != 0x3E537Cu) { return; }
    }
    ctx->pc = 0x3E537Cu;
label_3e537c:
    // 0x3e537c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e5380:
    if (ctx->pc == 0x3E5380u) {
        ctx->pc = 0x3E5384u;
        goto label_3e5384;
    }
    ctx->pc = 0x3E537Cu;
    {
        const bool branch_taken_0x3e537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e537c) {
            ctx->pc = 0x3E5398u;
            goto label_3e5398;
        }
    }
    ctx->pc = 0x3E5384u;
label_3e5384:
    // 0x3e5384: 0xc0f9594  jal         func_3E5650
label_3e5388:
    if (ctx->pc == 0x3E5388u) {
        ctx->pc = 0x3E538Cu;
        goto label_3e538c;
    }
    ctx->pc = 0x3E5384u;
    SET_GPR_U32(ctx, 31, 0x3E538Cu);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E538Cu; }
        if (ctx->pc != 0x3E538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E538Cu; }
        if (ctx->pc != 0x3E538Cu) { return; }
    }
    ctx->pc = 0x3E538Cu;
label_3e538c:
    // 0x3e538c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5390:
    // 0x3e5390: 0xc0f9590  jal         func_3E5640
label_3e5394:
    if (ctx->pc == 0x3E5394u) {
        ctx->pc = 0x3E5394u;
            // 0x3e5394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5398u;
        goto label_3e5398;
    }
    ctx->pc = 0x3E5390u;
    SET_GPR_U32(ctx, 31, 0x3E5398u);
    ctx->pc = 0x3E5394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5390u;
            // 0x3e5394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5640u;
    if (runtime->hasFunction(0x3E5640u)) {
        auto targetFn = runtime->lookupFunction(0x3E5640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5398u; }
        if (ctx->pc != 0x3E5398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5640_0x3e5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5398u; }
        if (ctx->pc != 0x3E5398u) { return; }
    }
    ctx->pc = 0x3E5398u;
label_3e5398:
    // 0x3e5398: 0xc0f958c  jal         func_3E5630
label_3e539c:
    if (ctx->pc == 0x3E539Cu) {
        ctx->pc = 0x3E53A0u;
        goto label_3e53a0;
    }
    ctx->pc = 0x3E5398u;
    SET_GPR_U32(ctx, 31, 0x3E53A0u);
    ctx->pc = 0x3E5630u;
    if (runtime->hasFunction(0x3E5630u)) {
        auto targetFn = runtime->lookupFunction(0x3E5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53A0u; }
        if (ctx->pc != 0x3E53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5630_0x3e5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53A0u; }
        if (ctx->pc != 0x3E53A0u) { return; }
    }
    ctx->pc = 0x3E53A0u;
label_3e53a0:
    // 0x3e53a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e53a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e53a4:
    // 0x3e53a4: 0xc10e6ec  jal         func_439BB0
label_3e53a8:
    if (ctx->pc == 0x3E53A8u) {
        ctx->pc = 0x3E53A8u;
            // 0x3e53a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E53ACu;
        goto label_3e53ac;
    }
    ctx->pc = 0x3E53A4u;
    SET_GPR_U32(ctx, 31, 0x3E53ACu);
    ctx->pc = 0x3E53A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53A4u;
            // 0x3e53a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439BB0u;
    if (runtime->hasFunction(0x439BB0u)) {
        auto targetFn = runtime->lookupFunction(0x439BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53ACu; }
        if (ctx->pc != 0x3E53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439BB0_0x439bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53ACu; }
        if (ctx->pc != 0x3E53ACu) { return; }
    }
    ctx->pc = 0x3E53ACu;
label_3e53ac:
    // 0x3e53ac: 0xc10e6ac  jal         func_439AB0
label_3e53b0:
    if (ctx->pc == 0x3E53B0u) {
        ctx->pc = 0x3E53B0u;
            // 0x3e53b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E53B4u;
        goto label_3e53b4;
    }
    ctx->pc = 0x3E53ACu;
    SET_GPR_U32(ctx, 31, 0x3E53B4u);
    ctx->pc = 0x3E53B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53ACu;
            // 0x3e53b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439AB0u;
    if (runtime->hasFunction(0x439AB0u)) {
        auto targetFn = runtime->lookupFunction(0x439AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53B4u; }
        if (ctx->pc != 0x3E53B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439AB0_0x439ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53B4u; }
        if (ctx->pc != 0x3E53B4u) { return; }
    }
    ctx->pc = 0x3E53B4u;
label_3e53b4:
    // 0x3e53b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e53b8:
    // 0x3e53b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e53bc:
    // 0x3e53bc: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x3e53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_3e53c0:
    // 0x3e53c0: 0xc0f8ffc  jal         func_3E3FF0
label_3e53c4:
    if (ctx->pc == 0x3E53C4u) {
        ctx->pc = 0x3E53C4u;
            // 0x3e53c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E53C8u;
        goto label_3e53c8;
    }
    ctx->pc = 0x3E53C0u;
    SET_GPR_U32(ctx, 31, 0x3E53C8u);
    ctx->pc = 0x3E53C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53C0u;
            // 0x3e53c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53C8u; }
        if (ctx->pc != 0x3E53C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53C8u; }
        if (ctx->pc != 0x3E53C8u) { return; }
    }
    ctx->pc = 0x3E53C8u;
label_3e53c8:
    // 0x3e53c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e53cc:
    // 0x3e53cc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e53ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e53d0:
    // 0x3e53d0: 0xc0f9588  jal         func_3E5620
label_3e53d4:
    if (ctx->pc == 0x3E53D4u) {
        ctx->pc = 0x3E53D4u;
            // 0x3e53d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E53D8u;
        goto label_3e53d8;
    }
    ctx->pc = 0x3E53D0u;
    SET_GPR_U32(ctx, 31, 0x3E53D8u);
    ctx->pc = 0x3E53D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53D0u;
            // 0x3e53d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5620u;
    if (runtime->hasFunction(0x3E5620u)) {
        auto targetFn = runtime->lookupFunction(0x3E5620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53D8u; }
        if (ctx->pc != 0x3E53D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5620_0x3e5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53D8u; }
        if (ctx->pc != 0x3E53D8u) { return; }
    }
    ctx->pc = 0x3E53D8u;
label_3e53d8:
    // 0x3e53d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e53dc:
    // 0x3e53dc: 0xc0f0d18  jal         func_3C3460
label_3e53e0:
    if (ctx->pc == 0x3E53E0u) {
        ctx->pc = 0x3E53E0u;
            // 0x3e53e0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E53E4u;
        goto label_3e53e4;
    }
    ctx->pc = 0x3E53DCu;
    SET_GPR_U32(ctx, 31, 0x3E53E4u);
    ctx->pc = 0x3E53E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53DCu;
            // 0x3e53e0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53E4u; }
        if (ctx->pc != 0x3E53E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E53E4u; }
        if (ctx->pc != 0x3E53E4u) { return; }
    }
    ctx->pc = 0x3E53E4u;
label_3e53e4:
    // 0x3e53e4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3e53e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e53e8:
    // 0x3e53e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e53ec:
    if (ctx->pc == 0x3E53ECu) {
        ctx->pc = 0x3E53F0u;
        goto label_3e53f0;
    }
    ctx->pc = 0x3E53E8u;
    {
        const bool branch_taken_0x3e53e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e53e8) {
            ctx->pc = 0x3E5400u;
            goto label_3e5400;
        }
    }
    ctx->pc = 0x3E53F0u;
label_3e53f0:
    // 0x3e53f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e53f4:
    // 0x3e53f4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3e53f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3e53f8:
    // 0x3e53f8: 0xc0f9584  jal         func_3E5610
label_3e53fc:
    if (ctx->pc == 0x3E53FCu) {
        ctx->pc = 0x3E53FCu;
            // 0x3e53fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5400u;
        goto label_3e5400;
    }
    ctx->pc = 0x3E53F8u;
    SET_GPR_U32(ctx, 31, 0x3E5400u);
    ctx->pc = 0x3E53FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E53F8u;
            // 0x3e53fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5610u;
    if (runtime->hasFunction(0x3E5610u)) {
        auto targetFn = runtime->lookupFunction(0x3E5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5400u; }
        if (ctx->pc != 0x3E5400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5610_0x3e5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5400u; }
        if (ctx->pc != 0x3E5400u) { return; }
    }
    ctx->pc = 0x3E5400u;
label_3e5400:
    // 0x3e5400: 0xc0775b0  jal         func_1DD6C0
label_3e5404:
    if (ctx->pc == 0x3E5404u) {
        ctx->pc = 0x3E5408u;
        goto label_3e5408;
    }
    ctx->pc = 0x3E5400u;
    SET_GPR_U32(ctx, 31, 0x3E5408u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5408u; }
        if (ctx->pc != 0x3E5408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5408u; }
        if (ctx->pc != 0x3E5408u) { return; }
    }
    ctx->pc = 0x3E5408u;
label_3e5408:
    // 0x3e5408: 0xc0775ac  jal         func_1DD6B0
label_3e540c:
    if (ctx->pc == 0x3E540Cu) {
        ctx->pc = 0x3E540Cu;
            // 0x3e540c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5410u;
        goto label_3e5410;
    }
    ctx->pc = 0x3E5408u;
    SET_GPR_U32(ctx, 31, 0x3E5410u);
    ctx->pc = 0x3E540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5408u;
            // 0x3e540c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5410u; }
        if (ctx->pc != 0x3E5410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5410u; }
        if (ctx->pc != 0x3E5410u) { return; }
    }
    ctx->pc = 0x3E5410u;
label_3e5410:
    // 0x3e5410: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e5410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e5414:
    // 0x3e5414: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
label_3e5418:
    if (ctx->pc == 0x3E5418u) {
        ctx->pc = 0x3E541Cu;
        goto label_3e541c;
    }
    ctx->pc = 0x3E5414u;
    {
        const bool branch_taken_0x3e5414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5414) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E541Cu;
label_3e541c:
    // 0x3e541c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5420:
    // 0x3e5420: 0xc0dc47c  jal         func_3711F0
label_3e5424:
    if (ctx->pc == 0x3E5424u) {
        ctx->pc = 0x3E5424u;
            // 0x3e5424: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E5428u;
        goto label_3e5428;
    }
    ctx->pc = 0x3E5420u;
    SET_GPR_U32(ctx, 31, 0x3E5428u);
    ctx->pc = 0x3E5424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5420u;
            // 0x3e5424: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5428u; }
        if (ctx->pc != 0x3E5428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5428u; }
        if (ctx->pc != 0x3E5428u) { return; }
    }
    ctx->pc = 0x3E5428u;
label_3e5428:
    // 0x3e5428: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e542c:
    // 0x3e542c: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
label_3e5430:
    if (ctx->pc == 0x3E5430u) {
        ctx->pc = 0x3E5434u;
        goto label_3e5434;
    }
    ctx->pc = 0x3E542Cu;
    {
        const bool branch_taken_0x3e542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e542c) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E5434u;
label_3e5434:
    // 0x3e5434: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3e5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e5438:
    // 0x3e5438: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e543c:
    if (ctx->pc == 0x3E543Cu) {
        ctx->pc = 0x3E543Cu;
            // 0x3e543c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5440u;
        goto label_3e5440;
    }
    ctx->pc = 0x3E5438u;
    {
        const bool branch_taken_0x3e5438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5438) {
            ctx->pc = 0x3E543Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5438u;
            // 0x3e543c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E5458u;
            goto label_3e5458;
        }
    }
    ctx->pc = 0x3E5440u;
label_3e5440:
    // 0x3e5440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5444:
    // 0x3e5444: 0xc0f8ffc  jal         func_3E3FF0
label_3e5448:
    if (ctx->pc == 0x3E5448u) {
        ctx->pc = 0x3E5448u;
            // 0x3e5448: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3E544Cu;
        goto label_3e544c;
    }
    ctx->pc = 0x3E5444u;
    SET_GPR_U32(ctx, 31, 0x3E544Cu);
    ctx->pc = 0x3E5448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5444u;
            // 0x3e5448: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E544Cu; }
        if (ctx->pc != 0x3E544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E544Cu; }
        if (ctx->pc != 0x3E544Cu) { return; }
    }
    ctx->pc = 0x3E544Cu;
label_3e544c:
    // 0x3e544c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e5450:
    if (ctx->pc == 0x3E5450u) {
        ctx->pc = 0x3E5450u;
            // 0x3e5450: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3E5454u;
        goto label_3e5454;
    }
    ctx->pc = 0x3E544Cu;
    {
        const bool branch_taken_0x3e544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E544Cu;
            // 0x3e5450: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e544c) {
            ctx->pc = 0x3E5464u;
            goto label_3e5464;
        }
    }
    ctx->pc = 0x3E5454u;
label_3e5454:
    // 0x3e5454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5458:
    // 0x3e5458: 0xc0f8ffc  jal         func_3E3FF0
label_3e545c:
    if (ctx->pc == 0x3E545Cu) {
        ctx->pc = 0x3E545Cu;
            // 0x3e545c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x3E5460u;
        goto label_3e5460;
    }
    ctx->pc = 0x3E5458u;
    SET_GPR_U32(ctx, 31, 0x3E5460u);
    ctx->pc = 0x3E545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5458u;
            // 0x3e545c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5460u; }
        if (ctx->pc != 0x3E5460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5460u; }
        if (ctx->pc != 0x3E5460u) { return; }
    }
    ctx->pc = 0x3E5460u;
label_3e5460:
    // 0x3e5460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e5460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e5464:
    // 0x3e5464: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3e5468:
    if (ctx->pc == 0x3E5468u) {
        ctx->pc = 0x3E5468u;
            // 0x3e5468: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->pc = 0x3E546Cu;
        goto label_3e546c;
    }
    ctx->pc = 0x3E5464u;
    {
        const bool branch_taken_0x3e5464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5464u;
            // 0x3e5468: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5464) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E546Cu;
label_3e546c:
    // 0x3e546c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5470:
    // 0x3e5470: 0xc0ae0e4  jal         func_2B8390
label_3e5474:
    if (ctx->pc == 0x3E5474u) {
        ctx->pc = 0x3E5474u;
            // 0x3e5474: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E5478u;
        goto label_3e5478;
    }
    ctx->pc = 0x3E5470u;
    SET_GPR_U32(ctx, 31, 0x3E5478u);
    ctx->pc = 0x3E5474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5470u;
            // 0x3e5474: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5478u; }
        if (ctx->pc != 0x3E5478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5478u; }
        if (ctx->pc != 0x3E5478u) { return; }
    }
    ctx->pc = 0x3E5478u;
label_3e5478:
    // 0x3e5478: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3e5478u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3e547c:
    // 0x3e547c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e547cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5480:
    // 0x3e5480: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e5480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e5484:
    // 0x3e5484: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x3e5484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3e5488:
    // 0x3e5488: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x3e5488u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3e548c:
    // 0x3e548c: 0xc077574  jal         func_1DD5D0
label_3e5490:
    if (ctx->pc == 0x3E5490u) {
        ctx->pc = 0x3E5490u;
            // 0x3e5490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5494u;
        goto label_3e5494;
    }
    ctx->pc = 0x3E548Cu;
    SET_GPR_U32(ctx, 31, 0x3E5494u);
    ctx->pc = 0x3E5490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E548Cu;
            // 0x3e5490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5494u; }
        if (ctx->pc != 0x3E5494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5494u; }
        if (ctx->pc != 0x3E5494u) { return; }
    }
    ctx->pc = 0x3E5494u;
label_3e5494:
    // 0x3e5494: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3e5494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e5498:
    // 0x3e5498: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_3e549c:
    if (ctx->pc == 0x3E549Cu) {
        ctx->pc = 0x3E54A0u;
        goto label_3e54a0;
    }
    ctx->pc = 0x3E5498u;
    {
        const bool branch_taken_0x3e5498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e5498) {
            ctx->pc = 0x3E54B8u;
            goto label_3e54b8;
        }
    }
    ctx->pc = 0x3E54A0u;
label_3e54a0:
    // 0x3e54a0: 0xc077570  jal         func_1DD5C0
label_3e54a4:
    if (ctx->pc == 0x3E54A4u) {
        ctx->pc = 0x3E54A4u;
            // 0x3e54a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E54A8u;
        goto label_3e54a8;
    }
    ctx->pc = 0x3E54A0u;
    SET_GPR_U32(ctx, 31, 0x3E54A8u);
    ctx->pc = 0x3E54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54A0u;
            // 0x3e54a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54A8u; }
        if (ctx->pc != 0x3E54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54A8u; }
        if (ctx->pc != 0x3E54A8u) { return; }
    }
    ctx->pc = 0x3E54A8u;
label_3e54a8:
    // 0x3e54a8: 0xc0f95a0  jal         func_3E5680
label_3e54ac:
    if (ctx->pc == 0x3E54ACu) {
        ctx->pc = 0x3E54ACu;
            // 0x3e54ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E54B0u;
        goto label_3e54b0;
    }
    ctx->pc = 0x3E54A8u;
    SET_GPR_U32(ctx, 31, 0x3E54B0u);
    ctx->pc = 0x3E54ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54A8u;
            // 0x3e54ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5680u;
    if (runtime->hasFunction(0x3E5680u)) {
        auto targetFn = runtime->lookupFunction(0x3E5680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54B0u; }
        if (ctx->pc != 0x3E54B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5680_0x3e5680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54B0u; }
        if (ctx->pc != 0x3E54B0u) { return; }
    }
    ctx->pc = 0x3E54B0u;
label_3e54b0:
    // 0x3e54b0: 0xc0f959c  jal         func_3E5670
label_3e54b4:
    if (ctx->pc == 0x3E54B4u) {
        ctx->pc = 0x3E54B4u;
            // 0x3e54b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E54B8u;
        goto label_3e54b8;
    }
    ctx->pc = 0x3E54B0u;
    SET_GPR_U32(ctx, 31, 0x3E54B8u);
    ctx->pc = 0x3E54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54B0u;
            // 0x3e54b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5670u;
    if (runtime->hasFunction(0x3E5670u)) {
        auto targetFn = runtime->lookupFunction(0x3E5670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54B8u; }
        if (ctx->pc != 0x3E54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5670_0x3e5670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54B8u; }
        if (ctx->pc != 0x3E54B8u) { return; }
    }
    ctx->pc = 0x3E54B8u;
label_3e54b8:
    // 0x3e54b8: 0xc077570  jal         func_1DD5C0
label_3e54bc:
    if (ctx->pc == 0x3E54BCu) {
        ctx->pc = 0x3E54BCu;
            // 0x3e54bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E54C0u;
        goto label_3e54c0;
    }
    ctx->pc = 0x3E54B8u;
    SET_GPR_U32(ctx, 31, 0x3E54C0u);
    ctx->pc = 0x3E54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54B8u;
            // 0x3e54bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54C0u; }
        if (ctx->pc != 0x3E54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54C0u; }
        if (ctx->pc != 0x3E54C0u) { return; }
    }
    ctx->pc = 0x3E54C0u;
label_3e54c0:
    // 0x3e54c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e54c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e54c4:
    // 0x3e54c4: 0xc0f0e7c  jal         func_3C39F0
label_3e54c8:
    if (ctx->pc == 0x3E54C8u) {
        ctx->pc = 0x3E54C8u;
            // 0x3e54c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E54CCu;
        goto label_3e54cc;
    }
    ctx->pc = 0x3E54C4u;
    SET_GPR_U32(ctx, 31, 0x3E54CCu);
    ctx->pc = 0x3E54C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54C4u;
            // 0x3e54c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C39F0u;
    if (runtime->hasFunction(0x3C39F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C39F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54CCu; }
        if (ctx->pc != 0x3E54CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C39F0_0x3c39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54CCu; }
        if (ctx->pc != 0x3E54CCu) { return; }
    }
    ctx->pc = 0x3E54CCu;
label_3e54cc:
    // 0x3e54cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e54ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e54d0:
    // 0x3e54d0: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x3e54d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3e54d4:
    // 0x3e54d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3e54d8:
    if (ctx->pc == 0x3E54D8u) {
        ctx->pc = 0x3E54D8u;
            // 0x3e54d8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E54DCu;
        goto label_3e54dc;
    }
    ctx->pc = 0x3E54D4u;
    {
        const bool branch_taken_0x3e54d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54D4u;
            // 0x3e54d8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e54d4) {
            ctx->pc = 0x3E5488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e5488;
        }
    }
    ctx->pc = 0x3E54DCu;
label_3e54dc:
    // 0x3e54dc: 0xc0f9598  jal         func_3E5660
label_3e54e0:
    if (ctx->pc == 0x3E54E0u) {
        ctx->pc = 0x3E54E4u;
        goto label_3e54e4;
    }
    ctx->pc = 0x3E54DCu;
    SET_GPR_U32(ctx, 31, 0x3E54E4u);
    ctx->pc = 0x3E5660u;
    if (runtime->hasFunction(0x3E5660u)) {
        auto targetFn = runtime->lookupFunction(0x3E5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54E4u; }
        if (ctx->pc != 0x3E54E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5660_0x3e5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54E4u; }
        if (ctx->pc != 0x3E54E4u) { return; }
    }
    ctx->pc = 0x3E54E4u;
label_3e54e4:
    // 0x3e54e4: 0xc109d50  jal         func_427540
label_3e54e8:
    if (ctx->pc == 0x3E54E8u) {
        ctx->pc = 0x3E54E8u;
            // 0x3e54e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E54ECu;
        goto label_3e54ec;
    }
    ctx->pc = 0x3E54E4u;
    SET_GPR_U32(ctx, 31, 0x3E54ECu);
    ctx->pc = 0x3E54E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E54E4u;
            // 0x3e54e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x427540u;
    if (runtime->hasFunction(0x427540u)) {
        auto targetFn = runtime->lookupFunction(0x427540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54ECu; }
        if (ctx->pc != 0x3E54ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00427540_0x427540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54ECu; }
        if (ctx->pc != 0x3E54ECu) { return; }
    }
    ctx->pc = 0x3E54ECu;
label_3e54ec:
    // 0x3e54ec: 0xc0f9594  jal         func_3E5650
label_3e54f0:
    if (ctx->pc == 0x3E54F0u) {
        ctx->pc = 0x3E54F4u;
        goto label_3e54f4;
    }
    ctx->pc = 0x3E54ECu;
    SET_GPR_U32(ctx, 31, 0x3E54F4u);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54F4u; }
        if (ctx->pc != 0x3E54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E54F4u; }
        if (ctx->pc != 0x3E54F4u) { return; }
    }
    ctx->pc = 0x3E54F4u;
label_3e54f4:
    // 0x3e54f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e54f8:
    if (ctx->pc == 0x3E54F8u) {
        ctx->pc = 0x3E54FCu;
        goto label_3e54fc;
    }
    ctx->pc = 0x3E54F4u;
    {
        const bool branch_taken_0x3e54f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e54f4) {
            ctx->pc = 0x3E5510u;
            goto label_3e5510;
        }
    }
    ctx->pc = 0x3E54FCu;
label_3e54fc:
    // 0x3e54fc: 0xc0f9594  jal         func_3E5650
label_3e5500:
    if (ctx->pc == 0x3E5500u) {
        ctx->pc = 0x3E5504u;
        goto label_3e5504;
    }
    ctx->pc = 0x3E54FCu;
    SET_GPR_U32(ctx, 31, 0x3E5504u);
    ctx->pc = 0x3E5650u;
    if (runtime->hasFunction(0x3E5650u)) {
        auto targetFn = runtime->lookupFunction(0x3E5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5504u; }
        if (ctx->pc != 0x3E5504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5650_0x3e5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5504u; }
        if (ctx->pc != 0x3E5504u) { return; }
    }
    ctx->pc = 0x3E5504u;
label_3e5504:
    // 0x3e5504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e5504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5508:
    // 0x3e5508: 0xc0f9590  jal         func_3E5640
label_3e550c:
    if (ctx->pc == 0x3E550Cu) {
        ctx->pc = 0x3E550Cu;
            // 0x3e550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5510u;
        goto label_3e5510;
    }
    ctx->pc = 0x3E5508u;
    SET_GPR_U32(ctx, 31, 0x3E5510u);
    ctx->pc = 0x3E550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5508u;
            // 0x3e550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5640u;
    if (runtime->hasFunction(0x3E5640u)) {
        auto targetFn = runtime->lookupFunction(0x3E5640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5510u; }
        if (ctx->pc != 0x3E5510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5640_0x3e5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5510u; }
        if (ctx->pc != 0x3E5510u) { return; }
    }
    ctx->pc = 0x3E5510u;
label_3e5510:
    // 0x3e5510: 0xc0f958c  jal         func_3E5630
label_3e5514:
    if (ctx->pc == 0x3E5514u) {
        ctx->pc = 0x3E5518u;
        goto label_3e5518;
    }
    ctx->pc = 0x3E5510u;
    SET_GPR_U32(ctx, 31, 0x3E5518u);
    ctx->pc = 0x3E5630u;
    if (runtime->hasFunction(0x3E5630u)) {
        auto targetFn = runtime->lookupFunction(0x3E5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5518u; }
        if (ctx->pc != 0x3E5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5630_0x3e5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5518u; }
        if (ctx->pc != 0x3E5518u) { return; }
    }
    ctx->pc = 0x3E5518u;
label_3e5518:
    // 0x3e5518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e5518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e551c:
    // 0x3e551c: 0xc10e6ec  jal         func_439BB0
label_3e5520:
    if (ctx->pc == 0x3E5520u) {
        ctx->pc = 0x3E5520u;
            // 0x3e5520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5524u;
        goto label_3e5524;
    }
    ctx->pc = 0x3E551Cu;
    SET_GPR_U32(ctx, 31, 0x3E5524u);
    ctx->pc = 0x3E5520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E551Cu;
            // 0x3e5520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439BB0u;
    if (runtime->hasFunction(0x439BB0u)) {
        auto targetFn = runtime->lookupFunction(0x439BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5524u; }
        if (ctx->pc != 0x3E5524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439BB0_0x439bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5524u; }
        if (ctx->pc != 0x3E5524u) { return; }
    }
    ctx->pc = 0x3E5524u;
label_3e5524:
    // 0x3e5524: 0xc10e6ac  jal         func_439AB0
label_3e5528:
    if (ctx->pc == 0x3E5528u) {
        ctx->pc = 0x3E5528u;
            // 0x3e5528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E552Cu;
        goto label_3e552c;
    }
    ctx->pc = 0x3E5524u;
    SET_GPR_U32(ctx, 31, 0x3E552Cu);
    ctx->pc = 0x3E5528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5524u;
            // 0x3e5528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439AB0u;
    if (runtime->hasFunction(0x439AB0u)) {
        auto targetFn = runtime->lookupFunction(0x439AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E552Cu; }
        if (ctx->pc != 0x3E552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439AB0_0x439ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E552Cu; }
        if (ctx->pc != 0x3E552Cu) { return; }
    }
    ctx->pc = 0x3E552Cu;
label_3e552c:
    // 0x3e552c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e5530:
    // 0x3e5530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5534:
    // 0x3e5534: 0xae02027c  sw          $v0, 0x27C($s0)
    ctx->pc = 0x3e5534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_3e5538:
    // 0x3e5538: 0xc0f8ffc  jal         func_3E3FF0
label_3e553c:
    if (ctx->pc == 0x3E553Cu) {
        ctx->pc = 0x3E553Cu;
            // 0x3e553c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E5540u;
        goto label_3e5540;
    }
    ctx->pc = 0x3E5538u;
    SET_GPR_U32(ctx, 31, 0x3E5540u);
    ctx->pc = 0x3E553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5538u;
            // 0x3e553c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5540u; }
        if (ctx->pc != 0x3E5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5540u; }
        if (ctx->pc != 0x3E5540u) { return; }
    }
    ctx->pc = 0x3E5540u;
label_3e5540:
    // 0x3e5540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5544:
    // 0x3e5544: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3e5544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3e5548:
    // 0x3e5548: 0xc0f9588  jal         func_3E5620
label_3e554c:
    if (ctx->pc == 0x3E554Cu) {
        ctx->pc = 0x3E554Cu;
            // 0x3e554c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5550u;
        goto label_3e5550;
    }
    ctx->pc = 0x3E5548u;
    SET_GPR_U32(ctx, 31, 0x3E5550u);
    ctx->pc = 0x3E554Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5548u;
            // 0x3e554c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5620u;
    if (runtime->hasFunction(0x3E5620u)) {
        auto targetFn = runtime->lookupFunction(0x3E5620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5550u; }
        if (ctx->pc != 0x3E5550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5620_0x3e5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5550u; }
        if (ctx->pc != 0x3E5550u) { return; }
    }
    ctx->pc = 0x3E5550u;
label_3e5550:
    // 0x3e5550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5554:
    // 0x3e5554: 0xc0f0d18  jal         func_3C3460
label_3e5558:
    if (ctx->pc == 0x3E5558u) {
        ctx->pc = 0x3E5558u;
            // 0x3e5558: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E555Cu;
        goto label_3e555c;
    }
    ctx->pc = 0x3E5554u;
    SET_GPR_U32(ctx, 31, 0x3E555Cu);
    ctx->pc = 0x3E5558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5554u;
            // 0x3e5558: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E555Cu; }
        if (ctx->pc != 0x3E555Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E555Cu; }
        if (ctx->pc != 0x3E555Cu) { return; }
    }
    ctx->pc = 0x3E555Cu;
label_3e555c:
    // 0x3e555c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3e555cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3e5560:
    // 0x3e5560: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e5564:
    if (ctx->pc == 0x3E5564u) {
        ctx->pc = 0x3E5568u;
        goto label_3e5568;
    }
    ctx->pc = 0x3E5560u;
    {
        const bool branch_taken_0x3e5560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5560) {
            ctx->pc = 0x3E5578u;
            goto label_3e5578;
        }
    }
    ctx->pc = 0x3E5568u;
label_3e5568:
    // 0x3e5568: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e556c:
    // 0x3e556c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3e556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3e5570:
    // 0x3e5570: 0xc0f9584  jal         func_3E5610
label_3e5574:
    if (ctx->pc == 0x3E5574u) {
        ctx->pc = 0x3E5574u;
            // 0x3e5574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E5578u;
        goto label_3e5578;
    }
    ctx->pc = 0x3E5570u;
    SET_GPR_U32(ctx, 31, 0x3E5578u);
    ctx->pc = 0x3E5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5570u;
            // 0x3e5574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E5610u;
    if (runtime->hasFunction(0x3E5610u)) {
        auto targetFn = runtime->lookupFunction(0x3E5610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5578u; }
        if (ctx->pc != 0x3E5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E5610_0x3e5610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5578u; }
        if (ctx->pc != 0x3E5578u) { return; }
    }
    ctx->pc = 0x3E5578u;
label_3e5578:
    // 0x3e5578: 0xc0775b0  jal         func_1DD6C0
label_3e557c:
    if (ctx->pc == 0x3E557Cu) {
        ctx->pc = 0x3E5580u;
        goto label_3e5580;
    }
    ctx->pc = 0x3E5578u;
    SET_GPR_U32(ctx, 31, 0x3E5580u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5580u; }
        if (ctx->pc != 0x3E5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5580u; }
        if (ctx->pc != 0x3E5580u) { return; }
    }
    ctx->pc = 0x3E5580u;
label_3e5580:
    // 0x3e5580: 0xc0775ac  jal         func_1DD6B0
label_3e5584:
    if (ctx->pc == 0x3E5584u) {
        ctx->pc = 0x3E5584u;
            // 0x3e5584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E5588u;
        goto label_3e5588;
    }
    ctx->pc = 0x3E5580u;
    SET_GPR_U32(ctx, 31, 0x3E5588u);
    ctx->pc = 0x3E5584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5580u;
            // 0x3e5584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5588u; }
        if (ctx->pc != 0x3E5588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E5588u; }
        if (ctx->pc != 0x3E5588u) { return; }
    }
    ctx->pc = 0x3E5588u;
label_3e5588:
    // 0x3e5588: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3e5588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3e558c:
    // 0x3e558c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_3e5590:
    if (ctx->pc == 0x3E5590u) {
        ctx->pc = 0x3E5594u;
        goto label_3e5594;
    }
    ctx->pc = 0x3E558Cu;
    {
        const bool branch_taken_0x3e558c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e558c) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E5594u;
label_3e5594:
    // 0x3e5594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e5598:
    // 0x3e5598: 0xc0dc47c  jal         func_3711F0
label_3e559c:
    if (ctx->pc == 0x3E559Cu) {
        ctx->pc = 0x3E559Cu;
            // 0x3e559c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3E55A0u;
        goto label_3e55a0;
    }
    ctx->pc = 0x3E5598u;
    SET_GPR_U32(ctx, 31, 0x3E55A0u);
    ctx->pc = 0x3E559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5598u;
            // 0x3e559c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3711F0u;
    if (runtime->hasFunction(0x3711F0u)) {
        auto targetFn = runtime->lookupFunction(0x3711F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55A0u; }
        if (ctx->pc != 0x3E55A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003711F0_0x3711f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55A0u; }
        if (ctx->pc != 0x3E55A0u) { return; }
    }
    ctx->pc = 0x3E55A0u;
label_3e55a0:
    // 0x3e55a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e55a4:
    // 0x3e55a4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_3e55a8:
    if (ctx->pc == 0x3E55A8u) {
        ctx->pc = 0x3E55ACu;
        goto label_3e55ac;
    }
    ctx->pc = 0x3E55A4u;
    {
        const bool branch_taken_0x3e55a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e55a4) {
            ctx->pc = 0x3E55E0u;
            goto label_3e55e0;
        }
    }
    ctx->pc = 0x3E55ACu;
label_3e55ac:
    // 0x3e55ac: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3e55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3e55b0:
    // 0x3e55b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e55b4:
    if (ctx->pc == 0x3E55B4u) {
        ctx->pc = 0x3E55B4u;
            // 0x3e55b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E55B8u;
        goto label_3e55b8;
    }
    ctx->pc = 0x3E55B0u;
    {
        const bool branch_taken_0x3e55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e55b0) {
            ctx->pc = 0x3E55B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E55B0u;
            // 0x3e55b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E55D0u;
            goto label_3e55d0;
        }
    }
    ctx->pc = 0x3E55B8u;
label_3e55b8:
    // 0x3e55b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e55b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e55bc:
    // 0x3e55bc: 0xc0f8ffc  jal         func_3E3FF0
label_3e55c0:
    if (ctx->pc == 0x3E55C0u) {
        ctx->pc = 0x3E55C0u;
            // 0x3e55c0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3E55C4u;
        goto label_3e55c4;
    }
    ctx->pc = 0x3E55BCu;
    SET_GPR_U32(ctx, 31, 0x3E55C4u);
    ctx->pc = 0x3E55C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E55BCu;
            // 0x3e55c0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55C4u; }
        if (ctx->pc != 0x3E55C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55C4u; }
        if (ctx->pc != 0x3E55C4u) { return; }
    }
    ctx->pc = 0x3E55C4u;
label_3e55c4:
    // 0x3e55c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e55c8:
    if (ctx->pc == 0x3E55C8u) {
        ctx->pc = 0x3E55C8u;
            // 0x3e55c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3E55CCu;
        goto label_3e55cc;
    }
    ctx->pc = 0x3E55C4u;
    {
        const bool branch_taken_0x3e55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E55C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E55C4u;
            // 0x3e55c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e55c4) {
            ctx->pc = 0x3E55DCu;
            goto label_3e55dc;
        }
    }
    ctx->pc = 0x3E55CCu;
label_3e55cc:
    // 0x3e55cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e55ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e55d0:
    // 0x3e55d0: 0xc0f8ffc  jal         func_3E3FF0
label_3e55d4:
    if (ctx->pc == 0x3E55D4u) {
        ctx->pc = 0x3E55D4u;
            // 0x3e55d4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x3E55D8u;
        goto label_3e55d8;
    }
    ctx->pc = 0x3E55D0u;
    SET_GPR_U32(ctx, 31, 0x3E55D8u);
    ctx->pc = 0x3E55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E55D0u;
            // 0x3e55d4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E3FF0u;
    if (runtime->hasFunction(0x3E3FF0u)) {
        auto targetFn = runtime->lookupFunction(0x3E3FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55D8u; }
        if (ctx->pc != 0x3E55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E3FF0_0x3e3ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E55D8u; }
        if (ctx->pc != 0x3E55D8u) { return; }
    }
    ctx->pc = 0x3E55D8u;
label_3e55d8:
    // 0x3e55d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e55dc:
    // 0x3e55dc: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x3e55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_3e55e0:
    // 0x3e55e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e55e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3e55e4:
    // 0x3e55e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e55e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e55e8:
    // 0x3e55e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e55e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e55ec:
    // 0x3e55ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e55ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e55f0:
    // 0x3e55f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e55f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e55f4:
    // 0x3e55f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e55f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e55f8:
    // 0x3e55f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e55f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e55fc:
    // 0x3e55fc: 0x3e00008  jr          $ra
label_3e5600:
    if (ctx->pc == 0x3E5600u) {
        ctx->pc = 0x3E5600u;
            // 0x3e5600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3E5604u;
        goto label_3e5604;
    }
    ctx->pc = 0x3E55FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E55FCu;
            // 0x3e5600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5604u;
label_3e5604:
    // 0x3e5604: 0x0  nop
    ctx->pc = 0x3e5604u;
    // NOP
label_3e5608:
    // 0x3e5608: 0x0  nop
    ctx->pc = 0x3e5608u;
    // NOP
label_3e560c:
    // 0x3e560c: 0x0  nop
    ctx->pc = 0x3e560cu;
    // NOP
}
