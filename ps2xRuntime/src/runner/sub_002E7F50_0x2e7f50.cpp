#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7F50
// Address: 0x2e7f50 - 0x2e7ff0
void sub_002E7F50_0x2e7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7F50_0x2e7f50");
#endif

    switch (ctx->pc) {
        case 0x2e7f68u: goto label_2e7f68;
        case 0x2e7f74u: goto label_2e7f74;
        default: break;
    }

    ctx->pc = 0x2e7f50u;

    // 0x2e7f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7f58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e7f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e7f5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e7f60: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E7F60u;
    SET_GPR_U32(ctx, 31, 0x2E7F68u);
    ctx->pc = 0x2E7F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F60u;
            // 0x2e7f64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F68u; }
        if (ctx->pc != 0x2E7F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F68u; }
        if (ctx->pc != 0x2E7F68u) { return; }
    }
    ctx->pc = 0x2E7F68u;
label_2e7f68:
    // 0x2e7f68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e7f6c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2E7F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E7F74u);
    ctx->pc = 0x2E7F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F6Cu;
            // 0x2e7f70: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F74u; }
        if (ctx->pc != 0x2E7F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7F74u; }
        if (ctx->pc != 0x2E7F74u) { return; }
    }
    ctx->pc = 0x2E7F74u;
label_2e7f74:
    // 0x2e7f74: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e7f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2e7f78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7f80: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x2e7f84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7f88: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7F88u;
    {
        const bool branch_taken_0x2e7f88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E7F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F88u;
            // 0x2e7f8c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f88) {
            ctx->pc = 0x2E7F9Cu;
            goto label_2e7f9c;
        }
    }
    ctx->pc = 0x2E7F90u;
    // 0x2e7f90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e7f90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7f94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7F94u;
    {
        const bool branch_taken_0x2e7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F94u;
            // 0x2e7f98: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f94) {
            ctx->pc = 0x2E7FB8u;
            goto label_2e7fb8;
        }
    }
    ctx->pc = 0x2E7F9Cu;
label_2e7f9c:
    // 0x2e7f9c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2e7fa0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e7fa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e7fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7fac: 0x0  nop
    ctx->pc = 0x2e7facu;
    // NOP
    // 0x2e7fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e7fb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e7fb8:
    // 0x2e7fb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e7fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7fbc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2e7fc0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e7fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2e7fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7fc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e7fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7fcc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2e7fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e7fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7fd4: 0x0  nop
    ctx->pc = 0x2e7fd4u;
    // NOP
    // 0x2e7fd8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e7fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e7fdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e7fe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7FE4u;
            // 0x2e7fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7FECu;
    // 0x2e7fec: 0x0  nop
    ctx->pc = 0x2e7fecu;
    // NOP
}
