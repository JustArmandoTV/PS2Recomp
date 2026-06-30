#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039BD40
// Address: 0x39bd40 - 0x39bde0
void sub_0039BD40_0x39bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BD40_0x39bd40");
#endif

    switch (ctx->pc) {
        case 0x39bd88u: goto label_39bd88;
        case 0x39bda8u: goto label_39bda8;
        default: break;
    }

    ctx->pc = 0x39bd40u;

    // 0x39bd40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39bd44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x39bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x39bd48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39bd4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x39bd50: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x39bd50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39bd58: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x39bd58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39bd60: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x39bd60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39bd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39bd68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x39bd68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39bd70: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x39bd70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39bd78: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x39bd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39bd80: 0x8c910090  lw          $s1, 0x90($a0)
    ctx->pc = 0x39bd80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x39bd84: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x39bd84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_39bd88:
    // 0x39bd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x39bd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x39bd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd98: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39bd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd9c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39bd9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bda0: 0xc0e74dc  jal         func_39D370
    ctx->pc = 0x39BDA0u;
    SET_GPR_U32(ctx, 31, 0x39BDA8u);
    ctx->pc = 0x39BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39BDA0u;
            // 0x39bda4: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39D370u;
    if (runtime->hasFunction(0x39D370u)) {
        auto targetFn = runtime->lookupFunction(0x39D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BDA8u; }
        if (ctx->pc != 0x39BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039D370_0x39d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39BDA8u; }
        if (ctx->pc != 0x39BDA8u) { return; }
    }
    ctx->pc = 0x39BDA8u;
label_39bda8:
    // 0x39bda8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x39bda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x39bdac: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x39BDACu;
    {
        const bool branch_taken_0x39bdac = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x39BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BDACu;
            // 0x39bdb0: 0x263101b0  addiu       $s1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bdac) {
            ctx->pc = 0x39BD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39bd88;
        }
    }
    ctx->pc = 0x39BDB4u;
    // 0x39bdb4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x39bdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39bdb8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39bdb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39bdbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39bdbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bdc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39bdc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bdc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39bdc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bdc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39bdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bdcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39bdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bdd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39bdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bdd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39bdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x39BDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39BDD8u;
            // 0x39bddc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39BDE0u;
}
