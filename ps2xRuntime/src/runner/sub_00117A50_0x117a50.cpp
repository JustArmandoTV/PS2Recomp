#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117A50
// Address: 0x117a50 - 0x117b00
void sub_00117A50_0x117a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A50_0x117a50");
#endif

    switch (ctx->pc) {
        case 0x117ab8u: goto label_117ab8;
        case 0x117adcu: goto label_117adc;
        case 0x117ae4u: goto label_117ae4;
        default: break;
    }

    ctx->pc = 0x117a50u;

    // 0x117a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117a54: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117a5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117a60: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x117a60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x117a64: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117A64u;
    {
        const bool branch_taken_0x117a64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A64u;
            // 0x117a68: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a64) {
            ctx->pc = 0x117A7Cu;
            goto label_117a7c;
        }
    }
    ctx->pc = 0x117A6Cu;
    // 0x117a6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x117a70: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x117a74: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117A74u;
    {
        const bool branch_taken_0x117a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117a74) {
            ctx->pc = 0x117A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117A74u;
            // 0x117a78: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117A88u;
            goto label_117a88;
        }
    }
    ctx->pc = 0x117A7Cu;
label_117a7c:
    // 0x117a7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117a80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x117A80u;
    {
        const bool branch_taken_0x117a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A80u;
            // 0x117a84: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a80) {
            ctx->pc = 0x117AE8u;
            goto label_117ae8;
        }
    }
    ctx->pc = 0x117A88u;
label_117a88:
    // 0x117a88: 0x2442fa48  addiu       $v0, $v0, -0x5B8
    ctx->pc = 0x117a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965832));
    // 0x117a8c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x117a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x117a90: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117A90u;
            // 0x117a94: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117AA4u;
            goto label_117aa4;
        }
    }
    ctx->pc = 0x117A98u;
    // 0x117a98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x117a9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x117A9Cu;
    {
        const bool branch_taken_0x117a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A9Cu;
            // 0x117aa0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a9c) {
            ctx->pc = 0x117AE8u;
            goto label_117ae8;
        }
    }
    ctx->pc = 0x117AA4u;
label_117aa4:
    // 0x117aa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117aa8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117AA8u;
    {
        const bool branch_taken_0x117aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AA8u;
            // 0x117aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117aa8) {
            ctx->pc = 0x117AE8u;
            goto label_117ae8;
        }
    }
    ctx->pc = 0x117AB0u;
    // 0x117ab0: 0xc045dc2  jal         func_117708
    ctx->pc = 0x117AB0u;
    SET_GPR_U32(ctx, 31, 0x117AB8u);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AB8u; }
        if (ctx->pc != 0x117AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AB8u; }
        if (ctx->pc != 0x117AB8u) { return; }
    }
    ctx->pc = 0x117AB8u;
label_117ab8:
    // 0x117ab8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117abc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x117abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117ac0: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x117ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x117ac4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x117ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x117ac8: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x117ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x117acc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117ACCu;
    {
        const bool branch_taken_0x117acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117ACCu;
            // 0x117ad0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117acc) {
            ctx->pc = 0x117AE4u;
            goto label_117ae4;
        }
    }
    ctx->pc = 0x117AD4u;
    // 0x117ad4: 0xc045ce4  jal         func_117390
    ctx->pc = 0x117AD4u;
    SET_GPR_U32(ctx, 31, 0x117ADCu);
    ctx->pc = 0x117AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AD4u;
            // 0x117ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117390u;
    if (runtime->hasFunction(0x117390u)) {
        auto targetFn = runtime->lookupFunction(0x117390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ADCu; }
        if (ctx->pc != 0x117ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117390_0x117390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ADCu; }
        if (ctx->pc != 0x117ADCu) { return; }
    }
    ctx->pc = 0x117ADCu;
label_117adc:
    // 0x117adc: 0xc045c80  jal         func_117200
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x117AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117ADCu;
            // 0x117ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE4u; }
        if (ctx->pc != 0x117AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117200_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE4u; }
        if (ctx->pc != 0x117AE4u) { return; }
    }
    ctx->pc = 0x117AE4u;
label_117ae4:
    // 0x117ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117ae8:
    // 0x117ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117aec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117af4: 0x3e00008  jr          $ra
    ctx->pc = 0x117AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AF4u;
            // 0x117af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117AFCu;
    // 0x117afc: 0x0  nop
    ctx->pc = 0x117afcu;
    // NOP
}
