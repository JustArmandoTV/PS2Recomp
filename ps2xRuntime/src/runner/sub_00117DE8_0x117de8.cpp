#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117DE8
// Address: 0x117de8 - 0x117ea8
void sub_00117DE8_0x117de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117DE8_0x117de8");
#endif

    switch (ctx->pc) {
        case 0x117e30u: goto label_117e30;
        case 0x117e70u: goto label_117e70;
        case 0x117e7cu: goto label_117e7c;
        case 0x117e8cu: goto label_117e8c;
        default: break;
    }

    ctx->pc = 0x117de8u;

label_117de8:
    // 0x117de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117dec: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117decu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117df0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117df8: 0x28980  sll         $s1, $v0, 6
    ctx->pc = 0x117df8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x117dfc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117DFCu;
    {
        const bool branch_taken_0x117dfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DFCu;
            // 0x117e00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dfc) {
            ctx->pc = 0x117E14u;
            goto label_117e14;
        }
    }
    ctx->pc = 0x117E04u;
    // 0x117e04: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117e08: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x117e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x117e0c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117E0Cu;
    {
        const bool branch_taken_0x117e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117e0c) {
            ctx->pc = 0x117E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117E0Cu;
            // 0x117e10: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117E1Cu;
            goto label_117e1c;
        }
    }
    ctx->pc = 0x117E14u;
label_117e14:
    // 0x117e14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117E14u;
    {
        const bool branch_taken_0x117e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E14u;
            // 0x117e18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e14) {
            ctx->pc = 0x117E40u;
            goto label_117e40;
        }
    }
    ctx->pc = 0x117E1Cu;
label_117e1c:
    // 0x117e1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117e20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117E20u;
    {
        const bool branch_taken_0x117e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E20u;
            // 0x117e24: 0xde300018  ld          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e20) {
            ctx->pc = 0x117E3Cu;
            goto label_117e3c;
        }
    }
    ctx->pc = 0x117E28u;
    // 0x117e28: 0xc045dc2  jal         func_117708
    ctx->pc = 0x117E28u;
    SET_GPR_U32(ctx, 31, 0x117E30u);
    ctx->pc = 0x117708u;
    if (runtime->hasFunction(0x117708u)) {
        auto targetFn = runtime->lookupFunction(0x117708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E30u; }
        if (ctx->pc != 0x117E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117708_0x117708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E30u; }
        if (ctx->pc != 0x117E30u) { return; }
    }
    ctx->pc = 0x117E30u;
label_117e30:
    // 0x117e30: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x117e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x117e34: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x117e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x117e38: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_117e3c:
    // 0x117e3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117e40:
    // 0x117e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117e44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x117E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E4Cu;
            // 0x117e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117E54u;
    // 0x117e54: 0x0  nop
    ctx->pc = 0x117e54u;
    // NOP
    // 0x117e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117e60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117e68: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117E68u;
    SET_GPR_U32(ctx, 31, 0x117E70u);
    ctx->pc = 0x117E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117E68u;
            // 0x117e6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E70u; }
        if (ctx->pc != 0x117E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E70u; }
        if (ctx->pc != 0x117E70u) { return; }
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e74: 0xc045f7a  jal         func_117DE8
    ctx->pc = 0x117E74u;
    SET_GPR_U32(ctx, 31, 0x117E7Cu);
    ctx->pc = 0x117E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117E74u;
            // 0x117e78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117DE8u;
    goto label_117de8;
    ctx->pc = 0x117E7Cu;
label_117e7c:
    // 0x117e7c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117E7Cu;
    {
        const bool branch_taken_0x117e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E7Cu;
            // 0x117e80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e7c) {
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E84u;
    // 0x117e84: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117E84u;
    SET_GPR_U32(ctx, 31, 0x117E8Cu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E8Cu; }
        if (ctx->pc != 0x117E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117E8Cu; }
        if (ctx->pc != 0x117E8Cu) { return; }
    }
    ctx->pc = 0x117E8Cu;
label_117e8c:
    // 0x117e8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117e94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x117E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E9Cu;
            // 0x117ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117EA4u;
    // 0x117ea4: 0x0  nop
    ctx->pc = 0x117ea4u;
    // NOP
}
