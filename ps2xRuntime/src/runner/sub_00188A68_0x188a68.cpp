#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188A68
// Address: 0x188a68 - 0x188b10
void sub_00188A68_0x188a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188A68_0x188a68");
#endif

    switch (ctx->pc) {
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        default: break;
    }

    ctx->pc = 0x188a68u;

label_188a68:
    // 0x188a68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188a6c:
    // 0x188a6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188a70:
    // 0x188a70: 0x8c42fe38  lw          $v0, -0x1C8($v0)
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966840)));
label_188a74:
    // 0x188a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188a78:
    // 0x188a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188a7c:
    // 0x188a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_188a80:
    if (ctx->pc == 0x188A80u) {
        ctx->pc = 0x188A80u;
            // 0x188a80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x188A84u;
        goto label_188a84;
    }
    ctx->pc = 0x188A7Cu;
    {
        const bool branch_taken_0x188a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A7Cu;
            // 0x188a80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a7c) {
            ctx->pc = 0x188A98u;
            goto label_188a98;
        }
    }
    ctx->pc = 0x188A84u;
label_188a84:
    // 0x188a84: 0x40f809  jalr        $v0
label_188a88:
    if (ctx->pc == 0x188A88u) {
        ctx->pc = 0x188A8Cu;
        goto label_188a8c;
    }
    ctx->pc = 0x188A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188A8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x188A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188A8Cu; }
            if (ctx->pc != 0x188A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x188A8Cu;
label_188a8c:
    // 0x188a8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_188a90:
    if (ctx->pc == 0x188A90u) {
        ctx->pc = 0x188A90u;
            // 0x188a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x188A94u;
        goto label_188a94;
    }
    ctx->pc = 0x188A8Cu;
    {
        const bool branch_taken_0x188a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A8Cu;
            // 0x188a90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a8c) {
            ctx->pc = 0x188AB8u;
            goto label_188ab8;
        }
    }
    ctx->pc = 0x188A94u;
label_188a94:
    // 0x188a94: 0x0  nop
    ctx->pc = 0x188a94u;
    // NOP
label_188a98:
    // 0x188a98: 0xc061f74  jal         func_187DD0
label_188a9c:
    if (ctx->pc == 0x188A9Cu) {
        ctx->pc = 0x188AA0u;
        goto label_188aa0;
    }
    ctx->pc = 0x188A98u;
    SET_GPR_U32(ctx, 31, 0x188AA0u);
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AA0u; }
        if (ctx->pc != 0x188AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AA0u; }
        if (ctx->pc != 0x188AA0u) { return; }
    }
    ctx->pc = 0x188AA0u;
label_188aa0:
    // 0x188aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188aa4:
    // 0x188aa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x188aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188aa8:
    // 0x188aa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x188aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_188aac:
    // 0x188aac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_188ab0:
    // 0x188ab0: 0xc061f7a  jal         func_187DE8
label_188ab4:
    if (ctx->pc == 0x188AB4u) {
        ctx->pc = 0x188AB4u;
            // 0x188ab4: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x188AB8u;
        goto label_188ab8;
    }
    ctx->pc = 0x188AB0u;
    SET_GPR_U32(ctx, 31, 0x188AB8u);
    ctx->pc = 0x188AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188AB0u;
            // 0x188ab4: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AB8u; }
        if (ctx->pc != 0x188AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AB8u; }
        if (ctx->pc != 0x188AB8u) { return; }
    }
    ctx->pc = 0x188AB8u;
label_188ab8:
    // 0x188ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x188ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188abc:
    // 0x188abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188ac0:
    // 0x188ac0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188ac4:
    // 0x188ac4: 0x3e00008  jr          $ra
label_188ac8:
    if (ctx->pc == 0x188AC8u) {
        ctx->pc = 0x188AC8u;
            // 0x188ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188ACCu;
        goto label_188acc;
    }
    ctx->pc = 0x188AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188AC4u;
            // 0x188ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188ACCu;
label_188acc:
    // 0x188acc: 0x0  nop
    ctx->pc = 0x188accu;
    // NOP
label_188ad0:
    // 0x188ad0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188ad4:
    // 0x188ad4: 0x2445fe38  addiu       $a1, $v0, -0x1C8
    ctx->pc = 0x188ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966840));
label_188ad8:
    // 0x188ad8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x188ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_188adc:
    // 0x188adc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_188ae0:
    if (ctx->pc == 0x188AE0u) {
        ctx->pc = 0x188AE0u;
            // 0x188ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x188AE4u;
        goto label_188ae4;
    }
    ctx->pc = 0x188ADCu;
    {
        const bool branch_taken_0x188adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188ADCu;
            // 0x188ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188adc) {
            ctx->pc = 0x188AECu;
            goto label_188aec;
        }
    }
    ctx->pc = 0x188AE4u;
label_188ae4:
    // 0x188ae4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x188ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_188ae8:
    // 0x188ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188aec:
    // 0x188aec: 0x3e00008  jr          $ra
label_188af0:
    if (ctx->pc == 0x188AF0u) {
        ctx->pc = 0x188AF4u;
        goto label_188af4;
    }
    ctx->pc = 0x188AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188AF4u;
label_188af4:
    // 0x188af4: 0x0  nop
    ctx->pc = 0x188af4u;
    // NOP
label_188af8:
    // 0x188af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188afc:
    // 0x188afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188b00:
    // 0x188b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188b04:
    // 0x188b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188b08:
    // 0x188b08: 0x80622b4  j           func_188AD0
label_188b0c:
    if (ctx->pc == 0x188B0Cu) {
        ctx->pc = 0x188B0Cu;
            // 0x188b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188B10u;
        goto label_fallthrough_0x188b08;
    }
    ctx->pc = 0x188B08u;
    ctx->pc = 0x188B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B08u;
            // 0x188b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188AD0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_188ad0;
label_fallthrough_0x188b08:
    ctx->pc = 0x188B10u;
}
