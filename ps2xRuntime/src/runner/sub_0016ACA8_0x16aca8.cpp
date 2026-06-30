#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016ACA8
// Address: 0x16aca8 - 0x16adb0
void sub_0016ACA8_0x16aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ACA8_0x16aca8");
#endif

    switch (ctx->pc) {
        case 0x16acc8u: goto label_16acc8;
        case 0x16acecu: goto label_16acec;
        case 0x16acf4u: goto label_16acf4;
        case 0x16ad4cu: goto label_16ad4c;
        case 0x16ad54u: goto label_16ad54;
        case 0x16ad60u: goto label_16ad60;
        case 0x16ad8cu: goto label_16ad8c;
        case 0x16ad94u: goto label_16ad94;
        case 0x16ad9cu: goto label_16ad9c;
        default: break;
    }

    ctx->pc = 0x16aca8u;

    // 0x16aca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16acac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16acb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16acb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acb4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16ACB4u;
    {
        const bool branch_taken_0x16acb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ACB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACB4u;
            // 0x16acb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acb4) {
            ctx->pc = 0x16ACD0u;
            goto label_16acd0;
        }
    }
    ctx->pc = 0x16ACBCu;
    // 0x16acbc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16acc0: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16ACC0u;
    SET_GPR_U32(ctx, 31, 0x16ACC8u);
    ctx->pc = 0x16ACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACC0u;
            // 0x16acc4: 0x248439f8  addiu       $a0, $a0, 0x39F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC8u; }
        if (ctx->pc != 0x16ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC8u; }
        if (ctx->pc != 0x16ACC8u) { return; }
    }
    ctx->pc = 0x16ACC8u;
label_16acc8:
    // 0x16acc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16ACC8u;
    {
        const bool branch_taken_0x16acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACC8u;
            // 0x16accc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acc8) {
            ctx->pc = 0x16AD28u;
            goto label_16ad28;
        }
    }
    ctx->pc = 0x16ACD0u;
label_16acd0:
    // 0x16acd0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x16acd4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16acd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16acdc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16ACDCu;
    {
        const bool branch_taken_0x16acdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16acdc) {
            ctx->pc = 0x16ACE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACDCu;
            // 0x16ace0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AD28u;
            goto label_16ad28;
        }
    }
    ctx->pc = 0x16ACE4u;
    // 0x16ace4: 0xc05ab86  jal         func_16AE18
    ctx->pc = 0x16ACE4u;
    SET_GPR_U32(ctx, 31, 0x16ACECu);
    ctx->pc = 0x16AE18u;
    if (runtime->hasFunction(0x16AE18u)) {
        auto targetFn = runtime->lookupFunction(0x16AE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACECu; }
        if (ctx->pc != 0x16ACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AE18_0x16ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACECu; }
        if (ctx->pc != 0x16ACECu) { return; }
    }
    ctx->pc = 0x16ACECu;
label_16acec:
    // 0x16acec: 0xc05c6c2  jal         func_171B08
    ctx->pc = 0x16ACECu;
    SET_GPR_U32(ctx, 31, 0x16ACF4u);
    ctx->pc = 0x16ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACECu;
            // 0x16acf0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B08u;
    if (runtime->hasFunction(0x171B08u)) {
        auto targetFn = runtime->lookupFunction(0x171B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACF4u; }
        if (ctx->pc != 0x16ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B08_0x171b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACF4u; }
        if (ctx->pc != 0x16ACF4u) { return; }
    }
    ctx->pc = 0x16ACF4u;
label_16acf4:
    // 0x16acf4: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x16acf8: 0x644307ff  daddiu      $v1, $v0, 0x7FF
    ctx->pc = 0x16acf8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2047);
    // 0x16acfc: 0x64420ffe  daddiu      $v0, $v0, 0xFFE
    ctx->pc = 0x16acfcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4094);
    // 0x16ad00: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x16ad00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16ad04: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x16ad04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x16ad08: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x16ad08u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x16ad0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ad10: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x16ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x16ad14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16ad14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16ad18: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x16ad18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ad1c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16AD1Cu;
    {
        const bool branch_taken_0x16ad1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD1Cu;
            // 0x16ad20: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad1c) {
            ctx->pc = 0x16AD28u;
            goto label_16ad28;
        }
    }
    ctx->pc = 0x16AD24u;
    // 0x16ad24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ad24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16ad28:
    // 0x16ad28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ad28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ad30: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD30u;
            // 0x16ad34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AD38u;
    // 0x16ad38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ad3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ad40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ad44: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AD44u;
    SET_GPR_U32(ctx, 31, 0x16AD4Cu);
    ctx->pc = 0x16AD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD44u;
            // 0x16ad48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD4Cu; }
        if (ctx->pc != 0x16AD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD4Cu; }
        if (ctx->pc != 0x16AD4Cu) { return; }
    }
    ctx->pc = 0x16AD4Cu;
label_16ad4c:
    // 0x16ad4c: 0xc05ab6c  jal         func_16ADB0
    ctx->pc = 0x16AD4Cu;
    SET_GPR_U32(ctx, 31, 0x16AD54u);
    ctx->pc = 0x16AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD4Cu;
            // 0x16ad50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ADB0u;
    if (runtime->hasFunction(0x16ADB0u)) {
        auto targetFn = runtime->lookupFunction(0x16ADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD54u; }
        if (ctx->pc != 0x16AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ADB0_0x16adb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD54u; }
        if (ctx->pc != 0x16AD54u) { return; }
    }
    ctx->pc = 0x16AD54u;
label_16ad54:
    // 0x16ad54: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x16ad54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16ad58: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AD58u;
    SET_GPR_U32(ctx, 31, 0x16AD60u);
    ctx->pc = 0x16AD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD58u;
            // 0x16ad5c: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD60u; }
        if (ctx->pc != 0x16AD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD60u; }
        if (ctx->pc != 0x16AD60u) { return; }
    }
    ctx->pc = 0x16AD60u;
label_16ad60:
    // 0x16ad60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ad60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ad64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ad64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ad68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad6c: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD6Cu;
            // 0x16ad70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AD74u;
    // 0x16ad74: 0x0  nop
    ctx->pc = 0x16ad74u;
    // NOP
    // 0x16ad78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ad7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ad80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ad84: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AD84u;
    SET_GPR_U32(ctx, 31, 0x16AD8Cu);
    ctx->pc = 0x16AD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD84u;
            // 0x16ad88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD8Cu; }
        if (ctx->pc != 0x16AD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD8Cu; }
        if (ctx->pc != 0x16AD8Cu) { return; }
    }
    ctx->pc = 0x16AD8Cu;
label_16ad8c:
    // 0x16ad8c: 0xc05ab6c  jal         func_16ADB0
    ctx->pc = 0x16AD8Cu;
    SET_GPR_U32(ctx, 31, 0x16AD94u);
    ctx->pc = 0x16AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD8Cu;
            // 0x16ad90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ADB0u;
    if (runtime->hasFunction(0x16ADB0u)) {
        auto targetFn = runtime->lookupFunction(0x16ADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD94u; }
        if (ctx->pc != 0x16AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ADB0_0x16adb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD94u; }
        if (ctx->pc != 0x16AD94u) { return; }
    }
    ctx->pc = 0x16AD94u;
label_16ad94:
    // 0x16ad94: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AD94u;
    SET_GPR_U32(ctx, 31, 0x16AD9Cu);
    ctx->pc = 0x16AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD94u;
            // 0x16ad98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD9Cu; }
        if (ctx->pc != 0x16AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD9Cu; }
        if (ctx->pc != 0x16AD9Cu) { return; }
    }
    ctx->pc = 0x16AD9Cu;
label_16ad9c:
    // 0x16ad9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ada0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ada0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ada4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ada4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x16ADA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADA8u;
            // 0x16adac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16ADB0u;
}
