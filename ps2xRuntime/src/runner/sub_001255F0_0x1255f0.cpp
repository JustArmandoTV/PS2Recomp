#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001255F0
// Address: 0x1255f0 - 0x125828
void sub_001255F0_0x1255f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001255F0_0x1255f0");
#endif

    switch (ctx->pc) {
        case 0x125694u: goto label_125694;
        case 0x1256d8u: goto label_1256d8;
        case 0x125708u: goto label_125708;
        case 0x125728u: goto label_125728;
        case 0x125754u: goto label_125754;
        case 0x12577cu: goto label_12577c;
        case 0x1257a4u: goto label_1257a4;
        default: break;
    }

    ctx->pc = 0x1255f0u;

    // 0x1255f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1255f4: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x1255f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1255f8: 0x15e00026  bnez        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1255F8u;
    {
        const bool branch_taken_0x1255f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1255FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255F8u;
            // 0x1255fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255f8) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x125600u;
    // 0x125600: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x125600u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x125604: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x125604u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125608: 0x15e00022  bnez        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x125608u;
    {
        const bool branch_taken_0x125608 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125608u;
            // 0x12560c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125608) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x125610u;
    // 0x125610: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x125610u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x125614: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x125614u;
    {
        const bool branch_taken_0x125614 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125614u;
            // 0x125618: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125614) {
            ctx->pc = 0x125648u;
            goto label_125648;
        }
    }
    ctx->pc = 0x12561Cu;
    // 0x12561c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12561Cu;
    {
        const bool branch_taken_0x12561c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12561c) {
            ctx->pc = 0x12563Cu;
            goto label_12563c;
        }
    }
    ctx->pc = 0x125624u;
    // 0x125624: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x125624u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125628: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x125628u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12562c: 0x11ee0003  beq         $t7, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12562Cu;
    {
        const bool branch_taken_0x12562c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x125630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12562Cu;
            // 0x125630: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12562c) {
            ctx->pc = 0x12563Cu;
            goto label_12563c;
        }
    }
    ctx->pc = 0x125634u;
    // 0x125634: 0x3e00008  jr          $ra
    ctx->pc = 0x125634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125634u;
            // 0x125638: 0x25e206d0  addiu       $v0, $t7, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12563Cu;
label_12563c:
    // 0x12563c: 0x3e00008  jr          $ra
    ctx->pc = 0x12563Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12563Cu;
            // 0x125640: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125644u;
    // 0x125644: 0x0  nop
    ctx->pc = 0x125644u;
    // NOP
label_125648:
    // 0x125648: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x125648u;
    {
        const bool branch_taken_0x125648 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125648u;
            // 0x12564c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125648) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x125650u;
    // 0x125650: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x125650u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x125654: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x125654u;
    {
        const bool branch_taken_0x125654 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125654u;
            // 0x125658: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125654) {
            ctx->pc = 0x12569Cu;
            goto label_12569c;
        }
    }
    ctx->pc = 0x12565Cu;
    // 0x12565c: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12565Cu;
    {
        const bool branch_taken_0x12565c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12565Cu;
            // 0x125660: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12565c) {
            ctx->pc = 0x125694u;
            goto label_125694;
        }
    }
    ctx->pc = 0x125664u;
    // 0x125664: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x125664u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x125668: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x125668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12566c: 0xfcce0000  sd          $t6, 0x0($a2)
    ctx->pc = 0x12566cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 14));
    // 0x125670: 0xdc8f0008  ld          $t7, 0x8($a0)
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125674: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x125674u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x125678: 0xdc8e0010  ld          $t6, 0x10($a0)
    ctx->pc = 0x125678u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12567c: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12567cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x125680: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x125680u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x125684: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x125684u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125688: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12568c: 0x3e00008  jr          $ra
    ctx->pc = 0x12568Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12568Cu;
            // 0x125690: 0xaccf0004  sw          $t7, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125694u;
label_125694:
    // 0x125694: 0x3e00008  jr          $ra
    ctx->pc = 0x125694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12569Cu;
label_12569c:
    // 0x12569c: 0x11e0fffd  beqz        $t7, . + 4 + (-0x3 << 2)
    ctx->pc = 0x12569Cu;
    {
        const bool branch_taken_0x12569c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12569Cu;
            // 0x1256a0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12569c) {
            ctx->pc = 0x125694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125694;
        }
    }
    ctx->pc = 0x1256A4u;
    // 0x1256a4: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x1256a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1256a8: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x1256a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1256ac: 0xdc8a0010  ld          $t2, 0x10($a0)
    ctx->pc = 0x1256acu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1256b0: 0x18d7823  subu        $t7, $t4, $t5
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1256b4: 0x5e20001  bltzl       $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x1256B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1256B4u;
            // 0x1256b8: 0xf7823  negu        $t7, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1256BCu;
            goto label_1256bc;
        }
    }
    ctx->pc = 0x1256BCu;
label_1256bc:
    // 0x1256bc: 0x29ef0040  slti        $t7, $t7, 0x40
    ctx->pc = 0x1256bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1256c0: 0x11e00052  beqz        $t7, . + 4 + (0x52 << 2)
    ctx->pc = 0x1256C0u;
    {
        const bool branch_taken_0x1256c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256C0u;
            // 0x1256c4: 0xdcab0010  ld          $t3, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256c0) {
            ctx->pc = 0x12580Cu;
            goto label_12580c;
        }
    }
    ctx->pc = 0x1256C8u;
    // 0x1256c8: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x1256c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1256cc: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1256CCu;
    {
        const bool branch_taken_0x1256cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256CCu;
            // 0x1256d0: 0x18d782a  slt         $t7, $t4, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256cc) {
            ctx->pc = 0x1256FCu;
            goto label_1256fc;
        }
    }
    ctx->pc = 0x1256D4u;
    // 0x1256d4: 0x18d6823  subu        $t5, $t4, $t5
    ctx->pc = 0x1256d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1256d8:
    // 0x1256d8: 0xb707a  dsrl        $t6, $t3, 1
    ctx->pc = 0x1256d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) >> 1);
    // 0x1256dc: 0x316f0001  andi        $t7, $t3, 0x1
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1256e0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1256e4: 0x0  nop
    ctx->pc = 0x1256e4u;
    // NOP
    // 0x1256e8: 0x0  nop
    ctx->pc = 0x1256e8u;
    // NOP
    // 0x1256ec: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1256ECu;
    {
        const bool branch_taken_0x1256ec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1256F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256ECu;
            // 0x1256f0: 0x1ee5825  or          $t3, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256ec) {
            ctx->pc = 0x1256D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1256d8;
        }
    }
    ctx->pc = 0x1256F4u;
    // 0x1256f4: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1256f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1256f8: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1256fc:
    // 0x1256fc: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1256FCu;
    {
        const bool branch_taken_0x1256fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1256fc) {
            ctx->pc = 0x125700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1256FCu;
            // 0x125700: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12572Cu;
            goto label_12572c;
        }
    }
    ctx->pc = 0x125704u;
    // 0x125704: 0x1ac6023  subu        $t4, $t5, $t4
    ctx->pc = 0x125704u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_125708:
    // 0x125708: 0xa707a  dsrl        $t6, $t2, 1
    ctx->pc = 0x125708u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 1);
    // 0x12570c: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x12570cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x125710: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x125710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x125714: 0x0  nop
    ctx->pc = 0x125714u;
    // NOP
    // 0x125718: 0x0  nop
    ctx->pc = 0x125718u;
    // NOP
    // 0x12571c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12571Cu;
    {
        const bool branch_taken_0x12571c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x125720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12571Cu;
            // 0x125720: 0x1ee5025  or          $t2, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12571c) {
            ctx->pc = 0x125708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125708;
        }
    }
    ctx->pc = 0x125724u;
    // 0x125724: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x125724u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_125728:
    // 0x125728: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x125728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12572c:
    // 0x12572c: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125730: 0x108f0030  beq         $a0, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x125730u;
    {
        const bool branch_taken_0x125730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125730u;
            // 0x125734: 0x14b782f  dsubu       $t7, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125730) {
            ctx->pc = 0x1257F4u;
            goto label_1257f4;
        }
    }
    ctx->pc = 0x125738u;
    // 0x125738: 0x16a702f  dsubu       $t6, $t3, $t2
    ctx->pc = 0x125738u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
    // 0x12573c: 0x1e4700a  movz        $t6, $t7, $a0
    ctx->pc = 0x12573cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x125740: 0x5c20027  bltzl       $t6, . + 4 + (0x27 << 2)
    ctx->pc = 0x125740u;
    {
        const bool branch_taken_0x125740 = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x125740) {
            ctx->pc = 0x125744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125740u;
            // 0x125744: 0xe702f  dsubu       $t6, $zero, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1257E0u;
            goto label_1257e0;
        }
    }
    ctx->pc = 0x125748u;
    // 0x125748: 0xaccc0008  sw          $t4, 0x8($a2)
    ctx->pc = 0x125748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 12));
    // 0x12574c: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12574cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x125750: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x125750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_125754:
    // 0x125754: 0xdccb0010  ld          $t3, 0x10($a2)
    ctx->pc = 0x125754u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125758: 0x240fffe0  addiu       $t7, $zero, -0x20
    ctx->pc = 0x125758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x12575c: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x12575cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x125760: 0x656effff  daddiu      $t6, $t3, -0x1
    ctx->pc = 0x125760u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)4294967295);
    // 0x125764: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x125764u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x125768: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x125768u;
    {
        const bool branch_taken_0x125768 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125768u;
            // 0x12576c: 0x160602d  daddu       $t4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125768) {
            ctx->pc = 0x1257A4u;
            goto label_1257a4;
        }
    }
    ctx->pc = 0x125770u;
    // 0x125770: 0x240bffe0  addiu       $t3, $zero, -0x20
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x125774: 0x8ccd0008  lw          $t5, 0x8($a2)
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x125778: 0xb593a  dsrl        $t3, $t3, 4
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
label_12577c:
    // 0x12577c: 0xc7078  dsll        $t6, $t4, 1
    ctx->pc = 0x12577cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 1);
    // 0x125780: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x125784: 0x65cfffff  daddiu      $t7, $t6, -0x1
    ctx->pc = 0x125784u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4294967295);
    // 0x125788: 0x16f782b  sltu        $t7, $t3, $t7
    ctx->pc = 0x125788u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12578c: 0x0  nop
    ctx->pc = 0x12578cu;
    // NOP
    // 0x125790: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125790u;
    {
        const bool branch_taken_0x125790 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125790u;
            // 0x125794: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125790) {
            ctx->pc = 0x12577Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12577c;
        }
    }
    ctx->pc = 0x125798u;
    // 0x125798: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x125798u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x12579c: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257a0: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x1257a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
label_1257a4:
    // 0x1257a4: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x1257a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1257a8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1257ac: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x1257acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x1257b0: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x1257b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1257b4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1257B4u;
    {
        const bool branch_taken_0x1257b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257B4u;
            // 0x1257b8: 0xacce0000  sw          $t6, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257b4) {
            ctx->pc = 0x1257D8u;
            goto label_1257d8;
        }
    }
    ctx->pc = 0x1257BCu;
    // 0x1257bc: 0x8ccf0008  lw          $t7, 0x8($a2)
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1257c0: 0xb687a  dsrl        $t5, $t3, 1
    ctx->pc = 0x1257c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) >> 1);
    // 0x1257c4: 0x316e0001  andi        $t6, $t3, 0x1
    ctx->pc = 0x1257c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1257c8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x1257c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1257cc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1257ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1257d0: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x1257d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x1257d4: 0xaccf0008  sw          $t7, 0x8($a2)
    ctx->pc = 0x1257d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 15));
label_1257d8:
    // 0x1257d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1257D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1257DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257D8u;
            // 0x1257dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1257E0u;
label_1257e0:
    // 0x1257e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1257e4: 0xaccf0004  sw          $t7, 0x4($a2)
    ctx->pc = 0x1257e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
    // 0x1257e8: 0xaccc0008  sw          $t4, 0x8($a2)
    ctx->pc = 0x1257e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 12));
    // 0x1257ec: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1257ECu;
    {
        const bool branch_taken_0x1257ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257ECu;
            // 0x1257f0: 0xfcce0010  sd          $t6, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257ec) {
            ctx->pc = 0x125754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125754;
        }
    }
    ctx->pc = 0x1257F4u;
label_1257f4:
    // 0x1257f4: 0x14b782d  daddu       $t7, $t2, $t3
    ctx->pc = 0x1257f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
    // 0x1257f8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1257f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1257fc: 0xaccc0008  sw          $t4, 0x8($a2)
    ctx->pc = 0x1257fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 12));
    // 0x125800: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x125800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125804: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x125804u;
    {
        const bool branch_taken_0x125804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125804u;
            // 0x125808: 0xfccf0010  sd          $t7, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125804) {
            ctx->pc = 0x1257A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1257a4;
        }
    }
    ctx->pc = 0x12580Cu;
label_12580c:
    // 0x12580c: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x12580cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x125810: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x125810u;
    {
        const bool branch_taken_0x125810 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125810) {
            ctx->pc = 0x125814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125810u;
            // 0x125814: 0x1a0602d  daddu       $t4, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125820u;
            goto label_125820;
        }
    }
    ctx->pc = 0x125818u;
    // 0x125818: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x125818u;
    {
        const bool branch_taken_0x125818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125818u;
            // 0x12581c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125818) {
            ctx->pc = 0x125728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125728;
        }
    }
    ctx->pc = 0x125820u;
label_125820:
    // 0x125820: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x125820u;
    {
        const bool branch_taken_0x125820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125820u;
            // 0x125824: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125820) {
            ctx->pc = 0x125728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125728;
        }
    }
    ctx->pc = 0x125828u;
}
