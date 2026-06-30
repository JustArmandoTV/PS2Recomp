#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188928
// Address: 0x188928 - 0x1889d0
void sub_00188928_0x188928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188928_0x188928");
#endif

    switch (ctx->pc) {
        case 0x188944u: goto label_188944;
        case 0x188958u: goto label_188958;
        case 0x18896cu: goto label_18896c;
        case 0x188980u: goto label_188980;
        case 0x188994u: goto label_188994;
        case 0x1889a0u: goto label_1889a0;
        default: break;
    }

    ctx->pc = 0x188928u;

    // 0x188928: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18892c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188934: 0x24846938  addiu       $a0, $a0, 0x6938
    ctx->pc = 0x188934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26936));
    // 0x188938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18893c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x18893Cu;
    SET_GPR_U32(ctx, 31, 0x188944u);
    ctx->pc = 0x188940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18893Cu;
            // 0x188940: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188944u; }
        if (ctx->pc != 0x188944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188944u; }
        if (ctx->pc != 0x188944u) { return; }
    }
    ctx->pc = 0x188944u;
label_188944:
    // 0x188944: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x188948: 0x2484fe20  addiu       $a0, $a0, -0x1E0
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
    // 0x18894c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18894cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188950: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x188950u;
    SET_GPR_U32(ctx, 31, 0x188958u);
    ctx->pc = 0x188954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188950u;
            // 0x188954: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188958u; }
        if (ctx->pc != 0x188958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188958u; }
        if (ctx->pc != 0x188958u) { return; }
    }
    ctx->pc = 0x188958u;
label_188958:
    // 0x188958: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x188958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18895c: 0x2484fe28  addiu       $a0, $a0, -0x1D8
    ctx->pc = 0x18895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966824));
    // 0x188960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188964: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x188964u;
    SET_GPR_U32(ctx, 31, 0x18896Cu);
    ctx->pc = 0x188968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188964u;
            // 0x188968: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18896Cu; }
        if (ctx->pc != 0x18896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18896Cu; }
        if (ctx->pc != 0x18896Cu) { return; }
    }
    ctx->pc = 0x18896Cu;
label_18896c:
    // 0x18896c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x188970: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x188970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x188974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188978: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x188978u;
    SET_GPR_U32(ctx, 31, 0x188980u);
    ctx->pc = 0x18897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188978u;
            // 0x18897c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188980u; }
        if (ctx->pc != 0x188980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188980u; }
        if (ctx->pc != 0x188980u) { return; }
    }
    ctx->pc = 0x188980u;
label_188980:
    // 0x188980: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x188984: 0x2484fe48  addiu       $a0, $a0, -0x1B8
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966856));
    // 0x188988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18898c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x18898Cu;
    SET_GPR_U32(ctx, 31, 0x188994u);
    ctx->pc = 0x188990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18898Cu;
            // 0x188990: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188994u; }
        if (ctx->pc != 0x188994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188994u; }
        if (ctx->pc != 0x188994u) { return; }
    }
    ctx->pc = 0x188994u;
label_188994:
    // 0x188994: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x188998: 0x24636918  addiu       $v1, $v1, 0x6918
    ctx->pc = 0x188998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26904));
    // 0x18899c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1889a0:
    // 0x1889a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1889a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1889a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1889a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1889a8: 0x0  nop
    ctx->pc = 0x1889a8u;
    // NOP
    // 0x1889ac: 0x0  nop
    ctx->pc = 0x1889acu;
    // NOP
    // 0x1889b0: 0x0  nop
    ctx->pc = 0x1889b0u;
    // NOP
    // 0x1889b4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1889B4u;
    {
        const bool branch_taken_0x1889b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1889B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889B4u;
            // 0x1889b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889b4) {
            ctx->pc = 0x1889A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1889a0;
        }
    }
    ctx->pc = 0x1889BCu;
    // 0x1889bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1889bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1889c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1889c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1889c4: 0xac40fe38  sw          $zero, -0x1C8($v0)
    ctx->pc = 0x1889c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966840), GPR_U32(ctx, 0));
    // 0x1889c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1889C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1889CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889C8u;
            // 0x1889cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1889D0u;
}
