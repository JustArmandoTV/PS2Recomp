#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D41F0
// Address: 0x1d41f0 - 0x1d4250
void sub_001D41F0_0x1d41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D41F0_0x1d41f0");
#endif

    switch (ctx->pc) {
        case 0x1d4218u: goto label_1d4218;
        case 0x1d4220u: goto label_1d4220;
        default: break;
    }

    ctx->pc = 0x1d41f0u;

    // 0x1d41f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d41f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d41f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d41f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d41f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d41f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d41fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d41fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4204: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4204u;
    {
        const bool branch_taken_0x1d4204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4204u;
            // 0x1d4208: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4204) {
            ctx->pc = 0x1D4238u;
            goto label_1d4238;
        }
    }
    ctx->pc = 0x1D420Cu;
    // 0x1d420c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d4210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4218:
    // 0x1d4218: 0xc04e7d4  jal         func_139F50
    ctx->pc = 0x1D4218u;
    SET_GPR_U32(ctx, 31, 0x1D4220u);
    ctx->pc = 0x1D421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4218u;
            // 0x1d421c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139F50u;
    if (runtime->hasFunction(0x139F50u)) {
        auto targetFn = runtime->lookupFunction(0x139F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4220u; }
        if (ctx->pc != 0x1D4220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139F50_0x139f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4220u; }
        if (ctx->pc != 0x1D4220u) { return; }
    }
    ctx->pc = 0x1D4220u;
label_1d4220:
    // 0x1d4220: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4228: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1d4228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d422c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D422Cu;
    {
        const bool branch_taken_0x1d422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d422c) {
            ctx->pc = 0x1D4230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D422Cu;
            // 0x1d4230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4218;
        }
    }
    ctx->pc = 0x1D4234u;
    // 0x1d4234: 0x0  nop
    ctx->pc = 0x1d4234u;
    // NOP
label_1d4238:
    // 0x1d4238: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d4238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d423c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d423cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4248: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4248u;
            // 0x1d424c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4250u;
}
