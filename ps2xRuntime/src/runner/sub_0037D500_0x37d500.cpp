#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D500
// Address: 0x37d500 - 0x37d5c0
void sub_0037D500_0x37d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D500_0x37d500");
#endif

    switch (ctx->pc) {
        case 0x37d59cu: goto label_37d59c;
        default: break;
    }

    ctx->pc = 0x37d500u;

    // 0x37d500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d504: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37d504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37d508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d50c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37d50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d514: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x37d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x37d518: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x37d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d51c: 0x3445f000  ori         $a1, $v0, 0xF000
    ctx->pc = 0x37d51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x37d520: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x37d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x37d524: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x37d528: 0x24631af0  addiu       $v1, $v1, 0x1AF0
    ctx->pc = 0x37d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6896));
    // 0x37d52c: 0x244256c0  addiu       $v0, $v0, 0x56C0
    ctx->pc = 0x37d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22208));
    // 0x37d530: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x37d530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x37d534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d538: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x37d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d53c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x37d53cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d540: 0x0  nop
    ctx->pc = 0x37d540u;
    // NOP
    // 0x37d544: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37d544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37d548: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x37d548u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x37d54c: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x37d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x37d550: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x37d550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x37d554: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x37d554u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x37d558: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37d55c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d560: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x37d560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x37d564: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x37d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x37d568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37d568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37d56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d574: 0xa0820081  sb          $v0, 0x81($a0)
    ctx->pc = 0x37d574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x37d578: 0x80830082  lb          $v1, 0x82($a0)
    ctx->pc = 0x37d578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x37d57c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x37d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x37d580: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37d580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37d584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d588: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x37d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37d58c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x37d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37d590: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x37d590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x37d594: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x37D594u;
    SET_GPR_U32(ctx, 31, 0x37D59Cu);
    ctx->pc = 0x37D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D594u;
            // 0x37d598: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D59Cu; }
        if (ctx->pc != 0x37D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D59Cu; }
        if (ctx->pc != 0x37D59Cu) { return; }
    }
    ctx->pc = 0x37D59Cu;
label_37d59c:
    // 0x37d59c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d5a0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x37d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x37d5a4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x37d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x37d5a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D5B0u;
            // 0x37d5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D5B8u;
    // 0x37d5b8: 0x0  nop
    ctx->pc = 0x37d5b8u;
    // NOP
    // 0x37d5bc: 0x0  nop
    ctx->pc = 0x37d5bcu;
    // NOP
}
