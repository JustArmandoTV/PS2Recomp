#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8E30
// Address: 0x2b8e30 - 0x2b8ea0
void sub_002B8E30_0x2b8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8E30_0x2b8e30");
#endif

    switch (ctx->pc) {
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e88u: goto label_2b8e88;
        default: break;
    }

    ctx->pc = 0x2b8e30u;

    // 0x2b8e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8E44u;
    {
        const bool branch_taken_0x2b8e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E44u;
            // 0x2b8e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e44) {
            ctx->pc = 0x2B8E88u;
            goto label_2b8e88;
        }
    }
    ctx->pc = 0x2B8E4Cu;
    // 0x2b8e4c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8E4Cu;
    {
        const bool branch_taken_0x2b8e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e4c) {
            ctx->pc = 0x2B8E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E4Cu;
            // 0x2b8e50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E74u;
            goto label_2b8e74;
        }
    }
    ctx->pc = 0x2B8E54u;
    // 0x2b8e54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8E54u;
    {
        const bool branch_taken_0x2b8e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e54) {
            ctx->pc = 0x2B8E70u;
            goto label_2b8e70;
        }
    }
    ctx->pc = 0x2B8E5Cu;
    // 0x2b8e5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2b8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b8e60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8E60u;
    {
        const bool branch_taken_0x2b8e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e60) {
            ctx->pc = 0x2B8E70u;
            goto label_2b8e70;
        }
    }
    ctx->pc = 0x2B8E68u;
    // 0x2b8e68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8E68u;
    SET_GPR_U32(ctx, 31, 0x2B8E70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E70u; }
        if (ctx->pc != 0x2B8E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E70u; }
        if (ctx->pc != 0x2B8E70u) { return; }
    }
    ctx->pc = 0x2B8E70u;
label_2b8e70:
    // 0x2b8e70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b8e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b8e74:
    // 0x2b8e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b8e78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8E78u;
    {
        const bool branch_taken_0x2b8e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8e78) {
            ctx->pc = 0x2B8E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E78u;
            // 0x2b8e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E8Cu;
            goto label_2b8e8c;
        }
    }
    ctx->pc = 0x2B8E80u;
    // 0x2b8e80: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8E80u;
    SET_GPR_U32(ctx, 31, 0x2B8E88u);
    ctx->pc = 0x2B8E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E80u;
            // 0x2b8e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E88u; }
        if (ctx->pc != 0x2B8E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E88u; }
        if (ctx->pc != 0x2B8E88u) { return; }
    }
    ctx->pc = 0x2B8E88u;
label_2b8e88:
    // 0x2b8e88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e8c:
    // 0x2b8e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E98u;
            // 0x2b8e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8EA0u;
}
