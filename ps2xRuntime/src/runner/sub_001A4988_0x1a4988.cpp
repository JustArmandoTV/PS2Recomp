#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4988
// Address: 0x1a4988 - 0x1a4bb0
void sub_001A4988_0x1a4988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4988_0x1a4988");
#endif

    switch (ctx->pc) {
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        default: break;
    }

    ctx->pc = 0x1a4988u;

label_1a4988:
    // 0x1a4988: 0x8c833720  lw          $v1, 0x3720($a0)
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14112)));
label_1a498c:
    // 0x1a498c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a498cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4990:
    // 0x1a4990: 0x8c842074  lw          $a0, 0x2074($a0)
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
label_1a4994:
    // 0x1a4994: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a4998:
    if (ctx->pc == 0x1A4998u) {
        ctx->pc = 0x1A4998u;
            // 0x1a4998: 0x24650d0c  addiu       $a1, $v1, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3340));
        ctx->pc = 0x1A499Cu;
        goto label_1a499c;
    }
    ctx->pc = 0x1A4994u;
    {
        const bool branch_taken_0x1a4994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4994u;
            // 0x1a4998: 0x24650d0c  addiu       $a1, $v1, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4994) {
            ctx->pc = 0x1A49B0u;
            goto label_1a49b0;
        }
    }
    ctx->pc = 0x1A499Cu;
label_1a499c:
    // 0x1a499c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a49a0:
    // 0x1a49a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a49a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a49a4:
    // 0x1a49a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a49a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a49a8:
    // 0x1a49a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a49a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a49ac:
    // 0x1a49ac: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1a49acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1a49b0:
    // 0x1a49b0: 0x3e00008  jr          $ra
label_1a49b4:
    if (ctx->pc == 0x1A49B4u) {
        ctx->pc = 0x1A49B8u;
        goto label_1a49b8;
    }
    ctx->pc = 0x1A49B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A49B8u;
label_1a49b8:
    // 0x1a49b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a49bc:
    // 0x1a49bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a49bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a49c0:
    // 0x1a49c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a49c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a49c4:
    // 0x1a49c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a49c8:
    // 0x1a49c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a49c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a49cc:
    // 0x1a49cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a49ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a49d0:
    // 0x1a49d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a49d4:
    // 0x1a49d4: 0xc06a234  jal         func_1A88D0
label_1a49d8:
    if (ctx->pc == 0x1A49D8u) {
        ctx->pc = 0x1A49D8u;
            // 0x1a49d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A49DCu;
        goto label_1a49dc;
    }
    ctx->pc = 0x1A49D4u;
    SET_GPR_U32(ctx, 31, 0x1A49DCu);
    ctx->pc = 0x1A49D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49D4u;
            // 0x1a49d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49DCu; }
        if (ctx->pc != 0x1A49DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49DCu; }
        if (ctx->pc != 0x1A49DCu) { return; }
    }
    ctx->pc = 0x1A49DCu;
label_1a49dc:
    // 0x1a49dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a49e0:
    // 0x1a49e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a49e4:
    // 0x1a49e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a49e8:
    if (ctx->pc == 0x1A49E8u) {
        ctx->pc = 0x1A49E8u;
            // 0x1a49e8: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->pc = 0x1A49ECu;
        goto label_1a49ec;
    }
    ctx->pc = 0x1A49E4u;
    {
        const bool branch_taken_0x1a49e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49E4u;
            // 0x1a49e8: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49e4) {
            ctx->pc = 0x1A4A08u;
            goto label_1a4a08;
        }
    }
    ctx->pc = 0x1A49ECu;
label_1a49ec:
    // 0x1a49ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a49ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a49f0:
    // 0x1a49f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a49f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a49f4:
    // 0x1a49f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a49f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a49f8:
    // 0x1a49f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a49f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a49fc:
    // 0x1a49fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a49fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4a00:
    // 0x1a4a00: 0x806a1ac  j           func_1A86B0
label_1a4a04:
    if (ctx->pc == 0x1A4A04u) {
        ctx->pc = 0x1A4A04u;
            // 0x1a4a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4A08u;
        goto label_1a4a08;
    }
    ctx->pc = 0x1A4A00u;
    ctx->pc = 0x1A4A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A00u;
            // 0x1a4a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4A08u;
label_1a4a08:
    // 0x1a4a08: 0xc06d81c  jal         func_1B6070
label_1a4a0c:
    if (ctx->pc == 0x1A4A0Cu) {
        ctx->pc = 0x1A4A0Cu;
            // 0x1a4a0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A4A10u;
        goto label_1a4a10;
    }
    ctx->pc = 0x1A4A08u;
    SET_GPR_U32(ctx, 31, 0x1A4A10u);
    ctx->pc = 0x1A4A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A08u;
            // 0x1a4a0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A10u; }
        if (ctx->pc != 0x1A4A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A10u; }
        if (ctx->pc != 0x1A4A10u) { return; }
    }
    ctx->pc = 0x1A4A10u;
label_1a4a10:
    // 0x1a4a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a14:
    // 0x1a4a14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a4a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a18:
    // 0x1a4a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4a1c:
    if (ctx->pc == 0x1A4A1Cu) {
        ctx->pc = 0x1A4A1Cu;
            // 0x1a4a1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A20u;
        goto label_1a4a20;
    }
    ctx->pc = 0x1A4A18u;
    {
        const bool branch_taken_0x1a4a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A18u;
            // 0x1a4a1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a18) {
            ctx->pc = 0x1A4A30u;
            goto label_1a4a30;
        }
    }
    ctx->pc = 0x1A4A20u;
label_1a4a20:
    // 0x1a4a20: 0x8e022184  lw          $v0, 0x2184($s0)
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8580)));
label_1a4a24:
    // 0x1a4a24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a4a28:
    // 0x1a4a28: 0x60f809  jalr        $v1
label_1a4a2c:
    if (ctx->pc == 0x1A4A2Cu) {
        ctx->pc = 0x1A4A30u;
        goto label_1a4a30;
    }
    ctx->pc = 0x1A4A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4A30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A30u; }
            if (ctx->pc != 0x1A4A30u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4A30u;
label_1a4a30:
    // 0x1a4a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4a34:
    // 0x1a4a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4a38:
    // 0x1a4a38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a4a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4a3c:
    // 0x1a4a3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4a40:
    // 0x1a4a40: 0x3e00008  jr          $ra
label_1a4a44:
    if (ctx->pc == 0x1A4A44u) {
        ctx->pc = 0x1A4A44u;
            // 0x1a4a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4A48u;
        goto label_1a4a48;
    }
    ctx->pc = 0x1A4A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A40u;
            // 0x1a4a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4A48u;
label_1a4a48:
    // 0x1a4a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4a4c:
    // 0x1a4a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4a50:
    // 0x1a4a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a54:
    // 0x1a4a54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4a58:
    // 0x1a4a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4a5c:
    // 0x1a4a5c: 0xc06a234  jal         func_1A88D0
label_1a4a60:
    if (ctx->pc == 0x1A4A60u) {
        ctx->pc = 0x1A4A60u;
            // 0x1a4a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A64u;
        goto label_1a4a64;
    }
    ctx->pc = 0x1A4A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A4A64u);
    ctx->pc = 0x1A4A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A5Cu;
            // 0x1a4a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A64u; }
        if (ctx->pc != 0x1A4A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A64u; }
        if (ctx->pc != 0x1A4A64u) { return; }
    }
    ctx->pc = 0x1A4A64u;
label_1a4a64:
    // 0x1a4a64: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a4a68:
    // 0x1a4a68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4a6c:
    if (ctx->pc == 0x1A4A6Cu) {
        ctx->pc = 0x1A4A6Cu;
            // 0x1a4a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A70u;
        goto label_1a4a70;
    }
    ctx->pc = 0x1A4A68u;
    {
        const bool branch_taken_0x1a4a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A68u;
            // 0x1a4a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a68) {
            ctx->pc = 0x1A4A88u;
            goto label_1a4a88;
        }
    }
    ctx->pc = 0x1A4A70u;
label_1a4a70:
    // 0x1a4a70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a74:
    // 0x1a4a74: 0xc06a1ac  jal         func_1A86B0
label_1a4a78:
    if (ctx->pc == 0x1A4A78u) {
        ctx->pc = 0x1A4A78u;
            // 0x1a4a78: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->pc = 0x1A4A7Cu;
        goto label_1a4a7c;
    }
    ctx->pc = 0x1A4A74u;
    SET_GPR_U32(ctx, 31, 0x1A4A7Cu);
    ctx->pc = 0x1A4A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A74u;
            // 0x1a4a78: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A7Cu; }
        if (ctx->pc != 0x1A4A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A7Cu; }
        if (ctx->pc != 0x1A4A7Cu) { return; }
    }
    ctx->pc = 0x1A4A7Cu;
label_1a4a7c:
    // 0x1a4a7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a4a80:
    if (ctx->pc == 0x1A4A80u) {
        ctx->pc = 0x1A4A80u;
            // 0x1a4a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A84u;
        goto label_1a4a84;
    }
    ctx->pc = 0x1A4A7Cu;
    {
        const bool branch_taken_0x1a4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A7Cu;
            // 0x1a4a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a7c) {
            ctx->pc = 0x1A4AACu;
            goto label_1a4aac;
        }
    }
    ctx->pc = 0x1A4A84u;
label_1a4a84:
    // 0x1a4a84: 0x0  nop
    ctx->pc = 0x1a4a84u;
    // NOP
label_1a4a88:
    // 0x1a4a88: 0xc06d81c  jal         func_1B6070
label_1a4a8c:
    if (ctx->pc == 0x1A4A8Cu) {
        ctx->pc = 0x1A4A8Cu;
            // 0x1a4a8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A4A90u;
        goto label_1a4a90;
    }
    ctx->pc = 0x1A4A88u;
    SET_GPR_U32(ctx, 31, 0x1A4A90u);
    ctx->pc = 0x1A4A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A88u;
            // 0x1a4a8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A90u; }
        if (ctx->pc != 0x1A4A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A90u; }
        if (ctx->pc != 0x1A4A90u) { return; }
    }
    ctx->pc = 0x1A4A90u;
label_1a4a90:
    // 0x1a4a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a94:
    // 0x1a4a94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4a98:
    if (ctx->pc == 0x1A4A98u) {
        ctx->pc = 0x1A4A98u;
            // 0x1a4a98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A9Cu;
        goto label_1a4a9c;
    }
    ctx->pc = 0x1A4A94u;
    {
        const bool branch_taken_0x1a4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A94u;
            // 0x1a4a98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a94) {
            ctx->pc = 0x1A4AACu;
            goto label_1a4aac;
        }
    }
    ctx->pc = 0x1A4A9Cu;
label_1a4a9c:
    // 0x1a4a9c: 0x8e032184  lw          $v1, 0x2184($s0)
    ctx->pc = 0x1a4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8580)));
label_1a4aa0:
    // 0x1a4aa0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a4aa4:
    // 0x1a4aa4: 0x40f809  jalr        $v0
label_1a4aa8:
    if (ctx->pc == 0x1A4AA8u) {
        ctx->pc = 0x1A4AACu;
        goto label_1a4aac;
    }
    ctx->pc = 0x1A4AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4AACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AACu; }
            if (ctx->pc != 0x1A4AACu) { return; }
        }
        }
    }
    ctx->pc = 0x1A4AACu;
label_1a4aac:
    // 0x1a4aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4ab0:
    // 0x1a4ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4ab4:
    // 0x1a4ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4ab8:
    // 0x1a4ab8: 0x3e00008  jr          $ra
label_1a4abc:
    if (ctx->pc == 0x1A4ABCu) {
        ctx->pc = 0x1A4ABCu;
            // 0x1a4abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4AC0u;
        goto label_1a4ac0;
    }
    ctx->pc = 0x1A4AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AB8u;
            // 0x1a4abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4AC0u;
label_1a4ac0:
    // 0x1a4ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4ac4:
    // 0x1a4ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4ac8:
    // 0x1a4ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4acc:
    // 0x1a4acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4ad0:
    // 0x1a4ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4ad4:
    // 0x1a4ad4: 0xc06a234  jal         func_1A88D0
label_1a4ad8:
    if (ctx->pc == 0x1A4AD8u) {
        ctx->pc = 0x1A4AD8u;
            // 0x1a4ad8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4ADCu;
        goto label_1a4adc;
    }
    ctx->pc = 0x1A4AD4u;
    SET_GPR_U32(ctx, 31, 0x1A4ADCu);
    ctx->pc = 0x1A4AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AD4u;
            // 0x1a4ad8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4ADCu; }
        if (ctx->pc != 0x1A4ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4ADCu; }
        if (ctx->pc != 0x1A4ADCu) { return; }
    }
    ctx->pc = 0x1A4ADCu;
label_1a4adc:
    // 0x1a4adc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a4ae0:
    // 0x1a4ae0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4ae4:
    if (ctx->pc == 0x1A4AE4u) {
        ctx->pc = 0x1A4AE4u;
            // 0x1a4ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AE8u;
        goto label_1a4ae8;
    }
    ctx->pc = 0x1A4AE0u;
    {
        const bool branch_taken_0x1a4ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AE0u;
            // 0x1a4ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ae0) {
            ctx->pc = 0x1A4B00u;
            goto label_1a4b00;
        }
    }
    ctx->pc = 0x1A4AE8u;
label_1a4ae8:
    // 0x1a4ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4aec:
    // 0x1a4aec: 0x34a501a3  ori         $a1, $a1, 0x1A3
    ctx->pc = 0x1a4aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
label_1a4af0:
    // 0x1a4af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4af4:
    // 0x1a4af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4af8:
    // 0x1a4af8: 0x806a1ac  j           func_1A86B0
label_1a4afc:
    if (ctx->pc == 0x1A4AFCu) {
        ctx->pc = 0x1A4AFCu;
            // 0x1a4afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4B00u;
        goto label_1a4b00;
    }
    ctx->pc = 0x1A4AF8u;
    ctx->pc = 0x1A4AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AF8u;
            // 0x1a4afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4B00u;
label_1a4b00:
    // 0x1a4b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b04:
    // 0x1a4b04: 0xc06d81c  jal         func_1B6070
label_1a4b08:
    if (ctx->pc == 0x1A4B08u) {
        ctx->pc = 0x1A4B08u;
            // 0x1a4b08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A4B0Cu;
        goto label_1a4b0c;
    }
    ctx->pc = 0x1A4B04u;
    SET_GPR_U32(ctx, 31, 0x1A4B0Cu);
    ctx->pc = 0x1A4B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B04u;
            // 0x1a4b08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B0Cu; }
        if (ctx->pc != 0x1A4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B0Cu; }
        if (ctx->pc != 0x1A4B0Cu) { return; }
    }
    ctx->pc = 0x1A4B0Cu;
label_1a4b0c:
    // 0x1a4b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b10:
    // 0x1a4b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4b14:
    if (ctx->pc == 0x1A4B14u) {
        ctx->pc = 0x1A4B14u;
            // 0x1a4b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B18u;
        goto label_1a4b18;
    }
    ctx->pc = 0x1A4B10u;
    {
        const bool branch_taken_0x1a4b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B10u;
            // 0x1a4b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b10) {
            ctx->pc = 0x1A4B28u;
            goto label_1a4b28;
        }
    }
    ctx->pc = 0x1A4B18u;
label_1a4b18:
    // 0x1a4b18: 0x8e022184  lw          $v0, 0x2184($s0)
    ctx->pc = 0x1a4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8580)));
label_1a4b1c:
    // 0x1a4b1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a4b20:
    // 0x1a4b20: 0x60f809  jalr        $v1
label_1a4b24:
    if (ctx->pc == 0x1A4B24u) {
        ctx->pc = 0x1A4B28u;
        goto label_1a4b28;
    }
    ctx->pc = 0x1A4B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4B28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B28u; }
            if (ctx->pc != 0x1A4B28u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4B28u;
label_1a4b28:
    // 0x1a4b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4b2c:
    // 0x1a4b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4b30:
    // 0x1a4b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4b34:
    // 0x1a4b34: 0x3e00008  jr          $ra
label_1a4b38:
    if (ctx->pc == 0x1A4B38u) {
        ctx->pc = 0x1A4B38u;
            // 0x1a4b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A4B3Cu;
        goto label_1a4b3c;
    }
    ctx->pc = 0x1A4B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B34u;
            // 0x1a4b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4B3Cu;
label_1a4b3c:
    // 0x1a4b3c: 0x0  nop
    ctx->pc = 0x1a4b3cu;
    // NOP
label_1a4b40:
    // 0x1a4b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4b44:
    // 0x1a4b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4b48:
    // 0x1a4b48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4b4c:
    // 0x1a4b4c: 0xc06a234  jal         func_1A88D0
label_1a4b50:
    if (ctx->pc == 0x1A4B50u) {
        ctx->pc = 0x1A4B50u;
            // 0x1a4b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B54u;
        goto label_1a4b54;
    }
    ctx->pc = 0x1A4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B54u);
    ctx->pc = 0x1A4B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B4Cu;
            // 0x1a4b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B54u; }
        if (ctx->pc != 0x1A4B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B54u; }
        if (ctx->pc != 0x1A4B54u) { return; }
    }
    ctx->pc = 0x1A4B54u;
label_1a4b54:
    // 0x1a4b54: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a4b58:
    // 0x1a4b58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b5c:
    // 0x1a4b5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4b60:
    if (ctx->pc == 0x1A4B60u) {
        ctx->pc = 0x1A4B60u;
            // 0x1a4b60: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->pc = 0x1A4B64u;
        goto label_1a4b64;
    }
    ctx->pc = 0x1A4B5Cu;
    {
        const bool branch_taken_0x1a4b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B5Cu;
            // 0x1a4b60: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b5c) {
            ctx->pc = 0x1A4B78u;
            goto label_1a4b78;
        }
    }
    ctx->pc = 0x1A4B64u;
label_1a4b64:
    // 0x1a4b64: 0xc06a1ac  jal         func_1A86B0
label_1a4b68:
    if (ctx->pc == 0x1A4B68u) {
        ctx->pc = 0x1A4B6Cu;
        goto label_1a4b6c;
    }
    ctx->pc = 0x1A4B64u;
    SET_GPR_U32(ctx, 31, 0x1A4B6Cu);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B6Cu; }
        if (ctx->pc != 0x1A4B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B6Cu; }
        if (ctx->pc != 0x1A4B6Cu) { return; }
    }
    ctx->pc = 0x1A4B6Cu;
label_1a4b6c:
    // 0x1a4b6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a4b70:
    if (ctx->pc == 0x1A4B70u) {
        ctx->pc = 0x1A4B70u;
            // 0x1a4b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B74u;
        goto label_1a4b74;
    }
    ctx->pc = 0x1A4B6Cu;
    {
        const bool branch_taken_0x1a4b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B6Cu;
            // 0x1a4b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b6c) {
            ctx->pc = 0x1A4B9Cu;
            goto label_1a4b9c;
        }
    }
    ctx->pc = 0x1A4B74u;
label_1a4b74:
    // 0x1a4b74: 0x0  nop
    ctx->pc = 0x1a4b74u;
    // NOP
label_1a4b78:
    // 0x1a4b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b7c:
    // 0x1a4b7c: 0xc06d81c  jal         func_1B6070
label_1a4b80:
    if (ctx->pc == 0x1A4B80u) {
        ctx->pc = 0x1A4B80u;
            // 0x1a4b80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A4B84u;
        goto label_1a4b84;
    }
    ctx->pc = 0x1A4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B84u);
    ctx->pc = 0x1A4B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B7Cu;
            // 0x1a4b80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B84u; }
        if (ctx->pc != 0x1A4B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B84u; }
        if (ctx->pc != 0x1A4B84u) { return; }
    }
    ctx->pc = 0x1A4B84u;
label_1a4b84:
    // 0x1a4b84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4b88:
    if (ctx->pc == 0x1A4B88u) {
        ctx->pc = 0x1A4B88u;
            // 0x1a4b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B8Cu;
        goto label_1a4b8c;
    }
    ctx->pc = 0x1A4B84u;
    {
        const bool branch_taken_0x1a4b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B84u;
            // 0x1a4b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b84) {
            ctx->pc = 0x1A4B9Cu;
            goto label_1a4b9c;
        }
    }
    ctx->pc = 0x1A4B8Cu;
label_1a4b8c:
    // 0x1a4b8c: 0x8e032184  lw          $v1, 0x2184($s0)
    ctx->pc = 0x1a4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8580)));
label_1a4b90:
    // 0x1a4b90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4b94:
    // 0x1a4b94: 0x40f809  jalr        $v0
label_1a4b98:
    if (ctx->pc == 0x1A4B98u) {
        ctx->pc = 0x1A4B9Cu;
        goto label_1a4b9c;
    }
    ctx->pc = 0x1A4B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4B9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B9Cu; }
            if (ctx->pc != 0x1A4B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A4B9Cu;
label_1a4b9c:
    // 0x1a4b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4ba0:
    // 0x1a4ba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4ba4:
    // 0x1a4ba4: 0x3e00008  jr          $ra
label_1a4ba8:
    if (ctx->pc == 0x1A4BA8u) {
        ctx->pc = 0x1A4BA8u;
            // 0x1a4ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A4BACu;
        goto label_1a4bac;
    }
    ctx->pc = 0x1A4BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BA4u;
            // 0x1a4ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4BACu;
label_1a4bac:
    // 0x1a4bac: 0x0  nop
    ctx->pc = 0x1a4bacu;
    // NOP
}
