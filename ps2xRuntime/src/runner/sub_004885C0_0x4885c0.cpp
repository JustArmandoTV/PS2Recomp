#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004885C0
// Address: 0x4885c0 - 0x488680
void sub_004885C0_0x4885c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004885C0_0x4885c0");
#endif

    switch (ctx->pc) {
        case 0x488618u: goto label_488618;
        case 0x488638u: goto label_488638;
        default: break;
    }

    ctx->pc = 0x4885c0u;

    // 0x4885c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4885c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4885c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4885c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4885c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4885c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4885cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4885ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4885d0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x4885d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4885d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4885d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4885d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4885dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4885e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4885e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4885e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4885e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4885e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4885ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4885f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4885f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4885f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4885f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4885f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4885f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4885fc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4885fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x488600: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x488600u;
    {
        const bool branch_taken_0x488600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x488604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488600u;
            // 0x488604: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488600) {
            ctx->pc = 0x488648u;
            goto label_488648;
        }
    }
    ctx->pc = 0x488608u;
    // 0x488608: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x488608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x48860c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x48860Cu;
    {
        const bool branch_taken_0x48860c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48860c) {
            ctx->pc = 0x488648u;
            goto label_488648;
        }
    }
    ctx->pc = 0x488614u;
    // 0x488614: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x488614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_488618:
    // 0x488618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x488618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48861c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x48861cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488620: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x488620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488624: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x488624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488628: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x488628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48862c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x48862cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488630: 0xc121d54  jal         func_487550
    ctx->pc = 0x488630u;
    SET_GPR_U32(ctx, 31, 0x488638u);
    ctx->pc = 0x488634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488630u;
            // 0x488634: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x487550u;
    if (runtime->hasFunction(0x487550u)) {
        auto targetFn = runtime->lookupFunction(0x487550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488638u; }
        if (ctx->pc != 0x488638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00487550_0x487550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488638u; }
        if (ctx->pc != 0x488638u) { return; }
    }
    ctx->pc = 0x488638u;
label_488638:
    // 0x488638: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x488638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x48863c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x48863Cu;
    {
        const bool branch_taken_0x48863c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x488640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48863Cu;
            // 0x488640: 0x26100280  addiu       $s0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48863c) {
            ctx->pc = 0x488618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_488618;
        }
    }
    ctx->pc = 0x488644u;
    // 0x488644: 0x0  nop
    ctx->pc = 0x488644u;
    // NOP
label_488648:
    // 0x488648: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x488648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48864c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48864cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x488650: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x488650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x488654: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x488654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x488658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x488658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48865c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48865cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x488660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x488664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48866c: 0x3e00008  jr          $ra
    ctx->pc = 0x48866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48866Cu;
            // 0x488670: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488674u;
    // 0x488674: 0x0  nop
    ctx->pc = 0x488674u;
    // NOP
    // 0x488678: 0x0  nop
    ctx->pc = 0x488678u;
    // NOP
    // 0x48867c: 0x0  nop
    ctx->pc = 0x48867cu;
    // NOP
}
