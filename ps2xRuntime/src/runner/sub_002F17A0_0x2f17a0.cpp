#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F17A0
// Address: 0x2f17a0 - 0x2f1840
void sub_002F17A0_0x2f17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F17A0_0x2f17a0");
#endif

    switch (ctx->pc) {
        case 0x2f17d4u: goto label_2f17d4;
        case 0x2f17e4u: goto label_2f17e4;
        case 0x2f17f0u: goto label_2f17f0;
        case 0x2f17fcu: goto label_2f17fc;
        case 0x2f181cu: goto label_2f181c;
        default: break;
    }

    ctx->pc = 0x2f17a0u;

    // 0x2f17a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f17a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f17a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f17ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f17b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f17b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f17b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f17bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f17bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f17c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f17c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f17c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f17c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17cc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2F17CCu;
    SET_GPR_U32(ctx, 31, 0x2F17D4u);
    ctx->pc = 0x2F17D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17CCu;
            // 0x2f17d0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17D4u; }
        if (ctx->pc != 0x2F17D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17D4u; }
        if (ctx->pc != 0x2F17D4u) { return; }
    }
    ctx->pc = 0x2F17D4u;
label_2f17d4:
    // 0x2f17d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f17d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f17d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f17dc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2F17DCu;
    SET_GPR_U32(ctx, 31, 0x2F17E4u);
    ctx->pc = 0x2F17E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17DCu;
            // 0x2f17e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17E4u; }
        if (ctx->pc != 0x2F17E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17E4u; }
        if (ctx->pc != 0x2F17E4u) { return; }
    }
    ctx->pc = 0x2F17E4u;
label_2f17e4:
    // 0x2f17e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f17e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f17e8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2F17E8u;
    SET_GPR_U32(ctx, 31, 0x2F17F0u);
    ctx->pc = 0x2F17ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17E8u;
            // 0x2f17ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17F0u; }
        if (ctx->pc != 0x2F17F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17F0u; }
        if (ctx->pc != 0x2F17F0u) { return; }
    }
    ctx->pc = 0x2F17F0u;
label_2f17f0:
    // 0x2f17f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f17f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f17f4: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x2F17F4u;
    SET_GPR_U32(ctx, 31, 0x2F17FCu);
    ctx->pc = 0x2F17F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F17F4u;
            // 0x2f17f8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17FCu; }
        if (ctx->pc != 0x2F17FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F17FCu; }
        if (ctx->pc != 0x2F17FCu) { return; }
    }
    ctx->pc = 0x2F17FCu;
label_2f17fc:
    // 0x2f17fc: 0x0  nop
    ctx->pc = 0x2f17fcu;
    // NOP
    // 0x2f1800: 0x0  nop
    ctx->pc = 0x2f1800u;
    // NOP
    // 0x2f1804: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2f1804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2f1808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f180c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1810: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f1810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f1814: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2F1814u;
    SET_GPR_U32(ctx, 31, 0x2F181Cu);
    ctx->pc = 0x2F1818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1814u;
            // 0x2f1818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F181Cu; }
        if (ctx->pc != 0x2F181Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F181Cu; }
        if (ctx->pc != 0x2F181Cu) { return; }
    }
    ctx->pc = 0x2F181Cu;
label_2f181c:
    // 0x2f181c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2f181cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x2f1820: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f1820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1824: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f1824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1828: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f182c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f182cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1830: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1834: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1834u;
            // 0x2f1838: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F183Cu;
    // 0x2f183c: 0x0  nop
    ctx->pc = 0x2f183cu;
    // NOP
}
