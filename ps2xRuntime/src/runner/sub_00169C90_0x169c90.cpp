#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169C90
// Address: 0x169c90 - 0x169d48
void sub_00169C90_0x169c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169C90_0x169c90");
#endif

    switch (ctx->pc) {
        case 0x169cc8u: goto label_169cc8;
        case 0x169cf0u: goto label_169cf0;
        case 0x169d10u: goto label_169d10;
        case 0x169d18u: goto label_169d18;
        case 0x169d2cu: goto label_169d2c;
        default: break;
    }

    ctx->pc = 0x169c90u;

    // 0x169c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169c94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x169c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169c98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x169c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ca4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x169ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cb0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x169cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cb4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x169cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x169cb8: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x169cbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169cc0: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x169CC0u;
    SET_GPR_U32(ctx, 31, 0x169CC8u);
    ctx->pc = 0x169CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CC0u;
            // 0x169cc4: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CC8u; }
        if (ctx->pc != 0x169CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CC8u; }
        if (ctx->pc != 0x169CC8u) { return; }
    }
    ctx->pc = 0x169CC8u;
label_169cc8:
    // 0x169cc8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169CC8u;
    {
        const bool branch_taken_0x169cc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169CC8u;
            // 0x169ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cc8) {
            ctx->pc = 0x169CD8u;
            goto label_169cd8;
        }
    }
    ctx->pc = 0x169CD0u;
    // 0x169cd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x169CD0u;
    {
        const bool branch_taken_0x169cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169CD0u;
            // 0x169cd4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cd0) {
            ctx->pc = 0x169D30u;
            goto label_169d30;
        }
    }
    ctx->pc = 0x169CD8u;
label_169cd8:
    // 0x169cd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169cdc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x169cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169ce0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x169ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x169ce4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x169ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x169ce8: 0xc05acda  jal         func_16B368
    ctx->pc = 0x169CE8u;
    SET_GPR_U32(ctx, 31, 0x169CF0u);
    ctx->pc = 0x169CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169CE8u;
            // 0x169cec: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B368u;
    if (runtime->hasFunction(0x16B368u)) {
        auto targetFn = runtime->lookupFunction(0x16B368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CF0u; }
        if (ctx->pc != 0x169CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B368_0x16b368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169CF0u; }
        if (ctx->pc != 0x169CF0u) { return; }
    }
    ctx->pc = 0x169CF0u;
label_169cf0:
    // 0x169cf0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169cf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x169cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cfc: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x169d00: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x169d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x169d04: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169d08: 0xc05c26c  jal         func_1709B0
    ctx->pc = 0x169D08u;
    SET_GPR_U32(ctx, 31, 0x169D10u);
    ctx->pc = 0x169D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D08u;
            // 0x169d0c: 0x8fa8000c  lw          $t0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1709B0u;
    if (runtime->hasFunction(0x1709B0u)) {
        auto targetFn = runtime->lookupFunction(0x1709B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D10u; }
        if (ctx->pc != 0x169D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001709B0_0x1709b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D10u; }
        if (ctx->pc != 0x169D10u) { return; }
    }
    ctx->pc = 0x169D10u;
label_169d10:
    // 0x169d10: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x169D10u;
    SET_GPR_U32(ctx, 31, 0x169D18u);
    ctx->pc = 0x169D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D10u;
            // 0x169d14: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D18u; }
        if (ctx->pc != 0x169D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D18u; }
        if (ctx->pc != 0x169D18u) { return; }
    }
    ctx->pc = 0x169D18u;
label_169d18:
    // 0x169d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x169d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169d1c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x169D1Cu;
    {
        const bool branch_taken_0x169d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x169d1c) {
            ctx->pc = 0x169D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169D1Cu;
            // 0x169d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169D30u;
            goto label_169d30;
        }
    }
    ctx->pc = 0x169D24u;
    // 0x169d24: 0xc05c2b2  jal         func_170AC8
    ctx->pc = 0x169D24u;
    SET_GPR_U32(ctx, 31, 0x169D2Cu);
    ctx->pc = 0x169D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D24u;
            // 0x169d28: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D2Cu; }
        if (ctx->pc != 0x169D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AC8_0x170ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D2Cu; }
        if (ctx->pc != 0x169D2Cu) { return; }
    }
    ctx->pc = 0x169D2Cu;
label_169d2c:
    // 0x169d2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169d30:
    // 0x169d30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x169d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x169D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D3Cu;
            // 0x169d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169D44u;
    // 0x169d44: 0x0  nop
    ctx->pc = 0x169d44u;
    // NOP
}
