#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9D48
// Address: 0x1a9d48 - 0x1a9dd0
void sub_001A9D48_0x1a9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9D48_0x1a9d48");
#endif

    switch (ctx->pc) {
        case 0x1a9d84u: goto label_1a9d84;
        case 0x1a9d98u: goto label_1a9d98;
        case 0x1a9dacu: goto label_1a9dac;
        default: break;
    }

    ctx->pc = 0x1a9d48u;

    // 0x1a9d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9d50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a9d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9d5c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9d60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a9d64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a9d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a9d6c: 0x26301fe4  addiu       $s0, $s1, 0x1FE4
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8164));
    // 0x1a9d70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a9d74: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9D74u;
    {
        const bool branch_taken_0x1a9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A9D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D74u;
            // 0x1a9d78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d74) {
            ctx->pc = 0x1A9D84u;
            goto label_1a9d84;
        }
    }
    ctx->pc = 0x1A9D7Cu;
    // 0x1a9d7c: 0xc069956  jal         func_1A6558
    ctx->pc = 0x1A9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A9D84u);
    ctx->pc = 0x1A9D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D7Cu;
            // 0x1a9d80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D84u; }
        if (ctx->pc != 0x1A9D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6558_0x1a6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D84u; }
        if (ctx->pc != 0x1A9D84u) { return; }
    }
    ctx->pc = 0x1A9D84u;
label_1a9d84:
    // 0x1a9d84: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a9d88: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9D88u;
    {
        const bool branch_taken_0x1a9d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A9D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D88u;
            // 0x1a9d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d88) {
            ctx->pc = 0x1A9D98u;
            goto label_1a9d98;
        }
    }
    ctx->pc = 0x1A9D90u;
    // 0x1a9d90: 0xc069956  jal         func_1A6558
    ctx->pc = 0x1A9D90u;
    SET_GPR_U32(ctx, 31, 0x1A9D98u);
    ctx->pc = 0x1A9D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D90u;
            // 0x1a9d94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D98u; }
        if (ctx->pc != 0x1A9D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6558_0x1a6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D98u; }
        if (ctx->pc != 0x1A9D98u) { return; }
    }
    ctx->pc = 0x1A9D98u;
label_1a9d98:
    // 0x1a9d98: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a9d9c: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9D9Cu;
    {
        const bool branch_taken_0x1a9d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D9Cu;
            // 0x1a9da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d9c) {
            ctx->pc = 0x1A9DACu;
            goto label_1a9dac;
        }
    }
    ctx->pc = 0x1A9DA4u;
    // 0x1a9da4: 0xc069956  jal         func_1A6558
    ctx->pc = 0x1A9DA4u;
    SET_GPR_U32(ctx, 31, 0x1A9DACu);
    ctx->pc = 0x1A9DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DA4u;
            // 0x1a9da8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DACu; }
        if (ctx->pc != 0x1A9DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6558_0x1a6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DACu; }
        if (ctx->pc != 0x1A9DACu) { return; }
    }
    ctx->pc = 0x1A9DACu;
label_1a9dac:
    // 0x1a9dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9db4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a9db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9db8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9dc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9dc8: 0x806c6d4  j           func_1B1B50
    ctx->pc = 0x1A9DC8u;
    ctx->pc = 0x1A9DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DC8u;
            // 0x1a9dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B50u;
    if (runtime->hasFunction(0x1B1B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B1B50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B1B50_0x1b1b50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A9DD0u;
}
