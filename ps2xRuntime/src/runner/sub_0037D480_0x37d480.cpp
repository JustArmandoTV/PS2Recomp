#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D480
// Address: 0x37d480 - 0x37d500
void sub_0037D480_0x37d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D480_0x37d480");
#endif

    switch (ctx->pc) {
        case 0x37d4a4u: goto label_37d4a4;
        case 0x37d4b8u: goto label_37d4b8;
        default: break;
    }

    ctx->pc = 0x37d480u;

    // 0x37d480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d490: 0xc60c007c  lwc1        $f12, 0x7C($s0)
    ctx->pc = 0x37d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37d494: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37d498: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x37d498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37d49c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x37D49Cu;
    SET_GPR_U32(ctx, 31, 0x37D4A4u);
    ctx->pc = 0x37D4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D49Cu;
            // 0x37d4a0: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D4A4u; }
        if (ctx->pc != 0x37D4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D4A4u; }
        if (ctx->pc != 0x37D4A4u) { return; }
    }
    ctx->pc = 0x37D4A4u;
label_37d4a4:
    // 0x37d4a4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x37d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37d4a8: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x37d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37d4ac: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x37d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x37d4b0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x37D4B0u;
    SET_GPR_U32(ctx, 31, 0x37D4B8u);
    ctx->pc = 0x37D4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D4B0u;
            // 0x37d4b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D4B8u; }
        if (ctx->pc != 0x37D4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D4B8u; }
        if (ctx->pc != 0x37D4B8u) { return; }
    }
    ctx->pc = 0x37D4B8u;
label_37d4b8:
    // 0x37d4b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x37d4bc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x37d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x37d4c0: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x37d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d4c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37d4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d4c8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x37d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d4cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37d4ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x37d4d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37d4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d4d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x37D4D4u;
    {
        const bool branch_taken_0x37d4d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D4D4u;
            // 0x37d4d8: 0xe6010078  swc1        $f1, 0x78($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4d4) {
            ctx->pc = 0x37D4E8u;
            goto label_37d4e8;
        }
    }
    ctx->pc = 0x37D4DCu;
    // 0x37d4dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x37d4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x37d4e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d4e4: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x37d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_37d4e8:
    // 0x37d4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D4F0u;
            // 0x37d4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D4F8u;
    // 0x37d4f8: 0x0  nop
    ctx->pc = 0x37d4f8u;
    // NOP
    // 0x37d4fc: 0x0  nop
    ctx->pc = 0x37d4fcu;
    // NOP
}
