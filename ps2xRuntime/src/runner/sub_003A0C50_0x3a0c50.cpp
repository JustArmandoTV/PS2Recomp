#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0C50
// Address: 0x3a0c50 - 0x3a0cc0
void sub_003A0C50_0x3a0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0C50_0x3a0c50");
#endif

    switch (ctx->pc) {
        case 0x3a0c90u: goto label_3a0c90;
        case 0x3a0ca8u: goto label_3a0ca8;
        default: break;
    }

    ctx->pc = 0x3a0c50u;

    // 0x3a0c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A0C64u;
    {
        const bool branch_taken_0x3a0c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0C64u;
            // 0x3a0c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c64) {
            ctx->pc = 0x3A0CA8u;
            goto label_3a0ca8;
        }
    }
    ctx->pc = 0x3A0C6Cu;
    // 0x3a0c6c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A0C6Cu;
    {
        const bool branch_taken_0x3a0c6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c6c) {
            ctx->pc = 0x3A0C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0C6Cu;
            // 0x3a0c70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0C94u;
            goto label_3a0c94;
        }
    }
    ctx->pc = 0x3A0C74u;
    // 0x3a0c74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0C74u;
    {
        const bool branch_taken_0x3a0c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c74) {
            ctx->pc = 0x3A0C90u;
            goto label_3a0c90;
        }
    }
    ctx->pc = 0x3A0C7Cu;
    // 0x3a0c7c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a0c80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0C80u;
    {
        const bool branch_taken_0x3a0c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c80) {
            ctx->pc = 0x3A0C90u;
            goto label_3a0c90;
        }
    }
    ctx->pc = 0x3A0C88u;
    // 0x3a0c88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3A0C88u;
    SET_GPR_U32(ctx, 31, 0x3A0C90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0C90u; }
        if (ctx->pc != 0x3A0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0C90u; }
        if (ctx->pc != 0x3A0C90u) { return; }
    }
    ctx->pc = 0x3A0C90u;
label_3a0c90:
    // 0x3a0c90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a0c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3a0c94:
    // 0x3a0c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a0c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a0c98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0C98u;
    {
        const bool branch_taken_0x3a0c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a0c98) {
            ctx->pc = 0x3A0C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0C98u;
            // 0x3a0c9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0CACu;
            goto label_3a0cac;
        }
    }
    ctx->pc = 0x3A0CA0u;
    // 0x3a0ca0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3A0CA0u;
    SET_GPR_U32(ctx, 31, 0x3A0CA8u);
    ctx->pc = 0x3A0CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0CA0u;
            // 0x3a0ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0CA8u; }
        if (ctx->pc != 0x3A0CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0CA8u; }
        if (ctx->pc != 0x3A0CA8u) { return; }
    }
    ctx->pc = 0x3A0CA8u;
label_3a0ca8:
    // 0x3a0ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a0ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a0cac:
    // 0x3a0cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0CB8u;
            // 0x3a0cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0CC0u;
}
