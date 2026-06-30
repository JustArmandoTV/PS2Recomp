#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D36A0
// Address: 0x1d36a0 - 0x1d3890
void sub_001D36A0_0x1d36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D36A0_0x1d36a0");
#endif

    switch (ctx->pc) {
        case 0x1d3720u: goto label_1d3720;
        case 0x1d3800u: goto label_1d3800;
        case 0x1d3840u: goto label_1d3840;
        default: break;
    }

    ctx->pc = 0x1d36a0u;

    // 0x1d36a0: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D36A0u;
    {
        const bool branch_taken_0x1d36a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d36a0) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D36A8u;
    // 0x1d36a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d36ac: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d36b0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d36b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d36b4: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d36b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d36b8: 0x14c30073  bne         $a2, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D36B8u;
    {
        const bool branch_taken_0x1d36b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d36b8) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D36C0u;
    // 0x1d36c0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d36c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d36c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1d36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d36cc: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x1d36ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d36d0: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1d36d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d36d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d36d8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1d36d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36dc: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1d36dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d36e0: 0x18c00051  blez        $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D36E0u;
    {
        const bool branch_taken_0x1d36e0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D36E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36E0u;
            // 0x1d36e4: 0x24690010  addiu       $t1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36e0) {
            ctx->pc = 0x1D3828u;
            goto label_1d3828;
        }
    }
    ctx->pc = 0x1D36E8u;
    // 0x1d36e8: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1d36e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d36ec: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D36ECu;
    {
        const bool branch_taken_0x1d36ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D36F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36ECu;
            // 0x1d36f0: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36ec) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D36F4u;
    // 0x1d36f4: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D36F4u;
    {
        const bool branch_taken_0x1d36f4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D36F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36F4u;
            // 0x1d36f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36f4) {
            ctx->pc = 0x1D3714u;
            goto label_1d3714;
        }
    }
    ctx->pc = 0x1D36FCu;
    // 0x1d36fc: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d36fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d3700: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d3700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d3704: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1d3704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3708: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3708u;
    {
        const bool branch_taken_0x1d3708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3708) {
            ctx->pc = 0x1D3714u;
            goto label_1d3714;
        }
    }
    ctx->pc = 0x1D3710u;
    // 0x1d3710: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3710u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3714:
    // 0x1d3714: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D3714u;
    {
        const bool branch_taken_0x1d3714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3714) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D371Cu;
    // 0x1d371c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d371cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3720:
    // 0x1d3720: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x1d3720u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3724: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1d3724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1d3728: 0x145602a  slt         $t4, $t2, $a1
    ctx->pc = 0x1d3728u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d372c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d372cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3730: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3734: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3734u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3738: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3738u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d373c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d373cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3740: 0x8d2d0004  lw          $t5, 0x4($t1)
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d3744: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3744u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3748: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d374c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d374cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3750: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3750u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3754: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3754u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3758: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x1d3758u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d375c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d375cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3760: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3764: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3764u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3768: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3768u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d376c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d376cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3770: 0x8d2d000c  lw          $t5, 0xC($t1)
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1d3774: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3774u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3778: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d377c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d377cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3780: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3784: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3784u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3788: 0x8d2d0010  lw          $t5, 0x10($t1)
    ctx->pc = 0x1d3788u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1d378c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d378cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3790: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3794: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3794u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3798: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d379c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d379cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d37a0: 0x8d2d0014  lw          $t5, 0x14($t1)
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1d37a4: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d37a8: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d37a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d37ac: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d37acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d37b0: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d37b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d37b4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d37b4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d37b8: 0x8d2d0018  lw          $t5, 0x18($t1)
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1d37bc: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d37bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d37c0: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d37c4: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d37c8: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d37cc: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d37d0: 0x8d2d001c  lw          $t5, 0x1C($t1)
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1d37d4: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d37d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d37d8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1d37dc: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d37e0: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d37e4: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d37e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d37e8: 0x1580ffcd  bnez        $t4, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D37E8u;
    {
        const bool branch_taken_0x1d37e8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37E8u;
            // 0x1d37ec: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e8) {
            ctx->pc = 0x1D3720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3720;
        }
    }
    ctx->pc = 0x1D37F0u;
label_1d37f0:
    // 0x1d37f0: 0x146082a  slt         $at, $t2, $a2
    ctx->pc = 0x1d37f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d37f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D37F4u;
    {
        const bool branch_taken_0x1d37f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d37f4) {
            ctx->pc = 0x1D3828u;
            goto label_1d3828;
        }
    }
    ctx->pc = 0x1D37FCu;
    // 0x1d37fc: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3800:
    // 0x1d3800: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1d3800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3804: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3808: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x1d3808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d380c: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x1d380cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x1d3810: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d3814: 0xe56021  addu        $t4, $a3, $a1
    ctx->pc = 0x1d3814u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d3818: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1d3818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d381c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1d381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d3820: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3820u;
    {
        const bool branch_taken_0x1d3820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3820u;
            // 0x1d3824: 0xad850000  sw          $a1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3820) {
            ctx->pc = 0x1D3800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3800;
        }
    }
    ctx->pc = 0x1D3828u;
label_1d3828:
    // 0x1d3828: 0x19000017  blez        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3828u;
    {
        const bool branch_taken_0x1d3828 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1D382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3828u;
            // 0x1d382c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3828) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D3830u;
    // 0x1d3830: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d3834: 0x3c05544d  lui         $a1, 0x544D
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21581 << 16));
    // 0x1d3838: 0x3466454e  ori         $a2, $v1, 0x454E
    ctx->pc = 0x1d3838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d383c: 0x34a9534e  ori         $t1, $a1, 0x534E
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21326);
label_1d3840:
    // 0x1d3840: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3844: 0x14690008  bne         $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3844u;
    {
        const bool branch_taken_0x1d3844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1d3844) {
            ctx->pc = 0x1D3868u;
            goto label_1d3868;
        }
    }
    ctx->pc = 0x1D384Cu;
    // 0x1d384c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D384Cu;
    {
        const bool branch_taken_0x1d384c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d384c) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D3854u;
    // 0x1d3854: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x1d3854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1d3858: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d385c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d3860: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3860u;
    {
        const bool branch_taken_0x1d3860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3860) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D3868u;
label_1d3868:
    // 0x1d3868: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3868u;
    {
        const bool branch_taken_0x1d3868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d3868) {
            ctx->pc = 0x1D3888u;
            goto label_1d3888;
        }
    }
    ctx->pc = 0x1D3870u;
    // 0x1d3870: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1d3874: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3878: 0x148182a  slt         $v1, $t2, $t0
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d387c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1d387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d3880: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D3880u;
    {
        const bool branch_taken_0x1d3880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3880u;
            // 0x1d3884: 0x24ab0008  addiu       $t3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3880) {
            ctx->pc = 0x1D3840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3840;
        }
    }
    ctx->pc = 0x1D3888u;
label_1d3888:
    // 0x1d3888: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3890u;
}
