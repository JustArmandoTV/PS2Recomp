#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6A50
// Address: 0x1a6a50 - 0x1a6c78
void sub_001A6A50_0x1a6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6A50_0x1a6a50");
#endif

    switch (ctx->pc) {
        case 0x1a6a84u: goto label_1a6a84;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b9cu: goto label_1a6b9c;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c44u: goto label_1a6c44;
        default: break;
    }

    ctx->pc = 0x1a6a50u;

    // 0x1a6a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6a54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6a58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6a60: 0x26500d88  addiu       $s0, $s2, 0xD88
    ctx->pc = 0x1a6a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1a6a64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a6a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6a6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a6a70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a74: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a6a78: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a6a7c: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6A84u);
    ctx->pc = 0x1A6A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A7Cu;
            // 0x1a6a80: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A84u; }
        if (ctx->pc != 0x1A6A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A84u; }
        if (ctx->pc != 0x1A6A84u) { return; }
    }
    ctx->pc = 0x1A6A84u;
label_1a6a84:
    // 0x1a6a84: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1a6a88: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1a6a8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6a90: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6A90u;
    {
        const bool branch_taken_0x1a6a90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A6A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A90u;
            // 0x1a6a94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a90) {
            ctx->pc = 0x1A6AA8u;
            goto label_1a6aa8;
        }
    }
    ctx->pc = 0x1A6A98u;
    // 0x1a6a98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6a9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a6a9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6aa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6AA0u;
    {
        const bool branch_taken_0x1a6aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AA0u;
            // 0x1a6aa4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6aa0) {
            ctx->pc = 0x1A6AF0u;
            goto label_1a6af0;
        }
    }
    ctx->pc = 0x1A6AA8u;
label_1a6aa8:
    // 0x1a6aa8: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1a6aac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6ab0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a6ab4: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1a6ab8: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1a6ab8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a6abc: 0x2466001f  addiu       $a2, $v1, 0x1F
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1a6ac0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ac4: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1a6ac4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1a6ac8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1a6acc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a6accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a6ad0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6ad8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a6adc: 0x8c650f84  lw          $a1, 0xF84($v1)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3972)));
    // 0x1a6ae0: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1a6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1a6ae4: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x1a6ae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6aec: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x1a6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
label_1a6af0:
    // 0x1a6af0: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A6AF0u;
    SET_GPR_U32(ctx, 31, 0x1A6AF8u);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF8u; }
        if (ctx->pc != 0x1A6AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6AF8u; }
        if (ctx->pc != 0x1A6AF8u) { return; }
    }
    ctx->pc = 0x1A6AF8u;
label_1a6af8:
    // 0x1a6af8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6afc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6b00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6b04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6b08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a6b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6b0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6b10: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a6b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B14u;
            // 0x1a6b18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6B1Cu;
    // 0x1a6b1c: 0x0  nop
    ctx->pc = 0x1a6b1cu;
    // NOP
    // 0x1a6b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6b24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a6b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a6b30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a6b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a6b38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a6b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b3c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1a6b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1a6b40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6b44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6b48: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a6b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a6b4c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1a6b50: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1a6b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1a6b54: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1a6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1a6b58: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1A6B58u;
    SET_GPR_U32(ctx, 31, 0x1A6B60u);
    ctx->pc = 0x1A6B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B58u;
            // 0x1a6b5c: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B60u; }
        if (ctx->pc != 0x1A6B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B60u; }
        if (ctx->pc != 0x1A6B60u) { return; }
    }
    ctx->pc = 0x1A6B60u;
label_1a6b60:
    // 0x1a6b60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6B60u;
    {
        const bool branch_taken_0x1a6b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B60u;
            // 0x1a6b64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b60) {
            ctx->pc = 0x1A6B80u;
            goto label_1a6b80;
        }
    }
    ctx->pc = 0x1A6B68u;
    // 0x1a6b68: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a6b6c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x1A6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B6Cu;
            // 0x1a6b70: 0x34a50162  ori         $a1, $a1, 0x162 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)354);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B74u; }
        if (ctx->pc != 0x1A6B74u) { return; }
    }
    ctx->pc = 0x1A6B74u;
label_1a6b74:
    // 0x1a6b74: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A6B74u;
    {
        const bool branch_taken_0x1a6b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B74u;
            // 0x1a6b78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b74) {
            ctx->pc = 0x1A6C4Cu;
            goto label_1a6c4c;
        }
    }
    ctx->pc = 0x1A6B7Cu;
    // 0x1a6b7c: 0x0  nop
    ctx->pc = 0x1a6b7cu;
    // NOP
label_1a6b80:
    // 0x1a6b80: 0x8e160ec8  lw          $s6, 0xEC8($s0)
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3784)));
    // 0x1a6b84: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1a6b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1a6b88: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1a6b88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1a6b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a6b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b94: 0xc06db66  jal         func_1B6D98
    ctx->pc = 0x1A6B94u;
    SET_GPR_U32(ctx, 31, 0x1A6B9Cu);
    ctx->pc = 0x1A6B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6B94u;
            // 0x1a6b98: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D98u;
    if (runtime->hasFunction(0x1B6D98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B9Cu; }
        if (ctx->pc != 0x1A6B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D98_0x1b6d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6B9Cu; }
        if (ctx->pc != 0x1A6B9Cu) { return; }
    }
    ctx->pc = 0x1A6B9Cu;
label_1a6b9c:
    // 0x1a6b9c: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1a6ba0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a6ba0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ba4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6BA4u;
    {
        const bool branch_taken_0x1a6ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BA4u;
            // 0x1a6ba8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ba4) {
            ctx->pc = 0x1A6C48u;
            goto label_1a6c48;
        }
    }
    ctx->pc = 0x1A6BACu;
    // 0x1a6bac: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a6bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6bb4: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A6BB4u;
    {
        const bool branch_taken_0x1a6bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A6BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BB4u;
            // 0x1a6bb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bb4) {
            ctx->pc = 0x1A6C48u;
            goto label_1a6c48;
        }
    }
    ctx->pc = 0x1A6BBCu;
    // 0x1a6bbc: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A6BBCu;
    SET_GPR_U32(ctx, 31, 0x1A6BC4u);
    ctx->pc = 0x1A6BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BBCu;
            // 0x1a6bc0: 0x26150d94  addiu       $s5, $s0, 0xD94 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BC4u; }
        if (ctx->pc != 0x1A6BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6BC4u; }
        if (ctx->pc != 0x1A6BC4u) { return; }
    }
    ctx->pc = 0x1A6BC4u;
label_1a6bc4:
    // 0x1a6bc4: 0x8e300168  lw          $s0, 0x168($s1)
    ctx->pc = 0x1a6bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x1a6bc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bcc: 0x0  nop
    ctx->pc = 0x1a6bccu;
    // NOP
label_1a6bd0:
    // 0x1a6bd0: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1a6bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a6bd4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6BD4u;
    {
        const bool branch_taken_0x1a6bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6BD4u;
            // 0x1a6bd8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bd4) {
            ctx->pc = 0x1A6C24u;
            goto label_1a6c24;
        }
    }
    ctx->pc = 0x1A6BDCu;
    // 0x1a6bdc: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1a6be0: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x1a6be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a6be4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6be8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a6bec: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1a6becu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1a6bf0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1a6bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bf4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1a6bf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a6bfc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a6c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6c04: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1a6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a6c08: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1A6C08u;
    SET_GPR_U32(ctx, 31, 0x1A6C10u);
    ctx->pc = 0x1A6C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C08u;
            // 0x1a6c0c: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C10u; }
        if (ctx->pc != 0x1A6C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C10u; }
        if (ctx->pc != 0x1A6C10u) { return; }
    }
    ctx->pc = 0x1A6C10u;
label_1a6c10:
    // 0x1a6c10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a6c18: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1a6c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a6c1c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A6C1Cu;
    {
        const bool branch_taken_0x1a6c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c1c) {
            ctx->pc = 0x1A6C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C1Cu;
            // 0x1a6c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a6bd0;
        }
    }
    ctx->pc = 0x1A6C24u;
label_1a6c24:
    // 0x1a6c24: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x1a6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x1a6c28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a6c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a6c30: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a6c34: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1a6c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a6c38: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1a6c38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a6c3c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6C44u);
    ctx->pc = 0x1A6C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C3Cu;
            // 0x1a6c40: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C44u; }
        if (ctx->pc != 0x1A6C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6C44u; }
        if (ctx->pc != 0x1A6C44u) { return; }
    }
    ctx->pc = 0x1A6C44u;
label_1a6c44:
    // 0x1a6c44: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1a6c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c48:
    // 0x1a6c48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6c4c:
    // 0x1a6c4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a6c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6c50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6c54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a6c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6c58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a6c58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6c5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a6c5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6c60: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a6c60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6c64: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1a6c64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a6c68: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1a6c68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6c6c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1a6c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a6c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C70u;
            // 0x1a6c74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6C78u;
}
