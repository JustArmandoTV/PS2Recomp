#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055CC10
// Address: 0x55cc10 - 0x55cf10
void sub_0055CC10_0x55cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055CC10_0x55cc10");
#endif

    switch (ctx->pc) {
        case 0x55cc3cu: goto label_55cc3c;
        case 0x55cc44u: goto label_55cc44;
        case 0x55cc88u: goto label_55cc88;
        case 0x55cc94u: goto label_55cc94;
        case 0x55cca8u: goto label_55cca8;
        case 0x55ccb4u: goto label_55ccb4;
        case 0x55ccc8u: goto label_55ccc8;
        case 0x55cce8u: goto label_55cce8;
        case 0x55cd04u: goto label_55cd04;
        case 0x55cd24u: goto label_55cd24;
        case 0x55cd34u: goto label_55cd34;
        case 0x55cd84u: goto label_55cd84;
        case 0x55cd90u: goto label_55cd90;
        case 0x55cda4u: goto label_55cda4;
        case 0x55cdacu: goto label_55cdac;
        case 0x55cdb4u: goto label_55cdb4;
        case 0x55cdd0u: goto label_55cdd0;
        case 0x55ce40u: goto label_55ce40;
        case 0x55cea0u: goto label_55cea0;
        case 0x55ceacu: goto label_55ceac;
        case 0x55ceb8u: goto label_55ceb8;
        case 0x55cec4u: goto label_55cec4;
        case 0x55ced0u: goto label_55ced0;
        case 0x55cedcu: goto label_55cedc;
        case 0x55cef4u: goto label_55cef4;
        default: break;
    }

    ctx->pc = 0x55cc10u;

    // 0x55cc10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x55cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x55cc14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x55cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x55cc18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x55cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x55cc1c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x55cc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x55cc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x55cc24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55cc28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x55cc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55cc2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x55cc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55cc30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55cc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55cc34: 0xc157470  jal         func_55D1C0
    ctx->pc = 0x55CC34u;
    SET_GPR_U32(ctx, 31, 0x55CC3Cu);
    ctx->pc = 0x55CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CC34u;
            // 0x55cc38: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D1C0u;
    if (runtime->hasFunction(0x55D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x55D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC3Cu; }
        if (ctx->pc != 0x55CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D1C0_0x55d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC3Cu; }
        if (ctx->pc != 0x55CC3Cu) { return; }
    }
    ctx->pc = 0x55CC3Cu;
label_55cc3c:
    // 0x55cc3c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x55CC3Cu;
    SET_GPR_U32(ctx, 31, 0x55CC44u);
    ctx->pc = 0x55CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CC3Cu;
            // 0x55cc40: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC44u; }
        if (ctx->pc != 0x55CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC44u; }
        if (ctx->pc != 0x55CC44u) { return; }
    }
    ctx->pc = 0x55CC44u;
label_55cc44:
    // 0x55cc44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55cc48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55cc4c: 0x24427cd0  addiu       $v0, $v0, 0x7CD0
    ctx->pc = 0x55cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31952));
    // 0x55cc50: 0x24637d08  addiu       $v1, $v1, 0x7D08
    ctx->pc = 0x55cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32008));
    // 0x55cc54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x55cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x55cc58: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x55cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x55cc5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55cc60: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x55cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x55cc64: 0x24427c80  addiu       $v0, $v0, 0x7C80
    ctx->pc = 0x55cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
    // 0x55cc68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55cc6c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x55cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x55cc70: 0x24637cb8  addiu       $v1, $v1, 0x7CB8
    ctx->pc = 0x55cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31928));
    // 0x55cc74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x55cc78: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x55cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x55cc7c: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x55cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x55cc80: 0xc15746c  jal         func_55D1B0
    ctx->pc = 0x55CC80u;
    SET_GPR_U32(ctx, 31, 0x55CC88u);
    ctx->pc = 0x55CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CC80u;
            // 0x55cc84: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D1B0u;
    if (runtime->hasFunction(0x55D1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55D1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC88u; }
        if (ctx->pc != 0x55CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D1B0_0x55d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC88u; }
        if (ctx->pc != 0x55CC88u) { return; }
    }
    ctx->pc = 0x55CC88u;
label_55cc88:
    // 0x55cc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55cc8c: 0xc157458  jal         func_55D160
    ctx->pc = 0x55CC8Cu;
    SET_GPR_U32(ctx, 31, 0x55CC94u);
    ctx->pc = 0x55CC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CC8Cu;
            // 0x55cc90: 0x26440094  addiu       $a0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D160u;
    if (runtime->hasFunction(0x55D160u)) {
        auto targetFn = runtime->lookupFunction(0x55D160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC94u; }
        if (ctx->pc != 0x55CC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D160_0x55d160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CC94u; }
        if (ctx->pc != 0x55CC94u) { return; }
    }
    ctx->pc = 0x55CC94u;
label_55cc94:
    // 0x55cc94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x55cc98: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x55cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x55cc9c: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x55cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x55cca0: 0xc15746c  jal         func_55D1B0
    ctx->pc = 0x55CCA0u;
    SET_GPR_U32(ctx, 31, 0x55CCA8u);
    ctx->pc = 0x55CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CCA0u;
            // 0x55cca4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D1B0u;
    if (runtime->hasFunction(0x55D1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55D1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCA8u; }
        if (ctx->pc != 0x55CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D1B0_0x55d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCA8u; }
        if (ctx->pc != 0x55CCA8u) { return; }
    }
    ctx->pc = 0x55CCA8u;
label_55cca8:
    // 0x55cca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55ccac: 0xc157458  jal         func_55D160
    ctx->pc = 0x55CCACu;
    SET_GPR_U32(ctx, 31, 0x55CCB4u);
    ctx->pc = 0x55CCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CCACu;
            // 0x55ccb0: 0x264400b4  addiu       $a0, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D160u;
    if (runtime->hasFunction(0x55D160u)) {
        auto targetFn = runtime->lookupFunction(0x55D160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCB4u; }
        if (ctx->pc != 0x55CCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D160_0x55d160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCB4u; }
        if (ctx->pc != 0x55CCB4u) { return; }
    }
    ctx->pc = 0x55CCB4u;
label_55ccb4:
    // 0x55ccb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55ccb8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x55ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x55ccbc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x55ccc0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x55CCC0u;
    SET_GPR_U32(ctx, 31, 0x55CCC8u);
    ctx->pc = 0x55CCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CCC0u;
            // 0x55ccc4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCC8u; }
        if (ctx->pc != 0x55CCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCC8u; }
        if (ctx->pc != 0x55CCC8u) { return; }
    }
    ctx->pc = 0x55CCC8u;
label_55ccc8:
    // 0x55ccc8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x55ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x55cccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55ccd0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x55CCD0u;
    {
        const bool branch_taken_0x55ccd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CCD0u;
            // 0x55ccd4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ccd0) {
            ctx->pc = 0x55CCECu;
            goto label_55ccec;
        }
    }
    ctx->pc = 0x55CCD8u;
    // 0x55ccd8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x55ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x55ccdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55ccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55cce0: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x55CCE0u;
    SET_GPR_U32(ctx, 31, 0x55CCE8u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCE8u; }
        if (ctx->pc != 0x55CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CCE8u; }
        if (ctx->pc != 0x55CCE8u) { return; }
    }
    ctx->pc = 0x55CCE8u;
label_55cce8:
    // 0x55cce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55ccec:
    // 0x55ccec: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x55ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
    // 0x55ccf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55ccf4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x55ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x55ccf8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x55ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x55ccfc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x55CCFCu;
    SET_GPR_U32(ctx, 31, 0x55CD04u);
    ctx->pc = 0x55CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CCFCu;
            // 0x55cd00: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD04u; }
        if (ctx->pc != 0x55CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD04u; }
        if (ctx->pc != 0x55CD04u) { return; }
    }
    ctx->pc = 0x55CD04u;
label_55cd04:
    // 0x55cd04: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x55cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x55cd08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55cd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55cd0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x55CD0Cu;
    {
        const bool branch_taken_0x55cd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CD0Cu;
            // 0x55cd10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55cd0c) {
            ctx->pc = 0x55CD28u;
            goto label_55cd28;
        }
    }
    ctx->pc = 0x55CD14u;
    // 0x55cd14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x55cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x55cd18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55cd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55cd1c: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x55CD1Cu;
    SET_GPR_U32(ctx, 31, 0x55CD24u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD24u; }
        if (ctx->pc != 0x55CD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD24u; }
        if (ctx->pc != 0x55CD24u) { return; }
    }
    ctx->pc = 0x55CD24u;
label_55cd24:
    // 0x55cd24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55cd28:
    // 0x55cd28: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x55cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
    // 0x55cd2c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x55cd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x55cd30: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x55cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_55cd34:
    // 0x55cd34: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x55cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x55cd38: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x55cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x55cd3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x55cd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55cd40: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x55cd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x55cd44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x55cd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x55cd4c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x55cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x55cd50: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x55cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55cd54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x55cd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x55cd58: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x55cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x55cd5c: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x55cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x55cd60: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x55cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x55cd64: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x55cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x55cd68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x55cd6c: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x55cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x55cd70: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x55cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x55cd74: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x55cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x55cd78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x55cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x55cd7c: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x55CD7Cu;
    SET_GPR_U32(ctx, 31, 0x55CD84u);
    ctx->pc = 0x55CD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CD7Cu;
            // 0x55cd80: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD84u; }
        if (ctx->pc != 0x55CD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD84u; }
        if (ctx->pc != 0x55CD84u) { return; }
    }
    ctx->pc = 0x55CD84u;
label_55cd84:
    // 0x55cd84: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x55cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x55cd88: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x55CD88u;
    SET_GPR_U32(ctx, 31, 0x55CD90u);
    ctx->pc = 0x55CD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CD88u;
            // 0x55cd8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD90u; }
        if (ctx->pc != 0x55CD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CD90u; }
        if (ctx->pc != 0x55CD90u) { return; }
    }
    ctx->pc = 0x55CD90u;
label_55cd90:
    // 0x55cd90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x55cd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x55cd94: 0x5e00ffe7  bgtzl       $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x55CD94u;
    {
        const bool branch_taken_0x55cd94 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x55cd94) {
            ctx->pc = 0x55CD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55CD94u;
            // 0x55cd98: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CD34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55cd34;
        }
    }
    ctx->pc = 0x55CD9Cu;
    // 0x55cd9c: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x55CD9Cu;
    SET_GPR_U32(ctx, 31, 0x55CDA4u);
    ctx->pc = 0x55CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CD9Cu;
            // 0x55cda0: 0x26440094  addiu       $a0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDA4u; }
        if (ctx->pc != 0x55CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDA4u; }
        if (ctx->pc != 0x55CDA4u) { return; }
    }
    ctx->pc = 0x55CDA4u;
label_55cda4:
    // 0x55cda4: 0xc0b64ec  jal         func_2D93B0
    ctx->pc = 0x55CDA4u;
    SET_GPR_U32(ctx, 31, 0x55CDACu);
    ctx->pc = 0x55CDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CDA4u;
            // 0x55cda8: 0x264400b4  addiu       $a0, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDACu; }
        if (ctx->pc != 0x55CDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDACu; }
        if (ctx->pc != 0x55CDACu) { return; }
    }
    ctx->pc = 0x55CDACu;
label_55cdac:
    // 0x55cdac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x55cdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55cdb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x55cdb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55cdb4:
    // 0x55cdb4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x55cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x55cdb8: 0x264400b4  addiu       $a0, $s2, 0xB4
    ctx->pc = 0x55cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x55cdbc: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x55cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x55cdc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x55cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x55cdc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x55cdc8: 0xc12a70c  jal         func_4A9C30
    ctx->pc = 0x55CDC8u;
    SET_GPR_U32(ctx, 31, 0x55CDD0u);
    ctx->pc = 0x55CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CDC8u;
            // 0x55cdcc: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDD0u; }
        if (ctx->pc != 0x55CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CDD0u; }
        if (ctx->pc != 0x55CDD0u) { return; }
    }
    ctx->pc = 0x55CDD0u;
label_55cdd0:
    // 0x55cdd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x55cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x55cdd4: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x55cdd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x55cdd8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x55CDD8u;
    {
        const bool branch_taken_0x55cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55CDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CDD8u;
            // 0x55cddc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55cdd8) {
            ctx->pc = 0x55CDB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55cdb4;
        }
    }
    ctx->pc = 0x55CDE0u;
    // 0x55cde0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55cde4: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x55cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
    // 0x55cde8: 0x2c410058  sltiu       $at, $v0, 0x58
    ctx->pc = 0x55cde8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)88) ? 1 : 0);
    // 0x55cdec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x55CDECu;
    {
        const bool branch_taken_0x55cdec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55cdec) {
            ctx->pc = 0x55CE00u;
            goto label_55ce00;
        }
    }
    ctx->pc = 0x55CDF4u;
    // 0x55cdf4: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x55cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x55cdf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55cdfc: 0xac43e3c8  sw          $v1, -0x1C38($v0)
    ctx->pc = 0x55cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 3));
label_55ce00:
    // 0x55ce00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55ce04: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x55ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
    // 0x55ce08: 0x2c410058  sltiu       $at, $v0, 0x58
    ctx->pc = 0x55ce08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)88) ? 1 : 0);
    // 0x55ce0c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x55CE0Cu;
    {
        const bool branch_taken_0x55ce0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ce0c) {
            ctx->pc = 0x55CE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55CE0Cu;
            // 0x55ce10: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CE24u;
            goto label_55ce24;
        }
    }
    ctx->pc = 0x55CE14u;
    // 0x55ce14: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x55ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x55ce18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x55ce1c: 0xac43e3d0  sw          $v1, -0x1C30($v0)
    ctx->pc = 0x55ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 3));
    // 0x55ce20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x55ce20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55ce24:
    // 0x55ce24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x55ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55ce28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55ce28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x55ce2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55ce2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55ce30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55ce30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x55CE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CE34u;
            // 0x55ce38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55CE3Cu;
    // 0x55ce3c: 0x0  nop
    ctx->pc = 0x55ce3cu;
    // NOP
label_55ce40:
    // 0x55ce40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x55ce44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x55ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x55ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55ce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55ce50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55ce50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55ce54: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x55CE54u;
    {
        const bool branch_taken_0x55ce54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CE54u;
            // 0x55ce58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ce54) {
            ctx->pc = 0x55CEF4u;
            goto label_55cef4;
        }
    }
    ctx->pc = 0x55CE5Cu;
    // 0x55ce5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55ce60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55ce64: 0x24637cd0  addiu       $v1, $v1, 0x7CD0
    ctx->pc = 0x55ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31952));
    // 0x55ce68: 0x24427d08  addiu       $v0, $v0, 0x7D08
    ctx->pc = 0x55ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32008));
    // 0x55ce6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x55ce70: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x55CE70u;
    {
        const bool branch_taken_0x55ce70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CE70u;
            // 0x55ce74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ce70) {
            ctx->pc = 0x55CEDCu;
            goto label_55cedc;
        }
    }
    ctx->pc = 0x55CE78u;
    // 0x55ce78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55ce7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55ce80: 0x24637c30  addiu       $v1, $v1, 0x7C30
    ctx->pc = 0x55ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31792));
    // 0x55ce84: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x55ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x55ce88: 0x24427c68  addiu       $v0, $v0, 0x7C68
    ctx->pc = 0x55ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31848));
    // 0x55ce8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x55ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x55ce90: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x55ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x55ce94: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x55ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x55ce98: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x55CE98u;
    SET_GPR_U32(ctx, 31, 0x55CEA0u);
    ctx->pc = 0x55CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CE98u;
            // 0x55ce9c: 0x24a5c470  addiu       $a1, $a1, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEA0u; }
        if (ctx->pc != 0x55CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEA0u; }
        if (ctx->pc != 0x55CEA0u) { return; }
    }
    ctx->pc = 0x55CEA0u;
label_55cea0:
    // 0x55cea0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x55cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x55cea4: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x55CEA4u;
    SET_GPR_U32(ctx, 31, 0x55CEACu);
    ctx->pc = 0x55CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEA4u;
            // 0x55cea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEACu; }
        if (ctx->pc != 0x55CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEACu; }
        if (ctx->pc != 0x55CEACu) { return; }
    }
    ctx->pc = 0x55CEACu;
label_55ceac:
    // 0x55ceac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x55ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x55ceb0: 0xc1573dc  jal         func_55CF70
    ctx->pc = 0x55CEB0u;
    SET_GPR_U32(ctx, 31, 0x55CEB8u);
    ctx->pc = 0x55CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEB0u;
            // 0x55ceb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CF70u;
    if (runtime->hasFunction(0x55CF70u)) {
        auto targetFn = runtime->lookupFunction(0x55CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEB8u; }
        if (ctx->pc != 0x55CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055CF70_0x55cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEB8u; }
        if (ctx->pc != 0x55CEB8u) { return; }
    }
    ctx->pc = 0x55CEB8u;
label_55ceb8:
    // 0x55ceb8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x55ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x55cebc: 0xc1573dc  jal         func_55CF70
    ctx->pc = 0x55CEBCu;
    SET_GPR_U32(ctx, 31, 0x55CEC4u);
    ctx->pc = 0x55CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEBCu;
            // 0x55cec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CF70u;
    if (runtime->hasFunction(0x55CF70u)) {
        auto targetFn = runtime->lookupFunction(0x55CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEC4u; }
        if (ctx->pc != 0x55CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055CF70_0x55cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEC4u; }
        if (ctx->pc != 0x55CEC4u) { return; }
    }
    ctx->pc = 0x55CEC4u;
label_55cec4:
    // 0x55cec4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x55cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x55cec8: 0xc1573c4  jal         func_55CF10
    ctx->pc = 0x55CEC8u;
    SET_GPR_U32(ctx, 31, 0x55CED0u);
    ctx->pc = 0x55CECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEC8u;
            // 0x55cecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55CF10u;
    if (runtime->hasFunction(0x55CF10u)) {
        auto targetFn = runtime->lookupFunction(0x55CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CED0u; }
        if (ctx->pc != 0x55CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055CF10_0x55cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CED0u; }
        if (ctx->pc != 0x55CED0u) { return; }
    }
    ctx->pc = 0x55CED0u;
label_55ced0:
    // 0x55ced0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55ced4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x55CED4u;
    SET_GPR_U32(ctx, 31, 0x55CEDCu);
    ctx->pc = 0x55CED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CED4u;
            // 0x55ced8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEDCu; }
        if (ctx->pc != 0x55CEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEDCu; }
        if (ctx->pc != 0x55CEDCu) { return; }
    }
    ctx->pc = 0x55CEDCu;
label_55cedc:
    // 0x55cedc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x55cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x55cee0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55cee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x55cee4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x55CEE4u;
    {
        const bool branch_taken_0x55cee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x55cee4) {
            ctx->pc = 0x55CEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEE4u;
            // 0x55cee8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CEF8u;
            goto label_55cef8;
        }
    }
    ctx->pc = 0x55CEECu;
    // 0x55ceec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x55CEECu;
    SET_GPR_U32(ctx, 31, 0x55CEF4u);
    ctx->pc = 0x55CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CEECu;
            // 0x55cef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEF4u; }
        if (ctx->pc != 0x55CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CEF4u; }
        if (ctx->pc != 0x55CEF4u) { return; }
    }
    ctx->pc = 0x55CEF4u;
label_55cef4:
    // 0x55cef4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x55cef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55cef8:
    // 0x55cef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x55cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x55cefc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55cefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55cf00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55cf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55cf04: 0x3e00008  jr          $ra
    ctx->pc = 0x55CF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55CF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CF04u;
            // 0x55cf08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55CF0Cu;
    // 0x55cf0c: 0x0  nop
    ctx->pc = 0x55cf0cu;
    // NOP
}
