#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567FA0
// Address: 0x567fa0 - 0x568000
void sub_00567FA0_0x567fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567FA0_0x567fa0");
#endif

    switch (ctx->pc) {
        case 0x567fe0u: goto label_567fe0;
        default: break;
    }

    ctx->pc = 0x567fa0u;

    // 0x567fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x567fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x567fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x567fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x567fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x567fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x567facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567fb0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x567FB0u;
    {
        const bool branch_taken_0x567fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x567fb0) {
            ctx->pc = 0x567FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567FB0u;
            // 0x567fb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567FE4u;
            goto label_567fe4;
        }
    }
    ctx->pc = 0x567FB8u;
    // 0x567fb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567fbc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x567fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x567fc0: 0x244280f8  addiu       $v0, $v0, -0x7F08
    ctx->pc = 0x567fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934776));
    // 0x567fc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x567fc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x567fc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x567fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x567fcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x567fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x567fd0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x567FD0u;
    {
        const bool branch_taken_0x567fd0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x567FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567FD0u;
            // 0x567fd4: 0xac403e98  sw          $zero, 0x3E98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567fd0) {
            ctx->pc = 0x567FE0u;
            goto label_567fe0;
        }
    }
    ctx->pc = 0x567FD8u;
    // 0x567fd8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x567FD8u;
    SET_GPR_U32(ctx, 31, 0x567FE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567FE0u; }
        if (ctx->pc != 0x567FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567FE0u; }
        if (ctx->pc != 0x567FE0u) { return; }
    }
    ctx->pc = 0x567FE0u;
label_567fe0:
    // 0x567fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x567fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_567fe4:
    // 0x567fe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x567fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x567fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x567fec: 0x3e00008  jr          $ra
    ctx->pc = 0x567FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567FECu;
            // 0x567ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567FF4u;
    // 0x567ff4: 0x0  nop
    ctx->pc = 0x567ff4u;
    // NOP
    // 0x567ff8: 0x0  nop
    ctx->pc = 0x567ff8u;
    // NOP
    // 0x567ffc: 0x0  nop
    ctx->pc = 0x567ffcu;
    // NOP
}
