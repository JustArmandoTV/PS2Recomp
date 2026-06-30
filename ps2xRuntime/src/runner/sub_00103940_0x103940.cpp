#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103940
// Address: 0x103940 - 0x103980
void sub_00103940_0x103940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103940_0x103940");
#endif

    switch (ctx->pc) {
        case 0x103958u: goto label_103958;
        case 0x103964u: goto label_103964;
        default: break;
    }

    ctx->pc = 0x103940u;

    // 0x103940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103948: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10394c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103950: 0xc0431a4  jal         func_10C690
    ctx->pc = 0x103950u;
    SET_GPR_U32(ctx, 31, 0x103958u);
    ctx->pc = 0x103954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103950u;
            // 0x103954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C690u;
    if (runtime->hasFunction(0x10C690u)) {
        auto targetFn = runtime->lookupFunction(0x10C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103958u; }
        if (ctx->pc != 0x103958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C690_0x10c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103958u; }
        if (ctx->pc != 0x103958u) { return; }
    }
    ctx->pc = 0x103958u;
label_103958:
    // 0x103958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10395c: 0xc0431ac  jal         func_10C6B0
    ctx->pc = 0x10395Cu;
    SET_GPR_U32(ctx, 31, 0x103964u);
    ctx->pc = 0x103960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10395Cu;
            // 0x103960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6B0u;
    if (runtime->hasFunction(0x10C6B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103964u; }
        if (ctx->pc != 0x103964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C6B0_0x10c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103964u; }
        if (ctx->pc != 0x103964u) { return; }
    }
    ctx->pc = 0x103964u;
label_103964:
    // 0x103964: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10396c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10396cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103974: 0x3e00008  jr          $ra
    ctx->pc = 0x103974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103974u;
            // 0x103978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10397Cu;
    // 0x10397c: 0x0  nop
    ctx->pc = 0x10397cu;
    // NOP
}
