#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1C90
// Address: 0x1d1c90 - 0x1d1d00
void sub_001D1C90_0x1d1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1C90_0x1d1c90");
#endif

    switch (ctx->pc) {
        case 0x1d1cd4u: goto label_1d1cd4;
        default: break;
    }

    ctx->pc = 0x1d1c90u;

    // 0x1d1c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d1c94: 0x24850184  addiu       $a1, $a0, 0x184
    ctx->pc = 0x1d1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
    // 0x1d1c98: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x1d1c9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1ca0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d1ca4: 0xac800194  sw          $zero, 0x194($a0)
    ctx->pc = 0x1d1ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
    // 0x1d1ca8: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1d1cac: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x1d1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x1d1cb0: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x1d1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x1d1cb4: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x1d1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x1d1cb8: 0xac8001a8  sw          $zero, 0x1A8($a0)
    ctx->pc = 0x1d1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 0));
    // 0x1d1cbc: 0xac8001ac  sw          $zero, 0x1AC($a0)
    ctx->pc = 0x1d1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
    // 0x1d1cc0: 0xac8001b0  sw          $zero, 0x1B0($a0)
    ctx->pc = 0x1d1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
    // 0x1d1cc4: 0xa08001b5  sb          $zero, 0x1B5($a0)
    ctx->pc = 0x1d1cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 437), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1cc8: 0xa08002b6  sb          $zero, 0x2B6($a0)
    ctx->pc = 0x1d1cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 694), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1ccc: 0xac8002b8  sw          $zero, 0x2B8($a0)
    ctx->pc = 0x1d1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 0));
    // 0x1d1cd0: 0xa4820310  sh          $v0, 0x310($a0)
    ctx->pc = 0x1d1cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 784), (uint16_t)GPR_U32(ctx, 2));
label_1d1cd4:
    // 0x1d1cd4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d1cd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d1cdc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d1ce0: 0x0  nop
    ctx->pc = 0x1d1ce0u;
    // NOP
    // 0x1d1ce4: 0x0  nop
    ctx->pc = 0x1d1ce4u;
    // NOP
    // 0x1d1ce8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D1CE8u;
    {
        const bool branch_taken_0x1d1ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ce8) {
            ctx->pc = 0x1D1CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d1cd4;
        }
    }
    ctx->pc = 0x1D1CF0u;
    // 0x1d1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CF0u;
            // 0x1d1cf4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1CF8u;
    // 0x1d1cf8: 0x0  nop
    ctx->pc = 0x1d1cf8u;
    // NOP
    // 0x1d1cfc: 0x0  nop
    ctx->pc = 0x1d1cfcu;
    // NOP
}
