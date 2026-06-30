#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040A8B0
// Address: 0x40a8b0 - 0x40a930
void sub_0040A8B0_0x40a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A8B0_0x40a8b0");
#endif

    switch (ctx->pc) {
        case 0x40a8ccu: goto label_40a8cc;
        default: break;
    }

    ctx->pc = 0x40a8b0u;

    // 0x40a8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40a8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40a8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40a8bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x40a8c0: 0x8c5000c8  lw          $s0, 0xC8($v0)
    ctx->pc = 0x40a8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x40a8c4: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x40A8C4u;
    SET_GPR_U32(ctx, 31, 0x40A8CCu);
    ctx->pc = 0x40A8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40A8C4u;
            // 0x40a8c8: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A8CCu; }
        if (ctx->pc != 0x40A8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40A8CCu; }
        if (ctx->pc != 0x40A8CCu) { return; }
    }
    ctx->pc = 0x40A8CCu;
label_40a8cc:
    // 0x40a8cc: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x40a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40a8d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x40a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a8d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40a8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a8d8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x40A8D8u;
    {
        const bool branch_taken_0x40a8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a8d8) {
            ctx->pc = 0x40A8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A8D8u;
            // 0x40a8dc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A8F4u;
            goto label_40a8f4;
        }
    }
    ctx->pc = 0x40A8E0u;
    // 0x40a8e0: 0xc6010df0  lwc1        $f1, 0xDF0($s0)
    ctx->pc = 0x40a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40a8e4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x40a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a8e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40a8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40a8ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x40A8ECu;
    {
        const bool branch_taken_0x40a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A8ECu;
            // 0x40a8f0: 0xe6000de8  swc1        $f0, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a8ec) {
            ctx->pc = 0x40A920u;
            goto label_40a920;
        }
    }
    ctx->pc = 0x40A8F4u;
label_40a8f4:
    // 0x40a8f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40a8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40a8f8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x40A8F8u;
    {
        const bool branch_taken_0x40a8f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40a8f8) {
            ctx->pc = 0x40A8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40A8F8u;
            // 0x40a8fc: 0xc6010df0  lwc1        $f1, 0xDF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x40A914u;
            goto label_40a914;
        }
    }
    ctx->pc = 0x40A900u;
    // 0x40a900: 0xc6010df0  lwc1        $f1, 0xDF0($s0)
    ctx->pc = 0x40a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40a904: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x40a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a908: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40a908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40a90c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40A90Cu;
    {
        const bool branch_taken_0x40a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40A910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A90Cu;
            // 0x40a910: 0xe6000de8  swc1        $f0, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a90c) {
            ctx->pc = 0x40A920u;
            goto label_40a920;
        }
    }
    ctx->pc = 0x40A914u;
label_40a914:
    // 0x40a914: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x40a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40a918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40a918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40a91c: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x40a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_40a920:
    // 0x40a920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40a920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40a924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a928: 0x3e00008  jr          $ra
    ctx->pc = 0x40A928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40A928u;
            // 0x40a92c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40A930u;
}
