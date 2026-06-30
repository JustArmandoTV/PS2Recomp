#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C4550
// Address: 0x4c4550 - 0x4c4760
void sub_004C4550_0x4c4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4550_0x4c4550");
#endif

    switch (ctx->pc) {
        case 0x4c4580u: goto label_4c4580;
        case 0x4c45d4u: goto label_4c45d4;
        case 0x4c4650u: goto label_4c4650;
        case 0x4c4670u: goto label_4c4670;
        case 0x4c4684u: goto label_4c4684;
        case 0x4c4690u: goto label_4c4690;
        case 0x4c4694u: goto label_4c4694;
        case 0x4c46b8u: goto label_4c46b8;
        case 0x4c4704u: goto label_4c4704;
        default: break;
    }

    ctx->pc = 0x4c4550u;

    // 0x4c4550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4c4554: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4c4554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c4558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4c455c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4c4560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c4560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4c4564: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c4564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c456c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c4570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c4570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4574: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4c4574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4578: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4C4578u;
    SET_GPR_U32(ctx, 31, 0x4C4580u);
    ctx->pc = 0x4C457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4578u;
            // 0x4c457c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4580u; }
        if (ctx->pc != 0x4C4580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4580u; }
        if (ctx->pc != 0x4C4580u) { return; }
    }
    ctx->pc = 0x4C4580u;
label_4c4580:
    // 0x4c4580: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c4580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4c4584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c4584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4c4588: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4c458c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4c4590: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c4590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c4594: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4c4594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4c4598: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c4598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4c459c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c45a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4c45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4c45a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4c45a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4c45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4c45ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4c45acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4c45b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4c45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4c45b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4c45b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4c45b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4c45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4c45bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4c45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4c45c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4c45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4c45c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c45c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4c45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4c45cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4C45CCu;
    SET_GPR_U32(ctx, 31, 0x4C45D4u);
    ctx->pc = 0x4C45D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C45CCu;
            // 0x4c45d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C45D4u; }
        if (ctx->pc != 0x4C45D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C45D4u; }
        if (ctx->pc != 0x4C45D4u) { return; }
    }
    ctx->pc = 0x4C45D4u;
label_4c45d4:
    // 0x4c45d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c45d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4c45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4c45dc: 0x24631620  addiu       $v1, $v1, 0x1620
    ctx->pc = 0x4c45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
    // 0x4c45e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4c45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4c45e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4c45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4c45e8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c45ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c45f0: 0xac44a9f8  sw          $a0, -0x5608($v0)
    ctx->pc = 0x4c45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945272), GPR_U32(ctx, 4));
    // 0x4c45f4: 0x24631630  addiu       $v1, $v1, 0x1630
    ctx->pc = 0x4c45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5680));
    // 0x4c45f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c45fc: 0x24421668  addiu       $v0, $v0, 0x1668
    ctx->pc = 0x4c45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
    // 0x4c4600: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c4600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4c4604: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4c4604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4c4608: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4c4608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4c460c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4c460cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4c4610: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4c4610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4c4614: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4c4614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4c4618: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4c4618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4c461c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4c461cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4c4620: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4c4620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4c4624: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4c4624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4c4628: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4c4628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4c462c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4c462cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4c4630: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4c4630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4c4634: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4C4634u;
    {
        const bool branch_taken_0x4c4634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4634) {
            ctx->pc = 0x4C46C8u;
            goto label_4c46c8;
        }
    }
    ctx->pc = 0x4C463Cu;
    // 0x4c463c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4c463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x4c4640: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4c4644: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4c4648: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4C4648u;
    SET_GPR_U32(ctx, 31, 0x4C4650u);
    ctx->pc = 0x4C464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4648u;
            // 0x4c464c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4650u; }
        if (ctx->pc != 0x4C4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4650u; }
        if (ctx->pc != 0x4C4650u) { return; }
    }
    ctx->pc = 0x4C4650u;
label_4c4650:
    // 0x4c4650: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c4650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c4654: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4c4654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4c4658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c465c: 0x24a546f0  addiu       $a1, $a1, 0x46F0
    ctx->pc = 0x4c465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18160));
    // 0x4c4660: 0x24c63fd0  addiu       $a2, $a2, 0x3FD0
    ctx->pc = 0x4c4660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16336));
    // 0x4c4664: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x4c4664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x4c4668: 0xc040840  jal         func_102100
    ctx->pc = 0x4C4668u;
    SET_GPR_U32(ctx, 31, 0x4C4670u);
    ctx->pc = 0x4C466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4668u;
            // 0x4c466c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4670u; }
        if (ctx->pc != 0x4C4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4670u; }
        if (ctx->pc != 0x4C4670u) { return; }
    }
    ctx->pc = 0x4C4670u;
label_4c4670:
    // 0x4c4670: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4c4670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4c4674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c4674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4678: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4c4678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4c467c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4C467Cu;
    SET_GPR_U32(ctx, 31, 0x4C4684u);
    ctx->pc = 0x4C4680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C467Cu;
            // 0x4c4680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4684u; }
        if (ctx->pc != 0x4C4684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4684u; }
        if (ctx->pc != 0x4C4684u) { return; }
    }
    ctx->pc = 0x4C4684u;
label_4c4684:
    // 0x4c4684: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c4684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4c4688: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4C4688u;
    SET_GPR_U32(ctx, 31, 0x4C4690u);
    ctx->pc = 0x4C468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4688u;
            // 0x4c468c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4690u; }
        if (ctx->pc != 0x4C4690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4690u; }
        if (ctx->pc != 0x4C4690u) { return; }
    }
    ctx->pc = 0x4C4690u;
label_4c4690:
    // 0x4c4690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c4690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4694:
    // 0x4c4694: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4c4694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4c4698: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c4698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4c469c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4c469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4c46a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c46a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c46a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4c46a8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4c46a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4c46ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c46acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c46b0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4C46B0u;
    SET_GPR_U32(ctx, 31, 0x4C46B8u);
    ctx->pc = 0x4C46B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C46B0u;
            // 0x4c46b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C46B8u; }
        if (ctx->pc != 0x4C46B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C46B8u; }
        if (ctx->pc != 0x4C46B8u) { return; }
    }
    ctx->pc = 0x4C46B8u;
label_4c46b8:
    // 0x4c46b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c46b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4c46bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4c46bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4c46c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4C46C0u;
    {
        const bool branch_taken_0x4c46c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C46C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C46C0u;
            // 0x4c46c4: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c46c0) {
            ctx->pc = 0x4C4694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c4694;
        }
    }
    ctx->pc = 0x4C46C8u;
label_4c46c8:
    // 0x4c46c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c46c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c46cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c46ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c46d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c46d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c46d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c46d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c46d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c46d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c46dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c46dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c46e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C46E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C46E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C46E0u;
            // 0x4c46e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C46E8u;
    // 0x4c46e8: 0x0  nop
    ctx->pc = 0x4c46e8u;
    // NOP
    // 0x4c46ec: 0x0  nop
    ctx->pc = 0x4c46ecu;
    // NOP
    // 0x4c46f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c46f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c46f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c46f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c46fc: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x4C46FCu;
    SET_GPR_U32(ctx, 31, 0x4C4704u);
    ctx->pc = 0x4C4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C46FCu;
            // 0x4c4700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4704u; }
        if (ctx->pc != 0x4C4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4704u; }
        if (ctx->pc != 0x4C4704u) { return; }
    }
    ctx->pc = 0x4C4704u;
label_4c4704:
    // 0x4c4704: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c4704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c4708: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c4708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c470c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4c470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x4c4710: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4c4710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4c4714: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c4714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c4718: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x4c471c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x4c4720: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c4720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c4724: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4c4724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x4c4728: 0x24841570  addiu       $a0, $a0, 0x1570
    ctx->pc = 0x4c4728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5488));
    // 0x4c472c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x4c472cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c4730: 0x246315b0  addiu       $v1, $v1, 0x15B0
    ctx->pc = 0x4c4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
    // 0x4c4734: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x4c4734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c4738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c4738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c473c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c473cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4c4740: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4c4740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4c4744: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4c4744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4c4748: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4c4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x4c474c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4754: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4754u;
            // 0x4c4758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C475Cu;
    // 0x4c475c: 0x0  nop
    ctx->pc = 0x4c475cu;
    // NOP
}
