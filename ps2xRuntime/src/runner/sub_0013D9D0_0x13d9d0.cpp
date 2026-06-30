#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D9D0
// Address: 0x13d9d0 - 0x13dc00
void sub_0013D9D0_0x13d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D9D0_0x13d9d0");
#endif

    switch (ctx->pc) {
        case 0x13da00u: goto label_13da00;
        case 0x13da08u: goto label_13da08;
        case 0x13da30u: goto label_13da30;
        case 0x13da40u: goto label_13da40;
        case 0x13da54u: goto label_13da54;
        case 0x13da60u: goto label_13da60;
        case 0x13da6cu: goto label_13da6c;
        case 0x13da88u: goto label_13da88;
        case 0x13da90u: goto label_13da90;
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa8u: goto label_13daa8;
        case 0x13dab4u: goto label_13dab4;
        case 0x13dabcu: goto label_13dabc;
        case 0x13dac4u: goto label_13dac4;
        case 0x13dae8u: goto label_13dae8;
        case 0x13daf8u: goto label_13daf8;
        case 0x13db08u: goto label_13db08;
        case 0x13db20u: goto label_13db20;
        case 0x13db38u: goto label_13db38;
        case 0x13db44u: goto label_13db44;
        case 0x13db54u: goto label_13db54;
        case 0x13db5cu: goto label_13db5c;
        case 0x13db78u: goto label_13db78;
        case 0x13db84u: goto label_13db84;
        case 0x13db8cu: goto label_13db8c;
        case 0x13db98u: goto label_13db98;
        case 0x13dba8u: goto label_13dba8;
        case 0x13dbc0u: goto label_13dbc0;
        case 0x13dbc8u: goto label_13dbc8;
        default: break;
    }

    ctx->pc = 0x13d9d0u;

    // 0x13d9d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13d9d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13d9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13d9dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d9e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13d9e4: 0x24845520  addiu       $a0, $a0, 0x5520
    ctx->pc = 0x13d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21792));
    // 0x13d9e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d9f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d9f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9f8: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x13D9F8u;
    SET_GPR_U32(ctx, 31, 0x13DA00u);
    ctx->pc = 0x13D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D9F8u;
            // 0x13d9fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA00u; }
        if (ctx->pc != 0x13DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA00u; }
        if (ctx->pc != 0x13DA00u) { return; }
    }
    ctx->pc = 0x13DA00u;
label_13da00:
    // 0x13da00: 0xc052648  jal         func_149920
    ctx->pc = 0x13DA00u;
    SET_GPR_U32(ctx, 31, 0x13DA08u);
    ctx->pc = 0x13DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA00u;
            // 0x13da04: 0xaf908160  sw          $s0, -0x7EA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149920u;
    if (runtime->hasFunction(0x149920u)) {
        auto targetFn = runtime->lookupFunction(0x149920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA08u; }
        if (ctx->pc != 0x13DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149920_0x149920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA08u; }
        if (ctx->pc != 0x13DA08u) { return; }
    }
    ctx->pc = 0x13DA08u;
label_13da08:
    // 0x13da08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13da08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13da0c: 0x12030033  beq         $s0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x13DA0Cu;
    {
        const bool branch_taken_0x13da0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x13da0c) {
            ctx->pc = 0x13DADCu;
            goto label_13dadc;
        }
    }
    ctx->pc = 0x13DA14u;
    // 0x13da14: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DA14u;
    {
        const bool branch_taken_0x13da14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13da14) {
            ctx->pc = 0x13DA24u;
            goto label_13da24;
        }
    }
    ctx->pc = 0x13DA1Cu;
    // 0x13da1c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x13DA1Cu;
    {
        const bool branch_taken_0x13da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA1Cu;
            // 0x13da20: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da1c) {
            ctx->pc = 0x13DBE0u;
            goto label_13dbe0;
        }
    }
    ctx->pc = 0x13DA24u;
label_13da24:
    // 0x13da24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13da28: 0xc049514  jal         func_125450
    ctx->pc = 0x13DA28u;
    SET_GPR_U32(ctx, 31, 0x13DA30u);
    ctx->pc = 0x13DA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA28u;
            // 0x13da2c: 0xc44c5548  lwc1        $f12, 0x5548($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA30u; }
        if (ctx->pc != 0x13DA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA30u; }
        if (ctx->pc != 0x13DA30u) { return; }
    }
    ctx->pc = 0x13DA30u;
label_13da30:
    // 0x13da30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13da30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13da34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13da38: 0xc049514  jal         func_125450
    ctx->pc = 0x13DA38u;
    SET_GPR_U32(ctx, 31, 0x13DA40u);
    ctx->pc = 0x13DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA38u;
            // 0x13da3c: 0xc44c5558  lwc1        $f12, 0x5558($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA40u; }
        if (ctx->pc != 0x13DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA40u; }
        if (ctx->pc != 0x13DA40u) { return; }
    }
    ctx->pc = 0x13DA40u;
label_13da40:
    // 0x13da40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da48: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x13da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x13da4c: 0xc049622  jal         func_125888
    ctx->pc = 0x13DA4Cu;
    SET_GPR_U32(ctx, 31, 0x13DA54u);
    ctx->pc = 0x13DA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA4Cu;
            // 0x13da50: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA54u; }
        if (ctx->pc != 0x13DA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA54u; }
        if (ctx->pc != 0x13DA54u) { return; }
    }
    ctx->pc = 0x13DA54u;
label_13da54:
    // 0x13da54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da58: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13DA58u;
    SET_GPR_U32(ctx, 31, 0x13DA60u);
    ctx->pc = 0x13DA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA58u;
            // 0x13da5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA60u; }
        if (ctx->pc != 0x13DA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA60u; }
        if (ctx->pc != 0x13DA60u) { return; }
    }
    ctx->pc = 0x13DA60u;
label_13da60:
    // 0x13da60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13da60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da64: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13DA64u;
    SET_GPR_U32(ctx, 31, 0x13DA6Cu);
    ctx->pc = 0x13DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA64u;
            // 0x13da68: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA6Cu; }
        if (ctx->pc != 0x13DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA6Cu; }
        if (ctx->pc != 0x13DA6Cu) { return; }
    }
    ctx->pc = 0x13DA6Cu;
label_13da6c:
    // 0x13da6c: 0xdf908168  ld          $s0, -0x7E98($gp)
    ctx->pc = 0x13da6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x13da70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13da74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13da78: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x13da78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13da7c: 0x2422826  xor         $a1, $s2, $v0
    ctx->pc = 0x13da7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x13da80: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13DA80u;
    SET_GPR_U32(ctx, 31, 0x13DA88u);
    ctx->pc = 0x13DA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA80u;
            // 0x13da84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA88u; }
        if (ctx->pc != 0x13DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA88u; }
        if (ctx->pc != 0x13DA88u) { return; }
    }
    ctx->pc = 0x13DA88u;
label_13da88:
    // 0x13da88: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DA88u;
    SET_GPR_U32(ctx, 31, 0x13DA90u);
    ctx->pc = 0x13DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA88u;
            // 0x13da8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA90u; }
        if (ctx->pc != 0x13DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DA90u; }
        if (ctx->pc != 0x13DA90u) { return; }
    }
    ctx->pc = 0x13DA90u;
label_13da90:
    // 0x13da90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x13da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13da94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da98: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13DA98u;
    SET_GPR_U32(ctx, 31, 0x13DAA0u);
    ctx->pc = 0x13DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DA98u;
            // 0x13da9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAA0u; }
        if (ctx->pc != 0x13DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAA0u; }
        if (ctx->pc != 0x13DAA0u) { return; }
    }
    ctx->pc = 0x13DAA0u;
label_13daa0:
    // 0x13daa0: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DAA0u;
    SET_GPR_U32(ctx, 31, 0x13DAA8u);
    ctx->pc = 0x13DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAA0u;
            // 0x13daa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAA8u; }
        if (ctx->pc != 0x13DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAA8u; }
        if (ctx->pc != 0x13DAA8u) { return; }
    }
    ctx->pc = 0x13DAA8u;
label_13daa8:
    // 0x13daa8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x13daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x13daac: 0xc0573cc  jal         func_15CF30
    ctx->pc = 0x13DAACu;
    SET_GPR_U32(ctx, 31, 0x13DAB4u);
    ctx->pc = 0x13DAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAACu;
            // 0x13dab0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF30u;
    if (runtime->hasFunction(0x15CF30u)) {
        auto targetFn = runtime->lookupFunction(0x15CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAB4u; }
        if (ctx->pc != 0x13DAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF30_0x15cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAB4u; }
        if (ctx->pc != 0x13DAB4u) { return; }
    }
    ctx->pc = 0x13DAB4u;
label_13dab4:
    // 0x13dab4: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DAB4u;
    SET_GPR_U32(ctx, 31, 0x13DABCu);
    ctx->pc = 0x13DAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAB4u;
            // 0x13dab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DABCu; }
        if (ctx->pc != 0x13DABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DABCu; }
        if (ctx->pc != 0x13DABCu) { return; }
    }
    ctx->pc = 0x13DABCu;
label_13dabc:
    // 0x13dabc: 0xc057260  jal         func_15C980
    ctx->pc = 0x13DABCu;
    SET_GPR_U32(ctx, 31, 0x13DAC4u);
    ctx->pc = 0x13DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DABCu;
            // 0x13dac0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C980u;
    if (runtime->hasFunction(0x15C980u)) {
        auto targetFn = runtime->lookupFunction(0x15C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAC4u; }
        if (ctx->pc != 0x13DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C980_0x15c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAC4u; }
        if (ctx->pc != 0x13DAC4u) { return; }
    }
    ctx->pc = 0x13DAC4u;
label_13dac4:
    // 0x13dac4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13dac8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x13dacc: 0xac605548  sw          $zero, 0x5548($v1)
    ctx->pc = 0x13daccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21832), GPR_U32(ctx, 0));
    // 0x13dad0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13dad4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x13DAD4u;
    {
        const bool branch_taken_0x13dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAD4u;
            // 0x13dad8: 0xac645558  sw          $a0, 0x5558($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21848), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dad4) {
            ctx->pc = 0x13DBDCu;
            goto label_13dbdc;
        }
    }
    ctx->pc = 0x13DADCu;
label_13dadc:
    // 0x13dadc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13dae0: 0xc049514  jal         func_125450
    ctx->pc = 0x13DAE0u;
    SET_GPR_U32(ctx, 31, 0x13DAE8u);
    ctx->pc = 0x13DAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAE0u;
            // 0x13dae4: 0xc44c5548  lwc1        $f12, 0x5548($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAE8u; }
        if (ctx->pc != 0x13DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAE8u; }
        if (ctx->pc != 0x13DAE8u) { return; }
    }
    ctx->pc = 0x13DAE8u;
label_13dae8:
    // 0x13dae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13dae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13daf0: 0xc049514  jal         func_125450
    ctx->pc = 0x13DAF0u;
    SET_GPR_U32(ctx, 31, 0x13DAF8u);
    ctx->pc = 0x13DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DAF0u;
            // 0x13daf4: 0xc44c5558  lwc1        $f12, 0x5558($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAF8u; }
        if (ctx->pc != 0x13DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DAF8u; }
        if (ctx->pc != 0x13DAF8u) { return; }
    }
    ctx->pc = 0x13DAF8u;
label_13daf8:
    // 0x13daf8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x13daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x13dafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db00: 0xc04960a  jal         func_125828
    ctx->pc = 0x13DB00u;
    SET_GPR_U32(ctx, 31, 0x13DB08u);
    ctx->pc = 0x13DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB00u;
            // 0x13db04: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB08u; }
        if (ctx->pc != 0x13DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB08u; }
        if (ctx->pc != 0x13DB08u) { return; }
    }
    ctx->pc = 0x13DB08u;
label_13db08:
    // 0x13db08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13db08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db10: 0x3c02bff0  lui         $v0, 0xBFF0
    ctx->pc = 0x13db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49136 << 16));
    // 0x13db14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13db18: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13DB18u;
    SET_GPR_U32(ctx, 31, 0x13DB20u);
    ctx->pc = 0x13DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB18u;
            // 0x13db1c: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB20u; }
        if (ctx->pc != 0x13DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB20u; }
        if (ctx->pc != 0x13DB20u) { return; }
    }
    ctx->pc = 0x13DB20u;
label_13db20:
    // 0x13db20: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13db24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13db28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13db2c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x13db2cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x13db30: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13DB30u;
    SET_GPR_U32(ctx, 31, 0x13DB38u);
    ctx->pc = 0x13DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB30u;
            // 0x13db34: 0x432826  xor         $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB38u; }
        if (ctx->pc != 0x13DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB38u; }
        if (ctx->pc != 0x13DB38u) { return; }
    }
    ctx->pc = 0x13DB38u;
label_13db38:
    // 0x13db38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13db38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db3c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13DB3Cu;
    SET_GPR_U32(ctx, 31, 0x13DB44u);
    ctx->pc = 0x13DB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB3Cu;
            // 0x13db40: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB44u; }
        if (ctx->pc != 0x13DB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB44u; }
        if (ctx->pc != 0x13DB44u) { return; }
    }
    ctx->pc = 0x13DB44u;
label_13db44:
    // 0x13db44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db48: 0xdf918168  ld          $s1, -0x7E98($gp)
    ctx->pc = 0x13db48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x13db4c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13DB4Cu;
    SET_GPR_U32(ctx, 31, 0x13DB54u);
    ctx->pc = 0x13DB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB4Cu;
            // 0x13db50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB54u; }
        if (ctx->pc != 0x13DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB54u; }
        if (ctx->pc != 0x13DB54u) { return; }
    }
    ctx->pc = 0x13DB54u;
label_13db54:
    // 0x13db54: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DB54u;
    SET_GPR_U32(ctx, 31, 0x13DB5Cu);
    ctx->pc = 0x13DB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB54u;
            // 0x13db58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB5Cu; }
        if (ctx->pc != 0x13DB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB5Cu; }
        if (ctx->pc != 0x13DB5Cu) { return; }
    }
    ctx->pc = 0x13DB5Cu;
label_13db5c:
    // 0x13db5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13db60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13db60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13db68: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x13db68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13db6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x13db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13db70: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13DB70u;
    SET_GPR_U32(ctx, 31, 0x13DB78u);
    ctx->pc = 0x13DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB70u;
            // 0x13db74: 0x2422826  xor         $a1, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB78u; }
        if (ctx->pc != 0x13DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB78u; }
        if (ctx->pc != 0x13DB78u) { return; }
    }
    ctx->pc = 0x13DB78u;
label_13db78:
    // 0x13db78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db7c: 0xc04960a  jal         func_125828
    ctx->pc = 0x13DB7Cu;
    SET_GPR_U32(ctx, 31, 0x13DB84u);
    ctx->pc = 0x13DB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB7Cu;
            // 0x13db80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB84u; }
        if (ctx->pc != 0x13DB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB84u; }
        if (ctx->pc != 0x13DB84u) { return; }
    }
    ctx->pc = 0x13DB84u;
label_13db84:
    // 0x13db84: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DB84u;
    SET_GPR_U32(ctx, 31, 0x13DB8Cu);
    ctx->pc = 0x13DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB84u;
            // 0x13db88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB8Cu; }
        if (ctx->pc != 0x13DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB8Cu; }
        if (ctx->pc != 0x13DB8Cu) { return; }
    }
    ctx->pc = 0x13DB8Cu;
label_13db8c:
    // 0x13db8c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x13db8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x13db90: 0xc0573cc  jal         func_15CF30
    ctx->pc = 0x13DB90u;
    SET_GPR_U32(ctx, 31, 0x13DB98u);
    ctx->pc = 0x13DB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB90u;
            // 0x13db94: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF30u;
    if (runtime->hasFunction(0x15CF30u)) {
        auto targetFn = runtime->lookupFunction(0x15CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB98u; }
        if (ctx->pc != 0x13DB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF30_0x15cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB98u; }
        if (ctx->pc != 0x13DB98u) { return; }
    }
    ctx->pc = 0x13DB98u;
label_13db98:
    // 0x13db98: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x13db9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13db9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dba0: 0xc04020c  jal         func_100830
    ctx->pc = 0x13DBA0u;
    SET_GPR_U32(ctx, 31, 0x13DBA8u);
    ctx->pc = 0x13DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBA0u;
            // 0x13dba4: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBA8u; }
        if (ctx->pc != 0x13DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBA8u; }
        if (ctx->pc != 0x13DBA8u) { return; }
    }
    ctx->pc = 0x13DBA8u;
label_13dba8:
    // 0x13dba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DBA8u;
    {
        const bool branch_taken_0x13dba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dba8) {
            ctx->pc = 0x13DBB8u;
            goto label_13dbb8;
        }
    }
    ctx->pc = 0x13DBB0u;
    // 0x13dbb0: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x13dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x13dbb4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x13dbb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_13dbb8:
    // 0x13dbb8: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13DBB8u;
    SET_GPR_U32(ctx, 31, 0x13DBC0u);
    ctx->pc = 0x13DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBB8u;
            // 0x13dbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBC0u; }
        if (ctx->pc != 0x13DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBC0u; }
        if (ctx->pc != 0x13DBC0u) { return; }
    }
    ctx->pc = 0x13DBC0u;
label_13dbc0:
    // 0x13dbc0: 0xc057260  jal         func_15C980
    ctx->pc = 0x13DBC0u;
    SET_GPR_U32(ctx, 31, 0x13DBC8u);
    ctx->pc = 0x13DBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBC0u;
            // 0x13dbc4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C980u;
    if (runtime->hasFunction(0x15C980u)) {
        auto targetFn = runtime->lookupFunction(0x15C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBC8u; }
        if (ctx->pc != 0x13DBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C980_0x15c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBC8u; }
        if (ctx->pc != 0x13DBC8u) { return; }
    }
    ctx->pc = 0x13DBC8u;
label_13dbc8:
    // 0x13dbc8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x13dbcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13dbd0: 0xac645548  sw          $a0, 0x5548($v1)
    ctx->pc = 0x13dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21832), GPR_U32(ctx, 4));
    // 0x13dbd4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13dbd8: 0xac605558  sw          $zero, 0x5558($v1)
    ctx->pc = 0x13dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21848), GPR_U32(ctx, 0));
label_13dbdc:
    // 0x13dbdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13dbe0:
    // 0x13dbe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13dbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13dbe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13dbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x13DBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBF0u;
            // 0x13dbf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DBF8u;
    // 0x13dbf8: 0x0  nop
    ctx->pc = 0x13dbf8u;
    // NOP
    // 0x13dbfc: 0x0  nop
    ctx->pc = 0x13dbfcu;
    // NOP
}
