#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CDC0
// Address: 0x47cdc0 - 0x47ce60
void sub_0047CDC0_0x47cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CDC0_0x47cdc0");
#endif

    switch (ctx->pc) {
        case 0x47cdc0u: goto label_47cdc0;
        case 0x47cdc4u: goto label_47cdc4;
        case 0x47cdc8u: goto label_47cdc8;
        case 0x47cdccu: goto label_47cdcc;
        case 0x47cdd0u: goto label_47cdd0;
        case 0x47cdd4u: goto label_47cdd4;
        case 0x47cdd8u: goto label_47cdd8;
        case 0x47cddcu: goto label_47cddc;
        case 0x47cde0u: goto label_47cde0;
        case 0x47cde4u: goto label_47cde4;
        case 0x47cde8u: goto label_47cde8;
        case 0x47cdecu: goto label_47cdec;
        case 0x47cdf0u: goto label_47cdf0;
        case 0x47cdf4u: goto label_47cdf4;
        case 0x47cdf8u: goto label_47cdf8;
        case 0x47cdfcu: goto label_47cdfc;
        case 0x47ce00u: goto label_47ce00;
        case 0x47ce04u: goto label_47ce04;
        case 0x47ce08u: goto label_47ce08;
        case 0x47ce0cu: goto label_47ce0c;
        case 0x47ce10u: goto label_47ce10;
        case 0x47ce14u: goto label_47ce14;
        case 0x47ce18u: goto label_47ce18;
        case 0x47ce1cu: goto label_47ce1c;
        case 0x47ce20u: goto label_47ce20;
        case 0x47ce24u: goto label_47ce24;
        case 0x47ce28u: goto label_47ce28;
        case 0x47ce2cu: goto label_47ce2c;
        case 0x47ce30u: goto label_47ce30;
        case 0x47ce34u: goto label_47ce34;
        case 0x47ce38u: goto label_47ce38;
        case 0x47ce3cu: goto label_47ce3c;
        case 0x47ce40u: goto label_47ce40;
        case 0x47ce44u: goto label_47ce44;
        case 0x47ce48u: goto label_47ce48;
        case 0x47ce4cu: goto label_47ce4c;
        case 0x47ce50u: goto label_47ce50;
        case 0x47ce54u: goto label_47ce54;
        case 0x47ce58u: goto label_47ce58;
        case 0x47ce5cu: goto label_47ce5c;
        default: break;
    }

    ctx->pc = 0x47cdc0u;

label_47cdc0:
    // 0x47cdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47cdc4:
    // 0x47cdc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_47cdc8:
    // 0x47cdc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47cdcc:
    // 0x47cdcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47cdd0:
    // 0x47cdd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47cdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47cdd4:
    // 0x47cdd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47cdd8:
    // 0x47cdd8: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x47cdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_47cddc:
    // 0x47cddc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x47cddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_47cde0:
    // 0x47cde0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x47cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_47cde4:
    // 0x47cde4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47cde4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47cde8:
    // 0x47cde8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x47cde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_47cdec:
    // 0x47cdec: 0x320f809  jalr        $t9
label_47cdf0:
    if (ctx->pc == 0x47CDF0u) {
        ctx->pc = 0x47CDF0u;
            // 0x47cdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47CDF4u;
        goto label_47cdf4;
    }
    ctx->pc = 0x47CDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47CDF4u);
        ctx->pc = 0x47CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CDECu;
            // 0x47cdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47CDF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47CDF4u; }
            if (ctx->pc != 0x47CDF4u) { return; }
        }
        }
    }
    ctx->pc = 0x47CDF4u;
label_47cdf4:
    // 0x47cdf4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x47cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_47cdf8:
    // 0x47cdf8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47cdf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47cdfc:
    // 0x47cdfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x47cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47ce00:
    // 0x47ce00: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x47ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_47ce04:
    // 0x47ce04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x47ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47ce08:
    // 0x47ce08: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x47ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_47ce0c:
    // 0x47ce0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_47ce10:
    // 0x47ce10: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x47ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_47ce14:
    // 0x47ce14: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_47ce18:
    if (ctx->pc == 0x47CE18u) {
        ctx->pc = 0x47CE18u;
            // 0x47ce18: 0x261001e0  addiu       $s0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->pc = 0x47CE1Cu;
        goto label_47ce1c;
    }
    ctx->pc = 0x47CE14u;
    {
        const bool branch_taken_0x47ce14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x47CE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CE14u;
            // 0x47ce18: 0x261001e0  addiu       $s0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ce14) {
            ctx->pc = 0x47CDE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47cde4;
        }
    }
    ctx->pc = 0x47CE1Cu;
label_47ce1c:
    // 0x47ce1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47ce1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47ce20:
    // 0x47ce20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ce20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ce24:
    // 0x47ce24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47ce24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ce28:
    // 0x47ce28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47ce28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47ce2c:
    // 0x47ce2c: 0x3e00008  jr          $ra
label_47ce30:
    if (ctx->pc == 0x47CE30u) {
        ctx->pc = 0x47CE30u;
            // 0x47ce30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x47CE34u;
        goto label_47ce34;
    }
    ctx->pc = 0x47CE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CE2Cu;
            // 0x47ce30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CE34u;
label_47ce34:
    // 0x47ce34: 0x0  nop
    ctx->pc = 0x47ce34u;
    // NOP
label_47ce38:
    // 0x47ce38: 0x0  nop
    ctx->pc = 0x47ce38u;
    // NOP
label_47ce3c:
    // 0x47ce3c: 0x0  nop
    ctx->pc = 0x47ce3cu;
    // NOP
label_47ce40:
    // 0x47ce40: 0x80af4dc  j           func_2BD370
label_47ce44:
    if (ctx->pc == 0x47CE44u) {
        ctx->pc = 0x47CE44u;
            // 0x47ce44: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x47CE48u;
        goto label_47ce48;
    }
    ctx->pc = 0x47CE40u;
    ctx->pc = 0x47CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CE40u;
            // 0x47ce44: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD370u;
    {
        auto targetFn = runtime->lookupFunction(0x2BD370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x47CE48u;
label_47ce48:
    // 0x47ce48: 0x0  nop
    ctx->pc = 0x47ce48u;
    // NOP
label_47ce4c:
    // 0x47ce4c: 0x0  nop
    ctx->pc = 0x47ce4cu;
    // NOP
label_47ce50:
    // 0x47ce50: 0x811ed3c  j           func_47B4F0
label_47ce54:
    if (ctx->pc == 0x47CE54u) {
        ctx->pc = 0x47CE54u;
            // 0x47ce54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x47CE58u;
        goto label_47ce58;
    }
    ctx->pc = 0x47CE50u;
    ctx->pc = 0x47CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CE50u;
            // 0x47ce54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47B4F0u;
    {
        auto targetFn = runtime->lookupFunction(0x47B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x47CE58u;
label_47ce58:
    // 0x47ce58: 0x0  nop
    ctx->pc = 0x47ce58u;
    // NOP
label_47ce5c:
    // 0x47ce5c: 0x0  nop
    ctx->pc = 0x47ce5cu;
    // NOP
}
