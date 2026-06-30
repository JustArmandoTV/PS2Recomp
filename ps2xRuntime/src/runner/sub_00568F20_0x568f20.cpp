#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568F20
// Address: 0x568f20 - 0x568f80
void sub_00568F20_0x568f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568F20_0x568f20");
#endif

    switch (ctx->pc) {
        case 0x568f38u: goto label_568f38;
        case 0x568f44u: goto label_568f44;
        case 0x568f58u: goto label_568f58;
        case 0x568f68u: goto label_568f68;
        default: break;
    }

    ctx->pc = 0x568f20u;

    // 0x568f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x568f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x568f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x568f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x568f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x568f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x568f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x568f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568f30: 0xc0f4f00  jal         func_3D3C00
    ctx->pc = 0x568F30u;
    SET_GPR_U32(ctx, 31, 0x568F38u);
    ctx->pc = 0x568F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568F30u;
            // 0x568f34: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D3C00u;
    if (runtime->hasFunction(0x3D3C00u)) {
        auto targetFn = runtime->lookupFunction(0x3D3C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F38u; }
        if (ctx->pc != 0x568F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3C00_0x3d3c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F38u; }
        if (ctx->pc != 0x568F38u) { return; }
    }
    ctx->pc = 0x568F38u;
label_568f38:
    // 0x568f38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x568f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x568f3c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x568F3Cu;
    SET_GPR_U32(ctx, 31, 0x568F44u);
    ctx->pc = 0x568F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568F3Cu;
            // 0x568f40: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F44u; }
        if (ctx->pc != 0x568F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F44u; }
        if (ctx->pc != 0x568F44u) { return; }
    }
    ctx->pc = 0x568F44u;
label_568f44:
    // 0x568f44: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x568f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x568f48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x568f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x568f4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x568f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x568f50: 0xc04cca0  jal         func_133280
    ctx->pc = 0x568F50u;
    SET_GPR_U32(ctx, 31, 0x568F58u);
    ctx->pc = 0x568F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568F50u;
            // 0x568f54: 0x24c6fd90  addiu       $a2, $a2, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F58u; }
        if (ctx->pc != 0x568F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F58u; }
        if (ctx->pc != 0x568F58u) { return; }
    }
    ctx->pc = 0x568F58u;
label_568f58:
    // 0x568f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x568f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568f5c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x568f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x568f60: 0xc0db640  jal         func_36D900
    ctx->pc = 0x568F60u;
    SET_GPR_U32(ctx, 31, 0x568F68u);
    ctx->pc = 0x568F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568F60u;
            // 0x568f64: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D900u;
    if (runtime->hasFunction(0x36D900u)) {
        auto targetFn = runtime->lookupFunction(0x36D900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F68u; }
        if (ctx->pc != 0x568F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D900_0x36d900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568F68u; }
        if (ctx->pc != 0x568F68u) { return; }
    }
    ctx->pc = 0x568F68u;
label_568f68:
    // 0x568f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x568f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x568f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x568f70: 0x3e00008  jr          $ra
    ctx->pc = 0x568F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x568F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568F70u;
            // 0x568f74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x568F78u;
    // 0x568f78: 0x0  nop
    ctx->pc = 0x568f78u;
    // NOP
    // 0x568f7c: 0x0  nop
    ctx->pc = 0x568f7cu;
    // NOP
}
