#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3DD0
// Address: 0x1b3dd0 - 0x1b3e30
void sub_001B3DD0_0x1b3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3DD0_0x1b3dd0");
#endif

    switch (ctx->pc) {
        case 0x1b3e04u: goto label_1b3e04;
        default: break;
    }

    ctx->pc = 0x1b3dd0u;

    // 0x1b3dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3dd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3de0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3de4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b3de8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3DE8u;
    {
        const bool branch_taken_0x1b3de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b3de8) {
            ctx->pc = 0x1B3DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DE8u;
            // 0x1b3dec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3E10u;
            goto label_1b3e10;
        }
    }
    ctx->pc = 0x1B3DF0u;
    // 0x1b3df0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3df4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dfc: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1B3DFCu;
    SET_GPR_U32(ctx, 31, 0x1B3E04u);
    ctx->pc = 0x1B3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DFCu;
            // 0x1b3e00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E04u; }
        if (ctx->pc != 0x1B3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3E04u; }
        if (ctx->pc != 0x1B3E04u) { return; }
    }
    ctx->pc = 0x1B3E04u;
label_1b3e04:
    // 0x1b3e04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3E04u;
    {
        const bool branch_taken_0x1b3e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e04) {
            ctx->pc = 0x1B3E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E04u;
            // 0x1b3e08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3E20u;
            goto label_1b3e20;
        }
    }
    ctx->pc = 0x1B3E0Cu;
    // 0x1b3e0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3e10:
    // 0x1b3e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e14: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1b3e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1b3e18: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1b3e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3e20:
    // 0x1b3e20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E24u;
            // 0x1b3e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3E2Cu;
    // 0x1b3e2c: 0x0  nop
    ctx->pc = 0x1b3e2cu;
    // NOP
}
