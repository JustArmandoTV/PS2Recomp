#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C65D0
// Address: 0x2c65d0 - 0x2c66d0
void sub_002C65D0_0x2c65d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C65D0_0x2c65d0");
#endif

    switch (ctx->pc) {
        case 0x2c65d0u: goto label_2c65d0;
        case 0x2c65d4u: goto label_2c65d4;
        case 0x2c65d8u: goto label_2c65d8;
        case 0x2c65dcu: goto label_2c65dc;
        case 0x2c65e0u: goto label_2c65e0;
        case 0x2c65e4u: goto label_2c65e4;
        case 0x2c65e8u: goto label_2c65e8;
        case 0x2c65ecu: goto label_2c65ec;
        case 0x2c65f0u: goto label_2c65f0;
        case 0x2c65f4u: goto label_2c65f4;
        case 0x2c65f8u: goto label_2c65f8;
        case 0x2c65fcu: goto label_2c65fc;
        case 0x2c6600u: goto label_2c6600;
        case 0x2c6604u: goto label_2c6604;
        case 0x2c6608u: goto label_2c6608;
        case 0x2c660cu: goto label_2c660c;
        case 0x2c6610u: goto label_2c6610;
        case 0x2c6614u: goto label_2c6614;
        case 0x2c6618u: goto label_2c6618;
        case 0x2c661cu: goto label_2c661c;
        case 0x2c6620u: goto label_2c6620;
        case 0x2c6624u: goto label_2c6624;
        case 0x2c6628u: goto label_2c6628;
        case 0x2c662cu: goto label_2c662c;
        case 0x2c6630u: goto label_2c6630;
        case 0x2c6634u: goto label_2c6634;
        case 0x2c6638u: goto label_2c6638;
        case 0x2c663cu: goto label_2c663c;
        case 0x2c6640u: goto label_2c6640;
        case 0x2c6644u: goto label_2c6644;
        case 0x2c6648u: goto label_2c6648;
        case 0x2c664cu: goto label_2c664c;
        case 0x2c6650u: goto label_2c6650;
        case 0x2c6654u: goto label_2c6654;
        case 0x2c6658u: goto label_2c6658;
        case 0x2c665cu: goto label_2c665c;
        case 0x2c6660u: goto label_2c6660;
        case 0x2c6664u: goto label_2c6664;
        case 0x2c6668u: goto label_2c6668;
        case 0x2c666cu: goto label_2c666c;
        case 0x2c6670u: goto label_2c6670;
        case 0x2c6674u: goto label_2c6674;
        case 0x2c6678u: goto label_2c6678;
        case 0x2c667cu: goto label_2c667c;
        case 0x2c6680u: goto label_2c6680;
        case 0x2c6684u: goto label_2c6684;
        case 0x2c6688u: goto label_2c6688;
        case 0x2c668cu: goto label_2c668c;
        case 0x2c6690u: goto label_2c6690;
        case 0x2c6694u: goto label_2c6694;
        case 0x2c6698u: goto label_2c6698;
        case 0x2c669cu: goto label_2c669c;
        case 0x2c66a0u: goto label_2c66a0;
        case 0x2c66a4u: goto label_2c66a4;
        case 0x2c66a8u: goto label_2c66a8;
        case 0x2c66acu: goto label_2c66ac;
        case 0x2c66b0u: goto label_2c66b0;
        case 0x2c66b4u: goto label_2c66b4;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66bcu: goto label_2c66bc;
        case 0x2c66c0u: goto label_2c66c0;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66c8u: goto label_2c66c8;
        case 0x2c66ccu: goto label_2c66cc;
        default: break;
    }

    ctx->pc = 0x2c65d0u;

label_2c65d0:
    // 0x2c65d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c65d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c65d4:
    // 0x2c65d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c65d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c65d8:
    // 0x2c65d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c65d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c65dc:
    // 0x2c65dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c65dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c65e0:
    // 0x2c65e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c65e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c65e4:
    // 0x2c65e4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c65e8:
    if (ctx->pc == 0x2C65E8u) {
        ctx->pc = 0x2C65E8u;
            // 0x2c65e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C65ECu;
        goto label_2c65ec;
    }
    ctx->pc = 0x2C65E4u;
    {
        const bool branch_taken_0x2c65e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C65E4u;
            // 0x2c65e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65e4) {
            ctx->pc = 0x2C66ACu;
            goto label_2c66ac;
        }
    }
    ctx->pc = 0x2C65ECu;
label_2c65ec:
    // 0x2c65ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c65f0:
    // 0x2c65f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c65f4:
    // 0x2c65f4: 0x24636d00  addiu       $v1, $v1, 0x6D00
    ctx->pc = 0x2c65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27904));
label_2c65f8:
    // 0x2c65f8: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x2c65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
label_2c65fc:
    // 0x2c65fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c6600:
    // 0x2c6600: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c6600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c6604:
    // 0x2c6604: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6608:
    // 0x2c6608: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c6608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c660c:
    // 0x2c660c: 0x320f809  jalr        $t9
label_2c6610:
    if (ctx->pc == 0x2C6610u) {
        ctx->pc = 0x2C6614u;
        goto label_2c6614;
    }
    ctx->pc = 0x2C660Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6614u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6614u; }
            if (ctx->pc != 0x2C6614u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6614u;
label_2c6614:
    // 0x2c6614: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c6618:
    if (ctx->pc == 0x2C6618u) {
        ctx->pc = 0x2C6618u;
            // 0x2c6618: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C661Cu;
        goto label_2c661c;
    }
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C6618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6614u;
            // 0x2c6618: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6698u;
            goto label_2c6698;
        }
    }
    ctx->pc = 0x2C661Cu;
label_2c661c:
    // 0x2c661c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c6620:
    // 0x2c6620: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6624:
    // 0x2c6624: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c6624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c6628:
    // 0x2c6628: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c6628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c662c:
    // 0x2c662c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c662cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c6630:
    // 0x2c6630: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c6630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c6634:
    // 0x2c6634: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c6634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c6638:
    // 0x2c6638: 0xc0aecc4  jal         func_2BB310
label_2c663c:
    if (ctx->pc == 0x2C663Cu) {
        ctx->pc = 0x2C663Cu;
            // 0x2c663c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6640u;
        goto label_2c6640;
    }
    ctx->pc = 0x2C6638u;
    SET_GPR_U32(ctx, 31, 0x2C6640u);
    ctx->pc = 0x2C663Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6638u;
            // 0x2c663c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6640u; }
        if (ctx->pc != 0x2C6640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6640u; }
        if (ctx->pc != 0x2C6640u) { return; }
    }
    ctx->pc = 0x2C6640u;
label_2c6640:
    // 0x2c6640: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c6640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c6644:
    // 0x2c6644: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c6644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c6648:
    // 0x2c6648: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c664c:
    if (ctx->pc == 0x2C664Cu) {
        ctx->pc = 0x2C664Cu;
            // 0x2c664c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C6650u;
        goto label_2c6650;
    }
    ctx->pc = 0x2C6648u;
    {
        const bool branch_taken_0x2c6648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6648) {
            ctx->pc = 0x2C664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6648u;
            // 0x2c664c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6664u;
            goto label_2c6664;
        }
    }
    ctx->pc = 0x2C6650u;
label_2c6650:
    // 0x2c6650: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c6650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c6654:
    // 0x2c6654: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c6654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6658:
    // 0x2c6658: 0x320f809  jalr        $t9
label_2c665c:
    if (ctx->pc == 0x2C665Cu) {
        ctx->pc = 0x2C665Cu;
            // 0x2c665c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6660u;
        goto label_2c6660;
    }
    ctx->pc = 0x2C6658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6660u);
        ctx->pc = 0x2C665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6658u;
            // 0x2c665c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6660u; }
            if (ctx->pc != 0x2C6660u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6660u;
label_2c6660:
    // 0x2c6660: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c6660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c6664:
    // 0x2c6664: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c6664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c6668:
    // 0x2c6668: 0xc0aec9c  jal         func_2BB270
label_2c666c:
    if (ctx->pc == 0x2C666Cu) {
        ctx->pc = 0x2C666Cu;
            // 0x2c666c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C6670u;
        goto label_2c6670;
    }
    ctx->pc = 0x2C6668u;
    SET_GPR_U32(ctx, 31, 0x2C6670u);
    ctx->pc = 0x2C666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6668u;
            // 0x2c666c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6670u; }
        if (ctx->pc != 0x2C6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6670u; }
        if (ctx->pc != 0x2C6670u) { return; }
    }
    ctx->pc = 0x2C6670u;
label_2c6670:
    // 0x2c6670: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c6674:
    // 0x2c6674: 0xc0aec88  jal         func_2BB220
label_2c6678:
    if (ctx->pc == 0x2C6678u) {
        ctx->pc = 0x2C6678u;
            // 0x2c6678: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C667Cu;
        goto label_2c667c;
    }
    ctx->pc = 0x2C6674u;
    SET_GPR_U32(ctx, 31, 0x2C667Cu);
    ctx->pc = 0x2C6678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6674u;
            // 0x2c6678: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C667Cu; }
        if (ctx->pc != 0x2C667Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C667Cu; }
        if (ctx->pc != 0x2C667Cu) { return; }
    }
    ctx->pc = 0x2C667Cu;
label_2c667c:
    // 0x2c667c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c6680:
    // 0x2c6680: 0xc0aec0c  jal         func_2BB030
label_2c6684:
    if (ctx->pc == 0x2C6684u) {
        ctx->pc = 0x2C6684u;
            // 0x2c6684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6688u;
        goto label_2c6688;
    }
    ctx->pc = 0x2C6680u;
    SET_GPR_U32(ctx, 31, 0x2C6688u);
    ctx->pc = 0x2C6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6680u;
            // 0x2c6684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6688u; }
        if (ctx->pc != 0x2C6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6688u; }
        if (ctx->pc != 0x2C6688u) { return; }
    }
    ctx->pc = 0x2C6688u;
label_2c6688:
    // 0x2c6688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c668c:
    // 0x2c668c: 0xc0aeaa8  jal         func_2BAAA0
label_2c6690:
    if (ctx->pc == 0x2C6690u) {
        ctx->pc = 0x2C6690u;
            // 0x2c6690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6694u;
        goto label_2c6694;
    }
    ctx->pc = 0x2C668Cu;
    SET_GPR_U32(ctx, 31, 0x2C6694u);
    ctx->pc = 0x2C6690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C668Cu;
            // 0x2c6690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6694u; }
        if (ctx->pc != 0x2C6694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6694u; }
        if (ctx->pc != 0x2C6694u) { return; }
    }
    ctx->pc = 0x2C6694u;
label_2c6694:
    // 0x2c6694: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c6694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c6698:
    // 0x2c6698: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c669c:
    // 0x2c669c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c66a0:
    if (ctx->pc == 0x2C66A0u) {
        ctx->pc = 0x2C66A0u;
            // 0x2c66a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C66A4u;
        goto label_2c66a4;
    }
    ctx->pc = 0x2C669Cu;
    {
        const bool branch_taken_0x2c669c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c669c) {
            ctx->pc = 0x2C66A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C669Cu;
            // 0x2c66a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C66B0u;
            goto label_2c66b0;
        }
    }
    ctx->pc = 0x2C66A4u;
label_2c66a4:
    // 0x2c66a4: 0xc0400a8  jal         func_1002A0
label_2c66a8:
    if (ctx->pc == 0x2C66A8u) {
        ctx->pc = 0x2C66A8u;
            // 0x2c66a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ACu;
        goto label_2c66ac;
    }
    ctx->pc = 0x2C66A4u;
    SET_GPR_U32(ctx, 31, 0x2C66ACu);
    ctx->pc = 0x2C66A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66A4u;
            // 0x2c66a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66ACu; }
        if (ctx->pc != 0x2C66ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C66ACu; }
        if (ctx->pc != 0x2C66ACu) { return; }
    }
    ctx->pc = 0x2C66ACu;
label_2c66ac:
    // 0x2c66ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c66acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c66b0:
    // 0x2c66b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c66b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c66b4:
    // 0x2c66b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c66b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c66b8:
    // 0x2c66b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c66b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c66bc:
    // 0x2c66bc: 0x3e00008  jr          $ra
label_2c66c0:
    if (ctx->pc == 0x2C66C0u) {
        ctx->pc = 0x2C66C0u;
            // 0x2c66c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C66C4u;
        goto label_2c66c4;
    }
    ctx->pc = 0x2C66BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C66C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66BCu;
            // 0x2c66c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C66C4u;
label_2c66c4:
    // 0x2c66c4: 0x0  nop
    ctx->pc = 0x2c66c4u;
    // NOP
label_2c66c8:
    // 0x2c66c8: 0x0  nop
    ctx->pc = 0x2c66c8u;
    // NOP
label_2c66cc:
    // 0x2c66cc: 0x0  nop
    ctx->pc = 0x2c66ccu;
    // NOP
}
