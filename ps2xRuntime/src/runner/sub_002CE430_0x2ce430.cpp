#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE430
// Address: 0x2ce430 - 0x2ce4d0
void sub_002CE430_0x2ce430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE430_0x2ce430");
#endif

    switch (ctx->pc) {
        case 0x2ce4c4u: goto label_2ce4c4;
        default: break;
    }

    ctx->pc = 0x2ce430u;

    // 0x2ce430: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ce434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce438: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2ce438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce43c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2ce43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce440: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2ce440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce444: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2ce444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ce448: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2ce448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2ce44c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2ce44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce450: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2ce450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2ce454: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ce454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce458: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x2ce458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2ce45c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce460: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2ce460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce464: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ce464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ce468: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2ce468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce46c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2ce46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce470: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2ce470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ce474: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2ce474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ce478: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ce478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ce47c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2ce47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ce480: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2ce480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2ce484: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ce484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ce488: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2ce488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ce48c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2ce48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2ce490: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2ce490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2ce494: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2ce494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ce498: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2ce498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2ce49c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2ce49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x2ce4a0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2ce4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2ce4a4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2ce4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2ce4a8: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x2ce4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2ce4ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ce4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ce4b0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2ce4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2ce4b4: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x2ce4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x2ce4b8: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2ce4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2ce4bc: 0xc0b45a4  jal         func_2D1690
    ctx->pc = 0x2CE4BCu;
    SET_GPR_U32(ctx, 31, 0x2CE4C4u);
    ctx->pc = 0x2CE4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4BCu;
            // 0x2ce4c0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1690u;
    if (runtime->hasFunction(0x2D1690u)) {
        auto targetFn = runtime->lookupFunction(0x2D1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4C4u; }
        if (ctx->pc != 0x2CE4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1690_0x2d1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4C4u; }
        if (ctx->pc != 0x2CE4C4u) { return; }
    }
    ctx->pc = 0x2CE4C4u;
label_2ce4c4:
    // 0x2ce4c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4C8u;
            // 0x2ce4cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE4D0u;
}
