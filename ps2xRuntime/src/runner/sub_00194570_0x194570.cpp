#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194570
// Address: 0x194570 - 0x194610
void sub_00194570_0x194570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194570_0x194570");
#endif

    switch (ctx->pc) {
        case 0x194570u: goto label_194570;
        case 0x194574u: goto label_194574;
        case 0x194578u: goto label_194578;
        case 0x19457cu: goto label_19457c;
        case 0x194580u: goto label_194580;
        case 0x194584u: goto label_194584;
        case 0x194588u: goto label_194588;
        case 0x19458cu: goto label_19458c;
        case 0x194590u: goto label_194590;
        case 0x194594u: goto label_194594;
        case 0x194598u: goto label_194598;
        case 0x19459cu: goto label_19459c;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945a4u: goto label_1945a4;
        case 0x1945a8u: goto label_1945a8;
        case 0x1945acu: goto label_1945ac;
        case 0x1945b0u: goto label_1945b0;
        case 0x1945b4u: goto label_1945b4;
        case 0x1945b8u: goto label_1945b8;
        case 0x1945bcu: goto label_1945bc;
        case 0x1945c0u: goto label_1945c0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945c8u: goto label_1945c8;
        case 0x1945ccu: goto label_1945cc;
        case 0x1945d0u: goto label_1945d0;
        case 0x1945d4u: goto label_1945d4;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945dcu: goto label_1945dc;
        case 0x1945e0u: goto label_1945e0;
        case 0x1945e4u: goto label_1945e4;
        case 0x1945e8u: goto label_1945e8;
        case 0x1945ecu: goto label_1945ec;
        case 0x1945f0u: goto label_1945f0;
        case 0x1945f4u: goto label_1945f4;
        case 0x1945f8u: goto label_1945f8;
        case 0x1945fcu: goto label_1945fc;
        case 0x194600u: goto label_194600;
        case 0x194604u: goto label_194604;
        case 0x194608u: goto label_194608;
        case 0x19460cu: goto label_19460c;
        default: break;
    }

    ctx->pc = 0x194570u;

label_194570:
    // 0x194570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_194574:
    // 0x194574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_194578:
    // 0x194578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x194578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19457c:
    // 0x19457c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_194580:
    // 0x194580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x194580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_194584:
    // 0x194584: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194588:
    // 0x194588: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x194588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_19458c:
    // 0x19458c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19458cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194590:
    // 0x194590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_194594:
    // 0x194594: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_194598:
    // 0x194598: 0xc0612e8  jal         func_184BA0
label_19459c:
    if (ctx->pc == 0x19459Cu) {
        ctx->pc = 0x19459Cu;
            // 0x19459c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1945A0u;
        goto label_1945a0;
    }
    ctx->pc = 0x194598u;
    SET_GPR_U32(ctx, 31, 0x1945A0u);
    ctx->pc = 0x19459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194598u;
            // 0x19459c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A0u; }
        if (ctx->pc != 0x1945A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A0u; }
        if (ctx->pc != 0x1945A0u) { return; }
    }
    ctx->pc = 0x1945A0u;
label_1945a0:
    // 0x1945a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1945a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1945a4:
    // 0x1945a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1945a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1945a8:
    // 0x1945a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1945a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1945ac:
    // 0x1945ac: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1945b0:
    if (ctx->pc == 0x1945B0u) {
        ctx->pc = 0x1945B0u;
            // 0x1945b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1945B4u;
        goto label_1945b4;
    }
    ctx->pc = 0x1945ACu;
    {
        const bool branch_taken_0x1945ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945ACu;
            // 0x1945b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945ac) {
            ctx->pc = 0x1945F4u;
            goto label_1945f4;
        }
    }
    ctx->pc = 0x1945B4u;
label_1945b4:
    // 0x1945b4: 0xc0650b4  jal         func_1942D0
label_1945b8:
    if (ctx->pc == 0x1945B8u) {
        ctx->pc = 0x1945BCu;
        goto label_1945bc;
    }
    ctx->pc = 0x1945B4u;
    SET_GPR_U32(ctx, 31, 0x1945BCu);
    ctx->pc = 0x1942D0u;
    if (runtime->hasFunction(0x1942D0u)) {
        auto targetFn = runtime->lookupFunction(0x1942D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945BCu; }
        if (ctx->pc != 0x1945BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001942D0_0x1942d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945BCu; }
        if (ctx->pc != 0x1945BCu) { return; }
    }
    ctx->pc = 0x1945BCu;
label_1945bc:
    // 0x1945bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1945bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1945c0:
    // 0x1945c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1945c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1945c4:
    // 0x1945c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1945c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1945c8:
    // 0x1945c8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1945c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1945cc:
    // 0x1945cc: 0x40f809  jalr        $v0
label_1945d0:
    if (ctx->pc == 0x1945D0u) {
        ctx->pc = 0x1945D0u;
            // 0x1945d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1945D4u;
        goto label_1945d4;
    }
    ctx->pc = 0x1945CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1945D4u);
        ctx->pc = 0x1945D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945CCu;
            // 0x1945d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1945D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1945D4u; }
            if (ctx->pc != 0x1945D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1945D4u;
label_1945d4:
    // 0x1945d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1945d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1945d8:
    // 0x1945d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1945d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1945dc:
    // 0x1945dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1945e0:
    // 0x1945e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1945e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1945e4:
    // 0x1945e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1945e8:
    // 0x1945e8: 0x40f809  jalr        $v0
label_1945ec:
    if (ctx->pc == 0x1945ECu) {
        ctx->pc = 0x1945ECu;
            // 0x1945ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1945F0u;
        goto label_1945f0;
    }
    ctx->pc = 0x1945E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1945F0u);
        ctx->pc = 0x1945ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945E8u;
            // 0x1945ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1945F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1945F0u; }
            if (ctx->pc != 0x1945F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1945F0u;
label_1945f0:
    // 0x1945f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1945f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1945f4:
    // 0x1945f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1945f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1945f8:
    // 0x1945f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1945f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1945fc:
    // 0x1945fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1945fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194600:
    // 0x194600: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x194600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_194604:
    // 0x194604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194608:
    // 0x194608: 0x3e00008  jr          $ra
label_19460c:
    if (ctx->pc == 0x19460Cu) {
        ctx->pc = 0x19460Cu;
            // 0x19460c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x194610u;
        goto label_fallthrough_0x194608;
    }
    ctx->pc = 0x194608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194608u;
            // 0x19460c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x194608:
    ctx->pc = 0x194610u;
}
