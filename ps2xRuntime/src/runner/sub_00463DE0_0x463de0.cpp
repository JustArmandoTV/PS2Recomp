#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463DE0
// Address: 0x463de0 - 0x463e70
void sub_00463DE0_0x463de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463DE0_0x463de0");
#endif

    switch (ctx->pc) {
        case 0x463e2cu: goto label_463e2c;
        default: break;
    }

    ctx->pc = 0x463de0u;

    // 0x463de0: 0x908302f8  lbu         $v1, 0x2F8($a0)
    ctx->pc = 0x463de0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x463de4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x463DE4u;
    {
        const bool branch_taken_0x463de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463de4) {
            ctx->pc = 0x463E68u;
            goto label_463e68;
        }
    }
    ctx->pc = 0x463DECu;
    // 0x463dec: 0x8c8302f0  lw          $v1, 0x2F0($a0)
    ctx->pc = 0x463decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x463df0: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x463df0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x463df4: 0x24e70590  addiu       $a3, $a3, 0x590
    ctx->pc = 0x463df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1424));
    // 0x463df8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x463df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x463dfc: 0x24c605d0  addiu       $a2, $a2, 0x5D0
    ctx->pc = 0x463dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1488));
    // 0x463e00: 0xac6700cc  sw          $a3, 0xCC($v1)
    ctx->pc = 0x463e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 7));
    // 0x463e04: 0x8c8302f4  lw          $v1, 0x2F4($a0)
    ctx->pc = 0x463e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x463e08: 0xac6600cc  sw          $a2, 0xCC($v1)
    ctx->pc = 0x463e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 6));
    // 0x463e0c: 0x908302f8  lbu         $v1, 0x2F8($a0)
    ctx->pc = 0x463e0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x463e10: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x463e10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x463e14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x463E14u;
    {
        const bool branch_taken_0x463e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x463E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463E14u;
            // 0x463e18: 0x8cab0008  lw          $t3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463e14) {
            ctx->pc = 0x463E68u;
            goto label_463e68;
        }
    }
    ctx->pc = 0x463E1Cu;
    // 0x463e1c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x463e1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463e20: 0x248902b0  addiu       $t1, $a0, 0x2B0
    ctx->pc = 0x463e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x463e24: 0x24880298  addiu       $t0, $a0, 0x298
    ctx->pc = 0x463e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    // 0x463e28: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x463e28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_463e2c:
    // 0x463e2c: 0x8c8502f0  lw          $a1, 0x2F0($a0)
    ctx->pc = 0x463e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x463e30: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x463e30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x463e34: 0x29830002  slti        $v1, $t4, 0x2
    ctx->pc = 0x463e34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x463e38: 0xacaa0080  sw          $t2, 0x80($a1)
    ctx->pc = 0x463e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 10));
    // 0x463e3c: 0xacab0084  sw          $t3, 0x84($a1)
    ctx->pc = 0x463e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 11));
    // 0x463e40: 0xaca90088  sw          $t1, 0x88($a1)
    ctx->pc = 0x463e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 9));
    // 0x463e44: 0xaca8008c  sw          $t0, 0x8C($a1)
    ctx->pc = 0x463e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 8));
    // 0x463e48: 0xaca70090  sw          $a3, 0x90($a1)
    ctx->pc = 0x463e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 7));
    // 0x463e4c: 0x8c8602f0  lw          $a2, 0x2F0($a0)
    ctx->pc = 0x463e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x463e50: 0x94c50064  lhu         $a1, 0x64($a2)
    ctx->pc = 0x463e50u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x463e54: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x463e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x463e58: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x463e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x463e5c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x463E5Cu;
    {
        const bool branch_taken_0x463e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x463E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463E5Cu;
            // 0x463e60: 0xa4c50064  sh          $a1, 0x64($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 100), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463e5c) {
            ctx->pc = 0x463E2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_463e2c;
        }
    }
    ctx->pc = 0x463E64u;
    // 0x463e64: 0x0  nop
    ctx->pc = 0x463e64u;
    // NOP
label_463e68:
    // 0x463e68: 0x3e00008  jr          $ra
    ctx->pc = 0x463E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463E70u;
}
