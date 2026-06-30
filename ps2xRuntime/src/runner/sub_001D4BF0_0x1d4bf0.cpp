#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4BF0
// Address: 0x1d4bf0 - 0x1d4c60
void sub_001D4BF0_0x1d4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4BF0_0x1d4bf0");
#endif

    switch (ctx->pc) {
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c4cu: goto label_1d4c4c;
        default: break;
    }

    ctx->pc = 0x1d4bf0u;

    // 0x1d4bf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d4bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d4c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c08: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d4c0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c10: 0xc0bc610  jal         func_2F1840
    ctx->pc = 0x1D4C10u;
    SET_GPR_U32(ctx, 31, 0x1D4C18u);
    ctx->pc = 0x1D4C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C10u;
            // 0x1d4c14: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C18u; }
        if (ctx->pc != 0x1D4C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1840_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C18u; }
        if (ctx->pc != 0x1D4C18u) { return; }
    }
    ctx->pc = 0x1D4C18u;
label_1d4c18:
    // 0x1d4c18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d4c1c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1D4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C24u);
    ctx->pc = 0x1D4C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C1Cu;
            // 0x1d4c20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C24u; }
        if (ctx->pc != 0x1D4C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C24u; }
        if (ctx->pc != 0x1D4C24u) { return; }
    }
    ctx->pc = 0x1D4C24u;
label_1d4c24:
    // 0x1d4c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d4c2c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D4C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C34u);
    ctx->pc = 0x1D4C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C2Cu;
            // 0x1d4c30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C34u; }
        if (ctx->pc != 0x1D4C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C34u; }
        if (ctx->pc != 0x1D4C34u) { return; }
    }
    ctx->pc = 0x1D4C34u;
label_1d4c34:
    // 0x1d4c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c38: 0xc075328  jal         func_1D4CA0
    ctx->pc = 0x1D4C38u;
    SET_GPR_U32(ctx, 31, 0x1D4C40u);
    ctx->pc = 0x1D4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C38u;
            // 0x1d4c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C40u; }
        if (ctx->pc != 0x1D4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C40u; }
        if (ctx->pc != 0x1D4C40u) { return; }
    }
    ctx->pc = 0x1D4C40u;
label_1d4c40:
    // 0x1d4c40: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4c44: 0xc04cc44  jal         func_133110
    ctx->pc = 0x1D4C44u;
    SET_GPR_U32(ctx, 31, 0x1D4C4Cu);
    ctx->pc = 0x1D4C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C44u;
            // 0x1d4c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C4Cu; }
        if (ctx->pc != 0x1D4C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C4Cu; }
        if (ctx->pc != 0x1D4C4Cu) { return; }
    }
    ctx->pc = 0x1D4C4Cu;
label_1d4c4c:
    // 0x1d4c4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C58u;
            // 0x1d4c5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4C60u;
}
