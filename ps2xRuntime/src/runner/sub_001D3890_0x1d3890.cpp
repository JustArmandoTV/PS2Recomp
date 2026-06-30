#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3890
// Address: 0x1d3890 - 0x1d3a80
void sub_001D3890_0x1d3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3890_0x1d3890");
#endif

    switch (ctx->pc) {
        case 0x1d3910u: goto label_1d3910;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d3a30u: goto label_1d3a30;
        default: break;
    }

    ctx->pc = 0x1d3890u;

    // 0x1d3890: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1D3890u;
    {
        const bool branch_taken_0x1d3890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3890) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D3898u;
    // 0x1d3898: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d3898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d389c: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d38a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d38a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d38a4: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d38a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d38a8: 0x14c30073  bne         $a2, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D38A8u;
    {
        const bool branch_taken_0x1d38a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d38a8) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D38B0u;
    // 0x1d38b0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d38b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d38b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38b8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1d38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d38bc: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d38c0: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d38c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d38c8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38cc: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d38d0: 0x18c00051  blez        $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D38D0u;
    {
        const bool branch_taken_0x1d38d0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D38D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38D0u;
            // 0x1d38d4: 0x24690010  addiu       $t1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38d0) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D38D8u;
    // 0x1d38d8: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1d38d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d38dc: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D38DCu;
    {
        const bool branch_taken_0x1d38dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D38E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38DCu;
            // 0x1d38e0: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38dc) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D38E4u;
    // 0x1d38e4: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D38E4u;
    {
        const bool branch_taken_0x1d38e4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1D38E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38E4u;
            // 0x1d38e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38e4) {
            ctx->pc = 0x1D3904u;
            goto label_1d3904;
        }
    }
    ctx->pc = 0x1D38ECu;
    // 0x1d38ec: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d38f0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d38f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d38f4: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x1d38f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d38f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D38F8u;
    {
        const bool branch_taken_0x1d38f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d38f8) {
            ctx->pc = 0x1D3904u;
            goto label_1d3904;
        }
    }
    ctx->pc = 0x1D3900u;
    // 0x1d3900: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3900u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3904:
    // 0x1d3904: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D3904u;
    {
        const bool branch_taken_0x1d3904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3904) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D390Cu;
    // 0x1d390c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3910:
    // 0x1d3910: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3914: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1d3914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1d3918: 0x145602a  slt         $t4, $t2, $a1
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d391c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d391cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3920: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3924: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3924u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3928: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d392c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d392cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3930: 0x8d2d0004  lw          $t5, 0x4($t1)
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d3934: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3934u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3938: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d393c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3940: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3940u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3944: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3944u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3948: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x1d3948u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d394c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d394cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3950: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3954: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3954u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3958: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3958u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d395c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d395cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3960: 0x8d2d000c  lw          $t5, 0xC($t1)
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1d3964: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3964u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3968: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3968u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d396c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d396cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3970: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d3974: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d3974u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3978: 0x8d2d0010  lw          $t5, 0x10($t1)
    ctx->pc = 0x1d3978u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1d397c: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d397cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3980: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d3984: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d3984u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d3988: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d398c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d398cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d3990: 0x8d2d0014  lw          $t5, 0x14($t1)
    ctx->pc = 0x1d3990u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1d3994: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d3998: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d3998u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d399c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d39a0: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d39a4: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d39a8: 0x8d2d0018  lw          $t5, 0x18($t1)
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1d39ac: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d39b0: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d39b4: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d39b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d39b8: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d39b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d39bc: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d39c0: 0x8d2d001c  lw          $t5, 0x1C($t1)
    ctx->pc = 0x1d39c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1d39c4: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x1d39c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x1d39c8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1d39c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1d39cc: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x1d39ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1d39d0: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1d39d4: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x1d39d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1d39d8: 0x1580ffcd  bnez        $t4, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D39D8u;
    {
        const bool branch_taken_0x1d39d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D39DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39D8u;
            // 0x1d39dc: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d8) {
            ctx->pc = 0x1D3910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3910;
        }
    }
    ctx->pc = 0x1D39E0u;
label_1d39e0:
    // 0x1d39e0: 0x146082a  slt         $at, $t2, $a2
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d39e4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D39E4u;
    {
        const bool branch_taken_0x1d39e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d39e4) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D39ECu;
    // 0x1d39ec: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x1d39ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d39f0:
    // 0x1d39f0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d39f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d39f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d39f8: 0x146182a  slt         $v1, $t2, $a2
    ctx->pc = 0x1d39f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d39fc: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x1d39fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x1d3a00: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d3a04: 0xe56021  addu        $t4, $a3, $a1
    ctx->pc = 0x1d3a04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d3a08: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d3a0c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1d3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1d3a10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3A10u;
    {
        const bool branch_taken_0x1d3a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A10u;
            // 0x1d3a14: 0xad850000  sw          $a1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a10) {
            ctx->pc = 0x1D39F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d39f0;
        }
    }
    ctx->pc = 0x1D3A18u;
label_1d3a18:
    // 0x1d3a18: 0x19000017  blez        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3A18u;
    {
        const bool branch_taken_0x1d3a18 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1D3A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A18u;
            // 0x1d3a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a18) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D3A20u;
    // 0x1d3a20: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d3a24: 0x3c054d4d  lui         $a1, 0x4D4D
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19789 << 16));
    // 0x1d3a28: 0x3466454e  ori         $a2, $v1, 0x454E
    ctx->pc = 0x1d3a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d3a2c: 0x34a9534e  ori         $t1, $a1, 0x534E
    ctx->pc = 0x1d3a2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21326);
label_1d3a30:
    // 0x1d3a30: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3a34: 0x14690008  bne         $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3A34u;
    {
        const bool branch_taken_0x1d3a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1d3a34) {
            ctx->pc = 0x1D3A58u;
            goto label_1d3a58;
        }
    }
    ctx->pc = 0x1D3A3Cu;
    // 0x1d3a3c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3A3Cu;
    {
        const bool branch_taken_0x1d3a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a3c) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D3A44u;
    // 0x1d3a44: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1d3a48: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3a4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d3a50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D3A58u;
label_1d3a58:
    // 0x1d3a58: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3A58u;
    {
        const bool branch_taken_0x1d3a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d3a58) {
            ctx->pc = 0x1D3A78u;
            goto label_1d3a78;
        }
    }
    ctx->pc = 0x1D3A60u;
    // 0x1d3a60: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1d3a64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3a68: 0x148182a  slt         $v1, $t2, $t0
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d3a6c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1d3a70: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D3A70u;
    {
        const bool branch_taken_0x1d3a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A70u;
            // 0x1d3a74: 0x24ab0008  addiu       $t3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a70) {
            ctx->pc = 0x1D3A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3a30;
        }
    }
    ctx->pc = 0x1D3A78u;
label_1d3a78:
    // 0x1d3a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3A80u;
}
