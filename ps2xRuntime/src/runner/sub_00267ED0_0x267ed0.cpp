#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267ED0
// Address: 0x267ed0 - 0x267f30
void sub_00267ED0_0x267ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267ED0_0x267ed0");
#endif

    switch (ctx->pc) {
        case 0x267ee4u: goto label_267ee4;
        case 0x267ef8u: goto label_267ef8;
        case 0x267f0cu: goto label_267f0c;
        default: break;
    }

    ctx->pc = 0x267ed0u;

    // 0x267ed0: 0x460c6881  sub.s       $f2, $f13, $f12
    ctx->pc = 0x267ed0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x267ed4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267edc: 0xc099fa4  jal         func_267E90
    ctx->pc = 0x267EDCu;
    SET_GPR_U32(ctx, 31, 0x267EE4u);
    ctx->pc = 0x267EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EDCu;
            // 0x267ee0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267E90u;
    if (runtime->hasFunction(0x267E90u)) {
        auto targetFn = runtime->lookupFunction(0x267E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EE4u; }
        if (ctx->pc != 0x267EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267E90_0x267e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EE4u; }
        if (ctx->pc != 0x267EE4u) { return; }
    }
    ctx->pc = 0x267EE4u;
label_267ee4:
    // 0x267ee4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x267ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x267ee8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x267ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267eec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x267eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x267ef0: 0xc099fa4  jal         func_267E90
    ctx->pc = 0x267EF0u;
    SET_GPR_U32(ctx, 31, 0x267EF8u);
    ctx->pc = 0x267EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EF0u;
            // 0x267ef4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x267E90u;
    if (runtime->hasFunction(0x267E90u)) {
        auto targetFn = runtime->lookupFunction(0x267E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF8u; }
        if (ctx->pc != 0x267EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267E90_0x267e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF8u; }
        if (ctx->pc != 0x267EF8u) { return; }
    }
    ctx->pc = 0x267EF8u;
label_267ef8:
    // 0x267ef8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x267ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x267efc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x267efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x267f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x267f04: 0xc099fa4  jal         func_267E90
    ctx->pc = 0x267F04u;
    SET_GPR_U32(ctx, 31, 0x267F0Cu);
    ctx->pc = 0x267F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F04u;
            // 0x267f08: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x267E90u;
    if (runtime->hasFunction(0x267E90u)) {
        auto targetFn = runtime->lookupFunction(0x267E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F0Cu; }
        if (ctx->pc != 0x267F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267E90_0x267e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F0Cu; }
        if (ctx->pc != 0x267F0Cu) { return; }
    }
    ctx->pc = 0x267F0Cu;
label_267f0c:
    // 0x267f0c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x267f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x267f10: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x267f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x267f14: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x267f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x267f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x267F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F1Cu;
            // 0x267f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267F24u;
    // 0x267f24: 0x0  nop
    ctx->pc = 0x267f24u;
    // NOP
    // 0x267f28: 0x0  nop
    ctx->pc = 0x267f28u;
    // NOP
    // 0x267f2c: 0x0  nop
    ctx->pc = 0x267f2cu;
    // NOP
}
