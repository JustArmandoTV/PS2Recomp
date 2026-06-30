#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC9A0
// Address: 0x1dc9a0 - 0x1dc9f0
void sub_001DC9A0_0x1dc9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC9A0_0x1dc9a0");
#endif

    switch (ctx->pc) {
        case 0x1dc9c0u: goto label_1dc9c0;
        case 0x1dc9d0u: goto label_1dc9d0;
        default: break;
    }

    ctx->pc = 0x1dc9a0u;

    // 0x1dc9a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dc9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dc9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dc9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9b8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1DC9B8u;
    SET_GPR_U32(ctx, 31, 0x1DC9C0u);
    ctx->pc = 0x1DC9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9B8u;
            // 0x1dc9bc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9C0u; }
        if (ctx->pc != 0x1DC9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9C0u; }
        if (ctx->pc != 0x1DC9C0u) { return; }
    }
    ctx->pc = 0x1DC9C0u;
label_1dc9c0:
    // 0x1dc9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dc9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dc9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9c8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1DC9C8u;
    SET_GPR_U32(ctx, 31, 0x1DC9D0u);
    ctx->pc = 0x1DC9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9C8u;
            // 0x1dc9cc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9D0u; }
        if (ctx->pc != 0x1DC9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9D0u; }
        if (ctx->pc != 0x1DC9D0u) { return; }
    }
    ctx->pc = 0x1DC9D0u;
label_1dc9d0:
    // 0x1dc9d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dc9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc9d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9DCu;
            // 0x1dc9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC9E4u;
    // 0x1dc9e4: 0x0  nop
    ctx->pc = 0x1dc9e4u;
    // NOP
    // 0x1dc9e8: 0x0  nop
    ctx->pc = 0x1dc9e8u;
    // NOP
    // 0x1dc9ec: 0x0  nop
    ctx->pc = 0x1dc9ecu;
    // NOP
}
