#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F55C0
// Address: 0x3f55c0 - 0x3f5640
void sub_003F55C0_0x3f55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F55C0_0x3f55c0");
#endif

    switch (ctx->pc) {
        case 0x3f55d8u: goto label_3f55d8;
        case 0x3f55e4u: goto label_3f55e4;
        default: break;
    }

    ctx->pc = 0x3f55c0u;

    // 0x3f55c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f55c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f55c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f55cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f55ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3f55d0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3F55D0u;
    SET_GPR_U32(ctx, 31, 0x3F55D8u);
    ctx->pc = 0x3F55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F55D0u;
            // 0x3f55d4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F55D8u; }
        if (ctx->pc != 0x3F55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F55D8u; }
        if (ctx->pc != 0x3F55D8u) { return; }
    }
    ctx->pc = 0x3F55D8u;
label_3f55d8:
    // 0x3f55d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f55d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3f55dc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x3F55DCu;
    SET_GPR_U32(ctx, 31, 0x3F55E4u);
    ctx->pc = 0x3F55E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F55DCu;
            // 0x3f55e0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F55E4u; }
        if (ctx->pc != 0x3F55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F55E4u; }
        if (ctx->pc != 0x3F55E4u) { return; }
    }
    ctx->pc = 0x3F55E4u;
label_3f55e4:
    // 0x3f55e4: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x3f55e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3f55e8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x3f55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x3f55ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f55ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f55f0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F55F0u;
    {
        const bool branch_taken_0x3f55f0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3f55f0) {
            ctx->pc = 0x3F55F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F55F0u;
            // 0x3f55f4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5604u;
            goto label_3f5604;
        }
    }
    ctx->pc = 0x3F55F8u;
    // 0x3f55f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f55f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f55fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F55FCu;
    {
        const bool branch_taken_0x3f55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F55FCu;
            // 0x3f5600: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f55fc) {
            ctx->pc = 0x3F561Cu;
            goto label_3f561c;
        }
    }
    ctx->pc = 0x3F5604u;
label_3f5604:
    // 0x3f5604: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3f5604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3f5608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f5608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f560c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f560cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f5610: 0x0  nop
    ctx->pc = 0x3f5610u;
    // NOP
    // 0x3f5614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f5614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3f5618: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3f5618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3f561c:
    // 0x3f561c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f561cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3f5620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f5620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f5624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f5624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5628: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3f5628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3f562c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f5630: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5630u;
            // 0x3f5634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F5638u;
    // 0x3f5638: 0x0  nop
    ctx->pc = 0x3f5638u;
    // NOP
    // 0x3f563c: 0x0  nop
    ctx->pc = 0x3f563cu;
    // NOP
}
