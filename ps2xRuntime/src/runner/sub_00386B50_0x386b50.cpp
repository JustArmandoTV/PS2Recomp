#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386B50
// Address: 0x386b50 - 0x386bb0
void sub_00386B50_0x386b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386B50_0x386b50");
#endif

    switch (ctx->pc) {
        case 0x386ba0u: goto label_386ba0;
        default: break;
    }

    ctx->pc = 0x386b50u;

    // 0x386b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x386b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386b58: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x386b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x386b5c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x386b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x386b60: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x386b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386b64: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x386b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x386b68: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x386b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x386b6c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x386b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x386b70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x386b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x386b74: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x386b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x386b78: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x386b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x386b7c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x386b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x386b80: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x386b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x386b84: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x386b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386b88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x386b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x386b8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x386b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x386b90: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x386b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x386b94: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x386b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x386b98: 0xc0892b0  jal         func_224AC0
    ctx->pc = 0x386B98u;
    SET_GPR_U32(ctx, 31, 0x386BA0u);
    ctx->pc = 0x386B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386B98u;
            // 0x386b9c: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386BA0u; }
        if (ctx->pc != 0x386BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386BA0u; }
        if (ctx->pc != 0x386BA0u) { return; }
    }
    ctx->pc = 0x386BA0u;
label_386ba0:
    // 0x386ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x386BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386BA4u;
            // 0x386ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386BACu;
    // 0x386bac: 0x0  nop
    ctx->pc = 0x386bacu;
    // NOP
}
