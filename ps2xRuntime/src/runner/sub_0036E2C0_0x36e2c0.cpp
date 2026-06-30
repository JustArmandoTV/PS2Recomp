#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036E2C0
// Address: 0x36e2c0 - 0x36e320
void sub_0036E2C0_0x36e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E2C0_0x36e2c0");
#endif

    switch (ctx->pc) {
        case 0x36e300u: goto label_36e300;
        default: break;
    }

    ctx->pc = 0x36e2c0u;

    // 0x36e2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e2d0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x36E2D0u;
    {
        const bool branch_taken_0x36e2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e2d0) {
            ctx->pc = 0x36E2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E2D0u;
            // 0x36e2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E304u;
            goto label_36e304;
        }
    }
    ctx->pc = 0x36E2D8u;
    // 0x36e2d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36e2dc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x36e2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x36e2e0: 0x24426ba8  addiu       $v0, $v0, 0x6BA8
    ctx->pc = 0x36e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27560));
    // 0x36e2e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36e2e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x36e2e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36e2ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36e2f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E2F0u;
    {
        const bool branch_taken_0x36e2f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x36E2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E2F0u;
            // 0x36e2f4: 0xac406048  sw          $zero, 0x6048($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e2f0) {
            ctx->pc = 0x36E300u;
            goto label_36e300;
        }
    }
    ctx->pc = 0x36E2F8u;
    // 0x36e2f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36E2F8u;
    SET_GPR_U32(ctx, 31, 0x36E300u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E300u; }
        if (ctx->pc != 0x36E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E300u; }
        if (ctx->pc != 0x36E300u) { return; }
    }
    ctx->pc = 0x36E300u;
label_36e300:
    // 0x36e300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36e304:
    // 0x36e304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e30c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E30Cu;
            // 0x36e310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E314u;
    // 0x36e314: 0x0  nop
    ctx->pc = 0x36e314u;
    // NOP
    // 0x36e318: 0x0  nop
    ctx->pc = 0x36e318u;
    // NOP
    // 0x36e31c: 0x0  nop
    ctx->pc = 0x36e31cu;
    // NOP
}
