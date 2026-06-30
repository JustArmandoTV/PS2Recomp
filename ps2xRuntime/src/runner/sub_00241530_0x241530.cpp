#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241530
// Address: 0x241530 - 0x241770
void sub_00241530_0x241530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241530_0x241530");
#endif

    switch (ctx->pc) {
        case 0x241560u: goto label_241560;
        case 0x241570u: goto label_241570;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415f8u: goto label_2415f8;
        case 0x241678u: goto label_241678;
        case 0x2416d0u: goto label_2416d0;
        case 0x2416e4u: goto label_2416e4;
        default: break;
    }

    ctx->pc = 0x241530u;

    // 0x241530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x241534: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x241538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x241538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24153c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x241540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241544: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24154c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x241550: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x241550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x241554: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x241554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x241558: 0xc0909b4  jal         func_2426D0
    ctx->pc = 0x241558u;
    SET_GPR_U32(ctx, 31, 0x241560u);
    ctx->pc = 0x24155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241558u;
            // 0x24155c: 0x24c61720  addiu       $a2, $a2, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2426D0u;
    if (runtime->hasFunction(0x2426D0u)) {
        auto targetFn = runtime->lookupFunction(0x2426D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241560u; }
        if (ctx->pc != 0x241560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002426D0_0x2426d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241560u; }
        if (ctx->pc != 0x241560u) { return; }
    }
    ctx->pc = 0x241560u;
label_241560:
    // 0x241560: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x241560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x241564: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x241564u;
    {
        const bool branch_taken_0x241564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241564) {
            ctx->pc = 0x2416F8u;
            goto label_2416f8;
        }
    }
    ctx->pc = 0x24156Cu;
    // 0x24156c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x24156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_241570:
    // 0x241570: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x241570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x241574: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241578: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24157c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x241580: 0x8c92fffc  lw          $s2, -0x4($a0)
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x241584: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x241584u;
    {
        const bool branch_taken_0x241584 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x241588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241584u;
            // 0x241588: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241584) {
            ctx->pc = 0x2416E8u;
            goto label_2416e8;
        }
    }
    ctx->pc = 0x24158Cu;
    // 0x24158c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241590: 0xa6430022  sh          $v1, 0x22($s2)
    ctx->pc = 0x241590u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x241594: 0x92430027  lbu         $v1, 0x27($s2)
    ctx->pc = 0x241594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x241598: 0x31ebc  dsll32      $v1, $v1, 26
    ctx->pc = 0x241598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 26));
    // 0x24159c: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x24159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
    // 0x2415a0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2415A0u;
    {
        const bool branch_taken_0x2415a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415a0) {
            ctx->pc = 0x2416A0u;
            goto label_2416a0;
        }
    }
    ctx->pc = 0x2415A8u;
    // 0x2415a8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2415a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2415ac: 0x2651003c  addiu       $s1, $s2, 0x3C
    ctx->pc = 0x2415acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x2415b0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2415b4: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2415B4u;
    {
        const bool branch_taken_0x2415b4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2415B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415B4u;
            // 0x2415b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415b4) {
            ctx->pc = 0x2415E8u;
            goto label_2415e8;
        }
    }
    ctx->pc = 0x2415BCu;
    // 0x2415bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2415bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2415c0:
    // 0x2415c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2415c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2415c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2415C4u;
    {
        const bool branch_taken_0x2415c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2415c4) {
            ctx->pc = 0x2415D8u;
            goto label_2415d8;
        }
    }
    ctx->pc = 0x2415CCu;
    // 0x2415cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2415ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2415D0u;
    {
        const bool branch_taken_0x2415d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415D0u;
            // 0x2415d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415d0) {
            ctx->pc = 0x2415E8u;
            goto label_2415e8;
        }
    }
    ctx->pc = 0x2415D8u;
label_2415d8:
    // 0x2415d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2415d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2415dc: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x2415dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2415e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2415E0u;
    {
        const bool branch_taken_0x2415e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2415E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415E0u;
            // 0x2415e4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415e0) {
            ctx->pc = 0x2415C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2415c0;
        }
    }
    ctx->pc = 0x2415E8u;
label_2415e8:
    // 0x2415e8: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x2415e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2415ec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2415ECu;
    {
        const bool branch_taken_0x2415ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415ec) {
            ctx->pc = 0x241638u;
            goto label_241638;
        }
    }
    ctx->pc = 0x2415F4u;
    // 0x2415f4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2415f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2415f8:
    // 0x2415f8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2415fc: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2415fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x241600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241604: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241604u;
    {
        const bool branch_taken_0x241604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241604) {
            ctx->pc = 0x241620u;
            goto label_241620;
        }
    }
    ctx->pc = 0x24160Cu;
    // 0x24160c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x241610: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x241610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x241614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241618: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x241618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x24161c: 0x0  nop
    ctx->pc = 0x24161cu;
    // NOP
label_241620:
    // 0x241620: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x241620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x241624: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241628: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x241628u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24162c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x24162Cu;
    {
        const bool branch_taken_0x24162c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24162Cu;
            // 0x241630: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24162c) {
            ctx->pc = 0x2415F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2415f8;
        }
    }
    ctx->pc = 0x241634u;
    // 0x241634: 0x0  nop
    ctx->pc = 0x241634u;
    // NOP
label_241638:
    // 0x241638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x241638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24163c: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24163Cu;
    {
        const bool branch_taken_0x24163c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x24163c) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x241644u;
    // 0x241644: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x241644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241648: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x241648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x24164c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x24164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x241650: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x241650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x241654: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x241654u;
    {
        const bool branch_taken_0x241654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241654) {
            ctx->pc = 0x241678u;
            goto label_241678;
        }
    }
    ctx->pc = 0x24165Cu;
    // 0x24165c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x24165cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x241660: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x241660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x241664: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x241664u;
    {
        const bool branch_taken_0x241664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241664) {
            ctx->pc = 0x241668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241664u;
            // 0x241668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24166Cu;
            goto label_24166c;
        }
    }
    ctx->pc = 0x24166Cu;
label_24166c:
    // 0x24166c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241670: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x241670u;
    SET_GPR_U32(ctx, 31, 0x241678u);
    ctx->pc = 0x241674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241670u;
            // 0x241674: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241678u; }
        if (ctx->pc != 0x241678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241678u; }
        if (ctx->pc != 0x241678u) { return; }
    }
    ctx->pc = 0x241678u;
label_241678:
    // 0x241678: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x241678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x24167c: 0x0  nop
    ctx->pc = 0x24167cu;
    // NOP
label_241680:
    // 0x241680: 0x92450027  lbu         $a1, 0x27($s2)
    ctx->pc = 0x241680u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x241684: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x241684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x241688: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x24168c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x24168cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x241690: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x241690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x241694: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x241694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x241698: 0xa2430027  sb          $v1, 0x27($s2)
    ctx->pc = 0x241698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x24169c: 0x0  nop
    ctx->pc = 0x24169cu;
    // NOP
label_2416a0:
    // 0x2416a0: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x2416a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2416a4: 0x3273c  dsll32      $a0, $v1, 28
    ctx->pc = 0x2416a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 28));
    // 0x2416a8: 0x427be  dsrl32      $a0, $a0, 30
    ctx->pc = 0x2416a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 30));
    // 0x2416ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2416acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2416b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2416b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2416b4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2416B4u;
    {
        const bool branch_taken_0x2416b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2416b4) {
            ctx->pc = 0x2416E8u;
            goto label_2416e8;
        }
    }
    ctx->pc = 0x2416BCu;
    // 0x2416bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2416BCu;
    {
        const bool branch_taken_0x2416bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416bc) {
            ctx->pc = 0x2416D8u;
            goto label_2416d8;
        }
    }
    ctx->pc = 0x2416C4u;
    // 0x2416c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2416c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416c8: 0xc0905dc  jal         func_241770
    ctx->pc = 0x2416C8u;
    SET_GPR_U32(ctx, 31, 0x2416D0u);
    ctx->pc = 0x2416CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2416C8u;
            // 0x2416cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241770u;
    if (runtime->hasFunction(0x241770u)) {
        auto targetFn = runtime->lookupFunction(0x241770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416D0u; }
        if (ctx->pc != 0x2416D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241770_0x241770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416D0u; }
        if (ctx->pc != 0x2416D0u) { return; }
    }
    ctx->pc = 0x2416D0u;
label_2416d0:
    // 0x2416d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2416D0u;
    {
        const bool branch_taken_0x2416d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416d0) {
            ctx->pc = 0x2416E8u;
            goto label_2416e8;
        }
    }
    ctx->pc = 0x2416D8u;
label_2416d8:
    // 0x2416d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2416d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416dc: 0xc090668  jal         func_2419A0
    ctx->pc = 0x2416DCu;
    SET_GPR_U32(ctx, 31, 0x2416E4u);
    ctx->pc = 0x2416E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2416DCu;
            // 0x2416e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2419A0u;
    if (runtime->hasFunction(0x2419A0u)) {
        auto targetFn = runtime->lookupFunction(0x2419A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416E4u; }
        if (ctx->pc != 0x2416E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002419A0_0x2419a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416E4u; }
        if (ctx->pc != 0x2416E4u) { return; }
    }
    ctx->pc = 0x2416E4u;
label_2416e4:
    // 0x2416e4: 0x0  nop
    ctx->pc = 0x2416e4u;
    // NOP
label_2416e8:
    // 0x2416e8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x2416e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2416ec: 0x5460ffa0  bnel        $v1, $zero, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2416ECu;
    {
        const bool branch_taken_0x2416ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2416ec) {
            ctx->pc = 0x2416F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2416ECu;
            // 0x2416f0: 0x8e630044  lw          $v1, 0x44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241570;
        }
    }
    ctx->pc = 0x2416F4u;
    // 0x2416f4: 0x0  nop
    ctx->pc = 0x2416f4u;
    // NOP
label_2416f8:
    // 0x2416f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2416f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2416fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2416fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24170c: 0x3e00008  jr          $ra
    ctx->pc = 0x24170Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24170Cu;
            // 0x241710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241714u;
    // 0x241714: 0x0  nop
    ctx->pc = 0x241714u;
    // NOP
    // 0x241718: 0x0  nop
    ctx->pc = 0x241718u;
    // NOP
    // 0x24171c: 0x0  nop
    ctx->pc = 0x24171cu;
    // NOP
    // 0x241720: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x241720u;
    {
        const bool branch_taken_0x241720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x241720) {
            ctx->pc = 0x241730u;
            goto label_241730;
        }
    }
    ctx->pc = 0x241728u;
    // 0x241728: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x241728u;
    {
        const bool branch_taken_0x241728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241728u;
            // 0x24172c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241728) {
            ctx->pc = 0x241760u;
            goto label_241760;
        }
    }
    ctx->pc = 0x241730u;
label_241730:
    // 0x241730: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x241730u;
    {
        const bool branch_taken_0x241730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x241730) {
            ctx->pc = 0x241734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241730u;
            // 0x241734: 0x8ca5004c  lw          $a1, 0x4C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241744u;
            goto label_241744;
        }
    }
    ctx->pc = 0x241738u;
    // 0x241738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24173c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24173Cu;
    {
        const bool branch_taken_0x24173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24173Cu;
            // 0x241740: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24173c) {
            ctx->pc = 0x241760u;
            goto label_241760;
        }
    }
    ctx->pc = 0x241744u;
label_241744:
    // 0x241744: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x241744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x241748: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24174c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241750: 0x8ca5009c  lw          $a1, 0x9C($a1)
    ctx->pc = 0x241750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x241754: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x241758: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x241758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24175c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x24175cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_241760:
    // 0x241760: 0x3e00008  jr          $ra
    ctx->pc = 0x241760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241768u;
    // 0x241768: 0x0  nop
    ctx->pc = 0x241768u;
    // NOP
    // 0x24176c: 0x0  nop
    ctx->pc = 0x24176cu;
    // NOP
}
