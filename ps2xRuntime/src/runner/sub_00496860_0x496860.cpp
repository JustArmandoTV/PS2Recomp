#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00496860
// Address: 0x496860 - 0x496b70
void sub_00496860_0x496860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496860_0x496860");
#endif

    switch (ctx->pc) {
        case 0x49692cu: goto label_49692c;
        case 0x496b0cu: goto label_496b0c;
        default: break;
    }

    ctx->pc = 0x496860u;

    // 0x496860: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x496860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x496864: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x496864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x496868: 0x34482493  ori         $t0, $v0, 0x2493
    ctx->pc = 0x496868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x49686c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x49686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x496870: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x496870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x496874: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x496874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x496878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x496878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49687c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x496880: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x496880u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x496884: 0x1070018  mult        $zero, $t0, $a3
    ctx->pc = 0x496884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x496888: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x496888u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x49688c: 0x0  nop
    ctx->pc = 0x49688cu;
    // NOP
    // 0x496890: 0x1010  mfhi        $v0
    ctx->pc = 0x496890u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x496894: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x496894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x496898: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x496898u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x49689c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4968a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4968a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4968a4: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x4968A4u;
    {
        const bool branch_taken_0x4968a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4968a4) {
            ctx->pc = 0x496B58u;
            goto label_496b58;
        }
    }
    ctx->pc = 0x4968ACu;
    // 0x4968ac: 0x24a7001c  addiu       $a3, $a1, 0x1C
    ctx->pc = 0x4968acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x4968b0: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x4968b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4968b4: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4968B4u;
    {
        const bool branch_taken_0x4968b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4968B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4968B4u;
            // 0x4968b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4968b4) {
            ctx->pc = 0x496B58u;
            goto label_496b58;
        }
    }
    ctx->pc = 0x4968BCu;
    // 0x4968bc: 0x675823  subu        $t3, $v1, $a3
    ctx->pc = 0x4968bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4968c0: 0x256a001b  addiu       $t2, $t3, 0x1B
    ctx->pc = 0x4968c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 27));
    // 0x4968c4: 0x10a0018  mult        $zero, $t0, $t2
    ctx->pc = 0x4968c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4968c8: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x4968c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x4968cc: 0x0  nop
    ctx->pc = 0x4968ccu;
    // NOP
    // 0x4968d0: 0x4010  mfhi        $t0
    ctx->pc = 0x4968d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x4968d4: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x4968d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x4968d8: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x4968d8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x4968dc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4968dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4968e0: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x4968e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4968e4: 0x14200086  bnez        $at, . + 4 + (0x86 << 2)
    ctx->pc = 0x4968E4u;
    {
        const bool branch_taken_0x4968e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4968E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4968E4u;
            // 0x4968e8: 0x2462ff20  addiu       $v0, $v1, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4968e4) {
            ctx->pc = 0x496B00u;
            goto label_496b00;
        }
    }
    ctx->pc = 0x4968ECu;
    // 0x4968ec: 0x67082b  sltu        $at, $v1, $a3
    ctx->pc = 0x4968ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4968f0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x4968F0u;
    {
        const bool branch_taken_0x4968f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4968F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4968F0u;
            // 0x4968f4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4968f0) {
            ctx->pc = 0x496924u;
            goto label_496924;
        }
    }
    ctx->pc = 0x4968F8u;
    // 0x4968f8: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x4968f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x4968fc: 0x1694024  and         $t0, $t3, $t1
    ctx->pc = 0x4968fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x496900: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496900u;
    {
        const bool branch_taken_0x496900 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x496904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496900u;
            // 0x496904: 0x640c0001  daddiu      $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496900) {
            ctx->pc = 0x496918u;
            goto label_496918;
        }
    }
    ctx->pc = 0x496908u;
    // 0x496908: 0x1494024  and         $t0, $t2, $t1
    ctx->pc = 0x496908u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x49690c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49690Cu;
    {
        const bool branch_taken_0x49690c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x49690c) {
            ctx->pc = 0x496918u;
            goto label_496918;
        }
    }
    ctx->pc = 0x496914u;
    // 0x496914: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x496914u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496918:
    // 0x496918: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x496918u;
    {
        const bool branch_taken_0x496918 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x496918) {
            ctx->pc = 0x496924u;
            goto label_496924;
        }
    }
    ctx->pc = 0x496920u;
    // 0x496920: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x496920u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_496924:
    // 0x496924: 0x11a00076  beqz        $t5, . + 4 + (0x76 << 2)
    ctx->pc = 0x496924u;
    {
        const bool branch_taken_0x496924 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x496924) {
            ctx->pc = 0x496B00u;
            goto label_496b00;
        }
    }
    ctx->pc = 0x49692Cu;
label_49692c:
    // 0x49692c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x49692cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496930: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x496930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x496934: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x496934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x496938: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x496938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x49693c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x49693cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x496940: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x496940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x496944: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x496944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x496948: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x496948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x49694c: 0x8ce80010  lw          $t0, 0x10($a3)
    ctx->pc = 0x49694cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x496950: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x496950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x496954: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x496954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x496958: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x496958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x49695c: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x49695cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x496960: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x496960u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x496964: 0x8ce8001c  lw          $t0, 0x1C($a3)
    ctx->pc = 0x496964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x496968: 0xacc8001c  sw          $t0, 0x1C($a2)
    ctx->pc = 0x496968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 8));
    // 0x49696c: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x49696cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x496970: 0xacc80020  sw          $t0, 0x20($a2)
    ctx->pc = 0x496970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 8));
    // 0x496974: 0x8ce80024  lw          $t0, 0x24($a3)
    ctx->pc = 0x496974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x496978: 0xacc80024  sw          $t0, 0x24($a2)
    ctx->pc = 0x496978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 8));
    // 0x49697c: 0x8ce80028  lw          $t0, 0x28($a3)
    ctx->pc = 0x49697cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x496980: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x496980u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x496984: 0x8ce8002c  lw          $t0, 0x2C($a3)
    ctx->pc = 0x496984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x496988: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x496988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x49698c: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x49698cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x496990: 0xacc80030  sw          $t0, 0x30($a2)
    ctx->pc = 0x496990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 8));
    // 0x496994: 0x8ce80034  lw          $t0, 0x34($a3)
    ctx->pc = 0x496994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x496998: 0xacc80034  sw          $t0, 0x34($a2)
    ctx->pc = 0x496998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 8));
    // 0x49699c: 0x8ce80038  lw          $t0, 0x38($a3)
    ctx->pc = 0x49699cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x4969a0: 0xacc80038  sw          $t0, 0x38($a2)
    ctx->pc = 0x4969a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 8));
    // 0x4969a4: 0x8ce8003c  lw          $t0, 0x3C($a3)
    ctx->pc = 0x4969a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x4969a8: 0xacc8003c  sw          $t0, 0x3C($a2)
    ctx->pc = 0x4969a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 8));
    // 0x4969ac: 0x8ce80040  lw          $t0, 0x40($a3)
    ctx->pc = 0x4969acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x4969b0: 0xacc80040  sw          $t0, 0x40($a2)
    ctx->pc = 0x4969b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 8));
    // 0x4969b4: 0x8ce80044  lw          $t0, 0x44($a3)
    ctx->pc = 0x4969b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x4969b8: 0xacc80044  sw          $t0, 0x44($a2)
    ctx->pc = 0x4969b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 8));
    // 0x4969bc: 0x8ce80048  lw          $t0, 0x48($a3)
    ctx->pc = 0x4969bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x4969c0: 0xacc80048  sw          $t0, 0x48($a2)
    ctx->pc = 0x4969c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 8));
    // 0x4969c4: 0x8ce8004c  lw          $t0, 0x4C($a3)
    ctx->pc = 0x4969c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x4969c8: 0xacc8004c  sw          $t0, 0x4C($a2)
    ctx->pc = 0x4969c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 8));
    // 0x4969cc: 0x8ce80050  lw          $t0, 0x50($a3)
    ctx->pc = 0x4969ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x4969d0: 0xacc80050  sw          $t0, 0x50($a2)
    ctx->pc = 0x4969d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 8));
    // 0x4969d4: 0x8ce80054  lw          $t0, 0x54($a3)
    ctx->pc = 0x4969d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x4969d8: 0xacc80054  sw          $t0, 0x54($a2)
    ctx->pc = 0x4969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 8));
    // 0x4969dc: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x4969dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x4969e0: 0xacc80058  sw          $t0, 0x58($a2)
    ctx->pc = 0x4969e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 8));
    // 0x4969e4: 0x8ce8005c  lw          $t0, 0x5C($a3)
    ctx->pc = 0x4969e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x4969e8: 0xacc8005c  sw          $t0, 0x5C($a2)
    ctx->pc = 0x4969e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 8));
    // 0x4969ec: 0x8ce80060  lw          $t0, 0x60($a3)
    ctx->pc = 0x4969ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x4969f0: 0xacc80060  sw          $t0, 0x60($a2)
    ctx->pc = 0x4969f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 8));
    // 0x4969f4: 0x8ce80064  lw          $t0, 0x64($a3)
    ctx->pc = 0x4969f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x4969f8: 0xacc80064  sw          $t0, 0x64($a2)
    ctx->pc = 0x4969f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 8));
    // 0x4969fc: 0x8ce80068  lw          $t0, 0x68($a3)
    ctx->pc = 0x4969fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x496a00: 0xacc80068  sw          $t0, 0x68($a2)
    ctx->pc = 0x496a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 8));
    // 0x496a04: 0x8ce8006c  lw          $t0, 0x6C($a3)
    ctx->pc = 0x496a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
    // 0x496a08: 0xacc8006c  sw          $t0, 0x6C($a2)
    ctx->pc = 0x496a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 8));
    // 0x496a0c: 0x8ce80070  lw          $t0, 0x70($a3)
    ctx->pc = 0x496a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x496a10: 0xacc80070  sw          $t0, 0x70($a2)
    ctx->pc = 0x496a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 8));
    // 0x496a14: 0x8ce80074  lw          $t0, 0x74($a3)
    ctx->pc = 0x496a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x496a18: 0xacc80074  sw          $t0, 0x74($a2)
    ctx->pc = 0x496a18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 8));
    // 0x496a1c: 0x8ce80078  lw          $t0, 0x78($a3)
    ctx->pc = 0x496a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x496a20: 0xacc80078  sw          $t0, 0x78($a2)
    ctx->pc = 0x496a20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 8));
    // 0x496a24: 0x8ce8007c  lw          $t0, 0x7C($a3)
    ctx->pc = 0x496a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x496a28: 0xacc8007c  sw          $t0, 0x7C($a2)
    ctx->pc = 0x496a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 8));
    // 0x496a2c: 0x8ce80080  lw          $t0, 0x80($a3)
    ctx->pc = 0x496a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x496a30: 0xacc80080  sw          $t0, 0x80($a2)
    ctx->pc = 0x496a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 8));
    // 0x496a34: 0x8ce80084  lw          $t0, 0x84($a3)
    ctx->pc = 0x496a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x496a38: 0xacc80084  sw          $t0, 0x84($a2)
    ctx->pc = 0x496a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 8));
    // 0x496a3c: 0x8ce80088  lw          $t0, 0x88($a3)
    ctx->pc = 0x496a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x496a40: 0xacc80088  sw          $t0, 0x88($a2)
    ctx->pc = 0x496a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 8));
    // 0x496a44: 0x8ce8008c  lw          $t0, 0x8C($a3)
    ctx->pc = 0x496a44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x496a48: 0xacc8008c  sw          $t0, 0x8C($a2)
    ctx->pc = 0x496a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 8));
    // 0x496a4c: 0x8ce80090  lw          $t0, 0x90($a3)
    ctx->pc = 0x496a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x496a50: 0xacc80090  sw          $t0, 0x90($a2)
    ctx->pc = 0x496a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 8));
    // 0x496a54: 0x8ce80094  lw          $t0, 0x94($a3)
    ctx->pc = 0x496a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x496a58: 0xacc80094  sw          $t0, 0x94($a2)
    ctx->pc = 0x496a58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 8));
    // 0x496a5c: 0x8ce80098  lw          $t0, 0x98($a3)
    ctx->pc = 0x496a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x496a60: 0xacc80098  sw          $t0, 0x98($a2)
    ctx->pc = 0x496a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 8));
    // 0x496a64: 0x8ce8009c  lw          $t0, 0x9C($a3)
    ctx->pc = 0x496a64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x496a68: 0xacc8009c  sw          $t0, 0x9C($a2)
    ctx->pc = 0x496a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 8));
    // 0x496a6c: 0x8ce800a0  lw          $t0, 0xA0($a3)
    ctx->pc = 0x496a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x496a70: 0xacc800a0  sw          $t0, 0xA0($a2)
    ctx->pc = 0x496a70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 8));
    // 0x496a74: 0x8ce800a4  lw          $t0, 0xA4($a3)
    ctx->pc = 0x496a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x496a78: 0xacc800a4  sw          $t0, 0xA4($a2)
    ctx->pc = 0x496a78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 8));
    // 0x496a7c: 0x8ce800a8  lw          $t0, 0xA8($a3)
    ctx->pc = 0x496a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x496a80: 0xacc800a8  sw          $t0, 0xA8($a2)
    ctx->pc = 0x496a80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 8));
    // 0x496a84: 0x8ce800ac  lw          $t0, 0xAC($a3)
    ctx->pc = 0x496a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x496a88: 0xacc800ac  sw          $t0, 0xAC($a2)
    ctx->pc = 0x496a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 8));
    // 0x496a8c: 0x8ce800b0  lw          $t0, 0xB0($a3)
    ctx->pc = 0x496a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x496a90: 0xacc800b0  sw          $t0, 0xB0($a2)
    ctx->pc = 0x496a90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 8));
    // 0x496a94: 0x8ce800b4  lw          $t0, 0xB4($a3)
    ctx->pc = 0x496a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x496a98: 0xacc800b4  sw          $t0, 0xB4($a2)
    ctx->pc = 0x496a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 8));
    // 0x496a9c: 0x8ce800b8  lw          $t0, 0xB8($a3)
    ctx->pc = 0x496a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x496aa0: 0xacc800b8  sw          $t0, 0xB8($a2)
    ctx->pc = 0x496aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 8));
    // 0x496aa4: 0x8ce800bc  lw          $t0, 0xBC($a3)
    ctx->pc = 0x496aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x496aa8: 0xacc800bc  sw          $t0, 0xBC($a2)
    ctx->pc = 0x496aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 8));
    // 0x496aac: 0x8ce800c0  lw          $t0, 0xC0($a3)
    ctx->pc = 0x496aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x496ab0: 0xacc800c0  sw          $t0, 0xC0($a2)
    ctx->pc = 0x496ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 8));
    // 0x496ab4: 0x8ce800c4  lw          $t0, 0xC4($a3)
    ctx->pc = 0x496ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x496ab8: 0xacc800c4  sw          $t0, 0xC4($a2)
    ctx->pc = 0x496ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 8));
    // 0x496abc: 0x8ce800c8  lw          $t0, 0xC8($a3)
    ctx->pc = 0x496abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 200)));
    // 0x496ac0: 0xacc800c8  sw          $t0, 0xC8($a2)
    ctx->pc = 0x496ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 8));
    // 0x496ac4: 0x8ce800cc  lw          $t0, 0xCC($a3)
    ctx->pc = 0x496ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
    // 0x496ac8: 0xacc800cc  sw          $t0, 0xCC($a2)
    ctx->pc = 0x496ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 8));
    // 0x496acc: 0x8ce800d0  lw          $t0, 0xD0($a3)
    ctx->pc = 0x496accu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x496ad0: 0xacc800d0  sw          $t0, 0xD0($a2)
    ctx->pc = 0x496ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 8));
    // 0x496ad4: 0x8ce800d4  lw          $t0, 0xD4($a3)
    ctx->pc = 0x496ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x496ad8: 0xacc800d4  sw          $t0, 0xD4($a2)
    ctx->pc = 0x496ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 8));
    // 0x496adc: 0x8ce800d8  lw          $t0, 0xD8($a3)
    ctx->pc = 0x496adcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 216)));
    // 0x496ae0: 0xacc800d8  sw          $t0, 0xD8($a2)
    ctx->pc = 0x496ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 8));
    // 0x496ae4: 0x8ce800dc  lw          $t0, 0xDC($a3)
    ctx->pc = 0x496ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
    // 0x496ae8: 0xacc800dc  sw          $t0, 0xDC($a2)
    ctx->pc = 0x496ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 8));
    // 0x496aec: 0x24e700e0  addiu       $a3, $a3, 0xE0
    ctx->pc = 0x496aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
    // 0x496af0: 0xe2402b  sltu        $t0, $a3, $v0
    ctx->pc = 0x496af0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x496af4: 0x1500ff8d  bnez        $t0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x496AF4u;
    {
        const bool branch_taken_0x496af4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x496AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496AF4u;
            // 0x496af8: 0x24c600e0  addiu       $a2, $a2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496af4) {
            ctx->pc = 0x49692Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49692c;
        }
    }
    ctx->pc = 0x496AFCu;
    // 0x496afc: 0x0  nop
    ctx->pc = 0x496afcu;
    // NOP
label_496b00:
    // 0x496b00: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x496b00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496b04: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x496B04u;
    {
        const bool branch_taken_0x496b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496b04) {
            ctx->pc = 0x496B58u;
            goto label_496b58;
        }
    }
    ctx->pc = 0x496B0Cu;
label_496b0c:
    // 0x496b0c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x496b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496b10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x496b10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x496b14: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x496b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x496b18: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x496b18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x496b1c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x496b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x496b20: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x496b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x496b24: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x496b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x496b28: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x496b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x496b2c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x496b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x496b30: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x496b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x496b34: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x496b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x496b38: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x496b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x496b3c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x496b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x496b40: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x496b40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x496b44: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x496b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x496b48: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x496b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496b4c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x496B4Cu;
    {
        const bool branch_taken_0x496b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496B4Cu;
            // 0x496b50: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b4c) {
            ctx->pc = 0x496B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496b0c;
        }
    }
    ctx->pc = 0x496B54u;
    // 0x496b54: 0x0  nop
    ctx->pc = 0x496b54u;
    // NOP
label_496b58:
    // 0x496b58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x496b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x496b5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x496b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x496b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x496b64: 0x3e00008  jr          $ra
    ctx->pc = 0x496B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496B64u;
            // 0x496b68: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x496B6Cu;
    // 0x496b6c: 0x0  nop
    ctx->pc = 0x496b6cu;
    // NOP
}
