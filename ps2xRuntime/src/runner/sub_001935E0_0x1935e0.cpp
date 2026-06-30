#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001935E0
// Address: 0x1935e0 - 0x193b20
void sub_001935E0_0x1935e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001935E0_0x1935e0");
#endif

    switch (ctx->pc) {
        case 0x193898u: goto label_193898;
        case 0x193a30u: goto label_193a30;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a74u: goto label_193a74;
        case 0x193a88u: goto label_193a88;
        default: break;
    }

    ctx->pc = 0x1935e0u;

    // 0x1935e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1935e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1935e4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1935e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1935e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1935e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1935ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1935ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1935f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1935f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1935f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1935f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1935fc: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x1935fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x193600: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193604: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x193604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x193608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19360c: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x19360cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193610: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x193610u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193614: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193618: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193618u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19361c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19361cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193620: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x193620u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193624: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193628: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x193628u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19362c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19362cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193630: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193630u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193634: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193638: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19363c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19363cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193640: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x193640u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x193644: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193648: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x193648u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x19364c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19364cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193650: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193654: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x193658: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19365c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19365cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193660: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x193660u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x193664: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193668: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19366c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x193670: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193674: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x193674u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x193678: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19367c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19367cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193680: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x193684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193680u;
            // 0x193684: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193680) {
            ctx->pc = 0x1936A0u;
            goto label_1936a0;
        }
    }
    ctx->pc = 0x193688u;
    // 0x193688: 0x91023  negu        $v0, $t1
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x19368c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x19368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193690: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x193690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x193694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193694u;
    {
        const bool branch_taken_0x193694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193694u;
            // 0x193698: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193694) {
            ctx->pc = 0x1936A8u;
            goto label_1936a8;
        }
    }
    ctx->pc = 0x19369Cu;
    // 0x19369c: 0x0  nop
    ctx->pc = 0x19369cu;
    // NOP
label_1936a0:
    // 0x1936a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1936a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936a4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1936a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1936a8:
    // 0x1936a8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1936a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1936ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1936acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1936b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1936b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1936b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1936b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1936b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1936b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1936bc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1936bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1936c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1936c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1936c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1936c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1936cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1936ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1936d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1936d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1936d4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1936d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1936dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1936e0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1936e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1936e4: 0x14a40106  bne         $a1, $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1936E4u;
    {
        const bool branch_taken_0x1936e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1936E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936E4u;
            // 0x1936e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936e4) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x1936ECu;
    // 0x1936ec: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1936ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1936f0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1936F0u;
    {
        const bool branch_taken_0x1936f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1936f0) {
            ctx->pc = 0x1936F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1936F0u;
            // 0x1936f4: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193748u;
            goto label_193748;
        }
    }
    ctx->pc = 0x1936F8u;
    // 0x1936f8: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1936fc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1936fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193700: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x193700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x193704: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193708: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x193708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x19370c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19370cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193710: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x193710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x193714: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193714u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193718: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19371c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19371cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193720: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193720u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193724: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193728: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19372c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19372cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193730: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193734: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193738: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19373c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193740u;
    {
        const bool branch_taken_0x193740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193740u;
            // 0x193744: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193740) {
            ctx->pc = 0x19374Cu;
            goto label_19374c;
        }
    }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_19374c:
    // 0x19374c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x19374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x193750: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x193750u;
    {
        const bool branch_taken_0x193750 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x193754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193750u;
            // 0x193754: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193750) {
            ctx->pc = 0x1937A0u;
            goto label_1937a0;
        }
    }
    ctx->pc = 0x193758u;
    // 0x193758: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x193758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19375c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19375cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193760: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193764: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193768: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19376c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19376cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193770: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193774: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193778: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19377c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193780: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193784: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193788: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19378c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19378cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193790: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193794: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193794u;
    {
        const bool branch_taken_0x193794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193794u;
            // 0x193798: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193794) {
            ctx->pc = 0x1937A8u;
            goto label_1937a8;
        }
    }
    ctx->pc = 0x19379Cu;
    // 0x19379c: 0x0  nop
    ctx->pc = 0x19379cu;
    // NOP
label_1937a0:
    // 0x1937a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1937a4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1937a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1937a8:
    // 0x1937a8: 0x14a000d5  bnez        $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1937A8u;
    {
        const bool branch_taken_0x1937a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1937ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937A8u;
            // 0x1937ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937a8) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x1937B0u;
    // 0x1937b0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1937b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1937b4: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1937B4u;
    {
        const bool branch_taken_0x1937b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1937B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937B4u;
            // 0x1937b8: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937b4) {
            ctx->pc = 0x193800u;
            goto label_193800;
        }
    }
    ctx->pc = 0x1937BCu;
    // 0x1937bc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1937bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937c0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1937c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1937c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1937c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1937c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1937c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1937ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1937d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1937d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1937d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1937d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1937d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1937dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1937dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1937e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1937e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1937e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1937e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1937ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1937ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1937f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1937f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1937f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1937f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1937f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1937F8u;
    {
        const bool branch_taken_0x1937f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937F8u;
            // 0x1937fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937f8) {
            ctx->pc = 0x193808u;
            goto label_193808;
        }
    }
    ctx->pc = 0x193800u;
label_193800:
    // 0x193800: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x193804: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_193808:
    // 0x193808: 0x10a000bd  beqz        $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x193808u;
    {
        const bool branch_taken_0x193808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193808u;
            // 0x19380c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193808) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193810u;
    // 0x193810: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x193810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x193814: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193814u;
    {
        const bool branch_taken_0x193814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193814u;
            // 0x193818: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193814) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x19381Cu;
    // 0x19381c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x19381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x193820: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x193824: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x193824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193828: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x193828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19382c:
    // 0x19382c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x193830: 0x14a300b3  bne         $a1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x193830u;
    {
        const bool branch_taken_0x193830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x193834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193830u;
            // 0x193834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193830) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193838u;
    // 0x193838: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x193838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x19383c: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x19383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x193840: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x193840u;
    {
        const bool branch_taken_0x193840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193840) {
            ctx->pc = 0x193844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193840u;
            // 0x193844: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193888u;
            goto label_193888;
        }
    }
    ctx->pc = 0x193848u;
    // 0x193848: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x193848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x19384c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x193850: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193854: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193858: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19385c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193860: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193864: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193864u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193868: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19386c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193870: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193870u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193874: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193878: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19387c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19387cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193880: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193880u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193884: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_193888:
    // 0x193888: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x193888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19388c: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x193890: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x193894: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x193894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_193898:
    // 0x193898: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193898u;
    {
        const bool branch_taken_0x193898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193898u;
            // 0x19389c: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193898) {
            ctx->pc = 0x1938ACu;
            goto label_1938ac;
        }
    }
    ctx->pc = 0x1938A0u;
    // 0x1938a0: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x1938a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1938a4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1938a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1938a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1938a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1938ac:
    // 0x1938ac: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1938ACu;
    {
        const bool branch_taken_0x1938ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1938B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1938ACu;
            // 0x1938b0: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938ac) {
            ctx->pc = 0x193918u;
            goto label_193918;
        }
    }
    ctx->pc = 0x1938B4u;
    // 0x1938b4: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x1938b8: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1938b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1938bc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1938BCu;
    {
        const bool branch_taken_0x1938bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1938bc) {
            ctx->pc = 0x1938C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1938BCu;
            // 0x1938c0: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193904u;
            goto label_193904;
        }
    }
    ctx->pc = 0x1938C4u;
    // 0x1938c4: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1938c8: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1938cc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1938d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1938d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1938d4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1938d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1938d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1938d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1938dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1938dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1938e0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1938e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1938e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1938e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1938e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1938e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1938ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1938f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1938f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1938f4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1938f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1938f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1938f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1938fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193900: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_193904:
    // 0x193904: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x193904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x193908: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x193908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x19390c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x19390Cu;
    {
        const bool branch_taken_0x19390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19390Cu;
            // 0x193910: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19390c) {
            ctx->pc = 0x193898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193898;
        }
    }
    ctx->pc = 0x193914u;
    // 0x193914: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x193914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_193918:
    // 0x193918: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x193918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x19391c: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x19391Cu;
    {
        const bool branch_taken_0x19391c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19391Cu;
            // 0x193920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19391c) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193924u;
    // 0x193924: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x193924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x193928: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19392c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x19392cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x193930: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x193934: 0x84c68338  lh          $a2, -0x7CC8($a2)
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294935352)));
    // 0x193938: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19393c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193940: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x193940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x193944: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x193944u;
    {
        const bool branch_taken_0x193944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193944u;
            // 0x193948: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193944) {
            ctx->pc = 0x1939B0u;
            goto label_1939b0;
        }
    }
    ctx->pc = 0x19394Cu;
    // 0x19394c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x193950: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x193954: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x193954u;
    {
        const bool branch_taken_0x193954 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x193954) {
            ctx->pc = 0x193958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193954u;
            // 0x193958: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193970u;
            goto label_193970;
        }
    }
    ctx->pc = 0x19395Cu;
    // 0x19395c: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x193960: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193964: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x193964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x193968: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x193968u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x19396c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_193970:
    // 0x193970: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193974: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193978: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19397c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19397cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193980: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193984: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193988: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19398c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19398cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193990: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193990u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193994: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193998: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19399c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19399cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1939a0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1939a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1939a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1939A4u;
    {
        const bool branch_taken_0x1939a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939A4u;
            // 0x1939a8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939a4) {
            ctx->pc = 0x1939B8u;
            goto label_1939b8;
        }
    }
    ctx->pc = 0x1939ACu;
    // 0x1939ac: 0x0  nop
    ctx->pc = 0x1939acu;
    // NOP
label_1939b0:
    // 0x1939b0: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x1939b4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1939b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1939b8:
    // 0x1939b8: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1939bc: 0x14a30050  bne         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1939BCu;
    {
        const bool branch_taken_0x1939bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1939C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939BCu;
            // 0x1939c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939bc) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x1939C4u;
    // 0x1939c4: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x1939c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1939c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1939C8u;
    {
        const bool branch_taken_0x1939c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1939CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939C8u;
            // 0x1939cc: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939c8) {
            ctx->pc = 0x1939E0u;
            goto label_1939e0;
        }
    }
    ctx->pc = 0x1939D0u;
    // 0x1939d0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1939d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1939d4: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1939d8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1939d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1939dc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1939dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1939e0:
    // 0x1939e0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1939e4: 0x14a30046  bne         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1939E4u;
    {
        const bool branch_taken_0x1939e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1939E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939E4u;
            // 0x1939e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939e4) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x1939ECu;
    // 0x1939ec: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1939ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1939f0: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1939f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1939f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939F4u;
            // 0x1939f8: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A08u;
            goto label_193a08;
        }
    }
    ctx->pc = 0x1939FCu;
    // 0x1939fc: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1939fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x193a00: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x193a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x193a04: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x193a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_193a08:
    // 0x193a08: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x193a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x193a0c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x193a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x193a10: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x193a14: 0x912823  subu        $a1, $a0, $s1
    ctx->pc = 0x193a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x193a18: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x193a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x193a1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193A1Cu;
    {
        const bool branch_taken_0x193a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A1Cu;
            // 0x193a20: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a1c) {
            ctx->pc = 0x193A68u;
            goto label_193a68;
        }
    }
    ctx->pc = 0x193A24u;
    // 0x193a24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x193A24u;
    {
        const bool branch_taken_0x193a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A24u;
            // 0x193a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a24) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A2Cu;
    // 0x193a2c: 0x0  nop
    ctx->pc = 0x193a2cu;
    // NOP
label_193a30:
    // 0x193a30: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x193a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x193a34: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x193A34u;
    {
        const bool branch_taken_0x193a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A34u;
            // 0x193a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a34) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A3Cu;
    // 0x193a3c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x193a3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x193a40: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x193a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x193a44: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x193A44u;
    {
        const bool branch_taken_0x193a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A44u;
            // 0x193a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a44) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x193a50: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x193a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x193a54: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x193a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x193a58: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x193A58u;
    {
        const bool branch_taken_0x193a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a58) {
            ctx->pc = 0x193A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193A58u;
            // 0x193a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A60u;
    // 0x193a60: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x193A60u;
    {
        const bool branch_taken_0x193a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A60u;
            // 0x193a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a60) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A68u;
label_193a68:
    // 0x193a68: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_193a6c:
    // 0x193a6c: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x193A6Cu;
    SET_GPR_U32(ctx, 31, 0x193A74u);
    ctx->pc = 0x193A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A6Cu;
            // 0x193a70: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A74u; }
        if (ctx->pc != 0x193A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A74u; }
        if (ctx->pc != 0x193A74u) { return; }
    }
    ctx->pc = 0x193A74u;
label_193a74:
    // 0x193a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a78: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x193A78u;
    {
        const bool branch_taken_0x193a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A78u;
            // 0x193a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a78) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193A80u;
    // 0x193a80: 0xc064b62  jal         func_192D88
    ctx->pc = 0x193A80u;
    SET_GPR_U32(ctx, 31, 0x193A88u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A88u; }
        if (ctx->pc != 0x193A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A88u; }
        if (ctx->pc != 0x193A88u) { return; }
    }
    ctx->pc = 0x193A88u;
label_193a88:
    // 0x193a88: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x193a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193a8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x193a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a90: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x193a94: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x193a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x193a98: 0x30c80040  andi        $t0, $a2, 0x40
    ctx->pc = 0x193a98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x193a9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x193a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193aa0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x193AA0u;
    {
        const bool branch_taken_0x193aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AA0u;
            // 0x193aa4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193aa0) {
            ctx->pc = 0x193AD0u;
            goto label_193ad0;
        }
    }
    ctx->pc = 0x193AA8u;
    // 0x193aa8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x193aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x193aac: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x193aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x193ab0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x193ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x193ab4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x193ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x193ab8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x193ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x193abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x193ac0: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x193AC0u;
    {
        const bool branch_taken_0x193ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x193AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AC0u;
            // 0x193ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ac0) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193AC8u;
    // 0x193ac8: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x193AC8u;
    {
        const bool branch_taken_0x193ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AC8u;
            // 0x193acc: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ac8) {
            ctx->pc = 0x193A6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193a6c;
        }
    }
    ctx->pc = 0x193AD0u;
label_193ad0:
    // 0x193ad0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193AD0u;
    {
        const bool branch_taken_0x193ad0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AD0u;
            // 0x193ad4: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ad0) {
            ctx->pc = 0x193AE0u;
            goto label_193ae0;
        }
    }
    ctx->pc = 0x193AD8u;
    // 0x193ad8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x193AD8u;
    {
        const bool branch_taken_0x193ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AD8u;
            // 0x193adc: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ad8) {
            ctx->pc = 0x193A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193a68;
        }
    }
    ctx->pc = 0x193AE0u;
label_193ae0:
    // 0x193ae0: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x193ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x193ae4: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x193AE4u;
    {
        const bool branch_taken_0x193ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AE4u;
            // 0x193ae8: 0x2112023  subu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ae4) {
            ctx->pc = 0x193A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193a30;
        }
    }
    ctx->pc = 0x193AECu;
    // 0x193aec: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x193af0: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x193af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x193af4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x193AF4u;
    {
        const bool branch_taken_0x193af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AF4u;
            // 0x193af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193af4) {
            ctx->pc = 0x193B00u;
            goto label_193b00;
        }
    }
    ctx->pc = 0x193AFCu;
    // 0x193afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193b00:
    // 0x193b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193b14: 0x3e00008  jr          $ra
    ctx->pc = 0x193B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B14u;
            // 0x193b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193B1Cu;
    // 0x193b1c: 0x0  nop
    ctx->pc = 0x193b1cu;
    // NOP
}
