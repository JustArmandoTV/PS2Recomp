#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8DD0
// Address: 0x2b8dd0 - 0x2b8e30
void sub_002B8DD0_0x2b8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8DD0_0x2b8dd0");
#endif

    switch (ctx->pc) {
        case 0x2b8e10u: goto label_2b8e10;
        default: break;
    }

    ctx->pc = 0x2b8dd0u;

    // 0x2b8dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8de0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8DE0u;
    {
        const bool branch_taken_0x2b8de0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8de0) {
            ctx->pc = 0x2B8DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DE0u;
            // 0x2b8de4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E14u;
            goto label_2b8e14;
        }
    }
    ctx->pc = 0x2B8DE8u;
    // 0x2b8de8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8dec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2b8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2b8df0: 0x24422788  addiu       $v0, $v0, 0x2788
    ctx->pc = 0x2b8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10120));
    // 0x2b8df4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2b8df4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2b8df8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b8dfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b8e00: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8E00u;
    {
        const bool branch_taken_0x2b8e00 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2B8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E00u;
            // 0x2b8e04: 0xac400cc8  sw          $zero, 0xCC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e00) {
            ctx->pc = 0x2B8E10u;
            goto label_2b8e10;
        }
    }
    ctx->pc = 0x2B8E08u;
    // 0x2b8e08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8E08u;
    SET_GPR_U32(ctx, 31, 0x2B8E10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E10u; }
        if (ctx->pc != 0x2B8E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E10u; }
        if (ctx->pc != 0x2B8E10u) { return; }
    }
    ctx->pc = 0x2B8E10u;
label_2b8e10:
    // 0x2b8e10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b8e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8e14:
    // 0x2b8e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8E1Cu;
            // 0x2b8e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8E24u;
    // 0x2b8e24: 0x0  nop
    ctx->pc = 0x2b8e24u;
    // NOP
    // 0x2b8e28: 0x0  nop
    ctx->pc = 0x2b8e28u;
    // NOP
    // 0x2b8e2c: 0x0  nop
    ctx->pc = 0x2b8e2cu;
    // NOP
}
