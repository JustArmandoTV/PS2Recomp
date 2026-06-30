#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B890
// Address: 0x51b890 - 0x51b910
void sub_0051B890_0x51b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B890_0x51b890");
#endif

    switch (ctx->pc) {
        case 0x51b8a4u: goto label_51b8a4;
        case 0x51b8b8u: goto label_51b8b8;
        case 0x51b8c0u: goto label_51b8c0;
        case 0x51b8c8u: goto label_51b8c8;
        case 0x51b8d0u: goto label_51b8d0;
        case 0x51b8d8u: goto label_51b8d8;
        case 0x51b8e0u: goto label_51b8e0;
        case 0x51b8e8u: goto label_51b8e8;
        case 0x51b8f0u: goto label_51b8f0;
        default: break;
    }

    ctx->pc = 0x51b890u;

    // 0x51b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b89c: 0xc1471fc  jal         func_51C7F0
    ctx->pc = 0x51B89Cu;
    SET_GPR_U32(ctx, 31, 0x51B8A4u);
    ctx->pc = 0x51B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B89Cu;
            // 0x51b8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C7F0u;
    if (runtime->hasFunction(0x51C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x51C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8A4u; }
        if (ctx->pc != 0x51B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C7F0_0x51c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8A4u; }
        if (ctx->pc != 0x51B8A4u) { return; }
    }
    ctx->pc = 0x51B8A4u;
label_51b8a4:
    // 0x51b8a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51b8a8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x51b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x51b8ac: 0x2442fb58  addiu       $v0, $v0, -0x4A8
    ctx->pc = 0x51b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966104));
    // 0x51b8b0: 0xc14725c  jal         func_51C970
    ctx->pc = 0x51B8B0u;
    SET_GPR_U32(ctx, 31, 0x51B8B8u);
    ctx->pc = 0x51B8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8B0u;
            // 0x51b8b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C970u;
    if (runtime->hasFunction(0x51C970u)) {
        auto targetFn = runtime->lookupFunction(0x51C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8B8u; }
        if (ctx->pc != 0x51B8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C970_0x51c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8B8u; }
        if (ctx->pc != 0x51B8B8u) { return; }
    }
    ctx->pc = 0x51B8B8u;
label_51b8b8:
    // 0x51b8b8: 0xc147264  jal         func_51C990
    ctx->pc = 0x51B8B8u;
    SET_GPR_U32(ctx, 31, 0x51B8C0u);
    ctx->pc = 0x51B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8B8u;
            // 0x51b8bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C990u;
    if (runtime->hasFunction(0x51C990u)) {
        auto targetFn = runtime->lookupFunction(0x51C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8C0u; }
        if (ctx->pc != 0x51B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C990_0x51c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8C0u; }
        if (ctx->pc != 0x51B8C0u) { return; }
    }
    ctx->pc = 0x51B8C0u;
label_51b8c0:
    // 0x51b8c0: 0xc14726c  jal         func_51C9B0
    ctx->pc = 0x51B8C0u;
    SET_GPR_U32(ctx, 31, 0x51B8C8u);
    ctx->pc = 0x51B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8C0u;
            // 0x51b8c4: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C9B0u;
    if (runtime->hasFunction(0x51C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x51C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8C8u; }
        if (ctx->pc != 0x51B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C9B0_0x51c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8C8u; }
        if (ctx->pc != 0x51B8C8u) { return; }
    }
    ctx->pc = 0x51B8C8u;
label_51b8c8:
    // 0x51b8c8: 0xc147274  jal         func_51C9D0
    ctx->pc = 0x51B8C8u;
    SET_GPR_U32(ctx, 31, 0x51B8D0u);
    ctx->pc = 0x51B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8C8u;
            // 0x51b8cc: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C9D0u;
    if (runtime->hasFunction(0x51C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x51C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8D0u; }
        if (ctx->pc != 0x51B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C9D0_0x51c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8D0u; }
        if (ctx->pc != 0x51B8D0u) { return; }
    }
    ctx->pc = 0x51B8D0u;
label_51b8d0:
    // 0x51b8d0: 0xc14727c  jal         func_51C9F0
    ctx->pc = 0x51B8D0u;
    SET_GPR_U32(ctx, 31, 0x51B8D8u);
    ctx->pc = 0x51B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8D0u;
            // 0x51b8d4: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C9F0u;
    if (runtime->hasFunction(0x51C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x51C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8D8u; }
        if (ctx->pc != 0x51B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C9F0_0x51c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8D8u; }
        if (ctx->pc != 0x51B8D8u) { return; }
    }
    ctx->pc = 0x51B8D8u;
label_51b8d8:
    // 0x51b8d8: 0xc147284  jal         func_51CA10
    ctx->pc = 0x51B8D8u;
    SET_GPR_U32(ctx, 31, 0x51B8E0u);
    ctx->pc = 0x51B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8D8u;
            // 0x51b8dc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51CA10u;
    if (runtime->hasFunction(0x51CA10u)) {
        auto targetFn = runtime->lookupFunction(0x51CA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8E0u; }
        if (ctx->pc != 0x51B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051CA10_0x51ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8E0u; }
        if (ctx->pc != 0x51B8E0u) { return; }
    }
    ctx->pc = 0x51B8E0u;
label_51b8e0:
    // 0x51b8e0: 0xc14728c  jal         func_51CA30
    ctx->pc = 0x51B8E0u;
    SET_GPR_U32(ctx, 31, 0x51B8E8u);
    ctx->pc = 0x51B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8E0u;
            // 0x51b8e4: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51CA30u;
    if (runtime->hasFunction(0x51CA30u)) {
        auto targetFn = runtime->lookupFunction(0x51CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8E8u; }
        if (ctx->pc != 0x51B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051CA30_0x51ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8E8u; }
        if (ctx->pc != 0x51B8E8u) { return; }
    }
    ctx->pc = 0x51B8E8u;
label_51b8e8:
    // 0x51b8e8: 0xc147294  jal         func_51CA50
    ctx->pc = 0x51B8E8u;
    SET_GPR_U32(ctx, 31, 0x51B8F0u);
    ctx->pc = 0x51B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B8E8u;
            // 0x51b8ec: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51CA50u;
    if (runtime->hasFunction(0x51CA50u)) {
        auto targetFn = runtime->lookupFunction(0x51CA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8F0u; }
        if (ctx->pc != 0x51B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051CA50_0x51ca50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B8F0u; }
        if (ctx->pc != 0x51B8F0u) { return; }
    }
    ctx->pc = 0x51B8F0u;
label_51b8f0:
    // 0x51b8f0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x51b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x51b8f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b900: 0x3e00008  jr          $ra
    ctx->pc = 0x51B900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B900u;
            // 0x51b904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B908u;
    // 0x51b908: 0x0  nop
    ctx->pc = 0x51b908u;
    // NOP
    // 0x51b90c: 0x0  nop
    ctx->pc = 0x51b90cu;
    // NOP
}
