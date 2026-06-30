#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF680
// Address: 0x1ff680 - 0x1ffb10
void sub_001FF680_0x1ff680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF680_0x1ff680");
#endif

    switch (ctx->pc) {
        case 0x1ff794u: goto label_1ff794;
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff8f4u: goto label_1ff8f4;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffaf8u: goto label_1ffaf8;
        default: break;
    }

    ctx->pc = 0x1ff680u;

    // 0x1ff680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff684: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ff684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ff688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff68c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ff68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ff690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff694: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1ff694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x1ff698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ff698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ff69c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ff69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1ff6a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ff6a4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff6a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ff6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ff6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6b0: 0x260209a0  addiu       $v0, $s0, 0x9A0
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2464));
    // 0x1ff6b4: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x1ff6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x1ff6b8: 0xa48d0006  sh          $t5, 0x6($a0)
    ctx->pc = 0x1ff6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 13));
    // 0x1ff6bc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1ff6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1ff6c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ff6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ff6c4: 0x260c0ea0  addiu       $t4, $s0, 0xEA0
    ctx->pc = 0x1ff6c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x1ff6c8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1ff6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1ff6cc: 0x4c082b  sltu        $at, $v0, $t4
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1ff6d0: 0xa08009b0  sb          $zero, 0x9B0($a0)
    ctx->pc = 0x1ff6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff6d4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1FF6D4u;
    {
        const bool branch_taken_0x1ff6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF6D4u;
            // 0x1ff6d8: 0xa08009b1  sb          $zero, 0x9B1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2481), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6d4) {
            ctx->pc = 0x1FF810u;
            goto label_1ff810;
        }
    }
    ctx->pc = 0x1FF6DCu;
    // 0x1ff6dc: 0x260b09b4  addiu       $t3, $s0, 0x9B4
    ctx->pc = 0x1ff6dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 2484));
    // 0x1ff6e0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1ff6e4: 0x18b5023  subu        $t2, $t4, $t3
    ctx->pc = 0x1ff6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1ff6e8: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1ff6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x1ff6ec: 0x25490013  addiu       $t1, $t2, 0x13
    ctx->pc = 0x1ff6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 19));
    // 0x1ff6f0: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1ff6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ff6f4: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x1ff6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ff6f8: 0x0  nop
    ctx->pc = 0x1ff6f8u;
    // NOP
    // 0x1ff6fc: 0x1810  mfhi        $v1
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ff700: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ff700u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1ff704: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1ff704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff708: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x1ff708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ff70c: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1ff70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ff710: 0x14200033  bnez        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FF710u;
    {
        const bool branch_taken_0x1ff710 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF710u;
            // 0x1ff714: 0x26050e00  addiu       $a1, $s0, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff710) {
            ctx->pc = 0x1FF7E0u;
            goto label_1ff7e0;
        }
    }
    ctx->pc = 0x1FF718u;
    // 0x1ff718: 0x18b082b  sltu        $at, $t4, $t3
    ctx->pc = 0x1ff718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1ff71c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff720: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF720u;
    {
        const bool branch_taken_0x1ff720 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF720u;
            // 0x1ff724: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff720) {
            ctx->pc = 0x1FF754u;
            goto label_1ff754;
        }
    }
    ctx->pc = 0x1FF728u;
    // 0x1ff728: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ff72c: 0x1441824  and         $v1, $t2, $a0
    ctx->pc = 0x1ff72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1ff730: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF730u;
    {
        const bool branch_taken_0x1ff730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF730u;
            // 0x1ff734: 0x31ab00ff  andi        $t3, $t5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff730) {
            ctx->pc = 0x1FF748u;
            goto label_1ff748;
        }
    }
    ctx->pc = 0x1FF738u;
    // 0x1ff738: 0x1241824  and         $v1, $t1, $a0
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1ff73c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF73Cu;
    {
        const bool branch_taken_0x1ff73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff73c) {
            ctx->pc = 0x1FF748u;
            goto label_1ff748;
        }
    }
    ctx->pc = 0x1FF744u;
    // 0x1ff744: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ff744u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff748:
    // 0x1ff748: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF748u;
    {
        const bool branch_taken_0x1ff748 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff748) {
            ctx->pc = 0x1FF754u;
            goto label_1ff754;
        }
    }
    ctx->pc = 0x1FF750u;
    // 0x1ff750: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x1ff750u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1ff754:
    // 0x1ff754: 0x11c0000c  beqz        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF754u;
    {
        const bool branch_taken_0x1ff754 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff754) {
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF75Cu;
    // 0x1ff75c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ff760: 0x1032024  and         $a0, $t0, $v1
    ctx->pc = 0x1ff760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1ff764: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF764u;
    {
        const bool branch_taken_0x1ff764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF764u;
            // 0x1ff768: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff764) {
            ctx->pc = 0x1FF77Cu;
            goto label_1ff77c;
        }
    }
    ctx->pc = 0x1FF76Cu;
    // 0x1ff76c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1ff76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1ff770: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF770u;
    {
        const bool branch_taken_0x1ff770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff770) {
            ctx->pc = 0x1FF77Cu;
            goto label_1ff77c;
        }
    }
    ctx->pc = 0x1FF778u;
    // 0x1ff778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ff778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff77c:
    // 0x1ff77c: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF77Cu;
    {
        const bool branch_taken_0x1ff77c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff77c) {
            ctx->pc = 0x1FF788u;
            goto label_1ff788;
        }
    }
    ctx->pc = 0x1FF784u;
    // 0x1ff784: 0x640f0001  daddiu      $t7, $zero, 0x1
    ctx->pc = 0x1ff784u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1ff788:
    // 0x1ff788: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FF788u;
    {
        const bool branch_taken_0x1ff788 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff788) {
            ctx->pc = 0x1FF7E0u;
            goto label_1ff7e0;
        }
    }
    ctx->pc = 0x1FF790u;
    // 0x1ff790: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x1ff790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
label_1ff794:
    // 0x1ff794: 0xa0400011  sb          $zero, 0x11($v0)
    ctx->pc = 0x1ff794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff798: 0xa0400024  sb          $zero, 0x24($v0)
    ctx->pc = 0x1ff798u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff79c: 0xa0400025  sb          $zero, 0x25($v0)
    ctx->pc = 0x1ff79cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7a0: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x1ff7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7a4: 0xa0400039  sb          $zero, 0x39($v0)
    ctx->pc = 0x1ff7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7a8: 0xa040004c  sb          $zero, 0x4C($v0)
    ctx->pc = 0x1ff7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7ac: 0xa040004d  sb          $zero, 0x4D($v0)
    ctx->pc = 0x1ff7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7b0: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x1ff7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7b4: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x1ff7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7b8: 0xa0400074  sb          $zero, 0x74($v0)
    ctx->pc = 0x1ff7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7bc: 0xa0400075  sb          $zero, 0x75($v0)
    ctx->pc = 0x1ff7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7c0: 0xa0400088  sb          $zero, 0x88($v0)
    ctx->pc = 0x1ff7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7c4: 0xa0400089  sb          $zero, 0x89($v0)
    ctx->pc = 0x1ff7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7c8: 0xa040009c  sb          $zero, 0x9C($v0)
    ctx->pc = 0x1ff7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7cc: 0xa040009d  sb          $zero, 0x9D($v0)
    ctx->pc = 0x1ff7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7d0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1ff7d4: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1ff7d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ff7d8: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FF7D8u;
    {
        const bool branch_taken_0x1ff7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7d8) {
            ctx->pc = 0x1FF7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7D8u;
            // 0x1ff7dc: 0xa0400010  sb          $zero, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff794;
        }
    }
    ctx->pc = 0x1FF7E0u;
label_1ff7e0:
    // 0x1ff7e0: 0x26040ea0  addiu       $a0, $s0, 0xEA0
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x1ff7e4: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x1ff7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff7e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF7E8u;
    {
        const bool branch_taken_0x1ff7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff7e8) {
            ctx->pc = 0x1FF810u;
            goto label_1ff810;
        }
    }
    ctx->pc = 0x1FF7F0u;
label_1ff7f0:
    // 0x1ff7f0: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x1ff7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7f4: 0xa0400011  sb          $zero, 0x11($v0)
    ctx->pc = 0x1ff7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff7f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1ff7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1ff7fc: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x1ff7fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff800: 0x0  nop
    ctx->pc = 0x1ff800u;
    // NOP
    // 0x1ff804: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF804u;
    {
        const bool branch_taken_0x1ff804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff804) {
            ctx->pc = 0x1FF7F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff7f0;
        }
    }
    ctx->pc = 0x1FF80Cu;
    // 0x1ff80c: 0x0  nop
    ctx->pc = 0x1ff80cu;
    // NOP
label_1ff810:
    // 0x1ff810: 0xa20016dc  sb          $zero, 0x16DC($s0)
    ctx->pc = 0x1ff810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5852), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff814: 0xa20016dd  sb          $zero, 0x16DD($s0)
    ctx->pc = 0x1ff814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5853), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff818: 0x260216b0  addiu       $v0, $s0, 0x16B0
    ctx->pc = 0x1ff818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5808));
    // 0x1ff81c: 0xae0016c8  sw          $zero, 0x16C8($s0)
    ctx->pc = 0x1ff81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5832), GPR_U32(ctx, 0));
    // 0x1ff820: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1ff824: 0xae0016cc  sw          $zero, 0x16CC($s0)
    ctx->pc = 0x1ff824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5836), GPR_U32(ctx, 0));
    // 0x1ff828: 0x260c19f0  addiu       $t4, $s0, 0x19F0
    ctx->pc = 0x1ff828u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 6640));
    // 0x1ff82c: 0xae0016d0  sw          $zero, 0x16D0($s0)
    ctx->pc = 0x1ff82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 0));
    // 0x1ff830: 0x4c082b  sltu        $at, $v0, $t4
    ctx->pc = 0x1ff830u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1ff834: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x1FF834u;
    {
        const bool branch_taken_0x1ff834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF834u;
            // 0x1ff838: 0xae0016d4  sw          $zero, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff834) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF83Cu;
    // 0x1ff83c: 0x260b16e4  addiu       $t3, $s0, 0x16E4
    ctx->pc = 0x1ff83cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 5860));
    // 0x1ff840: 0x3c034ec4  lui         $v1, 0x4EC4
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20164 << 16));
    // 0x1ff844: 0x18b5023  subu        $t2, $t4, $t3
    ctx->pc = 0x1ff844u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1ff848: 0x3463ec4f  ori         $v1, $v1, 0xEC4F
    ctx->pc = 0x1ff848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60495);
    // 0x1ff84c: 0x25490033  addiu       $t1, $t2, 0x33
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 51));
    // 0x1ff850: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1ff850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ff854: 0x927c2  srl         $a0, $t1, 31
    ctx->pc = 0x1ff854u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ff858: 0x0  nop
    ctx->pc = 0x1ff858u;
    // NOP
    // 0x1ff85c: 0x1810  mfhi        $v1
    ctx->pc = 0x1ff85cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ff860: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1ff860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1ff864: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1ff864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff868: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x1ff868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ff86c: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1ff86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ff870: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FF870u;
    {
        const bool branch_taken_0x1ff870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF870u;
            // 0x1ff874: 0x26051850  addiu       $a1, $s0, 0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff870) {
            ctx->pc = 0x1FF9C0u;
            goto label_1ff9c0;
        }
    }
    ctx->pc = 0x1FF878u;
    // 0x1ff878: 0x18b082b  sltu        $at, $t4, $t3
    ctx->pc = 0x1ff878u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1ff87c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1ff87cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff880: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF880u;
    {
        const bool branch_taken_0x1ff880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF880u;
            // 0x1ff884: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff880) {
            ctx->pc = 0x1FF8B4u;
            goto label_1ff8b4;
        }
    }
    ctx->pc = 0x1FF888u;
    // 0x1ff888: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ff88c: 0x1441824  and         $v1, $t2, $a0
    ctx->pc = 0x1ff88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1ff890: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF890u;
    {
        const bool branch_taken_0x1ff890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF890u;
            // 0x1ff894: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff890) {
            ctx->pc = 0x1FF8A8u;
            goto label_1ff8a8;
        }
    }
    ctx->pc = 0x1FF898u;
    // 0x1ff898: 0x1241824  and         $v1, $t1, $a0
    ctx->pc = 0x1ff898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1ff89c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF89Cu;
    {
        const bool branch_taken_0x1ff89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff89c) {
            ctx->pc = 0x1FF8A8u;
            goto label_1ff8a8;
        }
    }
    ctx->pc = 0x1FF8A4u;
    // 0x1ff8a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ff8a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8a8:
    // 0x1ff8a8: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF8A8u;
    {
        const bool branch_taken_0x1ff8a8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8a8) {
            ctx->pc = 0x1FF8B4u;
            goto label_1ff8b4;
        }
    }
    ctx->pc = 0x1FF8B0u;
    // 0x1ff8b0: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1ff8b4:
    // 0x1ff8b4: 0x11a0000c  beqz        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF8B4u;
    {
        const bool branch_taken_0x1ff8b4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8b4) {
            ctx->pc = 0x1FF8E8u;
            goto label_1ff8e8;
        }
    }
    ctx->pc = 0x1FF8BCu;
    // 0x1ff8bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ff8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ff8c0: 0x1032024  and         $a0, $t0, $v1
    ctx->pc = 0x1ff8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1ff8c4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF8C4u;
    {
        const bool branch_taken_0x1ff8c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF8C4u;
            // 0x1ff8c8: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff8c4) {
            ctx->pc = 0x1FF8DCu;
            goto label_1ff8dc;
        }
    }
    ctx->pc = 0x1FF8CCu;
    // 0x1ff8cc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1ff8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1ff8d0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF8D0u;
    {
        const bool branch_taken_0x1ff8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff8d0) {
            ctx->pc = 0x1FF8DCu;
            goto label_1ff8dc;
        }
    }
    ctx->pc = 0x1FF8D8u;
    // 0x1ff8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ff8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff8dc:
    // 0x1ff8dc: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF8DCu;
    {
        const bool branch_taken_0x1ff8dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8dc) {
            ctx->pc = 0x1FF8E8u;
            goto label_1ff8e8;
        }
    }
    ctx->pc = 0x1FF8E4u;
    // 0x1ff8e4: 0x640e0001  daddiu      $t6, $zero, 0x1
    ctx->pc = 0x1ff8e4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1ff8e8:
    // 0x1ff8e8: 0x11c00035  beqz        $t6, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FF8E8u;
    {
        const bool branch_taken_0x1ff8e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff8e8) {
            ctx->pc = 0x1FF9C0u;
            goto label_1ff9c0;
        }
    }
    ctx->pc = 0x1FF8F0u;
    // 0x1ff8f0: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x1ff8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
label_1ff8f4:
    // 0x1ff8f4: 0xa040002d  sb          $zero, 0x2D($v0)
    ctx->pc = 0x1ff8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff8f8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ff8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ff8fc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ff8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1ff900: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1ff900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1ff904: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1ff904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1ff908: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x1ff908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff90c: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x1ff90cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff910: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1ff910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1ff914: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ff914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1ff918: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1ff918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1ff91c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x1ff91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x1ff920: 0xa0400094  sb          $zero, 0x94($v0)
    ctx->pc = 0x1ff920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff924: 0xa0400095  sb          $zero, 0x95($v0)
    ctx->pc = 0x1ff924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff928: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x1ff928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x1ff92c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1ff92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x1ff930: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x1ff930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x1ff934: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x1ff934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x1ff938: 0xa04000c8  sb          $zero, 0xC8($v0)
    ctx->pc = 0x1ff938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff93c: 0xa04000c9  sb          $zero, 0xC9($v0)
    ctx->pc = 0x1ff93cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 201), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff940: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x1ff940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x1ff944: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x1ff944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x1ff948: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x1ff948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x1ff94c: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x1ff94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x1ff950: 0xa04000fc  sb          $zero, 0xFC($v0)
    ctx->pc = 0x1ff950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 252), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff954: 0xa04000fd  sb          $zero, 0xFD($v0)
    ctx->pc = 0x1ff954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 253), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff958: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x1ff958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
    // 0x1ff95c: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x1ff95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x1ff960: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1ff960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1ff964: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1ff964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1ff968: 0xa0400130  sb          $zero, 0x130($v0)
    ctx->pc = 0x1ff968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 304), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff96c: 0xa0400131  sb          $zero, 0x131($v0)
    ctx->pc = 0x1ff96cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 305), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff970: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x1ff970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x1ff974: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1ff974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1ff978: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x1ff978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x1ff97c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1ff97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1ff980: 0xa0400164  sb          $zero, 0x164($v0)
    ctx->pc = 0x1ff980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff984: 0xa0400165  sb          $zero, 0x165($v0)
    ctx->pc = 0x1ff984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff988: 0xac400150  sw          $zero, 0x150($v0)
    ctx->pc = 0x1ff988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
    // 0x1ff98c: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x1ff98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 0));
    // 0x1ff990: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x1ff990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    // 0x1ff994: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x1ff994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
    // 0x1ff998: 0xa0400198  sb          $zero, 0x198($v0)
    ctx->pc = 0x1ff998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 408), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff99c: 0xa0400199  sb          $zero, 0x199($v0)
    ctx->pc = 0x1ff99cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 409), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff9a0: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x1ff9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x1ff9a4: 0xac400188  sw          $zero, 0x188($v0)
    ctx->pc = 0x1ff9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 0));
    // 0x1ff9a8: 0xac40018c  sw          $zero, 0x18C($v0)
    ctx->pc = 0x1ff9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 0));
    // 0x1ff9ac: 0xac400190  sw          $zero, 0x190($v0)
    ctx->pc = 0x1ff9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 0));
    // 0x1ff9b0: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x1ff9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1ff9b4: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1ff9b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ff9b8: 0x5460ffce  bnel        $v1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1FF9B8u;
    {
        const bool branch_taken_0x1ff9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9b8) {
            ctx->pc = 0x1FF9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9B8u;
            // 0x1ff9bc: 0xa040002c  sb          $zero, 0x2C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF8F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff8f4;
        }
    }
    ctx->pc = 0x1FF9C0u;
label_1ff9c0:
    // 0x1ff9c0: 0x260419f0  addiu       $a0, $s0, 0x19F0
    ctx->pc = 0x1ff9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6640));
    // 0x1ff9c4: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x1ff9c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff9c8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF9C8u;
    {
        const bool branch_taken_0x1ff9c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9c8) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF9D0u;
    // 0x1ff9d0: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x1ff9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
label_1ff9d4:
    // 0x1ff9d4: 0xa040002d  sb          $zero, 0x2D($v0)
    ctx->pc = 0x1ff9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff9d8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ff9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1ff9dc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1ff9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1ff9e0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1ff9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1ff9e4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1ff9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1ff9e8: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x1ff9ec: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x1ff9ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff9f0: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF9F0u;
    {
        const bool branch_taken_0x1ff9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9f0) {
            ctx->pc = 0x1FF9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9F0u;
            // 0x1ff9f4: 0xa040002c  sb          $zero, 0x2C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF9D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff9d4;
        }
    }
    ctx->pc = 0x1FF9F8u;
label_1ff9f8:
    // 0x1ff9f8: 0xae001c34  sw          $zero, 0x1C34($s0)
    ctx->pc = 0x1ff9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 0));
    // 0x1ff9fc: 0xae001c38  sw          $zero, 0x1C38($s0)
    ctx->pc = 0x1ff9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 0));
    // 0x1ffa00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ffa04: 0xae021c3c  sw          $v0, 0x1C3C($s0)
    ctx->pc = 0x1ffa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7228), GPR_U32(ctx, 2));
    // 0x1ffa08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffa08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa0c: 0xae001c40  sw          $zero, 0x1C40($s0)
    ctx->pc = 0x1ffa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7232), GPR_U32(ctx, 0));
    // 0x1ffa10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa14: 0xae001c44  sw          $zero, 0x1C44($s0)
    ctx->pc = 0x1ffa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7236), GPR_U32(ctx, 0));
    // 0x1ffa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa1c: 0xae001c48  sw          $zero, 0x1C48($s0)
    ctx->pc = 0x1ffa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7240), GPR_U32(ctx, 0));
    // 0x1ffa20: 0xae001c4c  sw          $zero, 0x1C4C($s0)
    ctx->pc = 0x1ffa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7244), GPR_U32(ctx, 0));
    // 0x1ffa24: 0xa2001c30  sb          $zero, 0x1C30($s0)
    ctx->pc = 0x1ffa24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7216), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ffa28: 0xa2021c32  sb          $v0, 0x1C32($s0)
    ctx->pc = 0x1ffa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7218), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffa2c: 0xae000ea0  sw          $zero, 0xEA0($s0)
    ctx->pc = 0x1ffa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3744), GPR_U32(ctx, 0));
label_1ffa30:
    // 0x1ffa30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ffa34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa38:
    // 0x1ffa38: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFA38u;
    {
        const bool branch_taken_0x1ffa38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA38u;
            // 0x1ffa3c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa38) {
            ctx->pc = 0x1FFA58u;
            goto label_1ffa58;
        }
    }
    ctx->pc = 0x1FFA40u;
    // 0x1ffa40: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x1ffa40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ffa44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA44u;
    {
        const bool branch_taken_0x1ffa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa44) {
            ctx->pc = 0x1FFA58u;
            goto label_1ffa58;
        }
    }
    ctx->pc = 0x1FFA4Cu;
    // 0x1ffa4c: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1ffa50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ffa54: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x1ffa54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_1ffa58:
    // 0x1ffa58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ffa5c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1ffa5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ffa60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FFA60u;
    {
        const bool branch_taken_0x1ffa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA60u;
            // 0x1ffa64: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa60) {
            ctx->pc = 0x1FFA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffa38;
        }
    }
    ctx->pc = 0x1FFA68u;
    // 0x1ffa68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ffa6c: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1ffa6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ffa70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FFA70u;
    {
        const bool branch_taken_0x1ffa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA70u;
            // 0x1ffa74: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa70) {
            ctx->pc = 0x1FFA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffa30;
        }
    }
    ctx->pc = 0x1FFA78u;
    // 0x1ffa78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffa84:
    // 0x1ffa84: 0xc41804  sllv        $v1, $a0, $a2
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x1ffa88: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1ffa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ffa8c: 0xaca30110  sw          $v1, 0x110($a1)
    ctx->pc = 0x1ffa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 3));
    // 0x1ffa90: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffa94: 0xaca20114  sw          $v0, 0x114($a1)
    ctx->pc = 0x1ffa94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 2));
    // 0x1ffa98: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x1ffa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ffa9c: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x1ffa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffaa0: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ffaa4: 0xaca30118  sw          $v1, 0x118($a1)
    ctx->pc = 0x1ffaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 3));
    // 0x1ffaa8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffaac: 0xaca2011c  sw          $v0, 0x11C($a1)
    ctx->pc = 0x1ffaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 2));
    // 0x1ffab0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1ffab4: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffab8: 0x24c20005  addiu       $v0, $a2, 0x5
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1ffabc: 0xaca30120  sw          $v1, 0x120($a1)
    ctx->pc = 0x1ffabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 3));
    // 0x1ffac0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffac4: 0xaca20124  sw          $v0, 0x124($a1)
    ctx->pc = 0x1ffac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 2));
    // 0x1ffac8: 0x24c20006  addiu       $v0, $a2, 0x6
    ctx->pc = 0x1ffac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1ffacc: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffad0: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1ffad4: 0xaca30128  sw          $v1, 0x128($a1)
    ctx->pc = 0x1ffad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 3));
    // 0x1ffad8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1ffad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1ffadc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ffae0: 0xaca2012c  sw          $v0, 0x12C($a1)
    ctx->pc = 0x1ffae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 2));
    // 0x1ffae4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1ffae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ffae8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1FFAE8u;
    {
        const bool branch_taken_0x1ffae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAE8u;
            // 0x1ffaec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffae8) {
            ctx->pc = 0x1FFA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffa84;
        }
    }
    ctx->pc = 0x1FFAF0u;
    // 0x1ffaf0: 0xc07fcf8  jal         func_1FF3E0
    ctx->pc = 0x1FFAF0u;
    SET_GPR_U32(ctx, 31, 0x1FFAF8u);
    ctx->pc = 0x1FFAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFAF0u;
            // 0x1ffaf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3E0u;
    if (runtime->hasFunction(0x1FF3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAF8u; }
        if (ctx->pc != 0x1FFAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF3E0_0x1ff3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAF8u; }
        if (ctx->pc != 0x1FFAF8u) { return; }
    }
    ctx->pc = 0x1FFAF8u;
label_1ffaf8:
    // 0x1ffaf8: 0xa2001c31  sb          $zero, 0x1C31($s0)
    ctx->pc = 0x1ffaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7217), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ffafc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ffafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB08u;
            // 0x1ffb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFB10u;
}
