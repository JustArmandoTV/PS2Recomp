#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2DE0
// Address: 0x2c2de0 - 0x2c2e40
void sub_002C2DE0_0x2c2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2DE0_0x2c2de0");
#endif

    switch (ctx->pc) {
        case 0x2c2e20u: goto label_2c2e20;
        default: break;
    }

    ctx->pc = 0x2c2de0u;

    // 0x2c2de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2df0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2DF0u;
    {
        const bool branch_taken_0x2c2df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2df0) {
            ctx->pc = 0x2C2DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DF0u;
            // 0x2c2df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2E24u;
            goto label_2c2e24;
        }
    }
    ctx->pc = 0x2C2DF8u;
    // 0x2c2df8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2dfc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c2dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c2e00: 0x244212b0  addiu       $v0, $v0, 0x12B0
    ctx->pc = 0x2c2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2c2e04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2e04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2e08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c2e0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c2e10: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2E10u;
    {
        const bool branch_taken_0x2c2e10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C2E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E10u;
            // 0x2c2e14: 0xac400da0  sw          $zero, 0xDA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e10) {
            ctx->pc = 0x2C2E20u;
            goto label_2c2e20;
        }
    }
    ctx->pc = 0x2C2E18u;
    // 0x2c2e18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2E18u;
    SET_GPR_U32(ctx, 31, 0x2C2E20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E20u; }
        if (ctx->pc != 0x2C2E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2E20u; }
        if (ctx->pc != 0x2C2E20u) { return; }
    }
    ctx->pc = 0x2C2E20u;
label_2c2e20:
    // 0x2c2e20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e24:
    // 0x2c2e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2E2Cu;
            // 0x2c2e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2E34u;
    // 0x2c2e34: 0x0  nop
    ctx->pc = 0x2c2e34u;
    // NOP
    // 0x2c2e38: 0x0  nop
    ctx->pc = 0x2c2e38u;
    // NOP
    // 0x2c2e3c: 0x0  nop
    ctx->pc = 0x2c2e3cu;
    // NOP
}
