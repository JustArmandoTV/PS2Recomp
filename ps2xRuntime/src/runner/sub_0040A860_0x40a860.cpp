#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040A860
// Address: 0x40a860 - 0x40a8b0
void sub_0040A860_0x40a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A860_0x40a860");
#endif

    switch (ctx->pc) {
        case 0x40a87cu: goto label_40a87c;
        default: break;
    }

    ctx->pc = 0x40a860u;

    // 0x40a860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40a864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40a868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40a86c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x40a870: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x40a870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x40a874: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x40A874u;
    SET_GPR_U32(ctx, 31, 0x40A87Cu);
    ctx->pc = 0x40A878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A874u;
            // 0x40a878: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A87Cu; }
        if (ctx->pc != 0x40A87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A87Cu; }
        if (ctx->pc != 0x40A87Cu) { return; }
    }
    ctx->pc = 0x40A87Cu;
label_40a87c:
    // 0x40a87c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x40a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a880: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x40a880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x40a884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40a884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40a888: 0x0  nop
    ctx->pc = 0x40a888u;
    // NOP
    // 0x40a88c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40a88cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x40a890: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40a890u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40a894: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x40a894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
    // 0x40a898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a89c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40a89cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x40A8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A8A0u;
            // 0x40a8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40A8A8u;
    // 0x40a8a8: 0x0  nop
    ctx->pc = 0x40a8a8u;
    // NOP
    // 0x40a8ac: 0x0  nop
    ctx->pc = 0x40a8acu;
    // NOP
}
