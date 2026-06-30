#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169D48
// Address: 0x169d48 - 0x169de0
void sub_00169D48_0x169d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169D48_0x169d48");
#endif

    switch (ctx->pc) {
        case 0x169d80u: goto label_169d80;
        case 0x169da8u: goto label_169da8;
        case 0x169dc8u: goto label_169dc8;
        default: break;
    }

    ctx->pc = 0x169d48u;

    // 0x169d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169d4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x169d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169d50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x169d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169d58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x169d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d68: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x169d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d6c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x169d70: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x169d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169d78: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x169D78u;
    SET_GPR_U32(ctx, 31, 0x169D80u);
    ctx->pc = 0x169D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169D78u;
            // 0x169d7c: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D80u; }
        if (ctx->pc != 0x169D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169D80u; }
        if (ctx->pc != 0x169D80u) { return; }
    }
    ctx->pc = 0x169D80u;
label_169d80:
    // 0x169d80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169D80u;
    {
        const bool branch_taken_0x169d80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D80u;
            // 0x169d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d80) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x169D88u;
    // 0x169d88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x169D88u;
    {
        const bool branch_taken_0x169d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D88u;
            // 0x169d8c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d88) {
            ctx->pc = 0x169DCCu;
            goto label_169dcc;
        }
    }
    ctx->pc = 0x169D90u;
label_169d90:
    // 0x169d90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x169d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169d98: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x169d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x169d9c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x169d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x169da0: 0xc05acda  jal         func_16B368
    ctx->pc = 0x169DA0u;
    SET_GPR_U32(ctx, 31, 0x169DA8u);
    ctx->pc = 0x169DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DA0u;
            // 0x169da4: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B368u;
    if (runtime->hasFunction(0x16B368u)) {
        auto targetFn = runtime->lookupFunction(0x16B368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DA8u; }
        if (ctx->pc != 0x169DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B368_0x16b368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DA8u; }
        if (ctx->pc != 0x169DA8u) { return; }
    }
    ctx->pc = 0x169DA8u;
label_169da8:
    // 0x169da8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x169da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169dac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x169dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169db4: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x169db8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x169db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x169dbc: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x169dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x169dc0: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x169DC0u;
    SET_GPR_U32(ctx, 31, 0x169DC8u);
    ctx->pc = 0x169DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169DC0u;
            // 0x169dc4: 0x8fa8000c  lw          $t0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DC8u; }
        if (ctx->pc != 0x169DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169DC8u; }
        if (ctx->pc != 0x169DC8u) { return; }
    }
    ctx->pc = 0x169DC8u;
label_169dc8:
    // 0x169dc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169dcc:
    // 0x169dcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x169dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169dd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x169dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x169DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DD8u;
            // 0x169ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169DE0u;
}
