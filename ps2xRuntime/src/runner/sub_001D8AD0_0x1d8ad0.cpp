#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8AD0
// Address: 0x1d8ad0 - 0x1d8c40
void sub_001D8AD0_0x1d8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8AD0_0x1d8ad0");
#endif

    switch (ctx->pc) {
        case 0x1d8b54u: goto label_1d8b54;
        case 0x1d8b7cu: goto label_1d8b7c;
        case 0x1d8c0cu: goto label_1d8c0c;
        default: break;
    }

    ctx->pc = 0x1d8ad0u;

    // 0x1d8ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8ad4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1d8ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d8ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8adc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d8ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8ae4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d8ae4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8aec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d8aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8af4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d8af8: 0x24500ea0  addiu       $s0, $v0, 0xEA0
    ctx->pc = 0x1d8af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x1d8afc: 0x8c420ea0  lw          $v0, 0xEA0($v0)
    ctx->pc = 0x1d8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3744)));
    // 0x1d8b00: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1D8B00u;
    {
        const bool branch_taken_0x1d8b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B00u;
            // 0x1d8b04: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b00) {
            ctx->pc = 0x1D8C18u;
            goto label_1d8c18;
        }
    }
    ctx->pc = 0x1D8B08u;
    // 0x1d8b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8b0c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8B0Cu;
    {
        const bool branch_taken_0x1d8b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b0c) {
            ctx->pc = 0x1D8B5Cu;
            goto label_1d8b5c;
        }
    }
    ctx->pc = 0x1D8B14u;
    // 0x1d8b14: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x1d8b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
    // 0x1d8b18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d8b1c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d8b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d8b20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B34u;
            goto label_1d8b34;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d8b2c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D8B2Cu;
    {
        const bool branch_taken_0x1d8b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b2c) {
            ctx->pc = 0x1D8B5Cu;
            goto label_1d8b5c;
        }
    }
    ctx->pc = 0x1D8B34u;
label_1d8b34:
    // 0x1d8b34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d8b38: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1d8b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d8b3c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1d8b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b44: 0x26460890  addiu       $a2, $s2, 0x890
    ctx->pc = 0x1d8b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x1d8b48: 0x26470ed0  addiu       $a3, $s2, 0xED0
    ctx->pc = 0x1d8b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
    // 0x1d8b4c: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x1D8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B54u);
    ctx->pc = 0x1D8B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B4Cu;
            // 0x1d8b50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B54u; }
        if (ctx->pc != 0x1D8B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B54u; }
        if (ctx->pc != 0x1D8B54u) { return; }
    }
    ctx->pc = 0x1D8B54u;
label_1d8b54:
    // 0x1d8b54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B54u;
            // 0x1d8b58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B80u;
            goto label_1d8b80;
        }
    }
    ctx->pc = 0x1D8B5Cu;
label_1d8b5c:
    // 0x1d8b5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d8b60: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1d8b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d8b64: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1d8b64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x1d8b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b6c: 0x26460890  addiu       $a2, $s2, 0x890
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x1d8b70: 0x264702c0  addiu       $a3, $s2, 0x2C0
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    // 0x1d8b74: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x1D8B74u;
    SET_GPR_U32(ctx, 31, 0x1D8B7Cu);
    ctx->pc = 0x1D8B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B74u;
            // 0x1d8b78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B7Cu; }
        if (ctx->pc != 0x1D8B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B7Cu; }
        if (ctx->pc != 0x1D8B7Cu) { return; }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1d8b80:
    // 0x1d8b80: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d8b84: 0x56220025  bnel        $s1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D8B84u;
    {
        const bool branch_taken_0x1d8b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8b84) {
            ctx->pc = 0x1D8B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B84u;
            // 0x1d8b88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C1Cu;
            goto label_1d8c1c;
        }
    }
    ctx->pc = 0x1D8B8Cu;
    // 0x1d8b8c: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
    // 0x1d8b90: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1d8b90u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1d8b94: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8B94u;
    {
        const bool branch_taken_0x1d8b94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D8B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B94u;
            // 0x1d8b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b94) {
            ctx->pc = 0x1D8BACu;
            goto label_1d8bac;
        }
    }
    ctx->pc = 0x1D8B9Cu;
    // 0x1d8b9c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d8b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d8ba0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8BA0u;
    {
        const bool branch_taken_0x1d8ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ba0) {
            ctx->pc = 0x1D8BACu;
            goto label_1d8bac;
        }
    }
    ctx->pc = 0x1D8BA8u;
    // 0x1d8ba8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d8ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bac:
    // 0x1d8bac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D8BACu;
    {
        const bool branch_taken_0x1d8bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bac) {
            ctx->pc = 0x1D8BECu;
            goto label_1d8bec;
        }
    }
    ctx->pc = 0x1D8BB4u;
    // 0x1d8bb4: 0x824211aa  lb          $v0, 0x11AA($s2)
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
    // 0x1d8bb8: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d8bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d8bbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d8bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d8bc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8BC0u;
    {
        const bool branch_taken_0x1d8bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bc0) {
            ctx->pc = 0x1D8BE0u;
            goto label_1d8be0;
        }
    }
    ctx->pc = 0x1D8BC8u;
    // 0x1d8bc8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d8bcc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1d8bd0: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x1d8bd4: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d8bd4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1d8bd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d8bdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8be0:
    // 0x1d8be0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8BE0u;
    {
        const bool branch_taken_0x1d8be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8be0) {
            ctx->pc = 0x1D8BECu;
            goto label_1d8bec;
        }
    }
    ctx->pc = 0x1D8BE8u;
    // 0x1d8be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8bec:
    // 0x1d8bec: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8BECu;
    {
        const bool branch_taken_0x1d8bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bec) {
            ctx->pc = 0x1D8BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BECu;
            // 0x1d8bf0: 0x92440084  lbu         $a0, 0x84($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8C04u;
            goto label_1d8c04;
        }
    }
    ctx->pc = 0x1D8BF4u;
    // 0x1d8bf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8bf8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BF8u;
    {
        const bool branch_taken_0x1d8bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8bf8) {
            ctx->pc = 0x1D8C0Cu;
            goto label_1d8c0c;
        }
    }
    ctx->pc = 0x1D8C00u;
    // 0x1d8c00: 0x92440084  lbu         $a0, 0x84($s2)
    ctx->pc = 0x1d8c00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 132)));
label_1d8c04:
    // 0x1d8c04: 0xc072a56  jal         func_1CA958
    ctx->pc = 0x1D8C04u;
    SET_GPR_U32(ctx, 31, 0x1D8C0Cu);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C0Cu; }
        if (ctx->pc != 0x1D8C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C0Cu; }
        if (ctx->pc != 0x1D8C0Cu) { return; }
    }
    ctx->pc = 0x1D8C0Cu;
label_1d8c0c:
    // 0x1d8c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8C10u;
    {
        const bool branch_taken_0x1d8c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c10) {
            ctx->pc = 0x1D8C1Cu;
            goto label_1d8c1c;
        }
    }
    ctx->pc = 0x1D8C18u;
label_1d8c18:
    // 0x1d8c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8c1c:
    // 0x1d8c1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d8c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C2Cu;
            // 0x1d8c30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8C34u;
    // 0x1d8c34: 0x0  nop
    ctx->pc = 0x1d8c34u;
    // NOP
    // 0x1d8c38: 0x0  nop
    ctx->pc = 0x1d8c38u;
    // NOP
    // 0x1d8c3c: 0x0  nop
    ctx->pc = 0x1d8c3cu;
    // NOP
}
