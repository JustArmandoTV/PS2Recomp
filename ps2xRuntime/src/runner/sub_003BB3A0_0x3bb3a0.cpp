#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB3A0
// Address: 0x3bb3a0 - 0x3bb430
void sub_003BB3A0_0x3bb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB3A0_0x3bb3a0");
#endif

    switch (ctx->pc) {
        case 0x3bb3f4u: goto label_3bb3f4;
        case 0x3bb400u: goto label_3bb400;
        case 0x3bb410u: goto label_3bb410;
        default: break;
    }

    ctx->pc = 0x3bb3a0u;

    // 0x3bb3a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3bb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3bb3a4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bb3a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bb3ac: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bb3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bb3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb3b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bb3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bb3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3c0: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3bb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb3c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bb3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3c8: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x3bb3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bb3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bb3d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bb3d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bb3d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bb3d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bb3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bb3dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb3dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb3e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb3e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bb3e4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb3e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3bb3e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3bb3ec: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x3BB3ECu;
    SET_GPR_U32(ctx, 31, 0x3BB3F4u);
    ctx->pc = 0x3BB3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB3ECu;
            // 0x3bb3f0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB3F4u; }
        if (ctx->pc != 0x3BB3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB3F4u; }
        if (ctx->pc != 0x3BB3F4u) { return; }
    }
    ctx->pc = 0x3BB3F4u;
label_3bb3f4:
    // 0x3bb3f4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3bb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3bb3f8: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3BB3F8u;
    SET_GPR_U32(ctx, 31, 0x3BB400u);
    ctx->pc = 0x3BB3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB3F8u;
            // 0x3bb3fc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB400u; }
        if (ctx->pc != 0x3BB400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB400u; }
        if (ctx->pc != 0x3BB400u) { return; }
    }
    ctx->pc = 0x3BB400u;
label_3bb400:
    // 0x3bb400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bb400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb404: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bb404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bb408: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3BB408u;
    SET_GPR_U32(ctx, 31, 0x3BB410u);
    ctx->pc = 0x3BB40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB408u;
            // 0x3bb40c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB410u; }
        if (ctx->pc != 0x3BB410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB410u; }
        if (ctx->pc != 0x3BB410u) { return; }
    }
    ctx->pc = 0x3BB410u;
label_3bb410:
    // 0x3bb410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bb410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb41c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB41Cu;
            // 0x3bb420: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB424u;
    // 0x3bb424: 0x0  nop
    ctx->pc = 0x3bb424u;
    // NOP
    // 0x3bb428: 0x0  nop
    ctx->pc = 0x3bb428u;
    // NOP
    // 0x3bb42c: 0x0  nop
    ctx->pc = 0x3bb42cu;
    // NOP
}
