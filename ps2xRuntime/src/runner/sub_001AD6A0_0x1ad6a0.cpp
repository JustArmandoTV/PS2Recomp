#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD6A0
// Address: 0x1ad6a0 - 0x1ad798
void sub_001AD6A0_0x1ad6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD6A0_0x1ad6a0");
#endif

    ctx->pc = 0x1ad6a0u;

    // 0x1ad6a0: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1ad6a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6a4: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad6a8: 0x85a3001c  lh          $v1, 0x1C($t5)
    ctx->pc = 0x1ad6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x1ad6ac: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad6b0: 0x85a2001e  lh          $v0, 0x1E($t5)
    ctx->pc = 0x1ad6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x1ad6b4: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x1ad6b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad6b8: 0x8da70018  lw          $a3, 0x18($t5)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x1ad6bc: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad6c0: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad6c4: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1ad6c8: 0x8da40014  lw          $a0, 0x14($t5)
    ctx->pc = 0x1ad6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1ad6cc: 0xe17c2  srl         $v0, $t6, 31
    ctx->pc = 0x1ad6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x1ad6d0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1ad6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1ad6d4: 0xf3080  sll         $a2, $t7, 2
    ctx->pc = 0x1ad6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ad6d8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1ad6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ad6dc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ad6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1ad6e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ad6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad6e4: 0x8c63abe8  lw          $v1, -0x5418($v1)
    ctx->pc = 0x1ad6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945768)));
    // 0x1ad6e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ad6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ad6ec: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x1ad6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ad6f0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1ad6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1ad6f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ad6f8: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1ad6f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad6fc: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x1ad6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1ad700: 0x8da6000c  lw          $a2, 0xC($t5)
    ctx->pc = 0x1ad700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1ad704: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD704u;
    {
        const bool branch_taken_0x1ad704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad704) {
            ctx->pc = 0x1AD708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD704u;
            // 0x1ad708: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD70Cu;
            goto label_1ad70c;
        }
    }
    ctx->pc = 0x1AD70Cu;
label_1ad70c:
    // 0x1ad70c: 0x8daa0008  lw          $t2, 0x8($t5)
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x1ad710: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1ad714: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x1ad714u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1ad718: 0x3812  mflo        $a3
    ctx->pc = 0x1ad718u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1ad71c: 0x4810  mfhi        $t1
    ctx->pc = 0x1ad71cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1ad720: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ad724: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x1ad724u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad728: 0x2012  mflo        $a0
    ctx->pc = 0x1ad728u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ad72c: 0x3810  mfhi        $a3
    ctx->pc = 0x1ad72cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1ad730: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1ad730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ad734: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x1ad734u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad738: 0x3012  mflo        $a2
    ctx->pc = 0x1ad738u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1ad73c: 0x2010  mfhi        $a0
    ctx->pc = 0x1ad73cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ad740: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD740u;
    {
        const bool branch_taken_0x1ad740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD740u;
            // 0x1ad744: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad740) {
            ctx->pc = 0x1AD774u;
            goto label_1ad774;
        }
    }
    ctx->pc = 0x1AD748u;
    // 0x1ad748: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD748u;
    {
        const bool branch_taken_0x1ad748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad748) {
            ctx->pc = 0x1AD74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD748u;
            // 0x1ad74c: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD778u;
            goto label_1ad778;
        }
    }
    ctx->pc = 0x1AD750u;
    // 0x1ad750: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ad750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ad754: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1ad754u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad758: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD758u;
    {
        const bool branch_taken_0x1ad758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad758) {
            ctx->pc = 0x1AD75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD758u;
            // 0x1ad75c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD760u;
            goto label_1ad760;
        }
    }
    ctx->pc = 0x1AD760u;
label_1ad760:
    // 0x1ad760: 0x1810  mfhi        $v1
    ctx->pc = 0x1ad760u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ad764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD764u;
    {
        const bool branch_taken_0x1ad764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD764u;
            // 0x1ad768: 0x2d230002  sltiu       $v1, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad764) {
            ctx->pc = 0x1AD774u;
            goto label_1ad774;
        }
    }
    ctx->pc = 0x1AD76Cu;
    // 0x1ad76c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad770: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x1ad770u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_1ad774:
    // 0x1ad774: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1ad774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_1ad778:
    // 0x1ad778: 0xa4ae001e  sh          $t6, 0x1E($a1)
    ctx->pc = 0x1ad778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 14));
    // 0x1ad77c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1ad780: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x1ad780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1ad784: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ad788: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1ad788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1ad78c: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x1ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x1ad790: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD790u;
            // 0x1ad794: 0xaca90014  sw          $t1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD798u;
}
