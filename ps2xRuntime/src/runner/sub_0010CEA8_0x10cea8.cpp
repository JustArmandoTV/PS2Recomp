#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CEA8
// Address: 0x10cea8 - 0x10cf10
void sub_0010CEA8_0x10cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CEA8_0x10cea8");
#endif

    switch (ctx->pc) {
        case 0x10ced8u: goto label_10ced8;
        case 0x10cee0u: goto label_10cee0;
        case 0x10cef8u: goto label_10cef8;
        default: break;
    }

    ctx->pc = 0x10cea8u;

    // 0x10cea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ceac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ceb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ceb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ceb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ceb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cebc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10cebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10cec0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10cec4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10cec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10cec8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CEC8u;
    {
        const bool branch_taken_0x10cec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cec8) {
            ctx->pc = 0x10CED8u;
            goto label_10ced8;
        }
    }
    ctx->pc = 0x10CED0u;
    // 0x10ced0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CED0u;
    SET_GPR_U32(ctx, 31, 0x10CED8u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CED8u; }
        if (ctx->pc != 0x10CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CED8u; }
        if (ctx->pc != 0x10CED8u) { return; }
    }
    ctx->pc = 0x10CED8u;
label_10ced8:
    // 0x10ced8: 0xc043028  jal         func_10C0A0
    ctx->pc = 0x10CED8u;
    SET_GPR_U32(ctx, 31, 0x10CEE0u);
    ctx->pc = 0x10CEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CED8u;
            // 0x10cedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C0A0u;
    if (runtime->hasFunction(0x10C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE0u; }
        if (ctx->pc != 0x10CEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C0A0_0x10c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE0u; }
        if (ctx->pc != 0x10CEE0u) { return; }
    }
    ctx->pc = 0x10CEE0u;
label_10cee0:
    // 0x10cee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee4: 0xf  sync
    ctx->pc = 0x10cee4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10cee8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CEE8u;
    {
        const bool branch_taken_0x10cee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CEE8u;
            // 0x10ceec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cee8) {
            ctx->pc = 0x10CEFCu;
            goto label_10cefc;
        }
    }
    ctx->pc = 0x10CEF0u;
    // 0x10cef0: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10CEF0u;
    SET_GPR_U32(ctx, 31, 0x10CEF8u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEF8u; }
        if (ctx->pc != 0x10CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEF8u; }
        if (ctx->pc != 0x10CEF8u) { return; }
    }
    ctx->pc = 0x10CEF8u;
label_10cef8:
    // 0x10cef8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10cef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cefc:
    // 0x10cefc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cf00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cf00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF08u;
            // 0x10cf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF10u;
}
