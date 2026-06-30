#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9230
// Address: 0x2d9230 - 0x2d92b0
void sub_002D9230_0x2d9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9230_0x2d9230");
#endif

    switch (ctx->pc) {
        case 0x2d9264u: goto label_2d9264;
        case 0x2d9274u: goto label_2d9274;
        default: break;
    }

    ctx->pc = 0x2d9230u;

    // 0x2d9230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d923c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9244: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d9248: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2d9248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d924c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d9250: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x2d9250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d9254: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x2d9254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d9258: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9258u;
    {
        const bool branch_taken_0x2d9258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9258u;
            // 0x2d925c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9258) {
            ctx->pc = 0x2D9288u;
            goto label_2d9288;
        }
    }
    ctx->pc = 0x2D9260u;
    // 0x2d9260: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_2d9264:
    // 0x2d9264: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9264u;
    {
        const bool branch_taken_0x2d9264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9264) {
            ctx->pc = 0x2D9278u;
            goto label_2d9278;
        }
    }
    ctx->pc = 0x2D926Cu;
    // 0x2d926c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2D926Cu;
    SET_GPR_U32(ctx, 31, 0x2D9274u);
    ctx->pc = 0x2D9270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D926Cu;
            // 0x2d9270: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9274u; }
        if (ctx->pc != 0x2D9274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9274u; }
        if (ctx->pc != 0x2D9274u) { return; }
    }
    ctx->pc = 0x2D9274u;
label_2d9274:
    // 0x2d9274: 0x0  nop
    ctx->pc = 0x2d9274u;
    // NOP
label_2d9278:
    // 0x2d9278: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x2d9278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d927c: 0x5420fff9  bnel        $at, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D927Cu;
    {
        const bool branch_taken_0x2d927c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d927c) {
            ctx->pc = 0x2D9280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D927Cu;
            // 0x2d9280: 0x2631ffe0  addiu       $s1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9264;
        }
    }
    ctx->pc = 0x2D9284u;
    // 0x2d9284: 0x0  nop
    ctx->pc = 0x2d9284u;
    // NOP
label_2d9288:
    // 0x2d9288: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2d9288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2d928c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d928cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d929c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D929Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D92A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D929Cu;
            // 0x2d92a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D92A4u;
    // 0x2d92a4: 0x0  nop
    ctx->pc = 0x2d92a4u;
    // NOP
    // 0x2d92a8: 0x0  nop
    ctx->pc = 0x2d92a8u;
    // NOP
    // 0x2d92ac: 0x0  nop
    ctx->pc = 0x2d92acu;
    // NOP
}
