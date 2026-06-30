#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003297A0
// Address: 0x3297a0 - 0x329840
void sub_003297A0_0x3297a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003297A0_0x3297a0");
#endif

    switch (ctx->pc) {
        case 0x3297d8u: goto label_3297d8;
        case 0x3297f4u: goto label_3297f4;
        case 0x329814u: goto label_329814;
        default: break;
    }

    ctx->pc = 0x3297a0u;

    // 0x3297a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3297a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3297a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3297a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3297a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3297a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3297ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3297acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3297b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3297b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3297b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3297b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3297b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3297bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3297bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3297c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3297c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3297c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3297c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3297cc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3297ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3297d0: 0x8cb10d78  lw          $s1, 0xD78($a1)
    ctx->pc = 0x3297d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
    // 0x3297d4: 0x8c50078c  lw          $s0, 0x78C($v0)
    ctx->pc = 0x3297d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_3297d8:
    // 0x3297d8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x3297d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3297dc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3297dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3297e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3297e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3297e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3297e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3297e8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3297e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3297ec: 0xc04a508  jal         func_129420
    ctx->pc = 0x3297ECu;
    SET_GPR_U32(ctx, 31, 0x3297F4u);
    ctx->pc = 0x3297F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3297ECu;
            // 0x3297f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297F4u; }
        if (ctx->pc != 0x3297F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3297F4u; }
        if (ctx->pc != 0x3297F4u) { return; }
    }
    ctx->pc = 0x3297F4u;
label_3297f4:
    // 0x3297f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3297f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3297f8: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x3297f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3297fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3297FCu;
    {
        const bool branch_taken_0x3297fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3297FCu;
            // 0x329800: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297fc) {
            ctx->pc = 0x3297D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3297d8;
        }
    }
    ctx->pc = 0x329804u;
    // 0x329804: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x329804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x329808: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x329808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32980c: 0xc04a508  jal         func_129420
    ctx->pc = 0x32980Cu;
    SET_GPR_U32(ctx, 31, 0x329814u);
    ctx->pc = 0x329810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32980Cu;
            // 0x329810: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329814u; }
        if (ctx->pc != 0x329814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329814u; }
        if (ctx->pc != 0x329814u) { return; }
    }
    ctx->pc = 0x329814u;
label_329814:
    // 0x329814: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x329814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x329818: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x329818u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x32981c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329820: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x329820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329824: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32982c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32982cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329834: 0x3e00008  jr          $ra
    ctx->pc = 0x329834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329834u;
            // 0x329838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32983Cu;
    // 0x32983c: 0x0  nop
    ctx->pc = 0x32983cu;
    // NOP
}
