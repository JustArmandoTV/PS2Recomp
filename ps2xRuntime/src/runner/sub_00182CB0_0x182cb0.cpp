#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182CB0
// Address: 0x182cb0 - 0x182d28
void sub_00182CB0_0x182cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182CB0_0x182cb0");
#endif

    switch (ctx->pc) {
        case 0x182ce0u: goto label_182ce0;
        default: break;
    }

    ctx->pc = 0x182cb0u;

    // 0x182cb0: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x182cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cb8: 0x8d05ced0  lw          $a1, -0x3130($t0)
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954704)));
    // 0x182cbc: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x182CBCu;
    {
        const bool branch_taken_0x182cbc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x182CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CBCu;
            // 0x182cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cbc) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182CC4u;
    // 0x182cc4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x182cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x182cc8: 0x2444cf30  addiu       $a0, $v0, -0x30D0
    ctx->pc = 0x182cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954800));
    // 0x182ccc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x182cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182cd0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x182CD0u;
    {
        const bool branch_taken_0x182cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CD0u;
            // 0x182cd4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cd0) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182CD8u;
    // 0x182cd8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x182cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cdc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x182cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182ce0:
    // 0x182ce0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x182ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x182ce4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x182ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x182ce8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x182ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x182cec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182CECu;
    {
        const bool branch_taken_0x182cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CECu;
            // 0x182cf0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cec) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182CF4u;
    // 0x182cf4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x182cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x182cf8: 0x0  nop
    ctx->pc = 0x182cf8u;
    // NOP
    // 0x182cfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x182CFCu;
    {
        const bool branch_taken_0x182cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CFCu;
            // 0x182d00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cfc) {
            ctx->pc = 0x182CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182ce0;
        }
    }
    ctx->pc = 0x182D04u;
label_182d04:
    // 0x182d04: 0x8d03ced0  lw          $v1, -0x3130($t0)
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954704)));
    // 0x182d08: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182D08u;
    {
        const bool branch_taken_0x182d08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x182D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D08u;
            // 0x182d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d08) {
            ctx->pc = 0x182D1Cu;
            goto label_182d1c;
        }
    }
    ctx->pc = 0x182D10u;
    // 0x182d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x182d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d18: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x182d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_182d1c:
    // 0x182d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x182D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182D24u;
    // 0x182d24: 0x0  nop
    ctx->pc = 0x182d24u;
    // NOP
}
