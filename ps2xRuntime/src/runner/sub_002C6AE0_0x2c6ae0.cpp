#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6AE0
// Address: 0x2c6ae0 - 0x2c6c20
void sub_002C6AE0_0x2c6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6AE0_0x2c6ae0");
#endif

    switch (ctx->pc) {
        case 0x2c6afcu: goto label_2c6afc;
        case 0x2c6b04u: goto label_2c6b04;
        case 0x2c6b50u: goto label_2c6b50;
        case 0x2c6bb0u: goto label_2c6bb0;
        case 0x2c6bbcu: goto label_2c6bbc;
        case 0x2c6bc8u: goto label_2c6bc8;
        case 0x2c6bd4u: goto label_2c6bd4;
        case 0x2c6be0u: goto label_2c6be0;
        case 0x2c6becu: goto label_2c6bec;
        case 0x2c6c04u: goto label_2c6c04;
        default: break;
    }

    ctx->pc = 0x2c6ae0u;

    // 0x2c6ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c6ae4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c6ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6aec: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c6aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c6af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6af4: 0xc0b1bc0  jal         func_2C6F00
    ctx->pc = 0x2C6AF4u;
    SET_GPR_U32(ctx, 31, 0x2C6AFCu);
    ctx->pc = 0x2C6AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AF4u;
            // 0x2c6af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6F00u;
    if (runtime->hasFunction(0x2C6F00u)) {
        auto targetFn = runtime->lookupFunction(0x2C6F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AFCu; }
        if (ctx->pc != 0x2C6AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6F00_0x2c6f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AFCu; }
        if (ctx->pc != 0x2C6AFCu) { return; }
    }
    ctx->pc = 0x2C6AFCu;
label_2c6afc:
    // 0x2c6afc: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C6AFCu;
    SET_GPR_U32(ctx, 31, 0x2C6B04u);
    ctx->pc = 0x2C6B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AFCu;
            // 0x2c6b00: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B04u; }
        if (ctx->pc != 0x2C6B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B04u; }
        if (ctx->pc != 0x2C6B04u) { return; }
    }
    ctx->pc = 0x2C6B04u;
label_2c6b04:
    // 0x2c6b04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b0c: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x2c6b10: 0x24630ab8  addiu       $v1, $v1, 0xAB8
    ctx->pc = 0x2c6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2744));
    // 0x2c6b14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c6b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c6b18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c6b1c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c6b20: 0x24424750  addiu       $v0, $v0, 0x4750
    ctx->pc = 0x2c6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18256));
    // 0x2c6b24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c6b28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c6b2c: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x2c6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
    // 0x2c6b30: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c6b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B40u;
            // 0x2c6b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6B48u;
    // 0x2c6b48: 0x0  nop
    ctx->pc = 0x2c6b48u;
    // NOP
    // 0x2c6b4c: 0x0  nop
    ctx->pc = 0x2c6b4cu;
    // NOP
label_2c6b50:
    // 0x2c6b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c6b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C6B64u;
    {
        const bool branch_taken_0x2c6b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B64u;
            // 0x2c6b68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b64) {
            ctx->pc = 0x2C6C04u;
            goto label_2c6c04;
        }
    }
    ctx->pc = 0x2C6B6Cu;
    // 0x2c6b6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b74: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x2c6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
    // 0x2c6b78: 0x24420ab8  addiu       $v0, $v0, 0xAB8
    ctx->pc = 0x2c6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2744));
    // 0x2c6b7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c6b80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C6B80u;
    {
        const bool branch_taken_0x2c6b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6B80u;
            // 0x2c6b84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b80) {
            ctx->pc = 0x2C6BECu;
            goto label_2c6bec;
        }
    }
    ctx->pc = 0x2C6B88u;
    // 0x2c6b88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6b90: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x2c6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    // 0x2c6b94: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c6b98: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x2c6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x2c6b9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c6b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c6ba0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c6ba4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c6ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c6ba8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C6BA8u;
    SET_GPR_U32(ctx, 31, 0x2C6BB0u);
    ctx->pc = 0x2C6BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BA8u;
            // 0x2c6bac: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BB0u; }
        if (ctx->pc != 0x2C6BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BB0u; }
        if (ctx->pc != 0x2C6BB0u) { return; }
    }
    ctx->pc = 0x2C6BB0u;
label_2c6bb0:
    // 0x2c6bb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c6bb4: 0xc0b1784  jal         func_2C5E10
    ctx->pc = 0x2C6BB4u;
    SET_GPR_U32(ctx, 31, 0x2C6BBCu);
    ctx->pc = 0x2C6BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BB4u;
            // 0x2c6bb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E10u;
    if (runtime->hasFunction(0x2C5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2C5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BBCu; }
        if (ctx->pc != 0x2C6BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5E10_0x2c5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BBCu; }
        if (ctx->pc != 0x2C6BBCu) { return; }
    }
    ctx->pc = 0x2C6BBCu;
label_2c6bbc:
    // 0x2c6bbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c6bc0: 0xc0b1b20  jal         func_2C6C80
    ctx->pc = 0x2C6BC0u;
    SET_GPR_U32(ctx, 31, 0x2C6BC8u);
    ctx->pc = 0x2C6BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BC0u;
            // 0x2c6bc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C80u;
    if (runtime->hasFunction(0x2C6C80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BC8u; }
        if (ctx->pc != 0x2C6BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6C80_0x2c6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BC8u; }
        if (ctx->pc != 0x2C6BC8u) { return; }
    }
    ctx->pc = 0x2C6BC8u;
label_2c6bc8:
    // 0x2c6bc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c6bcc: 0xc0b1b20  jal         func_2C6C80
    ctx->pc = 0x2C6BCCu;
    SET_GPR_U32(ctx, 31, 0x2C6BD4u);
    ctx->pc = 0x2C6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BCCu;
            // 0x2c6bd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C80u;
    if (runtime->hasFunction(0x2C6C80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BD4u; }
        if (ctx->pc != 0x2C6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6C80_0x2c6c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BD4u; }
        if (ctx->pc != 0x2C6BD4u) { return; }
    }
    ctx->pc = 0x2C6BD4u;
label_2c6bd4:
    // 0x2c6bd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c6bd8: 0xc0b1b08  jal         func_2C6C20
    ctx->pc = 0x2C6BD8u;
    SET_GPR_U32(ctx, 31, 0x2C6BE0u);
    ctx->pc = 0x2C6BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BD8u;
            // 0x2c6bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C20u;
    if (runtime->hasFunction(0x2C6C20u)) {
        auto targetFn = runtime->lookupFunction(0x2C6C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BE0u; }
        if (ctx->pc != 0x2C6BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6C20_0x2c6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BE0u; }
        if (ctx->pc != 0x2C6BE0u) { return; }
    }
    ctx->pc = 0x2C6BE0u;
label_2c6be0:
    // 0x2c6be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C6BE4u;
    SET_GPR_U32(ctx, 31, 0x2C6BECu);
    ctx->pc = 0x2C6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BE4u;
            // 0x2c6be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BECu; }
        if (ctx->pc != 0x2C6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BECu; }
        if (ctx->pc != 0x2C6BECu) { return; }
    }
    ctx->pc = 0x2C6BECu;
label_2c6bec:
    // 0x2c6bec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c6becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c6bf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c6bf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6BF4u;
    {
        const bool branch_taken_0x2c6bf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6bf4) {
            ctx->pc = 0x2C6BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BF4u;
            // 0x2c6bf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C08u;
            goto label_2c6c08;
        }
    }
    ctx->pc = 0x2C6BFCu;
    // 0x2c6bfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C6BFCu;
    SET_GPR_U32(ctx, 31, 0x2C6C04u);
    ctx->pc = 0x2C6C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6BFCu;
            // 0x2c6c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C04u; }
        if (ctx->pc != 0x2C6C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C04u; }
        if (ctx->pc != 0x2C6C04u) { return; }
    }
    ctx->pc = 0x2C6C04u;
label_2c6c04:
    // 0x2c6c04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c08:
    // 0x2c6c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C14u;
            // 0x2c6c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6C1Cu;
    // 0x2c6c1c: 0x0  nop
    ctx->pc = 0x2c6c1cu;
    // NOP
}
