#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175F08
// Address: 0x175f08 - 0x175f58
void sub_00175F08_0x175f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175F08_0x175f08");
#endif

    switch (ctx->pc) {
        case 0x175f2cu: goto label_175f2c;
        case 0x175f3cu: goto label_175f3c;
        default: break;
    }

    ctx->pc = 0x175f08u;

    // 0x175f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175f18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175f20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175f24: 0xc0599de  jal         func_166778
    ctx->pc = 0x175F24u;
    SET_GPR_U32(ctx, 31, 0x175F2Cu);
    ctx->pc = 0x175F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F24u;
            // 0x175f28: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F2Cu; }
        if (ctx->pc != 0x175F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F2Cu; }
        if (ctx->pc != 0x175F2Cu) { return; }
    }
    ctx->pc = 0x175F2Cu;
label_175f2c:
    // 0x175f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f34: 0xc05d7d6  jal         func_175F58
    ctx->pc = 0x175F34u;
    SET_GPR_U32(ctx, 31, 0x175F3Cu);
    ctx->pc = 0x175F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F34u;
            // 0x175f38: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F58u;
    if (runtime->hasFunction(0x175F58u)) {
        auto targetFn = runtime->lookupFunction(0x175F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F3Cu; }
        if (ctx->pc != 0x175F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F58_0x175f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F3Cu; }
        if (ctx->pc != 0x175F3Cu) { return; }
    }
    ctx->pc = 0x175F3Cu;
label_175f3c:
    // 0x175f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175f48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175f4c: 0x80599e0  j           func_166780
    ctx->pc = 0x175F4Cu;
    ctx->pc = 0x175F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F4Cu;
            // 0x175f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175F54u;
    // 0x175f54: 0x0  nop
    ctx->pc = 0x175f54u;
    // NOP
}
