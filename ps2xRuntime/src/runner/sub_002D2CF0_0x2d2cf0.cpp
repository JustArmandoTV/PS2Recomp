#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2CF0
// Address: 0x2d2cf0 - 0x2d2d60
void sub_002D2CF0_0x2d2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2CF0_0x2d2cf0");
#endif

    switch (ctx->pc) {
        case 0x2d2d14u: goto label_2d2d14;
        case 0x2d2d28u: goto label_2d2d28;
        case 0x2d2d40u: goto label_2d2d40;
        default: break;
    }

    ctx->pc = 0x2d2cf0u;

    // 0x2d2cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d04: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2D04u;
    {
        const bool branch_taken_0x2d2d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D04u;
            // 0x2d2d08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d04) {
            ctx->pc = 0x2D2D40u;
            goto label_2d2d40;
        }
    }
    ctx->pc = 0x2D2D0Cu;
    // 0x2d2d0c: 0xc0b6458  jal         func_2D9160
    ctx->pc = 0x2D2D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D14u);
    ctx->pc = 0x2D9160u;
    if (runtime->hasFunction(0x2D9160u)) {
        auto targetFn = runtime->lookupFunction(0x2D9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D14u; }
        if (ctx->pc != 0x2D2D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9160_0x2d9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D14u; }
        if (ctx->pc != 0x2D2D14u) { return; }
    }
    ctx->pc = 0x2D2D14u;
label_2d2d14:
    // 0x2d2d14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d2d18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2D18u;
    {
        const bool branch_taken_0x2d2d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d18) {
            ctx->pc = 0x2D2D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D18u;
            // 0x2d2d1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D2Cu;
            goto label_2d2d2c;
        }
    }
    ctx->pc = 0x2D2D20u;
    // 0x2d2d20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2D20u;
    SET_GPR_U32(ctx, 31, 0x2D2D28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D28u; }
        if (ctx->pc != 0x2D2D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D28u; }
        if (ctx->pc != 0x2D2D28u) { return; }
    }
    ctx->pc = 0x2D2D28u;
label_2d2d28:
    // 0x2d2d28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d2d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d2d2c:
    // 0x2d2d2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d2d2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2d30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2D30u;
    {
        const bool branch_taken_0x2d2d30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d2d30) {
            ctx->pc = 0x2D2D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D30u;
            // 0x2d2d34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2D44u;
            goto label_2d2d44;
        }
    }
    ctx->pc = 0x2D2D38u;
    // 0x2d2d38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2D38u;
    SET_GPR_U32(ctx, 31, 0x2D2D40u);
    ctx->pc = 0x2D2D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D38u;
            // 0x2d2d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D40u; }
        if (ctx->pc != 0x2D2D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D40u; }
        if (ctx->pc != 0x2D2D40u) { return; }
    }
    ctx->pc = 0x2D2D40u;
label_2d2d40:
    // 0x2d2d40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2d44:
    // 0x2d2d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D50u;
            // 0x2d2d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2D58u;
    // 0x2d2d58: 0x0  nop
    ctx->pc = 0x2d2d58u;
    // NOP
    // 0x2d2d5c: 0x0  nop
    ctx->pc = 0x2d2d5cu;
    // NOP
}
