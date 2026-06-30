#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAB30
// Address: 0x2bab30 - 0x2bab90
void sub_002BAB30_0x2bab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAB30_0x2bab30");
#endif

    switch (ctx->pc) {
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab6cu: goto label_2bab6c;
        default: break;
    }

    ctx->pc = 0x2bab30u;

    // 0x2bab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bab34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bab38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bab3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bab40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bab40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab44: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BAB44u;
    {
        const bool branch_taken_0x2bab44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB44u;
            // 0x2bab48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab44) {
            ctx->pc = 0x2BAB6Cu;
            goto label_2bab6c;
        }
    }
    ctx->pc = 0x2BAB4Cu;
    // 0x2bab4c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BAB4Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB54u);
    ctx->pc = 0x2BAB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB4Cu;
            // 0x2bab50: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB54u; }
        if (ctx->pc != 0x2BAB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB54u; }
        if (ctx->pc != 0x2BAB54u) { return; }
    }
    ctx->pc = 0x2BAB54u;
label_2bab54:
    // 0x2bab54: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2bab58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bab58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bab5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAB5Cu;
    {
        const bool branch_taken_0x2bab5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bab5c) {
            ctx->pc = 0x2BAB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB5Cu;
            // 0x2bab60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAB70u;
            goto label_2bab70;
        }
    }
    ctx->pc = 0x2BAB64u;
    // 0x2bab64: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BAB64u;
    SET_GPR_U32(ctx, 31, 0x2BAB6Cu);
    ctx->pc = 0x2BAB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB64u;
            // 0x2bab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB6Cu; }
        if (ctx->pc != 0x2BAB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAB6Cu; }
        if (ctx->pc != 0x2BAB6Cu) { return; }
    }
    ctx->pc = 0x2BAB6Cu;
label_2bab6c:
    // 0x2bab6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bab6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bab70:
    // 0x2bab70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bab74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bab74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bab78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bab78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAB7Cu;
            // 0x2bab80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAB84u;
    // 0x2bab84: 0x0  nop
    ctx->pc = 0x2bab84u;
    // NOP
    // 0x2bab88: 0x0  nop
    ctx->pc = 0x2bab88u;
    // NOP
    // 0x2bab8c: 0x0  nop
    ctx->pc = 0x2bab8cu;
    // NOP
}
