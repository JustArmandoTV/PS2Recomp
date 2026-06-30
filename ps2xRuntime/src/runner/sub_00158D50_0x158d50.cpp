#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158D50
// Address: 0x158d50 - 0x158e80
void sub_00158D50_0x158d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158D50_0x158d50");
#endif

    switch (ctx->pc) {
        case 0x158d5cu: goto label_158d5c;
        default: break;
    }

    ctx->pc = 0x158d50u;

    // 0x158d50: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x158d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x158d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158D54u;
    {
        const bool branch_taken_0x158d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D54u;
            // 0x158d58: 0x8c63cc30  lw          $v1, -0x33D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d54) {
            ctx->pc = 0x158D60u;
            goto label_158d60;
        }
    }
    ctx->pc = 0x158D5Cu;
label_158d5c:
    // 0x158d5c: 0x0  nop
    ctx->pc = 0x158d5cu;
    // NOP
label_158d60:
    // 0x158d60: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158d64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x158D64u;
    {
        const bool branch_taken_0x158d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d64) {
            ctx->pc = 0x158D78u;
            goto label_158d78;
        }
    }
    ctx->pc = 0x158D6Cu;
    // 0x158d6c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x158d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x158d70: 0x54a4fffa  bnel        $a1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x158D70u;
    {
        const bool branch_taken_0x158d70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x158d70) {
            ctx->pc = 0x158D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D70u;
            // 0x158d74: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_158d5c;
        }
    }
    ctx->pc = 0x158D78u;
label_158d78:
    // 0x158d78: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x158d7c: 0x14a4003b  bne         $a1, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x158D7Cu;
    {
        const bool branch_taken_0x158d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x158d7c) {
            ctx->pc = 0x158E6Cu;
            goto label_158e6c;
        }
    }
    ctx->pc = 0x158D84u;
    // 0x158d84: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x158d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x158d88: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x158d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x158d8c: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x158D8Cu;
    {
        const bool branch_taken_0x158d8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x158d8c) {
            ctx->pc = 0x158D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D8Cu;
            // 0x158d90: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158DECu;
            goto label_158dec;
        }
    }
    ctx->pc = 0x158D94u;
    // 0x158d94: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x158d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158d98: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x158D98u;
    {
        const bool branch_taken_0x158d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d98) {
            ctx->pc = 0x158DE8u;
            goto label_158de8;
        }
    }
    ctx->pc = 0x158DA0u;
    // 0x158da0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x158da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158da4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x158da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158da8: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x158da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158dac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x158dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158db0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x158db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158db4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x158db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x158db8: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x158db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x158dbc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x158dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x158dc0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x158dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158dc4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x158dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x158dc8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x158dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x158dcc: 0x8f8483a8  lw          $a0, -0x7C58($gp)
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x158dd0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x158dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x158dd4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x158dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x158dd8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x158dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x158ddc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x158ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x158de0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x158de0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x158de4: 0xaf8783a8  sw          $a3, -0x7C58($gp)
    ctx->pc = 0x158de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 7));
label_158de8:
    // 0x158de8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x158de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_158dec:
    // 0x158dec: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x158decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x158df0: 0x2484cc10  addiu       $a0, $a0, -0x33F0
    ctx->pc = 0x158df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954000));
    // 0x158df4: 0x10c40013  beq         $a2, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x158DF4u;
    {
        const bool branch_taken_0x158df4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x158df4) {
            ctx->pc = 0x158E44u;
            goto label_158e44;
        }
    }
    ctx->pc = 0x158DFCu;
    // 0x158dfc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x158e00: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x158E00u;
    {
        const bool branch_taken_0x158e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e00) {
            ctx->pc = 0x158E44u;
            goto label_158e44;
        }
    }
    ctx->pc = 0x158E08u;
    // 0x158e08: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x158e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158e0c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x158e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x158e10: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x158e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x158e14: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x158e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x158e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158e1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x158e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158e20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x158e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x158e24: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x158e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x158e28: 0x8f8483a8  lw          $a0, -0x7C58($gp)
    ctx->pc = 0x158e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x158e2c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x158e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x158e30: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x158e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x158e34: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x158e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x158e38: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x158e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x158e3c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x158e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x158e40: 0xaf8683a8  sw          $a2, -0x7C58($gp)
    ctx->pc = 0x158e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 6));
label_158e44:
    // 0x158e44: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x158e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x158e48: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x158e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158e4c: 0x8c84cc38  lw          $a0, -0x33C8($a0)
    ctx->pc = 0x158e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954040)));
    // 0x158e50: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x158e50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x158e54: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x158E54u;
    {
        const bool branch_taken_0x158e54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158e54) {
            ctx->pc = 0x158E6Cu;
            goto label_158e6c;
        }
    }
    ctx->pc = 0x158E5Cu;
    // 0x158e5c: 0xaf8383ac  sw          $v1, -0x7C54($gp)
    ctx->pc = 0x158e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935468), GPR_U32(ctx, 3));
    // 0x158e60: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x158e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x158e64: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x158e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x158e68: 0xac83cc38  sw          $v1, -0x33C8($a0)
    ctx->pc = 0x158e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954040), GPR_U32(ctx, 3));
label_158e6c:
    // 0x158e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x158E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x158E74u;
    // 0x158e74: 0x0  nop
    ctx->pc = 0x158e74u;
    // NOP
    // 0x158e78: 0x0  nop
    ctx->pc = 0x158e78u;
    // NOP
    // 0x158e7c: 0x0  nop
    ctx->pc = 0x158e7cu;
    // NOP
}
