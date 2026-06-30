#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00247290
// Address: 0x247290 - 0x247310
void sub_00247290_0x247290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247290_0x247290");
#endif

    switch (ctx->pc) {
        case 0x2472fcu: goto label_2472fc;
        default: break;
    }

    ctx->pc = 0x247290u;

    // 0x247290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247294: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x247294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24729c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2472a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2472a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2472a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2472a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2472a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2472a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2472ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2472b0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2472b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2472b4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2472b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2472b8: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2472b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x2472bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2472bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2472c0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2472c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2472c4: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x2472c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2472c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2472c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2472cc: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x2472ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x2472d0: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x2472d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2472d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2472d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2472d8: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x2472d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x2472dc: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x2472dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2472e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2472e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2472e4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2472e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2472e8: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x2472e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2472ec: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x2472ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2472f0: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2472f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2472f4: 0xc0a4544  jal         func_291510
    ctx->pc = 0x2472F4u;
    SET_GPR_U32(ctx, 31, 0x2472FCu);
    ctx->pc = 0x2472F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472F4u;
            // 0x2472f8: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291510u;
    if (runtime->hasFunction(0x291510u)) {
        auto targetFn = runtime->lookupFunction(0x291510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472FCu; }
        if (ctx->pc != 0x2472FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291510_0x291510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472FCu; }
        if (ctx->pc != 0x2472FCu) { return; }
    }
    ctx->pc = 0x2472FCu;
label_2472fc:
    // 0x2472fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2472fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247300: 0x3e00008  jr          $ra
    ctx->pc = 0x247300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247300u;
            // 0x247304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x247308u;
    // 0x247308: 0x0  nop
    ctx->pc = 0x247308u;
    // NOP
    // 0x24730c: 0x0  nop
    ctx->pc = 0x24730cu;
    // NOP
}
