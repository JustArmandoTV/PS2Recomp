#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2A10
// Address: 0x2d2a10 - 0x2d2b70
void sub_002D2A10_0x2d2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2A10_0x2d2a10");
#endif

    switch (ctx->pc) {
        case 0x2d2a5cu: goto label_2d2a5c;
        case 0x2d2a64u: goto label_2d2a64;
        case 0x2d2a88u: goto label_2d2a88;
        case 0x2d2aacu: goto label_2d2aac;
        case 0x2d2b40u: goto label_2d2b40;
        case 0x2d2b5cu: goto label_2d2b5c;
        default: break;
    }

    ctx->pc = 0x2d2a10u;

    // 0x2d2a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2a20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d2a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2a28: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2d2a28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d2a2c: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D2A2Cu;
    {
        const bool branch_taken_0x2d2a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A2Cu;
            // 0x2d2a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a2c) {
            ctx->pc = 0x2D2B5Cu;
            goto label_2d2b5c;
        }
    }
    ctx->pc = 0x2D2A34u;
    // 0x2d2a34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2d2a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2d2a38: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x2d2a38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2d2a3c: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2A3Cu;
    {
        const bool branch_taken_0x2d2a3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a3c) {
            ctx->pc = 0x2D2A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A3Cu;
            // 0x2d2a40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A68u;
            goto label_2d2a68;
        }
    }
    ctx->pc = 0x2D2A44u;
    // 0x2d2a44: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d2a48: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d2a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d2a4c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d2a50: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d2a54: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D2A54u;
    SET_GPR_U32(ctx, 31, 0x2D2A5Cu);
    ctx->pc = 0x2D2A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A54u;
            // 0x2d2a58: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A5Cu; }
        if (ctx->pc != 0x2D2A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A5Cu; }
        if (ctx->pc != 0x2D2A5Cu) { return; }
    }
    ctx->pc = 0x2D2A5Cu;
label_2d2a5c:
    // 0x2d2a5c: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A64u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A64u; }
        if (ctx->pc != 0x2D2A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A64u; }
        if (ctx->pc != 0x2D2A64u) { return; }
    }
    ctx->pc = 0x2D2A64u;
label_2d2a64:
    // 0x2d2a64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d2a68:
    // 0x2d2a68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2d2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2d2a6c: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2d2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2d2a70: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2d2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d2a74: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d2a78: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2d2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2d2a7c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2d2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2d2a80: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x2D2A80u;
    SET_GPR_U32(ctx, 31, 0x2D2A88u);
    ctx->pc = 0x2D2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A80u;
            // 0x2d2a84: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A88u; }
        if (ctx->pc != 0x2D2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A88u; }
        if (ctx->pc != 0x2D2A88u) { return; }
    }
    ctx->pc = 0x2D2A88u;
label_2d2a88:
    // 0x2d2a88: 0xafb10034  sw          $s1, 0x34($sp)
    ctx->pc = 0x2d2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
    // 0x2d2a8c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2d2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2d2a90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2a94: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2d2a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d2a98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2a9c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2d2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d2aa0: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x2d2aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2aa4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2AA4u;
    {
        const bool branch_taken_0x2d2aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2aa4) {
            ctx->pc = 0x2D2AE8u;
            goto label_2d2ae8;
        }
    }
    ctx->pc = 0x2D2AACu;
label_2d2aac:
    // 0x2d2aac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2AACu;
    {
        const bool branch_taken_0x2d2aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2aac) {
            ctx->pc = 0x2D2AC8u;
            goto label_2d2ac8;
        }
    }
    ctx->pc = 0x2D2AB4u;
    // 0x2d2ab4: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x2d2ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d2ab8: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x2d2ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d2abc: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2d2abcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d2ac0: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x2d2ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d2ac4: 0x0  nop
    ctx->pc = 0x2d2ac4u;
    // NOP
label_2d2ac8:
    // 0x2d2ac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2acc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d2accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d2ad0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d2ad4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x2d2ad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d2ad8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d2adc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D2ADCu;
    {
        const bool branch_taken_0x2d2adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2ADCu;
            // 0x2d2ae0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2adc) {
            ctx->pc = 0x2D2AACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2aac;
        }
    }
    ctx->pc = 0x2D2AE4u;
    // 0x2d2ae4: 0x0  nop
    ctx->pc = 0x2d2ae4u;
    // NOP
label_2d2ae8:
    // 0x2d2ae8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2d2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2aec: 0x50500012  beql        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2AECu;
    {
        const bool branch_taken_0x2d2aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d2aec) {
            ctx->pc = 0x2D2AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AECu;
            // 0x2d2af0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B38u;
            goto label_2d2b38;
        }
    }
    ctx->pc = 0x2D2AF4u;
    // 0x2d2af4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2af8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2afc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2d2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2d2b00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2d2b04: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d2b08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d2b0c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2d2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2d2b10: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d2b14: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d2b18: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d2b1c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2d2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2d2b20: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d2b24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2b28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2b2c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2d2b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2d2b30: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2d2b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2d2b34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d2b38:
    // 0x2d2b38: 0xc0b645c  jal         func_2D9170
    ctx->pc = 0x2D2B38u;
    SET_GPR_U32(ctx, 31, 0x2D2B40u);
    ctx->pc = 0x2D9170u;
    if (runtime->hasFunction(0x2D9170u)) {
        auto targetFn = runtime->lookupFunction(0x2D9170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B40u; }
        if (ctx->pc != 0x2D2B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9170_0x2d9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B40u; }
        if (ctx->pc != 0x2D2B40u) { return; }
    }
    ctx->pc = 0x2D2B40u;
label_2d2b40:
    // 0x2d2b40: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2d2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d2b44: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2B44u;
    {
        const bool branch_taken_0x2d2b44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b44) {
            ctx->pc = 0x2D2B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B44u;
            // 0x2d2b48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B60u;
            goto label_2d2b60;
        }
    }
    ctx->pc = 0x2D2B4Cu;
    // 0x2d2b4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2B4Cu;
    {
        const bool branch_taken_0x2d2b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b4c) {
            ctx->pc = 0x2D2B5Cu;
            goto label_2d2b5c;
        }
    }
    ctx->pc = 0x2D2B54u;
    // 0x2d2b54: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D2B54u;
    SET_GPR_U32(ctx, 31, 0x2D2B5Cu);
    ctx->pc = 0x2D2B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B54u;
            // 0x2d2b58: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B5Cu; }
        if (ctx->pc != 0x2D2B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B5Cu; }
        if (ctx->pc != 0x2D2B5Cu) { return; }
    }
    ctx->pc = 0x2D2B5Cu;
label_2d2b5c:
    // 0x2d2b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2b60:
    // 0x2d2b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B68u;
            // 0x2d2b6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2B70u;
}
