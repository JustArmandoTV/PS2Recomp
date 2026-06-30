#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E6FC0
// Address: 0x2e6fc0 - 0x2e7040
void sub_002E6FC0_0x2e6fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6FC0_0x2e6fc0");
#endif

    switch (ctx->pc) {
        case 0x2e6ff0u: goto label_2e6ff0;
        default: break;
    }

    ctx->pc = 0x2e6fc0u;

    // 0x2e6fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6fc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e6fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e6fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6fd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e6fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e6fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6fdc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2e6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2e6fe0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e6fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fe8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x2E6FE8u;
    SET_GPR_U32(ctx, 31, 0x2E6FF0u);
    ctx->pc = 0x2E6FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FE8u;
            // 0x2e6fec: 0x24a51e00  addiu       $a1, $a1, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FF0u; }
        if (ctx->pc != 0x2E6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6FF0u; }
        if (ctx->pc != 0x2E6FF0u) { return; }
    }
    ctx->pc = 0x2E6FF0u;
label_2e6ff0:
    // 0x2e6ff0: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x2e6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ff4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ff8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6ffc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2e6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2e7000: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x2e7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2e7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7008: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e700c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2e700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2e7010: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x2e7010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7014: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2e7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e701c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2e701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2e7020: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e7020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e702c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e702cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7030: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7030u;
            // 0x2e7034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7038u;
    // 0x2e7038: 0x0  nop
    ctx->pc = 0x2e7038u;
    // NOP
    // 0x2e703c: 0x0  nop
    ctx->pc = 0x2e703cu;
    // NOP
}
