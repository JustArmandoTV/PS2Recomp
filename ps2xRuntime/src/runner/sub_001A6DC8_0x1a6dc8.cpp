#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6DC8
// Address: 0x1a6dc8 - 0x1a6e28
void sub_001A6DC8_0x1a6dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6DC8_0x1a6dc8");
#endif

    switch (ctx->pc) {
        case 0x1a6de4u: goto label_1a6de4;
        default: break;
    }

    ctx->pc = 0x1a6dc8u;

    // 0x1a6dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dd0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a6dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a6dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6ddc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1A6DDCu;
    SET_GPR_U32(ctx, 31, 0x1A6DE4u);
    ctx->pc = 0x1A6DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6DDCu;
            // 0x1a6de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DE4u; }
        if (ctx->pc != 0x1A6DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6DE4u; }
        if (ctx->pc != 0x1A6DE4u) { return; }
    }
    ctx->pc = 0x1A6DE4u;
label_1a6de4:
    // 0x1a6de4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6de8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a6dec: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1a6decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6df0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a6df4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a6df8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a6df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a6dfc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a6e00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a6e04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a6e08: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a6e0c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a6e10: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a6e14: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x1a6e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6e18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6E20u;
            // 0x1a6e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6E28u;
}
