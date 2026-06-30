#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E47A0
// Address: 0x1e47a0 - 0x1e4cc0
void sub_001E47A0_0x1e47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E47A0_0x1e47a0");
#endif

    switch (ctx->pc) {
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        case 0x1e47f8u: goto label_1e47f8;
        case 0x1e47fcu: goto label_1e47fc;
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        case 0x1e4894u: goto label_1e4894;
        case 0x1e4898u: goto label_1e4898;
        case 0x1e489cu: goto label_1e489c;
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        case 0x1e4908u: goto label_1e4908;
        case 0x1e490cu: goto label_1e490c;
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4914u: goto label_1e4914;
        case 0x1e4918u: goto label_1e4918;
        case 0x1e491cu: goto label_1e491c;
        case 0x1e4920u: goto label_1e4920;
        case 0x1e4924u: goto label_1e4924;
        case 0x1e4928u: goto label_1e4928;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4934u: goto label_1e4934;
        case 0x1e4938u: goto label_1e4938;
        case 0x1e493cu: goto label_1e493c;
        case 0x1e4940u: goto label_1e4940;
        case 0x1e4944u: goto label_1e4944;
        case 0x1e4948u: goto label_1e4948;
        case 0x1e494cu: goto label_1e494c;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e4954u: goto label_1e4954;
        case 0x1e4958u: goto label_1e4958;
        case 0x1e495cu: goto label_1e495c;
        case 0x1e4960u: goto label_1e4960;
        case 0x1e4964u: goto label_1e4964;
        case 0x1e4968u: goto label_1e4968;
        case 0x1e496cu: goto label_1e496c;
        case 0x1e4970u: goto label_1e4970;
        case 0x1e4974u: goto label_1e4974;
        case 0x1e4978u: goto label_1e4978;
        case 0x1e497cu: goto label_1e497c;
        case 0x1e4980u: goto label_1e4980;
        case 0x1e4984u: goto label_1e4984;
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        default: break;
    }

    ctx->pc = 0x1e47a0u;

label_1e47a0:
    // 0x1e47a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e47a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e47a4:
    // 0x1e47a4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_1e47a8:
    // 0x1e47a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e47a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e47ac:
    // 0x1e47ac: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_1e47b0:
    // 0x1e47b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e47b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e47b4:
    // 0x1e47b4: 0x244248f0  addiu       $v0, $v0, 0x48F0
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18672));
label_1e47b8:
    // 0x1e47b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e47bc:
    // 0x1e47bc: 0x246362d0  addiu       $v1, $v1, 0x62D0
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25296));
label_1e47c0:
    // 0x1e47c0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_1e47c4:
    // 0x1e47c4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e47c8:
    // 0x1e47c8: 0x24426190  addiu       $v0, $v0, 0x6190
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24976));
label_1e47cc:
    // 0x1e47cc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_1e47d0:
    // 0x1e47d0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1e47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1e47d4:
    // 0x1e47d4: 0x24635fb0  addiu       $v1, $v1, 0x5FB0
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24496));
label_1e47d8:
    // 0x1e47d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e47dc:
    // 0x1e47dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e47dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e47e0:
    // 0x1e47e0: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1e47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_1e47e4:
    // 0x1e47e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e47e8:
    // 0x1e47e8: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1e47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
label_1e47ec:
    // 0x1e47ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e47f0:
    // 0x1e47f0: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x1e47f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
label_1e47f4:
    // 0x1e47f4: 0xc07ff48  jal         func_1FFD20
label_1e47f8:
    if (ctx->pc == 0x1E47F8u) {
        ctx->pc = 0x1E47F8u;
            // 0x1e47f8: 0x2407001b  addiu       $a3, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x1E47FCu;
        goto label_1e47fc;
    }
    ctx->pc = 0x1E47F4u;
    SET_GPR_U32(ctx, 31, 0x1E47FCu);
    ctx->pc = 0x1E47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47F4u;
            // 0x1e47f8: 0x2407001b  addiu       $a3, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47FCu; }
        if (ctx->pc != 0x1E47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47FCu; }
        if (ctx->pc != 0x1E47FCu) { return; }
    }
    ctx->pc = 0x1E47FCu;
label_1e47fc:
    // 0x1e47fc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_1e4800:
    // 0x1e4800: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e4800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_1e4804:
    // 0x1e4804: 0x24424860  addiu       $v0, $v0, 0x4860
    ctx->pc = 0x1e4804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18528));
label_1e4808:
    // 0x1e4808: 0x24635b70  addiu       $v1, $v1, 0x5B70
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23408));
label_1e480c:
    // 0x1e480c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1e480cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1e4810:
    // 0x1e4810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4814:
    // 0x1e4814: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e4814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_1e4818:
    // 0x1e4818: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1e4818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1e481c:
    // 0x1e481c: 0x24425880  addiu       $v0, $v0, 0x5880
    ctx->pc = 0x1e481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
label_1e4820:
    // 0x1e4820: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_1e4824:
    // 0x1e4824: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1e4824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1e4828:
    // 0x1e4828: 0x24635400  addiu       $v1, $v1, 0x5400
    ctx->pc = 0x1e4828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
label_1e482c:
    // 0x1e482c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4830:
    // 0x1e4830: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1e4830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_1e4834:
    // 0x1e4834: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e4838:
    // 0x1e4838: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1e4838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_1e483c:
    // 0x1e483c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1e483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e4840:
    // 0x1e4840: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e4840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4844:
    // 0x1e4844: 0xc07ff48  jal         func_1FFD20
label_1e4848:
    if (ctx->pc == 0x1E4848u) {
        ctx->pc = 0x1E4848u;
            // 0x1e4848: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E484Cu;
        goto label_1e484c;
    }
    ctx->pc = 0x1E4844u;
    SET_GPR_U32(ctx, 31, 0x1E484Cu);
    ctx->pc = 0x1E4848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4844u;
            // 0x1e4848: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E484Cu; }
        if (ctx->pc != 0x1E484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E484Cu; }
        if (ctx->pc != 0x1E484Cu) { return; }
    }
    ctx->pc = 0x1E484Cu;
label_1e484c:
    // 0x1e484c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e484cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4850:
    // 0x1e4850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4854:
    // 0x1e4854: 0x3e00008  jr          $ra
label_1e4858:
    if (ctx->pc == 0x1E4858u) {
        ctx->pc = 0x1E4858u;
            // 0x1e4858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E485Cu;
        goto label_1e485c;
    }
    ctx->pc = 0x1E4854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4854u;
            // 0x1e4858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E485Cu;
label_1e485c:
    // 0x1e485c: 0x0  nop
    ctx->pc = 0x1e485cu;
    // NOP
label_1e4860:
    // 0x1e4860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4864:
    // 0x1e4864: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4868:
    // 0x1e4868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e486c:
    // 0x1e486c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4870:
    // 0x1e4870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4874:
    // 0x1e4874: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4878:
    // 0x1e4878: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e4878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e487c:
    // 0x1e487c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4880:
    // 0x1e4880: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e4880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4884:
    // 0x1e4884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4888:
    // 0x1e4888: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e4888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e488c:
    // 0x1e488c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e4890:
    // 0x1e4890: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e4890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4894:
    // 0x1e4894: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4898:
    // 0x1e4898: 0xc0a7a88  jal         func_29EA20
label_1e489c:
    if (ctx->pc == 0x1E489Cu) {
        ctx->pc = 0x1E489Cu;
            // 0x1e489c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E48A0u;
        goto label_1e48a0;
    }
    ctx->pc = 0x1E4898u;
    SET_GPR_U32(ctx, 31, 0x1E48A0u);
    ctx->pc = 0x1E489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4898u;
            // 0x1e489c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48A0u; }
        if (ctx->pc != 0x1E48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48A0u; }
        if (ctx->pc != 0x1E48A0u) { return; }
    }
    ctx->pc = 0x1E48A0u;
label_1e48a0:
    // 0x1e48a0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e48a4:
    // 0x1e48a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e48a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e48a8:
    // 0x1e48a8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1e48ac:
    if (ctx->pc == 0x1E48ACu) {
        ctx->pc = 0x1E48ACu;
            // 0x1e48ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1E48B0u;
        goto label_1e48b0;
    }
    ctx->pc = 0x1E48A8u;
    {
        const bool branch_taken_0x1e48a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48A8u;
            // 0x1e48ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48a8) {
            ctx->pc = 0x1E48C8u;
            goto label_1e48c8;
        }
    }
    ctx->pc = 0x1E48B0u;
label_1e48b0:
    // 0x1e48b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e48b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e48b4:
    // 0x1e48b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e48b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e48b8:
    // 0x1e48b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e48b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e48bc:
    // 0x1e48bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e48bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e48c0:
    // 0x1e48c0: 0xc0791ac  jal         func_1E46B0
label_1e48c4:
    if (ctx->pc == 0x1E48C4u) {
        ctx->pc = 0x1E48C4u;
            // 0x1e48c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E48C8u;
        goto label_1e48c8;
    }
    ctx->pc = 0x1E48C0u;
    SET_GPR_U32(ctx, 31, 0x1E48C8u);
    ctx->pc = 0x1E48C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48C0u;
            // 0x1e48c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E46B0u;
    if (runtime->hasFunction(0x1E46B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E46B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48C8u; }
        if (ctx->pc != 0x1E48C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E46B0_0x1e46b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48C8u; }
        if (ctx->pc != 0x1E48C8u) { return; }
    }
    ctx->pc = 0x1E48C8u;
label_1e48c8:
    // 0x1e48c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e48c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e48cc:
    // 0x1e48cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e48d0:
    // 0x1e48d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e48d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e48d4:
    // 0x1e48d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e48d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e48d8:
    // 0x1e48d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e48d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e48dc:
    // 0x1e48dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e48dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e48e0:
    // 0x1e48e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e48e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e48e4:
    // 0x1e48e4: 0x3e00008  jr          $ra
label_1e48e8:
    if (ctx->pc == 0x1E48E8u) {
        ctx->pc = 0x1E48E8u;
            // 0x1e48e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E48ECu;
        goto label_1e48ec;
    }
    ctx->pc = 0x1E48E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E48E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48E4u;
            // 0x1e48e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E48ECu;
label_1e48ec:
    // 0x1e48ec: 0x0  nop
    ctx->pc = 0x1e48ecu;
    // NOP
label_1e48f0:
    // 0x1e48f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e48f4:
    // 0x1e48f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e48f8:
    // 0x1e48f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e48fc:
    // 0x1e48fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4900:
    // 0x1e4900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4904:
    // 0x1e4904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4908:
    // 0x1e4908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e490c:
    // 0x1e490c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e490cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4910:
    // 0x1e4910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4914:
    // 0x1e4914: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e4914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4918:
    // 0x1e4918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e491c:
    // 0x1e491c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e491cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4920:
    // 0x1e4920: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e4920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e4924:
    // 0x1e4924: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4928:
    // 0x1e4928: 0xc0a7a88  jal         func_29EA20
label_1e492c:
    if (ctx->pc == 0x1E492Cu) {
        ctx->pc = 0x1E492Cu;
            // 0x1e492c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E4930u;
        goto label_1e4930;
    }
    ctx->pc = 0x1E4928u;
    SET_GPR_U32(ctx, 31, 0x1E4930u);
    ctx->pc = 0x1E492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4928u;
            // 0x1e492c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    }
    ctx->pc = 0x1E4930u;
label_1e4930:
    // 0x1e4930: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4934:
    // 0x1e4934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4938:
    // 0x1e4938: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1e493c:
    if (ctx->pc == 0x1E493Cu) {
        ctx->pc = 0x1E493Cu;
            // 0x1e493c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1E4940u;
        goto label_1e4940;
    }
    ctx->pc = 0x1E4938u;
    {
        const bool branch_taken_0x1e4938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4938u;
            // 0x1e493c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4938) {
            ctx->pc = 0x1E4970u;
            goto label_1e4970;
        }
    }
    ctx->pc = 0x1E4940u;
label_1e4940:
    // 0x1e4940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4944:
    // 0x1e4944: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1e4944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4948:
    // 0x1e4948: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e494c:
    // 0x1e494c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e494cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4950:
    // 0x1e4950: 0xc0791ac  jal         func_1E46B0
label_1e4954:
    if (ctx->pc == 0x1E4954u) {
        ctx->pc = 0x1E4954u;
            // 0x1e4954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4958u;
        goto label_1e4958;
    }
    ctx->pc = 0x1E4950u;
    SET_GPR_U32(ctx, 31, 0x1E4958u);
    ctx->pc = 0x1E4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4950u;
            // 0x1e4954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E46B0u;
    if (runtime->hasFunction(0x1E46B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E46B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E46B0_0x1e46b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    }
    ctx->pc = 0x1E4958u;
label_1e4958:
    // 0x1e4958: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e4958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e495c:
    // 0x1e495c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4960:
    // 0x1e4960: 0x2463d580  addiu       $v1, $v1, -0x2A80
    ctx->pc = 0x1e4960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956416));
label_1e4964:
    // 0x1e4964: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x1e4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
label_1e4968:
    // 0x1e4968: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e4968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e496c:
    // 0x1e496c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e4970:
    // 0x1e4970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4974:
    // 0x1e4974: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4978:
    // 0x1e4978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e497c:
    // 0x1e497c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e497cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4980:
    // 0x1e4980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4984:
    // 0x1e4984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4988:
    // 0x1e4988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e498c:
    // 0x1e498c: 0x3e00008  jr          $ra
label_1e4990:
    if (ctx->pc == 0x1E4990u) {
        ctx->pc = 0x1E4990u;
            // 0x1e4990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E4994u;
        goto label_1e4994;
    }
    ctx->pc = 0x1E498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E498Cu;
            // 0x1e4990: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4994u;
label_1e4994:
    // 0x1e4994: 0x0  nop
    ctx->pc = 0x1e4994u;
    // NOP
label_1e4998:
    // 0x1e4998: 0x0  nop
    ctx->pc = 0x1e4998u;
    // NOP
label_1e499c:
    // 0x1e499c: 0x0  nop
    ctx->pc = 0x1e499cu;
    // NOP
label_1e49a0:
    // 0x1e49a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e49a4:
    // 0x1e49a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e49a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e49a8:
    // 0x1e49a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e49ac:
    // 0x1e49ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e49acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e49b0:
    // 0x1e49b0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1e49b4:
    if (ctx->pc == 0x1E49B4u) {
        ctx->pc = 0x1E49B4u;
            // 0x1e49b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E49B8u;
        goto label_1e49b8;
    }
    ctx->pc = 0x1E49B0u;
    {
        const bool branch_taken_0x1e49b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e49b0) {
            ctx->pc = 0x1E49B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49B0u;
            // 0x1e49b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4A30u;
            goto label_1e4a30;
        }
    }
    ctx->pc = 0x1E49B8u;
label_1e49b8:
    // 0x1e49b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e49bc:
    // 0x1e49bc: 0x2442d580  addiu       $v0, $v0, -0x2A80
    ctx->pc = 0x1e49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
label_1e49c0:
    // 0x1e49c0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C4u;
            // 0x1e49c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    {
        const bool branch_taken_0x1e49c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49C0u;
            // 0x1e49c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49c0) {
            ctx->pc = 0x1E4A04u;
            goto label_1e4a04;
        }
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e49cc:
    // 0x1e49cc: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x1e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
label_1e49d0:
    // 0x1e49d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1e49d4:
    if (ctx->pc == 0x1E49D4u) {
        ctx->pc = 0x1E49D4u;
            // 0x1e49d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E49D8u;
        goto label_1e49d8;
    }
    ctx->pc = 0x1E49D0u;
    {
        const bool branch_taken_0x1e49d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49D0u;
            // 0x1e49d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49d0) {
            ctx->pc = 0x1E4A04u;
            goto label_1e4a04;
        }
    }
    ctx->pc = 0x1E49D8u;
label_1e49d8:
    // 0x1e49d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e49dc:
    // 0x1e49dc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e49e0:
    // 0x1e49e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e49e4:
    if (ctx->pc == 0x1E49E4u) {
        ctx->pc = 0x1E49E4u;
            // 0x1e49e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E49E8u;
        goto label_1e49e8;
    }
    ctx->pc = 0x1E49E0u;
    {
        const bool branch_taken_0x1e49e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49E0u;
            // 0x1e49e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49e0) {
            ctx->pc = 0x1E4A04u;
            goto label_1e4a04;
        }
    }
    ctx->pc = 0x1E49E8u;
label_1e49e8:
    // 0x1e49e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e49ec:
    // 0x1e49ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e49f0:
    // 0x1e49f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e49f4:
    if (ctx->pc == 0x1E49F4u) {
        ctx->pc = 0x1E49F4u;
            // 0x1e49f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E49F8u;
        goto label_1e49f8;
    }
    ctx->pc = 0x1E49F0u;
    {
        const bool branch_taken_0x1e49f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49F0u;
            // 0x1e49f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49f0) {
            ctx->pc = 0x1E4A04u;
            goto label_1e4a04;
        }
    }
    ctx->pc = 0x1E49F8u;
label_1e49f8:
    // 0x1e49f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e49fc:
    // 0x1e49fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e4a00:
    // 0x1e4a00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e4a04:
    // 0x1e4a04: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e4a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e4a08:
    // 0x1e4a08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4a08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e4a0c:
    // 0x1e4a0c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e4a10:
    if (ctx->pc == 0x1E4A10u) {
        ctx->pc = 0x1E4A14u;
        goto label_1e4a14;
    }
    ctx->pc = 0x1E4A0Cu;
    {
        const bool branch_taken_0x1e4a0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e4a0c) {
            ctx->pc = 0x1E4A2Cu;
            goto label_1e4a2c;
        }
    }
    ctx->pc = 0x1E4A14u;
label_1e4a14:
    // 0x1e4a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4a18:
    // 0x1e4a18: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e4a18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e4a1c:
    // 0x1e4a1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e4a20:
    // 0x1e4a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a24:
    // 0x1e4a24: 0xc0a7ab4  jal         func_29EAD0
label_1e4a28:
    if (ctx->pc == 0x1E4A28u) {
        ctx->pc = 0x1E4A28u;
            // 0x1e4a28: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E4A2Cu;
        goto label_1e4a2c;
    }
    ctx->pc = 0x1E4A24u;
    SET_GPR_U32(ctx, 31, 0x1E4A2Cu);
    ctx->pc = 0x1E4A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A24u;
            // 0x1e4a28: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A2Cu; }
        if (ctx->pc != 0x1E4A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A2Cu; }
        if (ctx->pc != 0x1E4A2Cu) { return; }
    }
    ctx->pc = 0x1E4A2Cu;
label_1e4a2c:
    // 0x1e4a2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a30:
    // 0x1e4a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4a34:
    // 0x1e4a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4a38:
    // 0x1e4a38: 0x3e00008  jr          $ra
label_1e4a3c:
    if (ctx->pc == 0x1E4A3Cu) {
        ctx->pc = 0x1E4A3Cu;
            // 0x1e4a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4A40u;
        goto label_1e4a40;
    }
    ctx->pc = 0x1E4A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A38u;
            // 0x1e4a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4A40u;
label_1e4a40:
    // 0x1e4a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e4a44:
    // 0x1e4a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e4a48:
    // 0x1e4a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4a4c:
    // 0x1e4a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a50:
    // 0x1e4a50: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1e4a54:
    if (ctx->pc == 0x1E4A54u) {
        ctx->pc = 0x1E4A54u;
            // 0x1e4a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A58u;
        goto label_1e4a58;
    }
    ctx->pc = 0x1E4A50u;
    {
        const bool branch_taken_0x1e4a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a50) {
            ctx->pc = 0x1E4A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A50u;
            // 0x1e4a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4AC0u;
            goto label_1e4ac0;
        }
    }
    ctx->pc = 0x1E4A58u;
label_1e4a58:
    // 0x1e4a58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4a5c:
    // 0x1e4a5c: 0x2442d500  addiu       $v0, $v0, -0x2B00
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956288));
label_1e4a60:
    // 0x1e4a60: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1e4a64:
    if (ctx->pc == 0x1E4A64u) {
        ctx->pc = 0x1E4A64u;
            // 0x1e4a64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4A68u;
        goto label_1e4a68;
    }
    ctx->pc = 0x1E4A60u;
    {
        const bool branch_taken_0x1e4a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A60u;
            // 0x1e4a64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a60) {
            ctx->pc = 0x1E4A94u;
            goto label_1e4a94;
        }
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4a6c:
    // 0x1e4a6c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e4a70:
    // 0x1e4a70: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e4a74:
    if (ctx->pc == 0x1E4A74u) {
        ctx->pc = 0x1E4A74u;
            // 0x1e4a74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4A78u;
        goto label_1e4a78;
    }
    ctx->pc = 0x1E4A70u;
    {
        const bool branch_taken_0x1e4a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A70u;
            // 0x1e4a74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a70) {
            ctx->pc = 0x1E4A94u;
            goto label_1e4a94;
        }
    }
    ctx->pc = 0x1E4A78u;
label_1e4a78:
    // 0x1e4a78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4a7c:
    // 0x1e4a7c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e4a80:
    // 0x1e4a80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e4a84:
    if (ctx->pc == 0x1E4A84u) {
        ctx->pc = 0x1E4A84u;
            // 0x1e4a84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4A88u;
        goto label_1e4a88;
    }
    ctx->pc = 0x1E4A80u;
    {
        const bool branch_taken_0x1e4a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A80u;
            // 0x1e4a84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a80) {
            ctx->pc = 0x1E4A94u;
            goto label_1e4a94;
        }
    }
    ctx->pc = 0x1E4A88u;
label_1e4a88:
    // 0x1e4a88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e4a8c:
    // 0x1e4a8c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e4a90:
    // 0x1e4a90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e4a94:
    // 0x1e4a94: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e4a98:
    // 0x1e4a98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e4a98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e4a9c:
    // 0x1e4a9c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e4aa0:
    if (ctx->pc == 0x1E4AA0u) {
        ctx->pc = 0x1E4AA4u;
        goto label_1e4aa4;
    }
    ctx->pc = 0x1E4A9Cu;
    {
        const bool branch_taken_0x1e4a9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e4a9c) {
            ctx->pc = 0x1E4ABCu;
            goto label_1e4abc;
        }
    }
    ctx->pc = 0x1E4AA4u;
label_1e4aa4:
    // 0x1e4aa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e4aa8:
    // 0x1e4aa8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e4aa8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e4aac:
    // 0x1e4aac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e4ab0:
    // 0x1e4ab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ab4:
    // 0x1e4ab4: 0xc0a7ab4  jal         func_29EAD0
label_1e4ab8:
    if (ctx->pc == 0x1E4AB8u) {
        ctx->pc = 0x1E4AB8u;
            // 0x1e4ab8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E4ABCu;
        goto label_1e4abc;
    }
    ctx->pc = 0x1E4AB4u;
    SET_GPR_U32(ctx, 31, 0x1E4ABCu);
    ctx->pc = 0x1E4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AB4u;
            // 0x1e4ab8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ABCu; }
        if (ctx->pc != 0x1E4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ABCu; }
        if (ctx->pc != 0x1E4ABCu) { return; }
    }
    ctx->pc = 0x1E4ABCu;
label_1e4abc:
    // 0x1e4abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e4abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ac0:
    // 0x1e4ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4ac4:
    // 0x1e4ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4ac8:
    // 0x1e4ac8: 0x3e00008  jr          $ra
label_1e4acc:
    if (ctx->pc == 0x1E4ACCu) {
        ctx->pc = 0x1E4ACCu;
            // 0x1e4acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4AD0u;
        goto label_1e4ad0;
    }
    ctx->pc = 0x1E4AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AC8u;
            // 0x1e4acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4AD0u;
label_1e4ad0:
    // 0x1e4ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4ad4:
    // 0x1e4ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e4ad8:
    // 0x1e4ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4adc:
    // 0x1e4adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4ae0:
    // 0x1e4ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ae4:
    // 0x1e4ae4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1e4ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e4ae8:
    // 0x1e4ae8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4aec:
    // 0x1e4aec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e4af0:
    // 0x1e4af0: 0x320f809  jalr        $t9
label_1e4af4:
    if (ctx->pc == 0x1E4AF4u) {
        ctx->pc = 0x1E4AF4u;
            // 0x1e4af4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AF8u;
        goto label_1e4af8;
    }
    ctx->pc = 0x1E4AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4AF8u);
        ctx->pc = 0x1E4AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AF0u;
            // 0x1e4af4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4AF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AF8u; }
            if (ctx->pc != 0x1E4AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4AF8u;
label_1e4af8:
    // 0x1e4af8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4afc:
    // 0x1e4afc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e4b00:
    if (ctx->pc == 0x1E4B00u) {
        ctx->pc = 0x1E4B04u;
        goto label_1e4b04;
    }
    ctx->pc = 0x1E4AFCu;
    {
        const bool branch_taken_0x1e4afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4afc) {
            ctx->pc = 0x1E4B18u;
            goto label_1e4b18;
        }
    }
    ctx->pc = 0x1E4B04u;
label_1e4b04:
    // 0x1e4b04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b08:
    // 0x1e4b08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e4b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e4b0c:
    // 0x1e4b0c: 0x320f809  jalr        $t9
label_1e4b10:
    if (ctx->pc == 0x1E4B10u) {
        ctx->pc = 0x1E4B10u;
            // 0x1e4b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B14u;
        goto label_1e4b14;
    }
    ctx->pc = 0x1E4B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B14u);
        ctx->pc = 0x1E4B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B0Cu;
            // 0x1e4b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B14u; }
            if (ctx->pc != 0x1E4B14u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B14u;
label_1e4b14:
    // 0x1e4b14: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e4b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e4b18:
    // 0x1e4b18: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_1e4b1c:
    if (ctx->pc == 0x1E4B1Cu) {
        ctx->pc = 0x1E4B1Cu;
            // 0x1e4b1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E4B20u;
        goto label_1e4b20;
    }
    ctx->pc = 0x1E4B18u;
    {
        const bool branch_taken_0x1e4b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b18) {
            ctx->pc = 0x1E4B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B18u;
            // 0x1e4b1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4B38u;
            goto label_1e4b38;
        }
    }
    ctx->pc = 0x1E4B20u;
label_1e4b20:
    // 0x1e4b20: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e4b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4b24:
    // 0x1e4b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b28:
    // 0x1e4b28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e4b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e4b2c:
    // 0x1e4b2c: 0x320f809  jalr        $t9
label_1e4b30:
    if (ctx->pc == 0x1E4B30u) {
        ctx->pc = 0x1E4B30u;
            // 0x1e4b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E4B34u;
        goto label_1e4b34;
    }
    ctx->pc = 0x1E4B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B34u);
        ctx->pc = 0x1E4B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B2Cu;
            // 0x1e4b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B34u; }
            if (ctx->pc != 0x1E4B34u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B34u;
label_1e4b34:
    // 0x1e4b34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4b38:
    // 0x1e4b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4b3c:
    // 0x1e4b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4b40:
    // 0x1e4b40: 0x3e00008  jr          $ra
label_1e4b44:
    if (ctx->pc == 0x1E4B44u) {
        ctx->pc = 0x1E4B44u;
            // 0x1e4b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4B48u;
        goto label_1e4b48;
    }
    ctx->pc = 0x1E4B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B40u;
            // 0x1e4b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4B48u;
label_1e4b48:
    // 0x1e4b48: 0x0  nop
    ctx->pc = 0x1e4b48u;
    // NOP
label_1e4b4c:
    // 0x1e4b4c: 0x0  nop
    ctx->pc = 0x1e4b4cu;
    // NOP
label_1e4b50:
    // 0x1e4b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4b54:
    // 0x1e4b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e4b58:
    // 0x1e4b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4b5c:
    // 0x1e4b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4b60:
    // 0x1e4b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b64:
    // 0x1e4b64: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e4b68:
    // 0x1e4b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b6c:
    // 0x1e4b6c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e4b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e4b70:
    // 0x1e4b70: 0x320f809  jalr        $t9
label_1e4b74:
    if (ctx->pc == 0x1E4B74u) {
        ctx->pc = 0x1E4B74u;
            // 0x1e4b74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B78u;
        goto label_1e4b78;
    }
    ctx->pc = 0x1E4B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B78u);
        ctx->pc = 0x1E4B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B70u;
            // 0x1e4b74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B78u; }
            if (ctx->pc != 0x1E4B78u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B78u;
label_1e4b78:
    // 0x1e4b78: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4b7c:
    // 0x1e4b7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e4b80:
    if (ctx->pc == 0x1E4B80u) {
        ctx->pc = 0x1E4B80u;
            // 0x1e4b80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E4B84u;
        goto label_1e4b84;
    }
    ctx->pc = 0x1E4B7Cu;
    {
        const bool branch_taken_0x1e4b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b7c) {
            ctx->pc = 0x1E4B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B7Cu;
            // 0x1e4b80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4B98u;
            goto label_1e4b98;
        }
    }
    ctx->pc = 0x1E4B84u;
label_1e4b84:
    // 0x1e4b84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4b88:
    // 0x1e4b88: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e4b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e4b8c:
    // 0x1e4b8c: 0x320f809  jalr        $t9
label_1e4b90:
    if (ctx->pc == 0x1E4B90u) {
        ctx->pc = 0x1E4B90u;
            // 0x1e4b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B94u;
        goto label_1e4b94;
    }
    ctx->pc = 0x1E4B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4B94u);
        ctx->pc = 0x1E4B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B8Cu;
            // 0x1e4b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B94u; }
            if (ctx->pc != 0x1E4B94u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4B94u;
label_1e4b94:
    // 0x1e4b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4b98:
    // 0x1e4b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4b9c:
    // 0x1e4b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4ba0:
    // 0x1e4ba0: 0x3e00008  jr          $ra
label_1e4ba4:
    if (ctx->pc == 0x1E4BA4u) {
        ctx->pc = 0x1E4BA4u;
            // 0x1e4ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4BA8u;
        goto label_1e4ba8;
    }
    ctx->pc = 0x1E4BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BA0u;
            // 0x1e4ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4BA8u;
label_1e4ba8:
    // 0x1e4ba8: 0x0  nop
    ctx->pc = 0x1e4ba8u;
    // NOP
label_1e4bac:
    // 0x1e4bac: 0x0  nop
    ctx->pc = 0x1e4bacu;
    // NOP
label_1e4bb0:
    // 0x1e4bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e4bb4:
    // 0x1e4bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4bb8:
    // 0x1e4bb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e4bbc:
    // 0x1e4bbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e4bc0:
    // 0x1e4bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4bc4:
    // 0x1e4bc4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4bc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e4bc8:
    // 0x1e4bc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4bcc:
    // 0x1e4bcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e4bd0:
    // 0x1e4bd0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e4bd4:
    // 0x1e4bd4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1e4bd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1e4bd8:
    // 0x1e4bd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4bdc:
    // 0x1e4bdc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e4bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e4be0:
    // 0x1e4be0: 0x320f809  jalr        $t9
label_1e4be4:
    if (ctx->pc == 0x1E4BE4u) {
        ctx->pc = 0x1E4BE4u;
            // 0x1e4be4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1E4BE8u;
        goto label_1e4be8;
    }
    ctx->pc = 0x1E4BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4BE8u);
        ctx->pc = 0x1E4BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BE0u;
            // 0x1e4be4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4BE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BE8u; }
            if (ctx->pc != 0x1E4BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4BE8u;
label_1e4be8:
    // 0x1e4be8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e4bec:
    // 0x1e4bec: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1e4bf0:
    if (ctx->pc == 0x1E4BF0u) {
        ctx->pc = 0x1E4BF0u;
            // 0x1e4bf0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1E4BF4u;
        goto label_1e4bf4;
    }
    ctx->pc = 0x1E4BECu;
    {
        const bool branch_taken_0x1e4bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bec) {
            ctx->pc = 0x1E4BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BECu;
            // 0x1e4bf0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4C10u;
            goto label_1e4c10;
        }
    }
    ctx->pc = 0x1E4BF4u;
label_1e4bf4:
    // 0x1e4bf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4bf8:
    // 0x1e4bf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e4bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1e4bfc:
    // 0x1e4bfc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1e4bfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1e4c00:
    // 0x1e4c00: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e4c04:
    // 0x1e4c04: 0x320f809  jalr        $t9
label_1e4c08:
    if (ctx->pc == 0x1E4C08u) {
        ctx->pc = 0x1E4C08u;
            // 0x1e4c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C0Cu;
        goto label_1e4c0c;
    }
    ctx->pc = 0x1E4C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4C0Cu);
        ctx->pc = 0x1E4C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C04u;
            // 0x1e4c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4C0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C0Cu; }
            if (ctx->pc != 0x1E4C0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E4C0Cu;
label_1e4c0c:
    // 0x1e4c0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4c10:
    // 0x1e4c10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e4c14:
    // 0x1e4c14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e4c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4c18:
    // 0x1e4c18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e4c1c:
    // 0x1e4c1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4c20:
    // 0x1e4c20: 0x3e00008  jr          $ra
label_1e4c24:
    if (ctx->pc == 0x1E4C24u) {
        ctx->pc = 0x1E4C24u;
            // 0x1e4c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4C28u;
        goto label_1e4c28;
    }
    ctx->pc = 0x1E4C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C20u;
            // 0x1e4c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4C28u;
label_1e4c28:
    // 0x1e4c28: 0x0  nop
    ctx->pc = 0x1e4c28u;
    // NOP
label_1e4c2c:
    // 0x1e4c2c: 0x0  nop
    ctx->pc = 0x1e4c2cu;
    // NOP
label_1e4c30:
    // 0x1e4c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4c34:
    // 0x1e4c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4c38:
    // 0x1e4c38: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e4c3c:
    // 0x1e4c3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e4c40:
    if (ctx->pc == 0x1E4C40u) {
        ctx->pc = 0x1E4C40u;
            // 0x1e4c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E4C44u;
        goto label_1e4c44;
    }
    ctx->pc = 0x1E4C3Cu;
    {
        const bool branch_taken_0x1e4c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c3c) {
            ctx->pc = 0x1E4C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C3Cu;
            // 0x1e4c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4C58u;
            goto label_1e4c58;
        }
    }
    ctx->pc = 0x1E4C44u;
label_1e4c44:
    // 0x1e4c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4c48:
    // 0x1e4c48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e4c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e4c4c:
    // 0x1e4c4c: 0x320f809  jalr        $t9
label_1e4c50:
    if (ctx->pc == 0x1E4C50u) {
        ctx->pc = 0x1E4C54u;
        goto label_1e4c54;
    }
    ctx->pc = 0x1E4C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4C54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C54u; }
            if (ctx->pc != 0x1E4C54u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4C54u;
label_1e4c54:
    // 0x1e4c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c58:
    // 0x1e4c58: 0x3e00008  jr          $ra
label_1e4c5c:
    if (ctx->pc == 0x1E4C5Cu) {
        ctx->pc = 0x1E4C5Cu;
            // 0x1e4c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4C60u;
        goto label_1e4c60;
    }
    ctx->pc = 0x1E4C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C58u;
            // 0x1e4c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4C60u;
label_1e4c60:
    // 0x1e4c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4c64:
    // 0x1e4c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4c68:
    // 0x1e4c68: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e4c6c:
    // 0x1e4c6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
            // 0x1e4c70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    {
        const bool branch_taken_0x1e4c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c6c) {
            ctx->pc = 0x1E4C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C6Cu;
            // 0x1e4c70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4C88u;
            goto label_1e4c88;
        }
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4c78:
    // 0x1e4c78: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1e4c7c:
    // 0x1e4c7c: 0x320f809  jalr        $t9
label_1e4c80:
    if (ctx->pc == 0x1E4C80u) {
        ctx->pc = 0x1E4C84u;
        goto label_1e4c84;
    }
    ctx->pc = 0x1E4C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4C84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4C84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C84u; }
            if (ctx->pc != 0x1E4C84u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4C84u;
label_1e4c84:
    // 0x1e4c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c88:
    // 0x1e4c88: 0x3e00008  jr          $ra
label_1e4c8c:
    if (ctx->pc == 0x1E4C8Cu) {
        ctx->pc = 0x1E4C8Cu;
            // 0x1e4c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4C90u;
        goto label_1e4c90;
    }
    ctx->pc = 0x1E4C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C88u;
            // 0x1e4c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4C90u;
label_1e4c90:
    // 0x1e4c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4c94:
    // 0x1e4c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4c98:
    // 0x1e4c98: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1e4c9c:
    // 0x1e4c9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1e4ca0:
    if (ctx->pc == 0x1E4CA0u) {
        ctx->pc = 0x1E4CA0u;
            // 0x1e4ca0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E4CA4u;
        goto label_1e4ca4;
    }
    ctx->pc = 0x1E4C9Cu;
    {
        const bool branch_taken_0x1e4c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c9c) {
            ctx->pc = 0x1E4CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C9Cu;
            // 0x1e4ca0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4CB8u;
            goto label_1e4cb8;
        }
    }
    ctx->pc = 0x1E4CA4u;
label_1e4ca4:
    // 0x1e4ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4ca8:
    // 0x1e4ca8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e4ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4cac:
    // 0x1e4cac: 0x320f809  jalr        $t9
label_1e4cb0:
    if (ctx->pc == 0x1E4CB0u) {
        ctx->pc = 0x1E4CB4u;
        goto label_1e4cb4;
    }
    ctx->pc = 0x1E4CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4CB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CB4u; }
            if (ctx->pc != 0x1E4CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4CB4u;
label_1e4cb4:
    // 0x1e4cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4cb8:
    // 0x1e4cb8: 0x3e00008  jr          $ra
label_1e4cbc:
    if (ctx->pc == 0x1E4CBCu) {
        ctx->pc = 0x1E4CBCu;
            // 0x1e4cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4CC0u;
        goto label_fallthrough_0x1e4cb8;
    }
    ctx->pc = 0x1E4CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CB8u;
            // 0x1e4cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4cb8:
    ctx->pc = 0x1E4CC0u;
}
