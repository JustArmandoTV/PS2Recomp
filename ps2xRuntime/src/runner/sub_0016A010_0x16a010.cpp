#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A010
// Address: 0x16a010 - 0x16a040
void sub_0016A010_0x16a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A010_0x16a010");
#endif

    switch (ctx->pc) {
        case 0x16a024u: goto label_16a024;
        case 0x16a02cu: goto label_16a02c;
        default: break;
    }

    ctx->pc = 0x16a010u;

    // 0x16a010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a018: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a01c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A01Cu;
    SET_GPR_U32(ctx, 31, 0x16A024u);
    ctx->pc = 0x16A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A01Cu;
            // 0x16a020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A024u; }
        if (ctx->pc != 0x16A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A024u; }
        if (ctx->pc != 0x16A024u) { return; }
    }
    ctx->pc = 0x16A024u;
label_16a024:
    // 0x16a024: 0xc05a810  jal         func_16A040
    ctx->pc = 0x16A024u;
    SET_GPR_U32(ctx, 31, 0x16A02Cu);
    ctx->pc = 0x16A028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A024u;
            // 0x16a028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A02Cu; }
        if (ctx->pc != 0x16A02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A02Cu; }
        if (ctx->pc != 0x16A02Cu) { return; }
    }
    ctx->pc = 0x16A02Cu;
label_16a02c:
    // 0x16a02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a034: 0x805adca  j           func_16B728
    ctx->pc = 0x16A034u;
    ctx->pc = 0x16A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A034u;
            // 0x16a038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B728_0x16b728(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16A03Cu;
    // 0x16a03c: 0x0  nop
    ctx->pc = 0x16a03cu;
    // NOP
}
