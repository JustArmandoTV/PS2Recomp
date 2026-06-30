#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C45E0
// Address: 0x2c45e0 - 0x2c4750
void sub_002C45E0_0x2c45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C45E0_0x2c45e0");
#endif

    switch (ctx->pc) {
        case 0x2c4608u: goto label_2c4608;
        case 0x2c4620u: goto label_2c4620;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c4680u: goto label_2c4680;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c4704u: goto label_2c4704;
        case 0x2c4710u: goto label_2c4710;
        case 0x2c471cu: goto label_2c471c;
        case 0x2c4734u: goto label_2c4734;
        default: break;
    }

    ctx->pc = 0x2c45e0u;

    // 0x2c45e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c45e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c45e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c45e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c45e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c45e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c45ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c45f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c45f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c45f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c45f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c4600: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2C4600u;
    SET_GPR_U32(ctx, 31, 0x2C4608u);
    ctx->pc = 0x2C4604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4600u;
            // 0x2c4604: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4608u; }
        if (ctx->pc != 0x2C4608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4608u; }
        if (ctx->pc != 0x2C4608u) { return; }
    }
    ctx->pc = 0x2C4608u;
label_2c4608:
    // 0x2c4608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c460c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c460cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c4610: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2c4610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c4614: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c4614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c4618: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x2C4618u;
    SET_GPR_U32(ctx, 31, 0x2C4620u);
    ctx->pc = 0x2C461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4618u;
            // 0x2c461c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (runtime->hasFunction(0x2C4AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4620u; }
        if (ctx->pc != 0x2C4620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4AC0_0x2c4ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4620u; }
        if (ctx->pc != 0x2C4620u) { return; }
    }
    ctx->pc = 0x2C4620u;
label_2c4620:
    // 0x2c4620: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C4620u;
    SET_GPR_U32(ctx, 31, 0x2C4628u);
    ctx->pc = 0x2C4624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4620u;
            // 0x2c4624: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4628u; }
        if (ctx->pc != 0x2C4628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4628u; }
        if (ctx->pc != 0x2C4628u) { return; }
    }
    ctx->pc = 0x2C4628u;
label_2c4628:
    // 0x2c4628: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c462c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c4630: 0x24630fc0  addiu       $v1, $v1, 0xFC0
    ctx->pc = 0x2c4630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4032));
    // 0x2c4634: 0x24420ff8  addiu       $v0, $v0, 0xFF8
    ctx->pc = 0x2c4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2c4638: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c4638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c463c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4640: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c4640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c4644: 0x24630f60  addiu       $v1, $v1, 0xF60
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x2c4648: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c464c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2c464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x2c4650: 0x24420f68  addiu       $v0, $v0, 0xF68
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3944));
    // 0x2c4654: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c4658: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c4658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c465c: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2c4660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4664: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x2c4664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x2c4668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c466c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c466cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4674: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4674u;
            // 0x2c4678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C467Cu;
    // 0x2c467c: 0x0  nop
    ctx->pc = 0x2c467cu;
    // NOP
label_2c4680:
    // 0x2c4680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c468c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4694: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4694u;
    {
        const bool branch_taken_0x2c4694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4694u;
            // 0x2c4698: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4694) {
            ctx->pc = 0x2C4734u;
            goto label_2c4734;
        }
    }
    ctx->pc = 0x2C469Cu;
    // 0x2c469c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c469cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c46a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c46a4: 0x24630fc0  addiu       $v1, $v1, 0xFC0
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4032));
    // 0x2c46a8: 0x24420ff8  addiu       $v0, $v0, 0xFF8
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2c46ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c46acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c46b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C46B0u;
    {
        const bool branch_taken_0x2c46b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46B0u;
            // 0x2c46b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46b0) {
            ctx->pc = 0x2C471Cu;
            goto label_2c471c;
        }
    }
    ctx->pc = 0x2C46B8u;
    // 0x2c46b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c46bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c46c0: 0x24630f10  addiu       $v1, $v1, 0xF10
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3856));
    // 0x2c46c4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c46c8: 0x24420f48  addiu       $v0, $v0, 0xF48
    ctx->pc = 0x2c46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3912));
    // 0x2c46cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c46ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c46d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c46d4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c46d8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C46D8u;
    SET_GPR_U32(ctx, 31, 0x2C46E0u);
    ctx->pc = 0x2C46DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46D8u;
            // 0x2c46dc: 0x24a54890  addiu       $a1, $a1, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46E0u; }
        if (ctx->pc != 0x2C46E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46E0u; }
        if (ctx->pc != 0x2C46E0u) { return; }
    }
    ctx->pc = 0x2C46E0u;
label_2c46e0:
    // 0x2c46e0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c46e4: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x2C46E4u;
    SET_GPR_U32(ctx, 31, 0x2C46ECu);
    ctx->pc = 0x2C46E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46E4u;
            // 0x2c46e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46ECu; }
        if (ctx->pc != 0x2C46ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46ECu; }
        if (ctx->pc != 0x2C46ECu) { return; }
    }
    ctx->pc = 0x2C46ECu;
label_2c46ec:
    // 0x2c46ec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c46ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c46f0: 0xc0b11ec  jal         func_2C47B0
    ctx->pc = 0x2C46F0u;
    SET_GPR_U32(ctx, 31, 0x2C46F8u);
    ctx->pc = 0x2C46F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46F0u;
            // 0x2c46f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C47B0u;
    if (runtime->hasFunction(0x2C47B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C47B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46F8u; }
        if (ctx->pc != 0x2C46F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C47B0_0x2c47b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46F8u; }
        if (ctx->pc != 0x2C46F8u) { return; }
    }
    ctx->pc = 0x2C46F8u;
label_2c46f8:
    // 0x2c46f8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c46fc: 0xc0b11ec  jal         func_2C47B0
    ctx->pc = 0x2C46FCu;
    SET_GPR_U32(ctx, 31, 0x2C4704u);
    ctx->pc = 0x2C4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C46FCu;
            // 0x2c4700: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C47B0u;
    if (runtime->hasFunction(0x2C47B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C47B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4704u; }
        if (ctx->pc != 0x2C4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C47B0_0x2c47b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4704u; }
        if (ctx->pc != 0x2C4704u) { return; }
    }
    ctx->pc = 0x2C4704u;
label_2c4704:
    // 0x2c4704: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c4708: 0xc0b11d4  jal         func_2C4750
    ctx->pc = 0x2C4708u;
    SET_GPR_U32(ctx, 31, 0x2C4710u);
    ctx->pc = 0x2C470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4708u;
            // 0x2c470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4750u;
    if (runtime->hasFunction(0x2C4750u)) {
        auto targetFn = runtime->lookupFunction(0x2C4750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4710u; }
        if (ctx->pc != 0x2C4710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4750_0x2c4750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4710u; }
        if (ctx->pc != 0x2C4710u) { return; }
    }
    ctx->pc = 0x2C4710u;
label_2c4710:
    // 0x2c4710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4714: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C4714u;
    SET_GPR_U32(ctx, 31, 0x2C471Cu);
    ctx->pc = 0x2C4718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4714u;
            // 0x2c4718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C471Cu; }
        if (ctx->pc != 0x2C471Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C471Cu; }
        if (ctx->pc != 0x2C471Cu) { return; }
    }
    ctx->pc = 0x2C471Cu;
label_2c471c:
    // 0x2c471c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c4720: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c4724: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4724u;
    {
        const bool branch_taken_0x2c4724 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c4724) {
            ctx->pc = 0x2C4728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4724u;
            // 0x2c4728: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4738u;
            goto label_2c4738;
        }
    }
    ctx->pc = 0x2C472Cu;
    // 0x2c472c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C472Cu;
    SET_GPR_U32(ctx, 31, 0x2C4734u);
    ctx->pc = 0x2C4730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C472Cu;
            // 0x2c4730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4734u; }
        if (ctx->pc != 0x2C4734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4734u; }
        if (ctx->pc != 0x2C4734u) { return; }
    }
    ctx->pc = 0x2C4734u;
label_2c4734:
    // 0x2c4734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4738:
    // 0x2c4738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c473c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c473cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4744: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4744u;
            // 0x2c4748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C474Cu;
    // 0x2c474c: 0x0  nop
    ctx->pc = 0x2c474cu;
    // NOP
}
