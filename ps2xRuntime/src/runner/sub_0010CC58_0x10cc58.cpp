#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CC58
// Address: 0x10cc58 - 0x10ccf0
void sub_0010CC58_0x10cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC58_0x10cc58");
#endif

    switch (ctx->pc) {
        case 0x10cc90u: goto label_10cc90;
        case 0x10cca4u: goto label_10cca4;
        default: break;
    }

    ctx->pc = 0x10cc58u;

    // 0x10cc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10cc5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10cc60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10cc64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10cc6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10cc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cc74: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10cc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10cc78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10cc7c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10cc7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10cc80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CC80u;
    {
        const bool branch_taken_0x10cc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cc80) {
            ctx->pc = 0x10CC90u;
            goto label_10cc90;
        }
    }
    ctx->pc = 0x10CC88u;
    // 0x10cc88: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CC88u;
    SET_GPR_U32(ctx, 31, 0x10CC90u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC90u; }
        if (ctx->pc != 0x10CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC90u; }
        if (ctx->pc != 0x10CC90u) { return; }
    }
    ctx->pc = 0x10CC90u;
label_10cc90:
    // 0x10cc90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10cc94: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10cc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10cc98: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10cc98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10cc9c: 0xc0432ec  jal         func_10CBB0
    ctx->pc = 0x10CC9Cu;
    SET_GPR_U32(ctx, 31, 0x10CCA4u);
    ctx->pc = 0x10CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC9Cu;
            // 0x10cca0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBB0u;
    if (runtime->hasFunction(0x10CBB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CCA4u; }
        if (ctx->pc != 0x10CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CBB0_0x10cbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CCA4u; }
        if (ctx->pc != 0x10CCA4u) { return; }
    }
    ctx->pc = 0x10CCA4u;
label_10cca4:
    // 0x10cca4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CCA4u;
    {
        const bool branch_taken_0x10cca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCA4u;
            // 0x10cca8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cca4) {
            ctx->pc = 0x10CCC0u;
            goto label_10ccc0;
        }
    }
    ctx->pc = 0x10CCACu;
    // 0x10ccac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ccacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ccb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ccb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ccb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ccb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ccb8: 0x804597c  j           func_1165F0
    ctx->pc = 0x10CCB8u;
    ctx->pc = 0x10CCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCB8u;
            // 0x10ccbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10CCC0u;
label_10ccc0:
    // 0x10ccc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ccc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ccc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ccc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ccc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ccc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCCCu;
            // 0x10ccd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CCD4u;
    // 0x10ccd4: 0x0  nop
    ctx->pc = 0x10ccd4u;
    // NOP
    // 0x10ccd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10ccdc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10cce0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10cce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10cce4: 0x80432ec  j           func_10CBB0
    ctx->pc = 0x10CCE4u;
    ctx->pc = 0x10CCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCE4u;
            // 0x10cce8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBB0u;
    if (runtime->hasFunction(0x10CBB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CBB0_0x10cbb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10CCECu;
    // 0x10ccec: 0x0  nop
    ctx->pc = 0x10ccecu;
    // NOP
}
