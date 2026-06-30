#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00540A90
// Address: 0x540a90 - 0x540bc0
void sub_00540A90_0x540a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00540A90_0x540a90");
#endif

    switch (ctx->pc) {
        case 0x540accu: goto label_540acc;
        case 0x540adcu: goto label_540adc;
        case 0x540aecu: goto label_540aec;
        case 0x540afcu: goto label_540afc;
        case 0x540b0cu: goto label_540b0c;
        case 0x540b54u: goto label_540b54;
        case 0x540b68u: goto label_540b68;
        case 0x540b78u: goto label_540b78;
        case 0x540b88u: goto label_540b88;
        case 0x540b98u: goto label_540b98;
        case 0x540ba8u: goto label_540ba8;
        default: break;
    }

    ctx->pc = 0x540a90u;

    // 0x540a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x540a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x540a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x540a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x540a98: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x540a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x540a9c: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x540a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x540aa0: 0x50200042  beql        $at, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x540AA0u;
    {
        const bool branch_taken_0x540aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x540aa0) {
            ctx->pc = 0x540AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540AA0u;
            // 0x540aa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540BACu;
            goto label_540bac;
        }
    }
    ctx->pc = 0x540AA8u;
    // 0x540aa8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x540aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x540aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x540aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x540ab0: 0x24a5db60  addiu       $a1, $a1, -0x24A0
    ctx->pc = 0x540ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
    // 0x540ab4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x540ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x540ab8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x540ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x540abc: 0x600008  jr          $v1
    ctx->pc = 0x540ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x540AC4u: goto label_540ac4;
            case 0x540AD4u: goto label_540ad4;
            case 0x540AE4u: goto label_540ae4;
            case 0x540AF4u: goto label_540af4;
            case 0x540B04u: goto label_540b04;
            case 0x540B14u: goto label_540b14;
            case 0x540B80u: goto label_540b80;
            case 0x540B90u: goto label_540b90;
            case 0x540BA0u: goto label_540ba0;
            case 0x540BA8u: goto label_540ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x540AC4u;
label_540ac4:
    // 0x540ac4: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540AC4u;
    SET_GPR_U32(ctx, 31, 0x540ACCu);
    ctx->pc = 0x540AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540AC4u;
            // 0x540ac8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540ACCu; }
        if (ctx->pc != 0x540ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540ACCu; }
        if (ctx->pc != 0x540ACCu) { return; }
    }
    ctx->pc = 0x540ACCu;
label_540acc:
    // 0x540acc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x540ACCu;
    {
        const bool branch_taken_0x540acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540acc) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540AD4u;
label_540ad4:
    // 0x540ad4: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540AD4u;
    SET_GPR_U32(ctx, 31, 0x540ADCu);
    ctx->pc = 0x540AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540AD4u;
            // 0x540ad8: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540ADCu; }
        if (ctx->pc != 0x540ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540ADCu; }
        if (ctx->pc != 0x540ADCu) { return; }
    }
    ctx->pc = 0x540ADCu;
label_540adc:
    // 0x540adc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x540ADCu;
    {
        const bool branch_taken_0x540adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540adc) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540AE4u;
label_540ae4:
    // 0x540ae4: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540AE4u;
    SET_GPR_U32(ctx, 31, 0x540AECu);
    ctx->pc = 0x540AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540AE4u;
            // 0x540ae8: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540AECu; }
        if (ctx->pc != 0x540AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540AECu; }
        if (ctx->pc != 0x540AECu) { return; }
    }
    ctx->pc = 0x540AECu;
label_540aec:
    // 0x540aec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x540AECu;
    {
        const bool branch_taken_0x540aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540aec) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540AF4u;
label_540af4:
    // 0x540af4: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540AF4u;
    SET_GPR_U32(ctx, 31, 0x540AFCu);
    ctx->pc = 0x540AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540AF4u;
            // 0x540af8: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540AFCu; }
        if (ctx->pc != 0x540AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540AFCu; }
        if (ctx->pc != 0x540AFCu) { return; }
    }
    ctx->pc = 0x540AFCu;
label_540afc:
    // 0x540afc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x540AFCu;
    {
        const bool branch_taken_0x540afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540afc) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B04u;
label_540b04:
    // 0x540b04: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B04u;
    SET_GPR_U32(ctx, 31, 0x540B0Cu);
    ctx->pc = 0x540B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540B04u;
            // 0x540b08: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B0Cu; }
        if (ctx->pc != 0x540B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B0Cu; }
        if (ctx->pc != 0x540B0Cu) { return; }
    }
    ctx->pc = 0x540B0Cu;
label_540b0c:
    // 0x540b0c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x540B0Cu;
    {
        const bool branch_taken_0x540b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b0c) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B14u;
label_540b14:
    // 0x540b14: 0x8c86006c  lw          $a2, 0x6C($a0)
    ctx->pc = 0x540b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x540b18: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x540b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x540b1c: 0x10c50014  beq         $a2, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x540B1Cu;
    {
        const bool branch_taken_0x540b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x540b1c) {
            ctx->pc = 0x540B70u;
            goto label_540b70;
        }
    }
    ctx->pc = 0x540B24u;
    // 0x540b24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x540b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x540b28: 0x50c3000d  beql        $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x540B28u;
    {
        const bool branch_taken_0x540b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x540b28) {
            ctx->pc = 0x540B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540B28u;
            // 0x540b2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540B60u;
            goto label_540b60;
        }
    }
    ctx->pc = 0x540B30u;
    // 0x540b30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x540b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x540b34: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x540B34u;
    {
        const bool branch_taken_0x540b34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x540b34) {
            ctx->pc = 0x540B5Cu;
            goto label_540b5c;
        }
    }
    ctx->pc = 0x540B3Cu;
    // 0x540b3c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x540B3Cu;
    {
        const bool branch_taken_0x540b3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b3c) {
            ctx->pc = 0x540B4Cu;
            goto label_540b4c;
        }
    }
    ctx->pc = 0x540B44u;
    // 0x540b44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x540B44u;
    {
        const bool branch_taken_0x540b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b44) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B4Cu;
label_540b4c:
    // 0x540b4c: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B4Cu;
    SET_GPR_U32(ctx, 31, 0x540B54u);
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B54u; }
        if (ctx->pc != 0x540B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B54u; }
        if (ctx->pc != 0x540B54u) { return; }
    }
    ctx->pc = 0x540B54u;
label_540b54:
    // 0x540b54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x540B54u;
    {
        const bool branch_taken_0x540b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b54) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B5Cu;
label_540b5c:
    // 0x540b5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x540b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_540b60:
    // 0x540b60: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B60u;
    SET_GPR_U32(ctx, 31, 0x540B68u);
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B68u; }
        if (ctx->pc != 0x540B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B68u; }
        if (ctx->pc != 0x540B68u) { return; }
    }
    ctx->pc = 0x540B68u;
label_540b68:
    // 0x540b68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x540B68u;
    {
        const bool branch_taken_0x540b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b68) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B70u;
label_540b70:
    // 0x540b70: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B70u;
    SET_GPR_U32(ctx, 31, 0x540B78u);
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B78u; }
        if (ctx->pc != 0x540B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B78u; }
        if (ctx->pc != 0x540B78u) { return; }
    }
    ctx->pc = 0x540B78u;
label_540b78:
    // 0x540b78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x540B78u;
    {
        const bool branch_taken_0x540b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b78) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B80u;
label_540b80:
    // 0x540b80: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B80u;
    SET_GPR_U32(ctx, 31, 0x540B88u);
    ctx->pc = 0x540B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540B80u;
            // 0x540b84: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B88u; }
        if (ctx->pc != 0x540B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B88u; }
        if (ctx->pc != 0x540B88u) { return; }
    }
    ctx->pc = 0x540B88u;
label_540b88:
    // 0x540b88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x540B88u;
    {
        const bool branch_taken_0x540b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b88) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540B90u;
label_540b90:
    // 0x540b90: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540B90u;
    SET_GPR_U32(ctx, 31, 0x540B98u);
    ctx->pc = 0x540B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540B90u;
            // 0x540b94: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B98u; }
        if (ctx->pc != 0x540B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540B98u; }
        if (ctx->pc != 0x540B98u) { return; }
    }
    ctx->pc = 0x540B98u;
label_540b98:
    // 0x540b98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x540B98u;
    {
        const bool branch_taken_0x540b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540b98) {
            ctx->pc = 0x540BA8u;
            goto label_540ba8;
        }
    }
    ctx->pc = 0x540BA0u;
label_540ba0:
    // 0x540ba0: 0xc14f604  jal         func_53D810
    ctx->pc = 0x540BA0u;
    SET_GPR_U32(ctx, 31, 0x540BA8u);
    ctx->pc = 0x540BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540BA0u;
            // 0x540ba4: 0x24050500  addiu       $a1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540BA8u; }
        if (ctx->pc != 0x540BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540BA8u; }
        if (ctx->pc != 0x540BA8u) { return; }
    }
    ctx->pc = 0x540BA8u;
label_540ba8:
    // 0x540ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x540ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_540bac:
    // 0x540bac: 0x3e00008  jr          $ra
    ctx->pc = 0x540BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x540BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540BACu;
            // 0x540bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x540BB4u;
    // 0x540bb4: 0x0  nop
    ctx->pc = 0x540bb4u;
    // NOP
    // 0x540bb8: 0x0  nop
    ctx->pc = 0x540bb8u;
    // NOP
    // 0x540bbc: 0x0  nop
    ctx->pc = 0x540bbcu;
    // NOP
}
