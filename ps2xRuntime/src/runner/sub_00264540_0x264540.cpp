#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264540
// Address: 0x264540 - 0x2646a0
void sub_00264540_0x264540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264540_0x264540");
#endif

    ctx->pc = 0x264540u;

    // 0x264540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264544: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x264544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x264548: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x264548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26454c: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x26454cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x264550: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x264550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264554: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x264554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264558: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x264558u;
    {
        const bool branch_taken_0x264558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264558u;
            // 0x26455c: 0x948a002c  lhu         $t2, 0x2C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264558) {
            ctx->pc = 0x2645E0u;
            goto label_2645e0;
        }
    }
    ctx->pc = 0x264560u;
    // 0x264560: 0x9486003c  lhu         $a2, 0x3C($a0)
    ctx->pc = 0x264560u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x264564: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x264564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x264568: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x264568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26456c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x26456cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x264570: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x264570u;
    {
        const bool branch_taken_0x264570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264570u;
            // 0x264574: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264570) {
            ctx->pc = 0x264588u;
            goto label_264588;
        }
    }
    ctx->pc = 0x264578u;
    // 0x264578: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x264578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26457c: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x26457cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x264580: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x264580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x264584: 0x0  nop
    ctx->pc = 0x264584u;
    // NOP
label_264588:
    // 0x264588: 0x28e10003  slti        $at, $a3, 0x3
    ctx->pc = 0x264588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26458c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x26458Cu;
    {
        const bool branch_taken_0x26458c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26458c) {
            ctx->pc = 0x2645D8u;
            goto label_2645d8;
        }
    }
    ctx->pc = 0x264594u;
    // 0x264594: 0x9486004c  lhu         $a2, 0x4C($a0)
    ctx->pc = 0x264594u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x264598: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x264598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x26459c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x26459cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2645a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2645A0u;
    {
        const bool branch_taken_0x2645a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645A0u;
            // 0x2645a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645a0) {
            ctx->pc = 0x2645B8u;
            goto label_2645b8;
        }
    }
    ctx->pc = 0x2645A8u;
    // 0x2645a8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2645a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645ac: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2645b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2645b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2645b4: 0x0  nop
    ctx->pc = 0x2645b4u;
    // NOP
label_2645b8:
    // 0x2645b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2645b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2645bc: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2645BCu;
    {
        const bool branch_taken_0x2645bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x2645C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645BCu;
            // 0x2645c0: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645bc) {
            ctx->pc = 0x2645D0u;
            goto label_2645d0;
        }
    }
    ctx->pc = 0x2645C4u;
    // 0x2645c4: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2645c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2645c8: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x2645c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2645cc: 0x0  nop
    ctx->pc = 0x2645ccu;
    // NOP
label_2645d0:
    // 0x2645d0: 0xa4a70004  sh          $a3, 0x4($a1)
    ctx->pc = 0x2645d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2645d4: 0x0  nop
    ctx->pc = 0x2645d4u;
    // NOP
label_2645d8:
    // 0x2645d8: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x2645d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x2645dc: 0x0  nop
    ctx->pc = 0x2645dcu;
    // NOP
label_2645e0:
    // 0x2645e0: 0xa4aa0000  sh          $t2, 0x0($a1)
    ctx->pc = 0x2645e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2645e4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2645e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2645e8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x2645e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2645ec: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2645ECu;
    {
        const bool branch_taken_0x2645ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2645F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645ECu;
            // 0x2645f0: 0x948a00ec  lhu         $t2, 0xEC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645ec) {
            ctx->pc = 0x264680u;
            goto label_264680;
        }
    }
    ctx->pc = 0x2645F4u;
    // 0x2645f4: 0x948600fc  lhu         $a2, 0xFC($a0)
    ctx->pc = 0x2645f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2645f8: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x2645f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2645fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2645fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264600: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x264600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x264604: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x264604u;
    {
        const bool branch_taken_0x264604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264604u;
            // 0x264608: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264604) {
            ctx->pc = 0x264618u;
            goto label_264618;
        }
    }
    ctx->pc = 0x26460Cu;
    // 0x26460c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x26460cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264610: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x264610u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x264614: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_264618:
    // 0x264618: 0x28e10003  slti        $at, $a3, 0x3
    ctx->pc = 0x264618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26461c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x26461Cu;
    {
        const bool branch_taken_0x26461c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26461c) {
            ctx->pc = 0x264670u;
            goto label_264670;
        }
    }
    ctx->pc = 0x264624u;
    // 0x264624: 0x9486010c  lhu         $a2, 0x10C($a0)
    ctx->pc = 0x264624u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x264628: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x264628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x26462c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x26462cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x264630: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x264630u;
    {
        const bool branch_taken_0x264630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264630u;
            // 0x264634: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264630) {
            ctx->pc = 0x264648u;
            goto label_264648;
        }
    }
    ctx->pc = 0x264638u;
    // 0x264638: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x264638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26463c: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x26463cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x264640: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x264640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x264644: 0x0  nop
    ctx->pc = 0x264644u;
    // NOP
label_264648:
    // 0x264648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x264648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26464c: 0x15230004  bne         $t1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26464Cu;
    {
        const bool branch_taken_0x26464c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x264650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26464Cu;
            // 0x264650: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26464c) {
            ctx->pc = 0x264660u;
            goto label_264660;
        }
    }
    ctx->pc = 0x264654u;
    // 0x264654: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x264654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x264658: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x264658u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26465c: 0x0  nop
    ctx->pc = 0x26465cu;
    // NOP
label_264660:
    // 0x264660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264664: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x264664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x264668: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x264668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26466c: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x26466cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
label_264670:
    // 0x264670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264674: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x264678: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x264678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26467c: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x26467cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
label_264680:
    // 0x264680: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x264680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264684: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x264684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x264688: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x264688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26468c: 0x3e00008  jr          $ra
    ctx->pc = 0x26468Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26468Cu;
            // 0x264690: 0xa46a0000  sh          $t2, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264694u;
    // 0x264694: 0x0  nop
    ctx->pc = 0x264694u;
    // NOP
    // 0x264698: 0x0  nop
    ctx->pc = 0x264698u;
    // NOP
    // 0x26469c: 0x0  nop
    ctx->pc = 0x26469cu;
    // NOP
}
