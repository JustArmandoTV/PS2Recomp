#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024B080
// Address: 0x24b080 - 0x24b500
void sub_0024B080_0x24b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B080_0x24b080");
#endif

    switch (ctx->pc) {
        case 0x24b158u: goto label_24b158;
        default: break;
    }

    ctx->pc = 0x24b080u;

    // 0x24b080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24b084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24b088: 0x90a80021  lbu         $t0, 0x21($a1)
    ctx->pc = 0x24b088u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 33)));
    // 0x24b08c: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x24b08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b090: 0x14600115  bnez        $v1, . + 4 + (0x115 << 2)
    ctx->pc = 0x24B090u;
    {
        const bool branch_taken_0x24b090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b090) {
            ctx->pc = 0x24B4E8u;
            goto label_24b4e8;
        }
    }
    ctx->pc = 0x24B098u;
    // 0x24b098: 0x90a30020  lbu         $v1, 0x20($a1)
    ctx->pc = 0x24b098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24b09c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x24b09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b0a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B0A0u;
    {
        const bool branch_taken_0x24b0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B0A0u;
            // 0x24b0a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0a0) {
            ctx->pc = 0x24B0C8u;
            goto label_24b0c8;
        }
    }
    ctx->pc = 0x24B0A8u;
    // 0x24b0a8: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x24b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24b0ac: 0xa3a4001c  sb          $a0, 0x1C($sp)
    ctx->pc = 0x24b0acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 4));
    // 0x24b0b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24b0b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b0b4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x24b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x24b0b8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x24b0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b0bc: 0x83a30014  lb          $v1, 0x14($sp)
    ctx->pc = 0x24b0bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24b0c0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x24B0C0u;
    {
        const bool branch_taken_0x24b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B0C0u;
            // 0x24b0c4: 0xa0a30022  sb          $v1, 0x22($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0c0) {
            ctx->pc = 0x24B4E8u;
            goto label_24b4e8;
        }
    }
    ctx->pc = 0x24B0C8u;
label_24b0c8:
    // 0x24b0c8: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x24b0c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x24b0cc: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x24b0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x24b0d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B0D0u;
    {
        const bool branch_taken_0x24b0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B0D0u;
            // 0x24b0d4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0d0) {
            ctx->pc = 0x24B0E0u;
            goto label_24b0e0;
        }
    }
    ctx->pc = 0x24B0D8u;
    // 0x24b0d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B0D8u;
    {
        const bool branch_taken_0x24b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0d8) {
            ctx->pc = 0x24B100u;
            goto label_24b100;
        }
    }
    ctx->pc = 0x24B0E0u;
label_24b0e0:
    // 0x24b0e0: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x24b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x24b0e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B0E4u;
    {
        const bool branch_taken_0x24b0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B0E4u;
            // 0x24b0e8: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0e4) {
            ctx->pc = 0x24B0F8u;
            goto label_24b0f8;
        }
    }
    ctx->pc = 0x24B0ECu;
    // 0x24b0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B0ECu;
    {
        const bool branch_taken_0x24b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0ec) {
            ctx->pc = 0x24B100u;
            goto label_24b100;
        }
    }
    ctx->pc = 0x24B0F4u;
    // 0x24b0f4: 0x0  nop
    ctx->pc = 0x24b0f4u;
    // NOP
label_24b0f8:
    // 0x24b0f8: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b0fc: 0x0  nop
    ctx->pc = 0x24b0fcu;
    // NOP
label_24b100:
    // 0x24b100: 0x72103  sra         $a0, $a3, 4
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 4));
    // 0x24b104: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x24b104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x24b108: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B108u;
    {
        const bool branch_taken_0x24b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B108u;
            // 0x24b10c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b108) {
            ctx->pc = 0x24B118u;
            goto label_24b118;
        }
    }
    ctx->pc = 0x24B110u;
    // 0x24b110: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B110u;
    {
        const bool branch_taken_0x24b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b110) {
            ctx->pc = 0x24B138u;
            goto label_24b138;
        }
    }
    ctx->pc = 0x24B118u;
label_24b118:
    // 0x24b118: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x24b118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x24b11c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B11Cu;
    {
        const bool branch_taken_0x24b11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B11Cu;
            // 0x24b120: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b11c) {
            ctx->pc = 0x24B130u;
            goto label_24b130;
        }
    }
    ctx->pc = 0x24B124u;
    // 0x24b124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B124u;
    {
        const bool branch_taken_0x24b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b124) {
            ctx->pc = 0x24B138u;
            goto label_24b138;
        }
    }
    ctx->pc = 0x24B12Cu;
    // 0x24b12c: 0x0  nop
    ctx->pc = 0x24b12cu;
    // NOP
label_24b130:
    // 0x24b130: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x24b130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b134: 0x0  nop
    ctx->pc = 0x24b134u;
    // NOP
label_24b138:
    // 0x24b138: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x24b138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x24b13c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x24b13cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b140: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24b140u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b144: 0x102000d4  beqz        $at, . + 4 + (0xD4 << 2)
    ctx->pc = 0x24B144u;
    {
        const bool branch_taken_0x24b144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B144u;
            // 0x24b148: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b144) {
            ctx->pc = 0x24B498u;
            goto label_24b498;
        }
    }
    ctx->pc = 0x24B14Cu;
    // 0x24b14c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24b14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b150: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b154: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b158:
    // 0x24b158: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x24b158u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b15c: 0x29210003  slti        $at, $t1, 0x3
    ctx->pc = 0x24b15cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24b160: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x24B160u;
    {
        const bool branch_taken_0x24b160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b160) {
            ctx->pc = 0x24B230u;
            goto label_24b230;
        }
    }
    ctx->pc = 0x24B168u;
    // 0x24b168: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x24b168u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x24b16c: 0x77903  sra         $t7, $a3, 4
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 7), 4));
    // 0x24b170: 0x31e90008  andi        $t1, $t7, 0x8
    ctx->pc = 0x24b170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x24b174: 0x31e70004  andi        $a3, $t7, 0x4
    ctx->pc = 0x24b174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x24b178: 0x31ef0002  andi        $t7, $t7, 0x2
    ctx->pc = 0x24b178u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x24b17c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b17cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b180: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x24b180u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x24b184: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x24b184u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x24b188: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b188u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b18c: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x24b18cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x24b190: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x24b190u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x24b194: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x24b194u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x24b198: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x24b198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x24b19c: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x24B19Cu;
    {
        const bool branch_taken_0x24b19c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B19Cu;
            // 0x24b1a0: 0x31f000ff  andi        $s0, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b19c) {
            ctx->pc = 0x24B1C8u;
            goto label_24b1c8;
        }
    }
    ctx->pc = 0x24B1A4u;
    // 0x24b1a4: 0x107840  sll         $t7, $s0, 1
    ctx->pc = 0x24b1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24b1a8: 0xef7821  addu        $t7, $a3, $t7
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x24b1ac: 0xf7840  sll         $t7, $t7, 1
    ctx->pc = 0x24b1acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b1b0: 0x1e4c004  sllv        $t8, $a0, $t7
    ctx->pc = 0x24b1b0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x24b1b4: 0x187840  sll         $t7, $t8, 1
    ctx->pc = 0x24b1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x24b1b8: 0x1eb7824  and         $t7, $t7, $t3
    ctx->pc = 0x24b1b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x24b1bc: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B1BCu;
    {
        const bool branch_taken_0x24b1bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1bc) {
            ctx->pc = 0x24B1C8u;
            goto label_24b1c8;
        }
    }
    ctx->pc = 0x24B1C4u;
    // 0x24b1c4: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x24b1c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
label_24b1c8:
    // 0x24b1c8: 0x11a4000b  beq         $t5, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B1C8u;
    {
        const bool branch_taken_0x24b1c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        ctx->pc = 0x24B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B1C8u;
            // 0x24b1cc: 0x107840  sll         $t7, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1c8) {
            ctx->pc = 0x24B1F8u;
            goto label_24b1f8;
        }
    }
    ctx->pc = 0x24B1D0u;
    // 0x24b1d0: 0x25380004  addiu       $t8, $t1, 0x4
    ctx->pc = 0x24b1d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x24b1d4: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x24b1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x24b1d8: 0xf7840  sll         $t7, $t7, 1
    ctx->pc = 0x24b1d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b1dc: 0x1e48004  sllv        $s0, $a0, $t7
    ctx->pc = 0x24b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x24b1e0: 0x107840  sll         $t7, $s0, 1
    ctx->pc = 0x24b1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24b1e4: 0x1eb7824  and         $t7, $t7, $t3
    ctx->pc = 0x24b1e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x24b1e8: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B1E8u;
    {
        const bool branch_taken_0x24b1e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1e8) {
            ctx->pc = 0x24B1F8u;
            goto label_24b1f8;
        }
    }
    ctx->pc = 0x24B1F0u;
    // 0x24b1f0: 0x1705821  addu        $t3, $t3, $s0
    ctx->pc = 0x24b1f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x24b1f4: 0x0  nop
    ctx->pc = 0x24b1f4u;
    // NOP
label_24b1f8:
    // 0x24b1f8: 0x11a300a3  beq         $t5, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x24B1F8u;
    {
        const bool branch_taken_0x24b1f8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b1f8) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B200u;
    // 0x24b200: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x24b204: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b204u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b208: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b20c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b210: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b210u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b214: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b218: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x24b218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x24b21c: 0x14e0009a  bnez        $a3, . + 4 + (0x9A << 2)
    ctx->pc = 0x24B21Cu;
    {
        const bool branch_taken_0x24b21c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b21c) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B224u;
    // 0x24b224: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x24B224u;
    {
        const bool branch_taken_0x24b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B224u;
            // 0x24b228: 0x1695821  addu        $t3, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b224) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B22Cu;
    // 0x24b22c: 0x0  nop
    ctx->pc = 0x24b22cu;
    // NOP
label_24b230:
    // 0x24b230: 0x29210007  slti        $at, $t1, 0x7
    ctx->pc = 0x24b230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x24b234: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x24B234u;
    {
        const bool branch_taken_0x24b234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b234) {
            ctx->pc = 0x24B308u;
            goto label_24b308;
        }
    }
    ctx->pc = 0x24B23Cu;
    // 0x24b23c: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x24b23cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x24b240: 0x77903  sra         $t7, $a3, 4
    ctx->pc = 0x24b240u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 7), 4));
    // 0x24b244: 0x31e90008  andi        $t1, $t7, 0x8
    ctx->pc = 0x24b244u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x24b248: 0x31e70004  andi        $a3, $t7, 0x4
    ctx->pc = 0x24b248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x24b24c: 0x31ef0002  andi        $t7, $t7, 0x2
    ctx->pc = 0x24b24cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x24b250: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b250u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b254: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x24b254u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x24b258: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x24b258u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x24b25c: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b25cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b260: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x24b260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x24b264: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x24b264u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x24b268: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x24b268u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x24b26c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x24b26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x24b270: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x24B270u;
    {
        const bool branch_taken_0x24b270 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B270u;
            // 0x24b274: 0x31f000ff  andi        $s0, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b270) {
            ctx->pc = 0x24B2A0u;
            goto label_24b2a0;
        }
    }
    ctx->pc = 0x24B278u;
    // 0x24b278: 0x107840  sll         $t7, $s0, 1
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24b27c: 0xef7821  addu        $t7, $a3, $t7
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x24b280: 0xf7840  sll         $t7, $t7, 1
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b284: 0x1e4c004  sllv        $t8, $a0, $t7
    ctx->pc = 0x24b284u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x24b288: 0x187840  sll         $t7, $t8, 1
    ctx->pc = 0x24b288u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x24b28c: 0x1ec7824  and         $t7, $t7, $t4
    ctx->pc = 0x24b28cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x24b290: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B290u;
    {
        const bool branch_taken_0x24b290 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b290) {
            ctx->pc = 0x24B2A0u;
            goto label_24b2a0;
        }
    }
    ctx->pc = 0x24B298u;
    // 0x24b298: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x24b29c: 0x0  nop
    ctx->pc = 0x24b29cu;
    // NOP
label_24b2a0:
    // 0x24b2a0: 0x11c4000b  beq         $t6, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B2A0u;
    {
        const bool branch_taken_0x24b2a0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 4));
        ctx->pc = 0x24B2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B2A0u;
            // 0x24b2a4: 0x107840  sll         $t7, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2a0) {
            ctx->pc = 0x24B2D0u;
            goto label_24b2d0;
        }
    }
    ctx->pc = 0x24B2A8u;
    // 0x24b2a8: 0x25380004  addiu       $t8, $t1, 0x4
    ctx->pc = 0x24b2a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x24b2ac: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x24b2acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x24b2b0: 0xf7840  sll         $t7, $t7, 1
    ctx->pc = 0x24b2b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b2b4: 0x1e48004  sllv        $s0, $a0, $t7
    ctx->pc = 0x24b2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 15) & 0x1F));
    // 0x24b2b8: 0x107840  sll         $t7, $s0, 1
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24b2bc: 0x1ec7824  and         $t7, $t7, $t4
    ctx->pc = 0x24b2bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x24b2c0: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B2C0u;
    {
        const bool branch_taken_0x24b2c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b2c0) {
            ctx->pc = 0x24B2D0u;
            goto label_24b2d0;
        }
    }
    ctx->pc = 0x24B2C8u;
    // 0x24b2c8: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x24b2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x24b2cc: 0x0  nop
    ctx->pc = 0x24b2ccu;
    // NOP
label_24b2d0:
    // 0x24b2d0: 0x11c3006d  beq         $t6, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x24B2D0u;
    {
        const bool branch_taken_0x24b2d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 3));
        if (branch_taken_0x24b2d0) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B2D8u;
    // 0x24b2d8: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x24b2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x24b2dc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b2e0: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b2e4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b2e8: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b2ec: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b2f0: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x24b2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x24b2f4: 0x14e00064  bnez        $a3, . + 4 + (0x64 << 2)
    ctx->pc = 0x24B2F4u;
    {
        const bool branch_taken_0x24b2f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b2f4) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B2FCu;
    // 0x24b2fc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x24B2FCu;
    {
        const bool branch_taken_0x24b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B2FCu;
            // 0x24b300: 0x1896021  addu        $t4, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2fc) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B304u;
    // 0x24b304: 0x0  nop
    ctx->pc = 0x24b304u;
    // NOP
label_24b308:
    // 0x24b308: 0x9c103  sra         $t8, $t1, 4
    ctx->pc = 0x24b308u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 4));
    // 0x24b30c: 0x3127000f  andi        $a3, $t1, 0xF
    ctx->pc = 0x24b30cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x24b310: 0x330f0008  andi        $t7, $t8, 0x8
    ctx->pc = 0x24b310u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8);
    // 0x24b314: 0x33090004  andi        $t1, $t8, 0x4
    ctx->pc = 0x24b314u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x24b318: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x24b318u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x24b31c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b31cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b320: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x24b320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x24b324: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b324u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b328: 0x31f900ff  andi        $t9, $t7, 0xFF
    ctx->pc = 0x24b328u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x24b32c: 0x313000ff  andi        $s0, $t1, 0xFF
    ctx->pc = 0x24b32cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x24b330: 0x33090002  andi        $t1, $t8, 0x2
    ctx->pc = 0x24b330u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x24b334: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b334u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b338: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b33c: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x24B33Cu;
    {
        const bool branch_taken_0x24b33c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B33Cu;
            // 0x24b340: 0x312f00ff  andi        $t7, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b33c) {
            ctx->pc = 0x24B370u;
            goto label_24b370;
        }
    }
    ctx->pc = 0x24B344u;
    // 0x24b344: 0xf3840  sll         $a3, $t7, 1
    ctx->pc = 0x24b344u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b348: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x24b348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x24b34c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b350: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b354: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b354u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b358: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x24b358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x24b35c: 0x14e0001a  bnez        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x24B35Cu;
    {
        const bool branch_taken_0x24b35c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b35c) {
            ctx->pc = 0x24B3C8u;
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B364u;
    // 0x24b364: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24B364u;
    {
        const bool branch_taken_0x24b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B364u;
            // 0x24b368: 0x1896021  addu        $t4, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b364) {
            ctx->pc = 0x24B3C8u;
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B36Cu;
    // 0x24b36c: 0x0  nop
    ctx->pc = 0x24b36cu;
    // NOP
label_24b370:
    // 0x24b370: 0x14e4000b  bne         $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B370u;
    {
        const bool branch_taken_0x24b370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x24B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B370u;
            // 0x24b374: 0x27290004  addiu       $t1, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b370) {
            ctx->pc = 0x24B3A0u;
            goto label_24b3a0;
        }
    }
    ctx->pc = 0x24B378u;
    // 0x24b378: 0xf3840  sll         $a3, $t7, 1
    ctx->pc = 0x24b378u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b37c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b380: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b384: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b384u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b388: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b388u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b38c: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x24b38cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x24b390: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x24B390u;
    {
        const bool branch_taken_0x24b390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b390) {
            ctx->pc = 0x24B3C8u;
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B398u;
    // 0x24b398: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24B398u;
    {
        const bool branch_taken_0x24b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B398u;
            // 0x24b39c: 0x1896021  addu        $t4, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b398) {
            ctx->pc = 0x24B3C8u;
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B3A0u;
label_24b3a0:
    // 0x24b3a0: 0x27290008  addiu       $t1, $t9, 0x8
    ctx->pc = 0x24b3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
    // 0x24b3a4: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x24b3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24b3a8: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b3ac: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b3acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b3b0: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b3b4: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b3b8: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x24b3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x24b3bc: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B3BCu;
    {
        const bool branch_taken_0x24b3bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b3bc) {
            ctx->pc = 0x24B3C8u;
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B3C4u;
    // 0x24b3c4: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x24b3c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_24b3c8:
    // 0x24b3c8: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x24b3c8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x24b3cc: 0x9c103  sra         $t8, $t1, 4
    ctx->pc = 0x24b3ccu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 4));
    // 0x24b3d0: 0x3127000f  andi        $a3, $t1, 0xF
    ctx->pc = 0x24b3d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x24b3d4: 0x33090004  andi        $t1, $t8, 0x4
    ctx->pc = 0x24b3d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4);
    // 0x24b3d8: 0x330f0008  andi        $t7, $t8, 0x8
    ctx->pc = 0x24b3d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8);
    // 0x24b3dc: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b3dcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b3e0: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x24b3e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x24b3e4: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b3e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b3e8: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x24b3e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x24b3ec: 0x313900ff  andi        $t9, $t1, 0xFF
    ctx->pc = 0x24b3ecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x24b3f0: 0x31f000ff  andi        $s0, $t7, 0xFF
    ctx->pc = 0x24b3f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x24b3f4: 0x33090002  andi        $t1, $t8, 0x2
    ctx->pc = 0x24b3f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x24b3f8: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x24b3f8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x24b3fc: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x24b3fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x24b400: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x24B400u;
    {
        const bool branch_taken_0x24b400 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B400u;
            // 0x24b404: 0x312f00ff  andi        $t7, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b400) {
            ctx->pc = 0x24B430u;
            goto label_24b430;
        }
    }
    ctx->pc = 0x24B408u;
    // 0x24b408: 0xf3840  sll         $a3, $t7, 1
    ctx->pc = 0x24b408u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b40c: 0x3273821  addu        $a3, $t9, $a3
    ctx->pc = 0x24b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x24b410: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b410u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b414: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b414u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b418: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b418u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b41c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x24b41cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x24b420: 0x14e00019  bnez        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x24B420u;
    {
        const bool branch_taken_0x24b420 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b420) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B428u;
    // 0x24b428: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24B428u;
    {
        const bool branch_taken_0x24b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B428u;
            // 0x24b42c: 0x1695821  addu        $t3, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b428) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B430u;
label_24b430:
    // 0x24b430: 0x14e4000b  bne         $a3, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B430u;
    {
        const bool branch_taken_0x24b430 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x24B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B430u;
            // 0x24b434: 0x26090004  addiu       $t1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b430) {
            ctx->pc = 0x24B460u;
            goto label_24b460;
        }
    }
    ctx->pc = 0x24B438u;
    // 0x24b438: 0xf3840  sll         $a3, $t7, 1
    ctx->pc = 0x24b438u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x24b43c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b440: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b444: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b448: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b44c: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x24b44cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x24b450: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x24B450u;
    {
        const bool branch_taken_0x24b450 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b450) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B458u;
    // 0x24b458: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24B458u;
    {
        const bool branch_taken_0x24b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B458u;
            // 0x24b45c: 0x1695821  addu        $t3, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b458) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B460u;
label_24b460:
    // 0x24b460: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x24b460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x24b464: 0x193840  sll         $a3, $t9, 1
    ctx->pc = 0x24b464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x24b468: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x24b468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x24b46c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x24b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x24b470: 0xe44804  sllv        $t1, $a0, $a3
    ctx->pc = 0x24b470u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x24b474: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x24b474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x24b478: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x24b478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x24b47c: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B47Cu;
    {
        const bool branch_taken_0x24b47c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b47c) {
            ctx->pc = 0x24B488u;
            goto label_24b488;
        }
    }
    ctx->pc = 0x24B484u;
    // 0x24b484: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x24b484u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_24b488:
    // 0x24b488: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x24b488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x24b48c: 0x148382a  slt         $a3, $t2, $t0
    ctx->pc = 0x24b48cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x24b490: 0x14e0ff31  bnez        $a3, . + 4 + (-0xCF << 2)
    ctx->pc = 0x24B490u;
    {
        const bool branch_taken_0x24b490 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B490u;
            // 0x24b494: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b490) {
            ctx->pc = 0x24B158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b158;
        }
    }
    ctx->pc = 0x24B498u;
label_24b498:
    // 0x24b498: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x24b498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x24b49c: 0x34645555  ori         $a0, $v1, 0x5555
    ctx->pc = 0x24b49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x24b4a0: 0x1841824  and         $v1, $t4, $a0
    ctx->pc = 0x24b4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x24b4a4: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x24b4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24b4a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B4A8u;
    {
        const bool branch_taken_0x24b4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b4a8) {
            ctx->pc = 0x24B4B8u;
            goto label_24b4b8;
        }
    }
    ctx->pc = 0x24B4B0u;
    // 0x24b4b0: 0x1641824  and         $v1, $t3, $a0
    ctx->pc = 0x24b4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x24b4b4: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x24b4b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24b4b8:
    // 0x24b4b8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x24b4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x24b4bc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x24b4bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x24b4c0: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x24b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x24b4c4: 0x4302b  sltu        $a2, $zero, $a0
    ctx->pc = 0x24b4c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24b4c8: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x24b4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x24b4cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24b4d0: 0xa3a60018  sb          $a2, 0x18($sp)
    ctx->pc = 0x24b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x24b4d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24b4d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b4d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x24b4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b4dc: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x24b4dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b4e0: 0xa0a30022  sb          $v1, 0x22($a1)
    ctx->pc = 0x24b4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b4e4: 0x0  nop
    ctx->pc = 0x24b4e4u;
    // NOP
label_24b4e8:
    // 0x24b4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x24B4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24B4ECu;
            // 0x24b4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24B4F4u;
    // 0x24b4f4: 0x0  nop
    ctx->pc = 0x24b4f4u;
    // NOP
    // 0x24b4f8: 0x0  nop
    ctx->pc = 0x24b4f8u;
    // NOP
    // 0x24b4fc: 0x0  nop
    ctx->pc = 0x24b4fcu;
    // NOP
}
