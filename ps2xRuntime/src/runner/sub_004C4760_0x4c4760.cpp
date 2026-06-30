#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C4760
// Address: 0x4c4760 - 0x4c5330
void sub_004C4760_0x4c4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4760_0x4c4760");
#endif

    switch (ctx->pc) {
        case 0x4c4760u: goto label_4c4760;
        case 0x4c4764u: goto label_4c4764;
        case 0x4c4768u: goto label_4c4768;
        case 0x4c476cu: goto label_4c476c;
        case 0x4c4770u: goto label_4c4770;
        case 0x4c4774u: goto label_4c4774;
        case 0x4c4778u: goto label_4c4778;
        case 0x4c477cu: goto label_4c477c;
        case 0x4c4780u: goto label_4c4780;
        case 0x4c4784u: goto label_4c4784;
        case 0x4c4788u: goto label_4c4788;
        case 0x4c478cu: goto label_4c478c;
        case 0x4c4790u: goto label_4c4790;
        case 0x4c4794u: goto label_4c4794;
        case 0x4c4798u: goto label_4c4798;
        case 0x4c479cu: goto label_4c479c;
        case 0x4c47a0u: goto label_4c47a0;
        case 0x4c47a4u: goto label_4c47a4;
        case 0x4c47a8u: goto label_4c47a8;
        case 0x4c47acu: goto label_4c47ac;
        case 0x4c47b0u: goto label_4c47b0;
        case 0x4c47b4u: goto label_4c47b4;
        case 0x4c47b8u: goto label_4c47b8;
        case 0x4c47bcu: goto label_4c47bc;
        case 0x4c47c0u: goto label_4c47c0;
        case 0x4c47c4u: goto label_4c47c4;
        case 0x4c47c8u: goto label_4c47c8;
        case 0x4c47ccu: goto label_4c47cc;
        case 0x4c47d0u: goto label_4c47d0;
        case 0x4c47d4u: goto label_4c47d4;
        case 0x4c47d8u: goto label_4c47d8;
        case 0x4c47dcu: goto label_4c47dc;
        case 0x4c47e0u: goto label_4c47e0;
        case 0x4c47e4u: goto label_4c47e4;
        case 0x4c47e8u: goto label_4c47e8;
        case 0x4c47ecu: goto label_4c47ec;
        case 0x4c47f0u: goto label_4c47f0;
        case 0x4c47f4u: goto label_4c47f4;
        case 0x4c47f8u: goto label_4c47f8;
        case 0x4c47fcu: goto label_4c47fc;
        case 0x4c4800u: goto label_4c4800;
        case 0x4c4804u: goto label_4c4804;
        case 0x4c4808u: goto label_4c4808;
        case 0x4c480cu: goto label_4c480c;
        case 0x4c4810u: goto label_4c4810;
        case 0x4c4814u: goto label_4c4814;
        case 0x4c4818u: goto label_4c4818;
        case 0x4c481cu: goto label_4c481c;
        case 0x4c4820u: goto label_4c4820;
        case 0x4c4824u: goto label_4c4824;
        case 0x4c4828u: goto label_4c4828;
        case 0x4c482cu: goto label_4c482c;
        case 0x4c4830u: goto label_4c4830;
        case 0x4c4834u: goto label_4c4834;
        case 0x4c4838u: goto label_4c4838;
        case 0x4c483cu: goto label_4c483c;
        case 0x4c4840u: goto label_4c4840;
        case 0x4c4844u: goto label_4c4844;
        case 0x4c4848u: goto label_4c4848;
        case 0x4c484cu: goto label_4c484c;
        case 0x4c4850u: goto label_4c4850;
        case 0x4c4854u: goto label_4c4854;
        case 0x4c4858u: goto label_4c4858;
        case 0x4c485cu: goto label_4c485c;
        case 0x4c4860u: goto label_4c4860;
        case 0x4c4864u: goto label_4c4864;
        case 0x4c4868u: goto label_4c4868;
        case 0x4c486cu: goto label_4c486c;
        case 0x4c4870u: goto label_4c4870;
        case 0x4c4874u: goto label_4c4874;
        case 0x4c4878u: goto label_4c4878;
        case 0x4c487cu: goto label_4c487c;
        case 0x4c4880u: goto label_4c4880;
        case 0x4c4884u: goto label_4c4884;
        case 0x4c4888u: goto label_4c4888;
        case 0x4c488cu: goto label_4c488c;
        case 0x4c4890u: goto label_4c4890;
        case 0x4c4894u: goto label_4c4894;
        case 0x4c4898u: goto label_4c4898;
        case 0x4c489cu: goto label_4c489c;
        case 0x4c48a0u: goto label_4c48a0;
        case 0x4c48a4u: goto label_4c48a4;
        case 0x4c48a8u: goto label_4c48a8;
        case 0x4c48acu: goto label_4c48ac;
        case 0x4c48b0u: goto label_4c48b0;
        case 0x4c48b4u: goto label_4c48b4;
        case 0x4c48b8u: goto label_4c48b8;
        case 0x4c48bcu: goto label_4c48bc;
        case 0x4c48c0u: goto label_4c48c0;
        case 0x4c48c4u: goto label_4c48c4;
        case 0x4c48c8u: goto label_4c48c8;
        case 0x4c48ccu: goto label_4c48cc;
        case 0x4c48d0u: goto label_4c48d0;
        case 0x4c48d4u: goto label_4c48d4;
        case 0x4c48d8u: goto label_4c48d8;
        case 0x4c48dcu: goto label_4c48dc;
        case 0x4c48e0u: goto label_4c48e0;
        case 0x4c48e4u: goto label_4c48e4;
        case 0x4c48e8u: goto label_4c48e8;
        case 0x4c48ecu: goto label_4c48ec;
        case 0x4c48f0u: goto label_4c48f0;
        case 0x4c48f4u: goto label_4c48f4;
        case 0x4c48f8u: goto label_4c48f8;
        case 0x4c48fcu: goto label_4c48fc;
        case 0x4c4900u: goto label_4c4900;
        case 0x4c4904u: goto label_4c4904;
        case 0x4c4908u: goto label_4c4908;
        case 0x4c490cu: goto label_4c490c;
        case 0x4c4910u: goto label_4c4910;
        case 0x4c4914u: goto label_4c4914;
        case 0x4c4918u: goto label_4c4918;
        case 0x4c491cu: goto label_4c491c;
        case 0x4c4920u: goto label_4c4920;
        case 0x4c4924u: goto label_4c4924;
        case 0x4c4928u: goto label_4c4928;
        case 0x4c492cu: goto label_4c492c;
        case 0x4c4930u: goto label_4c4930;
        case 0x4c4934u: goto label_4c4934;
        case 0x4c4938u: goto label_4c4938;
        case 0x4c493cu: goto label_4c493c;
        case 0x4c4940u: goto label_4c4940;
        case 0x4c4944u: goto label_4c4944;
        case 0x4c4948u: goto label_4c4948;
        case 0x4c494cu: goto label_4c494c;
        case 0x4c4950u: goto label_4c4950;
        case 0x4c4954u: goto label_4c4954;
        case 0x4c4958u: goto label_4c4958;
        case 0x4c495cu: goto label_4c495c;
        case 0x4c4960u: goto label_4c4960;
        case 0x4c4964u: goto label_4c4964;
        case 0x4c4968u: goto label_4c4968;
        case 0x4c496cu: goto label_4c496c;
        case 0x4c4970u: goto label_4c4970;
        case 0x4c4974u: goto label_4c4974;
        case 0x4c4978u: goto label_4c4978;
        case 0x4c497cu: goto label_4c497c;
        case 0x4c4980u: goto label_4c4980;
        case 0x4c4984u: goto label_4c4984;
        case 0x4c4988u: goto label_4c4988;
        case 0x4c498cu: goto label_4c498c;
        case 0x4c4990u: goto label_4c4990;
        case 0x4c4994u: goto label_4c4994;
        case 0x4c4998u: goto label_4c4998;
        case 0x4c499cu: goto label_4c499c;
        case 0x4c49a0u: goto label_4c49a0;
        case 0x4c49a4u: goto label_4c49a4;
        case 0x4c49a8u: goto label_4c49a8;
        case 0x4c49acu: goto label_4c49ac;
        case 0x4c49b0u: goto label_4c49b0;
        case 0x4c49b4u: goto label_4c49b4;
        case 0x4c49b8u: goto label_4c49b8;
        case 0x4c49bcu: goto label_4c49bc;
        case 0x4c49c0u: goto label_4c49c0;
        case 0x4c49c4u: goto label_4c49c4;
        case 0x4c49c8u: goto label_4c49c8;
        case 0x4c49ccu: goto label_4c49cc;
        case 0x4c49d0u: goto label_4c49d0;
        case 0x4c49d4u: goto label_4c49d4;
        case 0x4c49d8u: goto label_4c49d8;
        case 0x4c49dcu: goto label_4c49dc;
        case 0x4c49e0u: goto label_4c49e0;
        case 0x4c49e4u: goto label_4c49e4;
        case 0x4c49e8u: goto label_4c49e8;
        case 0x4c49ecu: goto label_4c49ec;
        case 0x4c49f0u: goto label_4c49f0;
        case 0x4c49f4u: goto label_4c49f4;
        case 0x4c49f8u: goto label_4c49f8;
        case 0x4c49fcu: goto label_4c49fc;
        case 0x4c4a00u: goto label_4c4a00;
        case 0x4c4a04u: goto label_4c4a04;
        case 0x4c4a08u: goto label_4c4a08;
        case 0x4c4a0cu: goto label_4c4a0c;
        case 0x4c4a10u: goto label_4c4a10;
        case 0x4c4a14u: goto label_4c4a14;
        case 0x4c4a18u: goto label_4c4a18;
        case 0x4c4a1cu: goto label_4c4a1c;
        case 0x4c4a20u: goto label_4c4a20;
        case 0x4c4a24u: goto label_4c4a24;
        case 0x4c4a28u: goto label_4c4a28;
        case 0x4c4a2cu: goto label_4c4a2c;
        case 0x4c4a30u: goto label_4c4a30;
        case 0x4c4a34u: goto label_4c4a34;
        case 0x4c4a38u: goto label_4c4a38;
        case 0x4c4a3cu: goto label_4c4a3c;
        case 0x4c4a40u: goto label_4c4a40;
        case 0x4c4a44u: goto label_4c4a44;
        case 0x4c4a48u: goto label_4c4a48;
        case 0x4c4a4cu: goto label_4c4a4c;
        case 0x4c4a50u: goto label_4c4a50;
        case 0x4c4a54u: goto label_4c4a54;
        case 0x4c4a58u: goto label_4c4a58;
        case 0x4c4a5cu: goto label_4c4a5c;
        case 0x4c4a60u: goto label_4c4a60;
        case 0x4c4a64u: goto label_4c4a64;
        case 0x4c4a68u: goto label_4c4a68;
        case 0x4c4a6cu: goto label_4c4a6c;
        case 0x4c4a70u: goto label_4c4a70;
        case 0x4c4a74u: goto label_4c4a74;
        case 0x4c4a78u: goto label_4c4a78;
        case 0x4c4a7cu: goto label_4c4a7c;
        case 0x4c4a80u: goto label_4c4a80;
        case 0x4c4a84u: goto label_4c4a84;
        case 0x4c4a88u: goto label_4c4a88;
        case 0x4c4a8cu: goto label_4c4a8c;
        case 0x4c4a90u: goto label_4c4a90;
        case 0x4c4a94u: goto label_4c4a94;
        case 0x4c4a98u: goto label_4c4a98;
        case 0x4c4a9cu: goto label_4c4a9c;
        case 0x4c4aa0u: goto label_4c4aa0;
        case 0x4c4aa4u: goto label_4c4aa4;
        case 0x4c4aa8u: goto label_4c4aa8;
        case 0x4c4aacu: goto label_4c4aac;
        case 0x4c4ab0u: goto label_4c4ab0;
        case 0x4c4ab4u: goto label_4c4ab4;
        case 0x4c4ab8u: goto label_4c4ab8;
        case 0x4c4abcu: goto label_4c4abc;
        case 0x4c4ac0u: goto label_4c4ac0;
        case 0x4c4ac4u: goto label_4c4ac4;
        case 0x4c4ac8u: goto label_4c4ac8;
        case 0x4c4accu: goto label_4c4acc;
        case 0x4c4ad0u: goto label_4c4ad0;
        case 0x4c4ad4u: goto label_4c4ad4;
        case 0x4c4ad8u: goto label_4c4ad8;
        case 0x4c4adcu: goto label_4c4adc;
        case 0x4c4ae0u: goto label_4c4ae0;
        case 0x4c4ae4u: goto label_4c4ae4;
        case 0x4c4ae8u: goto label_4c4ae8;
        case 0x4c4aecu: goto label_4c4aec;
        case 0x4c4af0u: goto label_4c4af0;
        case 0x4c4af4u: goto label_4c4af4;
        case 0x4c4af8u: goto label_4c4af8;
        case 0x4c4afcu: goto label_4c4afc;
        case 0x4c4b00u: goto label_4c4b00;
        case 0x4c4b04u: goto label_4c4b04;
        case 0x4c4b08u: goto label_4c4b08;
        case 0x4c4b0cu: goto label_4c4b0c;
        case 0x4c4b10u: goto label_4c4b10;
        case 0x4c4b14u: goto label_4c4b14;
        case 0x4c4b18u: goto label_4c4b18;
        case 0x4c4b1cu: goto label_4c4b1c;
        case 0x4c4b20u: goto label_4c4b20;
        case 0x4c4b24u: goto label_4c4b24;
        case 0x4c4b28u: goto label_4c4b28;
        case 0x4c4b2cu: goto label_4c4b2c;
        case 0x4c4b30u: goto label_4c4b30;
        case 0x4c4b34u: goto label_4c4b34;
        case 0x4c4b38u: goto label_4c4b38;
        case 0x4c4b3cu: goto label_4c4b3c;
        case 0x4c4b40u: goto label_4c4b40;
        case 0x4c4b44u: goto label_4c4b44;
        case 0x4c4b48u: goto label_4c4b48;
        case 0x4c4b4cu: goto label_4c4b4c;
        case 0x4c4b50u: goto label_4c4b50;
        case 0x4c4b54u: goto label_4c4b54;
        case 0x4c4b58u: goto label_4c4b58;
        case 0x4c4b5cu: goto label_4c4b5c;
        case 0x4c4b60u: goto label_4c4b60;
        case 0x4c4b64u: goto label_4c4b64;
        case 0x4c4b68u: goto label_4c4b68;
        case 0x4c4b6cu: goto label_4c4b6c;
        case 0x4c4b70u: goto label_4c4b70;
        case 0x4c4b74u: goto label_4c4b74;
        case 0x4c4b78u: goto label_4c4b78;
        case 0x4c4b7cu: goto label_4c4b7c;
        case 0x4c4b80u: goto label_4c4b80;
        case 0x4c4b84u: goto label_4c4b84;
        case 0x4c4b88u: goto label_4c4b88;
        case 0x4c4b8cu: goto label_4c4b8c;
        case 0x4c4b90u: goto label_4c4b90;
        case 0x4c4b94u: goto label_4c4b94;
        case 0x4c4b98u: goto label_4c4b98;
        case 0x4c4b9cu: goto label_4c4b9c;
        case 0x4c4ba0u: goto label_4c4ba0;
        case 0x4c4ba4u: goto label_4c4ba4;
        case 0x4c4ba8u: goto label_4c4ba8;
        case 0x4c4bacu: goto label_4c4bac;
        case 0x4c4bb0u: goto label_4c4bb0;
        case 0x4c4bb4u: goto label_4c4bb4;
        case 0x4c4bb8u: goto label_4c4bb8;
        case 0x4c4bbcu: goto label_4c4bbc;
        case 0x4c4bc0u: goto label_4c4bc0;
        case 0x4c4bc4u: goto label_4c4bc4;
        case 0x4c4bc8u: goto label_4c4bc8;
        case 0x4c4bccu: goto label_4c4bcc;
        case 0x4c4bd0u: goto label_4c4bd0;
        case 0x4c4bd4u: goto label_4c4bd4;
        case 0x4c4bd8u: goto label_4c4bd8;
        case 0x4c4bdcu: goto label_4c4bdc;
        case 0x4c4be0u: goto label_4c4be0;
        case 0x4c4be4u: goto label_4c4be4;
        case 0x4c4be8u: goto label_4c4be8;
        case 0x4c4becu: goto label_4c4bec;
        case 0x4c4bf0u: goto label_4c4bf0;
        case 0x4c4bf4u: goto label_4c4bf4;
        case 0x4c4bf8u: goto label_4c4bf8;
        case 0x4c4bfcu: goto label_4c4bfc;
        case 0x4c4c00u: goto label_4c4c00;
        case 0x4c4c04u: goto label_4c4c04;
        case 0x4c4c08u: goto label_4c4c08;
        case 0x4c4c0cu: goto label_4c4c0c;
        case 0x4c4c10u: goto label_4c4c10;
        case 0x4c4c14u: goto label_4c4c14;
        case 0x4c4c18u: goto label_4c4c18;
        case 0x4c4c1cu: goto label_4c4c1c;
        case 0x4c4c20u: goto label_4c4c20;
        case 0x4c4c24u: goto label_4c4c24;
        case 0x4c4c28u: goto label_4c4c28;
        case 0x4c4c2cu: goto label_4c4c2c;
        case 0x4c4c30u: goto label_4c4c30;
        case 0x4c4c34u: goto label_4c4c34;
        case 0x4c4c38u: goto label_4c4c38;
        case 0x4c4c3cu: goto label_4c4c3c;
        case 0x4c4c40u: goto label_4c4c40;
        case 0x4c4c44u: goto label_4c4c44;
        case 0x4c4c48u: goto label_4c4c48;
        case 0x4c4c4cu: goto label_4c4c4c;
        case 0x4c4c50u: goto label_4c4c50;
        case 0x4c4c54u: goto label_4c4c54;
        case 0x4c4c58u: goto label_4c4c58;
        case 0x4c4c5cu: goto label_4c4c5c;
        case 0x4c4c60u: goto label_4c4c60;
        case 0x4c4c64u: goto label_4c4c64;
        case 0x4c4c68u: goto label_4c4c68;
        case 0x4c4c6cu: goto label_4c4c6c;
        case 0x4c4c70u: goto label_4c4c70;
        case 0x4c4c74u: goto label_4c4c74;
        case 0x4c4c78u: goto label_4c4c78;
        case 0x4c4c7cu: goto label_4c4c7c;
        case 0x4c4c80u: goto label_4c4c80;
        case 0x4c4c84u: goto label_4c4c84;
        case 0x4c4c88u: goto label_4c4c88;
        case 0x4c4c8cu: goto label_4c4c8c;
        case 0x4c4c90u: goto label_4c4c90;
        case 0x4c4c94u: goto label_4c4c94;
        case 0x4c4c98u: goto label_4c4c98;
        case 0x4c4c9cu: goto label_4c4c9c;
        case 0x4c4ca0u: goto label_4c4ca0;
        case 0x4c4ca4u: goto label_4c4ca4;
        case 0x4c4ca8u: goto label_4c4ca8;
        case 0x4c4cacu: goto label_4c4cac;
        case 0x4c4cb0u: goto label_4c4cb0;
        case 0x4c4cb4u: goto label_4c4cb4;
        case 0x4c4cb8u: goto label_4c4cb8;
        case 0x4c4cbcu: goto label_4c4cbc;
        case 0x4c4cc0u: goto label_4c4cc0;
        case 0x4c4cc4u: goto label_4c4cc4;
        case 0x4c4cc8u: goto label_4c4cc8;
        case 0x4c4cccu: goto label_4c4ccc;
        case 0x4c4cd0u: goto label_4c4cd0;
        case 0x4c4cd4u: goto label_4c4cd4;
        case 0x4c4cd8u: goto label_4c4cd8;
        case 0x4c4cdcu: goto label_4c4cdc;
        case 0x4c4ce0u: goto label_4c4ce0;
        case 0x4c4ce4u: goto label_4c4ce4;
        case 0x4c4ce8u: goto label_4c4ce8;
        case 0x4c4cecu: goto label_4c4cec;
        case 0x4c4cf0u: goto label_4c4cf0;
        case 0x4c4cf4u: goto label_4c4cf4;
        case 0x4c4cf8u: goto label_4c4cf8;
        case 0x4c4cfcu: goto label_4c4cfc;
        case 0x4c4d00u: goto label_4c4d00;
        case 0x4c4d04u: goto label_4c4d04;
        case 0x4c4d08u: goto label_4c4d08;
        case 0x4c4d0cu: goto label_4c4d0c;
        case 0x4c4d10u: goto label_4c4d10;
        case 0x4c4d14u: goto label_4c4d14;
        case 0x4c4d18u: goto label_4c4d18;
        case 0x4c4d1cu: goto label_4c4d1c;
        case 0x4c4d20u: goto label_4c4d20;
        case 0x4c4d24u: goto label_4c4d24;
        case 0x4c4d28u: goto label_4c4d28;
        case 0x4c4d2cu: goto label_4c4d2c;
        case 0x4c4d30u: goto label_4c4d30;
        case 0x4c4d34u: goto label_4c4d34;
        case 0x4c4d38u: goto label_4c4d38;
        case 0x4c4d3cu: goto label_4c4d3c;
        case 0x4c4d40u: goto label_4c4d40;
        case 0x4c4d44u: goto label_4c4d44;
        case 0x4c4d48u: goto label_4c4d48;
        case 0x4c4d4cu: goto label_4c4d4c;
        case 0x4c4d50u: goto label_4c4d50;
        case 0x4c4d54u: goto label_4c4d54;
        case 0x4c4d58u: goto label_4c4d58;
        case 0x4c4d5cu: goto label_4c4d5c;
        case 0x4c4d60u: goto label_4c4d60;
        case 0x4c4d64u: goto label_4c4d64;
        case 0x4c4d68u: goto label_4c4d68;
        case 0x4c4d6cu: goto label_4c4d6c;
        case 0x4c4d70u: goto label_4c4d70;
        case 0x4c4d74u: goto label_4c4d74;
        case 0x4c4d78u: goto label_4c4d78;
        case 0x4c4d7cu: goto label_4c4d7c;
        case 0x4c4d80u: goto label_4c4d80;
        case 0x4c4d84u: goto label_4c4d84;
        case 0x4c4d88u: goto label_4c4d88;
        case 0x4c4d8cu: goto label_4c4d8c;
        case 0x4c4d90u: goto label_4c4d90;
        case 0x4c4d94u: goto label_4c4d94;
        case 0x4c4d98u: goto label_4c4d98;
        case 0x4c4d9cu: goto label_4c4d9c;
        case 0x4c4da0u: goto label_4c4da0;
        case 0x4c4da4u: goto label_4c4da4;
        case 0x4c4da8u: goto label_4c4da8;
        case 0x4c4dacu: goto label_4c4dac;
        case 0x4c4db0u: goto label_4c4db0;
        case 0x4c4db4u: goto label_4c4db4;
        case 0x4c4db8u: goto label_4c4db8;
        case 0x4c4dbcu: goto label_4c4dbc;
        case 0x4c4dc0u: goto label_4c4dc0;
        case 0x4c4dc4u: goto label_4c4dc4;
        case 0x4c4dc8u: goto label_4c4dc8;
        case 0x4c4dccu: goto label_4c4dcc;
        case 0x4c4dd0u: goto label_4c4dd0;
        case 0x4c4dd4u: goto label_4c4dd4;
        case 0x4c4dd8u: goto label_4c4dd8;
        case 0x4c4ddcu: goto label_4c4ddc;
        case 0x4c4de0u: goto label_4c4de0;
        case 0x4c4de4u: goto label_4c4de4;
        case 0x4c4de8u: goto label_4c4de8;
        case 0x4c4decu: goto label_4c4dec;
        case 0x4c4df0u: goto label_4c4df0;
        case 0x4c4df4u: goto label_4c4df4;
        case 0x4c4df8u: goto label_4c4df8;
        case 0x4c4dfcu: goto label_4c4dfc;
        case 0x4c4e00u: goto label_4c4e00;
        case 0x4c4e04u: goto label_4c4e04;
        case 0x4c4e08u: goto label_4c4e08;
        case 0x4c4e0cu: goto label_4c4e0c;
        case 0x4c4e10u: goto label_4c4e10;
        case 0x4c4e14u: goto label_4c4e14;
        case 0x4c4e18u: goto label_4c4e18;
        case 0x4c4e1cu: goto label_4c4e1c;
        case 0x4c4e20u: goto label_4c4e20;
        case 0x4c4e24u: goto label_4c4e24;
        case 0x4c4e28u: goto label_4c4e28;
        case 0x4c4e2cu: goto label_4c4e2c;
        case 0x4c4e30u: goto label_4c4e30;
        case 0x4c4e34u: goto label_4c4e34;
        case 0x4c4e38u: goto label_4c4e38;
        case 0x4c4e3cu: goto label_4c4e3c;
        case 0x4c4e40u: goto label_4c4e40;
        case 0x4c4e44u: goto label_4c4e44;
        case 0x4c4e48u: goto label_4c4e48;
        case 0x4c4e4cu: goto label_4c4e4c;
        case 0x4c4e50u: goto label_4c4e50;
        case 0x4c4e54u: goto label_4c4e54;
        case 0x4c4e58u: goto label_4c4e58;
        case 0x4c4e5cu: goto label_4c4e5c;
        case 0x4c4e60u: goto label_4c4e60;
        case 0x4c4e64u: goto label_4c4e64;
        case 0x4c4e68u: goto label_4c4e68;
        case 0x4c4e6cu: goto label_4c4e6c;
        case 0x4c4e70u: goto label_4c4e70;
        case 0x4c4e74u: goto label_4c4e74;
        case 0x4c4e78u: goto label_4c4e78;
        case 0x4c4e7cu: goto label_4c4e7c;
        case 0x4c4e80u: goto label_4c4e80;
        case 0x4c4e84u: goto label_4c4e84;
        case 0x4c4e88u: goto label_4c4e88;
        case 0x4c4e8cu: goto label_4c4e8c;
        case 0x4c4e90u: goto label_4c4e90;
        case 0x4c4e94u: goto label_4c4e94;
        case 0x4c4e98u: goto label_4c4e98;
        case 0x4c4e9cu: goto label_4c4e9c;
        case 0x4c4ea0u: goto label_4c4ea0;
        case 0x4c4ea4u: goto label_4c4ea4;
        case 0x4c4ea8u: goto label_4c4ea8;
        case 0x4c4eacu: goto label_4c4eac;
        case 0x4c4eb0u: goto label_4c4eb0;
        case 0x4c4eb4u: goto label_4c4eb4;
        case 0x4c4eb8u: goto label_4c4eb8;
        case 0x4c4ebcu: goto label_4c4ebc;
        case 0x4c4ec0u: goto label_4c4ec0;
        case 0x4c4ec4u: goto label_4c4ec4;
        case 0x4c4ec8u: goto label_4c4ec8;
        case 0x4c4eccu: goto label_4c4ecc;
        case 0x4c4ed0u: goto label_4c4ed0;
        case 0x4c4ed4u: goto label_4c4ed4;
        case 0x4c4ed8u: goto label_4c4ed8;
        case 0x4c4edcu: goto label_4c4edc;
        case 0x4c4ee0u: goto label_4c4ee0;
        case 0x4c4ee4u: goto label_4c4ee4;
        case 0x4c4ee8u: goto label_4c4ee8;
        case 0x4c4eecu: goto label_4c4eec;
        case 0x4c4ef0u: goto label_4c4ef0;
        case 0x4c4ef4u: goto label_4c4ef4;
        case 0x4c4ef8u: goto label_4c4ef8;
        case 0x4c4efcu: goto label_4c4efc;
        case 0x4c4f00u: goto label_4c4f00;
        case 0x4c4f04u: goto label_4c4f04;
        case 0x4c4f08u: goto label_4c4f08;
        case 0x4c4f0cu: goto label_4c4f0c;
        case 0x4c4f10u: goto label_4c4f10;
        case 0x4c4f14u: goto label_4c4f14;
        case 0x4c4f18u: goto label_4c4f18;
        case 0x4c4f1cu: goto label_4c4f1c;
        case 0x4c4f20u: goto label_4c4f20;
        case 0x4c4f24u: goto label_4c4f24;
        case 0x4c4f28u: goto label_4c4f28;
        case 0x4c4f2cu: goto label_4c4f2c;
        case 0x4c4f30u: goto label_4c4f30;
        case 0x4c4f34u: goto label_4c4f34;
        case 0x4c4f38u: goto label_4c4f38;
        case 0x4c4f3cu: goto label_4c4f3c;
        case 0x4c4f40u: goto label_4c4f40;
        case 0x4c4f44u: goto label_4c4f44;
        case 0x4c4f48u: goto label_4c4f48;
        case 0x4c4f4cu: goto label_4c4f4c;
        case 0x4c4f50u: goto label_4c4f50;
        case 0x4c4f54u: goto label_4c4f54;
        case 0x4c4f58u: goto label_4c4f58;
        case 0x4c4f5cu: goto label_4c4f5c;
        case 0x4c4f60u: goto label_4c4f60;
        case 0x4c4f64u: goto label_4c4f64;
        case 0x4c4f68u: goto label_4c4f68;
        case 0x4c4f6cu: goto label_4c4f6c;
        case 0x4c4f70u: goto label_4c4f70;
        case 0x4c4f74u: goto label_4c4f74;
        case 0x4c4f78u: goto label_4c4f78;
        case 0x4c4f7cu: goto label_4c4f7c;
        case 0x4c4f80u: goto label_4c4f80;
        case 0x4c4f84u: goto label_4c4f84;
        case 0x4c4f88u: goto label_4c4f88;
        case 0x4c4f8cu: goto label_4c4f8c;
        case 0x4c4f90u: goto label_4c4f90;
        case 0x4c4f94u: goto label_4c4f94;
        case 0x4c4f98u: goto label_4c4f98;
        case 0x4c4f9cu: goto label_4c4f9c;
        case 0x4c4fa0u: goto label_4c4fa0;
        case 0x4c4fa4u: goto label_4c4fa4;
        case 0x4c4fa8u: goto label_4c4fa8;
        case 0x4c4facu: goto label_4c4fac;
        case 0x4c4fb0u: goto label_4c4fb0;
        case 0x4c4fb4u: goto label_4c4fb4;
        case 0x4c4fb8u: goto label_4c4fb8;
        case 0x4c4fbcu: goto label_4c4fbc;
        case 0x4c4fc0u: goto label_4c4fc0;
        case 0x4c4fc4u: goto label_4c4fc4;
        case 0x4c4fc8u: goto label_4c4fc8;
        case 0x4c4fccu: goto label_4c4fcc;
        case 0x4c4fd0u: goto label_4c4fd0;
        case 0x4c4fd4u: goto label_4c4fd4;
        case 0x4c4fd8u: goto label_4c4fd8;
        case 0x4c4fdcu: goto label_4c4fdc;
        case 0x4c4fe0u: goto label_4c4fe0;
        case 0x4c4fe4u: goto label_4c4fe4;
        case 0x4c4fe8u: goto label_4c4fe8;
        case 0x4c4fecu: goto label_4c4fec;
        case 0x4c4ff0u: goto label_4c4ff0;
        case 0x4c4ff4u: goto label_4c4ff4;
        case 0x4c4ff8u: goto label_4c4ff8;
        case 0x4c4ffcu: goto label_4c4ffc;
        case 0x4c5000u: goto label_4c5000;
        case 0x4c5004u: goto label_4c5004;
        case 0x4c5008u: goto label_4c5008;
        case 0x4c500cu: goto label_4c500c;
        case 0x4c5010u: goto label_4c5010;
        case 0x4c5014u: goto label_4c5014;
        case 0x4c5018u: goto label_4c5018;
        case 0x4c501cu: goto label_4c501c;
        case 0x4c5020u: goto label_4c5020;
        case 0x4c5024u: goto label_4c5024;
        case 0x4c5028u: goto label_4c5028;
        case 0x4c502cu: goto label_4c502c;
        case 0x4c5030u: goto label_4c5030;
        case 0x4c5034u: goto label_4c5034;
        case 0x4c5038u: goto label_4c5038;
        case 0x4c503cu: goto label_4c503c;
        case 0x4c5040u: goto label_4c5040;
        case 0x4c5044u: goto label_4c5044;
        case 0x4c5048u: goto label_4c5048;
        case 0x4c504cu: goto label_4c504c;
        case 0x4c5050u: goto label_4c5050;
        case 0x4c5054u: goto label_4c5054;
        case 0x4c5058u: goto label_4c5058;
        case 0x4c505cu: goto label_4c505c;
        case 0x4c5060u: goto label_4c5060;
        case 0x4c5064u: goto label_4c5064;
        case 0x4c5068u: goto label_4c5068;
        case 0x4c506cu: goto label_4c506c;
        case 0x4c5070u: goto label_4c5070;
        case 0x4c5074u: goto label_4c5074;
        case 0x4c5078u: goto label_4c5078;
        case 0x4c507cu: goto label_4c507c;
        case 0x4c5080u: goto label_4c5080;
        case 0x4c5084u: goto label_4c5084;
        case 0x4c5088u: goto label_4c5088;
        case 0x4c508cu: goto label_4c508c;
        case 0x4c5090u: goto label_4c5090;
        case 0x4c5094u: goto label_4c5094;
        case 0x4c5098u: goto label_4c5098;
        case 0x4c509cu: goto label_4c509c;
        case 0x4c50a0u: goto label_4c50a0;
        case 0x4c50a4u: goto label_4c50a4;
        case 0x4c50a8u: goto label_4c50a8;
        case 0x4c50acu: goto label_4c50ac;
        case 0x4c50b0u: goto label_4c50b0;
        case 0x4c50b4u: goto label_4c50b4;
        case 0x4c50b8u: goto label_4c50b8;
        case 0x4c50bcu: goto label_4c50bc;
        case 0x4c50c0u: goto label_4c50c0;
        case 0x4c50c4u: goto label_4c50c4;
        case 0x4c50c8u: goto label_4c50c8;
        case 0x4c50ccu: goto label_4c50cc;
        case 0x4c50d0u: goto label_4c50d0;
        case 0x4c50d4u: goto label_4c50d4;
        case 0x4c50d8u: goto label_4c50d8;
        case 0x4c50dcu: goto label_4c50dc;
        case 0x4c50e0u: goto label_4c50e0;
        case 0x4c50e4u: goto label_4c50e4;
        case 0x4c50e8u: goto label_4c50e8;
        case 0x4c50ecu: goto label_4c50ec;
        case 0x4c50f0u: goto label_4c50f0;
        case 0x4c50f4u: goto label_4c50f4;
        case 0x4c50f8u: goto label_4c50f8;
        case 0x4c50fcu: goto label_4c50fc;
        case 0x4c5100u: goto label_4c5100;
        case 0x4c5104u: goto label_4c5104;
        case 0x4c5108u: goto label_4c5108;
        case 0x4c510cu: goto label_4c510c;
        case 0x4c5110u: goto label_4c5110;
        case 0x4c5114u: goto label_4c5114;
        case 0x4c5118u: goto label_4c5118;
        case 0x4c511cu: goto label_4c511c;
        case 0x4c5120u: goto label_4c5120;
        case 0x4c5124u: goto label_4c5124;
        case 0x4c5128u: goto label_4c5128;
        case 0x4c512cu: goto label_4c512c;
        case 0x4c5130u: goto label_4c5130;
        case 0x4c5134u: goto label_4c5134;
        case 0x4c5138u: goto label_4c5138;
        case 0x4c513cu: goto label_4c513c;
        case 0x4c5140u: goto label_4c5140;
        case 0x4c5144u: goto label_4c5144;
        case 0x4c5148u: goto label_4c5148;
        case 0x4c514cu: goto label_4c514c;
        case 0x4c5150u: goto label_4c5150;
        case 0x4c5154u: goto label_4c5154;
        case 0x4c5158u: goto label_4c5158;
        case 0x4c515cu: goto label_4c515c;
        case 0x4c5160u: goto label_4c5160;
        case 0x4c5164u: goto label_4c5164;
        case 0x4c5168u: goto label_4c5168;
        case 0x4c516cu: goto label_4c516c;
        case 0x4c5170u: goto label_4c5170;
        case 0x4c5174u: goto label_4c5174;
        case 0x4c5178u: goto label_4c5178;
        case 0x4c517cu: goto label_4c517c;
        case 0x4c5180u: goto label_4c5180;
        case 0x4c5184u: goto label_4c5184;
        case 0x4c5188u: goto label_4c5188;
        case 0x4c518cu: goto label_4c518c;
        case 0x4c5190u: goto label_4c5190;
        case 0x4c5194u: goto label_4c5194;
        case 0x4c5198u: goto label_4c5198;
        case 0x4c519cu: goto label_4c519c;
        case 0x4c51a0u: goto label_4c51a0;
        case 0x4c51a4u: goto label_4c51a4;
        case 0x4c51a8u: goto label_4c51a8;
        case 0x4c51acu: goto label_4c51ac;
        case 0x4c51b0u: goto label_4c51b0;
        case 0x4c51b4u: goto label_4c51b4;
        case 0x4c51b8u: goto label_4c51b8;
        case 0x4c51bcu: goto label_4c51bc;
        case 0x4c51c0u: goto label_4c51c0;
        case 0x4c51c4u: goto label_4c51c4;
        case 0x4c51c8u: goto label_4c51c8;
        case 0x4c51ccu: goto label_4c51cc;
        case 0x4c51d0u: goto label_4c51d0;
        case 0x4c51d4u: goto label_4c51d4;
        case 0x4c51d8u: goto label_4c51d8;
        case 0x4c51dcu: goto label_4c51dc;
        case 0x4c51e0u: goto label_4c51e0;
        case 0x4c51e4u: goto label_4c51e4;
        case 0x4c51e8u: goto label_4c51e8;
        case 0x4c51ecu: goto label_4c51ec;
        case 0x4c51f0u: goto label_4c51f0;
        case 0x4c51f4u: goto label_4c51f4;
        case 0x4c51f8u: goto label_4c51f8;
        case 0x4c51fcu: goto label_4c51fc;
        case 0x4c5200u: goto label_4c5200;
        case 0x4c5204u: goto label_4c5204;
        case 0x4c5208u: goto label_4c5208;
        case 0x4c520cu: goto label_4c520c;
        case 0x4c5210u: goto label_4c5210;
        case 0x4c5214u: goto label_4c5214;
        case 0x4c5218u: goto label_4c5218;
        case 0x4c521cu: goto label_4c521c;
        case 0x4c5220u: goto label_4c5220;
        case 0x4c5224u: goto label_4c5224;
        case 0x4c5228u: goto label_4c5228;
        case 0x4c522cu: goto label_4c522c;
        case 0x4c5230u: goto label_4c5230;
        case 0x4c5234u: goto label_4c5234;
        case 0x4c5238u: goto label_4c5238;
        case 0x4c523cu: goto label_4c523c;
        case 0x4c5240u: goto label_4c5240;
        case 0x4c5244u: goto label_4c5244;
        case 0x4c5248u: goto label_4c5248;
        case 0x4c524cu: goto label_4c524c;
        case 0x4c5250u: goto label_4c5250;
        case 0x4c5254u: goto label_4c5254;
        case 0x4c5258u: goto label_4c5258;
        case 0x4c525cu: goto label_4c525c;
        case 0x4c5260u: goto label_4c5260;
        case 0x4c5264u: goto label_4c5264;
        case 0x4c5268u: goto label_4c5268;
        case 0x4c526cu: goto label_4c526c;
        case 0x4c5270u: goto label_4c5270;
        case 0x4c5274u: goto label_4c5274;
        case 0x4c5278u: goto label_4c5278;
        case 0x4c527cu: goto label_4c527c;
        case 0x4c5280u: goto label_4c5280;
        case 0x4c5284u: goto label_4c5284;
        case 0x4c5288u: goto label_4c5288;
        case 0x4c528cu: goto label_4c528c;
        case 0x4c5290u: goto label_4c5290;
        case 0x4c5294u: goto label_4c5294;
        case 0x4c5298u: goto label_4c5298;
        case 0x4c529cu: goto label_4c529c;
        case 0x4c52a0u: goto label_4c52a0;
        case 0x4c52a4u: goto label_4c52a4;
        case 0x4c52a8u: goto label_4c52a8;
        case 0x4c52acu: goto label_4c52ac;
        case 0x4c52b0u: goto label_4c52b0;
        case 0x4c52b4u: goto label_4c52b4;
        case 0x4c52b8u: goto label_4c52b8;
        case 0x4c52bcu: goto label_4c52bc;
        case 0x4c52c0u: goto label_4c52c0;
        case 0x4c52c4u: goto label_4c52c4;
        case 0x4c52c8u: goto label_4c52c8;
        case 0x4c52ccu: goto label_4c52cc;
        case 0x4c52d0u: goto label_4c52d0;
        case 0x4c52d4u: goto label_4c52d4;
        case 0x4c52d8u: goto label_4c52d8;
        case 0x4c52dcu: goto label_4c52dc;
        case 0x4c52e0u: goto label_4c52e0;
        case 0x4c52e4u: goto label_4c52e4;
        case 0x4c52e8u: goto label_4c52e8;
        case 0x4c52ecu: goto label_4c52ec;
        case 0x4c52f0u: goto label_4c52f0;
        case 0x4c52f4u: goto label_4c52f4;
        case 0x4c52f8u: goto label_4c52f8;
        case 0x4c52fcu: goto label_4c52fc;
        case 0x4c5300u: goto label_4c5300;
        case 0x4c5304u: goto label_4c5304;
        case 0x4c5308u: goto label_4c5308;
        case 0x4c530cu: goto label_4c530c;
        case 0x4c5310u: goto label_4c5310;
        case 0x4c5314u: goto label_4c5314;
        case 0x4c5318u: goto label_4c5318;
        case 0x4c531cu: goto label_4c531c;
        case 0x4c5320u: goto label_4c5320;
        case 0x4c5324u: goto label_4c5324;
        case 0x4c5328u: goto label_4c5328;
        case 0x4c532cu: goto label_4c532c;
        default: break;
    }

    ctx->pc = 0x4c4760u;

label_4c4760:
    // 0x4c4760: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4c4760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4c4764:
    // 0x4c4764: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4c4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4c4768:
    // 0x4c4768: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4c4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4c476c:
    // 0x4c476c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c4770:
    // 0x4c4770: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c4774:
    // 0x4c4774: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c4774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c4778:
    // 0x4c4778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c477c:
    // 0x4c477c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4c477cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c4780:
    // 0x4c4780: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c4784:
    // 0x4c4784: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x4c4784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c4788:
    // 0x4c4788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c478c:
    // 0x4c478c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4790:
    // 0x4c4790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c4790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c4794:
    // 0x4c4794: 0x285b004  sllv        $s6, $a1, $s4
    ctx->pc = 0x4c4794u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
label_4c4798:
    // 0x4c4798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c479c:
    // 0x4c479c: 0x2c02827  not         $a1, $s6
    ctx->pc = 0x4c479cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
label_4c47a0:
    // 0x4c47a0: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x4c47a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_4c47a4:
    // 0x4c47a4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4c47a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4c47a8:
    // 0x4c47a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4c47a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c47ac:
    // 0x4c47ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4c47acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c47b0:
    // 0x4c47b0: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x4c47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
label_4c47b4:
    // 0x4c47b4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4c47b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c47b8:
    // 0x4c47b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c47b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4c47bc:
    // 0x4c47bc: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x4c47bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_4c47c0:
    // 0x4c47c0: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4c47c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4c47c4:
    // 0x4c47c4: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_4c47c8:
    if (ctx->pc == 0x4C47C8u) {
        ctx->pc = 0x4C47C8u;
            // 0x4c47c8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C47CCu;
        goto label_4c47cc;
    }
    ctx->pc = 0x4C47C4u;
    {
        const bool branch_taken_0x4c47c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C47C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C47C4u;
            // 0x4c47c8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c47c4) {
            ctx->pc = 0x4C48CCu;
            goto label_4c48cc;
        }
    }
    ctx->pc = 0x4C47CCu;
label_4c47cc:
    // 0x4c47cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c47ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c47d0:
    // 0x4c47d0: 0xc04f278  jal         func_13C9E0
label_4c47d4:
    if (ctx->pc == 0x4C47D4u) {
        ctx->pc = 0x4C47D4u;
            // 0x4c47d4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4C47D8u;
        goto label_4c47d8;
    }
    ctx->pc = 0x4C47D0u;
    SET_GPR_U32(ctx, 31, 0x4C47D8u);
    ctx->pc = 0x4C47D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C47D0u;
            // 0x4c47d4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47D8u; }
        if (ctx->pc != 0x4C47D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47D8u; }
        if (ctx->pc != 0x4C47D8u) { return; }
    }
    ctx->pc = 0x4C47D8u;
label_4c47d8:
    // 0x4c47d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c47d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c47dc:
    // 0x4c47dc: 0xc04ce80  jal         func_133A00
label_4c47e0:
    if (ctx->pc == 0x4C47E0u) {
        ctx->pc = 0x4C47E0u;
            // 0x4c47e0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4C47E4u;
        goto label_4c47e4;
    }
    ctx->pc = 0x4C47DCu;
    SET_GPR_U32(ctx, 31, 0x4C47E4u);
    ctx->pc = 0x4C47E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C47DCu;
            // 0x4c47e0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47E4u; }
        if (ctx->pc != 0x4C47E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47E4u; }
        if (ctx->pc != 0x4C47E4u) { return; }
    }
    ctx->pc = 0x4C47E4u;
label_4c47e4:
    // 0x4c47e4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x4c47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_4c47e8:
    // 0x4c47e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4c47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4c47ec:
    // 0x4c47ec: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4c47ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4c47f0:
    // 0x4c47f0: 0xc0d4108  jal         func_350420
label_4c47f4:
    if (ctx->pc == 0x4C47F4u) {
        ctx->pc = 0x4C47F4u;
            // 0x4c47f4: 0x8eb70000  lw          $s7, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4C47F8u;
        goto label_4c47f8;
    }
    ctx->pc = 0x4C47F0u;
    SET_GPR_U32(ctx, 31, 0x4C47F8u);
    ctx->pc = 0x4C47F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C47F0u;
            // 0x4c47f4: 0x8eb70000  lw          $s7, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47F8u; }
        if (ctx->pc != 0x4C47F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C47F8u; }
        if (ctx->pc != 0x4C47F8u) { return; }
    }
    ctx->pc = 0x4C47F8u;
label_4c47f8:
    // 0x4c47f8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4c47f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c47fc:
    // 0x4c47fc: 0xc0d4104  jal         func_350410
label_4c4800:
    if (ctx->pc == 0x4C4800u) {
        ctx->pc = 0x4C4800u;
            // 0x4c4800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4804u;
        goto label_4c4804;
    }
    ctx->pc = 0x4C47FCu;
    SET_GPR_U32(ctx, 31, 0x4C4804u);
    ctx->pc = 0x4C4800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C47FCu;
            // 0x4c4800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4804u; }
        if (ctx->pc != 0x4C4804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4804u; }
        if (ctx->pc != 0x4C4804u) { return; }
    }
    ctx->pc = 0x4C4804u;
label_4c4804:
    // 0x4c4804: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4c4804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4808:
    // 0x4c4808: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4c4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4c480c:
    // 0x4c480c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c4810:
    // 0x4c4810: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c4810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c4814:
    // 0x4c4814: 0xc44c71f0  lwc1        $f12, 0x71F0($v0)
    ctx->pc = 0x4c4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c4818:
    // 0x4c4818: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4c4818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c481c:
    // 0x4c481c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c481cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4820:
    // 0x4c4820: 0xc0d40ac  jal         func_3502B0
label_4c4824:
    if (ctx->pc == 0x4C4824u) {
        ctx->pc = 0x4C4824u;
            // 0x4c4824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4828u;
        goto label_4c4828;
    }
    ctx->pc = 0x4C4820u;
    SET_GPR_U32(ctx, 31, 0x4C4828u);
    ctx->pc = 0x4C4824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4820u;
            // 0x4c4824: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4828u; }
        if (ctx->pc != 0x4C4828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4828u; }
        if (ctx->pc != 0x4C4828u) { return; }
    }
    ctx->pc = 0x4C4828u;
label_4c4828:
    // 0x4c4828: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x4c4828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_4c482c:
    // 0x4c482c: 0x28540002  slti        $s4, $v0, 0x2
    ctx->pc = 0x4c482cu;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c4830:
    // 0x4c4830: 0x2d41018  mult        $v0, $s6, $s4
    ctx->pc = 0x4c4830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c4834:
    // 0x4c4834: 0x2664004d  addiu       $a0, $s3, 0x4D
    ctx->pc = 0x4c4834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 77));
label_4c4838:
    // 0x4c4838: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x4c4838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_4c483c:
    // 0x4c483c: 0xc0d590c  jal         func_356430
label_4c4840:
    if (ctx->pc == 0x4C4840u) {
        ctx->pc = 0x4C4840u;
            // 0x4c4840: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x4C4844u;
        goto label_4c4844;
    }
    ctx->pc = 0x4C483Cu;
    SET_GPR_U32(ctx, 31, 0x4C4844u);
    ctx->pc = 0x4C4840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C483Cu;
            // 0x4c4840: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4844u; }
        if (ctx->pc != 0x4C4844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4844u; }
        if (ctx->pc != 0x4C4844u) { return; }
    }
    ctx->pc = 0x4C4844u;
label_4c4844:
    // 0x4c4844: 0x52800022  beql        $s4, $zero, . + 4 + (0x22 << 2)
label_4c4848:
    if (ctx->pc == 0x4C4848u) {
        ctx->pc = 0x4C4848u;
            // 0x4c4848: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4C484Cu;
        goto label_4c484c;
    }
    ctx->pc = 0x4C4844u;
    {
        const bool branch_taken_0x4c4844 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4844) {
            ctx->pc = 0x4C4848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4844u;
            // 0x4c4848: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C48D0u;
            goto label_4c48d0;
        }
    }
    ctx->pc = 0x4C484Cu;
label_4c484c:
    // 0x4c484c: 0x926200e8  lbu         $v0, 0xE8($s3)
    ctx->pc = 0x4c484cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 232)));
label_4c4850:
    // 0x4c4850: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c4854:
    if (ctx->pc == 0x4C4854u) {
        ctx->pc = 0x4C4854u;
            // 0x4c4854: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4C4858u;
        goto label_4c4858;
    }
    ctx->pc = 0x4C4850u;
    {
        const bool branch_taken_0x4c4850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4850u;
            // 0x4c4854: 0x8eb40000  lw          $s4, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4850) {
            ctx->pc = 0x4C4868u;
            goto label_4c4868;
        }
    }
    ctx->pc = 0x4C4858u;
label_4c4858:
    // 0x4c4858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c485c:
    // 0x4c485c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4860:
    // 0x4c4860: 0xc04cdd0  jal         func_133740
label_4c4864:
    if (ctx->pc == 0x4C4864u) {
        ctx->pc = 0x4C4864u;
            // 0x4c4864: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x4C4868u;
        goto label_4c4868;
    }
    ctx->pc = 0x4C4860u;
    SET_GPR_U32(ctx, 31, 0x4C4868u);
    ctx->pc = 0x4C4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4860u;
            // 0x4c4864: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4868u; }
        if (ctx->pc != 0x4C4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4868u; }
        if (ctx->pc != 0x4C4868u) { return; }
    }
    ctx->pc = 0x4C4868u;
label_4c4868:
    // 0x4c4868: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x4c4868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_4c486c:
    // 0x4c486c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4870:
    // 0x4c4870: 0xc04e4a4  jal         func_139290
label_4c4874:
    if (ctx->pc == 0x4C4874u) {
        ctx->pc = 0x4C4874u;
            // 0x4c4874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4878u;
        goto label_4c4878;
    }
    ctx->pc = 0x4C4870u;
    SET_GPR_U32(ctx, 31, 0x4C4878u);
    ctx->pc = 0x4C4874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4870u;
            // 0x4c4874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4878u; }
        if (ctx->pc != 0x4C4878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4878u; }
        if (ctx->pc != 0x4C4878u) { return; }
    }
    ctx->pc = 0x4C4878u;
label_4c4878:
    // 0x4c4878: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x4c4878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4c487c:
    // 0x4c487c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c487cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4880:
    // 0x4c4880: 0xc04cd60  jal         func_133580
label_4c4884:
    if (ctx->pc == 0x4C4884u) {
        ctx->pc = 0x4C4884u;
            // 0x4c4884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4888u;
        goto label_4c4888;
    }
    ctx->pc = 0x4C4880u;
    SET_GPR_U32(ctx, 31, 0x4C4888u);
    ctx->pc = 0x4C4884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4880u;
            // 0x4c4884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4888u; }
        if (ctx->pc != 0x4C4888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4888u; }
        if (ctx->pc != 0x4C4888u) { return; }
    }
    ctx->pc = 0x4C4888u;
label_4c4888:
    // 0x4c4888: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4c4888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c488c:
    // 0x4c488c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c488cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c4890:
    // 0x4c4890: 0x320f809  jalr        $t9
label_4c4894:
    if (ctx->pc == 0x4C4894u) {
        ctx->pc = 0x4C4894u;
            // 0x4c4894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4898u;
        goto label_4c4898;
    }
    ctx->pc = 0x4C4890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C4898u);
        ctx->pc = 0x4C4894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4890u;
            // 0x4c4894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C4898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C4898u; }
            if (ctx->pc != 0x4C4898u) { return; }
        }
        }
    }
    ctx->pc = 0x4C4898u;
label_4c4898:
    // 0x4c4898: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c4898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c489c:
    // 0x4c489c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c48a0:
    // 0x4c48a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c48a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c48a4:
    // 0x4c48a4: 0xc054fd4  jal         func_153F50
label_4c48a8:
    if (ctx->pc == 0x4C48A8u) {
        ctx->pc = 0x4C48A8u;
            // 0x4c48a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C48ACu;
        goto label_4c48ac;
    }
    ctx->pc = 0x4C48A4u;
    SET_GPR_U32(ctx, 31, 0x4C48ACu);
    ctx->pc = 0x4C48A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C48A4u;
            // 0x4c48a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48ACu; }
        if (ctx->pc != 0x4C48ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48ACu; }
        if (ctx->pc != 0x4C48ACu) { return; }
    }
    ctx->pc = 0x4C48ACu;
label_4c48ac:
    // 0x4c48ac: 0xc04e738  jal         func_139CE0
label_4c48b0:
    if (ctx->pc == 0x4C48B0u) {
        ctx->pc = 0x4C48B0u;
            // 0x4c48b0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4C48B4u;
        goto label_4c48b4;
    }
    ctx->pc = 0x4C48ACu;
    SET_GPR_U32(ctx, 31, 0x4C48B4u);
    ctx->pc = 0x4C48B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C48ACu;
            // 0x4c48b0: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48B4u; }
        if (ctx->pc != 0x4C48B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48B4u; }
        if (ctx->pc != 0x4C48B4u) { return; }
    }
    ctx->pc = 0x4C48B4u;
label_4c48b4:
    // 0x4c48b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4c48b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c48b8:
    // 0x4c48b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c48b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c48bc:
    // 0x4c48bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c48bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c48c0:
    // 0x4c48c0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4c48c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4c48c4:
    // 0x4c48c4: 0xc055234  jal         func_1548D0
label_4c48c8:
    if (ctx->pc == 0x4C48C8u) {
        ctx->pc = 0x4C48C8u;
            // 0x4c48c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4C48CCu;
        goto label_4c48cc;
    }
    ctx->pc = 0x4C48C4u;
    SET_GPR_U32(ctx, 31, 0x4C48CCu);
    ctx->pc = 0x4C48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C48C4u;
            // 0x4c48c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48CCu; }
        if (ctx->pc != 0x4C48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C48CCu; }
        if (ctx->pc != 0x4C48CCu) { return; }
    }
    ctx->pc = 0x4C48CCu;
label_4c48cc:
    // 0x4c48cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4c48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4c48d0:
    // 0x4c48d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4c48d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c48d4:
    // 0x4c48d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c48d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c48d8:
    // 0x4c48d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c48d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c48dc:
    // 0x4c48dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c48dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c48e0:
    // 0x4c48e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c48e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c48e4:
    // 0x4c48e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c48e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c48e8:
    // 0x4c48e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c48e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c48ec:
    // 0x4c48ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c48ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c48f0:
    // 0x4c48f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c48f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c48f4:
    // 0x4c48f4: 0x3e00008  jr          $ra
label_4c48f8:
    if (ctx->pc == 0x4C48F8u) {
        ctx->pc = 0x4C48F8u;
            // 0x4c48f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C48FCu;
        goto label_4c48fc;
    }
    ctx->pc = 0x4C48F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C48F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C48F4u;
            // 0x4c48f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C48FCu;
label_4c48fc:
    // 0x4c48fc: 0x0  nop
    ctx->pc = 0x4c48fcu;
    // NOP
label_4c4900:
    // 0x4c4900: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x4c4900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4c4904:
    // 0x4c4904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c4904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4908:
    // 0x4c4908: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4c490c:
    if (ctx->pc == 0x4C490Cu) {
        ctx->pc = 0x4C4910u;
        goto label_4c4910;
    }
    ctx->pc = 0x4C4908u;
    {
        const bool branch_taken_0x4c4908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c4908) {
            ctx->pc = 0x4C4918u;
            goto label_4c4918;
        }
    }
    ctx->pc = 0x4C4910u;
label_4c4910:
    // 0x4c4910: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_4c4914:
    if (ctx->pc == 0x4C4914u) {
        ctx->pc = 0x4C4914u;
            // 0x4c4914: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x4C4918u;
        goto label_4c4918;
    }
    ctx->pc = 0x4C4910u;
    {
        const bool branch_taken_0x4c4910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4910) {
            ctx->pc = 0x4C4914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4910u;
            // 0x4c4914: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4918u;
            goto label_4c4918;
        }
    }
    ctx->pc = 0x4C4918u;
label_4c4918:
    // 0x4c4918: 0x3e00008  jr          $ra
label_4c491c:
    if (ctx->pc == 0x4C491Cu) {
        ctx->pc = 0x4C4920u;
        goto label_4c4920;
    }
    ctx->pc = 0x4C4918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4920u;
label_4c4920:
    // 0x4c4920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c4924:
    // 0x4c4924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c4928:
    // 0x4c4928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c4928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c492c:
    // 0x4c492c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c492cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c4930:
    // 0x4c4930: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x4c4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_4c4934:
    // 0x4c4934: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c4938:
    if (ctx->pc == 0x4C4938u) {
        ctx->pc = 0x4C4938u;
            // 0x4c4938: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4C493Cu;
        goto label_4c493c;
    }
    ctx->pc = 0x4C4934u;
    {
        const bool branch_taken_0x4c4934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4934) {
            ctx->pc = 0x4C4938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4934u;
            // 0x4c4938: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4950u;
            goto label_4c4950;
        }
    }
    ctx->pc = 0x4C493Cu;
label_4c493c:
    // 0x4c493c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c493cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c4940:
    // 0x4c4940: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c4940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c4944:
    // 0x4c4944: 0x320f809  jalr        $t9
label_4c4948:
    if (ctx->pc == 0x4C4948u) {
        ctx->pc = 0x4C4948u;
            // 0x4c4948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C494Cu;
        goto label_4c494c;
    }
    ctx->pc = 0x4C4944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C494Cu);
        ctx->pc = 0x4C4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4944u;
            // 0x4c4948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C494Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C494Cu; }
            if (ctx->pc != 0x4C494Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C494Cu;
label_4c494c:
    // 0x4c494c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4c494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4c4950:
    // 0x4c4950: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4c4950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c4954:
    // 0x4c4954: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c4958:
    if (ctx->pc == 0x4C4958u) {
        ctx->pc = 0x4C4958u;
            // 0x4c4958: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4C495Cu;
        goto label_4c495c;
    }
    ctx->pc = 0x4C4954u;
    {
        const bool branch_taken_0x4c4954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4954) {
            ctx->pc = 0x4C4958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4954u;
            // 0x4c4958: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4970u;
            goto label_4c4970;
        }
    }
    ctx->pc = 0x4C495Cu;
label_4c495c:
    // 0x4c495c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4c495cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c4960:
    // 0x4c4960: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c4960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c4964:
    // 0x4c4964: 0x320f809  jalr        $t9
label_4c4968:
    if (ctx->pc == 0x4C4968u) {
        ctx->pc = 0x4C4968u;
            // 0x4c4968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C496Cu;
        goto label_4c496c;
    }
    ctx->pc = 0x4C4964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C496Cu);
        ctx->pc = 0x4C4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4964u;
            // 0x4c4968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C496Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C496Cu; }
            if (ctx->pc != 0x4C496Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C496Cu;
label_4c496c:
    // 0x4c496c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4c496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4c4970:
    // 0x4c4970: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4c4970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4c4974:
    // 0x4c4974: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c4978:
    if (ctx->pc == 0x4C4978u) {
        ctx->pc = 0x4C4978u;
            // 0x4c4978: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4C497Cu;
        goto label_4c497c;
    }
    ctx->pc = 0x4C4974u;
    {
        const bool branch_taken_0x4c4974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4974) {
            ctx->pc = 0x4C4978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4974u;
            // 0x4c4978: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4990u;
            goto label_4c4990;
        }
    }
    ctx->pc = 0x4C497Cu;
label_4c497c:
    // 0x4c497c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c497cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c4980:
    // 0x4c4980: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c4980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c4984:
    // 0x4c4984: 0x320f809  jalr        $t9
label_4c4988:
    if (ctx->pc == 0x4C4988u) {
        ctx->pc = 0x4C4988u;
            // 0x4c4988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C498Cu;
        goto label_4c498c;
    }
    ctx->pc = 0x4C4984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C498Cu);
        ctx->pc = 0x4C4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4984u;
            // 0x4c4988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C498Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C498Cu; }
            if (ctx->pc != 0x4C498Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C498Cu;
label_4c498c:
    // 0x4c498c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4c498cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4c4990:
    // 0x4c4990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4994:
    // 0x4c4994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4998:
    // 0x4c4998: 0x3e00008  jr          $ra
label_4c499c:
    if (ctx->pc == 0x4C499Cu) {
        ctx->pc = 0x4C499Cu;
            // 0x4c499c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C49A0u;
        goto label_4c49a0;
    }
    ctx->pc = 0x4C4998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4998u;
            // 0x4c499c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C49A0u;
label_4c49a0:
    // 0x4c49a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4c49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4c49a4:
    // 0x4c49a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c49a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c49a8:
    // 0x4c49a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c49ac:
    // 0x4c49ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c49acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c49b0:
    // 0x4c49b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c49b4:
    // 0x4c49b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4c49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c49b8:
    // 0x4c49b8: 0xc0892d0  jal         func_224B40
label_4c49bc:
    if (ctx->pc == 0x4C49BCu) {
        ctx->pc = 0x4C49BCu;
            // 0x4c49bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C49C0u;
        goto label_4c49c0;
    }
    ctx->pc = 0x4C49B8u;
    SET_GPR_U32(ctx, 31, 0x4C49C0u);
    ctx->pc = 0x4C49BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C49B8u;
            // 0x4c49bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49C0u; }
        if (ctx->pc != 0x4C49C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49C0u; }
        if (ctx->pc != 0x4C49C0u) { return; }
    }
    ctx->pc = 0x4C49C0u;
label_4c49c0:
    // 0x4c49c0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c49c4:
    // 0x4c49c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c49c8:
    // 0x4c49c8: 0x8c42a9f8  lw          $v0, -0x5608($v0)
    ctx->pc = 0x4c49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945272)));
label_4c49cc:
    // 0x4c49cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c49d0:
    // 0x4c49d0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x4c49d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4c49d4:
    // 0x4c49d4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x4c49d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4c49d8:
    // 0x4c49d8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4c49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4c49dc:
    // 0x4c49dc: 0xc0b6e68  jal         func_2DB9A0
label_4c49e0:
    if (ctx->pc == 0x4C49E0u) {
        ctx->pc = 0x4C49E0u;
            // 0x4c49e0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4C49E4u;
        goto label_4c49e4;
    }
    ctx->pc = 0x4C49DCu;
    SET_GPR_U32(ctx, 31, 0x4C49E4u);
    ctx->pc = 0x4C49E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C49DCu;
            // 0x4c49e0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49E4u; }
        if (ctx->pc != 0x4C49E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49E4u; }
        if (ctx->pc != 0x4C49E4u) { return; }
    }
    ctx->pc = 0x4C49E4u;
label_4c49e4:
    // 0x4c49e4: 0xc0b6dac  jal         func_2DB6B0
label_4c49e8:
    if (ctx->pc == 0x4C49E8u) {
        ctx->pc = 0x4C49E8u;
            // 0x4c49e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C49ECu;
        goto label_4c49ec;
    }
    ctx->pc = 0x4C49E4u;
    SET_GPR_U32(ctx, 31, 0x4C49ECu);
    ctx->pc = 0x4C49E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C49E4u;
            // 0x4c49e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49ECu; }
        if (ctx->pc != 0x4C49ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49ECu; }
        if (ctx->pc != 0x4C49ECu) { return; }
    }
    ctx->pc = 0x4C49ECu;
label_4c49ec:
    // 0x4c49ec: 0xc0cac94  jal         func_32B250
label_4c49f0:
    if (ctx->pc == 0x4C49F0u) {
        ctx->pc = 0x4C49F0u;
            // 0x4c49f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C49F4u;
        goto label_4c49f4;
    }
    ctx->pc = 0x4C49ECu;
    SET_GPR_U32(ctx, 31, 0x4C49F4u);
    ctx->pc = 0x4C49F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C49ECu;
            // 0x4c49f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49F4u; }
        if (ctx->pc != 0x4C49F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49F4u; }
        if (ctx->pc != 0x4C49F4u) { return; }
    }
    ctx->pc = 0x4C49F4u;
label_4c49f4:
    // 0x4c49f4: 0xc0cac84  jal         func_32B210
label_4c49f8:
    if (ctx->pc == 0x4C49F8u) {
        ctx->pc = 0x4C49F8u;
            // 0x4c49f8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C49FCu;
        goto label_4c49fc;
    }
    ctx->pc = 0x4C49F4u;
    SET_GPR_U32(ctx, 31, 0x4C49FCu);
    ctx->pc = 0x4C49F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C49F4u;
            // 0x4c49f8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49FCu; }
        if (ctx->pc != 0x4C49FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C49FCu; }
        if (ctx->pc != 0x4C49FCu) { return; }
    }
    ctx->pc = 0x4C49FCu;
label_4c49fc:
    // 0x4c49fc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4c49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4c4a00:
    // 0x4c4a00: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4c4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4c4a04:
    // 0x4c4a04: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4c4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c4a08:
    // 0x4c4a08: 0xc0a5a68  jal         func_2969A0
label_4c4a0c:
    if (ctx->pc == 0x4C4A0Cu) {
        ctx->pc = 0x4C4A0Cu;
            // 0x4c4a0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C4A10u;
        goto label_4c4a10;
    }
    ctx->pc = 0x4C4A08u;
    SET_GPR_U32(ctx, 31, 0x4C4A10u);
    ctx->pc = 0x4C4A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4A08u;
            // 0x4c4a0c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4A10u; }
        if (ctx->pc != 0x4C4A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4A10u; }
        if (ctx->pc != 0x4C4A10u) { return; }
    }
    ctx->pc = 0x4C4A10u;
label_4c4a10:
    // 0x4c4a10: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c4a14:
    // 0x4c4a14: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4c4a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c4a18:
    // 0x4c4a18: 0x8c44a9f8  lw          $a0, -0x5608($v0)
    ctx->pc = 0x4c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945272)));
label_4c4a1c:
    // 0x4c4a1c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4c4a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4a20:
    // 0x4c4a20: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4c4a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4a24:
    // 0x4c4a24: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x4c4a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_4c4a28:
    // 0x4c4a28: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4c4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4a2c:
    // 0x4c4a2c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4c4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c4a30:
    // 0x4c4a30: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x4c4a30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4c4a34:
    // 0x4c4a34: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x4c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_4c4a38:
    // 0x4c4a38: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c4a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c4a3c:
    // 0x4c4a3c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4c4a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4c4a40:
    // 0x4c4a40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4a44:
    // 0x4c4a44: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x4c4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_4c4a48:
    // 0x4c4a48: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4c4a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4c4a4c:
    // 0x4c4a4c: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x4c4a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4c4a50:
    // 0x4c4a50: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c4a54:
    // 0x4c4a54: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x4c4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4c4a58:
    // 0x4c4a58: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x4c4a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4c4a5c:
    // 0x4c4a5c: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4c4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c4a60:
    // 0x4c4a60: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4c4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c4a64:
    // 0x4c4a64: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x4c4a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4c4a68:
    // 0x4c4a68: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4c4a68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4c4a6c:
    // 0x4c4a6c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x4c4a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4c4a70:
    // 0x4c4a70: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4c4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4c4a74:
    // 0x4c4a74: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x4c4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4c4a78:
    // 0x4c4a78: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4c4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4c4a7c:
    // 0x4c4a7c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x4c4a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4a80:
    // 0x4c4a80: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4c4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4c4a84:
    // 0x4c4a84: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x4c4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4a88:
    // 0x4c4a88: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x4c4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4a8c:
    // 0x4c4a8c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x4c4a8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4c4a90:
    // 0x4c4a90: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x4c4a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4c4a94:
    // 0x4c4a94: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x4c4a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4c4a98:
    // 0x4c4a98: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x4c4a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4a9c:
    // 0x4c4a9c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x4c4a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4aa0:
    // 0x4c4aa0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x4c4aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4aa4:
    // 0x4c4aa4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x4c4aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4c4aa8:
    // 0x4c4aa8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x4c4aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4c4aac:
    // 0x4c4aac: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x4c4aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4c4ab0:
    // 0x4c4ab0: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x4c4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c4ab4:
    // 0x4c4ab4: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x4c4ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c4ab8:
    // 0x4c4ab8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4c4ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4abc:
    // 0x4c4abc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4c4abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4ac0:
    // 0x4c4ac0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4c4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4ac4:
    // 0x4c4ac4: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x4c4ac4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4c4ac8:
    // 0x4c4ac8: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x4c4ac8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4c4acc:
    // 0x4c4acc: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x4c4accu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4c4ad0:
    // 0x4c4ad0: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x4c4ad0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4c4ad4:
    // 0x4c4ad4: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x4c4ad4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4c4ad8:
    // 0x4c4ad8: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4c4ad8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4c4adc:
    // 0x4c4adc: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4c4adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4c4ae0:
    // 0x4c4ae0: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4c4ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4c4ae4:
    // 0x4c4ae4: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4c4ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4c4ae8:
    // 0x4c4ae8: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4c4ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4c4aec:
    // 0x4c4aec: 0xc0a7a88  jal         func_29EA20
label_4c4af0:
    if (ctx->pc == 0x4C4AF0u) {
        ctx->pc = 0x4C4AF0u;
            // 0x4c4af0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4C4AF4u;
        goto label_4c4af4;
    }
    ctx->pc = 0x4C4AECu;
    SET_GPR_U32(ctx, 31, 0x4C4AF4u);
    ctx->pc = 0x4C4AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4AECu;
            // 0x4c4af0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4AF4u; }
        if (ctx->pc != 0x4C4AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4AF4u; }
        if (ctx->pc != 0x4C4AF4u) { return; }
    }
    ctx->pc = 0x4C4AF4u;
label_4c4af4:
    // 0x4c4af4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4c4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c4af8:
    // 0x4c4af8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c4af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4afc:
    // 0x4c4afc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4c4b00:
    if (ctx->pc == 0x4C4B00u) {
        ctx->pc = 0x4C4B00u;
            // 0x4c4b00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C4B04u;
        goto label_4c4b04;
    }
    ctx->pc = 0x4C4AFCu;
    {
        const bool branch_taken_0x4c4afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4AFCu;
            // 0x4c4b00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4afc) {
            ctx->pc = 0x4C4B4Cu;
            goto label_4c4b4c;
        }
    }
    ctx->pc = 0x4C4B04u;
label_4c4b04:
    // 0x4c4b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4b08:
    // 0x4c4b08: 0xc088ef4  jal         func_223BD0
label_4c4b0c:
    if (ctx->pc == 0x4C4B0Cu) {
        ctx->pc = 0x4C4B0Cu;
            // 0x4c4b0c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C4B10u;
        goto label_4c4b10;
    }
    ctx->pc = 0x4C4B08u;
    SET_GPR_U32(ctx, 31, 0x4C4B10u);
    ctx->pc = 0x4C4B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4B08u;
            // 0x4c4b0c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B10u; }
        if (ctx->pc != 0x4C4B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B10u; }
        if (ctx->pc != 0x4C4B10u) { return; }
    }
    ctx->pc = 0x4C4B10u;
label_4c4b10:
    // 0x4c4b10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c4b14:
    // 0x4c4b14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c4b18:
    // 0x4c4b18: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4c4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4c4b1c:
    // 0x4c4b1c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4c4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4c4b20:
    // 0x4c4b20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c4b24:
    // 0x4c4b24: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4c4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4c4b28:
    // 0x4c4b28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4b2c:
    // 0x4c4b2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c4b30:
    // 0x4c4b30: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x4c4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_4c4b34:
    // 0x4c4b34: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x4c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_4c4b38:
    // 0x4c4b38: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4c4b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4c4b3c:
    // 0x4c4b3c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c4b40:
    // 0x4c4b40: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4c4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c4b44:
    // 0x4c4b44: 0xc088b38  jal         func_222CE0
label_4c4b48:
    if (ctx->pc == 0x4C4B48u) {
        ctx->pc = 0x4C4B48u;
            // 0x4c4b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4B4Cu;
        goto label_4c4b4c;
    }
    ctx->pc = 0x4C4B44u;
    SET_GPR_U32(ctx, 31, 0x4C4B4Cu);
    ctx->pc = 0x4C4B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4B44u;
            // 0x4c4b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B4Cu; }
        if (ctx->pc != 0x4C4B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B4Cu; }
        if (ctx->pc != 0x4C4B4Cu) { return; }
    }
    ctx->pc = 0x4C4B4Cu;
label_4c4b4c:
    // 0x4c4b4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c4b50:
    // 0x4c4b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c4b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4b54:
    // 0x4c4b54: 0xc08c164  jal         func_230590
label_4c4b58:
    if (ctx->pc == 0x4C4B58u) {
        ctx->pc = 0x4C4B58u;
            // 0x4c4b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C4B5Cu;
        goto label_4c4b5c;
    }
    ctx->pc = 0x4C4B54u;
    SET_GPR_U32(ctx, 31, 0x4C4B5Cu);
    ctx->pc = 0x4C4B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4B54u;
            // 0x4c4b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B5Cu; }
        if (ctx->pc != 0x4C4B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B5Cu; }
        if (ctx->pc != 0x4C4B5Cu) { return; }
    }
    ctx->pc = 0x4C4B5Cu;
label_4c4b5c:
    // 0x4c4b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4b60:
    // 0x4c4b60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c4b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c4b64:
    // 0x4c4b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4b68:
    // 0x4c4b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c4b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4b6c:
    // 0x4c4b6c: 0xc08914c  jal         func_224530
label_4c4b70:
    if (ctx->pc == 0x4C4B70u) {
        ctx->pc = 0x4C4B70u;
            // 0x4c4b70: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4C4B74u;
        goto label_4c4b74;
    }
    ctx->pc = 0x4C4B6Cu;
    SET_GPR_U32(ctx, 31, 0x4C4B74u);
    ctx->pc = 0x4C4B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4B6Cu;
            // 0x4c4b70: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B74u; }
        if (ctx->pc != 0x4C4B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4B74u; }
        if (ctx->pc != 0x4C4B74u) { return; }
    }
    ctx->pc = 0x4C4B74u;
label_4c4b74:
    // 0x4c4b74: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x4c4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_4c4b78:
    // 0x4c4b78: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x4c4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_4c4b7c:
    // 0x4c4b7c: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4c4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4c4b80:
    // 0x4c4b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4b84:
    // 0x4c4b84: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4c4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4c4b88:
    // 0x4c4b88: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c4b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c4b8c:
    // 0x4c4b8c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4c4b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4b90:
    // 0x4c4b90: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4c4b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c4b94:
    // 0x4c4b94: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4c4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4b98:
    // 0x4c4b98: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4c4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4b9c:
    // 0x4c4b9c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4c4b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4c4ba0:
    // 0x4c4ba0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c4ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c4ba4:
    // 0x4c4ba4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4c4ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4c4ba8:
    // 0x4c4ba8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4c4ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4c4bac:
    // 0x4c4bac: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4c4bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c4bb0:
    // 0x4c4bb0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4c4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4bb4:
    // 0x4c4bb4: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4c4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4bb8:
    // 0x4c4bb8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4c4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4bbc:
    // 0x4c4bbc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c4bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c4bc0:
    // 0x4c4bc0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c4bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c4bc4:
    // 0x4c4bc4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c4bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c4bc8:
    // 0x4c4bc8: 0xc0892b0  jal         func_224AC0
label_4c4bcc:
    if (ctx->pc == 0x4C4BCCu) {
        ctx->pc = 0x4C4BCCu;
            // 0x4c4bcc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4C4BD0u;
        goto label_4c4bd0;
    }
    ctx->pc = 0x4C4BC8u;
    SET_GPR_U32(ctx, 31, 0x4C4BD0u);
    ctx->pc = 0x4C4BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4BC8u;
            // 0x4c4bcc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4BD0u; }
        if (ctx->pc != 0x4C4BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4BD0u; }
        if (ctx->pc != 0x4C4BD0u) { return; }
    }
    ctx->pc = 0x4C4BD0u;
label_4c4bd0:
    // 0x4c4bd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c4bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4bd4:
    // 0x4c4bd4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c4bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c4bd8:
    // 0x4c4bd8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4c4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4c4bdc:
    // 0x4c4bdc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4c4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4c4be0:
    // 0x4c4be0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4c4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4c4be4:
    // 0x4c4be4: 0xc0891d8  jal         func_224760
label_4c4be8:
    if (ctx->pc == 0x4C4BE8u) {
        ctx->pc = 0x4C4BE8u;
            // 0x4c4be8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4C4BECu;
        goto label_4c4bec;
    }
    ctx->pc = 0x4C4BE4u;
    SET_GPR_U32(ctx, 31, 0x4C4BECu);
    ctx->pc = 0x4C4BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4BE4u;
            // 0x4c4be8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4BECu; }
        if (ctx->pc != 0x4C4BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4BECu; }
        if (ctx->pc != 0x4C4BECu) { return; }
    }
    ctx->pc = 0x4C4BECu;
label_4c4bec:
    // 0x4c4bec: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4c4becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4c4bf0:
    // 0x4c4bf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4bf4:
    // 0x4c4bf4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c4bf8:
    // 0x4c4bf8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4c4bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c4bfc:
    // 0x4c4bfc: 0xc0a7a88  jal         func_29EA20
label_4c4c00:
    if (ctx->pc == 0x4C4C00u) {
        ctx->pc = 0x4C4C00u;
            // 0x4c4c00: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4C4C04u;
        goto label_4c4c04;
    }
    ctx->pc = 0x4C4BFCu;
    SET_GPR_U32(ctx, 31, 0x4C4C04u);
    ctx->pc = 0x4C4C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4BFCu;
            // 0x4c4c00: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C04u; }
        if (ctx->pc != 0x4C4C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C04u; }
        if (ctx->pc != 0x4C4C04u) { return; }
    }
    ctx->pc = 0x4C4C04u;
label_4c4c04:
    // 0x4c4c04: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4c4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c4c08:
    // 0x4c4c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c4c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4c0c:
    // 0x4c4c0c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4c4c10:
    if (ctx->pc == 0x4C4C10u) {
        ctx->pc = 0x4C4C10u;
            // 0x4c4c10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C4C14u;
        goto label_4c4c14;
    }
    ctx->pc = 0x4C4C0Cu;
    {
        const bool branch_taken_0x4c4c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4C0Cu;
            // 0x4c4c10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c0c) {
            ctx->pc = 0x4C4C30u;
            goto label_4c4c30;
        }
    }
    ctx->pc = 0x4C4C14u;
label_4c4c14:
    // 0x4c4c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4c18:
    // 0x4c4c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c4c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c4c1c:
    // 0x4c4c1c: 0xc0869d0  jal         func_21A740
label_4c4c20:
    if (ctx->pc == 0x4C4C20u) {
        ctx->pc = 0x4C4C20u;
            // 0x4c4c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C24u;
        goto label_4c4c24;
    }
    ctx->pc = 0x4C4C1Cu;
    SET_GPR_U32(ctx, 31, 0x4C4C24u);
    ctx->pc = 0x4C4C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4C1Cu;
            // 0x4c4c20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C24u; }
        if (ctx->pc != 0x4C4C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C24u; }
        if (ctx->pc != 0x4C4C24u) { return; }
    }
    ctx->pc = 0x4C4C24u;
label_4c4c24:
    // 0x4c4c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c4c28:
    // 0x4c4c28: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4c4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4c4c2c:
    // 0x4c4c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c4c30:
    // 0x4c4c30: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4c4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4c4c34:
    // 0x4c4c34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4c38:
    // 0x4c4c38: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c4c3c:
    // 0x4c4c3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c4c40:
    // 0x4c4c40: 0xc08c650  jal         func_231940
label_4c4c44:
    if (ctx->pc == 0x4C4C44u) {
        ctx->pc = 0x4C4C44u;
            // 0x4c4c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C48u;
        goto label_4c4c48;
    }
    ctx->pc = 0x4C4C40u;
    SET_GPR_U32(ctx, 31, 0x4C4C48u);
    ctx->pc = 0x4C4C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4C40u;
            // 0x4c4c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C48u; }
        if (ctx->pc != 0x4C4C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C48u; }
        if (ctx->pc != 0x4C4C48u) { return; }
    }
    ctx->pc = 0x4C4C48u;
label_4c4c48:
    // 0x4c4c48: 0xc040180  jal         func_100600
label_4c4c4c:
    if (ctx->pc == 0x4C4C4Cu) {
        ctx->pc = 0x4C4C4Cu;
            // 0x4c4c4c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4C4C50u;
        goto label_4c4c50;
    }
    ctx->pc = 0x4C4C48u;
    SET_GPR_U32(ctx, 31, 0x4C4C50u);
    ctx->pc = 0x4C4C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4C48u;
            // 0x4c4c4c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C50u; }
        if (ctx->pc != 0x4C4C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4C50u; }
        if (ctx->pc != 0x4C4C50u) { return; }
    }
    ctx->pc = 0x4C4C50u;
label_4c4c50:
    // 0x4c4c50: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_4c4c54:
    if (ctx->pc == 0x4C4C54u) {
        ctx->pc = 0x4C4C54u;
            // 0x4c4c54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C58u;
        goto label_4c4c58;
    }
    ctx->pc = 0x4C4C50u;
    {
        const bool branch_taken_0x4c4c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4C50u;
            // 0x4c4c54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4c50) {
            ctx->pc = 0x4C4CC0u;
            goto label_4c4cc0;
        }
    }
    ctx->pc = 0x4C4C58u;
label_4c4c58:
    // 0x4c4c58: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x4c4c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4c4c5c:
    // 0x4c4c5c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4c4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4c4c60:
    // 0x4c4c60: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x4c4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_4c4c64:
    // 0x4c4c64: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4c4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4c4c68:
    // 0x4c4c68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c4c6c:
    // 0x4c4c6c: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x4c4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_4c4c70:
    // 0x4c4c70: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x4c4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_4c4c74:
    // 0x4c4c74: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x4c4c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_4c4c78:
    // 0x4c4c78: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4c4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4c4c7c:
    // 0x4c4c7c: 0x24a57200  addiu       $a1, $a1, 0x7200
    ctx->pc = 0x4c4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29184));
label_4c4c80:
    // 0x4c4c80: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x4c4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_4c4c84:
    // 0x4c4c84: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x4c4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_4c4c88:
    // 0x4c4c88: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x4c4c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_4c4c8c:
    // 0x4c4c8c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4c4c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4c4c90:
    // 0x4c4c90: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4c4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4c4c94:
    // 0x4c4c94: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4c4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4c4c98:
    // 0x4c4c98: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4c4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4c4c9c:
    // 0x4c4c9c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4c4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_4c4ca0:
    // 0x4c4ca0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x4c4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_4c4ca4:
    // 0x4c4ca4: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x4c4ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_4c4ca8:
    // 0x4c4ca8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4c4ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_4c4cac:
    // 0x4c4cac: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4c4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4c4cb0:
    // 0x4c4cb0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4c4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_4c4cb4:
    // 0x4c4cb4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4c4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4c4cb8:
    // 0x4c4cb8: 0xc04c968  jal         func_1325A0
label_4c4cbc:
    if (ctx->pc == 0x4C4CBCu) {
        ctx->pc = 0x4C4CBCu;
            // 0x4c4cbc: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4C4CC0u;
        goto label_4c4cc0;
    }
    ctx->pc = 0x4C4CB8u;
    SET_GPR_U32(ctx, 31, 0x4C4CC0u);
    ctx->pc = 0x4C4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4CB8u;
            // 0x4c4cbc: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4CC0u; }
        if (ctx->pc != 0x4C4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4CC0u; }
        if (ctx->pc != 0x4C4CC0u) { return; }
    }
    ctx->pc = 0x4C4CC0u;
label_4c4cc0:
    // 0x4c4cc0: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x4c4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_4c4cc4:
    // 0x4c4cc4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4c4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4c4cc8:
    // 0x4c4cc8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4c4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4c4ccc:
    // 0x4c4ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c4cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c4cd0:
    // 0x4c4cd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c4cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c4cd4:
    // 0x4c4cd4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4c4cd8:
    // 0x4c4cd8: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x4c4cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_4c4cdc:
    // 0x4c4cdc: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x4c4cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4ce0:
    // 0x4c4ce0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4c4ce0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c4ce4:
    // 0x4c4ce4: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_4c4ce8:
    if (ctx->pc == 0x4C4CE8u) {
        ctx->pc = 0x4C4CE8u;
            // 0x4c4ce8: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x4C4CECu;
        goto label_4c4cec;
    }
    ctx->pc = 0x4C4CE4u;
    {
        const bool branch_taken_0x4c4ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c4ce4) {
            ctx->pc = 0x4C4CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4CE4u;
            // 0x4c4ce8: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4D34u;
            goto label_4c4d34;
        }
    }
    ctx->pc = 0x4C4CECu;
label_4c4cec:
    // 0x4c4cec: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x4c4cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4c4cf0:
    // 0x4c4cf0: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x4c4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c4cf4:
    // 0x4c4cf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4cf8:
    // 0x4c4cf8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4c4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_4c4cfc:
    // 0x4c4cfc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x4c4cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_4c4d00:
    // 0x4c4d00: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4c4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4c4d04:
    // 0x4c4d04: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4c4d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4c4d08:
    // 0x4c4d08: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4c4d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_4c4d0c:
    // 0x4c4d0c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x4c4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_4c4d10:
    // 0x4c4d10: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x4c4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_4c4d14:
    // 0x4c4d14: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x4c4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_4c4d18:
    // 0x4c4d18: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x4c4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_4c4d1c:
    // 0x4c4d1c: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4c4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_4c4d20:
    // 0x4c4d20: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x4c4d20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_4c4d24:
    // 0x4c4d24: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x4c4d24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_4c4d28:
    // 0x4c4d28: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4c4d28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4c4d2c:
    // 0x4c4d2c: 0x10000011  b           . + 4 + (0x11 << 2)
label_4c4d30:
    if (ctx->pc == 0x4C4D30u) {
        ctx->pc = 0x4C4D30u;
            // 0x4c4d30: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4C4D34u;
        goto label_4c4d34;
    }
    ctx->pc = 0x4C4D2Cu;
    {
        const bool branch_taken_0x4c4d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4D2Cu;
            // 0x4c4d30: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4d2c) {
            ctx->pc = 0x4C4D74u;
            goto label_4c4d74;
        }
    }
    ctx->pc = 0x4C4D34u;
label_4c4d34:
    // 0x4c4d34: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4c4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c4d38:
    // 0x4c4d38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c4d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4d3c:
    // 0x4c4d3c: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x4c4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_4c4d40:
    // 0x4c4d40: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4c4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4c4d44:
    // 0x4c4d44: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4c4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4c4d48:
    // 0x4c4d48: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c4d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4c4d4c:
    // 0x4c4d4c: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x4c4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_4c4d50:
    // 0x4c4d50: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c4d54:
    // 0x4c4d54: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x4c4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_4c4d58:
    // 0x4c4d58: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x4c4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_4c4d5c:
    // 0x4c4d5c: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x4c4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_4c4d60:
    // 0x4c4d60: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x4c4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_4c4d64:
    // 0x4c4d64: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x4c4d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_4c4d68:
    // 0x4c4d68: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x4c4d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_4c4d6c:
    // 0x4c4d6c: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4c4d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4c4d70:
    // 0x4c4d70: 0xa246006b  sb          $a2, 0x6B($s2)
    ctx->pc = 0x4c4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
label_4c4d74:
    // 0x4c4d74: 0xc040180  jal         func_100600
label_4c4d78:
    if (ctx->pc == 0x4C4D78u) {
        ctx->pc = 0x4C4D78u;
            // 0x4c4d78: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4C4D7Cu;
        goto label_4c4d7c;
    }
    ctx->pc = 0x4C4D74u;
    SET_GPR_U32(ctx, 31, 0x4C4D7Cu);
    ctx->pc = 0x4C4D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4D74u;
            // 0x4c4d78: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4D7Cu; }
        if (ctx->pc != 0x4C4D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4D7Cu; }
        if (ctx->pc != 0x4C4D7Cu) { return; }
    }
    ctx->pc = 0x4C4D7Cu;
label_4c4d7c:
    // 0x4c4d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c4d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4d80:
    // 0x4c4d80: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4c4d84:
    if (ctx->pc == 0x4C4D84u) {
        ctx->pc = 0x4C4D84u;
            // 0x4c4d84: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4C4D88u;
        goto label_4c4d88;
    }
    ctx->pc = 0x4C4D80u;
    {
        const bool branch_taken_0x4c4d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4d80) {
            ctx->pc = 0x4C4D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4D80u;
            // 0x4c4d84: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4DC0u;
            goto label_4c4dc0;
        }
    }
    ctx->pc = 0x4C4D88u;
label_4c4d88:
    // 0x4c4d88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c4d8c:
    // 0x4c4d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4d90:
    // 0x4c4d90: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4c4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4c4d94:
    // 0x4c4d94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4c4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4c4d98:
    // 0x4c4d98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c4d9c:
    // 0x4c4d9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c4da0:
    // 0x4c4da0: 0xc040138  jal         func_1004E0
label_4c4da4:
    if (ctx->pc == 0x4C4DA4u) {
        ctx->pc = 0x4C4DA4u;
            // 0x4c4da4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C4DA8u;
        goto label_4c4da8;
    }
    ctx->pc = 0x4C4DA0u;
    SET_GPR_U32(ctx, 31, 0x4C4DA8u);
    ctx->pc = 0x4C4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4DA0u;
            // 0x4c4da4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DA8u; }
        if (ctx->pc != 0x4C4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DA8u; }
        if (ctx->pc != 0x4C4DA8u) { return; }
    }
    ctx->pc = 0x4C4DA8u;
label_4c4da8:
    // 0x4c4da8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c4dac:
    // 0x4c4dac: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4c4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4c4db0:
    // 0x4c4db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c4db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4db4:
    // 0x4c4db4: 0xc04a576  jal         func_1295D8
label_4c4db8:
    if (ctx->pc == 0x4C4DB8u) {
        ctx->pc = 0x4C4DB8u;
            // 0x4c4db8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4C4DBCu;
        goto label_4c4dbc;
    }
    ctx->pc = 0x4C4DB4u;
    SET_GPR_U32(ctx, 31, 0x4C4DBCu);
    ctx->pc = 0x4C4DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4DB4u;
            // 0x4c4db8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DBCu; }
        if (ctx->pc != 0x4C4DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DBCu; }
        if (ctx->pc != 0x4C4DBCu) { return; }
    }
    ctx->pc = 0x4C4DBCu;
label_4c4dbc:
    // 0x4c4dbc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4c4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4c4dc0:
    // 0x4c4dc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c4dc4:
    // 0x4c4dc4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4c4dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4c4dc8:
    // 0x4c4dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4dcc:
    // 0x4c4dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c4dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c4dd0:
    // 0x4c4dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c4dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4dd4:
    // 0x4c4dd4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4c4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_4c4dd8:
    // 0x4c4dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c4dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4ddc:
    // 0x4c4ddc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c4ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c4de0:
    // 0x4c4de0: 0x344619ae  ori         $a2, $v0, 0x19AE
    ctx->pc = 0x4c4de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
label_4c4de4:
    // 0x4c4de4: 0xc122cd8  jal         func_48B360
label_4c4de8:
    if (ctx->pc == 0x4C4DE8u) {
        ctx->pc = 0x4C4DE8u;
            // 0x4c4de8: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x4C4DECu;
        goto label_4c4dec;
    }
    ctx->pc = 0x4C4DE4u;
    SET_GPR_U32(ctx, 31, 0x4C4DECu);
    ctx->pc = 0x4C4DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4DE4u;
            // 0x4c4de8: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DECu; }
        if (ctx->pc != 0x4C4DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4DECu; }
        if (ctx->pc != 0x4C4DECu) { return; }
    }
    ctx->pc = 0x4C4DECu;
label_4c4dec:
    // 0x4c4dec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c4decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c4df0:
    // 0x4c4df0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c4df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4df4:
    // 0x4c4df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c4df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4df8:
    // 0x4c4df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4dfc:
    // 0x4c4dfc: 0x3e00008  jr          $ra
label_4c4e00:
    if (ctx->pc == 0x4C4E00u) {
        ctx->pc = 0x4C4E00u;
            // 0x4c4e00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4C4E04u;
        goto label_4c4e04;
    }
    ctx->pc = 0x4C4DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4DFCu;
            // 0x4c4e00: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4E04u;
label_4c4e04:
    // 0x4c4e04: 0x0  nop
    ctx->pc = 0x4c4e04u;
    // NOP
label_4c4e08:
    // 0x4c4e08: 0x0  nop
    ctx->pc = 0x4c4e08u;
    // NOP
label_4c4e0c:
    // 0x4c4e0c: 0x0  nop
    ctx->pc = 0x4c4e0cu;
    // NOP
label_4c4e10:
    // 0x4c4e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c4e14:
    // 0x4c4e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c4e18:
    // 0x4c4e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c4e1c:
    // 0x4c4e1c: 0xc0e3580  jal         func_38D600
label_4c4e20:
    if (ctx->pc == 0x4C4E20u) {
        ctx->pc = 0x4C4E20u;
            // 0x4c4e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4E24u;
        goto label_4c4e24;
    }
    ctx->pc = 0x4C4E1Cu;
    SET_GPR_U32(ctx, 31, 0x4C4E24u);
    ctx->pc = 0x4C4E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4E1Cu;
            // 0x4c4e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4E24u; }
        if (ctx->pc != 0x4C4E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4E24u; }
        if (ctx->pc != 0x4C4E24u) { return; }
    }
    ctx->pc = 0x4C4E24u;
label_4c4e24:
    // 0x4c4e24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c4e28:
    // 0x4c4e28: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4c4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4c4e2c:
    // 0x4c4e2c: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x4c4e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_4c4e30:
    // 0x4c4e30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c4e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c4e34:
    // 0x4c4e34: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4c4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4c4e38:
    // 0x4c4e38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c4e3c:
    // 0x4c4e3c: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x4c4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4c4e40:
    // 0x4c4e40: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4c4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4c4e44:
    // 0x4c4e44: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x4c4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_4c4e48:
    // 0x4c4e48: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x4c4e48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_4c4e4c:
    // 0x4c4e4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c4e50:
    // 0x4c4e50: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x4c4e50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c4e54:
    // 0x4c4e54: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4c4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4c4e58:
    // 0x4c4e58: 0xae0400c8  sw          $a0, 0xC8($s0)
    ctx->pc = 0x4c4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
label_4c4e5c:
    // 0x4c4e5c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4c4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4e60:
    // 0x4c4e60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4c4e60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c4e64:
    // 0x4c4e64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4c4e68:
    if (ctx->pc == 0x4C4E68u) {
        ctx->pc = 0x4C4E68u;
            // 0x4c4e68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C4E6Cu;
        goto label_4c4e6c;
    }
    ctx->pc = 0x4C4E64u;
    {
        const bool branch_taken_0x4c4e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C4E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4E64u;
            // 0x4c4e68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4e64) {
            ctx->pc = 0x4C4E70u;
            goto label_4c4e70;
        }
    }
    ctx->pc = 0x4C4E6Cu;
label_4c4e6c:
    // 0x4c4e6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4c4e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4e70:
    // 0x4c4e70: 0xa20300e8  sb          $v1, 0xE8($s0)
    ctx->pc = 0x4c4e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 3));
label_4c4e74:
    // 0x4c4e74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c4e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4e78:
    // 0x4c4e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4e7c:
    // 0x4c4e7c: 0x3e00008  jr          $ra
label_4c4e80:
    if (ctx->pc == 0x4C4E80u) {
        ctx->pc = 0x4C4E80u;
            // 0x4c4e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C4E84u;
        goto label_4c4e84;
    }
    ctx->pc = 0x4C4E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4E7Cu;
            // 0x4c4e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4E84u;
label_4c4e84:
    // 0x4c4e84: 0x0  nop
    ctx->pc = 0x4c4e84u;
    // NOP
label_4c4e88:
    // 0x4c4e88: 0x0  nop
    ctx->pc = 0x4c4e88u;
    // NOP
label_4c4e8c:
    // 0x4c4e8c: 0x0  nop
    ctx->pc = 0x4c4e8cu;
    // NOP
label_4c4e90:
    // 0x4c4e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c4e94:
    // 0x4c4e94: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4c4e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4c4e98:
    // 0x4c4e98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c4e9c:
    // 0x4c4e9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4c4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c4ea0:
    // 0x4c4ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c4ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c4ea4:
    // 0x4c4ea4: 0x24c67278  addiu       $a2, $a2, 0x7278
    ctx->pc = 0x4c4ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29304));
label_4c4ea8:
    // 0x4c4ea8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x4c4ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4eac:
    // 0x4c4eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c4eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c4eb0:
    // 0x4c4eb0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x4c4eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4eb4:
    // 0x4c4eb4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x4c4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4eb8:
    // 0x4c4eb8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4c4eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c4ebc:
    // 0x4c4ebc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c4ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c4ec0:
    // 0x4c4ec0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4c4ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c4ec4:
    // 0x4c4ec4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x4c4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c4ec8:
    // 0x4c4ec8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x4c4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4ecc:
    // 0x4c4ecc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x4c4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c4ed0:
    // 0x4c4ed0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x4c4ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4c4ed4:
    // 0x4c4ed4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c4ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c4ed8:
    // 0x4c4ed8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4c4ed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4c4edc:
    // 0x4c4edc: 0xc04cafc  jal         func_132BF0
label_4c4ee0:
    if (ctx->pc == 0x4C4EE0u) {
        ctx->pc = 0x4C4EE0u;
            // 0x4c4ee0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4C4EE4u;
        goto label_4c4ee4;
    }
    ctx->pc = 0x4C4EDCu;
    SET_GPR_U32(ctx, 31, 0x4C4EE4u);
    ctx->pc = 0x4C4EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4EDCu;
            // 0x4c4ee0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4EE4u; }
        if (ctx->pc != 0x4C4EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4EE4u; }
        if (ctx->pc != 0x4C4EE4u) { return; }
    }
    ctx->pc = 0x4C4EE4u;
label_4c4ee4:
    // 0x4c4ee4: 0xc040180  jal         func_100600
label_4c4ee8:
    if (ctx->pc == 0x4C4EE8u) {
        ctx->pc = 0x4C4EE8u;
            // 0x4c4ee8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4C4EECu;
        goto label_4c4eec;
    }
    ctx->pc = 0x4C4EE4u;
    SET_GPR_U32(ctx, 31, 0x4C4EECu);
    ctx->pc = 0x4C4EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4EE4u;
            // 0x4c4ee8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4EECu; }
        if (ctx->pc != 0x4C4EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4EECu; }
        if (ctx->pc != 0x4C4EECu) { return; }
    }
    ctx->pc = 0x4C4EECu;
label_4c4eec:
    // 0x4c4eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c4eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c4ef0:
    // 0x4c4ef0: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_4c4ef4:
    if (ctx->pc == 0x4C4EF4u) {
        ctx->pc = 0x4C4EF4u;
            // 0x4c4ef4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C4EF8u;
        goto label_4c4ef8;
    }
    ctx->pc = 0x4C4EF0u;
    {
        const bool branch_taken_0x4c4ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4ef0) {
            ctx->pc = 0x4C4EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4EF0u;
            // 0x4c4ef4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4F9Cu;
            goto label_4c4f9c;
        }
    }
    ctx->pc = 0x4C4EF8u;
label_4c4ef8:
    // 0x4c4ef8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c4efc:
    // 0x4c4efc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4c4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4c4f00:
    // 0x4c4f00: 0xc44172b8  lwc1        $f1, 0x72B8($v0)
    ctx->pc = 0x4c4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c4f04:
    // 0x4c4f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c4f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c4f08:
    // 0x4c4f08: 0x0  nop
    ctx->pc = 0x4c4f08u;
    // NOP
label_4c4f0c:
    // 0x4c4f0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c4f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c4f10:
    // 0x4c4f10: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4c4f14:
    if (ctx->pc == 0x4C4F14u) {
        ctx->pc = 0x4C4F14u;
            // 0x4c4f14: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C4F18u;
        goto label_4c4f18;
    }
    ctx->pc = 0x4C4F10u;
    {
        const bool branch_taken_0x4c4f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c4f10) {
            ctx->pc = 0x4C4F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4F10u;
            // 0x4c4f14: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4F28u;
            goto label_4c4f28;
        }
    }
    ctx->pc = 0x4C4F18u;
label_4c4f18:
    // 0x4c4f18: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c4f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c4f1c:
    // 0x4c4f1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c4f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c4f20:
    // 0x4c4f20: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c4f24:
    if (ctx->pc == 0x4C4F24u) {
        ctx->pc = 0x4C4F28u;
        goto label_4c4f28;
    }
    ctx->pc = 0x4C4F20u;
    {
        const bool branch_taken_0x4c4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4f20) {
            ctx->pc = 0x4C4F3Cu;
            goto label_4c4f3c;
        }
    }
    ctx->pc = 0x4C4F28u;
label_4c4f28:
    // 0x4c4f28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4c4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4c4f2c:
    // 0x4c4f2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c4f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4c4f30:
    // 0x4c4f30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4c4f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4c4f34:
    // 0x4c4f34: 0x0  nop
    ctx->pc = 0x4c4f34u;
    // NOP
label_4c4f38:
    // 0x4c4f38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c4f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c4f3c:
    // 0x4c4f3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c4f40:
    // 0x4c4f40: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c4f40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4c4f44:
    // 0x4c4f44: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x4c4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
label_4c4f48:
    // 0x4c4f48: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4c4f48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4c4f4c:
    // 0x4c4f4c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4c4f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4c4f50:
    // 0x4c4f50: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x4c4f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4c4f54:
    // 0x4c4f54: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x4c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_4c4f58:
    // 0x4c4f58: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4c4f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_4c4f5c:
    // 0x4c4f5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c4f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c4f60:
    // 0x4c4f60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c4f64:
    // 0x4c4f64: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x4c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_4c4f68:
    // 0x4c4f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c4f6c:
    // 0x4c4f6c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c4f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c4f70:
    // 0x4c4f70: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4c4f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4c4f74:
    // 0x4c4f74: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4c4f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c4f78:
    // 0x4c4f78: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4c4f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c4f7c:
    // 0x4c4f7c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4c4f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4c4f80:
    // 0x4c4f80: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x4c4f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c4f84:
    // 0x4c4f84: 0x25297298  addiu       $t1, $t1, 0x7298
    ctx->pc = 0x4c4f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29336));
label_4c4f88:
    // 0x4c4f88: 0x254a72a8  addiu       $t2, $t2, 0x72A8
    ctx->pc = 0x4c4f88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29352));
label_4c4f8c:
    // 0x4c4f8c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x4c4f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c4f90:
    // 0x4c4f90: 0xc0db488  jal         func_36D220
label_4c4f94:
    if (ctx->pc == 0x4C4F94u) {
        ctx->pc = 0x4C4F94u;
            // 0x4c4f94: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4C4F98u;
        goto label_4c4f98;
    }
    ctx->pc = 0x4C4F90u;
    SET_GPR_U32(ctx, 31, 0x4C4F98u);
    ctx->pc = 0x4C4F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4F90u;
            // 0x4c4f94: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4F98u; }
        if (ctx->pc != 0x4C4F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4F98u; }
        if (ctx->pc != 0x4C4F98u) { return; }
    }
    ctx->pc = 0x4C4F98u;
label_4c4f98:
    // 0x4c4f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4f9c:
    // 0x4c4f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c4f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4fa0:
    // 0x4c4fa0: 0x3e00008  jr          $ra
label_4c4fa4:
    if (ctx->pc == 0x4C4FA4u) {
        ctx->pc = 0x4C4FA4u;
            // 0x4c4fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C4FA8u;
        goto label_4c4fa8;
    }
    ctx->pc = 0x4C4FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4FA0u;
            // 0x4c4fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4FA8u;
label_4c4fa8:
    // 0x4c4fa8: 0x0  nop
    ctx->pc = 0x4c4fa8u;
    // NOP
label_4c4fac:
    // 0x4c4fac: 0x0  nop
    ctx->pc = 0x4c4facu;
    // NOP
label_4c4fb0:
    // 0x4c4fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c4fb4:
    // 0x4c4fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c4fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c4fb8:
    // 0x4c4fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c4fbc:
    // 0x4c4fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c4fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c4fc0:
    // 0x4c4fc0: 0xc04ab66  jal         func_12AD98
label_4c4fc4:
    if (ctx->pc == 0x4C4FC4u) {
        ctx->pc = 0x4C4FC4u;
            // 0x4c4fc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C4FC8u;
        goto label_4c4fc8;
    }
    ctx->pc = 0x4C4FC0u;
    SET_GPR_U32(ctx, 31, 0x4C4FC8u);
    ctx->pc = 0x4C4FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4FC0u;
            // 0x4c4fc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FC8u; }
        if (ctx->pc != 0x4C4FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FC8u; }
        if (ctx->pc != 0x4C4FC8u) { return; }
    }
    ctx->pc = 0x4C4FC8u;
label_4c4fc8:
    // 0x4c4fc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4c4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4c4fcc:
    // 0x4c4fcc: 0xc04ab66  jal         func_12AD98
label_4c4fd0:
    if (ctx->pc == 0x4C4FD0u) {
        ctx->pc = 0x4C4FD0u;
            // 0x4c4fd0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4C4FD4u;
        goto label_4c4fd4;
    }
    ctx->pc = 0x4C4FCCu;
    SET_GPR_U32(ctx, 31, 0x4C4FD4u);
    ctx->pc = 0x4C4FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4FCCu;
            // 0x4c4fd0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FD4u; }
        if (ctx->pc != 0x4C4FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FD4u; }
        if (ctx->pc != 0x4C4FD4u) { return; }
    }
    ctx->pc = 0x4C4FD4u;
label_4c4fd4:
    // 0x4c4fd4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x4c4fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_4c4fd8:
    // 0x4c4fd8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4c4fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_4c4fdc:
    // 0x4c4fdc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_4c4fe0:
    if (ctx->pc == 0x4C4FE0u) {
        ctx->pc = 0x4C4FE0u;
            // 0x4c4fe0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4C4FE4u;
        goto label_4c4fe4;
    }
    ctx->pc = 0x4C4FDCu;
    {
        const bool branch_taken_0x4c4fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c4fdc) {
            ctx->pc = 0x4C4FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4FDCu;
            // 0x4c4fe0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4FF8u;
            goto label_4c4ff8;
        }
    }
    ctx->pc = 0x4C4FE4u;
label_4c4fe4:
    // 0x4c4fe4: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x4c4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4c4fe8:
    // 0x4c4fe8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4c4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4c4fec:
    // 0x4c4fec: 0xc122d2c  jal         func_48B4B0
label_4c4ff0:
    if (ctx->pc == 0x4C4FF0u) {
        ctx->pc = 0x4C4FF0u;
            // 0x4c4ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4FF4u;
        goto label_4c4ff4;
    }
    ctx->pc = 0x4C4FECu;
    SET_GPR_U32(ctx, 31, 0x4C4FF4u);
    ctx->pc = 0x4C4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4FECu;
            // 0x4c4ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FF4u; }
        if (ctx->pc != 0x4C4FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4FF4u; }
        if (ctx->pc != 0x4C4FF4u) { return; }
    }
    ctx->pc = 0x4C4FF4u;
label_4c4ff4:
    // 0x4c4ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c4ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4ff8:
    // 0x4c4ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c4ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4ffc:
    // 0x4c4ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c5000:
    // 0x4c5000: 0x3e00008  jr          $ra
label_4c5004:
    if (ctx->pc == 0x4C5004u) {
        ctx->pc = 0x4C5004u;
            // 0x4c5004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C5008u;
        goto label_4c5008;
    }
    ctx->pc = 0x4C5000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5000u;
            // 0x4c5004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5008u;
label_4c5008:
    // 0x4c5008: 0x0  nop
    ctx->pc = 0x4c5008u;
    // NOP
label_4c500c:
    // 0x4c500c: 0x0  nop
    ctx->pc = 0x4c500cu;
    // NOP
label_4c5010:
    // 0x4c5010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c5014:
    // 0x4c5014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c5014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c5018:
    // 0x4c5018: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x4c5018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_4c501c:
    // 0x4c501c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_4c5020:
    if (ctx->pc == 0x4C5020u) {
        ctx->pc = 0x4C5020u;
            // 0x4c5020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4C5024u;
        goto label_4c5024;
    }
    ctx->pc = 0x4C501Cu;
    {
        const bool branch_taken_0x4c501c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c501c) {
            ctx->pc = 0x4C5020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C501Cu;
            // 0x4c5020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C5034u;
            goto label_4c5034;
        }
    }
    ctx->pc = 0x4C5024u;
label_4c5024:
    // 0x4c5024: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4c5024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4c5028:
    // 0x4c5028: 0xc0ba938  jal         func_2EA4E0
label_4c502c:
    if (ctx->pc == 0x4C502Cu) {
        ctx->pc = 0x4C502Cu;
            // 0x4c502c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5030u;
        goto label_4c5030;
    }
    ctx->pc = 0x4C5028u;
    SET_GPR_U32(ctx, 31, 0x4C5030u);
    ctx->pc = 0x4C502Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5028u;
            // 0x4c502c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5030u; }
        if (ctx->pc != 0x4C5030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5030u; }
        if (ctx->pc != 0x4C5030u) { return; }
    }
    ctx->pc = 0x4C5030u;
label_4c5030:
    // 0x4c5030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c5030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c5034:
    // 0x4c5034: 0x3e00008  jr          $ra
label_4c5038:
    if (ctx->pc == 0x4C5038u) {
        ctx->pc = 0x4C5038u;
            // 0x4c5038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4C503Cu;
        goto label_4c503c;
    }
    ctx->pc = 0x4C5034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5034u;
            // 0x4c5038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C503Cu;
label_4c503c:
    // 0x4c503c: 0x0  nop
    ctx->pc = 0x4c503cu;
    // NOP
label_4c5040:
    // 0x4c5040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c5044:
    // 0x4c5044: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x4c5044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_4c5048:
    // 0x4c5048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c504c:
    // 0x4c504c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c5050:
    // 0x4c5050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c5054:
    // 0x4c5054: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c5054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c5058:
    // 0x4c5058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c5058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c505c:
    // 0x4c505c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c505cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c5060:
    // 0x4c5060: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4c5060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c5064:
    // 0x4c5064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c5064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5068:
    // 0x4c5068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c506c:
    // 0x4c506c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4c506cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4c5070:
    // 0x4c5070: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c5074:
    // 0x4c5074: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c5074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c5078:
    // 0x4c5078: 0xc08bff0  jal         func_22FFC0
label_4c507c:
    if (ctx->pc == 0x4C507Cu) {
        ctx->pc = 0x4C507Cu;
            // 0x4c507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5080u;
        goto label_4c5080;
    }
    ctx->pc = 0x4C5078u;
    SET_GPR_U32(ctx, 31, 0x4C5080u);
    ctx->pc = 0x4C507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5078u;
            // 0x4c507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5080u; }
        if (ctx->pc != 0x4C5080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5080u; }
        if (ctx->pc != 0x4C5080u) { return; }
    }
    ctx->pc = 0x4C5080u;
label_4c5080:
    // 0x4c5080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c5080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5084:
    // 0x4c5084: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c5084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c5088:
    // 0x4c5088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c5088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c508c:
    // 0x4c508c: 0xc08914c  jal         func_224530
label_4c5090:
    if (ctx->pc == 0x4C5090u) {
        ctx->pc = 0x4C5090u;
            // 0x4c5090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5094u;
        goto label_4c5094;
    }
    ctx->pc = 0x4C508Cu;
    SET_GPR_U32(ctx, 31, 0x4C5094u);
    ctx->pc = 0x4C5090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C508Cu;
            // 0x4c5090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5094u; }
        if (ctx->pc != 0x4C5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5094u; }
        if (ctx->pc != 0x4C5094u) { return; }
    }
    ctx->pc = 0x4C5094u;
label_4c5094:
    // 0x4c5094: 0xc0e393c  jal         func_38E4F0
label_4c5098:
    if (ctx->pc == 0x4C5098u) {
        ctx->pc = 0x4C5098u;
            // 0x4c5098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C509Cu;
        goto label_4c509c;
    }
    ctx->pc = 0x4C5094u;
    SET_GPR_U32(ctx, 31, 0x4C509Cu);
    ctx->pc = 0x4C5098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5094u;
            // 0x4c5098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C509Cu; }
        if (ctx->pc != 0x4C509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C509Cu; }
        if (ctx->pc != 0x4C509Cu) { return; }
    }
    ctx->pc = 0x4C509Cu;
label_4c509c:
    // 0x4c509c: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x4c509cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
label_4c50a0:
    // 0x4c50a0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x4c50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_4c50a4:
    // 0x4c50a4: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x4c50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_4c50a8:
    // 0x4c50a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4c50a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c50ac:
    // 0x4c50ac: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4c50acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4c50b0:
    // 0x4c50b0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4c50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4c50b4:
    // 0x4c50b4: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4c50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_4c50b8:
    // 0x4c50b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4c50b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4c50bc:
    // 0x4c50bc: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x4c50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_4c50c0:
    // 0x4c50c0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4c50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4c50c4:
    // 0x4c50c4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x4c50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4c50c8:
    // 0x4c50c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4c50c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4c50cc:
    // 0x4c50cc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4c50ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4c50d0:
    // 0x4c50d0: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x4c50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_4c50d4:
    // 0x4c50d4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x4c50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c50d8:
    // 0x4c50d8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4c50d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c50dc:
    // 0x4c50dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_4c50e0:
    if (ctx->pc == 0x4C50E0u) {
        ctx->pc = 0x4C50E0u;
            // 0x4c50e0: 0x8e2900a0  lw          $t1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->pc = 0x4C50E4u;
        goto label_4c50e4;
    }
    ctx->pc = 0x4C50DCu;
    {
        const bool branch_taken_0x4c50dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C50E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C50DCu;
            // 0x4c50e0: 0x8e2900a0  lw          $t1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c50dc) {
            ctx->pc = 0x4C511Cu;
            goto label_4c511c;
        }
    }
    ctx->pc = 0x4C50E4u;
label_4c50e4:
    // 0x4c50e4: 0x8d280060  lw          $t0, 0x60($t1)
    ctx->pc = 0x4c50e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
label_4c50e8:
    // 0x4c50e8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x4c50e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c50ec:
    // 0x4c50ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c50ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c50f0:
    // 0x4c50f0: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x4c50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_4c50f4:
    // 0x4c50f4: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x4c50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_4c50f8:
    // 0x4c50f8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4c50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4c50fc:
    // 0x4c50fc: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x4c50fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_4c5100:
    // 0x4c5100: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x4c5100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_4c5104:
    // 0x4c5104: 0xad270060  sw          $a3, 0x60($t1)
    ctx->pc = 0x4c5104u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 7));
label_4c5108:
    // 0x4c5108: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x4c5108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_4c510c:
    // 0x4c510c: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x4c510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_4c5110:
    // 0x4c5110: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4c5110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4c5114:
    // 0x4c5114: 0x1000000d  b           . + 4 + (0xD << 2)
label_4c5118:
    if (ctx->pc == 0x4C5118u) {
        ctx->pc = 0x4C5118u;
            // 0x4c5118: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x4C511Cu;
        goto label_4c511c;
    }
    ctx->pc = 0x4C5114u;
    {
        const bool branch_taken_0x4c5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5114u;
            // 0x4c5118: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5114) {
            ctx->pc = 0x4C514Cu;
            goto label_4c514c;
        }
    }
    ctx->pc = 0x4C511Cu;
label_4c511c:
    // 0x4c511c: 0x8d280060  lw          $t0, 0x60($t1)
    ctx->pc = 0x4c511cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
label_4c5120:
    // 0x4c5120: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x4c5120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4c5124:
    // 0x4c5124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c5124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c5128:
    // 0x4c5128: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x4c5128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_4c512c:
    // 0x4c512c: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4c512cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4c5130:
    // 0x4c5130: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4c5130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4c5134:
    // 0x4c5134: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x4c5134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_4c5138:
    // 0x4c5138: 0xad270060  sw          $a3, 0x60($t1)
    ctx->pc = 0x4c5138u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 7));
label_4c513c:
    // 0x4c513c: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x4c513cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_4c5140:
    // 0x4c5140: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x4c5140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_4c5144:
    // 0x4c5144: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4c5144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4c5148:
    // 0x4c5148: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4c5148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4c514c:
    // 0x4c514c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c5150:
    // 0x4c5150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c5150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c5154:
    // 0x4c5154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c5154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c5158:
    // 0x4c5158: 0x3e00008  jr          $ra
label_4c515c:
    if (ctx->pc == 0x4C515Cu) {
        ctx->pc = 0x4C515Cu;
            // 0x4c515c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C5160u;
        goto label_4c5160;
    }
    ctx->pc = 0x4C5158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5158u;
            // 0x4c515c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5160u;
label_4c5160:
    // 0x4c5160: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c5164:
    // 0x4c5164: 0x3e00008  jr          $ra
label_4c5168:
    if (ctx->pc == 0x4C5168u) {
        ctx->pc = 0x4C5168u;
            // 0x4c5168: 0x244271e0  addiu       $v0, $v0, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29152));
        ctx->pc = 0x4C516Cu;
        goto label_4c516c;
    }
    ctx->pc = 0x4C5164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5164u;
            // 0x4c5168: 0x244271e0  addiu       $v0, $v0, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C516Cu;
label_4c516c:
    // 0x4c516c: 0x0  nop
    ctx->pc = 0x4c516cu;
    // NOP
label_4c5170:
    // 0x4c5170: 0x3e00008  jr          $ra
label_4c5174:
    if (ctx->pc == 0x4C5174u) {
        ctx->pc = 0x4C5174u;
            // 0x4c5174: 0x2402659a  addiu       $v0, $zero, 0x659A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26010));
        ctx->pc = 0x4C5178u;
        goto label_4c5178;
    }
    ctx->pc = 0x4C5170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5170u;
            // 0x4c5174: 0x2402659a  addiu       $v0, $zero, 0x659A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5178u;
label_4c5178:
    // 0x4c5178: 0x0  nop
    ctx->pc = 0x4c5178u;
    // NOP
label_4c517c:
    // 0x4c517c: 0x0  nop
    ctx->pc = 0x4c517cu;
    // NOP
label_4c5180:
    // 0x4c5180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c5180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c5184:
    // 0x4c5184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c5184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c5188:
    // 0x4c5188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c518c:
    // 0x4c518c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c5190:
    // 0x4c5190: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c5190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c5194:
    // 0x4c5194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c5194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c5198:
    // 0x4c5198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c519c:
    // 0x4c519c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c51a0:
    // 0x4c51a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c51a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c51a4:
    // 0x4c51a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c51a8:
    if (ctx->pc == 0x4C51A8u) {
        ctx->pc = 0x4C51A8u;
            // 0x4c51a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C51ACu;
        goto label_4c51ac;
    }
    ctx->pc = 0x4C51A4u;
    {
        const bool branch_taken_0x4c51a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C51A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C51A4u;
            // 0x4c51a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c51a4) {
            ctx->pc = 0x4C51E8u;
            goto label_4c51e8;
        }
    }
    ctx->pc = 0x4C51ACu;
label_4c51ac:
    // 0x4c51ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c51acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c51b0:
    // 0x4c51b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c51b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c51b4:
    // 0x4c51b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c51b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c51b8:
    // 0x4c51b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c51bc:
    // 0x4c51bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c51c0:
    // 0x4c51c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c51c4:
    // 0x4c51c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c51c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c51c8:
    // 0x4c51c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c51c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c51cc:
    // 0x4c51cc: 0x320f809  jalr        $t9
label_4c51d0:
    if (ctx->pc == 0x4C51D0u) {
        ctx->pc = 0x4C51D4u;
        goto label_4c51d4;
    }
    ctx->pc = 0x4C51CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C51D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C51D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C51D4u; }
            if (ctx->pc != 0x4C51D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C51D4u;
label_4c51d4:
    // 0x4c51d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c51d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c51d8:
    // 0x4c51d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c51d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c51dc:
    // 0x4c51dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c51dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c51e0:
    // 0x4c51e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c51e4:
    if (ctx->pc == 0x4C51E4u) {
        ctx->pc = 0x4C51E4u;
            // 0x4c51e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C51E8u;
        goto label_4c51e8;
    }
    ctx->pc = 0x4C51E0u;
    {
        const bool branch_taken_0x4c51e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C51E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C51E0u;
            // 0x4c51e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c51e0) {
            ctx->pc = 0x4C51B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c51b8;
        }
    }
    ctx->pc = 0x4C51E8u;
label_4c51e8:
    // 0x4c51e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c51e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c51ec:
    // 0x4c51ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c51ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c51f0:
    // 0x4c51f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c51f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c51f4:
    // 0x4c51f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c51f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c51f8:
    // 0x4c51f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c51f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c51fc:
    // 0x4c51fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c51fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c5200:
    // 0x4c5200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c5200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c5204:
    // 0x4c5204: 0x3e00008  jr          $ra
label_4c5208:
    if (ctx->pc == 0x4C5208u) {
        ctx->pc = 0x4C5208u;
            // 0x4c5208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C520Cu;
        goto label_4c520c;
    }
    ctx->pc = 0x4C5204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C5208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5204u;
            // 0x4c5208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C520Cu;
label_4c520c:
    // 0x4c520c: 0x0  nop
    ctx->pc = 0x4c520cu;
    // NOP
label_4c5210:
    // 0x4c5210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c5214:
    // 0x4c5214: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c5214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c5218:
    // 0x4c5218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c5218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c521c:
    // 0x4c521c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4c521cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c5220:
    // 0x4c5220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c5220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c5224:
    // 0x4c5224: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4c5224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c5228:
    // 0x4c5228: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c5228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c522c:
    // 0x4c522c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4c522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4c5230:
    // 0x4c5230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c5230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c5234:
    // 0x4c5234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c5238:
    // 0x4c5238: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4c5238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4c523c:
    // 0x4c523c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4c523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5240:
    // 0x4c5240: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c5240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c5244:
    // 0x4c5244: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c5244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c5248:
    // 0x4c5248: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4c524c:
    // 0x4c524c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4c524cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4c5250:
    // 0x4c5250: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4c5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c5254:
    // 0x4c5254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c5254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c5258:
    // 0x4c5258: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4c5258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4c525c:
    // 0x4c525c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4c525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c5260:
    // 0x4c5260: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4c5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4c5264:
    // 0x4c5264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c5264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c5268:
    // 0x4c5268: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c5268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c526c:
    // 0x4c526c: 0xc0a997c  jal         func_2A65F0
label_4c5270:
    if (ctx->pc == 0x4C5270u) {
        ctx->pc = 0x4C5270u;
            // 0x4c5270: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4C5274u;
        goto label_4c5274;
    }
    ctx->pc = 0x4C526Cu;
    SET_GPR_U32(ctx, 31, 0x4C5274u);
    ctx->pc = 0x4C5270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C526Cu;
            // 0x4c5270: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5274u; }
        if (ctx->pc != 0x4C5274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5274u; }
        if (ctx->pc != 0x4C5274u) { return; }
    }
    ctx->pc = 0x4C5274u;
label_4c5274:
    // 0x4c5274: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4c5274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4c5278:
    // 0x4c5278: 0xc0d879c  jal         func_361E70
label_4c527c:
    if (ctx->pc == 0x4C527Cu) {
        ctx->pc = 0x4C527Cu;
            // 0x4c527c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5280u;
        goto label_4c5280;
    }
    ctx->pc = 0x4C5278u;
    SET_GPR_U32(ctx, 31, 0x4C5280u);
    ctx->pc = 0x4C527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5278u;
            // 0x4c527c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5280u; }
        if (ctx->pc != 0x4C5280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5280u; }
        if (ctx->pc != 0x4C5280u) { return; }
    }
    ctx->pc = 0x4C5280u;
label_4c5280:
    // 0x4c5280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c5280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c5284:
    // 0x4c5284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c5284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c5288:
    // 0x4c5288: 0x3e00008  jr          $ra
label_4c528c:
    if (ctx->pc == 0x4C528Cu) {
        ctx->pc = 0x4C528Cu;
            // 0x4c528c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C5290u;
        goto label_4c5290;
    }
    ctx->pc = 0x4C5288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5288u;
            // 0x4c528c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5290u;
label_4c5290:
    // 0x4c5290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c5294:
    // 0x4c5294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c5298:
    // 0x4c5298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c5298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c529c:
    // 0x4c529c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c52a0:
    // 0x4c52a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c52a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c52a4:
    // 0x4c52a4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c52a8:
    // 0x4c52a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4c52ac:
    if (ctx->pc == 0x4C52ACu) {
        ctx->pc = 0x4C52ACu;
            // 0x4c52ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C52B0u;
        goto label_4c52b0;
    }
    ctx->pc = 0x4C52A8u;
    {
        const bool branch_taken_0x4c52a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C52ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C52A8u;
            // 0x4c52ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c52a8) {
            ctx->pc = 0x4C52D8u;
            goto label_4c52d8;
        }
    }
    ctx->pc = 0x4C52B0u;
label_4c52b0:
    // 0x4c52b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c52b4:
    // 0x4c52b4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4c52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4c52b8:
    // 0x4c52b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c52b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c52bc:
    // 0x4c52bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c52bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c52c0:
    // 0x4c52c0: 0x320f809  jalr        $t9
label_4c52c4:
    if (ctx->pc == 0x4C52C4u) {
        ctx->pc = 0x4C52C8u;
        goto label_4c52c8;
    }
    ctx->pc = 0x4C52C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C52C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C52C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C52C8u; }
            if (ctx->pc != 0x4C52C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C52C8u;
label_4c52c8:
    // 0x4c52c8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4c52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4c52cc:
    // 0x4c52cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c52ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c52d0:
    // 0x4c52d0: 0xc138aec  jal         func_4E2BB0
label_4c52d4:
    if (ctx->pc == 0x4C52D4u) {
        ctx->pc = 0x4C52D4u;
            // 0x4c52d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C52D8u;
        goto label_4c52d8;
    }
    ctx->pc = 0x4C52D0u;
    SET_GPR_U32(ctx, 31, 0x4C52D8u);
    ctx->pc = 0x4C52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C52D0u;
            // 0x4c52d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E2BB0u;
    if (runtime->hasFunction(0x4E2BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4E2BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C52D8u; }
        if (ctx->pc != 0x4C52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E2BB0_0x4e2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C52D8u; }
        if (ctx->pc != 0x4C52D8u) { return; }
    }
    ctx->pc = 0x4C52D8u;
label_4c52d8:
    // 0x4c52d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c52d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c52dc:
    // 0x4c52dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c52dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c52e0:
    // 0x4c52e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c52e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c52e4:
    // 0x4c52e4: 0x3e00008  jr          $ra
label_4c52e8:
    if (ctx->pc == 0x4C52E8u) {
        ctx->pc = 0x4C52E8u;
            // 0x4c52e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C52ECu;
        goto label_4c52ec;
    }
    ctx->pc = 0x4C52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C52E4u;
            // 0x4c52e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C52ECu;
label_4c52ec:
    // 0x4c52ec: 0x0  nop
    ctx->pc = 0x4c52ecu;
    // NOP
label_4c52f0:
    // 0x4c52f0: 0x81310ec  j           func_4C43B0
label_4c52f4:
    if (ctx->pc == 0x4C52F4u) {
        ctx->pc = 0x4C52F4u;
            // 0x4c52f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C52F8u;
        goto label_4c52f8;
    }
    ctx->pc = 0x4C52F0u;
    ctx->pc = 0x4C52F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C52F0u;
            // 0x4c52f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C43B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C43B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C52F8u;
label_4c52f8:
    // 0x4c52f8: 0x0  nop
    ctx->pc = 0x4c52f8u;
    // NOP
label_4c52fc:
    // 0x4c52fc: 0x0  nop
    ctx->pc = 0x4c52fcu;
    // NOP
label_4c5300:
    // 0x4c5300: 0x8130f88  j           func_4C3E20
label_4c5304:
    if (ctx->pc == 0x4C5304u) {
        ctx->pc = 0x4C5304u;
            // 0x4c5304: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C5308u;
        goto label_4c5308;
    }
    ctx->pc = 0x4C5300u;
    ctx->pc = 0x4C5304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5300u;
            // 0x4c5304: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3E20u;
    if (runtime->hasFunction(0x4C3E20u)) {
        auto targetFn = runtime->lookupFunction(0x4C3E20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004C3E20_0x4c3e20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C5308u;
label_4c5308:
    // 0x4c5308: 0x0  nop
    ctx->pc = 0x4c5308u;
    // NOP
label_4c530c:
    // 0x4c530c: 0x0  nop
    ctx->pc = 0x4c530cu;
    // NOP
label_4c5310:
    // 0x4c5310: 0x8130ff4  j           func_4C3FD0
label_4c5314:
    if (ctx->pc == 0x4C5314u) {
        ctx->pc = 0x4C5314u;
            // 0x4c5314: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4C5318u;
        goto label_4c5318;
    }
    ctx->pc = 0x4C5310u;
    ctx->pc = 0x4C5314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5310u;
            // 0x4c5314: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3FD0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C3FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C5318u;
label_4c5318:
    // 0x4c5318: 0x0  nop
    ctx->pc = 0x4c5318u;
    // NOP
label_4c531c:
    // 0x4c531c: 0x0  nop
    ctx->pc = 0x4c531cu;
    // NOP
label_4c5320:
    // 0x4c5320: 0x8130f60  j           func_4C3D80
label_4c5324:
    if (ctx->pc == 0x4C5324u) {
        ctx->pc = 0x4C5324u;
            // 0x4c5324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C5328u;
        goto label_4c5328;
    }
    ctx->pc = 0x4C5320u;
    ctx->pc = 0x4C5324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5320u;
            // 0x4c5324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C3D80u;
    {
        auto targetFn = runtime->lookupFunction(0x4C3D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C5328u;
label_4c5328:
    // 0x4c5328: 0x0  nop
    ctx->pc = 0x4c5328u;
    // NOP
label_4c532c:
    // 0x4c532c: 0x0  nop
    ctx->pc = 0x4c532cu;
    // NOP
}
