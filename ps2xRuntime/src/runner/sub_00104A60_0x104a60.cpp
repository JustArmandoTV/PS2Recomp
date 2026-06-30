#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104A60
// Address: 0x104a60 - 0x104cb0
void sub_00104A60_0x104a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A60_0x104a60");
#endif

    switch (ctx->pc) {
        case 0x104ae0u: goto label_104ae0;
        case 0x104b34u: goto label_104b34;
        case 0x104b4cu: goto label_104b4c;
        case 0x104b68u: goto label_104b68;
        case 0x104b8cu: goto label_104b8c;
        default: break;
    }

    ctx->pc = 0x104a60u;

    // 0x104a60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x104a64: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x104a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x104a68: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x104a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x104a6c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x104a6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a70: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x104a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x104a74: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x104a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x104a78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x104a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x104a7c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x104a7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a80: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x104a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x104a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a88: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x104a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x104a8c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x104a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x104a90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x104a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x104a94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x104a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x104a98: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x104a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x104a9c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x104aa0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104aa4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x104aa4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x104aa8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x104AA8u;
    {
        const bool branch_taken_0x104aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104aa8) {
            ctx->pc = 0x104AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104AA8u;
            // 0x104aac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x104AB0u;
            goto label_104ab0;
        }
    }
    ctx->pc = 0x104AB0u;
label_104ab0:
    // 0x104ab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x104ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104ab4: 0x1810  mfhi        $v1
    ctx->pc = 0x104ab4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x104ab8: 0xb812  mflo        $s7
    ctx->pc = 0x104ab8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x104abc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x104abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ac0: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x104ac4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x104AC4u;
    {
        const bool branch_taken_0x104ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104AC4u;
            // 0x104ac8: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ac4) {
            ctx->pc = 0x104B10u;
            goto label_104b10;
        }
    }
    ctx->pc = 0x104ACCu;
    // 0x104acc: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104ad0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x104ad4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x104ad8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x104ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x104adc: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x104adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_104ae0:
    // 0x104ae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x104ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x104ae4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x104ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x104ae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x104aec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x104aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x104af0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x104af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x104af4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104AF4u;
    {
        const bool branch_taken_0x104af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104af4) {
            ctx->pc = 0x104AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104AFCu;
    // 0x104afc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104b00: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x104b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104b04: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x104b08: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x104B08u;
    {
        const bool branch_taken_0x104b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B08u;
            // 0x104b0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b08) {
            ctx->pc = 0x104BA4u;
            goto label_104ba4;
        }
    }
    ctx->pc = 0x104B10u;
label_104b10:
    // 0x104b10: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x104b14: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x104b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x104b18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104B18u;
    {
        const bool branch_taken_0x104b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B18u;
            // 0x104b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b18) {
            ctx->pc = 0x104B44u;
            goto label_104b44;
        }
    }
    ctx->pc = 0x104B20u;
    // 0x104b20: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x104b24: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b28: 0x24a5e690  addiu       $a1, $a1, -0x1970
    ctx->pc = 0x104b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
    // 0x104b2c: 0xc042e2c  jal         func_10B8B0
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104B2Cu;
            // 0x104b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B8B0u;
    if (runtime->hasFunction(0x10B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x10B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B34u; }
        if (ctx->pc != 0x104B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B8B0_0x10b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B34u; }
        if (ctx->pc != 0x104B34u) { return; }
    }
    ctx->pc = 0x104B34u;
label_104b34:
    // 0x104b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b3c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x104B3Cu;
    {
        const bool branch_taken_0x104b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B3Cu;
            // 0x104b40: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b3c) {
            ctx->pc = 0x104C80u;
            goto label_104c80;
        }
    }
    ctx->pc = 0x104B44u;
label_104b44:
    // 0x104b44: 0xc0410d6  jal         func_104358
    ctx->pc = 0x104B44u;
    SET_GPR_U32(ctx, 31, 0x104B4Cu);
    ctx->pc = 0x104B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104B44u;
            // 0x104b48: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104358u;
    if (runtime->hasFunction(0x104358u)) {
        auto targetFn = runtime->lookupFunction(0x104358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B4Cu; }
        if (ctx->pc != 0x104B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104358_0x104358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B4Cu; }
        if (ctx->pc != 0x104B4Cu) { return; }
    }
    ctx->pc = 0x104B4Cu;
label_104b4c:
    // 0x104b4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104b50: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x104b54: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x104b58: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x104b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x104b5c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x104b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x104b60: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x104b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x104b64: 0x0  nop
    ctx->pc = 0x104b64u;
    // NOP
label_104b68:
    // 0x104b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104b6c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x104b70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x104b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104b74: 0x0  nop
    ctx->pc = 0x104b74u;
    // NOP
    // 0x104b78: 0x0  nop
    ctx->pc = 0x104b78u;
    // NOP
    // 0x104b7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104B7Cu;
    {
        const bool branch_taken_0x104b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104b7c) {
            ctx->pc = 0x104B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104b68;
        }
    }
    ctx->pc = 0x104B84u;
    // 0x104b84: 0xc041b42  jal         func_106D08
    ctx->pc = 0x104B84u;
    SET_GPR_U32(ctx, 31, 0x104B8Cu);
    ctx->pc = 0x104B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104B84u;
            // 0x104b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B8Cu; }
        if (ctx->pc != 0x104B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106D08_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B8Cu; }
        if (ctx->pc != 0x104B8Cu) { return; }
    }
    ctx->pc = 0x104B8Cu;
label_104b8c:
    // 0x104b8c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x104b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104b90: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104b94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x104b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104b98: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x104b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x104b9c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x104b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x104ba0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x104ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_104ba4:
    // 0x104ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104ba8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x104BA8u;
    {
        const bool branch_taken_0x104ba8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x104ba8) {
            ctx->pc = 0x104BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104BA8u;
            // 0x104bac: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104BD4u;
            goto label_104bd4;
        }
    }
    ctx->pc = 0x104BB0u;
    // 0x104bb0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x104bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x104bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104BB4u;
    {
        const bool branch_taken_0x104bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104BB4u;
            // 0x104bb8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bb4) {
            ctx->pc = 0x104BD0u;
            goto label_104bd0;
        }
    }
    ctx->pc = 0x104BBCu;
    // 0x104bbc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104bc0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x104bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104bc4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x104bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x104bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104BC8u;
    {
        const bool branch_taken_0x104bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104BC8u;
            // 0x104bcc: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bc8) {
            ctx->pc = 0x104BE4u;
            goto label_104be4;
        }
    }
    ctx->pc = 0x104BD0u;
label_104bd0:
    // 0x104bd0: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x104bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_104bd4:
    // 0x104bd4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104bd8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x104bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104bdc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x104be0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x104be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_104be4:
    // 0x104be4: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x104be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104be8: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104bec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104bf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x104bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104bf4: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x104bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104bf8: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x104bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x104bfc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x104bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x104c00: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x104c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x104c04: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x104C04u;
    {
        const bool branch_taken_0x104c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x104C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C04u;
            // 0x104c08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c04) {
            ctx->pc = 0x104C40u;
            goto label_104c40;
        }
    }
    ctx->pc = 0x104C0Cu;
    // 0x104c0c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x104c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104c10: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x104c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104c14: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x104c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x104c18: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x104c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104c1c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x104c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x104c20: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x104c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x104c24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x104c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104c28: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x104c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x104c2c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x104c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x104c30: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x104c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104c34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104c38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x104C38u;
    {
        const bool branch_taken_0x104c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104C38u;
            // 0x104c3c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c38) {
            ctx->pc = 0x104C7Cu;
            goto label_104c7c;
        }
    }
    ctx->pc = 0x104C40u;
label_104c40:
    // 0x104c40: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104C40u;
    {
        const bool branch_taken_0x104c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x104c40) {
            ctx->pc = 0x104C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104C40u;
            // 0x104c44: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104C4Cu;
            goto label_104c4c;
        }
    }
    ctx->pc = 0x104C48u;
    // 0x104c48: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x104c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_104c4c:
    // 0x104c4c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x104c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x104c50: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x104c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104c54: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x104c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x104c58: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x104c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104c5c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x104c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x104c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x104c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104c64: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x104c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x104c68: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x104c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x104c6c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x104c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104c70: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x104c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x104c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104c78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x104c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_104c7c:
    // 0x104c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104c80:
    // 0x104c80: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x104c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104c84: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x104c84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104c88: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x104c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104c8c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104c90: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x104c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104c94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x104c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c98: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x104c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104c9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x104c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104ca0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x104ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104ca4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x104ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x104CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104CA8u;
            // 0x104cac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104CB0u;
}
