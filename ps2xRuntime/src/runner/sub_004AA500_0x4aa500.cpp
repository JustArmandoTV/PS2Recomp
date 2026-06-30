#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA500
// Address: 0x4aa500 - 0x4aa810
void sub_004AA500_0x4aa500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA500_0x4aa500");
#endif

    switch (ctx->pc) {
        case 0x4aa6f4u: goto label_4aa6f4;
        case 0x4aa750u: goto label_4aa750;
        default: break;
    }

    ctx->pc = 0x4aa500u;

    // 0x4aa500: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x4aa500u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aa504: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x4aa504u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aa508: 0x55490009  bnel        $t2, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA508u;
    {
        const bool branch_taken_0x4aa508 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        if (branch_taken_0x4aa508) {
            ctx->pc = 0x4AA50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA508u;
            // 0x4aa50c: 0x8caf000c  lw          $t7, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA530u;
            goto label_4aa530;
        }
    }
    ctx->pc = 0x4AA510u;
    // 0x4aa510: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4aa510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aa514: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4aa514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4aa518: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x4aa518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x4aa51c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x4aa51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x4aa520: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4aa520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aa524: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x4aa524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x4aa528: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x4AA528u;
    {
        const bool branch_taken_0x4aa528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA528u;
            // 0x4aa52c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa528) {
            ctx->pc = 0x4AA800u;
            goto label_4aa800;
        }
    }
    ctx->pc = 0x4AA530u;
label_4aa530:
    // 0x4aa530: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x4aa530u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4aa534: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x4aa534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4aa538: 0xf6080  sll         $t4, $t7, 2
    ctx->pc = 0x4aa538u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x4aa53c: 0xb7080  sll         $t6, $t3, 2
    ctx->pc = 0x4aa53cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4aa540: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AA540u;
    {
        const bool branch_taken_0x4aa540 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA540u;
            // 0x4aa544: 0x10c6821  addu        $t5, $t0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa540) {
            ctx->pc = 0x4AA560u;
            goto label_4aa560;
        }
    }
    ctx->pc = 0x4AA548u;
    // 0x4aa548: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4aa548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4aa54c: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x4aa54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4aa550: 0x6b001b  divu        $zero, $v1, $t3
    ctx->pc = 0x4aa550u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4aa554: 0x1810  mfhi        $v1
    ctx->pc = 0x4aa554u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4aa558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA558u;
    {
        const bool branch_taken_0x4aa558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA558u;
            // 0x4aa55c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa558) {
            ctx->pc = 0x4AA568u;
            goto label_4aa568;
        }
    }
    ctx->pc = 0x4AA560u;
label_4aa560:
    // 0x4aa560: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4aa560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aa564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4aa568:
    // 0x4aa568: 0x10c5821  addu        $t3, $t0, $t4
    ctx->pc = 0x4aa568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4aa56c: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x4aa56cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4aa570: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x4aa570u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4aa574: 0x10e1821  addu        $v1, $t0, $t6
    ctx->pc = 0x4aa574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x4aa578: 0x14d7023  subu        $t6, $t2, $t5
    ctx->pc = 0x4aa578u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x4aa57c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA57Cu;
    {
        const bool branch_taken_0x4aa57c = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x4AA580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA57Cu;
            // 0x4aa580: 0xe7883  sra         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa57c) {
            ctx->pc = 0x4AA58Cu;
            goto label_4aa58c;
        }
    }
    ctx->pc = 0x4AA584u;
    // 0x4aa584: 0x25ce0003  addiu       $t6, $t6, 0x3
    ctx->pc = 0x4aa584u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x4aa588: 0xe7883  sra         $t7, $t6, 2
    ctx->pc = 0x4aa588u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 14), 2));
label_4aa58c:
    // 0x4aa58c: 0x158702b  sltu        $t6, $t2, $t8
    ctx->pc = 0x4aa58cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4aa590: 0x55c0000d  bnel        $t6, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4AA590u;
    {
        const bool branch_taken_0x4aa590 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa590) {
            ctx->pc = 0x4AA594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA590u;
            // 0x4aa594: 0x1b8702b  sltu        $t6, $t5, $t8 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA5C8u;
            goto label_4aa5c8;
        }
    }
    ctx->pc = 0x4AA598u;
    // 0x4aa598: 0x1b8082b  sltu        $at, $t5, $t8
    ctx->pc = 0x4aa598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4aa59c: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4AA59Cu;
    {
        const bool branch_taken_0x4aa59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa59c) {
            ctx->pc = 0x4AA5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA59Cu;
            // 0x4aa5a0: 0x189c023  subu        $t8, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA5F4u;
            goto label_4aa5f4;
        }
    }
    ctx->pc = 0x4AA5A4u;
    // 0x4aa5a4: 0x8cd8000c  lw          $t8, 0xC($a2)
    ctx->pc = 0x4aa5a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aa5a8: 0x8cce0004  lw          $t6, 0x4($a2)
    ctx->pc = 0x4aa5a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aa5ac: 0x30ec023  subu        $t8, $t8, $t6
    ctx->pc = 0x4aa5acu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
    // 0x4aa5b0: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA5B0u;
    {
        const bool branch_taken_0x4aa5b0 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x4AA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA5B0u;
            // 0x4aa5b4: 0x187083  sra         $t6, $t8, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5b0) {
            ctx->pc = 0x4AA5C0u;
            goto label_4aa5c0;
        }
    }
    ctx->pc = 0x4AA5B8u;
    // 0x4aa5b8: 0x270e0003  addiu       $t6, $t8, 0x3
    ctx->pc = 0x4aa5b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x4aa5bc: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x4aa5bcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_4aa5c0:
    // 0x4aa5c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4AA5C0u;
    {
        const bool branch_taken_0x4aa5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA5C0u;
            // 0x4aa5c4: 0x1ee7823  subu        $t7, $t7, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5c0) {
            ctx->pc = 0x4AA5F0u;
            goto label_4aa5f0;
        }
    }
    ctx->pc = 0x4AA5C8u;
label_4aa5c8:
    // 0x4aa5c8: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA5C8u;
    {
        const bool branch_taken_0x4aa5c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa5c8) {
            ctx->pc = 0x4AA5F0u;
            goto label_4aa5f0;
        }
    }
    ctx->pc = 0x4AA5D0u;
    // 0x4aa5d0: 0x8cd8000c  lw          $t8, 0xC($a2)
    ctx->pc = 0x4aa5d0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aa5d4: 0x8cce0004  lw          $t6, 0x4($a2)
    ctx->pc = 0x4aa5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aa5d8: 0x30ec023  subu        $t8, $t8, $t6
    ctx->pc = 0x4aa5d8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
    // 0x4aa5dc: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA5DCu;
    {
        const bool branch_taken_0x4aa5dc = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x4AA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA5DCu;
            // 0x4aa5e0: 0x187083  sra         $t6, $t8, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5dc) {
            ctx->pc = 0x4AA5ECu;
            goto label_4aa5ec;
        }
    }
    ctx->pc = 0x4AA5E4u;
    // 0x4aa5e4: 0x270e0003  addiu       $t6, $t8, 0x3
    ctx->pc = 0x4aa5e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x4aa5e8: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x4aa5e8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_4aa5ec:
    // 0x4aa5ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x4aa5ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_4aa5f0:
    // 0x4aa5f0: 0x189c023  subu        $t8, $t4, $t1
    ctx->pc = 0x4aa5f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_4aa5f4:
    // 0x4aa5f4: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA5F4u;
    {
        const bool branch_taken_0x4aa5f4 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x4AA5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA5F4u;
            // 0x4aa5f8: 0x187083  sra         $t6, $t8, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa5f4) {
            ctx->pc = 0x4AA604u;
            goto label_4aa604;
        }
    }
    ctx->pc = 0x4AA5FCu;
    // 0x4aa5fc: 0x270e0003  addiu       $t6, $t8, 0x3
    ctx->pc = 0x4aa5fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x4aa600: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x4aa600u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_4aa604:
    // 0x4aa604: 0x18bc02b  sltu        $t8, $t4, $t3
    ctx->pc = 0x4aa604u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4aa608: 0x5700000b  bnel        $t8, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4AA608u;
    {
        const bool branch_taken_0x4aa608 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa608) {
            ctx->pc = 0x4AA60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA608u;
            // 0x4aa60c: 0x12b582b  sltu        $t3, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA638u;
            goto label_4aa638;
        }
    }
    ctx->pc = 0x4AA610u;
    // 0x4aa610: 0x12b082b  sltu        $at, $t1, $t3
    ctx->pc = 0x4aa610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4aa614: 0x50200011  beql        $at, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AA614u;
    {
        const bool branch_taken_0x4aa614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa614) {
            ctx->pc = 0x4AA618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA614u;
            // 0x4aa618: 0x8ceb0008  lw          $t3, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA65Cu;
            goto label_4aa65c;
        }
    }
    ctx->pc = 0x4AA61Cu;
    // 0x4aa61c: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x4aa61cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4aa620: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA620u;
    {
        const bool branch_taken_0x4aa620 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4AA624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA620u;
            // 0x4aa624: 0x81883  sra         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa620) {
            ctx->pc = 0x4AA630u;
            goto label_4aa630;
        }
    }
    ctx->pc = 0x4AA628u;
    // 0x4aa628: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x4aa628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x4aa62c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4aa62cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4aa630:
    // 0x4aa630: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA630u;
    {
        const bool branch_taken_0x4aa630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA630u;
            // 0x4aa634: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa630) {
            ctx->pc = 0x4AA658u;
            goto label_4aa658;
        }
    }
    ctx->pc = 0x4AA638u;
label_4aa638:
    // 0x4aa638: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AA638u;
    {
        const bool branch_taken_0x4aa638 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa638) {
            ctx->pc = 0x4AA658u;
            goto label_4aa658;
        }
    }
    ctx->pc = 0x4AA640u;
    // 0x4aa640: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x4aa640u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4aa644: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA644u;
    {
        const bool branch_taken_0x4aa644 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4AA648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA644u;
            // 0x4aa648: 0x81883  sra         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa644) {
            ctx->pc = 0x4AA654u;
            goto label_4aa654;
        }
    }
    ctx->pc = 0x4AA64Cu;
    // 0x4aa64c: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x4aa64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x4aa650: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4aa650u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4aa654:
    // 0x4aa654: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x4aa654u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_4aa658:
    // 0x4aa658: 0x8ceb0008  lw          $t3, 0x8($a3)
    ctx->pc = 0x4aa658u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4aa65c:
    // 0x4aa65c: 0x12a4023  subu        $t0, $t1, $t2
    ctx->pc = 0x4aa65cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4aa660: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA660u;
    {
        const bool branch_taken_0x4aa660 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4AA664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA660u;
            // 0x4aa664: 0x81883  sra         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa660) {
            ctx->pc = 0x4AA670u;
            goto label_4aa670;
        }
    }
    ctx->pc = 0x4AA668u;
    // 0x4aa668: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x4aa668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x4aa66c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4aa66cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4aa670:
    // 0x4aa670: 0x12b402b  sltu        $t0, $t1, $t3
    ctx->pc = 0x4aa670u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4aa674: 0x5500000d  bnel        $t0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4AA674u;
    {
        const bool branch_taken_0x4aa674 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa674) {
            ctx->pc = 0x4AA678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA674u;
            // 0x4aa678: 0x14b402b  sltu        $t0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA6ACu;
            goto label_4aa6ac;
        }
    }
    ctx->pc = 0x4AA67Cu;
    // 0x4aa67c: 0x14b082b  sltu        $at, $t2, $t3
    ctx->pc = 0x4aa67cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4aa680: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4AA680u;
    {
        const bool branch_taken_0x4aa680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa680) {
            ctx->pc = 0x4AA684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA680u;
            // 0x4aa684: 0x1ee082b  sltu        $at, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA6D8u;
            goto label_4aa6d8;
        }
    }
    ctx->pc = 0x4AA688u;
    // 0x4aa688: 0x8ceb000c  lw          $t3, 0xC($a3)
    ctx->pc = 0x4aa688u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4aa68c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x4aa68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aa690: 0x1685823  subu        $t3, $t3, $t0
    ctx->pc = 0x4aa690u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x4aa694: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA694u;
    {
        const bool branch_taken_0x4aa694 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x4AA698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA694u;
            // 0x4aa698: 0xb4083  sra         $t0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa694) {
            ctx->pc = 0x4AA6A4u;
            goto label_4aa6a4;
        }
    }
    ctx->pc = 0x4AA69Cu;
    // 0x4aa69c: 0x25680003  addiu       $t0, $t3, 0x3
    ctx->pc = 0x4aa69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x4aa6a0: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x4aa6a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_4aa6a4:
    // 0x4aa6a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4AA6A4u;
    {
        const bool branch_taken_0x4aa6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA6A4u;
            // 0x4aa6a8: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa6a4) {
            ctx->pc = 0x4AA6D4u;
            goto label_4aa6d4;
        }
    }
    ctx->pc = 0x4AA6ACu;
label_4aa6ac:
    // 0x4aa6ac: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AA6ACu;
    {
        const bool branch_taken_0x4aa6ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa6ac) {
            ctx->pc = 0x4AA6D4u;
            goto label_4aa6d4;
        }
    }
    ctx->pc = 0x4AA6B4u;
    // 0x4aa6b4: 0x8ceb000c  lw          $t3, 0xC($a3)
    ctx->pc = 0x4aa6b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4aa6b8: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x4aa6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aa6bc: 0x1685823  subu        $t3, $t3, $t0
    ctx->pc = 0x4aa6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x4aa6c0: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA6C0u;
    {
        const bool branch_taken_0x4aa6c0 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x4AA6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA6C0u;
            // 0x4aa6c4: 0xb4083  sra         $t0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa6c0) {
            ctx->pc = 0x4AA6D0u;
            goto label_4aa6d0;
        }
    }
    ctx->pc = 0x4AA6C8u;
    // 0x4aa6c8: 0x25680003  addiu       $t0, $t3, 0x3
    ctx->pc = 0x4aa6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x4aa6cc: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x4aa6ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
label_4aa6d0:
    // 0x4aa6d0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4aa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4aa6d4:
    // 0x4aa6d4: 0x1ee082b  sltu        $at, $t7, $t6
    ctx->pc = 0x4aa6d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_4aa6d8:
    // 0x4aa6d8: 0x50200018  beql        $at, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4AA6D8u;
    {
        const bool branch_taken_0x4aa6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa6d8) {
            ctx->pc = 0x4AA6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA6D8u;
            // 0x4aa6dc: 0x8ceb0004  lw          $t3, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA73Cu;
            goto label_4aa73c;
        }
    }
    ctx->pc = 0x4AA6E0u;
    // 0x4aa6e0: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x4aa6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aa6e4: 0x8cec000c  lw          $t4, 0xC($a3)
    ctx->pc = 0x4aa6e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4aa6e8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x4aa6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aa6ec: 0x114d000c  beq         $t2, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x4AA6ECu;
    {
        const bool branch_taken_0x4aa6ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x4AA6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA6ECu;
            // 0x4aa6f0: 0x8ccb000c  lw          $t3, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa6ec) {
            ctx->pc = 0x4AA720u;
            goto label_4aa720;
        }
    }
    ctx->pc = 0x4AA6F4u;
label_4aa6f4:
    // 0x4aa6f4: 0x15280002  bne         $t1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA6F4u;
    {
        const bool branch_taken_0x4aa6f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x4aa6f4) {
            ctx->pc = 0x4AA700u;
            goto label_4aa700;
        }
    }
    ctx->pc = 0x4AA6FCu;
    // 0x4aa6fc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x4aa6fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4aa700:
    // 0x4aa700: 0x15470003  bne         $t2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA700u;
    {
        const bool branch_taken_0x4aa700 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x4AA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA700u;
            // 0x4aa704: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa700) {
            ctx->pc = 0x4AA710u;
            goto label_4aa710;
        }
    }
    ctx->pc = 0x4AA708u;
    // 0x4aa708: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x4aa708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa70c: 0x0  nop
    ctx->pc = 0x4aa70cu;
    // NOP
label_4aa710:
    // 0x4aa710: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x4aa710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x4aa714: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4aa714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4aa718: 0x154dfff6  bne         $t2, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x4AA718u;
    {
        const bool branch_taken_0x4aa718 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        ctx->pc = 0x4AA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA718u;
            // 0x4aa71c: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa718) {
            ctx->pc = 0x4AA6F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aa6f4;
        }
    }
    ctx->pc = 0x4AA720u;
label_4aa720:
    // 0x4aa720: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x4aa720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4aa724: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4aa724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4aa728: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4aa728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4aa72c: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4aa72cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4aa730: 0x3010  mfhi        $a2
    ctx->pc = 0x4aa730u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4aa734: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AA734u;
    {
        const bool branch_taken_0x4aa734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA734u;
            // 0x4aa738: 0xaca6000c  sw          $a2, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa734) {
            ctx->pc = 0x4AA778u;
            goto label_4aa778;
        }
    }
    ctx->pc = 0x4AA73Cu;
label_4aa73c:
    // 0x4aa73c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x4aa73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aa740: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x4aa740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4aa744: 0x112c000c  beq         $t1, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x4AA744u;
    {
        const bool branch_taken_0x4aa744 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        ctx->pc = 0x4AA748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA744u;
            // 0x4aa748: 0x8ccd0004  lw          $t5, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa744) {
            ctx->pc = 0x4AA778u;
            goto label_4aa778;
        }
    }
    ctx->pc = 0x4AA74Cu;
    // 0x4aa74c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4aa74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4aa750:
    // 0x4aa750: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4aa750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4aa754: 0x15270002  bne         $t1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA754u;
    {
        const bool branch_taken_0x4aa754 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x4AA758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA754u;
            // 0x4aa758: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa754) {
            ctx->pc = 0x4AA760u;
            goto label_4aa760;
        }
    }
    ctx->pc = 0x4AA75Cu;
    // 0x4aa75c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x4aa75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4aa760:
    // 0x4aa760: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x4aa760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x4aa764: 0x15480002  bne         $t2, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA764u;
    {
        const bool branch_taken_0x4aa764 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 8));
        if (branch_taken_0x4aa764) {
            ctx->pc = 0x4AA770u;
            goto label_4aa770;
        }
    }
    ctx->pc = 0x4AA76Cu;
    // 0x4aa76c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x4aa76cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4aa770:
    // 0x4aa770: 0x552cfff7  bnel        $t1, $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AA770u;
    {
        const bool branch_taken_0x4aa770 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        if (branch_taken_0x4aa770) {
            ctx->pc = 0x4AA774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA770u;
            // 0x4aa774: 0x8d260000  lw          $a2, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aa750;
        }
    }
    ctx->pc = 0x4AA778u;
label_4aa778:
    // 0x4aa778: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x4aa778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4aa77c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4aa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4aa780: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4aa780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4aa784: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4aa784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4aa788: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x4aa788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4aa78c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x4aa78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4aa790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aa790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4aa794: 0x1233821  addu        $a3, $t1, $v1
    ctx->pc = 0x4aa794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4aa798: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4aa798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4aa79c: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x4aa79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4aa7a0: 0x1254021  addu        $t0, $t1, $a1
    ctx->pc = 0x4aa7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x4aa7a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA7A4u;
    {
        const bool branch_taken_0x4aa7a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4AA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA7A4u;
            // 0x4aa7a8: 0x33083  sra         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa7a4) {
            ctx->pc = 0x4AA7B4u;
            goto label_4aa7b4;
        }
    }
    ctx->pc = 0x4AA7ACu;
    // 0x4aa7ac: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x4aa7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4aa7b0: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x4aa7b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
label_4aa7b4:
    // 0x4aa7b4: 0x1092823  subu        $a1, $t0, $t1
    ctx->pc = 0x4aa7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4aa7b8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA7B8u;
    {
        const bool branch_taken_0x4aa7b8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AA7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA7B8u;
            // 0x4aa7bc: 0x51883  sra         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa7b8) {
            ctx->pc = 0x4AA7C8u;
            goto label_4aa7c8;
        }
    }
    ctx->pc = 0x4AA7C0u;
    // 0x4aa7c0: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x4aa7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x4aa7c4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4aa7c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4aa7c8:
    // 0x4aa7c8: 0x1e32821  addu        $a1, $t7, $v1
    ctx->pc = 0x4aa7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4aa7cc: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA7CCu;
    {
        const bool branch_taken_0x4aa7cc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4aa7cc) {
            ctx->pc = 0x4AA7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA7CCu;
            // 0x4aa7d0: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA7DCu;
            goto label_4aa7dc;
        }
    }
    ctx->pc = 0x4AA7D4u;
    // 0x4aa7d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA7D4u;
    {
        const bool branch_taken_0x4aa7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA7D4u;
            // 0x4aa7d8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa7d4) {
            ctx->pc = 0x4AA7E8u;
            goto label_4aa7e8;
        }
    }
    ctx->pc = 0x4AA7DCu;
label_4aa7dc:
    // 0x4aa7dc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AA7DCu;
    {
        const bool branch_taken_0x4aa7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa7dc) {
            ctx->pc = 0x4AA7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA7DCu;
            // 0x4aa7e0: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA7ECu;
            goto label_4aa7ec;
        }
    }
    ctx->pc = 0x4AA7E4u;
    // 0x4aa7e4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4aa7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4aa7e8:
    // 0x4aa7e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4aa7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4aa7ec:
    // 0x4aa7ec: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4aa7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4aa7f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aa7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aa7f4: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x4aa7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x4aa7f8: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x4aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x4aa7fc: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x4aa7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_4aa800:
    // 0x4aa800: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA808u;
    // 0x4aa808: 0x0  nop
    ctx->pc = 0x4aa808u;
    // NOP
    // 0x4aa80c: 0x0  nop
    ctx->pc = 0x4aa80cu;
    // NOP
}
