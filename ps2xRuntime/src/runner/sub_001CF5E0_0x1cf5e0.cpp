#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF5E0
// Address: 0x1cf5e0 - 0x1cf6c0
void sub_001CF5E0_0x1cf5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF5E0_0x1cf5e0");
#endif

    switch (ctx->pc) {
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf668u: goto label_1cf668;
        default: break;
    }

    ctx->pc = 0x1cf5e0u;

    // 0x1cf5e0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x1cf5e4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf5e8: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x1cf5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x1cf5ec: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x1cf5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x1cf5f0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cf5f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5f4: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x1cf5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x1cf5f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cf5f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cf5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf600: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x1cf600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x1cf604: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x1cf604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x1cf608: 0xffb10420  sd          $s1, 0x420($sp)
    ctx->pc = 0x1cf608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x1cf60c: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x1cf60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x1cf610: 0xc073b92  jal         func_1CEE48
    ctx->pc = 0x1CF610u;
    SET_GPR_U32(ctx, 31, 0x1CF618u);
    ctx->pc = 0x1CF614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF610u;
            // 0x1cf614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE48u;
    if (runtime->hasFunction(0x1CEE48u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF618u; }
        if (ctx->pc != 0x1CF618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE48_0x1cee48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF618u; }
        if (ctx->pc != 0x1CF618u) { return; }
    }
    ctx->pc = 0x1CF618u;
label_1cf618:
    // 0x1cf618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cf618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf61c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF61Cu;
    {
        const bool branch_taken_0x1cf61c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1cf61c) {
            ctx->pc = 0x1CF62Cu;
            goto label_1cf62c;
        }
    }
    ctx->pc = 0x1CF624u;
label_1cf624:
    // 0x1cf624: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CF624u;
    {
        const bool branch_taken_0x1cf624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF624u;
            // 0x1cf628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf624) {
            ctx->pc = 0x1CF69Cu;
            goto label_1cf69c;
        }
    }
    ctx->pc = 0x1CF62Cu;
label_1cf62c:
    // 0x1cf62c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CF62Cu;
    {
        const bool branch_taken_0x1cf62c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF62Cu;
            // 0x1cf630: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf62c) {
            ctx->pc = 0x1CF684u;
            goto label_1cf684;
        }
    }
    ctx->pc = 0x1CF634u;
    // 0x1cf634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF634u;
    {
        const bool branch_taken_0x1cf634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF634u;
            // 0x1cf638: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf634) {
            ctx->pc = 0x1CF644u;
            goto label_1cf644;
        }
    }
    ctx->pc = 0x1CF63Cu;
    // 0x1cf63c: 0x0  nop
    ctx->pc = 0x1cf63cu;
    // NOP
label_1cf640:
    // 0x1cf640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cf640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cf644:
    // 0x1cf644: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1cf644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1cf648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF648u;
    {
        const bool branch_taken_0x1cf648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF648u;
            // 0x1cf64c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf648) {
            ctx->pc = 0x1CF67Cu;
            goto label_1cf67c;
        }
    }
    ctx->pc = 0x1CF650u;
    // 0x1cf650: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf654: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cf654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf658: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf65c: 0x27a80400  addiu       $t0, $sp, 0x400
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1cf660: 0xc073bb4  jal         func_1CEED0
    ctx->pc = 0x1CF660u;
    SET_GPR_U32(ctx, 31, 0x1CF668u);
    ctx->pc = 0x1CF664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF660u;
            // 0x1cf664: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEED0u;
    if (runtime->hasFunction(0x1CEED0u)) {
        auto targetFn = runtime->lookupFunction(0x1CEED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF668u; }
        if (ctx->pc != 0x1CF668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEED0_0x1ceed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF668u; }
        if (ctx->pc != 0x1CF668u) { return; }
    }
    ctx->pc = 0x1CF668u;
label_1cf668:
    // 0x1cf668: 0x440ffee  bltz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CF668u;
    {
        const bool branch_taken_0x1cf668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF668u;
            // 0x1cf66c: 0x8fa20400  lw          $v0, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf668) {
            ctx->pc = 0x1CF624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf624;
        }
    }
    ctx->pc = 0x1CF670u;
    // 0x1cf670: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cf670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cf674: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CF674u;
    {
        const bool branch_taken_0x1cf674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF674u;
            // 0x1cf678: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf674) {
            ctx->pc = 0x1CF640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf640;
        }
    }
    ctx->pc = 0x1CF67Cu;
label_1cf67c:
    // 0x1cf67c: 0x16320003  bne         $s1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF67Cu;
    {
        const bool branch_taken_0x1cf67c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1CF680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF67Cu;
            // 0x1cf680: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf67c) {
            ctx->pc = 0x1CF68Cu;
            goto label_1cf68c;
        }
    }
    ctx->pc = 0x1CF684u;
label_1cf684:
    // 0x1cf684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF684u;
    {
        const bool branch_taken_0x1cf684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF684u;
            // 0x1cf688: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf684) {
            ctx->pc = 0x1CF69Cu;
            goto label_1cf69c;
        }
    }
    ctx->pc = 0x1CF68Cu;
label_1cf68c:
    // 0x1cf68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf690: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1cf694: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf698: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x1cf698u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_1cf69c:
    // 0x1cf69c: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x1cf69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1cf6a0: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x1cf6a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1cf6a4: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x1cf6a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1cf6a8: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x1cf6a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1cf6ac: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x1cf6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1cf6b0: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1cf6b4: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1cf6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6B8u;
            // 0x1cf6bc: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF6C0u;
}
