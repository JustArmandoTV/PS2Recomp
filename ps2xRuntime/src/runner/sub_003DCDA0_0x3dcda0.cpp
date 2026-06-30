#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DCDA0
// Address: 0x3dcda0 - 0x3dcf00
void sub_003DCDA0_0x3dcda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCDA0_0x3dcda0");
#endif

    switch (ctx->pc) {
        case 0x3dcdc4u: goto label_3dcdc4;
        case 0x3dcdd8u: goto label_3dcdd8;
        case 0x3dcde0u: goto label_3dcde0;
        case 0x3dce3cu: goto label_3dce3c;
        case 0x3dce48u: goto label_3dce48;
        case 0x3dce68u: goto label_3dce68;
        case 0x3dce74u: goto label_3dce74;
        case 0x3dce7cu: goto label_3dce7c;
        case 0x3dcea8u: goto label_3dcea8;
        case 0x3dceb4u: goto label_3dceb4;
        case 0x3dced4u: goto label_3dced4;
        default: break;
    }

    ctx->pc = 0x3dcda0u;

    // 0x3dcda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dcda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dcda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dcda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3dcda8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dcda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dcdac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dcdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dcdb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dcdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcdb4: 0x265100a4  addiu       $s1, $s2, 0xA4
    ctx->pc = 0x3dcdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    // 0x3dcdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dcdbc: 0xc0f7434  jal         func_3DD0D0
    ctx->pc = 0x3DCDBCu;
    SET_GPR_U32(ctx, 31, 0x3DCDC4u);
    ctx->pc = 0x3DCDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCDBCu;
            // 0x3dcdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DD0D0u;
    if (runtime->hasFunction(0x3DD0D0u)) {
        auto targetFn = runtime->lookupFunction(0x3DD0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDC4u; }
        if (ctx->pc != 0x3DCDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DD0D0_0x3dd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDC4u; }
        if (ctx->pc != 0x3DCDC4u) { return; }
    }
    ctx->pc = 0x3DCDC4u;
label_3dcdc4:
    // 0x3dcdc4: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x3dcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x3dcdc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dcdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcdcc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3dcdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3dcdd0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3DCDD0u;
    SET_GPR_U32(ctx, 31, 0x3DCDD8u);
    ctx->pc = 0x3DCDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCDD0u;
            // 0x3dcdd4: 0xae400080  sw          $zero, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDD8u; }
        if (ctx->pc != 0x3DCDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDD8u; }
        if (ctx->pc != 0x3DCDD8u) { return; }
    }
    ctx->pc = 0x3DCDD8u;
label_3dcdd8:
    // 0x3dcdd8: 0xc0f73c0  jal         func_3DCF00
    ctx->pc = 0x3DCDD8u;
    SET_GPR_U32(ctx, 31, 0x3DCDE0u);
    ctx->pc = 0x3DCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCDD8u;
            // 0x3dcddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF00u;
    if (runtime->hasFunction(0x3DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDE0u; }
        if (ctx->pc != 0x3DCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF00_0x3dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCDE0u; }
        if (ctx->pc != 0x3DCDE0u) { return; }
    }
    ctx->pc = 0x3DCDE0u;
label_3dcde0:
    // 0x3dcde0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dcde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcde4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3dcde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3dcde8: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3dcde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dcdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dcdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcdf0: 0x0  nop
    ctx->pc = 0x3dcdf0u;
    // NOP
    // 0x3dcdf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dcdf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dcdf8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3DCDF8u;
    {
        const bool branch_taken_0x3dcdf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dcdf8) {
            ctx->pc = 0x3DCDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCDF8u;
            // 0x3dcdfc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DCE10u;
            goto label_3dce10;
        }
    }
    ctx->pc = 0x3DCE00u;
    // 0x3dce00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dce00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3dce04: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3dce04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dce08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DCE08u;
    {
        const bool branch_taken_0x3dce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE08u;
            // 0x3dce0c: 0xc64c006c  lwc1        $f12, 0x6C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce08) {
            ctx->pc = 0x3DCE28u;
            goto label_3dce28;
        }
    }
    ctx->pc = 0x3DCE10u;
label_3dce10:
    // 0x3dce10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3dce14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dce14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3dce18: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3dce18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3dce1c: 0x0  nop
    ctx->pc = 0x3dce1cu;
    // NOP
    // 0x3dce20: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3dce20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3dce24: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x3dce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dce28:
    // 0x3dce28: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
    // 0x3dce2c: 0xc64d0038  lwc1        $f13, 0x38($s2)
    ctx->pc = 0x3dce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3dce30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dce30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3dce34: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x3DCE34u;
    SET_GPR_U32(ctx, 31, 0x3DCE3Cu);
    ctx->pc = 0x3DCE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE34u;
            // 0x3dce38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE3Cu; }
        if (ctx->pc != 0x3DCE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE3Cu; }
        if (ctx->pc != 0x3DCE3Cu) { return; }
    }
    ctx->pc = 0x3DCE3Cu;
label_3dce3c:
    // 0x3dce3c: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3dce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x3dce40: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3DCE40u;
    SET_GPR_U32(ctx, 31, 0x3DCE48u);
    ctx->pc = 0x3DCE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE40u;
            // 0x3dce44: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE48u; }
        if (ctx->pc != 0x3DCE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE48u; }
        if (ctx->pc != 0x3DCE48u) { return; }
    }
    ctx->pc = 0x3DCE48u;
label_3dce48:
    // 0x3dce48: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x3dce48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x3dce4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dce50: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x3dce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x3dce54: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3dce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x3dce58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3dce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3dce5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3dce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3dce60: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3DCE60u;
    SET_GPR_U32(ctx, 31, 0x3DCE68u);
    ctx->pc = 0x3DCE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE60u;
            // 0x3dce64: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE68u; }
        if (ctx->pc != 0x3DCE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE68u; }
        if (ctx->pc != 0x3DCE68u) { return; }
    }
    ctx->pc = 0x3DCE68u;
label_3dce68:
    // 0x3dce68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dce68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dce6c: 0xc0f73cc  jal         func_3DCF30
    ctx->pc = 0x3DCE6Cu;
    SET_GPR_U32(ctx, 31, 0x3DCE74u);
    ctx->pc = 0x3DCE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE6Cu;
            // 0x3dce70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF30u;
    if (runtime->hasFunction(0x3DCF30u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE74u; }
        if (ctx->pc != 0x3DCE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF30_0x3dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE74u; }
        if (ctx->pc != 0x3DCE74u) { return; }
    }
    ctx->pc = 0x3DCE74u;
label_3dce74:
    // 0x3dce74: 0xc0f73c0  jal         func_3DCF00
    ctx->pc = 0x3DCE74u;
    SET_GPR_U32(ctx, 31, 0x3DCE7Cu);
    ctx->pc = 0x3DCE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCE74u;
            // 0x3dce78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF00u;
    if (runtime->hasFunction(0x3DCF00u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE7Cu; }
        if (ctx->pc != 0x3DCE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF00_0x3dcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCE7Cu; }
        if (ctx->pc != 0x3DCE7Cu) { return; }
    }
    ctx->pc = 0x3DCE7Cu;
label_3dce7c:
    // 0x3dce7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dce7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dce80: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3dce80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3dce84: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x3dce88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dce8c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3dce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x3dce90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dce90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3dce94: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
    // 0x3dce98: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3dce98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3dce9c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dce9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3dcea0: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x3DCEA0u;
    SET_GPR_U32(ctx, 31, 0x3DCEA8u);
    ctx->pc = 0x3DCEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCEA0u;
            // 0x3dcea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCEA8u; }
        if (ctx->pc != 0x3DCEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCEA8u; }
        if (ctx->pc != 0x3DCEA8u) { return; }
    }
    ctx->pc = 0x3DCEA8u;
label_3dcea8:
    // 0x3dcea8: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3dcea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x3dceac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3DCEACu;
    SET_GPR_U32(ctx, 31, 0x3DCEB4u);
    ctx->pc = 0x3DCEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCEACu;
            // 0x3dceb0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCEB4u; }
        if (ctx->pc != 0x3DCEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCEB4u; }
        if (ctx->pc != 0x3DCEB4u) { return; }
    }
    ctx->pc = 0x3DCEB4u;
label_3dceb4:
    // 0x3dceb4: 0xae1201c8  sw          $s2, 0x1C8($s0)
    ctx->pc = 0x3dceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 18));
    // 0x3dceb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dcebc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3dcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3dcec0: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x3dcec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x3dcec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dcec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcecc: 0xc0f73cc  jal         func_3DCF30
    ctx->pc = 0x3DCECCu;
    SET_GPR_U32(ctx, 31, 0x3DCED4u);
    ctx->pc = 0x3DCED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCECCu;
            // 0x3dced0: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF30u;
    if (runtime->hasFunction(0x3DCF30u)) {
        auto targetFn = runtime->lookupFunction(0x3DCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCED4u; }
        if (ctx->pc != 0x3DCED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DCF30_0x3dcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DCED4u; }
        if (ctx->pc != 0x3DCED4u) { return; }
    }
    ctx->pc = 0x3DCED4u;
label_3dced4:
    // 0x3dced4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dced8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dced8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dcedc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dcedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dcee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dcee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcee4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCEE4u;
            // 0x3dcee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCEECu;
    // 0x3dceec: 0x0  nop
    ctx->pc = 0x3dceecu;
    // NOP
    // 0x3dcef0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DCEF0u;
            // 0x3dcef4: 0x240236b0  addiu       $v0, $zero, 0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DCEF8u;
    // 0x3dcef8: 0x0  nop
    ctx->pc = 0x3dcef8u;
    // NOP
    // 0x3dcefc: 0x0  nop
    ctx->pc = 0x3dcefcu;
    // NOP
}
