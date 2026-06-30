#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001439F0
// Address: 0x1439f0 - 0x143db0
void sub_001439F0_0x1439f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001439F0_0x1439f0");
#endif

    switch (ctx->pc) {
        case 0x143a3cu: goto label_143a3c;
        case 0x143aacu: goto label_143aac;
        case 0x143ab4u: goto label_143ab4;
        case 0x143abcu: goto label_143abc;
        case 0x143ac4u: goto label_143ac4;
        case 0x143ae0u: goto label_143ae0;
        case 0x143b14u: goto label_143b14;
        case 0x143b58u: goto label_143b58;
        case 0x143d28u: goto label_143d28;
        case 0x143d78u: goto label_143d78;
        default: break;
    }

    ctx->pc = 0x1439f0u;

    // 0x1439f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1439f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1439f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1439f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1439f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1439fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1439fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143a00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x143a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143a10: 0x8f8382ac  lw          $v1, -0x7D54($gp)
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x143a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a18: 0x10700009  beq         $v1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143A18u;
    {
        const bool branch_taken_0x143a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x143A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A18u;
            // 0x143a1c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a18) {
            ctx->pc = 0x143A40u;
            goto label_143a40;
        }
    }
    ctx->pc = 0x143A20u;
    // 0x143a20: 0x8f8482b0  lw          $a0, -0x7D50($gp)
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x143a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143a28: 0xaf9082ac  sw          $s0, -0x7D54($gp)
    ctx->pc = 0x143a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935212), GPR_U32(ctx, 16));
    // 0x143a2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143A2Cu;
    {
        const bool branch_taken_0x143a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A2Cu;
            // 0x143a30: 0xaf8382a8  sw          $v1, -0x7D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a2c) {
            ctx->pc = 0x143A40u;
            goto label_143a40;
        }
    }
    ctx->pc = 0x143A34u;
    // 0x143a34: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x143A34u;
    SET_GPR_U32(ctx, 31, 0x143A3Cu);
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A3Cu; }
        if (ctx->pc != 0x143A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A3Cu; }
        if (ctx->pc != 0x143A3Cu) { return; }
    }
    ctx->pc = 0x143A3Cu;
label_143a3c:
    // 0x143a3c: 0xaf8082b0  sw          $zero, -0x7D50($gp)
    ctx->pc = 0x143a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 0));
label_143a40:
    // 0x143a40: 0x8f8382a8  lw          $v1, -0x7D58($gp)
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x143a44: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x143A44u;
    {
        const bool branch_taken_0x143a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a44) {
            ctx->pc = 0x143A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143A44u;
            // 0x143a48: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143AD0u;
            goto label_143ad0;
        }
    }
    ctx->pc = 0x143A4Cu;
    // 0x143a4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143a50: 0x5207000a  beql        $s0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x143A50u;
    {
        const bool branch_taken_0x143a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x143a50) {
            ctx->pc = 0x143A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143A50u;
            // 0x143a54: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143A7Cu;
            goto label_143a7c;
        }
    }
    ctx->pc = 0x143A58u;
    // 0x143a58: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143A58u;
    {
        const bool branch_taken_0x143a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a58) {
            ctx->pc = 0x143A7Cu;
            goto label_143a7c;
        }
    }
    ctx->pc = 0x143A60u;
    // 0x143a60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143A60u;
    {
        const bool branch_taken_0x143a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a60) {
            ctx->pc = 0x143A74u;
            goto label_143a74;
        }
    }
    ctx->pc = 0x143A68u;
    // 0x143a68: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x143a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143a6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143A6Cu;
    {
        const bool branch_taken_0x143a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a6c) {
            ctx->pc = 0x143A7Cu;
            goto label_143a7c;
        }
    }
    ctx->pc = 0x143A74u;
label_143a74:
    // 0x143a74: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x143A74u;
    {
        const bool branch_taken_0x143a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A74u;
            // 0x143a78: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a74) {
            ctx->pc = 0x143D88u;
            goto label_143d88;
        }
    }
    ctx->pc = 0x143A7Cu;
label_143a7c:
    // 0x143a7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143a80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x143a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a84: 0x8c485b20  lw          $t0, 0x5B20($v0)
    ctx->pc = 0x143a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23328)));
    // 0x143a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143a90: 0x8c495b24  lw          $t1, 0x5B24($v0)
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23332)));
    // 0x143a94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143a98: 0x8c4a5b28  lw          $t2, 0x5B28($v0)
    ctx->pc = 0x143a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23336)));
    // 0x143a9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x143aa0: 0x8c4b5b2c  lw          $t3, 0x5B2C($v0)
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23340)));
    // 0x143aa4: 0xc0574a0  jal         func_15D280
    ctx->pc = 0x143AA4u;
    SET_GPR_U32(ctx, 31, 0x143AACu);
    ctx->pc = 0x143AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AA4u;
            // 0x143aa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D280u;
    if (runtime->hasFunction(0x15D280u)) {
        auto targetFn = runtime->lookupFunction(0x15D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AACu; }
        if (ctx->pc != 0x143AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D280_0x15d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AACu; }
        if (ctx->pc != 0x143AACu) { return; }
    }
    ctx->pc = 0x143AACu;
label_143aac:
    // 0x143aac: 0xc0574b0  jal         func_15D2C0
    ctx->pc = 0x143AACu;
    SET_GPR_U32(ctx, 31, 0x143AB4u);
    ctx->pc = 0x143AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AACu;
            // 0x143ab0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2C0u;
    if (runtime->hasFunction(0x15D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AB4u; }
        if (ctx->pc != 0x143AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2C0_0x15d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AB4u; }
        if (ctx->pc != 0x143AB4u) { return; }
    }
    ctx->pc = 0x143AB4u;
label_143ab4:
    // 0x143ab4: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x143AB4u;
    SET_GPR_U32(ctx, 31, 0x143ABCu);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ABCu; }
        if (ctx->pc != 0x143ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ABCu; }
        if (ctx->pc != 0x143ABCu) { return; }
    }
    ctx->pc = 0x143ABCu;
label_143abc:
    // 0x143abc: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x143ABCu;
    SET_GPR_U32(ctx, 31, 0x143AC4u);
    ctx->pc = 0x143AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143ABCu;
            // 0x143ac0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AC4u; }
        if (ctx->pc != 0x143AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AC4u; }
        if (ctx->pc != 0x143AC4u) { return; }
    }
    ctx->pc = 0x143AC4u;
label_143ac4:
    // 0x143ac4: 0xaf8282b0  sw          $v0, -0x7D50($gp)
    ctx->pc = 0x143ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 2));
    // 0x143ac8: 0xaf8082a8  sw          $zero, -0x7D58($gp)
    ctx->pc = 0x143ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 0));
    // 0x143acc: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x143accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_143ad0:
    // 0x143ad0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x143ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x143ad4: 0x708823  subu        $s1, $v1, $s0
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x143ad8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x143ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x143adc: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x143adcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_143ae0:
    // 0x143ae0: 0x2a61001b  slti        $at, $s3, 0x1B
    ctx->pc = 0x143ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x143ae4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AE4u;
    {
        const bool branch_taken_0x143ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ae4) {
            ctx->pc = 0x143AF8u;
            goto label_143af8;
        }
    }
    ctx->pc = 0x143AECu;
    // 0x143aec: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x143aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x143af0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143AF0u;
    {
        const bool branch_taken_0x143af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143AF0u;
            // 0x143af4: 0x2719823  subu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143af0) {
            ctx->pc = 0x143B00u;
            goto label_143b00;
        }
    }
    ctx->pc = 0x143AF8u;
label_143af8:
    // 0x143af8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x143af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143afc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x143afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143b00:
    // 0x143b00: 0x8f8482b0  lw          $a0, -0x7D50($gp)
    ctx->pc = 0x143b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x143b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x143b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b08: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x143b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x143b0c: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x143B0Cu;
    SET_GPR_U32(ctx, 31, 0x143B14u);
    ctx->pc = 0x143B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B0Cu;
            // 0x143b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B14u; }
        if (ctx->pc != 0x143B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B14u; }
        if (ctx->pc != 0x143B14u) { return; }
    }
    ctx->pc = 0x143B14u;
label_143b14:
    // 0x143b14: 0x1a400096  blez        $s2, . + 4 + (0x96 << 2)
    ctx->pc = 0x143B14u;
    {
        const bool branch_taken_0x143b14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x143B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B14u;
            // 0x143b18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b14) {
            ctx->pc = 0x143D70u;
            goto label_143d70;
        }
    }
    ctx->pc = 0x143B1Cu;
    // 0x143b1c: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x143b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x143b20: 0x1420007b  bnez        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x143B20u;
    {
        const bool branch_taken_0x143b20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B20u;
            // 0x143b24: 0x2646fff8  addiu       $a2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b20) {
            ctx->pc = 0x143D10u;
            goto label_143d10;
        }
    }
    ctx->pc = 0x143B28u;
    // 0x143b28: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x143B28u;
    {
        const bool branch_taken_0x143b28 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x143B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B28u;
            // 0x143b2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b28) {
            ctx->pc = 0x143B48u;
            goto label_143b48;
        }
    }
    ctx->pc = 0x143B30u;
    // 0x143b30: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x143b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x143b34: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x143b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x143b38: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x143b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x143b3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x143B3Cu;
    {
        const bool branch_taken_0x143b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b3c) {
            ctx->pc = 0x143B48u;
            goto label_143b48;
        }
    }
    ctx->pc = 0x143B44u;
    // 0x143b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143b48:
    // 0x143b48: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x143B48u;
    {
        const bool branch_taken_0x143b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b48) {
            ctx->pc = 0x143D10u;
            goto label_143d10;
        }
    }
    ctx->pc = 0x143B50u;
    // 0x143b50: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x143b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x143b54: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x143b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_143b58:
    // 0x143b58: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x143b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x143b5c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x143b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b60: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x143b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x143b64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x143b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x143b68: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x143b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x143b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x143b70: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x143b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x143b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x143b78: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x143b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x143b7c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x143b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x143b80: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x143b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x143b84: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x143b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x143b88: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x143b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x143b8c: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x143b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x143b90: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x143b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x143b94: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x143b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143b98: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x143b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x143b9c: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x143b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143ba0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x143ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x143ba4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x143ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143ba8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x143ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x143bac: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x143bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    // 0x143bb0: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x143bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x143bb4: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x143bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x143bb8: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x143bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x143bbc: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x143bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x143bc0: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x143bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x143bc4: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x143bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x143bc8: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x143bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143bcc: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x143bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x143bd0: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x143bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143bd4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x143bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x143bd8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x143bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143bdc: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x143bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x143be0: 0xac45006c  sw          $a1, 0x6C($v0)
    ctx->pc = 0x143be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 5));
    // 0x143be4: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x143be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x143be8: 0xac440074  sw          $a0, 0x74($v0)
    ctx->pc = 0x143be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
    // 0x143bec: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x143becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x143bf0: 0xac44007c  sw          $a0, 0x7C($v0)
    ctx->pc = 0x143bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x143bf4: 0xac450088  sw          $a1, 0x88($v0)
    ctx->pc = 0x143bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 5));
    // 0x143bf8: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x143bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x143bfc: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x143bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c00: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x143c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x143c04: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x143c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c08: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x143c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x143c0c: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x143c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c10: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x143c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x143c14: 0xac45009c  sw          $a1, 0x9C($v0)
    ctx->pc = 0x143c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 5));
    // 0x143c18: 0xac4400a0  sw          $a0, 0xA0($v0)
    ctx->pc = 0x143c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 4));
    // 0x143c1c: 0xac4400a4  sw          $a0, 0xA4($v0)
    ctx->pc = 0x143c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 4));
    // 0x143c20: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x143c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
    // 0x143c24: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x143c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
    // 0x143c28: 0xac4500b8  sw          $a1, 0xB8($v0)
    ctx->pc = 0x143c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 5));
    // 0x143c2c: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x143c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x143c30: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x143c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c34: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x143c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x143c38: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x143c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c3c: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x143c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x143c40: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x143c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c44: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x143c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x143c48: 0xac4500cc  sw          $a1, 0xCC($v0)
    ctx->pc = 0x143c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 5));
    // 0x143c4c: 0xac4400d0  sw          $a0, 0xD0($v0)
    ctx->pc = 0x143c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 4));
    // 0x143c50: 0xac4400d4  sw          $a0, 0xD4($v0)
    ctx->pc = 0x143c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 4));
    // 0x143c54: 0xac4400d8  sw          $a0, 0xD8($v0)
    ctx->pc = 0x143c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 4));
    // 0x143c58: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x143c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x143c5c: 0xac4500e8  sw          $a1, 0xE8($v0)
    ctx->pc = 0x143c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 5));
    // 0x143c60: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x143c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x143c64: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x143c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c68: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x143c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x143c6c: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x143c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c70: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x143c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x143c74: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x143c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c78: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x143c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x143c7c: 0xac4500fc  sw          $a1, 0xFC($v0)
    ctx->pc = 0x143c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 5));
    // 0x143c80: 0xac440100  sw          $a0, 0x100($v0)
    ctx->pc = 0x143c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 4));
    // 0x143c84: 0xac440104  sw          $a0, 0x104($v0)
    ctx->pc = 0x143c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 4));
    // 0x143c88: 0xac440108  sw          $a0, 0x108($v0)
    ctx->pc = 0x143c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 4));
    // 0x143c8c: 0xac44010c  sw          $a0, 0x10C($v0)
    ctx->pc = 0x143c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 4));
    // 0x143c90: 0xac450118  sw          $a1, 0x118($v0)
    ctx->pc = 0x143c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 5));
    // 0x143c94: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x143c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x143c98: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x143c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143c9c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x143c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x143ca0: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x143ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143ca4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x143ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x143ca8: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x143ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143cac: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x143cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x143cb0: 0xac45012c  sw          $a1, 0x12C($v0)
    ctx->pc = 0x143cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 5));
    // 0x143cb4: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x143cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
    // 0x143cb8: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x143cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 4));
    // 0x143cbc: 0xac440138  sw          $a0, 0x138($v0)
    ctx->pc = 0x143cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 4));
    // 0x143cc0: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x143cc4: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x143cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x143cc8: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x143cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    // 0x143ccc: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x143cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143cd0: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x143cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x143cd4: 0xc6800058  lwc1        $f0, 0x58($s4)
    ctx->pc = 0x143cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143cd8: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x143cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x143cdc: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x143cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143ce0: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x143ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x143ce4: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x143ce8: 0xac45015c  sw          $a1, 0x15C($v0)
    ctx->pc = 0x143ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 5));
    // 0x143cec: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x143cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
    // 0x143cf0: 0xac440164  sw          $a0, 0x164($v0)
    ctx->pc = 0x143cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 4));
    // 0x143cf4: 0xac440168  sw          $a0, 0x168($v0)
    ctx->pc = 0x143cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 4));
    // 0x143cf8: 0xac44016c  sw          $a0, 0x16C($v0)
    ctx->pc = 0x143cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 4));
    // 0x143cfc: 0xac450178  sw          $a1, 0x178($v0)
    ctx->pc = 0x143cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 5));
    // 0x143d00: 0xac40017c  sw          $zero, 0x17C($v0)
    ctx->pc = 0x143d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 0));
    // 0x143d04: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x143D04u;
    {
        const bool branch_taken_0x143d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D04u;
            // 0x143d08: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d04) {
            ctx->pc = 0x143B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143b58;
        }
    }
    ctx->pc = 0x143D0Cu;
    // 0x143d0c: 0x0  nop
    ctx->pc = 0x143d0cu;
    // NOP
label_143d10:
    // 0x143d10: 0xf2082a  slt         $at, $a3, $s2
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x143d14: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x143D14u;
    {
        const bool branch_taken_0x143d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d14) {
            ctx->pc = 0x143D70u;
            goto label_143d70;
        }
    }
    ctx->pc = 0x143D1Cu;
    // 0x143d1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x143d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x143d20: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x143d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143d24: 0x0  nop
    ctx->pc = 0x143d24u;
    // NOP
label_143d28:
    // 0x143d28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x143d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x143d2c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x143d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143d30: 0xf2182a  slt         $v1, $a3, $s2
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x143d34: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x143d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x143d38: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x143d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143d3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x143d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x143d40: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x143d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143d44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x143d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x143d48: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x143d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x143d4c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x143d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x143d50: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x143d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x143d54: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x143d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x143d58: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x143d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x143d5c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x143d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x143d60: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x143d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x143d64: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x143d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x143d68: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x143D68u;
    {
        const bool branch_taken_0x143d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D68u;
            // 0x143d6c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d68) {
            ctx->pc = 0x143D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143d28;
        }
    }
    ctx->pc = 0x143D70u;
label_143d70:
    // 0x143d70: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x143D70u;
    SET_GPR_U32(ctx, 31, 0x143D78u);
    ctx->pc = 0x143D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143D70u;
            // 0x143d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D78u; }
        if (ctx->pc != 0x143D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D78u; }
        if (ctx->pc != 0x143D78u) { return; }
    }
    ctx->pc = 0x143D78u;
label_143d78:
    // 0x143d78: 0xaf8282b0  sw          $v0, -0x7D50($gp)
    ctx->pc = 0x143d78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 2));
    // 0x143d7c: 0x1e60ff58  bgtz        $s3, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x143D7Cu;
    {
        const bool branch_taken_0x143d7c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x143D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D7Cu;
            // 0x143d80: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d7c) {
            ctx->pc = 0x143AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143ae0;
        }
    }
    ctx->pc = 0x143D84u;
    // 0x143d84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x143d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_143d88:
    // 0x143d88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143d88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143d8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x143D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D9Cu;
            // 0x143da0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143DA4u;
    // 0x143da4: 0x0  nop
    ctx->pc = 0x143da4u;
    // NOP
    // 0x143da8: 0x0  nop
    ctx->pc = 0x143da8u;
    // NOP
    // 0x143dac: 0x0  nop
    ctx->pc = 0x143dacu;
    // NOP
}
