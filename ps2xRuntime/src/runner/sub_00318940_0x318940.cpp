#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00318940
// Address: 0x318940 - 0x3189e0
void sub_00318940_0x318940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318940_0x318940");
#endif

    switch (ctx->pc) {
        case 0x318984u: goto label_318984;
        case 0x3189b0u: goto label_3189b0;
        case 0x3189bcu: goto label_3189bc;
        case 0x3189c8u: goto label_3189c8;
        default: break;
    }

    ctx->pc = 0x318940u;

    // 0x318940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x318944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x318944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x318948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31894c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x318950: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x318950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x318958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31895c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x318960: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x318960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318964: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x318964u;
    {
        const bool branch_taken_0x318964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318964u;
            // 0x318968: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318964) {
            ctx->pc = 0x31898Cu;
            goto label_31898c;
        }
    }
    ctx->pc = 0x31896Cu;
    // 0x31896c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31896cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318970: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x318970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x318974: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x318974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x318978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31897c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x31897Cu;
    SET_GPR_U32(ctx, 31, 0x318984u);
    ctx->pc = 0x318980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31897Cu;
            // 0x318980: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318984u; }
        if (ctx->pc != 0x318984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318984u; }
        if (ctx->pc != 0x318984u) { return; }
    }
    ctx->pc = 0x318984u;
label_318984:
    // 0x318984: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x318984u;
    {
        const bool branch_taken_0x318984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318984u;
            // 0x318988: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318984) {
            ctx->pc = 0x3189B4u;
            goto label_3189b4;
        }
    }
    ctx->pc = 0x31898Cu;
label_31898c:
    // 0x31898c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x31898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x318990: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318998: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x318998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x31899c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x31899cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x3189a0: 0x0  nop
    ctx->pc = 0x3189a0u;
    // NOP
    // 0x3189a4: 0x0  nop
    ctx->pc = 0x3189a4u;
    // NOP
    // 0x3189a8: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3189A8u;
    SET_GPR_U32(ctx, 31, 0x3189B0u);
    ctx->pc = 0x3189ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3189A8u;
            // 0x3189ac: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189B0u; }
        if (ctx->pc != 0x3189B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189B0u; }
        if (ctx->pc != 0x3189B0u) { return; }
    }
    ctx->pc = 0x3189B0u;
label_3189b0:
    // 0x3189b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3189b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3189b4:
    // 0x3189b4: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3189B4u;
    SET_GPR_U32(ctx, 31, 0x3189BCu);
    ctx->pc = 0x3189B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3189B4u;
            // 0x3189b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189BCu; }
        if (ctx->pc != 0x3189BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189BCu; }
        if (ctx->pc != 0x3189BCu) { return; }
    }
    ctx->pc = 0x3189BCu;
label_3189bc:
    // 0x3189bc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3189bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3189c0: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3189C0u;
    SET_GPR_U32(ctx, 31, 0x3189C8u);
    ctx->pc = 0x3189C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3189C0u;
            // 0x3189c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189C8u; }
        if (ctx->pc != 0x3189C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3189C8u; }
        if (ctx->pc != 0x3189C8u) { return; }
    }
    ctx->pc = 0x3189C8u;
label_3189c8:
    // 0x3189c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3189c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3189cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3189ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3189d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3189d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3189d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3189d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3189d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3189D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3189DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3189D8u;
            // 0x3189dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3189E0u;
}
