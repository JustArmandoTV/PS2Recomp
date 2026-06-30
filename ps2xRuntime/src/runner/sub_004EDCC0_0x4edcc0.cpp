#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EDCC0
// Address: 0x4edcc0 - 0x4edd40
void sub_004EDCC0_0x4edcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDCC0_0x4edcc0");
#endif

    switch (ctx->pc) {
        case 0x4edcc0u: goto label_4edcc0;
        case 0x4edcc4u: goto label_4edcc4;
        case 0x4edcc8u: goto label_4edcc8;
        case 0x4edcccu: goto label_4edccc;
        case 0x4edcd0u: goto label_4edcd0;
        case 0x4edcd4u: goto label_4edcd4;
        case 0x4edcd8u: goto label_4edcd8;
        case 0x4edcdcu: goto label_4edcdc;
        case 0x4edce0u: goto label_4edce0;
        case 0x4edce4u: goto label_4edce4;
        case 0x4edce8u: goto label_4edce8;
        case 0x4edcecu: goto label_4edcec;
        case 0x4edcf0u: goto label_4edcf0;
        case 0x4edcf4u: goto label_4edcf4;
        case 0x4edcf8u: goto label_4edcf8;
        case 0x4edcfcu: goto label_4edcfc;
        case 0x4edd00u: goto label_4edd00;
        case 0x4edd04u: goto label_4edd04;
        case 0x4edd08u: goto label_4edd08;
        case 0x4edd0cu: goto label_4edd0c;
        case 0x4edd10u: goto label_4edd10;
        case 0x4edd14u: goto label_4edd14;
        case 0x4edd18u: goto label_4edd18;
        case 0x4edd1cu: goto label_4edd1c;
        case 0x4edd20u: goto label_4edd20;
        case 0x4edd24u: goto label_4edd24;
        case 0x4edd28u: goto label_4edd28;
        case 0x4edd2cu: goto label_4edd2c;
        case 0x4edd30u: goto label_4edd30;
        case 0x4edd34u: goto label_4edd34;
        case 0x4edd38u: goto label_4edd38;
        case 0x4edd3cu: goto label_4edd3c;
        default: break;
    }

    ctx->pc = 0x4edcc0u;

label_4edcc0:
    // 0x4edcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4edcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4edcc4:
    // 0x4edcc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4edcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4edcc8:
    // 0x4edcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4edcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4edccc:
    // 0x4edccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4edcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4edcd0:
    // 0x4edcd0: 0x8c820cbc  lw          $v0, 0xCBC($a0)
    ctx->pc = 0x4edcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_4edcd4:
    // 0x4edcd4: 0x8ca50d98  lw          $a1, 0xD98($a1)
    ctx->pc = 0x4edcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_4edcd8:
    // 0x4edcd8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x4edcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4edcdc:
    // 0x4edcdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4edcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4edce0:
    // 0x4edce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4edce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4edce4:
    // 0x4edce4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4edce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4edce8:
    // 0x4edce8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4edce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4edcec:
    // 0x4edcec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4edcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4edcf0:
    // 0x4edcf0: 0x320f809  jalr        $t9
label_4edcf4:
    if (ctx->pc == 0x4EDCF4u) {
        ctx->pc = 0x4EDCF8u;
        goto label_4edcf8;
    }
    ctx->pc = 0x4EDCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EDCF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EDCF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EDCF8u; }
            if (ctx->pc != 0x4EDCF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EDCF8u;
label_4edcf8:
    // 0x4edcf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4edcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4edcfc:
    // 0x4edcfc: 0x8c440cc8  lw          $a0, 0xCC8($v0)
    ctx->pc = 0x4edcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_4edd00:
    // 0x4edd00: 0xc1443f8  jal         func_510FE0
label_4edd04:
    if (ctx->pc == 0x4EDD04u) {
        ctx->pc = 0x4EDD04u;
            // 0x4edd04: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->pc = 0x4EDD08u;
        goto label_4edd08;
    }
    ctx->pc = 0x4EDD00u;
    SET_GPR_U32(ctx, 31, 0x4EDD08u);
    ctx->pc = 0x4EDD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD00u;
            // 0x4edd04: 0x8e050d98  lw          $a1, 0xD98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x510FE0u;
    if (runtime->hasFunction(0x510FE0u)) {
        auto targetFn = runtime->lookupFunction(0x510FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD08u; }
        if (ctx->pc != 0x4EDD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00510FE0_0x510fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD08u; }
        if (ctx->pc != 0x4EDD08u) { return; }
    }
    ctx->pc = 0x4EDD08u;
label_4edd08:
    // 0x4edd08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4edd0c:
    // 0x4edd0c: 0x8c443fe8  lw          $a0, 0x3FE8($v0)
    ctx->pc = 0x4edd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
label_4edd10:
    // 0x4edd10: 0xc14b7d4  jal         func_52DF50
label_4edd14:
    if (ctx->pc == 0x4EDD14u) {
        ctx->pc = 0x4EDD14u;
            // 0x4edd14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD18u;
        goto label_4edd18;
    }
    ctx->pc = 0x4EDD10u;
    SET_GPR_U32(ctx, 31, 0x4EDD18u);
    ctx->pc = 0x4EDD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD10u;
            // 0x4edd14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD18u; }
        if (ctx->pc != 0x4EDD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD18u; }
        if (ctx->pc != 0x4EDD18u) { return; }
    }
    ctx->pc = 0x4EDD18u;
label_4edd18:
    // 0x4edd18: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4edd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4edd1c:
    // 0x4edd1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4edd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4edd20:
    // 0x4edd20: 0xc0781cc  jal         func_1E0730
label_4edd24:
    if (ctx->pc == 0x4EDD24u) {
        ctx->pc = 0x4EDD24u;
            // 0x4edd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EDD28u;
        goto label_4edd28;
    }
    ctx->pc = 0x4EDD20u;
    SET_GPR_U32(ctx, 31, 0x4EDD28u);
    ctx->pc = 0x4EDD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD20u;
            // 0x4edd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD28u; }
        if (ctx->pc != 0x4EDD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EDD28u; }
        if (ctx->pc != 0x4EDD28u) { return; }
    }
    ctx->pc = 0x4EDD28u;
label_4edd28:
    // 0x4edd28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4edd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4edd2c:
    // 0x4edd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4edd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4edd30:
    // 0x4edd30: 0x3e00008  jr          $ra
label_4edd34:
    if (ctx->pc == 0x4EDD34u) {
        ctx->pc = 0x4EDD34u;
            // 0x4edd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4EDD38u;
        goto label_4edd38;
    }
    ctx->pc = 0x4EDD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EDD30u;
            // 0x4edd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EDD38u;
label_4edd38:
    // 0x4edd38: 0x0  nop
    ctx->pc = 0x4edd38u;
    // NOP
label_4edd3c:
    // 0x4edd3c: 0x0  nop
    ctx->pc = 0x4edd3cu;
    // NOP
}
