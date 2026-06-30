#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218FB0
// Address: 0x218fb0 - 0x219018
void sub_00218FB0_0x218fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218FB0_0x218fb0");
#endif

    switch (ctx->pc) {
        case 0x21900cu: goto label_21900c;
        default: break;
    }

    ctx->pc = 0x218fb0u;

    // 0x218fb0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x218fb0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218fb4: 0x70084f89  pexew       $t1, $t0
    ctx->pc = 0x218fb4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x218fb8: 0x700847c9  prot3w      $t0, $t0
    ctx->pc = 0x218fb8u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x218fbc: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x218fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218fc0: 0xc5450004  lwc1        $f5, 0x4($t2)
    ctx->pc = 0x218fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218fc4: 0xc5460008  lwc1        $f6, 0x8($t2)
    ctx->pc = 0x218fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x218fc8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x218fc8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x218fcc: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x218fccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218fd0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x218fd0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x218fd4: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x218fd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x218fd8: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x218fd8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x218fdc: 0xe5440000  swc1        $f4, 0x0($t2)
    ctx->pc = 0x218fdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x218fe0: 0xe5450004  swc1        $f5, 0x4($t2)
    ctx->pc = 0x218fe0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x218fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x218FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218FE4u;
            // 0x218fe8: 0xe5460008  swc1        $f6, 0x8($t2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218FECu;
    // 0x218fec: 0x3e00008  jr          $ra
    ctx->pc = 0x218FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218FF4u;
    // 0x218ff4: 0x0  nop
    ctx->pc = 0x218ff4u;
    // NOP
    // 0x218ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218ffc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x218ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219004: 0xc0863da  jal         func_218F68
    ctx->pc = 0x219004u;
    SET_GPR_U32(ctx, 31, 0x21900Cu);
    ctx->pc = 0x219008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219004u;
            // 0x219008: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x218F68u;
    if (runtime->hasFunction(0x218F68u)) {
        auto targetFn = runtime->lookupFunction(0x218F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21900Cu; }
        if (ctx->pc != 0x21900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218F68_0x218f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21900Cu; }
        if (ctx->pc != 0x21900Cu) { return; }
    }
    ctx->pc = 0x21900Cu;
label_21900c:
    // 0x21900c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219010: 0x3e00008  jr          $ra
    ctx->pc = 0x219010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219010u;
            // 0x219014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219018u;
}
