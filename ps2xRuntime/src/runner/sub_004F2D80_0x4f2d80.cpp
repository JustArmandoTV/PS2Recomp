#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2D80
// Address: 0x4f2d80 - 0x4f2df0
void sub_004F2D80_0x4f2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2D80_0x4f2d80");
#endif

    switch (ctx->pc) {
        case 0x4f2dc0u: goto label_4f2dc0;
        case 0x4f2dd8u: goto label_4f2dd8;
        default: break;
    }

    ctx->pc = 0x4f2d80u;

    // 0x4f2d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f2d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f2d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f2d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f2d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f2d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2d94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F2D94u;
    {
        const bool branch_taken_0x4f2d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D94u;
            // 0x4f2d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2d94) {
            ctx->pc = 0x4F2DD8u;
            goto label_4f2dd8;
        }
    }
    ctx->pc = 0x4F2D9Cu;
    // 0x4f2d9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F2D9Cu;
    {
        const bool branch_taken_0x4f2d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2d9c) {
            ctx->pc = 0x4F2DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2D9Cu;
            // 0x4f2da0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2DC4u;
            goto label_4f2dc4;
        }
    }
    ctx->pc = 0x4F2DA4u;
    // 0x4f2da4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F2DA4u;
    {
        const bool branch_taken_0x4f2da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2da4) {
            ctx->pc = 0x4F2DC0u;
            goto label_4f2dc0;
        }
    }
    ctx->pc = 0x4F2DACu;
    // 0x4f2dac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f2db0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F2DB0u;
    {
        const bool branch_taken_0x4f2db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2db0) {
            ctx->pc = 0x4F2DC0u;
            goto label_4f2dc0;
        }
    }
    ctx->pc = 0x4F2DB8u;
    // 0x4f2db8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F2DB8u;
    SET_GPR_U32(ctx, 31, 0x4F2DC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2DC0u; }
        if (ctx->pc != 0x4F2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2DC0u; }
        if (ctx->pc != 0x4F2DC0u) { return; }
    }
    ctx->pc = 0x4F2DC0u;
label_4f2dc0:
    // 0x4f2dc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f2dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f2dc4:
    // 0x4f2dc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f2dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f2dc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F2DC8u;
    {
        const bool branch_taken_0x4f2dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f2dc8) {
            ctx->pc = 0x4F2DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2DC8u;
            // 0x4f2dcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F2DDCu;
            goto label_4f2ddc;
        }
    }
    ctx->pc = 0x4F2DD0u;
    // 0x4f2dd0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F2DD0u;
    SET_GPR_U32(ctx, 31, 0x4F2DD8u);
    ctx->pc = 0x4F2DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2DD0u;
            // 0x4f2dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2DD8u; }
        if (ctx->pc != 0x4F2DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2DD8u; }
        if (ctx->pc != 0x4F2DD8u) { return; }
    }
    ctx->pc = 0x4F2DD8u;
label_4f2dd8:
    // 0x4f2dd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f2dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f2ddc:
    // 0x4f2ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f2ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2de8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2DE8u;
            // 0x4f2dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2DF0u;
}
