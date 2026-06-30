#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DAC0
// Address: 0x29dac0 - 0x29db70
void sub_0029DAC0_0x29dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DAC0_0x29dac0");
#endif

    switch (ctx->pc) {
        case 0x29dac0u: goto label_29dac0;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dac8u: goto label_29dac8;
        case 0x29daccu: goto label_29dacc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29dad4u: goto label_29dad4;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dadcu: goto label_29dadc;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae4u: goto label_29dae4;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daecu: goto label_29daec;
        case 0x29daf0u: goto label_29daf0;
        case 0x29daf4u: goto label_29daf4;
        case 0x29daf8u: goto label_29daf8;
        case 0x29dafcu: goto label_29dafc;
        case 0x29db00u: goto label_29db00;
        case 0x29db04u: goto label_29db04;
        case 0x29db08u: goto label_29db08;
        case 0x29db0cu: goto label_29db0c;
        case 0x29db10u: goto label_29db10;
        case 0x29db14u: goto label_29db14;
        case 0x29db18u: goto label_29db18;
        case 0x29db1cu: goto label_29db1c;
        case 0x29db20u: goto label_29db20;
        case 0x29db24u: goto label_29db24;
        case 0x29db28u: goto label_29db28;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db30u: goto label_29db30;
        case 0x29db34u: goto label_29db34;
        case 0x29db38u: goto label_29db38;
        case 0x29db3cu: goto label_29db3c;
        case 0x29db40u: goto label_29db40;
        case 0x29db44u: goto label_29db44;
        case 0x29db48u: goto label_29db48;
        case 0x29db4cu: goto label_29db4c;
        case 0x29db50u: goto label_29db50;
        case 0x29db54u: goto label_29db54;
        case 0x29db58u: goto label_29db58;
        case 0x29db5cu: goto label_29db5c;
        case 0x29db60u: goto label_29db60;
        case 0x29db64u: goto label_29db64;
        case 0x29db68u: goto label_29db68;
        case 0x29db6cu: goto label_29db6c;
        default: break;
    }

    ctx->pc = 0x29dac0u;

label_29dac0:
    // 0x29dac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29dac4:
    // 0x29dac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29dac8:
    // 0x29dac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29dacc:
    // 0x29dacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29daccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29dad0:
    // 0x29dad0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_29dad4:
    if (ctx->pc == 0x29DAD4u) {
        ctx->pc = 0x29DAD4u;
            // 0x29dad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DAD8u;
        goto label_29dad8;
    }
    ctx->pc = 0x29DAD0u;
    {
        const bool branch_taken_0x29dad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dad0) {
            ctx->pc = 0x29DAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAD0u;
            // 0x29dad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DB04u;
            goto label_29db04;
        }
    }
    ctx->pc = 0x29DAD8u;
label_29dad8:
    // 0x29dad8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29dadc:
    // 0x29dadc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29dae0:
    // 0x29dae0: 0x2463f6f0  addiu       $v1, $v1, -0x910
    ctx->pc = 0x29dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964976));
label_29dae4:
    // 0x29dae4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29dae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29dae8:
    // 0x29dae8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_29daec:
    if (ctx->pc == 0x29DAECu) {
        ctx->pc = 0x29DAECu;
            // 0x29daec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x29DAF0u;
        goto label_29daf0;
    }
    ctx->pc = 0x29DAE8u;
    {
        const bool branch_taken_0x29dae8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DAE8u;
            // 0x29daec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dae8) {
            ctx->pc = 0x29DB00u;
            goto label_29db00;
        }
    }
    ctx->pc = 0x29DAF0u;
label_29daf0:
    // 0x29daf0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_29daf4:
    // 0x29daf4: 0x8c42da00  lw          $v0, -0x2600($v0)
    ctx->pc = 0x29daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_29daf8:
    // 0x29daf8: 0x40f809  jalr        $v0
label_29dafc:
    if (ctx->pc == 0x29DAFCu) {
        ctx->pc = 0x29DB00u;
        goto label_29db00;
    }
    ctx->pc = 0x29DAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DB00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29DB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29DB00u; }
            if (ctx->pc != 0x29DB00u) { return; }
        }
        }
    }
    ctx->pc = 0x29DB00u;
label_29db00:
    // 0x29db00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29db00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29db04:
    // 0x29db04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29db04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29db08:
    // 0x29db08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29db08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29db0c:
    // 0x29db0c: 0x3e00008  jr          $ra
label_29db10:
    if (ctx->pc == 0x29DB10u) {
        ctx->pc = 0x29DB10u;
            // 0x29db10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29DB14u;
        goto label_29db14;
    }
    ctx->pc = 0x29DB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB0Cu;
            // 0x29db10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DB14u;
label_29db14:
    // 0x29db14: 0x0  nop
    ctx->pc = 0x29db14u;
    // NOP
label_29db18:
    // 0x29db18: 0x0  nop
    ctx->pc = 0x29db18u;
    // NOP
label_29db1c:
    // 0x29db1c: 0x0  nop
    ctx->pc = 0x29db1cu;
    // NOP
label_29db20:
    // 0x29db20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29db24:
    // 0x29db24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29db24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29db28:
    // 0x29db28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29db2c:
    // 0x29db2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29db30:
    // 0x29db30: 0xc04a1c2  jal         func_128708
label_29db34:
    if (ctx->pc == 0x29DB34u) {
        ctx->pc = 0x29DB34u;
            // 0x29db34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DB38u;
        goto label_29db38;
    }
    ctx->pc = 0x29DB30u;
    SET_GPR_U32(ctx, 31, 0x29DB38u);
    ctx->pc = 0x29DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB30u;
            // 0x29db34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128708u;
    if (runtime->hasFunction(0x128708u)) {
        auto targetFn = runtime->lookupFunction(0x128708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB38u; }
        if (ctx->pc != 0x29DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128708_0x128708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB38u; }
        if (ctx->pc != 0x29DB38u) { return; }
    }
    ctx->pc = 0x29DB38u;
label_29db38:
    // 0x29db38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29db3c:
    // 0x29db3c: 0x3e00008  jr          $ra
label_29db40:
    if (ctx->pc == 0x29DB40u) {
        ctx->pc = 0x29DB40u;
            // 0x29db40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29DB44u;
        goto label_29db44;
    }
    ctx->pc = 0x29DB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB3Cu;
            // 0x29db40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DB44u;
label_29db44:
    // 0x29db44: 0x0  nop
    ctx->pc = 0x29db44u;
    // NOP
label_29db48:
    // 0x29db48: 0x0  nop
    ctx->pc = 0x29db48u;
    // NOP
label_29db4c:
    // 0x29db4c: 0x0  nop
    ctx->pc = 0x29db4cu;
    // NOP
label_29db50:
    // 0x29db50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29db54:
    // 0x29db54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29db58:
    // 0x29db58: 0xc04a246  jal         func_128918
label_29db5c:
    if (ctx->pc == 0x29DB5Cu) {
        ctx->pc = 0x29DB60u;
        goto label_29db60;
    }
    ctx->pc = 0x29DB58u;
    SET_GPR_U32(ctx, 31, 0x29DB60u);
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB60u; }
        if (ctx->pc != 0x29DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB60u; }
        if (ctx->pc != 0x29DB60u) { return; }
    }
    ctx->pc = 0x29DB60u;
label_29db60:
    // 0x29db60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29db64:
    // 0x29db64: 0x3e00008  jr          $ra
label_29db68:
    if (ctx->pc == 0x29DB68u) {
        ctx->pc = 0x29DB68u;
            // 0x29db68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29DB6Cu;
        goto label_29db6c;
    }
    ctx->pc = 0x29DB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DB64u;
            // 0x29db68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DB6Cu;
label_29db6c:
    // 0x29db6c: 0x0  nop
    ctx->pc = 0x29db6cu;
    // NOP
}
