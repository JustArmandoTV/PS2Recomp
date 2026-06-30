#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5C50
// Address: 0x2b5c50 - 0x2b5cc0
void sub_002B5C50_0x2b5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C50_0x2b5c50");
#endif

    switch (ctx->pc) {
        case 0x2b5c90u: goto label_2b5c90;
        case 0x2b5ca8u: goto label_2b5ca8;
        default: break;
    }

    ctx->pc = 0x2b5c50u;

    // 0x2b5c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5C64u;
    {
        const bool branch_taken_0x2b5c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C64u;
            // 0x2b5c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c64) {
            ctx->pc = 0x2B5CA8u;
            goto label_2b5ca8;
        }
    }
    ctx->pc = 0x2B5C6Cu;
    // 0x2b5c6c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5C6Cu;
    {
        const bool branch_taken_0x2b5c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c6c) {
            ctx->pc = 0x2B5C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C6Cu;
            // 0x2b5c70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C94u;
            goto label_2b5c94;
        }
    }
    ctx->pc = 0x2B5C74u;
    // 0x2b5c74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5C74u;
    {
        const bool branch_taken_0x2b5c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c74) {
            ctx->pc = 0x2B5C90u;
            goto label_2b5c90;
        }
    }
    ctx->pc = 0x2B5C7Cu;
    // 0x2b5c7c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2b5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b5c80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5C80u;
    {
        const bool branch_taken_0x2b5c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c80) {
            ctx->pc = 0x2B5C90u;
            goto label_2b5c90;
        }
    }
    ctx->pc = 0x2B5C88u;
    // 0x2b5c88: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2B5C88u;
    SET_GPR_U32(ctx, 31, 0x2B5C90u);
    ctx->pc = 0x2D19A0u;
    if (runtime->hasFunction(0x2D19A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C90u; }
        if (ctx->pc != 0x2B5C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A0_0x2d19a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C90u; }
        if (ctx->pc != 0x2B5C90u) { return; }
    }
    ctx->pc = 0x2B5C90u;
label_2b5c90:
    // 0x2b5c90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5c94:
    // 0x2b5c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5c98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5C98u;
    {
        const bool branch_taken_0x2b5c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5c98) {
            ctx->pc = 0x2B5C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5C98u;
            // 0x2b5c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CACu;
            goto label_2b5cac;
        }
    }
    ctx->pc = 0x2B5CA0u;
    // 0x2b5ca0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B5CA0u;
    SET_GPR_U32(ctx, 31, 0x2B5CA8u);
    ctx->pc = 0x2B5CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5CA0u;
            // 0x2b5ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5CA8u; }
        if (ctx->pc != 0x2B5CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5CA8u; }
        if (ctx->pc != 0x2B5CA8u) { return; }
    }
    ctx->pc = 0x2B5CA8u;
label_2b5ca8:
    // 0x2b5ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5cac:
    // 0x2b5cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5CB8u;
            // 0x2b5cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5CC0u;
}
