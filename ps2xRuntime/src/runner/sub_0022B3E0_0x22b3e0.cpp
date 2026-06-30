#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B3E0
// Address: 0x22b3e0 - 0x22b460
void sub_0022B3E0_0x22b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B3E0_0x22b3e0");
#endif

    switch (ctx->pc) {
        case 0x22b3f0u: goto label_22b3f0;
        case 0x22b434u: goto label_22b434;
        default: break;
    }

    ctx->pc = 0x22b3e0u;

    // 0x22b3e0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x22b3e4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22B3E4u;
    {
        const bool branch_taken_0x22b3e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22B3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3E4u;
            // 0x22b3e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3e4) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B3ECu;
    // 0x22b3ec: 0x8c860064  lw          $a2, 0x64($a0)
    ctx->pc = 0x22b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_22b3f0:
    // 0x22b3f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b3f4: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B3F4u;
    {
        const bool branch_taken_0x22b3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22b3f4) {
            ctx->pc = 0x22B3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3F4u;
            // 0x22b3f8: 0x8c830068  lw          $v1, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B404u;
            goto label_22b404;
        }
    }
    ctx->pc = 0x22B3FCu;
    // 0x22b3fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3FCu;
    {
        const bool branch_taken_0x22b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3FCu;
            // 0x22b400: 0x8c830068  lw          $v1, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3fc) {
            ctx->pc = 0x22B420u;
            goto label_22b420;
        }
    }
    ctx->pc = 0x22B404u;
label_22b404:
    // 0x22b404: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b408: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22b408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b40c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B40Cu;
    {
        const bool branch_taken_0x22b40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B40Cu;
            // 0x22b410: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b40c) {
            ctx->pc = 0x22B3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b3f0;
        }
    }
    ctx->pc = 0x22B414u;
    // 0x22b414: 0x0  nop
    ctx->pc = 0x22b414u;
    // NOP
label_22b418:
    // 0x22b418: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b41c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22b420:
    // 0x22b420: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22b424: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x22b424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b428: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22B428u;
    {
        const bool branch_taken_0x22b428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B428u;
            // 0x22b42c: 0xac830068  sw          $v1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b428) {
            ctx->pc = 0x22B458u;
            goto label_22b458;
        }
    }
    ctx->pc = 0x22B430u;
    // 0x22b430: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_22b434:
    // 0x22b434: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x22b434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x22b438: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b43c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x22b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22b440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22b444: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22b444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22b448: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x22b44c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22b44cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b450: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B450u;
    {
        const bool branch_taken_0x22b450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B450u;
            // 0x22b454: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b450) {
            ctx->pc = 0x22B434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b434;
        }
    }
    ctx->pc = 0x22B458u;
label_22b458:
    // 0x22b458: 0x3e00008  jr          $ra
    ctx->pc = 0x22B458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B460u;
}
