#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5490
// Address: 0x2a5490 - 0x2a5500
void sub_002A5490_0x2a5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5490_0x2a5490");
#endif

    switch (ctx->pc) {
        case 0x2a54b8u: goto label_2a54b8;
        default: break;
    }

    ctx->pc = 0x2a5490u;

    // 0x2a5490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5498: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2a5498u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2a549c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a54a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a54a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a54a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a54a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a54a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a54acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a54b0: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x2A54B0u;
    SET_GPR_U32(ctx, 31, 0x2A54B8u);
    ctx->pc = 0x2A54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A54B0u;
            // 0x2a54b4: 0x262501f0  addiu       $a1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A54B8u; }
        if (ctx->pc != 0x2A54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A54B8u; }
        if (ctx->pc != 0x2A54B8u) { return; }
    }
    ctx->pc = 0x2A54B8u;
label_2a54b8:
    // 0x2a54b8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54bc: 0xc62001a4  lwc1        $f0, 0x1A4($s1)
    ctx->pc = 0x2a54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a54c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a54c4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a54c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a54c8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a54c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54cc: 0xc62001a8  lwc1        $f0, 0x1A8($s1)
    ctx->pc = 0x2a54ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a54d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a54d4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a54d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a54d8: 0xc62001ac  lwc1        $f0, 0x1AC($s1)
    ctx->pc = 0x2a54d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a54dc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a54dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a54e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a54e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a54e4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a54e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a54e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a54ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a54ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a54f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a54f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A54F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A54F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A54F4u;
            // 0x2a54f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A54FCu;
    // 0x2a54fc: 0x0  nop
    ctx->pc = 0x2a54fcu;
    // NOP
}
