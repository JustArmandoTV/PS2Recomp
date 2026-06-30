#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CADE0
// Address: 0x1cade0 - 0x1caf28
void sub_001CADE0_0x1cade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CADE0_0x1cade0");
#endif

    switch (ctx->pc) {
        case 0x1cae8cu: goto label_1cae8c;
        case 0x1caf00u: goto label_1caf00;
        default: break;
    }

    ctx->pc = 0x1cade0u;

    // 0x1cade0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x1cade4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1cade4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cade8: 0x8cc5a70c  lw          $a1, -0x58F4($a2)
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944524)));
    // 0x1cadec: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1cadecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1cadf0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CADF0u;
    {
        const bool branch_taken_0x1cadf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADF0u;
            // 0x1cadf4: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadf0) {
            ctx->pc = 0x1CAE2Cu;
            goto label_1cae2c;
        }
    }
    ctx->pc = 0x1CADF8u;
    // 0x1cadf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cadfc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CADFCu;
    {
        const bool branch_taken_0x1cadfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CADFCu;
            // 0x1cae00: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadfc) {
            ctx->pc = 0x1CAE20u;
            goto label_1cae20;
        }
    }
    ctx->pc = 0x1CAE04u;
    // 0x1cae04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cae08: 0x3c01006e  lui         $at, 0x6E
    ctx->pc = 0x1cae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)110 << 16));
    // 0x1cae0c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1cae0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1cae10: 0x90226a8d  lbu         $v0, 0x6A8D($at)
    ctx->pc = 0x1cae10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27277)));
    // 0x1cae14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAE14u;
    {
        const bool branch_taken_0x1cae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE14u;
            // 0x1cae18: 0x8cc3a70c  lw          $v1, -0x58F4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae14) {
            ctx->pc = 0x1CAE28u;
            goto label_1cae28;
        }
    }
    ctx->pc = 0x1CAE1Cu;
    // 0x1cae1c: 0x0  nop
    ctx->pc = 0x1cae1cu;
    // NOP
label_1cae20:
    // 0x1cae20: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cae24: 0x8cc3a70c  lw          $v1, -0x58F4($a2)
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944524)));
label_1cae28:
    // 0x1cae28: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cae28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cae2c:
    // 0x1cae2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAE34u;
    // 0x1cae34: 0x0  nop
    ctx->pc = 0x1cae34u;
    // NOP
    // 0x1cae38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae3c: 0x38a80001  xori        $t0, $a1, 0x1
    ctx->pc = 0x1cae3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1cae40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae44: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cae48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae4c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1cae4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cae50: 0x8e06a70c  lw          $a2, -0x58F4($s0)
    ctx->pc = 0x1cae50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cae54: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cae54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cae58: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAE58u;
    {
        const bool branch_taken_0x1cae58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE58u;
            // 0x1cae5c: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae58) {
            ctx->pc = 0x1CAEA4u;
            goto label_1caea4;
        }
    }
    ctx->pc = 0x1CAE60u;
    // 0x1cae60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae68: 0x48280b  movn        $a1, $v0, $t0
    ctx->pc = 0x1cae68u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1cae6c: 0xa0c30ab7  sb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cae6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cae70: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAE70u;
    {
        const bool branch_taken_0x1cae70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE70u;
            // 0x1cae74: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae70) {
            ctx->pc = 0x1CAE98u;
            goto label_1cae98;
        }
    }
    ctx->pc = 0x1CAE78u;
    // 0x1cae78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae7c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cae7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cae80: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1cae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cae84: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAE84u;
    SET_GPR_U32(ctx, 31, 0x1CAE8Cu);
    ctx->pc = 0x1CAE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE84u;
            // 0x1cae88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE8Cu; }
        if (ctx->pc != 0x1CAE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAE8Cu; }
        if (ctx->pc != 0x1CAE8Cu) { return; }
    }
    ctx->pc = 0x1CAE8Cu;
label_1cae8c:
    // 0x1cae8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAE8Cu;
    {
        const bool branch_taken_0x1cae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAE8Cu;
            // 0x1cae90: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae8c) {
            ctx->pc = 0x1CAEA0u;
            goto label_1caea0;
        }
    }
    ctx->pc = 0x1CAE94u;
    // 0x1cae94: 0x0  nop
    ctx->pc = 0x1cae94u;
    // NOP
label_1cae98:
    // 0x1cae98: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1cae9c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1caea0:
    // 0x1caea0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1caea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1caea4:
    // 0x1caea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caeac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEACu;
            // 0x1caeb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAEB4u;
    // 0x1caeb4: 0x0  nop
    ctx->pc = 0x1caeb4u;
    // NOP
    // 0x1caeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caebc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1caebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1caec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caec4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1caec8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caecc: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1caeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1caed0: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1caed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1caed4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAED4u;
    {
        const bool branch_taken_0x1caed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAED4u;
            // 0x1caed8: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caed4) {
            ctx->pc = 0x1CAF14u;
            goto label_1caf14;
        }
    }
    ctx->pc = 0x1CAEDCu;
    // 0x1caedc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1caedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caee0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAEE0u;
    {
        const bool branch_taken_0x1caee0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEE0u;
            // 0x1caee4: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caee0) {
            ctx->pc = 0x1CAF08u;
            goto label_1caf08;
        }
    }
    ctx->pc = 0x1CAEE8u;
    // 0x1caee8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caeec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1caeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1caef0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1caef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caef8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAEF8u;
    SET_GPR_U32(ctx, 31, 0x1CAF00u);
    ctx->pc = 0x1CAEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAEF8u;
            // 0x1caefc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF00u; }
        if (ctx->pc != 0x1CAF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF00u; }
        if (ctx->pc != 0x1CAF00u) { return; }
    }
    ctx->pc = 0x1CAF00u;
label_1caf00:
    // 0x1caf00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF00u;
    {
        const bool branch_taken_0x1caf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF00u;
            // 0x1caf04: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf00) {
            ctx->pc = 0x1CAF10u;
            goto label_1caf10;
        }
    }
    ctx->pc = 0x1CAF08u;
label_1caf08:
    // 0x1caf08: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1caf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1caf0c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1caf10:
    // 0x1caf10: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1caf10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1caf14:
    // 0x1caf14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caf14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF1Cu;
            // 0x1caf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAF24u;
    // 0x1caf24: 0x0  nop
    ctx->pc = 0x1caf24u;
    // NOP
}
