#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BFC60
// Address: 0x4bfc60 - 0x4bfcd0
void sub_004BFC60_0x4bfc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFC60_0x4bfc60");
#endif

    switch (ctx->pc) {
        case 0x4bfca0u: goto label_4bfca0;
        case 0x4bfcb8u: goto label_4bfcb8;
        default: break;
    }

    ctx->pc = 0x4bfc60u;

    // 0x4bfc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bfc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bfc64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bfc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bfc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bfc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bfc6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfc70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bfc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfc74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BFC74u;
    {
        const bool branch_taken_0x4bfc74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFC74u;
            // 0x4bfc78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfc74) {
            ctx->pc = 0x4BFCB8u;
            goto label_4bfcb8;
        }
    }
    ctx->pc = 0x4BFC7Cu;
    // 0x4bfc7c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BFC7Cu;
    {
        const bool branch_taken_0x4bfc7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfc7c) {
            ctx->pc = 0x4BFC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFC7Cu;
            // 0x4bfc80: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFCA4u;
            goto label_4bfca4;
        }
    }
    ctx->pc = 0x4BFC84u;
    // 0x4bfc84: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BFC84u;
    {
        const bool branch_taken_0x4bfc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfc84) {
            ctx->pc = 0x4BFCA0u;
            goto label_4bfca0;
        }
    }
    ctx->pc = 0x4BFC8Cu;
    // 0x4bfc8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4bfc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4bfc90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BFC90u;
    {
        const bool branch_taken_0x4bfc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfc90) {
            ctx->pc = 0x4BFCA0u;
            goto label_4bfca0;
        }
    }
    ctx->pc = 0x4BFC98u;
    // 0x4bfc98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BFC98u;
    SET_GPR_U32(ctx, 31, 0x4BFCA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFCA0u; }
        if (ctx->pc != 0x4BFCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFCA0u; }
        if (ctx->pc != 0x4BFCA0u) { return; }
    }
    ctx->pc = 0x4BFCA0u;
label_4bfca0:
    // 0x4bfca0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bfca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bfca4:
    // 0x4bfca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bfca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4bfca8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BFCA8u;
    {
        const bool branch_taken_0x4bfca8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bfca8) {
            ctx->pc = 0x4BFCACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFCA8u;
            // 0x4bfcac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFCBCu;
            goto label_4bfcbc;
        }
    }
    ctx->pc = 0x4BFCB0u;
    // 0x4bfcb0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BFCB0u;
    SET_GPR_U32(ctx, 31, 0x4BFCB8u);
    ctx->pc = 0x4BFCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFCB0u;
            // 0x4bfcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFCB8u; }
        if (ctx->pc != 0x4BFCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFCB8u; }
        if (ctx->pc != 0x4BFCB8u) { return; }
    }
    ctx->pc = 0x4BFCB8u;
label_4bfcb8:
    // 0x4bfcb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bfcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bfcbc:
    // 0x4bfcbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bfcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bfcc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bfcc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfcc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFCC8u;
            // 0x4bfccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFCD0u;
}
