#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5610
// Address: 0x4f5610 - 0x4f56a0
void sub_004F5610_0x4f5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5610_0x4f5610");
#endif

    switch (ctx->pc) {
        case 0x4f5624u: goto label_4f5624;
        default: break;
    }

    ctx->pc = 0x4f5610u;

    // 0x4f5610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f5618: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f5618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4f561c: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4F561Cu;
    SET_GPR_U32(ctx, 31, 0x4F5624u);
    ctx->pc = 0x4F5620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F561Cu;
            // 0x4f5620: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5624u; }
        if (ctx->pc != 0x4F5624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5624u; }
        if (ctx->pc != 0x4F5624u) { return; }
    }
    ctx->pc = 0x4F5624u;
label_4f5624:
    // 0x4f5624: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F5624u;
    {
        const bool branch_taken_0x4f5624 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f5624) {
            ctx->pc = 0x4F5628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5624u;
            // 0x4f5628: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5638u;
            goto label_4f5638;
        }
    }
    ctx->pc = 0x4F562Cu;
    // 0x4f562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5630: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4F5630u;
    {
        const bool branch_taken_0x4f5630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5630u;
            // 0x4f5634: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5630) {
            ctx->pc = 0x4F5650u;
            goto label_4f5650;
        }
    }
    ctx->pc = 0x4F5638u;
label_4f5638:
    // 0x4f5638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f563c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f5640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f5640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5644: 0x0  nop
    ctx->pc = 0x4f5644u;
    // NOP
    // 0x4f5648: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4f5648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4f564c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4f564cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4f5650:
    // 0x4f5650: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4f5650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x4f5654: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4f5654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4f5658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f5658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f565c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5660: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4f5660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4f5664: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x4f5664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x4f5668: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x4f5668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x4f566c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f566cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5670: 0x0  nop
    ctx->pc = 0x4f5670u;
    // NOP
    // 0x4f5674: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4f5674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4f5678: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4f5678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4f567c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f567cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f5680: 0x0  nop
    ctx->pc = 0x4f5680u;
    // NOP
    // 0x4f5684: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f5684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x4f5688: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f5688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4f568c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4f5690: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5690u;
            // 0x4f5694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5698u;
    // 0x4f5698: 0x0  nop
    ctx->pc = 0x4f5698u;
    // NOP
    // 0x4f569c: 0x0  nop
    ctx->pc = 0x4f569cu;
    // NOP
}
