#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497DF0
// Address: 0x497df0 - 0x497e60
void sub_00497DF0_0x497df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497DF0_0x497df0");
#endif

    switch (ctx->pc) {
        case 0x497e14u: goto label_497e14;
        case 0x497e28u: goto label_497e28;
        case 0x497e40u: goto label_497e40;
        default: break;
    }

    ctx->pc = 0x497df0u;

    // 0x497df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x497df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x497df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x497df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497e04: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x497E04u;
    {
        const bool branch_taken_0x497e04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x497E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497E04u;
            // 0x497e08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497e04) {
            ctx->pc = 0x497E40u;
            goto label_497e40;
        }
    }
    ctx->pc = 0x497E0Cu;
    // 0x497e0c: 0xc125f98  jal         func_497E60
    ctx->pc = 0x497E0Cu;
    SET_GPR_U32(ctx, 31, 0x497E14u);
    ctx->pc = 0x497E60u;
    if (runtime->hasFunction(0x497E60u)) {
        auto targetFn = runtime->lookupFunction(0x497E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E14u; }
        if (ctx->pc != 0x497E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E60_0x497e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E14u; }
        if (ctx->pc != 0x497E14u) { return; }
    }
    ctx->pc = 0x497E14u;
label_497e14:
    // 0x497e14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x497e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x497e18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497E18u;
    {
        const bool branch_taken_0x497e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497e18) {
            ctx->pc = 0x497E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497E18u;
            // 0x497e1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497E2Cu;
            goto label_497e2c;
        }
    }
    ctx->pc = 0x497E20u;
    // 0x497e20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497E20u;
    SET_GPR_U32(ctx, 31, 0x497E28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E28u; }
        if (ctx->pc != 0x497E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E28u; }
        if (ctx->pc != 0x497E28u) { return; }
    }
    ctx->pc = 0x497E28u;
label_497e28:
    // 0x497e28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x497e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_497e2c:
    // 0x497e2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x497e2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x497e30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497E30u;
    {
        const bool branch_taken_0x497e30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x497e30) {
            ctx->pc = 0x497E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497E30u;
            // 0x497e34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497E44u;
            goto label_497e44;
        }
    }
    ctx->pc = 0x497E38u;
    // 0x497e38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497E38u;
    SET_GPR_U32(ctx, 31, 0x497E40u);
    ctx->pc = 0x497E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497E38u;
            // 0x497e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E40u; }
        if (ctx->pc != 0x497E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497E40u; }
        if (ctx->pc != 0x497E40u) { return; }
    }
    ctx->pc = 0x497E40u;
label_497e40:
    // 0x497e40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497e44:
    // 0x497e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497e50: 0x3e00008  jr          $ra
    ctx->pc = 0x497E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497E50u;
            // 0x497e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497E58u;
    // 0x497e58: 0x0  nop
    ctx->pc = 0x497e58u;
    // NOP
    // 0x497e5c: 0x0  nop
    ctx->pc = 0x497e5cu;
    // NOP
}
