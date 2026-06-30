#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187980
// Address: 0x187980 - 0x187b18
void sub_00187980_0x187980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187980_0x187980");
#endif

    switch (ctx->pc) {
        case 0x1879d0u: goto label_1879d0;
        case 0x1879d8u: goto label_1879d8;
        case 0x187a00u: goto label_187a00;
        case 0x187a14u: goto label_187a14;
        case 0x187a18u: goto label_187a18;
        case 0x187a68u: goto label_187a68;
        case 0x187a7cu: goto label_187a7c;
        case 0x187a80u: goto label_187a80;
        case 0x187ab8u: goto label_187ab8;
        case 0x187accu: goto label_187acc;
        case 0x187ae4u: goto label_187ae4;
        default: break;
    }

    ctx->pc = 0x187980u;

    // 0x187980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187984: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x187984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x187988: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x187988u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x18798c: 0x8ea25d9c  lw          $v0, 0x5D9C($s5)
    ctx->pc = 0x18798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23964)));
    // 0x187990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18799c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1879a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1879a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1879a4: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1879A4u;
    {
        const bool branch_taken_0x1879a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879A4u;
            // 0x1879a8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879a4) {
            ctx->pc = 0x187AE4u;
            goto label_187ae4;
        }
    }
    ctx->pc = 0x1879ACu;
    // 0x1879ac: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x1879acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x1879b0: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x1879b4: 0x26106038  addiu       $s0, $s0, 0x6038
    ctx->pc = 0x1879b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24632));
    // 0x1879b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1879bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1879c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1879c4: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x1879c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x1879c8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1879C8u;
    SET_GPR_U32(ctx, 31, 0x1879D0u);
    ctx->pc = 0x1879CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879C8u;
            // 0x1879cc: 0x26935da4  addiu       $s3, $s4, 0x5DA4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 23972));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D0u; }
        if (ctx->pc != 0x1879D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D0u; }
        if (ctx->pc != 0x1879D0u) { return; }
    }
    ctx->pc = 0x1879D0u;
label_1879d0:
    // 0x1879d0: 0xc05f182  jal         func_17C608
    ctx->pc = 0x1879D0u;
    SET_GPR_U32(ctx, 31, 0x1879D8u);
    ctx->pc = 0x1879D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879D0u;
            // 0x1879d4: 0x3c12005f  lui         $s2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C608u;
    if (runtime->hasFunction(0x17C608u)) {
        auto targetFn = runtime->lookupFunction(0x17C608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D8u; }
        if (ctx->pc != 0x1879D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C608_0x17c608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879D8u; }
        if (ctx->pc != 0x1879D8u) { return; }
    }
    ctx->pc = 0x1879D8u;
label_1879d8:
    // 0x1879d8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1879dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1879dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1879e0: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x1879e4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1879e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1879e8: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x1879e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x1879ec: 0xae446034  sw          $a0, 0x6034($s2)
    ctx->pc = 0x1879ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24628), GPR_U32(ctx, 4));
    // 0x1879f0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1879F0u;
    {
        const bool branch_taken_0x1879f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1879f0) {
            ctx->pc = 0x187A38u;
            goto label_187a38;
        }
    }
    ctx->pc = 0x1879F8u;
    // 0x1879f8: 0xc045208  jal         func_114820
    ctx->pc = 0x1879F8u;
    SET_GPR_U32(ctx, 31, 0x187A00u);
    ctx->pc = 0x1879FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879F8u;
            // 0x1879fc: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A00u; }
        if (ctx->pc != 0x187A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A00u; }
        if (ctx->pc != 0x187A00u) { return; }
    }
    ctx->pc = 0x187A00u;
label_187a00:
    // 0x187a00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x187A00u;
    {
        const bool branch_taken_0x187a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A00u;
            // 0x187a04: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a00) {
            ctx->pc = 0x187A38u;
            goto label_187a38;
        }
    }
    ctx->pc = 0x187A08u;
    // 0x187a08: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x187a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x187a0c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x187A0Cu;
    SET_GPR_U32(ctx, 31, 0x187A14u);
    ctx->pc = 0x187A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A0Cu;
            // 0x187a10: 0x24847e80  addiu       $a0, $a0, 0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A14u; }
        if (ctx->pc != 0x187A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A14u; }
        if (ctx->pc != 0x187A14u) { return; }
    }
    ctx->pc = 0x187A14u;
label_187a14:
    // 0x187a14: 0x0  nop
    ctx->pc = 0x187a14u;
    // NOP
label_187a18:
    // 0x187a18: 0x0  nop
    ctx->pc = 0x187a18u;
    // NOP
    // 0x187a1c: 0x0  nop
    ctx->pc = 0x187a1cu;
    // NOP
    // 0x187a20: 0x0  nop
    ctx->pc = 0x187a20u;
    // NOP
    // 0x187a24: 0x0  nop
    ctx->pc = 0x187a24u;
    // NOP
    // 0x187a28: 0x0  nop
    ctx->pc = 0x187a28u;
    // NOP
    // 0x187a2c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x187A2Cu;
    {
        const bool branch_taken_0x187a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a2c) {
            ctx->pc = 0x187A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187a18;
        }
    }
    ctx->pc = 0x187A34u;
    // 0x187a34: 0x0  nop
    ctx->pc = 0x187a34u;
    // NOP
label_187a38:
    // 0x187a38: 0x8e825da4  lw          $v0, 0x5DA4($s4)
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23972)));
    // 0x187a3c: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x187a40: 0x8e255da0  lw          $a1, 0x5DA0($s1)
    ctx->pc = 0x187a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23968)));
    // 0x187a44: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x187a48: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x187a4c: 0x8e476034  lw          $a3, 0x6034($s2)
    ctx->pc = 0x187a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24628)));
    // 0x187a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x187a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x187a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a5c: 0x0  nop
    ctx->pc = 0x187a5cu;
    // NOP
    // 0x187a60: 0xc05f09e  jal         func_17C278
    ctx->pc = 0x187A60u;
    SET_GPR_U32(ctx, 31, 0x187A68u);
    ctx->pc = 0x187A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A60u;
            // 0x187a64: 0x3c10005f  lui         $s0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C278u;
    if (runtime->hasFunction(0x17C278u)) {
        auto targetFn = runtime->lookupFunction(0x17C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A68u; }
        if (ctx->pc != 0x187A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C278_0x17c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A68u; }
        if (ctx->pc != 0x187A68u) { return; }
    }
    ctx->pc = 0x187A68u;
label_187a68:
    // 0x187a68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x187A68u;
    {
        const bool branch_taken_0x187a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A68u;
            // 0x187a6c: 0xae026030  sw          $v0, 0x6030($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a68) {
            ctx->pc = 0x187AA0u;
            goto label_187aa0;
        }
    }
    ctx->pc = 0x187A70u;
    // 0x187a70: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x187a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x187a74: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x187A74u;
    SET_GPR_U32(ctx, 31, 0x187A7Cu);
    ctx->pc = 0x187A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A74u;
            // 0x187a78: 0x24847eb0  addiu       $a0, $a0, 0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A7Cu; }
        if (ctx->pc != 0x187A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A7Cu; }
        if (ctx->pc != 0x187A7Cu) { return; }
    }
    ctx->pc = 0x187A7Cu;
label_187a7c:
    // 0x187a7c: 0x0  nop
    ctx->pc = 0x187a7cu;
    // NOP
label_187a80:
    // 0x187a80: 0x0  nop
    ctx->pc = 0x187a80u;
    // NOP
    // 0x187a84: 0x0  nop
    ctx->pc = 0x187a84u;
    // NOP
    // 0x187a88: 0x0  nop
    ctx->pc = 0x187a88u;
    // NOP
    // 0x187a8c: 0x0  nop
    ctx->pc = 0x187a8cu;
    // NOP
    // 0x187a90: 0x0  nop
    ctx->pc = 0x187a90u;
    // NOP
    // 0x187a94: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x187A94u;
    {
        const bool branch_taken_0x187a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a94) {
            ctx->pc = 0x187A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187a80;
        }
    }
    ctx->pc = 0x187A9Cu;
    // 0x187a9c: 0x0  nop
    ctx->pc = 0x187a9cu;
    // NOP
label_187aa0:
    // 0x187aa0: 0x26106030  addiu       $s0, $s0, 0x6030
    ctx->pc = 0x187aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24624));
    // 0x187aa4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x187aa8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187aac: 0x24a577b8  addiu       $a1, $a1, 0x77B8
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30648));
    // 0x187ab0: 0xc05f11e  jal         func_17C478
    ctx->pc = 0x187AB0u;
    SET_GPR_U32(ctx, 31, 0x187AB8u);
    ctx->pc = 0x187AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AB0u;
            // 0x187ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C478u;
    if (runtime->hasFunction(0x17C478u)) {
        auto targetFn = runtime->lookupFunction(0x17C478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AB8u; }
        if (ctx->pc != 0x187AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C478_0x17c478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AB8u; }
        if (ctx->pc != 0x187AB8u) { return; }
    }
    ctx->pc = 0x187AB8u;
label_187ab8:
    // 0x187ab8: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x187ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x187abc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187ac0: 0x24a57858  addiu       $a1, $a1, 0x7858
    ctx->pc = 0x187ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30808));
    // 0x187ac4: 0xc05f122  jal         func_17C488
    ctx->pc = 0x187AC4u;
    SET_GPR_U32(ctx, 31, 0x187ACCu);
    ctx->pc = 0x187AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AC4u;
            // 0x187ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C488u;
    if (runtime->hasFunction(0x17C488u)) {
        auto targetFn = runtime->lookupFunction(0x17C488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ACCu; }
        if (ctx->pc != 0x187ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C488_0x17c488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ACCu; }
        if (ctx->pc != 0x187ACCu) { return; }
    }
    ctx->pc = 0x187ACCu;
label_187acc:
    // 0x187acc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187adc: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x187ADCu;
    SET_GPR_U32(ctx, 31, 0x187AE4u);
    ctx->pc = 0x187AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187ADCu;
            // 0x187ae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AE4u; }
        if (ctx->pc != 0x187AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AE4u; }
        if (ctx->pc != 0x187AE4u) { return; }
    }
    ctx->pc = 0x187AE4u;
label_187ae4:
    // 0x187ae4: 0x26a35d9c  addiu       $v1, $s5, 0x5D9C
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 23964));
    // 0x187ae8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187aec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x187afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x187b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187b04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x187b04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187b08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187b0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x187b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x187b10: 0x3e00008  jr          $ra
    ctx->pc = 0x187B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B10u;
            // 0x187b14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187B18u;
}
