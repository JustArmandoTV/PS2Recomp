#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046FB80
// Address: 0x46fb80 - 0x46fce0
void sub_0046FB80_0x46fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FB80_0x46fb80");
#endif

    ctx->pc = 0x46fb80u;

    // 0x46fb80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x46fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x46fb84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46fb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46fb88: 0x8c633e30  lw          $v1, 0x3E30($v1)
    ctx->pc = 0x46fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15920)));
    // 0x46fb8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x46fb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46fb90: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x46fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x46fb94: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x46fb94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x46fb98: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x46FB98u;
    {
        const bool branch_taken_0x46fb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FB98u;
            // 0x46fb9c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fb98) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBA0u;
    // 0x46fba0: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x46fba0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x46fba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x46fba8: 0x2508efc0  addiu       $t0, $t0, -0x1040
    ctx->pc = 0x46fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963136));
    // 0x46fbac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x46fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x46fbb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46fbb4: 0x600008  jr          $v1
    ctx->pc = 0x46FBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46FBBCu: goto label_46fbbc;
            case 0x46FBC4u: goto label_46fbc4;
            case 0x46FBCCu: goto label_46fbcc;
            case 0x46FBD4u: goto label_46fbd4;
            case 0x46FBDCu: goto label_46fbdc;
            case 0x46FBE8u: goto label_46fbe8;
            case 0x46FBF0u: goto label_46fbf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46FBBCu;
label_46fbbc:
    // 0x46fbbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x46FBBCu;
    {
        const bool branch_taken_0x46fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fbbc) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBC4u;
label_46fbc4:
    // 0x46fbc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46FBC4u;
    {
        const bool branch_taken_0x46fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FBC4u;
            // 0x46fbc8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbc4) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBCCu;
label_46fbcc:
    // 0x46fbcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x46FBCCu;
    {
        const bool branch_taken_0x46fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FBCCu;
            // 0x46fbd0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbcc) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBD4u;
label_46fbd4:
    // 0x46fbd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x46FBD4u;
    {
        const bool branch_taken_0x46fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FBD4u;
            // 0x46fbd8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbd4) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBDCu;
label_46fbdc:
    // 0x46fbdc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x46fbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46fbe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x46FBE0u;
    {
        const bool branch_taken_0x46fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FBE0u;
            // 0x46fbe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fbe0) {
            ctx->pc = 0x46FBF0u;
            goto label_46fbf0;
        }
    }
    ctx->pc = 0x46FBE8u;
label_46fbe8:
    // 0x46fbe8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x46fbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x46fbec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46fbf0:
    // 0x46fbf0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x46fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x46fbf4: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x46fbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x46fbf8: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x46fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x46fbfc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x46fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x46fc00: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x46fc00u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46fc04: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x46fc04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x46fc08: 0x312a001f  andi        $t2, $t1, 0x1F
    ctx->pc = 0x46fc08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x46fc0c: 0x55480003  bnel        $t2, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46FC0Cu;
    {
        const bool branch_taken_0x46fc0c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x46fc0c) {
            ctx->pc = 0x46FC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46FC0Cu;
            // 0x46fc10: 0x54840  sll         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FC1Cu;
            goto label_46fc1c;
        }
    }
    ctx->pc = 0x46FC14u;
    // 0x46fc14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46fc14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46fc18: 0x54840  sll         $t1, $a1, 1
    ctx->pc = 0x46fc18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_46fc1c:
    // 0x46fc1c: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x46fc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x46fc20: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x46fc20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x46fc24: 0x250806d0  addiu       $t0, $t0, 0x6D0
    ctx->pc = 0x46fc24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1744));
    // 0x46fc28: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x46fc28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x46fc2c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x46fc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x46fc30: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x46fc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x46fc34: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x46FC34u;
    {
        const bool branch_taken_0x46fc34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FC34u;
            // 0x46fc38: 0xa10a0000  sb          $t2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc34) {
            ctx->pc = 0x46FC8Cu;
            goto label_46fc8c;
        }
    }
    ctx->pc = 0x46FC3Cu;
    // 0x46fc3c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x46FC3Cu;
    {
        const bool branch_taken_0x46fc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fc3c) {
            ctx->pc = 0x46FCD8u;
            goto label_46fcd8;
        }
    }
    ctx->pc = 0x46FC44u;
    // 0x46fc44: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x46fc48: 0x90690001  lbu         $t1, 0x1($v1)
    ctx->pc = 0x46fc48u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x46fc4c: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x46fc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x46fc50: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46fc50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x46fc54: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x46fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x46fc58: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x46fc58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x46fc5c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x46fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x46fc60: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x46fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x46fc64: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x46fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x46fc68: 0x24c606f0  addiu       $a2, $a2, 0x6F0
    ctx->pc = 0x46fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1776));
    // 0x46fc6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x46fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x46fc70: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x46fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x46fc74: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x46fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x46fc78: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x46fc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x46fc7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x46fc80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x46fc84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x46FC84u;
    {
        const bool branch_taken_0x46fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FC84u;
            // 0x46fc88: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fc84) {
            ctx->pc = 0x46FCD8u;
            goto label_46fcd8;
        }
    }
    ctx->pc = 0x46FC8Cu;
label_46fc8c:
    // 0x46fc8c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x46FC8Cu;
    {
        const bool branch_taken_0x46fc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fc8c) {
            ctx->pc = 0x46FCD8u;
            goto label_46fcd8;
        }
    }
    ctx->pc = 0x46FC94u;
    // 0x46fc94: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x46fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x46fc98: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x46fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x46fc9c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x46fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x46fca0: 0x250806f0  addiu       $t0, $t0, 0x6F0
    ctx->pc = 0x46fca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1776));
    // 0x46fca4: 0x64840  sll         $t1, $a2, 1
    ctx->pc = 0x46fca4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x46fca8: 0x314400ff  andi        $a0, $t2, 0xFF
    ctx->pc = 0x46fca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x46fcac: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x46fcacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x46fcb0: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x46fcb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x46fcb4: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x46fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x46fcb8: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x46fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x46fcbc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x46fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x46fcc0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x46fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x46fcc4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x46fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x46fcc8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x46fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x46fccc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x46fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x46fcd0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x46fcd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46fcd4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x46fcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_46fcd8:
    // 0x46fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x46FCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46FCE0u;
}
