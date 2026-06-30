#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FAD50
// Address: 0x3fad50 - 0x3faea0
void sub_003FAD50_0x3fad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAD50_0x3fad50");
#endif

    switch (ctx->pc) {
        case 0x3fad7cu: goto label_3fad7c;
        case 0x3fad94u: goto label_3fad94;
        case 0x3fada0u: goto label_3fada0;
        case 0x3fadacu: goto label_3fadac;
        case 0x3fadbcu: goto label_3fadbc;
        case 0x3fadc8u: goto label_3fadc8;
        case 0x3fade0u: goto label_3fade0;
        case 0x3fadecu: goto label_3fadec;
        case 0x3fadfcu: goto label_3fadfc;
        case 0x3fae2cu: goto label_3fae2c;
        case 0x3fae38u: goto label_3fae38;
        case 0x3fae50u: goto label_3fae50;
        case 0x3fae5cu: goto label_3fae5c;
        case 0x3fae6cu: goto label_3fae6c;
        case 0x3fae7cu: goto label_3fae7c;
        case 0x3fae88u: goto label_3fae88;
        default: break;
    }

    ctx->pc = 0x3fad50u;

    // 0x3fad50: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3fad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3fad54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3fad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3fad58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3fad5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fad60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3fad60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fad64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fad68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fad6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3fad6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fad70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fad74: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3FAD74u;
    SET_GPR_U32(ctx, 31, 0x3FAD7Cu);
    ctx->pc = 0x3FAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAD74u;
            // 0x3fad78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD7Cu; }
        if (ctx->pc != 0x3FAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD7Cu; }
        if (ctx->pc != 0x3FAD7Cu) { return; }
    }
    ctx->pc = 0x3FAD7Cu;
label_3fad7c:
    // 0x3fad7c: 0xc62c00a8  lwc1        $f12, 0xA8($s1)
    ctx->pc = 0x3fad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fad80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fad84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fad88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fad88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3fad8c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FAD8Cu;
    SET_GPR_U32(ctx, 31, 0x3FAD94u);
    ctx->pc = 0x3FAD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAD8Cu;
            // 0x3fad90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD94u; }
        if (ctx->pc != 0x3FAD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAD94u; }
        if (ctx->pc != 0x3FAD94u) { return; }
    }
    ctx->pc = 0x3FAD94u;
label_3fad94:
    // 0x3fad94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fad98: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3FAD98u;
    SET_GPR_U32(ctx, 31, 0x3FADA0u);
    ctx->pc = 0x3FAD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAD98u;
            // 0x3fad9c: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADA0u; }
        if (ctx->pc != 0x3FADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADA0u; }
        if (ctx->pc != 0x3FADA0u) { return; }
    }
    ctx->pc = 0x3FADA0u;
label_3fada0:
    // 0x3fada0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3fada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3fada4: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3FADA4u;
    SET_GPR_U32(ctx, 31, 0x3FADACu);
    ctx->pc = 0x3FADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADA4u;
            // 0x3fada8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADACu; }
        if (ctx->pc != 0x3FADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADACu; }
        if (ctx->pc != 0x3FADACu) { return; }
    }
    ctx->pc = 0x3FADACu;
label_3fadac:
    // 0x3fadac: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x3fadacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x3fadb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fadb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3fadb4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FADB4u;
    SET_GPR_U32(ctx, 31, 0x3FADBCu);
    ctx->pc = 0x3FADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADB4u;
            // 0x3fadb8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADBCu; }
        if (ctx->pc != 0x3FADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADBCu; }
        if (ctx->pc != 0x3FADBCu) { return; }
    }
    ctx->pc = 0x3FADBCu;
label_3fadbc:
    // 0x3fadbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fadc0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3FADC0u;
    SET_GPR_U32(ctx, 31, 0x3FADC8u);
    ctx->pc = 0x3FADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADC0u;
            // 0x3fadc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADC8u; }
        if (ctx->pc != 0x3FADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADC8u; }
        if (ctx->pc != 0x3FADC8u) { return; }
    }
    ctx->pc = 0x3FADC8u;
label_3fadc8:
    // 0x3fadc8: 0xc62c00a0  lwc1        $f12, 0xA0($s1)
    ctx->pc = 0x3fadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fadcc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fadccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fadd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fadd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fadd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fadd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3fadd8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FADD8u;
    SET_GPR_U32(ctx, 31, 0x3FADE0u);
    ctx->pc = 0x3FADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADD8u;
            // 0x3faddc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADE0u; }
        if (ctx->pc != 0x3FADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADE0u; }
        if (ctx->pc != 0x3FADE0u) { return; }
    }
    ctx->pc = 0x3FADE0u;
label_3fade0:
    // 0x3fade0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fade4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3FADE4u;
    SET_GPR_U32(ctx, 31, 0x3FADECu);
    ctx->pc = 0x3FADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADE4u;
            // 0x3fade8: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADECu; }
        if (ctx->pc != 0x3FADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADECu; }
        if (ctx->pc != 0x3FADECu) { return; }
    }
    ctx->pc = 0x3FADECu;
label_3fadec:
    // 0x3fadec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3fadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3fadf0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3fadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fadf4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FADF4u;
    SET_GPR_U32(ctx, 31, 0x3FADFCu);
    ctx->pc = 0x3FADF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FADF4u;
            // 0x3fadf8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADFCu; }
        if (ctx->pc != 0x3FADFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FADFCu; }
        if (ctx->pc != 0x3FADFCu) { return; }
    }
    ctx->pc = 0x3FADFCu;
label_3fadfc:
    // 0x3fadfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3fae00: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3fae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3fae04: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3fae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3fae08: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x3fae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x3fae0c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FAE0Cu;
    {
        const bool branch_taken_0x3fae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fae0c) {
            ctx->pc = 0x3FAE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE0Cu;
            // 0x3fae10: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FAE30u;
            goto label_3fae30;
        }
    }
    ctx->pc = 0x3FAE14u;
    // 0x3fae14: 0x3c023f47  lui         $v0, 0x3F47
    ctx->pc = 0x3fae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16199 << 16));
    // 0x3fae18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3fae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3fae1c: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x3fae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x3fae20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fae24: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3FAE24u;
    SET_GPR_U32(ctx, 31, 0x3FAE2Cu);
    ctx->pc = 0x3FAE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE24u;
            // 0x3fae28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE2Cu; }
        if (ctx->pc != 0x3FAE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE2Cu; }
        if (ctx->pc != 0x3FAE2Cu) { return; }
    }
    ctx->pc = 0x3FAE2Cu;
label_3fae2c:
    // 0x3fae2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fae30:
    // 0x3fae30: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3FAE30u;
    SET_GPR_U32(ctx, 31, 0x3FAE38u);
    ctx->pc = 0x3FAE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE30u;
            // 0x3fae34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE38u; }
        if (ctx->pc != 0x3FAE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE38u; }
        if (ctx->pc != 0x3FAE38u) { return; }
    }
    ctx->pc = 0x3FAE38u;
label_3fae38:
    // 0x3fae38: 0xc62c00a4  lwc1        $f12, 0xA4($s1)
    ctx->pc = 0x3fae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fae3c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3fae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fae40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fae44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fae44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3fae48: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FAE48u;
    SET_GPR_U32(ctx, 31, 0x3FAE50u);
    ctx->pc = 0x3FAE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE48u;
            // 0x3fae4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE50u; }
        if (ctx->pc != 0x3FAE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE50u; }
        if (ctx->pc != 0x3FAE50u) { return; }
    }
    ctx->pc = 0x3FAE50u;
label_3fae50:
    // 0x3fae50: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x3fae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3fae54: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3FAE54u;
    SET_GPR_U32(ctx, 31, 0x3FAE5Cu);
    ctx->pc = 0x3FAE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE54u;
            // 0x3fae58: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE5Cu; }
        if (ctx->pc != 0x3FAE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE5Cu; }
        if (ctx->pc != 0x3FAE5Cu) { return; }
    }
    ctx->pc = 0x3FAE5Cu;
label_3fae5c:
    // 0x3fae5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3fae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3fae60: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3fae60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3fae64: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FAE64u;
    SET_GPR_U32(ctx, 31, 0x3FAE6Cu);
    ctx->pc = 0x3FAE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE64u;
            // 0x3fae68: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE6Cu; }
        if (ctx->pc != 0x3FAE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE6Cu; }
        if (ctx->pc != 0x3FAE6Cu) { return; }
    }
    ctx->pc = 0x3FAE6Cu;
label_3fae6c:
    // 0x3fae6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fae70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3fae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3fae74: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3FAE74u;
    SET_GPR_U32(ctx, 31, 0x3FAE7Cu);
    ctx->pc = 0x3FAE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE74u;
            // 0x3fae78: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE7Cu; }
        if (ctx->pc != 0x3FAE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE7Cu; }
        if (ctx->pc != 0x3FAE7Cu) { return; }
    }
    ctx->pc = 0x3FAE7Cu;
label_3fae7c:
    // 0x3fae7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fae80: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3FAE80u;
    SET_GPR_U32(ctx, 31, 0x3FAE88u);
    ctx->pc = 0x3FAE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE80u;
            // 0x3fae84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE88u; }
        if (ctx->pc != 0x3FAE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAE88u; }
        if (ctx->pc != 0x3FAE88u) { return; }
    }
    ctx->pc = 0x3FAE88u;
label_3fae88:
    // 0x3fae88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3fae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fae8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fae8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fae90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fae90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fae94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fae94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fae98: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAE98u;
            // 0x3fae9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FAEA0u;
}
