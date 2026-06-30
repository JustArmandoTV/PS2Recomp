#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9470
// Address: 0x2c9470 - 0x2c94d0
void sub_002C9470_0x2c9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9470_0x2c9470");
#endif

    switch (ctx->pc) {
        case 0x2c94b0u: goto label_2c94b0;
        default: break;
    }

    ctx->pc = 0x2c9470u;

    // 0x2c9470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c947c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c947cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9480: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9480u;
    {
        const bool branch_taken_0x2c9480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9480) {
            ctx->pc = 0x2C9484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9480u;
            // 0x2c9484: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C94B4u;
            goto label_2c94b4;
        }
    }
    ctx->pc = 0x2C9488u;
    // 0x2c9488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c948c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c9490: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x2c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
    // 0x2c9494: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9494u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9498: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c9498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c949c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c94a0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C94A0u;
    {
        const bool branch_taken_0x2c94a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C94A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94A0u;
            // 0x2c94a4: 0xac400d80  sw          $zero, 0xD80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94a0) {
            ctx->pc = 0x2C94B0u;
            goto label_2c94b0;
        }
    }
    ctx->pc = 0x2C94A8u;
    // 0x2c94a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C94A8u;
    SET_GPR_U32(ctx, 31, 0x2C94B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94B0u; }
        if (ctx->pc != 0x2C94B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94B0u; }
        if (ctx->pc != 0x2C94B0u) { return; }
    }
    ctx->pc = 0x2C94B0u;
label_2c94b0:
    // 0x2c94b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c94b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c94b4:
    // 0x2c94b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c94b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c94b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c94b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c94bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C94BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C94C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94BCu;
            // 0x2c94c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C94C4u;
    // 0x2c94c4: 0x0  nop
    ctx->pc = 0x2c94c4u;
    // NOP
    // 0x2c94c8: 0x0  nop
    ctx->pc = 0x2c94c8u;
    // NOP
    // 0x2c94cc: 0x0  nop
    ctx->pc = 0x2c94ccu;
    // NOP
}
