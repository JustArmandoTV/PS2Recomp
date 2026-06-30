#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0AF0
// Address: 0x1b0af0 - 0x1b0c30
void sub_001B0AF0_0x1b0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0AF0_0x1b0af0");
#endif

    switch (ctx->pc) {
        case 0x1b0b38u: goto label_1b0b38;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0ba0u: goto label_1b0ba0;
        case 0x1b0bd4u: goto label_1b0bd4;
        case 0x1b0c10u: goto label_1b0c10;
        default: break;
    }

    ctx->pc = 0x1b0af0u;

    // 0x1b0af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0af8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b0afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0b04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b0b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0b0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0b10: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1b0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1b0b14: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1b0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1b0b18: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1b0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1b0b1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1b0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1b0b20: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1b0b24: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1b0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1b0b28: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0B28u;
    {
        const bool branch_taken_0x1b0b28 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B28u;
            // 0x1b0b2c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b28) {
            ctx->pc = 0x1B0B5Cu;
            goto label_1b0b5c;
        }
    }
    ctx->pc = 0x1B0B30u;
    // 0x1b0b30: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1b0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1b0b34: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b0b38:
    // 0x1b0b38: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1b0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1b0b3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0b40: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1b0b44: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1b0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1b0b48: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1b0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1b0b4c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1b0b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1b0b50: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b0b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0b54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B0B54u;
    {
        const bool branch_taken_0x1b0b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B54u;
            // 0x1b0b58: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b54) {
            ctx->pc = 0x1B0B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0b38;
        }
    }
    ctx->pc = 0x1B0B5Cu;
label_1b0b5c:
    // 0x1b0b5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0b60: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B0B60u;
    {
        const bool branch_taken_0x1b0b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B60u;
            // 0x1b0b64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b60) {
            ctx->pc = 0x1B0BB0u;
            goto label_1b0bb0;
        }
    }
    ctx->pc = 0x1B0B68u;
    // 0x1b0b68: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x1b0b68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x1b0b6c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1b0b70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0b74: 0x0  nop
    ctx->pc = 0x1b0b74u;
    // NOP
label_1b0b78:
    // 0x1b0b78: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x1b0b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x1b0b7c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0b80: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b0b84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0b88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0b8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0b90: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x1b0b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x1b0b94: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1b0b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b0b98: 0xc06c294  jal         func_1B0A50
    ctx->pc = 0x1B0B98u;
    SET_GPR_U32(ctx, 31, 0x1B0BA0u);
    ctx->pc = 0x1B0B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B98u;
            // 0x1b0b9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A50u;
    if (runtime->hasFunction(0x1B0A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA0u; }
        if (ctx->pc != 0x1B0BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A50_0x1b0a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA0u; }
        if (ctx->pc != 0x1B0BA0u) { return; }
    }
    ctx->pc = 0x1B0BA0u;
label_1b0ba0:
    // 0x1b0ba0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b0ba4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b0ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0ba8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B0BA8u;
    {
        const bool branch_taken_0x1b0ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ba8) {
            ctx->pc = 0x1B0BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BA8u;
            // 0x1b0bac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0b78;
        }
    }
    ctx->pc = 0x1B0BB0u;
label_1b0bb0:
    // 0x1b0bb0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0bb4: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x1b0bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x1b0bb8: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1b0bb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1b0bbc: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b0bc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b0bc4: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x1b0bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x1b0bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bcc: 0xc06c294  jal         func_1B0A50
    ctx->pc = 0x1B0BCCu;
    SET_GPR_U32(ctx, 31, 0x1B0BD4u);
    ctx->pc = 0x1B0BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BCCu;
            // 0x1b0bd0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0A50u;
    if (runtime->hasFunction(0x1B0A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BD4u; }
        if (ctx->pc != 0x1B0BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0A50_0x1b0a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BD4u; }
        if (ctx->pc != 0x1B0BD4u) { return; }
    }
    ctx->pc = 0x1B0BD4u;
label_1b0bd4:
    // 0x1b0bd4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0bd8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0bdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0be0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0be4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b0be8: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x1b0be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x1b0bec: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1b0becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1b0bf0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1b0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1b0bf4: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x1b0bf8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1b0bfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b0c00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b0c04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b0c08: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B0C08u;
    SET_GPR_U32(ctx, 31, 0x1B0C10u);
    ctx->pc = 0x1B0C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C08u;
            // 0x1b0c0c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C10u; }
        if (ctx->pc != 0x1B0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C10u; }
        if (ctx->pc != 0x1B0C10u) { return; }
    }
    ctx->pc = 0x1B0C10u;
label_1b0c10:
    // 0x1b0c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0c1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0c20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C24u;
            // 0x1b0c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0C2Cu;
    // 0x1b0c2c: 0x0  nop
    ctx->pc = 0x1b0c2cu;
    // NOP
}
