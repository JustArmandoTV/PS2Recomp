#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C48B0
// Address: 0x3c48b0 - 0x3c4c20
void sub_003C48B0_0x3c48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C48B0_0x3c48b0");
#endif

    switch (ctx->pc) {
        case 0x3c48b0u: goto label_3c48b0;
        case 0x3c48b4u: goto label_3c48b4;
        case 0x3c48b8u: goto label_3c48b8;
        case 0x3c48bcu: goto label_3c48bc;
        case 0x3c48c0u: goto label_3c48c0;
        case 0x3c48c4u: goto label_3c48c4;
        case 0x3c48c8u: goto label_3c48c8;
        case 0x3c48ccu: goto label_3c48cc;
        case 0x3c48d0u: goto label_3c48d0;
        case 0x3c48d4u: goto label_3c48d4;
        case 0x3c48d8u: goto label_3c48d8;
        case 0x3c48dcu: goto label_3c48dc;
        case 0x3c48e0u: goto label_3c48e0;
        case 0x3c48e4u: goto label_3c48e4;
        case 0x3c48e8u: goto label_3c48e8;
        case 0x3c48ecu: goto label_3c48ec;
        case 0x3c48f0u: goto label_3c48f0;
        case 0x3c48f4u: goto label_3c48f4;
        case 0x3c48f8u: goto label_3c48f8;
        case 0x3c48fcu: goto label_3c48fc;
        case 0x3c4900u: goto label_3c4900;
        case 0x3c4904u: goto label_3c4904;
        case 0x3c4908u: goto label_3c4908;
        case 0x3c490cu: goto label_3c490c;
        case 0x3c4910u: goto label_3c4910;
        case 0x3c4914u: goto label_3c4914;
        case 0x3c4918u: goto label_3c4918;
        case 0x3c491cu: goto label_3c491c;
        case 0x3c4920u: goto label_3c4920;
        case 0x3c4924u: goto label_3c4924;
        case 0x3c4928u: goto label_3c4928;
        case 0x3c492cu: goto label_3c492c;
        case 0x3c4930u: goto label_3c4930;
        case 0x3c4934u: goto label_3c4934;
        case 0x3c4938u: goto label_3c4938;
        case 0x3c493cu: goto label_3c493c;
        case 0x3c4940u: goto label_3c4940;
        case 0x3c4944u: goto label_3c4944;
        case 0x3c4948u: goto label_3c4948;
        case 0x3c494cu: goto label_3c494c;
        case 0x3c4950u: goto label_3c4950;
        case 0x3c4954u: goto label_3c4954;
        case 0x3c4958u: goto label_3c4958;
        case 0x3c495cu: goto label_3c495c;
        case 0x3c4960u: goto label_3c4960;
        case 0x3c4964u: goto label_3c4964;
        case 0x3c4968u: goto label_3c4968;
        case 0x3c496cu: goto label_3c496c;
        case 0x3c4970u: goto label_3c4970;
        case 0x3c4974u: goto label_3c4974;
        case 0x3c4978u: goto label_3c4978;
        case 0x3c497cu: goto label_3c497c;
        case 0x3c4980u: goto label_3c4980;
        case 0x3c4984u: goto label_3c4984;
        case 0x3c4988u: goto label_3c4988;
        case 0x3c498cu: goto label_3c498c;
        case 0x3c4990u: goto label_3c4990;
        case 0x3c4994u: goto label_3c4994;
        case 0x3c4998u: goto label_3c4998;
        case 0x3c499cu: goto label_3c499c;
        case 0x3c49a0u: goto label_3c49a0;
        case 0x3c49a4u: goto label_3c49a4;
        case 0x3c49a8u: goto label_3c49a8;
        case 0x3c49acu: goto label_3c49ac;
        case 0x3c49b0u: goto label_3c49b0;
        case 0x3c49b4u: goto label_3c49b4;
        case 0x3c49b8u: goto label_3c49b8;
        case 0x3c49bcu: goto label_3c49bc;
        case 0x3c49c0u: goto label_3c49c0;
        case 0x3c49c4u: goto label_3c49c4;
        case 0x3c49c8u: goto label_3c49c8;
        case 0x3c49ccu: goto label_3c49cc;
        case 0x3c49d0u: goto label_3c49d0;
        case 0x3c49d4u: goto label_3c49d4;
        case 0x3c49d8u: goto label_3c49d8;
        case 0x3c49dcu: goto label_3c49dc;
        case 0x3c49e0u: goto label_3c49e0;
        case 0x3c49e4u: goto label_3c49e4;
        case 0x3c49e8u: goto label_3c49e8;
        case 0x3c49ecu: goto label_3c49ec;
        case 0x3c49f0u: goto label_3c49f0;
        case 0x3c49f4u: goto label_3c49f4;
        case 0x3c49f8u: goto label_3c49f8;
        case 0x3c49fcu: goto label_3c49fc;
        case 0x3c4a00u: goto label_3c4a00;
        case 0x3c4a04u: goto label_3c4a04;
        case 0x3c4a08u: goto label_3c4a08;
        case 0x3c4a0cu: goto label_3c4a0c;
        case 0x3c4a10u: goto label_3c4a10;
        case 0x3c4a14u: goto label_3c4a14;
        case 0x3c4a18u: goto label_3c4a18;
        case 0x3c4a1cu: goto label_3c4a1c;
        case 0x3c4a20u: goto label_3c4a20;
        case 0x3c4a24u: goto label_3c4a24;
        case 0x3c4a28u: goto label_3c4a28;
        case 0x3c4a2cu: goto label_3c4a2c;
        case 0x3c4a30u: goto label_3c4a30;
        case 0x3c4a34u: goto label_3c4a34;
        case 0x3c4a38u: goto label_3c4a38;
        case 0x3c4a3cu: goto label_3c4a3c;
        case 0x3c4a40u: goto label_3c4a40;
        case 0x3c4a44u: goto label_3c4a44;
        case 0x3c4a48u: goto label_3c4a48;
        case 0x3c4a4cu: goto label_3c4a4c;
        case 0x3c4a50u: goto label_3c4a50;
        case 0x3c4a54u: goto label_3c4a54;
        case 0x3c4a58u: goto label_3c4a58;
        case 0x3c4a5cu: goto label_3c4a5c;
        case 0x3c4a60u: goto label_3c4a60;
        case 0x3c4a64u: goto label_3c4a64;
        case 0x3c4a68u: goto label_3c4a68;
        case 0x3c4a6cu: goto label_3c4a6c;
        case 0x3c4a70u: goto label_3c4a70;
        case 0x3c4a74u: goto label_3c4a74;
        case 0x3c4a78u: goto label_3c4a78;
        case 0x3c4a7cu: goto label_3c4a7c;
        case 0x3c4a80u: goto label_3c4a80;
        case 0x3c4a84u: goto label_3c4a84;
        case 0x3c4a88u: goto label_3c4a88;
        case 0x3c4a8cu: goto label_3c4a8c;
        case 0x3c4a90u: goto label_3c4a90;
        case 0x3c4a94u: goto label_3c4a94;
        case 0x3c4a98u: goto label_3c4a98;
        case 0x3c4a9cu: goto label_3c4a9c;
        case 0x3c4aa0u: goto label_3c4aa0;
        case 0x3c4aa4u: goto label_3c4aa4;
        case 0x3c4aa8u: goto label_3c4aa8;
        case 0x3c4aacu: goto label_3c4aac;
        case 0x3c4ab0u: goto label_3c4ab0;
        case 0x3c4ab4u: goto label_3c4ab4;
        case 0x3c4ab8u: goto label_3c4ab8;
        case 0x3c4abcu: goto label_3c4abc;
        case 0x3c4ac0u: goto label_3c4ac0;
        case 0x3c4ac4u: goto label_3c4ac4;
        case 0x3c4ac8u: goto label_3c4ac8;
        case 0x3c4accu: goto label_3c4acc;
        case 0x3c4ad0u: goto label_3c4ad0;
        case 0x3c4ad4u: goto label_3c4ad4;
        case 0x3c4ad8u: goto label_3c4ad8;
        case 0x3c4adcu: goto label_3c4adc;
        case 0x3c4ae0u: goto label_3c4ae0;
        case 0x3c4ae4u: goto label_3c4ae4;
        case 0x3c4ae8u: goto label_3c4ae8;
        case 0x3c4aecu: goto label_3c4aec;
        case 0x3c4af0u: goto label_3c4af0;
        case 0x3c4af4u: goto label_3c4af4;
        case 0x3c4af8u: goto label_3c4af8;
        case 0x3c4afcu: goto label_3c4afc;
        case 0x3c4b00u: goto label_3c4b00;
        case 0x3c4b04u: goto label_3c4b04;
        case 0x3c4b08u: goto label_3c4b08;
        case 0x3c4b0cu: goto label_3c4b0c;
        case 0x3c4b10u: goto label_3c4b10;
        case 0x3c4b14u: goto label_3c4b14;
        case 0x3c4b18u: goto label_3c4b18;
        case 0x3c4b1cu: goto label_3c4b1c;
        case 0x3c4b20u: goto label_3c4b20;
        case 0x3c4b24u: goto label_3c4b24;
        case 0x3c4b28u: goto label_3c4b28;
        case 0x3c4b2cu: goto label_3c4b2c;
        case 0x3c4b30u: goto label_3c4b30;
        case 0x3c4b34u: goto label_3c4b34;
        case 0x3c4b38u: goto label_3c4b38;
        case 0x3c4b3cu: goto label_3c4b3c;
        case 0x3c4b40u: goto label_3c4b40;
        case 0x3c4b44u: goto label_3c4b44;
        case 0x3c4b48u: goto label_3c4b48;
        case 0x3c4b4cu: goto label_3c4b4c;
        case 0x3c4b50u: goto label_3c4b50;
        case 0x3c4b54u: goto label_3c4b54;
        case 0x3c4b58u: goto label_3c4b58;
        case 0x3c4b5cu: goto label_3c4b5c;
        case 0x3c4b60u: goto label_3c4b60;
        case 0x3c4b64u: goto label_3c4b64;
        case 0x3c4b68u: goto label_3c4b68;
        case 0x3c4b6cu: goto label_3c4b6c;
        case 0x3c4b70u: goto label_3c4b70;
        case 0x3c4b74u: goto label_3c4b74;
        case 0x3c4b78u: goto label_3c4b78;
        case 0x3c4b7cu: goto label_3c4b7c;
        case 0x3c4b80u: goto label_3c4b80;
        case 0x3c4b84u: goto label_3c4b84;
        case 0x3c4b88u: goto label_3c4b88;
        case 0x3c4b8cu: goto label_3c4b8c;
        case 0x3c4b90u: goto label_3c4b90;
        case 0x3c4b94u: goto label_3c4b94;
        case 0x3c4b98u: goto label_3c4b98;
        case 0x3c4b9cu: goto label_3c4b9c;
        case 0x3c4ba0u: goto label_3c4ba0;
        case 0x3c4ba4u: goto label_3c4ba4;
        case 0x3c4ba8u: goto label_3c4ba8;
        case 0x3c4bacu: goto label_3c4bac;
        case 0x3c4bb0u: goto label_3c4bb0;
        case 0x3c4bb4u: goto label_3c4bb4;
        case 0x3c4bb8u: goto label_3c4bb8;
        case 0x3c4bbcu: goto label_3c4bbc;
        case 0x3c4bc0u: goto label_3c4bc0;
        case 0x3c4bc4u: goto label_3c4bc4;
        case 0x3c4bc8u: goto label_3c4bc8;
        case 0x3c4bccu: goto label_3c4bcc;
        case 0x3c4bd0u: goto label_3c4bd0;
        case 0x3c4bd4u: goto label_3c4bd4;
        case 0x3c4bd8u: goto label_3c4bd8;
        case 0x3c4bdcu: goto label_3c4bdc;
        case 0x3c4be0u: goto label_3c4be0;
        case 0x3c4be4u: goto label_3c4be4;
        case 0x3c4be8u: goto label_3c4be8;
        case 0x3c4becu: goto label_3c4bec;
        case 0x3c4bf0u: goto label_3c4bf0;
        case 0x3c4bf4u: goto label_3c4bf4;
        case 0x3c4bf8u: goto label_3c4bf8;
        case 0x3c4bfcu: goto label_3c4bfc;
        case 0x3c4c00u: goto label_3c4c00;
        case 0x3c4c04u: goto label_3c4c04;
        case 0x3c4c08u: goto label_3c4c08;
        case 0x3c4c0cu: goto label_3c4c0c;
        case 0x3c4c10u: goto label_3c4c10;
        case 0x3c4c14u: goto label_3c4c14;
        case 0x3c4c18u: goto label_3c4c18;
        case 0x3c4c1cu: goto label_3c4c1c;
        default: break;
    }

    ctx->pc = 0x3c48b0u;

label_3c48b0:
    // 0x3c48b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c48b4:
    // 0x3c48b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c48b8:
    // 0x3c48b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3c48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3c48bc:
    // 0x3c48bc: 0x24428c30  addiu       $v0, $v0, -0x73D0
    ctx->pc = 0x3c48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937648));
label_3c48c0:
    // 0x3c48c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c48c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c48c4:
    // 0x3c48c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c48c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c48c8:
    // 0x3c48c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c48c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c48cc:
    // 0x3c48cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c48ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c48d0:
    // 0x3c48d0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x3c48d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3c48d4:
    // 0x3c48d4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3c48d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3c48d8:
    // 0x3c48d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c48dc:
    // 0x3c48dc: 0x8fab0090  lw          $t3, 0x90($sp)
    ctx->pc = 0x3c48dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_3c48e0:
    // 0x3c48e0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x3c48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_3c48e4:
    // 0x3c48e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c48e8:
    // 0x3c48e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3c48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c48ec:
    // 0x3c48ec: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x3c48ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_3c48f0:
    // 0x3c48f0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3c48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_3c48f4:
    // 0x3c48f4: 0x8fab0088  lw          $t3, 0x88($sp)
    ctx->pc = 0x3c48f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3c48f8:
    // 0x3c48f8: 0xc122adc  jal         func_48AB70
label_3c48fc:
    if (ctx->pc == 0x3C48FCu) {
        ctx->pc = 0x3C48FCu;
            // 0x3c48fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4900u;
        goto label_3c4900;
    }
    ctx->pc = 0x3C48F8u;
    SET_GPR_U32(ctx, 31, 0x3C4900u);
    ctx->pc = 0x3C48FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C48F8u;
            // 0x3c48fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AB70u;
    if (runtime->hasFunction(0x48AB70u)) {
        auto targetFn = runtime->lookupFunction(0x48AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4900u; }
        if (ctx->pc != 0x3C4900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AB70_0x48ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4900u; }
        if (ctx->pc != 0x3C4900u) { return; }
    }
    ctx->pc = 0x3C4900u;
label_3c4900:
    // 0x3c4900: 0x26110108  addiu       $s1, $s0, 0x108
    ctx->pc = 0x3c4900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
label_3c4904:
    // 0x3c4904: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c4904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3c4908:
    // 0x3c4908: 0x3445ae61  ori         $a1, $v0, 0xAE61
    ctx->pc = 0x3c4908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44641);
label_3c490c:
    // 0x3c490c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4910:
    // 0x3c4910: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3c4910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c4914:
    // 0x3c4914: 0xc10ca68  jal         func_4329A0
label_3c4918:
    if (ctx->pc == 0x3C4918u) {
        ctx->pc = 0x3C4918u;
            // 0x3c4918: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C491Cu;
        goto label_3c491c;
    }
    ctx->pc = 0x3C4914u;
    SET_GPR_U32(ctx, 31, 0x3C491Cu);
    ctx->pc = 0x3C4918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4914u;
            // 0x3c4918: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C491Cu; }
        if (ctx->pc != 0x3C491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C491Cu; }
        if (ctx->pc != 0x3C491Cu) { return; }
    }
    ctx->pc = 0x3C491Cu;
label_3c491c:
    // 0x3c491c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3c491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3c4920:
    // 0x3c4920: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c4924:
    // 0x3c4924: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3c4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3c4928:
    // 0x3c4928: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x3c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_3c492c:
    // 0x3c492c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3c4930:
    // 0x3c4930: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c4930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c4934:
    // 0x3c4934: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c4934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c4938:
    // 0x3c4938: 0x24638c94  addiu       $v1, $v1, -0x736C
    ctx->pc = 0x3c4938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937748));
label_3c493c:
    // 0x3c493c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c4940:
    // 0x3c4940: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x3c4940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
label_3c4944:
    // 0x3c4944: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3c4944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3c4948:
    // 0x3c4948: 0xae13015c  sw          $s3, 0x15C($s0)
    ctx->pc = 0x3c4948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 19));
label_3c494c:
    // 0x3c494c: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x3c494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_3c4950:
    // 0x3c4950: 0xae120164  sw          $s2, 0x164($s0)
    ctx->pc = 0x3c4950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 18));
label_3c4954:
    // 0x3c4954: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3c4958:
    // 0x3c4958: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3c4958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3c495c:
    // 0x3c495c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3c495cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3c4960:
    // 0x3c4960: 0x320f809  jalr        $t9
label_3c4964:
    if (ctx->pc == 0x3C4964u) {
        ctx->pc = 0x3C4964u;
            // 0x3c4964: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C4968u;
        goto label_3c4968;
    }
    ctx->pc = 0x3C4960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4968u);
        ctx->pc = 0x3C4964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4960u;
            // 0x3c4964: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4968u; }
            if (ctx->pc != 0x3C4968u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4968u;
label_3c4968:
    // 0x3c4968: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3c4968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3c496c:
    // 0x3c496c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c496cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c4970:
    // 0x3c4970: 0xa2020168  sb          $v0, 0x168($s0)
    ctx->pc = 0x3c4970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 2));
label_3c4974:
    // 0x3c4974: 0x2a910003  slti        $s1, $s4, 0x3
    ctx->pc = 0x3c4974u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c4978:
    // 0x3c4978: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c497c:
    // 0x3c497c: 0xa2040169  sb          $a0, 0x169($s0)
    ctx->pc = 0x3c497cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 4));
label_3c4980:
    // 0x3c4980: 0x8c528a08  lw          $s2, -0x75F8($v0)
    ctx->pc = 0x3c4980u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3c4984:
    // 0x3c4984: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_3c4988:
    if (ctx->pc == 0x3C4988u) {
        ctx->pc = 0x3C4988u;
            // 0x3c4988: 0x8c7389e8  lw          $s3, -0x7618($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
        ctx->pc = 0x3C498Cu;
        goto label_3c498c;
    }
    ctx->pc = 0x3C4984u;
    {
        const bool branch_taken_0x3c4984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4984u;
            // 0x3c4988: 0x8c7389e8  lw          $s3, -0x7618($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4984) {
            ctx->pc = 0x3C49ACu;
            goto label_3c49ac;
        }
    }
    ctx->pc = 0x3C498Cu;
label_3c498c:
    // 0x3c498c: 0x92020168  lbu         $v0, 0x168($s0)
    ctx->pc = 0x3c498cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 360)));
label_3c4990:
    // 0x3c4990: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3c4994:
    if (ctx->pc == 0x3C4994u) {
        ctx->pc = 0x3C4994u;
            // 0x3c4994: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x3C4998u;
        goto label_3c4998;
    }
    ctx->pc = 0x3C4990u;
    {
        const bool branch_taken_0x3c4990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4990) {
            ctx->pc = 0x3C4994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4990u;
            // 0x3c4994: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C49B0u;
            goto label_3c49b0;
        }
    }
    ctx->pc = 0x3C4998u;
label_3c4998:
    // 0x3c4998: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x3c4998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c499c:
    // 0x3c499c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3c499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c49a0:
    // 0x3c49a0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c49a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c49a4:
    // 0x3c49a4: 0x320f809  jalr        $t9
label_3c49a8:
    if (ctx->pc == 0x3C49A8u) {
        ctx->pc = 0x3C49A8u;
            // 0x3c49a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C49ACu;
        goto label_3c49ac;
    }
    ctx->pc = 0x3C49A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C49ACu);
        ctx->pc = 0x3C49A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C49A4u;
            // 0x3c49a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C49ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C49ACu; }
            if (ctx->pc != 0x3C49ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3C49ACu;
label_3c49ac:
    // 0x3c49ac: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x3c49acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c49b0:
    // 0x3c49b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c49b4:
    // 0x3c49b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c49b8:
    // 0x3c49b8: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x3c49b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_3c49bc:
    // 0x3c49bc: 0x3c0300d5  lui         $v1, 0xD5
    ctx->pc = 0x3c49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)213 << 16));
label_3c49c0:
    // 0x3c49c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c49c4:
    // 0x3c49c4: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x3c49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_3c49c8:
    // 0x3c49c8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3c49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3c49cc:
    // 0x3c49cc: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x3c49ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3c49d0:
    // 0x3c49d0: 0x34669f80  ori         $a2, $v1, 0x9F80
    ctx->pc = 0x3c49d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40832);
label_3c49d4:
    // 0x3c49d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c49d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c49d8:
    // 0x3c49d8: 0x8c497378  lw          $t1, 0x7378($v0)
    ctx->pc = 0x3c49d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3c49dc:
    // 0x3c49dc: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x3c49dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3c49e0:
    // 0x3c49e0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x3c49e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_3c49e4:
    // 0x3c49e4: 0x320f809  jalr        $t9
label_3c49e8:
    if (ctx->pc == 0x3C49E8u) {
        ctx->pc = 0x3C49E8u;
            // 0x3c49e8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C49ECu;
        goto label_3c49ec;
    }
    ctx->pc = 0x3C49E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C49ECu);
        ctx->pc = 0x3C49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C49E4u;
            // 0x3c49e8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C49ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C49ECu; }
            if (ctx->pc != 0x3C49ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3C49ECu;
label_3c49ec:
    // 0x3c49ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c49f0:
    // 0x3c49f0: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x3c49f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_3c49f4:
    // 0x3c49f4: 0x8c5489f0  lw          $s4, -0x7610($v0)
    ctx->pc = 0x3c49f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c49f8:
    // 0x3c49f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c49f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c49fc:
    // 0x3c49fc: 0xc0a8a40  jal         func_2A2900
label_3c4a00:
    if (ctx->pc == 0x3C4A00u) {
        ctx->pc = 0x3C4A00u;
            // 0x3c4a00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A04u;
        goto label_3c4a04;
    }
    ctx->pc = 0x3C49FCu;
    SET_GPR_U32(ctx, 31, 0x3C4A04u);
    ctx->pc = 0x3C4A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C49FCu;
            // 0x3c4a00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A04u; }
        if (ctx->pc != 0x3C4A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A04u; }
        if (ctx->pc != 0x3C4A04u) { return; }
    }
    ctx->pc = 0x3C4A04u;
label_3c4a04:
    // 0x3c4a04: 0x92830029  lbu         $v1, 0x29($s4)
    ctx->pc = 0x3c4a04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
label_3c4a08:
    // 0x3c4a08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3c4a0c:
    // 0x3c4a0c: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x3c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_3c4a10:
    // 0x3c4a10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c4a14:
    // 0x3c4a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c4a18:
    // 0x3c4a18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3c4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c4a1c:
    // 0x3c4a1c: 0xc122a10  jal         func_48A840
label_3c4a20:
    if (ctx->pc == 0x3C4A20u) {
        ctx->pc = 0x3C4A20u;
            // 0x3c4a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A24u;
        goto label_3c4a24;
    }
    ctx->pc = 0x3C4A1Cu;
    SET_GPR_U32(ctx, 31, 0x3C4A24u);
    ctx->pc = 0x3C4A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A1Cu;
            // 0x3c4a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A840u;
    if (runtime->hasFunction(0x48A840u)) {
        auto targetFn = runtime->lookupFunction(0x48A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A24u; }
        if (ctx->pc != 0x3C4A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A840_0x48a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A24u; }
        if (ctx->pc != 0x3C4A24u) { return; }
    }
    ctx->pc = 0x3C4A24u;
label_3c4a24:
    // 0x3c4a24: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
label_3c4a28:
    if (ctx->pc == 0x3C4A28u) {
        ctx->pc = 0x3C4A28u;
            // 0x3c4a28: 0x8e6401a0  lw          $a0, 0x1A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
        ctx->pc = 0x3C4A2Cu;
        goto label_3c4a2c;
    }
    ctx->pc = 0x3C4A24u;
    {
        const bool branch_taken_0x3c4a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4a24) {
            ctx->pc = 0x3C4A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A24u;
            // 0x3c4a28: 0x8e6401a0  lw          $a0, 0x1A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4A70u;
            goto label_3c4a70;
        }
    }
    ctx->pc = 0x3C4A2Cu;
label_3c4a2c:
    // 0x3c4a2c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3c4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3c4a30:
    // 0x3c4a30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3c4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3c4a34:
    // 0x3c4a34: 0x24638d08  addiu       $v1, $v1, -0x72F8
    ctx->pc = 0x3c4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937864));
label_3c4a38:
    // 0x3c4a38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c4a3c:
    // 0x3c4a3c: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x3c4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_3c4a40:
    // 0x3c4a40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c4a44:
    // 0x3c4a44: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3c4a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c4a48:
    // 0x3c4a48: 0xc06747c  jal         func_19D1F0
label_3c4a4c:
    if (ctx->pc == 0x3C4A4Cu) {
        ctx->pc = 0x3C4A4Cu;
            // 0x3c4a4c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C4A50u;
        goto label_3c4a50;
    }
    ctx->pc = 0x3C4A48u;
    SET_GPR_U32(ctx, 31, 0x3C4A50u);
    ctx->pc = 0x3C4A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A48u;
            // 0x3c4a4c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D1F0u;
    if (runtime->hasFunction(0x19D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x19D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A50u; }
        if (ctx->pc != 0x3C4A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D1F0_0x19d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A50u; }
        if (ctx->pc != 0x3C4A50u) { return; }
    }
    ctx->pc = 0x3C4A50u;
label_3c4a50:
    // 0x3c4a50: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3c4a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c4a54:
    // 0x3c4a54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c4a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a58:
    // 0x3c4a58: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c4a5c:
    // 0x3c4a5c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3c4a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3c4a60:
    // 0x3c4a60: 0x320f809  jalr        $t9
label_3c4a64:
    if (ctx->pc == 0x3C4A64u) {
        ctx->pc = 0x3C4A64u;
            // 0x3c4a64: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C4A68u;
        goto label_3c4a68;
    }
    ctx->pc = 0x3C4A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4A68u);
        ctx->pc = 0x3C4A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A60u;
            // 0x3c4a64: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4A68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A68u; }
            if (ctx->pc != 0x3C4A68u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4A68u;
label_3c4a68:
    // 0x3c4a68: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c4a6c:
    if (ctx->pc == 0x3C4A6Cu) {
        ctx->pc = 0x3C4A6Cu;
            // 0x3c4a6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A70u;
        goto label_3c4a70;
    }
    ctx->pc = 0x3C4A68u;
    {
        const bool branch_taken_0x3c4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A68u;
            // 0x3c4a6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a68) {
            ctx->pc = 0x3C4A7Cu;
            goto label_3c4a7c;
        }
    }
    ctx->pc = 0x3C4A70u;
label_3c4a70:
    // 0x3c4a70: 0xc06747c  jal         func_19D1F0
label_3c4a74:
    if (ctx->pc == 0x3C4A74u) {
        ctx->pc = 0x3C4A74u;
            // 0x3c4a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A78u;
        goto label_3c4a78;
    }
    ctx->pc = 0x3C4A70u;
    SET_GPR_U32(ctx, 31, 0x3C4A78u);
    ctx->pc = 0x3C4A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A70u;
            // 0x3c4a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D1F0u;
    if (runtime->hasFunction(0x19D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x19D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A78u; }
        if (ctx->pc != 0x3C4A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D1F0_0x19d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4A78u; }
        if (ctx->pc != 0x3C4A78u) { return; }
    }
    ctx->pc = 0x3C4A78u;
label_3c4a78:
    // 0x3c4a78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c4a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a7c:
    // 0x3c4a7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c4a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4a80:
    // 0x3c4a80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c4a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4a84:
    // 0x3c4a84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c4a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4a88:
    // 0x3c4a88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c4a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4a8c:
    // 0x3c4a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c4a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4a90:
    // 0x3c4a90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c4a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4a94:
    // 0x3c4a94: 0x3e00008  jr          $ra
label_3c4a98:
    if (ctx->pc == 0x3C4A98u) {
        ctx->pc = 0x3C4A98u;
            // 0x3c4a98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3C4A9Cu;
        goto label_3c4a9c;
    }
    ctx->pc = 0x3C4A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4A94u;
            // 0x3c4a98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4A9Cu;
label_3c4a9c:
    // 0x3c4a9c: 0x0  nop
    ctx->pc = 0x3c4a9cu;
    // NOP
label_3c4aa0:
    // 0x3c4aa0: 0x80f0fcc  j           func_3C3F30
label_3c4aa4:
    if (ctx->pc == 0x3C4AA4u) {
        ctx->pc = 0x3C4AA4u;
            // 0x3c4aa4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->pc = 0x3C4AA8u;
        goto label_3c4aa8;
    }
    ctx->pc = 0x3C4AA0u;
    ctx->pc = 0x3C4AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4AA0u;
            // 0x3c4aa4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3F30u;
    {
        auto targetFn = runtime->lookupFunction(0x3C3F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3C4AA8u;
label_3c4aa8:
    // 0x3c4aa8: 0x0  nop
    ctx->pc = 0x3c4aa8u;
    // NOP
label_3c4aac:
    // 0x3c4aac: 0x0  nop
    ctx->pc = 0x3c4aacu;
    // NOP
label_3c4ab0:
    // 0x3c4ab0: 0x80f113c  j           func_3C44F0
label_3c4ab4:
    if (ctx->pc == 0x3C4AB4u) {
        ctx->pc = 0x3C4AB4u;
            // 0x3c4ab4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->pc = 0x3C4AB8u;
        goto label_3c4ab8;
    }
    ctx->pc = 0x3C4AB0u;
    ctx->pc = 0x3C4AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4AB0u;
            // 0x3c4ab4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C44F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C44F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3C4AB8u;
label_3c4ab8:
    // 0x3c4ab8: 0x0  nop
    ctx->pc = 0x3c4ab8u;
    // NOP
label_3c4abc:
    // 0x3c4abc: 0x0  nop
    ctx->pc = 0x3c4abcu;
    // NOP
label_3c4ac0:
    // 0x3c4ac0: 0x80f0f90  j           func_3C3E40
label_3c4ac4:
    if (ctx->pc == 0x3C4AC4u) {
        ctx->pc = 0x3C4AC4u;
            // 0x3c4ac4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->pc = 0x3C4AC8u;
        goto label_3c4ac8;
    }
    ctx->pc = 0x3C4AC0u;
    ctx->pc = 0x3C4AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4AC0u;
            // 0x3c4ac4: 0x2484fef8  addiu       $a0, $a0, -0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E40u;
    {
        auto targetFn = runtime->lookupFunction(0x3C3E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3C4AC8u;
label_3c4ac8:
    // 0x3c4ac8: 0x0  nop
    ctx->pc = 0x3c4ac8u;
    // NOP
label_3c4acc:
    // 0x3c4acc: 0x0  nop
    ctx->pc = 0x3c4accu;
    // NOP
label_3c4ad0:
    // 0x3c4ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c4ad4:
    // 0x3c4ad4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4ad8:
    // 0x3c4ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c4adc:
    // 0x3c4adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c4ae0:
    // 0x3c4ae0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c4ae0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c4ae4:
    // 0x3c4ae4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_3c4ae8:
    if (ctx->pc == 0x3C4AE8u) {
        ctx->pc = 0x3C4AECu;
        goto label_3c4aec;
    }
    ctx->pc = 0x3C4AE4u;
    {
        const bool branch_taken_0x3c4ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4ae4) {
            ctx->pc = 0x3C4B20u;
            goto label_3c4b20;
        }
    }
    ctx->pc = 0x3C4AECu;
label_3c4aec:
    // 0x3c4aec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4af0:
    // 0x3c4af0: 0x50a30034  beql        $a1, $v1, . + 4 + (0x34 << 2)
label_3c4af4:
    if (ctx->pc == 0x3C4AF4u) {
        ctx->pc = 0x3C4AF4u;
            // 0x3c4af4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3C4AF8u;
        goto label_3c4af8;
    }
    ctx->pc = 0x3C4AF0u;
    {
        const bool branch_taken_0x3c4af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4af0) {
            ctx->pc = 0x3C4AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4AF0u;
            // 0x3c4af4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4BC4u;
            goto label_3c4bc4;
        }
    }
    ctx->pc = 0x3C4AF8u;
label_3c4af8:
    // 0x3c4af8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4afc:
    // 0x3c4afc: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c4b00:
    if (ctx->pc == 0x3C4B00u) {
        ctx->pc = 0x3C4B00u;
            // 0x3c4b00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C4B04u;
        goto label_3c4b04;
    }
    ctx->pc = 0x3C4AFCu;
    {
        const bool branch_taken_0x3c4afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4afc) {
            ctx->pc = 0x3C4B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4AFCu;
            // 0x3c4b00: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4B0Cu;
            goto label_3c4b0c;
        }
    }
    ctx->pc = 0x3C4B04u;
label_3c4b04:
    // 0x3c4b04: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3c4b08:
    if (ctx->pc == 0x3C4B08u) {
        ctx->pc = 0x3C4B0Cu;
        goto label_3c4b0c;
    }
    ctx->pc = 0x3C4B04u;
    {
        const bool branch_taken_0x3c4b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b04) {
            ctx->pc = 0x3C4BC0u;
            goto label_3c4bc0;
        }
    }
    ctx->pc = 0x3C4B0Cu;
label_3c4b0c:
    // 0x3c4b0c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c4b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c4b10:
    // 0x3c4b10: 0x320f809  jalr        $t9
label_3c4b14:
    if (ctx->pc == 0x3C4B14u) {
        ctx->pc = 0x3C4B18u;
        goto label_3c4b18;
    }
    ctx->pc = 0x3C4B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4B18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4B18u; }
            if (ctx->pc != 0x3C4B18u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4B18u;
label_3c4b18:
    // 0x3c4b18: 0x10000029  b           . + 4 + (0x29 << 2)
label_3c4b1c:
    if (ctx->pc == 0x3C4B1Cu) {
        ctx->pc = 0x3C4B20u;
        goto label_3c4b20;
    }
    ctx->pc = 0x3C4B18u;
    {
        const bool branch_taken_0x3c4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b18) {
            ctx->pc = 0x3C4BC0u;
            goto label_3c4bc0;
        }
    }
    ctx->pc = 0x3C4B20u;
label_3c4b20:
    // 0x3c4b20: 0xc0f1308  jal         func_3C4C20
label_3c4b24:
    if (ctx->pc == 0x3C4B24u) {
        ctx->pc = 0x3C4B28u;
        goto label_3c4b28;
    }
    ctx->pc = 0x3C4B20u;
    SET_GPR_U32(ctx, 31, 0x3C4B28u);
    ctx->pc = 0x3C4C20u;
    if (runtime->hasFunction(0x3C4C20u)) {
        auto targetFn = runtime->lookupFunction(0x3C4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4B28u; }
        if (ctx->pc != 0x3C4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4C20_0x3c4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4B28u; }
        if (ctx->pc != 0x3C4B28u) { return; }
    }
    ctx->pc = 0x3C4B28u;
label_3c4b28:
    // 0x3c4b28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c4b2c:
    // 0x3c4b2c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3c4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3c4b30:
    // 0x3c4b30: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x3c4b30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3c4b34:
    // 0x3c4b34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3c4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3c4b38:
    // 0x3c4b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b3c:
    // 0x3c4b3c: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x3c4b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_3c4b40:
    // 0x3c4b40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b44:
    // 0x3c4b44: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x3c4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_3c4b48:
    // 0x3c4b48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c4b4c:
    // 0x3c4b4c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3c4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c4b50:
    // 0x3c4b50: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x3c4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c4b54:
    // 0x3c4b54: 0x90a60029  lbu         $a2, 0x29($a1)
    ctx->pc = 0x3c4b54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_3c4b58:
    // 0x3c4b58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c4b5c:
    // 0x3c4b5c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3c4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3c4b60:
    // 0x3c4b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c4b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b64:
    // 0x3c4b64: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x3c4b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3c4b68:
    // 0x3c4b68: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3c4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3c4b6c:
    // 0x3c4b6c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3c4b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3c4b70:
    // 0x3c4b70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3c4b70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3c4b74:
    // 0x3c4b74: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3c4b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3c4b78:
    // 0x3c4b78: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x3c4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
label_3c4b7c:
    // 0x3c4b7c: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x3c4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_3c4b80:
    // 0x3c4b80: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3c4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c4b84:
    // 0x3c4b84: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3c4b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3c4b88:
    // 0x3c4b88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c4b8c:
    // 0x3c4b8c: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x3c4b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3c4b90:
    // 0x3c4b90: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3c4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3c4b94:
    // 0x3c4b94: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3c4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3c4b98:
    // 0x3c4b98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3c4b9c:
    // 0x3c4b9c: 0xc0575cc  jal         func_15D730
label_3c4ba0:
    if (ctx->pc == 0x3C4BA0u) {
        ctx->pc = 0x3C4BA0u;
            // 0x3c4ba0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C4BA4u;
        goto label_3c4ba4;
    }
    ctx->pc = 0x3C4B9Cu;
    SET_GPR_U32(ctx, 31, 0x3C4BA4u);
    ctx->pc = 0x3C4BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4B9Cu;
            // 0x3c4ba0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4BA4u; }
        if (ctx->pc != 0x3C4BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4BA4u; }
        if (ctx->pc != 0x3C4BA4u) { return; }
    }
    ctx->pc = 0x3C4BA4u;
label_3c4ba4:
    // 0x3c4ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4ba8:
    // 0x3c4ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4bac:
    // 0x3c4bac: 0xa202007a  sb          $v0, 0x7A($s0)
    ctx->pc = 0x3c4bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 2));
label_3c4bb0:
    // 0x3c4bb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3c4bb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c4bb4:
    // 0x3c4bb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c4bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c4bb8:
    // 0x3c4bb8: 0x320f809  jalr        $t9
label_3c4bbc:
    if (ctx->pc == 0x3C4BBCu) {
        ctx->pc = 0x3C4BBCu;
            // 0x3c4bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BC0u;
        goto label_3c4bc0;
    }
    ctx->pc = 0x3C4BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4BC0u);
        ctx->pc = 0x3C4BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4BB8u;
            // 0x3c4bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4BC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4BC0u; }
            if (ctx->pc != 0x3C4BC0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4BC0u;
label_3c4bc0:
    // 0x3c4bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c4bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4bc4:
    // 0x3c4bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c4bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4bc8:
    // 0x3c4bc8: 0x3e00008  jr          $ra
label_3c4bcc:
    if (ctx->pc == 0x3C4BCCu) {
        ctx->pc = 0x3C4BCCu;
            // 0x3c4bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3C4BD0u;
        goto label_3c4bd0;
    }
    ctx->pc = 0x3C4BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4BC8u;
            // 0x3c4bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4BD0u;
label_3c4bd0:
    // 0x3c4bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c4bd4:
    // 0x3c4bd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4bd8:
    // 0x3c4bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c4bdc:
    // 0x3c4bdc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c4bdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c4be0:
    // 0x3c4be0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_3c4be4:
    if (ctx->pc == 0x3C4BE4u) {
        ctx->pc = 0x3C4BE4u;
            // 0x3c4be4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3C4BE8u;
        goto label_3c4be8;
    }
    ctx->pc = 0x3C4BE0u;
    {
        const bool branch_taken_0x3c4be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4be0) {
            ctx->pc = 0x3C4BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4BE0u;
            // 0x3c4be4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4C18u;
            goto label_3c4c18;
        }
    }
    ctx->pc = 0x3C4BE8u;
label_3c4be8:
    // 0x3c4be8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4bec:
    // 0x3c4bec: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_3c4bf0:
    if (ctx->pc == 0x3C4BF0u) {
        ctx->pc = 0x3C4BF4u;
        goto label_3c4bf4;
    }
    ctx->pc = 0x3C4BECu;
    {
        const bool branch_taken_0x3c4bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4bec) {
            ctx->pc = 0x3C4C14u;
            goto label_3c4c14;
        }
    }
    ctx->pc = 0x3C4BF4u;
label_3c4bf4:
    // 0x3c4bf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4bf8:
    // 0x3c4bf8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c4bfc:
    if (ctx->pc == 0x3C4BFCu) {
        ctx->pc = 0x3C4BFCu;
            // 0x3c4bfc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C4C00u;
        goto label_3c4c00;
    }
    ctx->pc = 0x3C4BF8u;
    {
        const bool branch_taken_0x3c4bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c4bf8) {
            ctx->pc = 0x3C4BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4BF8u;
            // 0x3c4bfc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4C08u;
            goto label_3c4c08;
        }
    }
    ctx->pc = 0x3C4C00u;
label_3c4c00:
    // 0x3c4c00: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c4c04:
    if (ctx->pc == 0x3C4C04u) {
        ctx->pc = 0x3C4C08u;
        goto label_3c4c08;
    }
    ctx->pc = 0x3C4C00u;
    {
        const bool branch_taken_0x3c4c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4c00) {
            ctx->pc = 0x3C4C14u;
            goto label_3c4c14;
        }
    }
    ctx->pc = 0x3C4C08u;
label_3c4c08:
    // 0x3c4c08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c4c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c4c0c:
    // 0x3c4c0c: 0x320f809  jalr        $t9
label_3c4c10:
    if (ctx->pc == 0x3C4C10u) {
        ctx->pc = 0x3C4C14u;
        goto label_3c4c14;
    }
    ctx->pc = 0x3C4C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4C14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4C14u; }
            if (ctx->pc != 0x3C4C14u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4C14u;
label_3c4c14:
    // 0x3c4c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c4c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4c18:
    // 0x3c4c18: 0x3e00008  jr          $ra
label_3c4c1c:
    if (ctx->pc == 0x3C4C1Cu) {
        ctx->pc = 0x3C4C1Cu;
            // 0x3c4c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3C4C20u;
        goto label_fallthrough_0x3c4c18;
    }
    ctx->pc = 0x3C4C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4C18u;
            // 0x3c4c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c4c18:
    ctx->pc = 0x3C4C20u;
}
