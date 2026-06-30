#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117D50
// Address: 0x117d50 - 0x117de8
void sub_00117D50_0x117d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D50_0x117d50");
#endif

    switch (ctx->pc) {
        case 0x117db0u: goto label_117db0;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dccu: goto label_117dcc;
        default: break;
    }

    ctx->pc = 0x117d50u;

label_117d50:
    // 0x117d50: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117d54: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D54u;
    {
        const bool branch_taken_0x117d54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x117D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D54u;
            // 0x117d58: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d54) {
            ctx->pc = 0x117D6Cu;
            goto label_117d6c;
        }
    }
    ctx->pc = 0x117D5Cu;
    // 0x117d5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x117d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x117d60: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x117d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x117d64: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117D64u;
    {
        const bool branch_taken_0x117d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117d64) {
            ctx->pc = 0x117D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117D64u;
            // 0x117d68: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117D74u;
            goto label_117d74;
        }
    }
    ctx->pc = 0x117D6Cu;
label_117d6c:
    // 0x117d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x117D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D6Cu;
            // 0x117d70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117D74u;
label_117d74:
    // 0x117d74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117d78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D78u;
    {
        const bool branch_taken_0x117d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d78) {
            ctx->pc = 0x117D90u;
            goto label_117d90;
        }
    }
    ctx->pc = 0x117D80u;
    // 0x117d80: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x117d80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x117d84: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x117d84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x117d88: 0x3e00008  jr          $ra
    ctx->pc = 0x117D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D88u;
            // 0x117d8c: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117D90u;
label_117d90:
    // 0x117d90: 0x3e00008  jr          $ra
    ctx->pc = 0x117D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D90u;
            // 0x117d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117D98u;
    // 0x117d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117da0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117da8: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117DA8u;
    SET_GPR_U32(ctx, 31, 0x117DB0u);
    ctx->pc = 0x117DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117DA8u;
            // 0x117dac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DB0u; }
        if (ctx->pc != 0x117DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DB0u; }
        if (ctx->pc != 0x117DB0u) { return; }
    }
    ctx->pc = 0x117DB0u;
label_117db0:
    // 0x117db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117db4: 0xc045f54  jal         func_117D50
    ctx->pc = 0x117DB4u;
    SET_GPR_U32(ctx, 31, 0x117DBCu);
    ctx->pc = 0x117DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117DB4u;
            // 0x117db8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D50u;
    goto label_117d50;
    ctx->pc = 0x117DBCu;
label_117dbc:
    // 0x117dbc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117DBCu;
    {
        const bool branch_taken_0x117dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DBCu;
            // 0x117dc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dbc) {
            ctx->pc = 0x117DCCu;
            goto label_117dcc;
        }
    }
    ctx->pc = 0x117DC4u;
    // 0x117dc4: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x117DC4u;
    SET_GPR_U32(ctx, 31, 0x117DCCu);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DCCu; }
        if (ctx->pc != 0x117DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117DCCu; }
        if (ctx->pc != 0x117DCCu) { return; }
    }
    ctx->pc = 0x117DCCu;
label_117dcc:
    // 0x117dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x117DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117DDCu;
            // 0x117de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117DE4u;
    // 0x117de4: 0x0  nop
    ctx->pc = 0x117de4u;
    // NOP
}
