#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2CA8
// Address: 0x1c2ca8 - 0x1c3160
void sub_001C2CA8_0x1c2ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2CA8_0x1c2ca8");
#endif

    switch (ctx->pc) {
        case 0x1c2cfcu: goto label_1c2cfc;
        case 0x1c2d04u: goto label_1c2d04;
        case 0x1c2d90u: goto label_1c2d90;
        case 0x1c2e24u: goto label_1c2e24;
        case 0x1c2e48u: goto label_1c2e48;
        case 0x1c2e5cu: goto label_1c2e5c;
        case 0x1c2e9cu: goto label_1c2e9c;
        case 0x1c2eb0u: goto label_1c2eb0;
        case 0x1c2ed0u: goto label_1c2ed0;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2ef4u: goto label_1c2ef4;
        case 0x1c2f14u: goto label_1c2f14;
        case 0x1c2f28u: goto label_1c2f28;
        case 0x1c2f3cu: goto label_1c2f3c;
        case 0x1c2f60u: goto label_1c2f60;
        case 0x1c2f74u: goto label_1c2f74;
        case 0x1c2f94u: goto label_1c2f94;
        case 0x1c2fa8u: goto label_1c2fa8;
        case 0x1c2fc8u: goto label_1c2fc8;
        case 0x1c2ff4u: goto label_1c2ff4;
        case 0x1c3008u: goto label_1c3008;
        case 0x1c3028u: goto label_1c3028;
        case 0x1c3038u: goto label_1c3038;
        case 0x1c3040u: goto label_1c3040;
        case 0x1c3058u: goto label_1c3058;
        case 0x1c3078u: goto label_1c3078;
        case 0x1c308cu: goto label_1c308c;
        case 0x1c30acu: goto label_1c30ac;
        case 0x1c30c8u: goto label_1c30c8;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c3100u: goto label_1c3100;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c3138u: goto label_1c3138;
        default: break;
    }

    ctx->pc = 0x1c2ca8u;

    // 0x1c2ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2cac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c2cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2cb4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2CB4u;
    {
        const bool branch_taken_0x1c2cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CB4u;
            // 0x1c2cb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cb4) {
            ctx->pc = 0x1C2CE8u;
            goto label_1c2ce8;
        }
    }
    ctx->pc = 0x1C2CBCu;
    // 0x1c2cbc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2cc0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2cc8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2ccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2cd0: 0x24c6bba0  addiu       $a2, $a2, -0x4460
    ctx->pc = 0x1c2cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949792));
    // 0x1c2cd4: 0x240503b6  addiu       $a1, $zero, 0x3B6
    ctx->pc = 0x1c2cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
    // 0x1c2cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cdc: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c2cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c2ce0: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C2CE0u;
    ctx->pc = 0x1C2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CE0u;
            // 0x1c2ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C2CE8u;
label_1c2ce8:
    // 0x1c2ce8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1c2ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1c2cec: 0x2610a4d8  addiu       $s0, $s0, -0x5B28
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943960));
    // 0x1c2cf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2cf4: 0xc07177c  jal         func_1C5DF0
    ctx->pc = 0x1C2CF4u;
    SET_GPR_U32(ctx, 31, 0x1C2CFCu);
    ctx->pc = 0x1C2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CF4u;
            // 0x1c2cf8: 0xac430034  sw          $v1, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5DF0u;
    if (runtime->hasFunction(0x1C5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CFCu; }
        if (ctx->pc != 0x1C2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5DF0_0x1c5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CFCu; }
        if (ctx->pc != 0x1C2CFCu) { return; }
    }
    ctx->pc = 0x1C2CFCu;
label_1c2cfc:
    // 0x1c2cfc: 0xc071780  jal         func_1C5E00
    ctx->pc = 0x1C2CFCu;
    SET_GPR_U32(ctx, 31, 0x1C2D04u);
    ctx->pc = 0x1C5E00u;
    if (runtime->hasFunction(0x1C5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D04u; }
        if (ctx->pc != 0x1C2D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E00_0x1c5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D04u; }
        if (ctx->pc != 0x1C2D04u) { return; }
    }
    ctx->pc = 0x1C2D04u;
label_1c2d04:
    // 0x1c2d04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d10: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x1c2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x1c2d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D18u;
            // 0x1c2d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2D20u;
    // 0x1c2d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2d24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c2d28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2d30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2d38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c2d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c2d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c2d40: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D40u;
    {
        const bool branch_taken_0x1c2d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D40u;
            // 0x1c2d44: 0x240503cb  addiu       $a1, $zero, 0x3CB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 971));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d40) {
            ctx->pc = 0x1C2D58u;
            goto label_1c2d58;
        }
    }
    ctx->pc = 0x1C2D48u;
    // 0x1c2d48: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2D48u;
    {
        const bool branch_taken_0x1c2d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d48) {
            ctx->pc = 0x1C2D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D48u;
            // 0x1c2d4c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D5Cu;
            goto label_1c2d5c;
        }
    }
    ctx->pc = 0x1C2D50u;
    // 0x1c2d50: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2D50u;
    {
        const bool branch_taken_0x1c2d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d50) {
            ctx->pc = 0x1C2D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D50u;
            // 0x1c2d54: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D88u;
            goto label_1c2d88;
        }
    }
    ctx->pc = 0x1C2D58u;
label_1c2d58:
    // 0x1c2d58: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c2d5c:
    // 0x1c2d5c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d64: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2d6c: 0x24c6bbb8  addiu       $a2, $a2, -0x4448
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949816));
    // 0x1c2d70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c2d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2d7c: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c2d80: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C2D80u;
    ctx->pc = 0x1C2D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D80u;
            // 0x1c2d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C2D88u;
label_1c2d88:
    // 0x1c2d88: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C2D88u;
    SET_GPR_U32(ctx, 31, 0x1C2D90u);
    ctx->pc = 0x1C2D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D88u;
            // 0x1c2d8c: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D90u; }
        if (ctx->pc != 0x1C2D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D90u; }
        if (ctx->pc != 0x1C2D90u) { return; }
    }
    ctx->pc = 0x1C2D90u;
label_1c2d90:
    // 0x1c2d90: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2d94: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2d98: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2d9c: 0x24c6bbb8  addiu       $a2, $a2, -0x4448
    ctx->pc = 0x1c2d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949816));
    // 0x1c2da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2da8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2DA8u;
    {
        const bool branch_taken_0x1c2da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DA8u;
            // 0x1c2dac: 0x2408ff99  addiu       $t0, $zero, -0x67 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2da8) {
            ctx->pc = 0x1C2DD0u;
            goto label_1c2dd0;
        }
    }
    ctx->pc = 0x1C2DB0u;
    // 0x1c2db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2db4: 0x240503cf  addiu       $a1, $zero, 0x3CF
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 975));
    // 0x1c2db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2dbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2dc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c2dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2dc4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C2DC4u;
    ctx->pc = 0x1C2DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DC4u;
            // 0x1c2dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C2DCCu;
    // 0x1c2dcc: 0x0  nop
    ctx->pc = 0x1c2dccu;
    // NOP
label_1c2dd0:
    // 0x1c2dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2dd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2dd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c2dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ddc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2de4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c2de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c2de8: 0x8070b7c  j           func_1C2DF0
    ctx->pc = 0x1C2DE8u;
    ctx->pc = 0x1C2DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DE8u;
            // 0x1c2dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2DF0u;
    goto label_1c2df0;
    ctx->pc = 0x1C2DF0u;
label_1c2df0:
    // 0x1c2df0: 0x27bdf010  addiu       $sp, $sp, -0xFF0
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963216));
    // 0x1c2df4: 0xffb30fc8  sd          $s3, 0xFC8($sp)
    ctx->pc = 0x1c2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4040), GPR_U64(ctx, 19));
    // 0x1c2df8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c2df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e00: 0xffb00fb0  sd          $s0, 0xFB0($sp)
    ctx->pc = 0x1c2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4016), GPR_U64(ctx, 16));
    // 0x1c2e04: 0xffb50fd8  sd          $s5, 0xFD8($sp)
    ctx->pc = 0x1c2e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4056), GPR_U64(ctx, 21));
    // 0x1c2e08: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c2e08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e0c: 0xffb10fb8  sd          $s1, 0xFB8($sp)
    ctx->pc = 0x1c2e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4024), GPR_U64(ctx, 17));
    // 0x1c2e10: 0xffb20fc0  sd          $s2, 0xFC0($sp)
    ctx->pc = 0x1c2e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4032), GPR_U64(ctx, 18));
    // 0x1c2e14: 0xffb40fd0  sd          $s4, 0xFD0($sp)
    ctx->pc = 0x1c2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4048), GPR_U64(ctx, 20));
    // 0x1c2e18: 0xffbf0fe0  sd          $ra, 0xFE0($sp)
    ctx->pc = 0x1c2e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4064), GPR_U64(ctx, 31));
    // 0x1c2e1c: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E24u);
    ctx->pc = 0x1C2E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E1Cu;
            // 0x1c2e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E24u; }
        if (ctx->pc != 0x1C2E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E24u; }
        if (ctx->pc != 0x1C2E24u) { return; }
    }
    ctx->pc = 0x1C2E24u;
label_1c2e24:
    // 0x1c2e24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2E24u;
    {
        const bool branch_taken_0x1c2e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E24u;
            // 0x1c2e28: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e24) {
            ctx->pc = 0x1C2E50u;
            goto label_1c2e50;
        }
    }
    ctx->pc = 0x1C2E2Cu;
    // 0x1c2e2c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2e30: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2e34: 0x24c6bbc8  addiu       $a2, $a2, -0x4438
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949832));
    // 0x1c2e38: 0x240503e6  addiu       $a1, $zero, 0x3E6
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x1c2e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e40: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C2E40u;
    SET_GPR_U32(ctx, 31, 0x1C2E48u);
    ctx->pc = 0x1C2E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E40u;
            // 0x1c2e44: 0x2408ff98  addiu       $t0, $zero, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E48u; }
        if (ctx->pc != 0x1C2E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E48u; }
        if (ctx->pc != 0x1C2E48u) { return; }
    }
    ctx->pc = 0x1C2E48u;
label_1c2e48:
    // 0x1c2e48: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1C2E48u;
    {
        const bool branch_taken_0x1c2e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E48u;
            // 0x1c2e4c: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e48) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C2E50u;
label_1c2e50:
    // 0x1c2e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e54: 0xc0708e4  jal         func_1C2390
    ctx->pc = 0x1C2E54u;
    SET_GPR_U32(ctx, 31, 0x1C2E5Cu);
    ctx->pc = 0x1C2E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E54u;
            // 0x1c2e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2390u;
    if (runtime->hasFunction(0x1C2390u)) {
        auto targetFn = runtime->lookupFunction(0x1C2390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E5Cu; }
        if (ctx->pc != 0x1C2E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2390_0x1c2390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E5Cu; }
        if (ctx->pc != 0x1C2E5Cu) { return; }
    }
    ctx->pc = 0x1C2E5Cu;
label_1c2e5c:
    // 0x1c2e5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e60: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2E60u;
    {
        const bool branch_taken_0x1c2e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E60u;
            // 0x1c2e64: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e60) {
            ctx->pc = 0x1C2E80u;
            goto label_1c2e80;
        }
    }
    ctx->pc = 0x1C2E68u;
    // 0x1c2e68: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2e6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2e70: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2e74: 0x24c6bbd8  addiu       $a2, $a2, -0x4428
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949848));
    // 0x1c2e78: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1C2E78u;
    {
        const bool branch_taken_0x1c2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E78u;
            // 0x1c2e7c: 0x240503ed  addiu       $a1, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e78) {
            ctx->pc = 0x1C306Cu;
            goto label_1c306c;
        }
    }
    ctx->pc = 0x1C2E80u;
label_1c2e80:
    // 0x1c2e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e84: 0x8c43a4d8  lw          $v1, -0x5B28($v0)
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c2e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2e8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e94: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1C2E94u;
    SET_GPR_U32(ctx, 31, 0x1C2E9Cu);
    ctx->pc = 0x1C2E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E94u;
            // 0x1c2e98: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (runtime->hasFunction(0x1C0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E9Cu; }
        if (ctx->pc != 0x1C2E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0B40_0x1c0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E9Cu; }
        if (ctx->pc != 0x1C2E9Cu) { return; }
    }
    ctx->pc = 0x1C2E9Cu;
label_1c2e9c:
    // 0x1c2e9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c2e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea0: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2EA0u;
    {
        const bool branch_taken_0x1c2ea0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EA0u;
            // 0x1c2ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ea0) {
            ctx->pc = 0x1C2ED8u;
            goto label_1c2ed8;
        }
    }
    ctx->pc = 0x1C2EA8u;
    // 0x1c2ea8: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C2EA8u;
    SET_GPR_U32(ctx, 31, 0x1C2EB0u);
    ctx->pc = 0x1C2EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EA8u;
            // 0x1c2eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EB0u; }
        if (ctx->pc != 0x1C2EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EB0u; }
        if (ctx->pc != 0x1C2EB0u) { return; }
    }
    ctx->pc = 0x1C2EB0u;
label_1c2eb0:
    // 0x1c2eb0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2eb4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2eb8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2ebc: 0x24c6bbe8  addiu       $a2, $a2, -0x4418
    ctx->pc = 0x1c2ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949864));
    // 0x1c2ec0: 0x240503f9  addiu       $a1, $zero, 0x3F9
    ctx->pc = 0x1c2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
    // 0x1c2ec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ec8: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C2EC8u;
    SET_GPR_U32(ctx, 31, 0x1C2ED0u);
    ctx->pc = 0x1C2ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EC8u;
            // 0x1c2ecc: 0x2408ff32  addiu       $t0, $zero, -0xCE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967090));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ED0u; }
        if (ctx->pc != 0x1C2ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ED0u; }
        if (ctx->pc != 0x1C2ED0u) { return; }
    }
    ctx->pc = 0x1C2ED0u;
label_1c2ed0:
    // 0x1c2ed0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1C2ED0u;
    {
        const bool branch_taken_0x1c2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ED0u;
            // 0x1c2ed4: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ed0) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C2ED8u;
label_1c2ed8:
    // 0x1c2ed8: 0xc0702f8  jal         func_1C0BE0
    ctx->pc = 0x1C2ED8u;
    SET_GPR_U32(ctx, 31, 0x1C2EE0u);
    ctx->pc = 0x1C2EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ED8u;
            // 0x1c2edc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0BE0u;
    if (runtime->hasFunction(0x1C0BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EE0u; }
        if (ctx->pc != 0x1C2EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0BE0_0x1c0be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EE0u; }
        if (ctx->pc != 0x1C2EE0u) { return; }
    }
    ctx->pc = 0x1C2EE0u;
label_1c2ee0:
    // 0x1c2ee0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ee4: 0x1454000e  bne         $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2EE4u;
    {
        const bool branch_taken_0x1c2ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1c2ee4) {
            ctx->pc = 0x1C2F20u;
            goto label_1c2f20;
        }
    }
    ctx->pc = 0x1C2EECu;
    // 0x1c2eec: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C2EECu;
    SET_GPR_U32(ctx, 31, 0x1C2EF4u);
    ctx->pc = 0x1C2EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EECu;
            // 0x1c2ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EF4u; }
        if (ctx->pc != 0x1C2EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EF4u; }
        if (ctx->pc != 0x1C2EF4u) { return; }
    }
    ctx->pc = 0x1C2EF4u;
label_1c2ef4:
    // 0x1c2ef4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2ef8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2efc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2f00: 0x24c6bbc8  addiu       $a2, $a2, -0x4438
    ctx->pc = 0x1c2f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949832));
    // 0x1c2f04: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x1c2f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1c2f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f0c: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C2F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F14u);
    ctx->pc = 0x1C2F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F0Cu;
            // 0x1c2f10: 0x2408ff38  addiu       $t0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F14u; }
        if (ctx->pc != 0x1C2F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F14u; }
        if (ctx->pc != 0x1C2F14u) { return; }
    }
    ctx->pc = 0x1C2F14u;
label_1c2f14:
    // 0x1c2f14: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1C2F14u;
    {
        const bool branch_taken_0x1c2f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F14u;
            // 0x1c2f18: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f14) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C2F1Cu;
    // 0x1c2f1c: 0x0  nop
    ctx->pc = 0x1c2f1cu;
    // NOP
label_1c2f20:
    // 0x1c2f20: 0xc071716  jal         func_1C5C58
    ctx->pc = 0x1C2F20u;
    SET_GPR_U32(ctx, 31, 0x1C2F28u);
    ctx->pc = 0x1C5C58u;
    if (runtime->hasFunction(0x1C5C58u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F28u; }
        if (ctx->pc != 0x1C2F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5C58_0x1c5c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F28u; }
        if (ctx->pc != 0x1C2F28u) { return; }
    }
    ctx->pc = 0x1C2F28u;
label_1c2f28:
    // 0x1c2f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f2c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2F2Cu;
    {
        const bool branch_taken_0x1c2f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f2c) {
            ctx->pc = 0x1C2F58u;
            goto label_1c2f58;
        }
    }
    ctx->pc = 0x1C2F34u;
    // 0x1c2f34: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C2F34u;
    SET_GPR_U32(ctx, 31, 0x1C2F3Cu);
    ctx->pc = 0x1C2F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F34u;
            // 0x1c2f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F3Cu; }
        if (ctx->pc != 0x1C2F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F3Cu; }
        if (ctx->pc != 0x1C2F3Cu) { return; }
    }
    ctx->pc = 0x1C2F3Cu;
label_1c2f3c:
    // 0x1c2f3c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2f40: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2f44: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2f48: 0x24c6bbf8  addiu       $a2, $a2, -0x4408
    ctx->pc = 0x1c2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949880));
    // 0x1c2f4c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c2f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C2F50u;
    {
        const bool branch_taken_0x1c2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F50u;
            // 0x1c2f54: 0x24050408  addiu       $a1, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f50) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2F58u;
label_1c2f58:
    // 0x1c2f58: 0xc070950  jal         func_1C2540
    ctx->pc = 0x1C2F58u;
    SET_GPR_U32(ctx, 31, 0x1C2F60u);
    ctx->pc = 0x1C2F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F58u;
            // 0x1c2f5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2540u;
    if (runtime->hasFunction(0x1C2540u)) {
        auto targetFn = runtime->lookupFunction(0x1C2540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F60u; }
        if (ctx->pc != 0x1C2F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2540_0x1c2540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F60u; }
        if (ctx->pc != 0x1C2F60u) { return; }
    }
    ctx->pc = 0x1C2F60u;
label_1c2f60:
    // 0x1c2f60: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2F60u;
    {
        const bool branch_taken_0x1c2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F60u;
            // 0x1c2f64: 0x27b30770  addiu       $s3, $sp, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f60) {
            ctx->pc = 0x1C2F80u;
            goto label_1c2f80;
        }
    }
    ctx->pc = 0x1C2F68u;
    // 0x1c2f68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f6c: 0xc0709a4  jal         func_1C2690
    ctx->pc = 0x1C2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F74u);
    ctx->pc = 0x1C2F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F6Cu;
            // 0x1c2f70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2690u;
    if (runtime->hasFunction(0x1C2690u)) {
        auto targetFn = runtime->lookupFunction(0x1C2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F74u; }
        if (ctx->pc != 0x1C2F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2690_0x1c2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F74u; }
        if (ctx->pc != 0x1C2F74u) { return; }
    }
    ctx->pc = 0x1C2F74u;
label_1c2f74:
    // 0x1c2f74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2F74u;
    {
        const bool branch_taken_0x1c2f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F74u;
            // 0x1c2f78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f74) {
            ctx->pc = 0x1C2F98u;
            goto label_1c2f98;
        }
    }
    ctx->pc = 0x1C2F7Cu;
    // 0x1c2f7c: 0x0  nop
    ctx->pc = 0x1c2f7cu;
    // NOP
label_1c2f80:
    // 0x1c2f80: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c2f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c2f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f8c: 0xc070962  jal         func_1C2588
    ctx->pc = 0x1C2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F94u);
    ctx->pc = 0x1C2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F8Cu;
            // 0x1c2f90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2588u;
    if (runtime->hasFunction(0x1C2588u)) {
        auto targetFn = runtime->lookupFunction(0x1C2588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F94u; }
        if (ctx->pc != 0x1C2F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2588_0x1c2588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F94u; }
        if (ctx->pc != 0x1C2F94u) { return; }
    }
    ctx->pc = 0x1C2F94u;
label_1c2f94:
    // 0x1c2f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f98:
    // 0x1c2f98: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2F98u;
    {
        const bool branch_taken_0x1c2f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F98u;
            // 0x1c2f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f98) {
            ctx->pc = 0x1C2FD0u;
            goto label_1c2fd0;
        }
    }
    ctx->pc = 0x1C2FA0u;
    // 0x1c2fa0: 0xc070c58  jal         func_1C3160
    ctx->pc = 0x1C2FA0u;
    SET_GPR_U32(ctx, 31, 0x1C2FA8u);
    ctx->pc = 0x1C2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FA0u;
            // 0x1c2fa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3160u;
    if (runtime->hasFunction(0x1C3160u)) {
        auto targetFn = runtime->lookupFunction(0x1C3160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FA8u; }
        if (ctx->pc != 0x1C2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3160_0x1c3160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FA8u; }
        if (ctx->pc != 0x1C2FA8u) { return; }
    }
    ctx->pc = 0x1C2FA8u;
label_1c2fa8:
    // 0x1c2fa8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c2fac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c2facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c2fb0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c2fb4: 0x24c6bc10  addiu       $a2, $a2, -0x43F0
    ctx->pc = 0x1c2fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949904));
    // 0x1c2fb8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c2fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fbc: 0x2405041c  addiu       $a1, $zero, 0x41C
    ctx->pc = 0x1c2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
label_1c2fc0:
    // 0x1c2fc0: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C2FC0u;
    SET_GPR_U32(ctx, 31, 0x1C2FC8u);
    ctx->pc = 0x1C2FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FC0u;
            // 0x1c2fc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FC8u; }
        if (ctx->pc != 0x1C2FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FC8u; }
        if (ctx->pc != 0x1C2FC8u) { return; }
    }
    ctx->pc = 0x1C2FC8u;
label_1c2fc8:
    // 0x1c2fc8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1C2FC8u;
    {
        const bool branch_taken_0x1c2fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FC8u;
            // 0x1c2fcc: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fc8) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C2FD0u;
label_1c2fd0:
    // 0x1c2fd0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2fd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c2fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1c2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1c2fdc: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x1c2fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c2fe0: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x1c2fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c2fe4: 0xb2220033  sdl         $v0, 0x33($s1)
    ctx->pc = 0x1c2fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2fe8: 0xb622002c  sdr         $v0, 0x2C($s1)
    ctx->pc = 0x1c2fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c2fec: 0xc0709de  jal         func_1C2778
    ctx->pc = 0x1C2FECu;
    SET_GPR_U32(ctx, 31, 0x1C2FF4u);
    ctx->pc = 0x1C2FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FECu;
            // 0x1c2ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2778u;
    if (runtime->hasFunction(0x1C2778u)) {
        auto targetFn = runtime->lookupFunction(0x1C2778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FF4u; }
        if (ctx->pc != 0x1C2FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2778_0x1c2778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FF4u; }
        if (ctx->pc != 0x1C2FF4u) { return; }
    }
    ctx->pc = 0x1C2FF4u;
label_1c2ff4:
    // 0x1c2ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ff8: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C2FF8u;
    {
        const bool branch_taken_0x1c2ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FF8u;
            // 0x1c2ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ff8) {
            ctx->pc = 0x1C3030u;
            goto label_1c3030;
        }
    }
    ctx->pc = 0x1C3000u;
    // 0x1c3000: 0xc070c58  jal         func_1C3160
    ctx->pc = 0x1C3000u;
    SET_GPR_U32(ctx, 31, 0x1C3008u);
    ctx->pc = 0x1C3004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3000u;
            // 0x1c3004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3160u;
    if (runtime->hasFunction(0x1C3160u)) {
        auto targetFn = runtime->lookupFunction(0x1C3160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3008u; }
        if (ctx->pc != 0x1C3008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3160_0x1c3160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3008u; }
        if (ctx->pc != 0x1C3008u) { return; }
    }
    ctx->pc = 0x1C3008u;
label_1c3008:
    // 0x1c3008: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c300c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c300cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3010: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3014: 0x24c6bc20  addiu       $a2, $a2, -0x43E0
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949920));
    // 0x1c3018: 0x2405042f  addiu       $a1, $zero, 0x42F
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1071));
    // 0x1c301c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c301cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3020: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3020u;
    SET_GPR_U32(ctx, 31, 0x1C3028u);
    ctx->pc = 0x1C3024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3020u;
            // 0x1c3024: 0x2408ff31  addiu       $t0, $zero, -0xCF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967089));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3028u; }
        if (ctx->pc != 0x1C3028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3028u; }
        if (ctx->pc != 0x1C3028u) { return; }
    }
    ctx->pc = 0x1C3028u;
label_1c3028:
    // 0x1c3028: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C3028u;
    {
        const bool branch_taken_0x1c3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3028u;
            // 0x1c302c: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3028) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C3030u;
label_1c3030:
    // 0x1c3030: 0xc070c58  jal         func_1C3160
    ctx->pc = 0x1C3030u;
    SET_GPR_U32(ctx, 31, 0x1C3038u);
    ctx->pc = 0x1C3034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3030u;
            // 0x1c3034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3160u;
    if (runtime->hasFunction(0x1C3160u)) {
        auto targetFn = runtime->lookupFunction(0x1C3160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3038u; }
        if (ctx->pc != 0x1C3038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3160_0x1c3160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3038u; }
        if (ctx->pc != 0x1C3038u) { return; }
    }
    ctx->pc = 0x1C3038u;
label_1c3038:
    // 0x1c3038: 0xc0707fe  jal         func_1C1FF8
    ctx->pc = 0x1C3038u;
    SET_GPR_U32(ctx, 31, 0x1C3040u);
    ctx->pc = 0x1C303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3038u;
            // 0x1c303c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FF8u;
    if (runtime->hasFunction(0x1C1FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C1FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3040u; }
        if (ctx->pc != 0x1C3040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1FF8_0x1c1ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3040u; }
        if (ctx->pc != 0x1C3040u) { return; }
    }
    ctx->pc = 0x1C3040u;
label_1c3040:
    // 0x1c3040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3048: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3048u;
    {
        const bool branch_taken_0x1c3048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3048u;
            // 0x1c304c: 0x27b307a0  addiu       $s3, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3048) {
            ctx->pc = 0x1C3080u;
            goto label_1c3080;
        }
    }
    ctx->pc = 0x1C3050u;
    // 0x1c3050: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C3050u;
    SET_GPR_U32(ctx, 31, 0x1C3058u);
    ctx->pc = 0x1C3054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3050u;
            // 0x1c3054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3058u; }
        if (ctx->pc != 0x1C3058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3058u; }
        if (ctx->pc != 0x1C3058u) { return; }
    }
    ctx->pc = 0x1C3058u;
label_1c3058:
    // 0x1c3058: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c305c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3060: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3064: 0x24c6bc28  addiu       $a2, $a2, -0x43D8
    ctx->pc = 0x1c3064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949928));
    // 0x1c3068: 0x2405043c  addiu       $a1, $zero, 0x43C
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1084));
label_1c306c:
    // 0x1c306c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c306cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3070: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3070u;
    SET_GPR_U32(ctx, 31, 0x1C3078u);
    ctx->pc = 0x1C3074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3070u;
            // 0x1c3074: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3078u; }
        if (ctx->pc != 0x1C3078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3078u; }
        if (ctx->pc != 0x1C3078u) { return; }
    }
    ctx->pc = 0x1C3078u;
label_1c3078:
    // 0x1c3078: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C3078u;
    {
        const bool branch_taken_0x1c3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3078u;
            // 0x1c307c: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3078) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C3080u;
label_1c3080:
    // 0x1c3080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3084: 0xc07145c  jal         func_1C5170
    ctx->pc = 0x1C3084u;
    SET_GPR_U32(ctx, 31, 0x1C308Cu);
    ctx->pc = 0x1C3088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3084u;
            // 0x1c3088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5170u;
    if (runtime->hasFunction(0x1C5170u)) {
        auto targetFn = runtime->lookupFunction(0x1C5170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C308Cu; }
        if (ctx->pc != 0x1C308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5170_0x1c5170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C308Cu; }
        if (ctx->pc != 0x1C308Cu) { return; }
    }
    ctx->pc = 0x1C308Cu;
label_1c308c:
    // 0x1c308c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3090: 0x8fa2082c  lw          $v0, 0x82C($sp)
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2092)));
    // 0x1c3094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3098: 0x27a60fa0  addiu       $a2, $sp, 0xFA0
    ctx->pc = 0x1c3098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4000));
    // 0x1c309c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1c309cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1c30a0: 0x8fa30824  lw          $v1, 0x824($sp)
    ctx->pc = 0x1c30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2084)));
    // 0x1c30a4: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1C30A4u;
    SET_GPR_U32(ctx, 31, 0x1C30ACu);
    ctx->pc = 0x1C30A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30A4u;
            // 0x1c30a8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30ACu; }
        if (ctx->pc != 0x1C30ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30ACu; }
        if (ctx->pc != 0x1C30ACu) { return; }
    }
    ctx->pc = 0x1C30ACu;
label_1c30ac:
    // 0x1c30ac: 0x8fa30fa0  lw          $v1, 0xFA0($sp)
    ctx->pc = 0x1c30acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4000)));
    // 0x1c30b0: 0x10720021  beq         $v1, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C30B0u;
    {
        const bool branch_taken_0x1c30b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C30B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30B0u;
            // 0x1c30b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30b0) {
            ctx->pc = 0x1C3138u;
            goto label_1c3138;
        }
    }
    ctx->pc = 0x1C30B8u;
    // 0x1c30b8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c30bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c30bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30c0: 0xc070a06  jal         func_1C2818
    ctx->pc = 0x1C30C0u;
    SET_GPR_U32(ctx, 31, 0x1C30C8u);
    ctx->pc = 0x1C30C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30C0u;
            // 0x1c30c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2818u;
    if (runtime->hasFunction(0x1C2818u)) {
        auto targetFn = runtime->lookupFunction(0x1C2818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30C8u; }
        if (ctx->pc != 0x1C30C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2818_0x1c2818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30C8u; }
        if (ctx->pc != 0x1C30C8u) { return; }
    }
    ctx->pc = 0x1C30C8u;
label_1c30c8:
    // 0x1c30c8: 0x2403ff93  addiu       $v1, $zero, -0x6D
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
    // 0x1c30cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c30ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30d0: 0x1603000d  bne         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C30D0u;
    {
        const bool branch_taken_0x1c30d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c30d0) {
            ctx->pc = 0x1C3108u;
            goto label_1c3108;
        }
    }
    ctx->pc = 0x1C30D8u;
    // 0x1c30d8: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C30D8u;
    SET_GPR_U32(ctx, 31, 0x1C30E0u);
    ctx->pc = 0x1C30DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30D8u;
            // 0x1c30dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E0u; }
        if (ctx->pc != 0x1C30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E0u; }
        if (ctx->pc != 0x1C30E0u) { return; }
    }
    ctx->pc = 0x1C30E0u;
label_1c30e0:
    // 0x1c30e0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c30e4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c30e8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c30ec: 0x24c6bc38  addiu       $a2, $a2, -0x43C8
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949944));
    // 0x1c30f0: 0x24050463  addiu       $a1, $zero, 0x463
    ctx->pc = 0x1c30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1123));
    // 0x1c30f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f8: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C30F8u;
    SET_GPR_U32(ctx, 31, 0x1C3100u);
    ctx->pc = 0x1C30FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30F8u;
            // 0x1c30fc: 0x2408ff93  addiu       $t0, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3100u; }
        if (ctx->pc != 0x1C3100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3100u; }
        if (ctx->pc != 0x1C3100u) { return; }
    }
    ctx->pc = 0x1C3100u;
label_1c3100:
    // 0x1c3100: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C3100u;
    {
        const bool branch_taken_0x1c3100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3100u;
            // 0x1c3104: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3100) {
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C3108u;
label_1c3108:
    // 0x1c3108: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3108u;
    {
        const bool branch_taken_0x1c3108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3108) {
            ctx->pc = 0x1C310Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3108u;
            // 0x1c310c: 0xdfb00fb0  ld          $s0, 0xFB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C313Cu;
            goto label_1c313c;
        }
    }
    ctx->pc = 0x1C3110u;
    // 0x1c3110: 0xc07093e  jal         func_1C24F8
    ctx->pc = 0x1C3110u;
    SET_GPR_U32(ctx, 31, 0x1C3118u);
    ctx->pc = 0x1C3114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3110u;
            // 0x1c3114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C24F8u;
    if (runtime->hasFunction(0x1C24F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C24F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3118u; }
        if (ctx->pc != 0x1C3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C24F8_0x1c24f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3118u; }
        if (ctx->pc != 0x1C3118u) { return; }
    }
    ctx->pc = 0x1C3118u;
label_1c3118:
    // 0x1c3118: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c311c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c311cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3120: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3124: 0x24c6bc38  addiu       $a2, $a2, -0x43C8
    ctx->pc = 0x1c3124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949944));
    // 0x1c3128: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c3128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312c: 0x24050467  addiu       $a1, $zero, 0x467
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
    // 0x1c3130: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x1C3134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3130u;
            // 0x1c3134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3138u; }
        if (ctx->pc != 0x1C3138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3138u; }
        if (ctx->pc != 0x1C3138u) { return; }
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0xdfb00fb0  ld          $s0, 0xFB0($sp)
    ctx->pc = 0x1c3138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4016)));
label_1c313c:
    // 0x1c313c: 0xdfb10fb8  ld          $s1, 0xFB8($sp)
    ctx->pc = 0x1c313cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 4024)));
    // 0x1c3140: 0xdfb20fc0  ld          $s2, 0xFC0($sp)
    ctx->pc = 0x1c3140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 4032)));
    // 0x1c3144: 0xdfb30fc8  ld          $s3, 0xFC8($sp)
    ctx->pc = 0x1c3144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 4040)));
    // 0x1c3148: 0xdfb40fd0  ld          $s4, 0xFD0($sp)
    ctx->pc = 0x1c3148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 4048)));
    // 0x1c314c: 0xdfb50fd8  ld          $s5, 0xFD8($sp)
    ctx->pc = 0x1c314cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 4056)));
    // 0x1c3150: 0xdfbf0fe0  ld          $ra, 0xFE0($sp)
    ctx->pc = 0x1c3150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4064)));
    // 0x1c3154: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3154u;
            // 0x1c3158: 0x27bd0ff0  addiu       $sp, $sp, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C315Cu;
    // 0x1c315c: 0x0  nop
    ctx->pc = 0x1c315cu;
    // NOP
}
