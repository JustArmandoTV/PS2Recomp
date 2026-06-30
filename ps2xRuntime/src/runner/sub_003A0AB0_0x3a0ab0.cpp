#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0AB0
// Address: 0x3a0ab0 - 0x3a0bf0
void sub_003A0AB0_0x3a0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0AB0_0x3a0ab0");
#endif

    switch (ctx->pc) {
        case 0x3a0accu: goto label_3a0acc;
        case 0x3a0aecu: goto label_3a0aec;
        case 0x3a0b20u: goto label_3a0b20;
        case 0x3a0b80u: goto label_3a0b80;
        case 0x3a0b8cu: goto label_3a0b8c;
        case 0x3a0b98u: goto label_3a0b98;
        case 0x3a0ba4u: goto label_3a0ba4;
        case 0x3a0bb0u: goto label_3a0bb0;
        case 0x3a0bbcu: goto label_3a0bbc;
        case 0x3a0bd4u: goto label_3a0bd4;
        default: break;
    }

    ctx->pc = 0x3a0ab0u;

    // 0x3a0ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0ab4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3a0ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0abc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3a0abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3a0ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0ac4: 0xc0e8330  jal         func_3A0CC0
    ctx->pc = 0x3A0AC4u;
    SET_GPR_U32(ctx, 31, 0x3A0ACCu);
    ctx->pc = 0x3A0AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0AC4u;
            // 0x3a0ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0CC0u;
    if (runtime->hasFunction(0x3A0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x3A0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0ACCu; }
        if (ctx->pc != 0x3A0ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0CC0_0x3a0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0ACCu; }
        if (ctx->pc != 0x3A0ACCu) { return; }
    }
    ctx->pc = 0x3A0ACCu;
label_3a0acc:
    // 0x3a0acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a0ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a0ad4: 0x24638740  addiu       $v1, $v1, -0x78C0
    ctx->pc = 0x3a0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936384));
    // 0x3a0ad8: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x3a0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
    // 0x3a0adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a0ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ae4: 0xc0e81d0  jal         func_3A0740
    ctx->pc = 0x3A0AE4u;
    SET_GPR_U32(ctx, 31, 0x3A0AECu);
    ctx->pc = 0x3A0AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0AE4u;
            // 0x3a0ae8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0740u;
    if (runtime->hasFunction(0x3A0740u)) {
        auto targetFn = runtime->lookupFunction(0x3A0740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0AECu; }
        if (ctx->pc != 0x3A0AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0740_0x3a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0AECu; }
        if (ctx->pc != 0x3A0AECu) { return; }
    }
    ctx->pc = 0x3A0AECu;
label_3a0aec:
    // 0x3a0aec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a0af0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a0af4: 0x24428690  addiu       $v0, $v0, -0x7970
    ctx->pc = 0x3a0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936208));
    // 0x3a0af8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a0afc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a0b00: 0x244286c8  addiu       $v0, $v0, -0x7938
    ctx->pc = 0x3a0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936264));
    // 0x3a0b04: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3a0b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0b14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B14u;
            // 0x3a0b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0B1Cu;
    // 0x3a0b1c: 0x0  nop
    ctx->pc = 0x3a0b1cu;
    // NOP
label_3a0b20:
    // 0x3a0b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b34: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A0B34u;
    {
        const bool branch_taken_0x3a0b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B34u;
            // 0x3a0b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b34) {
            ctx->pc = 0x3A0BD4u;
            goto label_3a0bd4;
        }
    }
    ctx->pc = 0x3A0B3Cu;
    // 0x3a0b3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a0b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a0b44: 0x24638740  addiu       $v1, $v1, -0x78C0
    ctx->pc = 0x3a0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936384));
    // 0x3a0b48: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x3a0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
    // 0x3a0b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a0b50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A0B50u;
    {
        const bool branch_taken_0x3a0b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B50u;
            // 0x3a0b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b50) {
            ctx->pc = 0x3A0BBCu;
            goto label_3a0bbc;
        }
    }
    ctx->pc = 0x3A0B58u;
    // 0x3a0b58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a0b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a0b60: 0x246386f0  addiu       $v1, $v1, -0x7910
    ctx->pc = 0x3a0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936304));
    // 0x3a0b64: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x3a0b68: 0x24428728  addiu       $v0, $v0, -0x78D8
    ctx->pc = 0x3a0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
    // 0x3a0b6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a0b70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3a0b74: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3a0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a0b78: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3A0B78u;
    SET_GPR_U32(ctx, 31, 0x3A0B80u);
    ctx->pc = 0x3A0B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B78u;
            // 0x3a0b7c: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B80u; }
        if (ctx->pc != 0x3A0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B80u; }
        if (ctx->pc != 0x3A0B80u) { return; }
    }
    ctx->pc = 0x3A0B80u;
label_3a0b80:
    // 0x3a0b80: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3a0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3a0b84: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x3A0B84u;
    SET_GPR_U32(ctx, 31, 0x3A0B8Cu);
    ctx->pc = 0x3A0B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B84u;
            // 0x3a0b88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B8Cu; }
        if (ctx->pc != 0x3A0B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B8Cu; }
        if (ctx->pc != 0x3A0B8Cu) { return; }
    }
    ctx->pc = 0x3A0B8Cu;
label_3a0b8c:
    // 0x3a0b8c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3a0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3a0b90: 0xc0e8314  jal         func_3A0C50
    ctx->pc = 0x3A0B90u;
    SET_GPR_U32(ctx, 31, 0x3A0B98u);
    ctx->pc = 0x3A0B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B90u;
            // 0x3a0b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (runtime->hasFunction(0x3A0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3A0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B98u; }
        if (ctx->pc != 0x3A0B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0C50_0x3a0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0B98u; }
        if (ctx->pc != 0x3A0B98u) { return; }
    }
    ctx->pc = 0x3A0B98u;
label_3a0b98:
    // 0x3a0b98: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3a0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3a0b9c: 0xc0e8314  jal         func_3A0C50
    ctx->pc = 0x3A0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3A0BA4u);
    ctx->pc = 0x3A0BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0B9Cu;
            // 0x3a0ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (runtime->hasFunction(0x3A0C50u)) {
        auto targetFn = runtime->lookupFunction(0x3A0C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BA4u; }
        if (ctx->pc != 0x3A0BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0C50_0x3a0c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BA4u; }
        if (ctx->pc != 0x3A0BA4u) { return; }
    }
    ctx->pc = 0x3A0BA4u;
label_3a0ba4:
    // 0x3a0ba4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3a0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3a0ba8: 0xc0e82fc  jal         func_3A0BF0
    ctx->pc = 0x3A0BA8u;
    SET_GPR_U32(ctx, 31, 0x3A0BB0u);
    ctx->pc = 0x3A0BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0BA8u;
            // 0x3a0bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BF0u;
    if (runtime->hasFunction(0x3A0BF0u)) {
        auto targetFn = runtime->lookupFunction(0x3A0BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BB0u; }
        if (ctx->pc != 0x3A0BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0BF0_0x3a0bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BB0u; }
        if (ctx->pc != 0x3A0BB0u) { return; }
    }
    ctx->pc = 0x3A0BB0u;
label_3a0bb0:
    // 0x3a0bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bb4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3A0BB4u;
    SET_GPR_U32(ctx, 31, 0x3A0BBCu);
    ctx->pc = 0x3A0BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0BB4u;
            // 0x3a0bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BBCu; }
        if (ctx->pc != 0x3A0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BBCu; }
        if (ctx->pc != 0x3A0BBCu) { return; }
    }
    ctx->pc = 0x3A0BBCu;
label_3a0bbc:
    // 0x3a0bbc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3a0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3a0bc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a0bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a0bc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0BC4u;
    {
        const bool branch_taken_0x3a0bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a0bc4) {
            ctx->pc = 0x3A0BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0BC4u;
            // 0x3a0bc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0BD8u;
            goto label_3a0bd8;
        }
    }
    ctx->pc = 0x3A0BCCu;
    // 0x3a0bcc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3A0BCCu;
    SET_GPR_U32(ctx, 31, 0x3A0BD4u);
    ctx->pc = 0x3A0BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0BCCu;
            // 0x3a0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BD4u; }
        if (ctx->pc != 0x3A0BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0BD4u; }
        if (ctx->pc != 0x3A0BD4u) { return; }
    }
    ctx->pc = 0x3A0BD4u;
label_3a0bd4:
    // 0x3a0bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0bd8:
    // 0x3a0bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0be4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0BE4u;
            // 0x3a0be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0BECu;
    // 0x3a0bec: 0x0  nop
    ctx->pc = 0x3a0becu;
    // NOP
}
