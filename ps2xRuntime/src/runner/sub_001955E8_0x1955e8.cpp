#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001955E8
// Address: 0x1955e8 - 0x1956a8
void sub_001955E8_0x1955e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001955E8_0x1955e8");
#endif

    switch (ctx->pc) {
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        default: break;
    }

    ctx->pc = 0x1955e8u;

label_1955e8:
    // 0x1955e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1955ec:
    // 0x1955ec: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1955ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1955f0:
    // 0x1955f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1955f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1955f4:
    // 0x1955f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1955f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1955f8:
    // 0x1955f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1955f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1955fc:
    // 0x1955fc: 0x249103ac  addiu       $s1, $a0, 0x3AC
    ctx->pc = 0x1955fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 940));
label_195600:
    // 0x195600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_195604:
    // 0x195604: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x195604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195608:
    // 0x195608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19560c:
    // 0x19560c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195610:
    // 0x195610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195614:
    // 0x195614: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x195614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_195618:
    // 0x195618: 0x40f809  jalr        $v0
label_19561c:
    if (ctx->pc == 0x19561Cu) {
        ctx->pc = 0x19561Cu;
            // 0x19561c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x195620u;
        goto label_195620;
    }
    ctx->pc = 0x195618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195620u);
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195618u;
            // 0x19561c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195620u; }
            if (ctx->pc != 0x195620u) { return; }
        }
        }
    }
    ctx->pc = 0x195620u;
label_195620:
    // 0x195620: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195624:
    // 0x195624: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x195624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_195628:
    // 0x195628: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x195628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19562c:
    // 0x19562c: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_195630:
    // 0x195630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195634:
    // 0x195634: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195638:
    // 0x195638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19563c:
    // 0x19563c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_195640:
    // 0x195640: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_195644:
    // 0x195644: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_195648:
    // 0x195648: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19564c:
    // 0x19564c: 0xc061c20  jal         func_187080
label_195650:
    if (ctx->pc == 0x195650u) {
        ctx->pc = 0x195650u;
            // 0x195650: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x195654u;
        goto label_195654;
    }
    ctx->pc = 0x19564Cu;
    SET_GPR_U32(ctx, 31, 0x195654u);
    ctx->pc = 0x195650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19564Cu;
            // 0x195650: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195654u; }
        if (ctx->pc != 0x195654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195654u; }
        if (ctx->pc != 0x195654u) { return; }
    }
    ctx->pc = 0x195654u;
label_195654:
    // 0x195654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195658:
    // 0x195658: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19565c:
    // 0x19565c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195660:
    // 0x195660: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_195664:
    // 0x195664: 0x40f809  jalr        $v0
label_195668:
    if (ctx->pc == 0x195668u) {
        ctx->pc = 0x195668u;
            // 0x195668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19566Cu;
        goto label_19566c;
    }
    ctx->pc = 0x195664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19566Cu);
        ctx->pc = 0x195668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195664u;
            // 0x195668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19566Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19566Cu; }
            if (ctx->pc != 0x19566Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19566Cu;
label_19566c:
    // 0x19566c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195670:
    // 0x195670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195674:
    // 0x195674: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195678:
    // 0x195678: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x195678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_19567c:
    // 0x19567c: 0x40f809  jalr        $v0
label_195680:
    if (ctx->pc == 0x195680u) {
        ctx->pc = 0x195680u;
            // 0x195680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195684u;
        goto label_195684;
    }
    ctx->pc = 0x19567Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195684u);
        ctx->pc = 0x195680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19567Cu;
            // 0x195680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195684u; }
            if (ctx->pc != 0x195684u) { return; }
        }
        }
    }
    ctx->pc = 0x195684u;
label_195684:
    // 0x195684: 0xc0656ca  jal         func_195B28
label_195688:
    if (ctx->pc == 0x195688u) {
        ctx->pc = 0x195688u;
            // 0x195688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19568Cu;
        goto label_19568c;
    }
    ctx->pc = 0x195684u;
    SET_GPR_U32(ctx, 31, 0x19568Cu);
    ctx->pc = 0x195688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195684u;
            // 0x195688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19568Cu; }
        if (ctx->pc != 0x19568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19568Cu; }
        if (ctx->pc != 0x19568Cu) { return; }
    }
    ctx->pc = 0x19568Cu;
label_19568c:
    // 0x19568c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195690:
    // 0x195690: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195694:
    // 0x195694: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_195698:
    // 0x195698: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19569c:
    // 0x19569c: 0x3e00008  jr          $ra
label_1956a0:
    if (ctx->pc == 0x1956A0u) {
        ctx->pc = 0x1956A0u;
            // 0x1956a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1956A4u;
        goto label_1956a4;
    }
    ctx->pc = 0x19569Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19569Cu;
            // 0x1956a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
}
