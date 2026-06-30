#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052DF50
// Address: 0x52df50 - 0x52dfc0
void sub_0052DF50_0x52df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052DF50_0x52df50");
#endif

    switch (ctx->pc) {
        case 0x52df78u: goto label_52df78;
        default: break;
    }

    ctx->pc = 0x52df50u;

    // 0x52df50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52df54: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x52df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x52df58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52df5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x52df5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x52df60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52df64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52df68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52df68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52df6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52df6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52df70: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x52DF70u;
    SET_GPR_U32(ctx, 31, 0x52DF78u);
    ctx->pc = 0x52DF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF70u;
            // 0x52df74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DF78u; }
        if (ctx->pc != 0x52DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DF78u; }
        if (ctx->pc != 0x52DF78u) { return; }
    }
    ctx->pc = 0x52DF78u;
label_52df78:
    // 0x52df78: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x52df78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x52df7c: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x52df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x52df80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x52df80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x52df84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x52df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x52df88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x52df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x52df8c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x52df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x52df90: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x52DF90u;
    {
        const bool branch_taken_0x52df90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52df90) {
            ctx->pc = 0x52DF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF90u;
            // 0x52df94: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DFA0u;
            goto label_52dfa0;
        }
    }
    ctx->pc = 0x52DF98u;
    // 0x52df98: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x52df98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x52df9c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x52df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_52dfa0:
    // 0x52dfa0: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x52dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x52dfa4: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x52dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x52dfa8: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x52dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x52dfac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52dfb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52dfb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52dfb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52dfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52dfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x52DFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DFB8u;
            // 0x52dfbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DFC0u;
}
