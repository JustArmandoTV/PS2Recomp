#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011ECC8
// Address: 0x11ecc8 - 0x11eed0
void sub_0011ECC8_0x11ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ECC8_0x11ecc8");
#endif

    switch (ctx->pc) {
        case 0x11ece8u: goto label_11ece8;
        case 0x11ecf4u: goto label_11ecf4;
        case 0x11ed20u: goto label_11ed20;
        case 0x11ed38u: goto label_11ed38;
        case 0x11ed4cu: goto label_11ed4c;
        case 0x11ed5cu: goto label_11ed5c;
        case 0x11ed70u: goto label_11ed70;
        case 0x11ed78u: goto label_11ed78;
        case 0x11ed98u: goto label_11ed98;
        case 0x11edacu: goto label_11edac;
        case 0x11edd0u: goto label_11edd0;
        case 0x11edd8u: goto label_11edd8;
        default: break;
    }

    ctx->pc = 0x11ecc8u;

    // 0x11ecc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11eccc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ecd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ecd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ecd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ecdc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11ecdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x11ece0: 0xc0478f4  jal         func_11E3D0
    ctx->pc = 0x11ECE0u;
    SET_GPR_U32(ctx, 31, 0x11ECE8u);
    ctx->pc = 0x11ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECE0u;
            // 0x11ece4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D0u;
    if (runtime->hasFunction(0x11E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECE8u; }
        if (ctx->pc != 0x11ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E3D0_0x11e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECE8u; }
        if (ctx->pc != 0x11ECE8u) { return; }
    }
    ctx->pc = 0x11ECE8u;
label_11ece8:
    // 0x11ece8: 0x8e04faec  lw          $a0, -0x514($s0)
    ctx->pc = 0x11ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965996)));
    // 0x11ecec: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x11ECECu;
    SET_GPR_U32(ctx, 31, 0x11ECF4u);
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECF4u; }
        if (ctx->pc != 0x11ECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ECF4u; }
        if (ctx->pc != 0x11ECF4u) { return; }
    }
    ctx->pc = 0x11ECF4u;
label_11ecf4:
    // 0x11ecf4: 0x8e03faec  lw          $v1, -0x514($s0)
    ctx->pc = 0x11ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965996)));
    // 0x11ecf8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11ECF8u;
    {
        const bool branch_taken_0x11ecf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECF8u;
            // 0x11ecfc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecf8) {
            ctx->pc = 0x11ED28u;
            goto label_11ed28;
        }
    }
    ctx->pc = 0x11ED00u;
    // 0x11ed00: 0x8c43fad0  lw          $v1, -0x530($v0)
    ctx->pc = 0x11ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965968)));
    // 0x11ed04: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11ED04u;
    {
        const bool branch_taken_0x11ed04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11ED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED04u;
            // 0x11ed08: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed04) {
            ctx->pc = 0x11ED4Cu;
            goto label_11ed4c;
        }
    }
    ctx->pc = 0x11ED0Cu;
    // 0x11ed0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11ed10: 0x8c46fad8  lw          $a2, -0x528($v0)
    ctx->pc = 0x11ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965976)));
    // 0x11ed14: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x11ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x11ed18: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11ED18u;
    SET_GPR_U32(ctx, 31, 0x11ED20u);
    ctx->pc = 0x11ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED18u;
            // 0x11ed1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED20u; }
        if (ctx->pc != 0x11ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED20u; }
        if (ctx->pc != 0x11ED20u) { return; }
    }
    ctx->pc = 0x11ED20u;
label_11ed20:
    // 0x11ed20: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11ED20u;
    {
        const bool branch_taken_0x11ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED20u;
            // 0x11ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed20) {
            ctx->pc = 0x11EE08u;
            goto label_11ee08;
        }
    }
    ctx->pc = 0x11ED28u;
label_11ed28:
    // 0x11ed28: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11ed2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed30: 0xc047b16  jal         func_11EC58
    ctx->pc = 0x11ED30u;
    SET_GPR_U32(ctx, 31, 0x11ED38u);
    ctx->pc = 0x11ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED30u;
            // 0x11ed34: 0xac51fad8  sw          $s1, -0x528($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965976), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC58u;
    if (runtime->hasFunction(0x11EC58u)) {
        auto targetFn = runtime->lookupFunction(0x11EC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED38u; }
        if (ctx->pc != 0x11ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EC58_0x11ec58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED38u; }
        if (ctx->pc != 0x11ED38u) { return; }
    }
    ctx->pc = 0x11ED38u;
label_11ed38:
    // 0x11ed38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11ED38u;
    {
        const bool branch_taken_0x11ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED38u;
            // 0x11ed3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed38) {
            ctx->pc = 0x11ED54u;
            goto label_11ed54;
        }
    }
    ctx->pc = 0x11ED40u;
    // 0x11ed40: 0x8e04faec  lw          $a0, -0x514($s0)
    ctx->pc = 0x11ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965996)));
    // 0x11ed44: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11ED44u;
    SET_GPR_U32(ctx, 31, 0x11ED4Cu);
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED4Cu; }
        if (ctx->pc != 0x11ED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED4Cu; }
        if (ctx->pc != 0x11ED4Cu) { return; }
    }
    ctx->pc = 0x11ED4Cu;
label_11ed4c:
    // 0x11ed4c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11ED4Cu;
    {
        const bool branch_taken_0x11ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED4Cu;
            // 0x11ed50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed4c) {
            ctx->pc = 0x11EE08u;
            goto label_11ee08;
        }
    }
    ctx->pc = 0x11ED54u;
label_11ed54:
    // 0x11ed54: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x11ED54u;
    SET_GPR_U32(ctx, 31, 0x11ED5Cu);
    ctx->pc = 0x11ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED54u;
            // 0x11ed58: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED5Cu; }
        if (ctx->pc != 0x11ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ED5Cu; }
        if (ctx->pc != 0x11ED5Cu) { return; }
    }
    ctx->pc = 0x11ED5Cu;
label_11ed5c:
    // 0x11ed5c: 0x8e42fb14  lw          $v0, -0x4EC($s2)
    ctx->pc = 0x11ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966036)));
    // 0x11ed60: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11ED60u;
    {
        const bool branch_taken_0x11ed60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11ED64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED60u;
            // 0x11ed64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed60) {
            ctx->pc = 0x11EE08u;
            goto label_11ee08;
        }
    }
    ctx->pc = 0x11ED68u;
    // 0x11ed68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11ED68u;
    {
        const bool branch_taken_0x11ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED68u;
            // 0x11ed6c: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed68) {
            ctx->pc = 0x11ED94u;
            goto label_11ed94;
        }
    }
    ctx->pc = 0x11ED70u;
label_11ed70:
    // 0x11ed70: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11ed74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11ed78:
    // 0x11ed78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ed7c: 0x0  nop
    ctx->pc = 0x11ed7cu;
    // NOP
    // 0x11ed80: 0x0  nop
    ctx->pc = 0x11ed80u;
    // NOP
    // 0x11ed84: 0x0  nop
    ctx->pc = 0x11ed84u;
    // NOP
    // 0x11ed88: 0x0  nop
    ctx->pc = 0x11ed88u;
    // NOP
    // 0x11ed8c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11ED8Cu;
    {
        const bool branch_taken_0x11ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ed8c) {
            ctx->pc = 0x11ED78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ed78;
        }
    }
    ctx->pc = 0x11ED94u;
label_11ed94:
    // 0x11ed94: 0x26301640  addiu       $s0, $s1, 0x1640
    ctx->pc = 0x11ed94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5696));
label_11ed98:
    // 0x11ed98: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eda0: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x11eda0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x11eda4: 0xc044094  jal         func_110250
    ctx->pc = 0x11EDA4u;
    SET_GPR_U32(ctx, 31, 0x11EDACu);
    ctx->pc = 0x11EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDA4u;
            // 0x11eda8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDACu; }
        if (ctx->pc != 0x11EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDACu; }
        if (ctx->pc != 0x11EDACu) { return; }
    }
    ctx->pc = 0x11EDACu;
label_11edac:
    // 0x11edac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EDACu;
    {
        const bool branch_taken_0x11edac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11edac) {
            ctx->pc = 0x11EDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDACu;
            // 0x11edb0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EDFCu;
            goto label_11edfc;
        }
    }
    ctx->pc = 0x11EDB4u;
    // 0x11edb4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11edb8: 0x8c43fad0  lw          $v1, -0x530($v0)
    ctx->pc = 0x11edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965968)));
    // 0x11edbc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EDBCu;
    {
        const bool branch_taken_0x11edbc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDBCu;
            // 0x11edc0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edbc) {
            ctx->pc = 0x11EDD4u;
            goto label_11edd4;
        }
    }
    ctx->pc = 0x11EDC4u;
    // 0x11edc4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11edc8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11EDC8u;
    SET_GPR_U32(ctx, 31, 0x11EDD0u);
    ctx->pc = 0x11EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDC8u;
            // 0x11edcc: 0x248402a8  addiu       $a0, $a0, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD0u; }
        if (ctx->pc != 0x11EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EDD0u; }
        if (ctx->pc != 0x11EDD0u) { return; }
    }
    ctx->pc = 0x11EDD0u;
label_11edd0:
    // 0x11edd0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11edd4:
    // 0x11edd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11edd8:
    // 0x11edd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11eddc: 0x0  nop
    ctx->pc = 0x11eddcu;
    // NOP
    // 0x11ede0: 0x0  nop
    ctx->pc = 0x11ede0u;
    // NOP
    // 0x11ede4: 0x0  nop
    ctx->pc = 0x11ede4u;
    // NOP
    // 0x11ede8: 0x0  nop
    ctx->pc = 0x11ede8u;
    // NOP
    // 0x11edec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EDECu;
    {
        const bool branch_taken_0x11edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11edec) {
            ctx->pc = 0x11EDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11edd8;
        }
    }
    ctx->pc = 0x11EDF4u;
    // 0x11edf4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11EDF4u;
    {
        const bool branch_taken_0x11edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDF4u;
            // 0x11edf8: 0x26301640  addiu       $s0, $s1, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edf4) {
            ctx->pc = 0x11ED98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ed98;
        }
    }
    ctx->pc = 0x11EDFCu;
label_11edfc:
    // 0x11edfc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11EDFCu;
    {
        const bool branch_taken_0x11edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EDFCu;
            // 0x11ee00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edfc) {
            ctx->pc = 0x11ED70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ed70;
        }
    }
    ctx->pc = 0x11EE04u;
    // 0x11ee04: 0xae40fb14  sw          $zero, -0x4EC($s2)
    ctx->pc = 0x11ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966036), GPR_U32(ctx, 0));
label_11ee08:
    // 0x11ee08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11ee08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ee0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11ee0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ee10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ee14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ee14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ee18: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE18u;
            // 0x11ee1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11EE20u;
    // 0x11ee20: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x11ee20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x11ee24: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11EE24u;
    {
        const bool branch_taken_0x11ee24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE24u;
            // 0x11ee28: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee24) {
            ctx->pc = 0x11EEC0u;
            goto label_11eec0;
        }
    }
    ctx->pc = 0x11EE2Cu;
    // 0x11ee2c: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x11ee30: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11EE30u;
    {
        const bool branch_taken_0x11ee30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE30u;
            // 0x11ee34: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee30) {
            ctx->pc = 0x11EEB8u;
            goto label_11eeb8;
        }
    }
    ctx->pc = 0x11EE38u;
    // 0x11ee38: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x11ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x11ee3c: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11EE3Cu;
    {
        const bool branch_taken_0x11ee3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE3Cu;
            // 0x11ee40: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee3c) {
            ctx->pc = 0x11EEB0u;
            goto label_11eeb0;
        }
    }
    ctx->pc = 0x11EE44u;
    // 0x11ee44: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x11ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x11ee48: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11EE48u;
    {
        const bool branch_taken_0x11ee48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE48u;
            // 0x11ee4c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee48) {
            ctx->pc = 0x11EEA8u;
            goto label_11eea8;
        }
    }
    ctx->pc = 0x11EE50u;
    // 0x11ee50: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x11ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x11ee54: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EE54u;
    {
        const bool branch_taken_0x11ee54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE54u;
            // 0x11ee58: 0x34028013  ori         $v0, $zero, 0x8013 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee54) {
            ctx->pc = 0x11EE98u;
            goto label_11ee98;
        }
    }
    ctx->pc = 0x11EE5Cu;
    // 0x11ee5c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11EE5Cu;
    {
        const bool branch_taken_0x11ee5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE5Cu;
            // 0x11ee60: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee5c) {
            ctx->pc = 0x11EE90u;
            goto label_11ee90;
        }
    }
    ctx->pc = 0x11EE64u;
    // 0x11ee64: 0x34028012  ori         $v0, $zero, 0x8012
    ctx->pc = 0x11ee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x11ee68: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EE68u;
    {
        const bool branch_taken_0x11ee68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE68u;
            // 0x11ee6c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee68) {
            ctx->pc = 0x11EE88u;
            goto label_11ee88;
        }
    }
    ctx->pc = 0x11EE70u;
    // 0x11ee70: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x11ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x11ee74: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EE74u;
    {
        const bool branch_taken_0x11ee74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ee74) {
            ctx->pc = 0x11EE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE74u;
            // 0x11ee78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11ee80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11EE80u;
    {
        const bool branch_taken_0x11ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE80u;
            // 0x11ee84: 0x24421640  addiu       $v0, $v0, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee80) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EE88u;
label_11ee88:
    // 0x11ee88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11EE88u;
    {
        const bool branch_taken_0x11ee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE88u;
            // 0x11ee8c: 0x24421100  addiu       $v0, $v0, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee88) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EE90u;
label_11ee90:
    // 0x11ee90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11EE90u;
    {
        const bool branch_taken_0x11ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE90u;
            // 0x11ee94: 0x24420cc0  addiu       $v0, $v0, 0xCC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee90) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EE98u;
label_11ee98:
    // 0x11ee98: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11ee9c: 0x8c42faec  lw          $v0, -0x514($v0)
    ctx->pc = 0x11ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965996)));
    // 0x11eea0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11EEA0u;
    {
        const bool branch_taken_0x11eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEA0u;
            // 0x11eea4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea0) {
            ctx->pc = 0x11EEC8u;
            goto label_11eec8;
        }
    }
    ctx->pc = 0x11EEA8u;
label_11eea8:
    // 0x11eea8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11EEA8u;
    {
        const bool branch_taken_0x11eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEA8u;
            // 0x11eeac: 0x24420c90  addiu       $v0, $v0, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea8) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EEB0u;
label_11eeb0:
    // 0x11eeb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EEB0u;
    {
        const bool branch_taken_0x11eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEB0u;
            // 0x11eeb4: 0x2442fbc0  addiu       $v0, $v0, -0x440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb0) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EEB8u;
label_11eeb8:
    // 0x11eeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EEB8u;
    {
        const bool branch_taken_0x11eeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEB8u;
            // 0x11eebc: 0x2442fb40  addiu       $v0, $v0, -0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb8) {
            ctx->pc = 0x11EEC4u;
            goto label_11eec4;
        }
    }
    ctx->pc = 0x11EEC0u;
label_11eec0:
    // 0x11eec0: 0x8c42fae8  lw          $v0, -0x518($v0)
    ctx->pc = 0x11eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965992)));
label_11eec4:
    // 0x11eec4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11eec8:
    // 0x11eec8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEC8u;
            // 0x11eecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11EED0u;
}
