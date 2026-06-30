#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149D50
// Address: 0x149d50 - 0x149dd0
void sub_00149D50_0x149d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D50_0x149d50");
#endif

    ctx->pc = 0x149d50u;

    // 0x149d50: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x149d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149d54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149d58: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149d5c: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x149d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x149d60: 0xc4605588  lwc1        $f0, 0x5588($v1)
    ctx->pc = 0x149d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149d64: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x149d68: 0xe44355bc  swc1        $f3, 0x55BC($v0)
    ctx->pc = 0x149d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21948), bits); }
    // 0x149d6c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x149d70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x149d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149d74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149d78: 0xc442558c  lwc1        $f2, 0x558C($v0)
    ctx->pc = 0x149d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149d7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149d80: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x149d80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x149d84: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x149d88: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x149d8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x149d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x149d90: 0xe52155c4  swc1        $f1, 0x55C4($t1)
    ctx->pc = 0x149d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 21956), bits); }
    // 0x149d94: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x149d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x149d98: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x149d98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x149d9c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x149d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x149da0: 0xe50455b8  swc1        $f4, 0x55B8($t0)
    ctx->pc = 0x149da0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 21944), bits); }
    // 0x149da4: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x149da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x149da8: 0xe46055d8  swc1        $f0, 0x55D8($v1)
    ctx->pc = 0x149da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21976), bits); }
    // 0x149dac: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x149dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x149db0: 0xe4c355dc  swc1        $f3, 0x55DC($a2)
    ctx->pc = 0x149db0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 21980), bits); }
    // 0x149db4: 0xe4a155e4  swc1        $f1, 0x55E4($a1)
    ctx->pc = 0x149db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 21988), bits); }
    // 0x149db8: 0xe4e455c0  swc1        $f4, 0x55C0($a3)
    ctx->pc = 0x149db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 21952), bits); }
    // 0x149dbc: 0x8052648  j           func_149920
    ctx->pc = 0x149DBCu;
    ctx->pc = 0x149DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DBCu;
            // 0x149dc0: 0xe44055e0  swc1        $f0, 0x55E0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21984), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149920u;
    if (runtime->hasFunction(0x149920u)) {
        auto targetFn = runtime->lookupFunction(0x149920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00149920_0x149920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x149DC4u;
    // 0x149dc4: 0x0  nop
    ctx->pc = 0x149dc4u;
    // NOP
    // 0x149dc8: 0x0  nop
    ctx->pc = 0x149dc8u;
    // NOP
    // 0x149dcc: 0x0  nop
    ctx->pc = 0x149dccu;
    // NOP
}
