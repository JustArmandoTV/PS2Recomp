#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2D70
// Address: 0x4d2d70 - 0x4d2dd0
void sub_004D2D70_0x4d2d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2D70_0x4d2d70");
#endif

    switch (ctx->pc) {
        case 0x4d2db0u: goto label_4d2db0;
        default: break;
    }

    ctx->pc = 0x4d2d70u;

    // 0x4d2d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d2d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d2d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d2d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d2d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d2d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d2d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2d80: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D2D80u;
    {
        const bool branch_taken_0x4d2d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d2d80) {
            ctx->pc = 0x4D2D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D80u;
            // 0x4d2d84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2DB4u;
            goto label_4d2db4;
        }
    }
    ctx->pc = 0x4D2D88u;
    // 0x4d2d88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2d8c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4d2d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4d2d90: 0x24422360  addiu       $v0, $v0, 0x2360
    ctx->pc = 0x4d2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9056));
    // 0x4d2d94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4d2d94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4d2d98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d2d9c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d2da0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D2DA0u;
    {
        const bool branch_taken_0x4d2da0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4D2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2DA0u;
            // 0x4d2da4: 0xac40aa38  sw          $zero, -0x55C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2da0) {
            ctx->pc = 0x4D2DB0u;
            goto label_4d2db0;
        }
    }
    ctx->pc = 0x4D2DA8u;
    // 0x4d2da8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D2DA8u;
    SET_GPR_U32(ctx, 31, 0x4D2DB0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2DB0u; }
        if (ctx->pc != 0x4D2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2DB0u; }
        if (ctx->pc != 0x4D2DB0u) { return; }
    }
    ctx->pc = 0x4D2DB0u;
label_4d2db0:
    // 0x4d2db0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d2db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2db4:
    // 0x4d2db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d2db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2DBCu;
            // 0x4d2dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2DC4u;
    // 0x4d2dc4: 0x0  nop
    ctx->pc = 0x4d2dc4u;
    // NOP
    // 0x4d2dc8: 0x0  nop
    ctx->pc = 0x4d2dc8u;
    // NOP
    // 0x4d2dcc: 0x0  nop
    ctx->pc = 0x4d2dccu;
    // NOP
}
