#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3460
// Address: 0x1d3460 - 0x1d36a0
void sub_001D3460_0x1d3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3460_0x1d3460");
#endif

    switch (ctx->pc) {
        case 0x1d34fcu: goto label_1d34fc;
        case 0x1d35e0u: goto label_1d35e0;
        case 0x1d3628u: goto label_1d3628;
        default: break;
    }

    ctx->pc = 0x1d3460u;

    // 0x1d3460: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3460u;
    {
        const bool branch_taken_0x1d3460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3460) {
            ctx->pc = 0x1D3470u;
            goto label_1d3470;
        }
    }
    ctx->pc = 0x1D3468u;
    // 0x1d3468: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1D3468u;
    {
        const bool branch_taken_0x1d3468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3468) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D3470u;
label_1d3470:
    // 0x1d3470: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3470u;
    {
        const bool branch_taken_0x1d3470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3470) {
            ctx->pc = 0x1D347Cu;
            goto label_1d347c;
        }
    }
    ctx->pc = 0x1D3478u;
    // 0x1d3478: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d3478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1d347c:
    // 0x1d347c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D347Cu;
    {
        const bool branch_taken_0x1d347c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d347c) {
            ctx->pc = 0x1D3480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D347Cu;
            // 0x1d3480: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D348Cu;
            goto label_1d348c;
        }
    }
    ctx->pc = 0x1D3484u;
    // 0x1d3484: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d3484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d3488: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1d3488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d348c:
    // 0x1d348c: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d3490: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3494: 0x14e30080  bne         $a3, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1D3494u;
    {
        const bool branch_taken_0x1d3494 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d3494) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D349Cu;
    // 0x1d349c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x1d349cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d34a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d34a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34a4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1d34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d34a8: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d34ac: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1d34acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d34b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d34b4: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x1d34b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34b8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1d34b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d34bc: 0x18e00052  blez        $a3, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D34BCu;
    {
        const bool branch_taken_0x1d34bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D34C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34BCu;
            // 0x1d34c0: 0x246a0010  addiu       $t2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34bc) {
            ctx->pc = 0x1D3608u;
            goto label_1d3608;
        }
    }
    ctx->pc = 0x1D34C4u;
    // 0x1d34c4: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1d34c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d34c8: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D34C8u;
    {
        const bool branch_taken_0x1d34c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34C8u;
            // 0x1d34cc: 0x24e6fff8  addiu       $a2, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34c8) {
            ctx->pc = 0x1D35D0u;
            goto label_1d35d0;
        }
    }
    ctx->pc = 0x1D34D0u;
    // 0x1d34d0: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D34D0u;
    {
        const bool branch_taken_0x1d34d0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1D34D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34D0u;
            // 0x1d34d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34d0) {
            ctx->pc = 0x1D34F0u;
            goto label_1d34f0;
        }
    }
    ctx->pc = 0x1D34D8u;
    // 0x1d34d8: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d34dc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d34e0: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x1d34e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d34e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D34E4u;
    {
        const bool branch_taken_0x1d34e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34e4) {
            ctx->pc = 0x1D34F0u;
            goto label_1d34f0;
        }
    }
    ctx->pc = 0x1D34ECu;
    // 0x1d34ec: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d34ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d34f0:
    // 0x1d34f0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D34F0u;
    {
        const bool branch_taken_0x1d34f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d34f0) {
            ctx->pc = 0x1D35D0u;
            goto label_1d35d0;
        }
    }
    ctx->pc = 0x1D34F8u;
    // 0x1d34f8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d34fc:
    // 0x1d34fc: 0x8d4e0000  lw          $t6, 0x0($t2)
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3500: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1d3500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1d3504: 0x166682a  slt         $t5, $t3, $a2
    ctx->pc = 0x1d3504u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d3508: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3508u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d350c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d350cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3510: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3514: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3514u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3518: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3518u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d351c: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x1d351cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1d3520: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3524: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3528: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3528u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d352c: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d352cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3530: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3530u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3534: 0x8d4e0008  lw          $t6, 0x8($t2)
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1d3538: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3538u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d353c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d353cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3540: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3540u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3544: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3544u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3548: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3548u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d354c: 0x8d4e000c  lw          $t6, 0xC($t2)
    ctx->pc = 0x1d354cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1d3550: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3550u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3554: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3558: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d355c: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d355cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3560: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3560u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3564: 0x8d4e0010  lw          $t6, 0x10($t2)
    ctx->pc = 0x1d3564u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1d3568: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3568u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d356c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3570: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3574: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d3574u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3578: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3578u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d357c: 0x8d4e0014  lw          $t6, 0x14($t2)
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1d3580: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3580u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d3584: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d3584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d3588: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d358c: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d3590: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d3590u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d3594: 0x8d4e0018  lw          $t6, 0x18($t2)
    ctx->pc = 0x1d3594u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1d3598: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d3598u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d359c: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d359cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d35a0: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d35a4: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d35a8: 0xadee0000  sw          $t6, 0x0($t7)
    ctx->pc = 0x1d35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
    // 0x1d35ac: 0x8d4e001c  lw          $t6, 0x1C($t2)
    ctx->pc = 0x1d35acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1d35b0: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1d35b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1d35b4: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1d35b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1d35b8: 0x10e7821  addu        $t7, $t0, $t6
    ctx->pc = 0x1d35b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1d35bc: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d35c0: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x1d35c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x1d35c4: 0x15a0ffcd  bnez        $t5, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D35C4u;
    {
        const bool branch_taken_0x1d35c4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35C4u;
            // 0x1d35c8: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35c4) {
            ctx->pc = 0x1D34FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d34fc;
        }
    }
    ctx->pc = 0x1D35CCu;
    // 0x1d35cc: 0x0  nop
    ctx->pc = 0x1d35ccu;
    // NOP
label_1d35d0:
    // 0x1d35d0: 0x167082a  slt         $at, $t3, $a3
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d35d4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D35D4u;
    {
        const bool branch_taken_0x1d35d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d35d4) {
            ctx->pc = 0x1D3608u;
            goto label_1d3608;
        }
    }
    ctx->pc = 0x1D35DCu;
    // 0x1d35dc: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x1d35dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d35e0:
    // 0x1d35e0: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1d35e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d35e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1d35e8: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x1d35e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d35ec: 0xce3024  and         $a2, $a2, $t6
    ctx->pc = 0x1d35ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 14));
    // 0x1d35f0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1d35f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d35f4: 0x1066821  addu        $t5, $t0, $a2
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d35f8: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x1d35f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d35fc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1d35fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d3600: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3600u;
    {
        const bool branch_taken_0x1d3600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3600u;
            // 0x1d3604: 0xada60000  sw          $a2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3600) {
            ctx->pc = 0x1D35E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d35e0;
        }
    }
    ctx->pc = 0x1D3608u;
label_1d3608:
    // 0x1d3608: 0x19200023  blez        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3608u;
    {
        const bool branch_taken_0x1d3608 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1D360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3608u;
            // 0x1d360c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3608) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D3610u;
    // 0x1d3610: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d3614: 0x3c06434d  lui         $a2, 0x434D
    ctx->pc = 0x1d3614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17229 << 16));
    // 0x1d3618: 0x3467454e  ori         $a3, $v1, 0x454E
    ctx->pc = 0x1d3618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d361c: 0x34ca534e  ori         $t2, $a2, 0x534E
    ctx->pc = 0x1d361cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21326);
    // 0x1d3620: 0x3c034143  lui         $v1, 0x4143
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16707 << 16));
    // 0x1d3624: 0x346b534e  ori         $t3, $v1, 0x534E
    ctx->pc = 0x1d3624u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
label_1d3628:
    // 0x1d3628: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d362c: 0x146b0008  bne         $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D362Cu;
    {
        const bool branch_taken_0x1d362c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x1d362c) {
            ctx->pc = 0x1D3650u;
            goto label_1d3650;
        }
    }
    ctx->pc = 0x1D3634u;
    // 0x1d3634: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3634u;
    {
        const bool branch_taken_0x1d3634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3634) {
            ctx->pc = 0x1D3680u;
            goto label_1d3680;
        }
    }
    ctx->pc = 0x1D363Cu;
    // 0x1d363c: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x1d363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1d3640: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d3644: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D3644u;
    {
        const bool branch_taken_0x1d3644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3644u;
            // 0x1d3648: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3644) {
            ctx->pc = 0x1D3680u;
            goto label_1d3680;
        }
    }
    ctx->pc = 0x1D364Cu;
    // 0x1d364c: 0x0  nop
    ctx->pc = 0x1d364cu;
    // NOP
label_1d3650:
    // 0x1d3650: 0x146a0008  bne         $v1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3650u;
    {
        const bool branch_taken_0x1d3650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1d3650) {
            ctx->pc = 0x1D3674u;
            goto label_1d3674;
        }
    }
    ctx->pc = 0x1D3658u;
    // 0x1d3658: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3658u;
    {
        const bool branch_taken_0x1d3658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3658) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D3660u;
    // 0x1d3660: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1d3664: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1d3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d3668: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d3668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d366c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D366Cu;
    {
        const bool branch_taken_0x1d366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d366c) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D3674u;
label_1d3674:
    // 0x1d3674: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3674u;
    {
        const bool branch_taken_0x1d3674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d3674) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D367Cu;
    // 0x1d367c: 0x0  nop
    ctx->pc = 0x1d367cu;
    // NOP
label_1d3680:
    // 0x1d3680: 0x8d860004  lw          $a2, 0x4($t4)
    ctx->pc = 0x1d3680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1d3684: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1d3688: 0x1a9182a  slt         $v1, $t5, $t1
    ctx->pc = 0x1d3688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d368c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d3690: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D3690u;
    {
        const bool branch_taken_0x1d3690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3690u;
            // 0x1d3694: 0x24cc0008  addiu       $t4, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3690) {
            ctx->pc = 0x1D3628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3628;
        }
    }
    ctx->pc = 0x1D3698u;
label_1d3698:
    // 0x1d3698: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D36A0u;
}
