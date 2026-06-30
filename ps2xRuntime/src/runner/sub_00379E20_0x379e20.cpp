#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379E20
// Address: 0x379e20 - 0x379e90
void sub_00379E20_0x379e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379E20_0x379e20");
#endif

    switch (ctx->pc) {
        case 0x379e60u: goto label_379e60;
        case 0x379e78u: goto label_379e78;
        default: break;
    }

    ctx->pc = 0x379e20u;

    // 0x379e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x379e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x379e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x379e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x379E34u;
    {
        const bool branch_taken_0x379e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x379E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379E34u;
            // 0x379e38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379e34) {
            ctx->pc = 0x379E78u;
            goto label_379e78;
        }
    }
    ctx->pc = 0x379E3Cu;
    // 0x379e3c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x379E3Cu;
    {
        const bool branch_taken_0x379e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x379e3c) {
            ctx->pc = 0x379E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379E3Cu;
            // 0x379e40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379E64u;
            goto label_379e64;
        }
    }
    ctx->pc = 0x379E44u;
    // 0x379e44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x379E44u;
    {
        const bool branch_taken_0x379e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x379e44) {
            ctx->pc = 0x379E60u;
            goto label_379e60;
        }
    }
    ctx->pc = 0x379E4Cu;
    // 0x379e4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x379e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x379e50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379E50u;
    {
        const bool branch_taken_0x379e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x379e50) {
            ctx->pc = 0x379E60u;
            goto label_379e60;
        }
    }
    ctx->pc = 0x379E58u;
    // 0x379e58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x379E58u;
    SET_GPR_U32(ctx, 31, 0x379E60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379E60u; }
        if (ctx->pc != 0x379E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379E60u; }
        if (ctx->pc != 0x379E60u) { return; }
    }
    ctx->pc = 0x379E60u;
label_379e60:
    // 0x379e60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x379e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_379e64:
    // 0x379e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x379e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x379e68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379E68u;
    {
        const bool branch_taken_0x379e68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x379e68) {
            ctx->pc = 0x379E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379E68u;
            // 0x379e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379E7Cu;
            goto label_379e7c;
        }
    }
    ctx->pc = 0x379E70u;
    // 0x379e70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x379E70u;
    SET_GPR_U32(ctx, 31, 0x379E78u);
    ctx->pc = 0x379E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379E70u;
            // 0x379e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379E78u; }
        if (ctx->pc != 0x379E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379E78u; }
        if (ctx->pc != 0x379E78u) { return; }
    }
    ctx->pc = 0x379E78u;
label_379e78:
    // 0x379e78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x379e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379e7c:
    // 0x379e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x379e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379e88: 0x3e00008  jr          $ra
    ctx->pc = 0x379E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379E88u;
            // 0x379e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379E90u;
}
