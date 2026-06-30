#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FAF80
// Address: 0x3faf80 - 0x3fb070
void sub_003FAF80_0x3faf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAF80_0x3faf80");
#endif

    switch (ctx->pc) {
        case 0x3fafb0u: goto label_3fafb0;
        case 0x3fafc8u: goto label_3fafc8;
        case 0x3fafd4u: goto label_3fafd4;
        case 0x3fafe0u: goto label_3fafe0;
        case 0x3fafecu: goto label_3fafec;
        case 0x3fb010u: goto label_3fb010;
        case 0x3fb044u: goto label_3fb044;
        default: break;
    }

    ctx->pc = 0x3faf80u;

    // 0x3faf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3faf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3faf84: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x3faf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x3faf88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3faf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3faf8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3faf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3faf90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3faf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3faf94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3faf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3faf98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3faf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3faf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fafa0: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x3fafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x3fafa4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3fafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3fafa8: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3FAFA8u;
    SET_GPR_U32(ctx, 31, 0x3FAFB0u);
    ctx->pc = 0x3FAFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAFA8u;
            // 0x3fafac: 0x26260820  addiu       $a2, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFB0u; }
        if (ctx->pc != 0x3FAFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFB0u; }
        if (ctx->pc != 0x3FAFB0u) { return; }
    }
    ctx->pc = 0x3FAFB0u;
label_3fafb0:
    // 0x3fafb0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3fafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3fafb4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3fafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3fafb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fafb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fafbc: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x3fafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x3fafc0: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3FAFC0u;
    SET_GPR_U32(ctx, 31, 0x3FAFC8u);
    ctx->pc = 0x3FAFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAFC0u;
            // 0x3fafc4: 0x26260820  addiu       $a2, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFC8u; }
        if (ctx->pc != 0x3FAFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFC8u; }
        if (ctx->pc != 0x3FAFC8u) { return; }
    }
    ctx->pc = 0x3FAFC8u;
label_3fafc8:
    // 0x3fafc8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x3fafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3fafcc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3FAFCCu;
    SET_GPR_U32(ctx, 31, 0x3FAFD4u);
    ctx->pc = 0x3FAFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAFCCu;
            // 0x3fafd0: 0x26250820  addiu       $a1, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFD4u; }
        if (ctx->pc != 0x3FAFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFD4u; }
        if (ctx->pc != 0x3FAFD4u) { return; }
    }
    ctx->pc = 0x3FAFD4u;
label_3fafd4:
    // 0x3fafd4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3fafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3fafd8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3FAFD8u;
    SET_GPR_U32(ctx, 31, 0x3FAFE0u);
    ctx->pc = 0x3FAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAFD8u;
            // 0x3fafdc: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFE0u; }
        if (ctx->pc != 0x3FAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFE0u; }
        if (ctx->pc != 0x3FAFE0u) { return; }
    }
    ctx->pc = 0x3FAFE0u;
label_3fafe0:
    // 0x3fafe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fafe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fafe4: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3FAFE4u;
    SET_GPR_U32(ctx, 31, 0x3FAFECu);
    ctx->pc = 0x3FAFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAFE4u;
            // 0x3fafe8: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFECu; }
        if (ctx->pc != 0x3FAFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAFECu; }
        if (ctx->pc != 0x3FAFECu) { return; }
    }
    ctx->pc = 0x3FAFECu;
label_3fafec:
    // 0x3fafec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3faff0: 0x263102c0  addiu       $s1, $s1, 0x2C0
    ctx->pc = 0x3faff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x3faff4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x3faff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x3faff8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3faff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3faffc: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x3faffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x3fb000: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3fb000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3fb004: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x3fb004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3fb008: 0xc0bc5e8  jal         func_2F17A0
    ctx->pc = 0x3FB008u;
    SET_GPR_U32(ctx, 31, 0x3FB010u);
    ctx->pc = 0x3FB00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB008u;
            // 0x3fb00c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB010u; }
        if (ctx->pc != 0x3FB010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB010u; }
        if (ctx->pc != 0x3FB010u) { return; }
    }
    ctx->pc = 0x3FB010u;
label_3fb010:
    // 0x3fb010: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x3fb010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x3fb014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb018: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x3fb018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3fb01c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3fb01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3fb020: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x3fb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fb024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fb024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fb028: 0x0  nop
    ctx->pc = 0x3fb028u;
    // NOP
    // 0x3fb02c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3fb02cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3fb030: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x3fb030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3fb034: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x3fb034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fb038: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x3fb038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x3fb03c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x3FB03Cu;
    SET_GPR_U32(ctx, 31, 0x3FB044u);
    ctx->pc = 0x3FB040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB03Cu;
            // 0x3fb040: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB044u; }
        if (ctx->pc != 0x3FB044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FB044u; }
        if (ctx->pc != 0x3FB044u) { return; }
    }
    ctx->pc = 0x3FB044u;
label_3fb044:
    // 0x3fb044: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x3fb044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fb048: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3fb04c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3fb04cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3fb050: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x3fb050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x3fb054: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x3fb054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x3fb058: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x3fb058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x3fb05c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fb05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fb060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fb064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb068: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FB068u;
            // 0x3fb06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FB070u;
}
