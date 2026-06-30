#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181C40
// Address: 0x181c40 - 0x181c80
void sub_00181C40_0x181c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C40_0x181c40");
#endif

    switch (ctx->pc) {
        case 0x181c5cu: goto label_181c5c;
        case 0x181c68u: goto label_181c68;
        default: break;
    }

    ctx->pc = 0x181c40u;

    // 0x181c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181c50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181c54: 0xc060704  jal         func_181C10
    ctx->pc = 0x181C54u;
    SET_GPR_U32(ctx, 31, 0x181C5Cu);
    ctx->pc = 0x181C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C54u;
            // 0x181c58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C5Cu; }
        if (ctx->pc != 0x181C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C5Cu; }
        if (ctx->pc != 0x181C5Cu) { return; }
    }
    ctx->pc = 0x181C5Cu;
label_181c5c:
    // 0x181c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c60: 0xc060720  jal         func_181C80
    ctx->pc = 0x181C60u;
    SET_GPR_U32(ctx, 31, 0x181C68u);
    ctx->pc = 0x181C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C60u;
            // 0x181c64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C80u;
    if (runtime->hasFunction(0x181C80u)) {
        auto targetFn = runtime->lookupFunction(0x181C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C68u; }
        if (ctx->pc != 0x181C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C80_0x181c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C68u; }
        if (ctx->pc != 0x181C68u) { return; }
    }
    ctx->pc = 0x181C68u;
label_181c68:
    // 0x181c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181c74: 0x806070a  j           func_181C28
    ctx->pc = 0x181C74u;
    ctx->pc = 0x181C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C74u;
            // 0x181c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181C7Cu;
    // 0x181c7c: 0x0  nop
    ctx->pc = 0x181c7cu;
    // NOP
}
