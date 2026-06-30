#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2D60
// Address: 0x2d2d60 - 0x2d2dd0
void sub_002D2D60_0x2d2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2D60_0x2d2d60");
#endif

    switch (ctx->pc) {
        case 0x2d2d84u: goto label_2d2d84;
        case 0x2d2da0u: goto label_2d2da0;
        case 0x2d2db8u: goto label_2d2db8;
        default: break;
    }

    ctx->pc = 0x2d2d60u;

    // 0x2d2d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2d74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2D74u;
    {
        const bool branch_taken_0x2d2d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D74u;
            // 0x2d2d78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d74) {
            ctx->pc = 0x2D2DB8u;
            goto label_2d2db8;
        }
    }
    ctx->pc = 0x2D2D7Cu;
    // 0x2d2d7c: 0xc0b645c  jal         func_2D9170
    ctx->pc = 0x2D2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D84u);
    ctx->pc = 0x2D9170u;
    if (runtime->hasFunction(0x2D9170u)) {
        auto targetFn = runtime->lookupFunction(0x2D9170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D84u; }
        if (ctx->pc != 0x2D2D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9170_0x2d9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2D84u; }
        if (ctx->pc != 0x2D2D84u) { return; }
    }
    ctx->pc = 0x2D2D84u;
label_2d2d84:
    // 0x2d2d84: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2d2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d2d88: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2D88u;
    {
        const bool branch_taken_0x2d2d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d88) {
            ctx->pc = 0x2D2D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D88u;
            // 0x2d2d8c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2DA4u;
            goto label_2d2da4;
        }
    }
    ctx->pc = 0x2D2D90u;
    // 0x2d2d90: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2D90u;
    {
        const bool branch_taken_0x2d2d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d90) {
            ctx->pc = 0x2D2DA0u;
            goto label_2d2da0;
        }
    }
    ctx->pc = 0x2D2D98u;
    // 0x2d2d98: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D2D98u;
    SET_GPR_U32(ctx, 31, 0x2D2DA0u);
    ctx->pc = 0x2D2D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2D98u;
            // 0x2d2d9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DA0u; }
        if (ctx->pc != 0x2D2DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DA0u; }
        if (ctx->pc != 0x2D2DA0u) { return; }
    }
    ctx->pc = 0x2D2DA0u;
label_2d2da0:
    // 0x2d2da0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d2da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d2da4:
    // 0x2d2da4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d2da4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2da8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2DA8u;
    {
        const bool branch_taken_0x2d2da8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d2da8) {
            ctx->pc = 0x2D2DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DA8u;
            // 0x2d2dac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2DBCu;
            goto label_2d2dbc;
        }
    }
    ctx->pc = 0x2D2DB0u;
    // 0x2d2db0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2DB0u;
    SET_GPR_U32(ctx, 31, 0x2D2DB8u);
    ctx->pc = 0x2D2DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DB0u;
            // 0x2d2db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DB8u; }
        if (ctx->pc != 0x2D2DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2DB8u; }
        if (ctx->pc != 0x2D2DB8u) { return; }
    }
    ctx->pc = 0x2D2DB8u;
label_2d2db8:
    // 0x2d2db8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2dbc:
    // 0x2d2dbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2DC8u;
            // 0x2d2dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2DD0u;
}
