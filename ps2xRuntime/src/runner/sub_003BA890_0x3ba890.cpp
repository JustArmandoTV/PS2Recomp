#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BA890
// Address: 0x3ba890 - 0x3ba900
void sub_003BA890_0x3ba890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA890_0x3ba890");
#endif

    switch (ctx->pc) {
        case 0x3ba8c4u: goto label_3ba8c4;
        case 0x3ba8e4u: goto label_3ba8e4;
        default: break;
    }

    ctx->pc = 0x3ba890u;

    // 0x3ba890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ba898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ba89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ba8a0: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x3ba8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba8a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ba8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba8a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA8A8u;
    {
        const bool branch_taken_0x3ba8a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BA8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8A8u;
            // 0x3ba8ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8a8) {
            ctx->pc = 0x3BA8B8u;
            goto label_3ba8b8;
        }
    }
    ctx->pc = 0x3BA8B0u;
    // 0x3ba8b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3BA8B0u;
    {
        const bool branch_taken_0x3ba8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8B0u;
            // 0x3ba8b4: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8b0) {
            ctx->pc = 0x3BA8ECu;
            goto label_3ba8ec;
        }
    }
    ctx->pc = 0x3BA8B8u;
label_3ba8b8:
    // 0x3ba8b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ba8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ba8bc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3BA8BCu;
    SET_GPR_U32(ctx, 31, 0x3BA8C4u);
    ctx->pc = 0x3BA8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8BCu;
            // 0x3ba8c0: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA8C4u; }
        if (ctx->pc != 0x3BA8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA8C4u; }
        if (ctx->pc != 0x3BA8C4u) { return; }
    }
    ctx->pc = 0x3BA8C4u;
label_3ba8c4:
    // 0x3ba8c4: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x3ba8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ba8c8: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3ba8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba8cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ba8ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ba8d0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA8D0u;
    {
        const bool branch_taken_0x3ba8d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba8d0) {
            ctx->pc = 0x3BA8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8D0u;
            // 0x3ba8d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA8F0u;
            goto label_3ba8f0;
        }
    }
    ctx->pc = 0x3BA8D8u;
    // 0x3ba8d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ba8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ba8dc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3BA8DCu;
    SET_GPR_U32(ctx, 31, 0x3BA8E4u);
    ctx->pc = 0x3BA8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8DCu;
            // 0x3ba8e0: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA8E4u; }
        if (ctx->pc != 0x3BA8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA8E4u; }
        if (ctx->pc != 0x3BA8E4u) { return; }
    }
    ctx->pc = 0x3BA8E4u;
label_3ba8e4:
    // 0x3ba8e4: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x3ba8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba8e8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x3ba8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_3ba8ec:
    // 0x3ba8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba8f0:
    // 0x3ba8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA8F4u;
            // 0x3ba8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA8FCu;
    // 0x3ba8fc: 0x0  nop
    ctx->pc = 0x3ba8fcu;
    // NOP
}
