#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA2B0
// Address: 0x1ca2b0 - 0x1ca340
void sub_001CA2B0_0x1ca2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA2B0_0x1ca2b0");
#endif

    ctx->pc = 0x1ca2b0u;

    // 0x1ca2b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ca2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ca2b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ca2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca2b8: 0x8c45a70c  lw          $a1, -0x58F4($v0)
    ctx->pc = 0x1ca2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
    // 0x1ca2bc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1ca2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ca2c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ca2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2c8: 0x90a20ab8  lbu         $v0, 0xAB8($a1)
    ctx->pc = 0x1ca2c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2744)));
    // 0x1ca2cc: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x1ca2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x1ca2d0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA2D0u;
    {
        const bool branch_taken_0x1ca2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2D0u;
            // 0x1ca2d4: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2d0) {
            ctx->pc = 0x1CA330u;
            goto label_1ca330;
        }
    }
    ctx->pc = 0x1CA2D8u;
    // 0x1ca2d8: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1ca2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ca2dc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA2DCu;
    {
        const bool branch_taken_0x1ca2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2dc) {
            ctx->pc = 0x1CA2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2DCu;
            // 0x1ca2e0: 0x2407fffe  addiu       $a3, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA334u;
            goto label_1ca334;
        }
    }
    ctx->pc = 0x1CA2E4u;
    // 0x1ca2e4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca2e8: 0x24420abc  addiu       $v0, $v0, 0xABC
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2748));
    // 0x1ca2ec: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1ca2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ca2f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ca2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2f4: 0x9044000c  lbu         $a0, 0xC($v0)
    ctx->pc = 0x1ca2f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ca2f8: 0x14880007  bne         $a0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA2F8u;
    {
        const bool branch_taken_0x1ca2f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x1CA2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2F8u;
            // 0x1ca2fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2f8) {
            ctx->pc = 0x1CA318u;
            goto label_1ca318;
        }
    }
    ctx->pc = 0x1CA300u;
    // 0x1ca300: 0x9062000d  lbu         $v0, 0xD($v1)
    ctx->pc = 0x1ca300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x1ca304: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA304u;
    {
        const bool branch_taken_0x1ca304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca304) {
            ctx->pc = 0x1CA308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA304u;
            // 0x1ca308: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA334u;
            goto label_1ca334;
        }
    }
    ctx->pc = 0x1CA30Cu;
    // 0x1ca30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA30Cu;
            // 0x1ca310: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA314u;
    // 0x1ca314: 0x0  nop
    ctx->pc = 0x1ca314u;
    // NOP
label_1ca318:
    // 0x1ca318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca31c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ca31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca320: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1ca324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA324u;
    {
        const bool branch_taken_0x1ca324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA324u;
            // 0x1ca328: 0x62380b  movn        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca324) {
            ctx->pc = 0x1CA334u;
            goto label_1ca334;
        }
    }
    ctx->pc = 0x1CA32Cu;
    // 0x1ca32c: 0x0  nop
    ctx->pc = 0x1ca32cu;
    // NOP
label_1ca330:
    // 0x1ca330: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1ca330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ca334:
    // 0x1ca334: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA334u;
            // 0x1ca338: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA33Cu;
    // 0x1ca33c: 0x0  nop
    ctx->pc = 0x1ca33cu;
    // NOP
}
