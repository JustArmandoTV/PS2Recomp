#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5BD0
// Address: 0x2c5bd0 - 0x2c5d40
void sub_002C5BD0_0x2c5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5BD0_0x2c5bd0");
#endif

    switch (ctx->pc) {
        case 0x2c5bf8u: goto label_2c5bf8;
        case 0x2c5c10u: goto label_2c5c10;
        case 0x2c5c18u: goto label_2c5c18;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5cd0u: goto label_2c5cd0;
        case 0x2c5cdcu: goto label_2c5cdc;
        case 0x2c5ce8u: goto label_2c5ce8;
        case 0x2c5cf4u: goto label_2c5cf4;
        case 0x2c5d00u: goto label_2c5d00;
        case 0x2c5d0cu: goto label_2c5d0c;
        case 0x2c5d24u: goto label_2c5d24;
        default: break;
    }

    ctx->pc = 0x2c5bd0u;

    // 0x2c5bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5be0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c5be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5be4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c5be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c5becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c5bf0: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2C5BF0u;
    SET_GPR_U32(ctx, 31, 0x2C5BF8u);
    ctx->pc = 0x2C5BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5BF0u;
            // 0x2c5bf4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF8u; }
        if (ctx->pc != 0x2C5BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5BF8u; }
        if (ctx->pc != 0x2C5BF8u) { return; }
    }
    ctx->pc = 0x2C5BF8u;
label_2c5bf8:
    // 0x2c5bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bfc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c5c00: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2c5c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c5c04: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c5c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c5c08: 0xc0b1840  jal         func_2C6100
    ctx->pc = 0x2C5C08u;
    SET_GPR_U32(ctx, 31, 0x2C5C10u);
    ctx->pc = 0x2C5C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C08u;
            // 0x2c5c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6100u;
    if (runtime->hasFunction(0x2C6100u)) {
        auto targetFn = runtime->lookupFunction(0x2C6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C10u; }
        if (ctx->pc != 0x2C5C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6100_0x2c6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C10u; }
        if (ctx->pc != 0x2C5C10u) { return; }
    }
    ctx->pc = 0x2C5C10u;
label_2c5c10:
    // 0x2c5c10: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C5C10u;
    SET_GPR_U32(ctx, 31, 0x2C5C18u);
    ctx->pc = 0x2C5C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C10u;
            // 0x2c5c14: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C18u; }
        if (ctx->pc != 0x2C5C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5C18u; }
        if (ctx->pc != 0x2C5C18u) { return; }
    }
    ctx->pc = 0x2C5C18u;
label_2c5c18:
    // 0x2c5c18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c20: 0x24630ca0  addiu       $v1, $v1, 0xCA0
    ctx->pc = 0x2c5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3232));
    // 0x2c5c24: 0x24420cd8  addiu       $v0, $v0, 0xCD8
    ctx->pc = 0x2c5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3288));
    // 0x2c5c28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c5c2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c30: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c5c34: 0x24630c40  addiu       $v1, $v1, 0xC40
    ctx->pc = 0x2c5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3136));
    // 0x2c5c38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c3c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2c5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x2c5c40: 0x24420c48  addiu       $v0, $v0, 0xC48
    ctx->pc = 0x2c5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3144));
    // 0x2c5c44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c48: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c5c4c: 0x24630c80  addiu       $v1, $v1, 0xC80
    ctx->pc = 0x2c5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2c5c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c54: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x2c5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x2c5c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C64u;
            // 0x2c5c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5C6Cu;
    // 0x2c5c6c: 0x0  nop
    ctx->pc = 0x2c5c6cu;
    // NOP
label_2c5c70:
    // 0x2c5c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5c80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c84: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C5C84u;
    {
        const bool branch_taken_0x2c5c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5C84u;
            // 0x2c5c88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c84) {
            ctx->pc = 0x2C5D24u;
            goto label_2c5d24;
        }
    }
    ctx->pc = 0x2C5C8Cu;
    // 0x2c5c8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5c94: 0x24630ca0  addiu       $v1, $v1, 0xCA0
    ctx->pc = 0x2c5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3232));
    // 0x2c5c98: 0x24420cd8  addiu       $v0, $v0, 0xCD8
    ctx->pc = 0x2c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3288));
    // 0x2c5c9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5ca0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5CA0u;
    {
        const bool branch_taken_0x2c5ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CA0u;
            // 0x2c5ca4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ca0) {
            ctx->pc = 0x2C5D0Cu;
            goto label_2c5d0c;
        }
    }
    ctx->pc = 0x2C5CA8u;
    // 0x2c5ca8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c5cac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c5cb0: 0x24630bf0  addiu       $v1, $v1, 0xBF0
    ctx->pc = 0x2c5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x2c5cb4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c5cb8: 0x24420c28  addiu       $v0, $v0, 0xC28
    ctx->pc = 0x2c5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
    // 0x2c5cbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c5cc0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c5cc4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c5cc8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C5CC8u;
    SET_GPR_U32(ctx, 31, 0x2C5CD0u);
    ctx->pc = 0x2C5CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CC8u;
            // 0x2c5ccc: 0x24a55e80  addiu       $a1, $a1, 0x5E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CD0u; }
        if (ctx->pc != 0x2C5CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CD0u; }
        if (ctx->pc != 0x2C5CD0u) { return; }
    }
    ctx->pc = 0x2C5CD0u;
label_2c5cd0:
    // 0x2c5cd0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c5cd4: 0xc0b1784  jal         func_2C5E10
    ctx->pc = 0x2C5CD4u;
    SET_GPR_U32(ctx, 31, 0x2C5CDCu);
    ctx->pc = 0x2C5CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CD4u;
            // 0x2c5cd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E10u;
    if (runtime->hasFunction(0x2C5E10u)) {
        auto targetFn = runtime->lookupFunction(0x2C5E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CDCu; }
        if (ctx->pc != 0x2C5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5E10_0x2c5e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CDCu; }
        if (ctx->pc != 0x2C5CDCu) { return; }
    }
    ctx->pc = 0x2C5CDCu;
label_2c5cdc:
    // 0x2c5cdc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c5cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c5ce0: 0xc0b1768  jal         func_2C5DA0
    ctx->pc = 0x2C5CE0u;
    SET_GPR_U32(ctx, 31, 0x2C5CE8u);
    ctx->pc = 0x2C5CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CE0u;
            // 0x2c5ce4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5DA0u;
    if (runtime->hasFunction(0x2C5DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2C5DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CE8u; }
        if (ctx->pc != 0x2C5CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5DA0_0x2c5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CE8u; }
        if (ctx->pc != 0x2C5CE8u) { return; }
    }
    ctx->pc = 0x2C5CE8u;
label_2c5ce8:
    // 0x2c5ce8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c5cec: 0xc0b1768  jal         func_2C5DA0
    ctx->pc = 0x2C5CECu;
    SET_GPR_U32(ctx, 31, 0x2C5CF4u);
    ctx->pc = 0x2C5CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CECu;
            // 0x2c5cf0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5DA0u;
    if (runtime->hasFunction(0x2C5DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2C5DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CF4u; }
        if (ctx->pc != 0x2C5CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5DA0_0x2c5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CF4u; }
        if (ctx->pc != 0x2C5CF4u) { return; }
    }
    ctx->pc = 0x2C5CF4u;
label_2c5cf4:
    // 0x2c5cf4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c5cf8: 0xc0b1750  jal         func_2C5D40
    ctx->pc = 0x2C5CF8u;
    SET_GPR_U32(ctx, 31, 0x2C5D00u);
    ctx->pc = 0x2C5CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5CF8u;
            // 0x2c5cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5D40u;
    if (runtime->hasFunction(0x2C5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2C5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D00u; }
        if (ctx->pc != 0x2C5D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5D40_0x2c5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D00u; }
        if (ctx->pc != 0x2C5D00u) { return; }
    }
    ctx->pc = 0x2C5D00u;
label_2c5d00:
    // 0x2c5d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d04: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C5D04u;
    SET_GPR_U32(ctx, 31, 0x2C5D0Cu);
    ctx->pc = 0x2C5D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D04u;
            // 0x2c5d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D0Cu; }
        if (ctx->pc != 0x2C5D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D0Cu; }
        if (ctx->pc != 0x2C5D0Cu) { return; }
    }
    ctx->pc = 0x2C5D0Cu;
label_2c5d0c:
    // 0x2c5d0c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c5d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c5d10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5D14u;
    {
        const bool branch_taken_0x2c5d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5d14) {
            ctx->pc = 0x2C5D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D14u;
            // 0x2c5d18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5D28u;
            goto label_2c5d28;
        }
    }
    ctx->pc = 0x2C5D1Cu;
    // 0x2c5d1c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D24u);
    ctx->pc = 0x2C5D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D1Cu;
            // 0x2c5d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D24u; }
        if (ctx->pc != 0x2C5D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5D24u; }
        if (ctx->pc != 0x2C5D24u) { return; }
    }
    ctx->pc = 0x2C5D24u;
label_2c5d24:
    // 0x2c5d24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d28:
    // 0x2c5d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5D34u;
            // 0x2c5d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5D3Cu;
    // 0x2c5d3c: 0x0  nop
    ctx->pc = 0x2c5d3cu;
    // NOP
}
