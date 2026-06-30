#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169BD0
// Address: 0x169bd0 - 0x169c90
void sub_00169BD0_0x169bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169BD0_0x169bd0");
#endif

    switch (ctx->pc) {
        case 0x169c14u: goto label_169c14;
        case 0x169c1cu: goto label_169c1c;
        case 0x169c40u: goto label_169c40;
        case 0x169c54u: goto label_169c54;
        case 0x169c6cu: goto label_169c6c;
        default: break;
    }

    ctx->pc = 0x169bd0u;

    // 0x169bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169bd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x169bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169bdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x169bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x169be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x169be4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x169be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169bec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x169becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169bf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x169bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x169c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169c08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x169c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x169c0c: 0xc05a148  jal         func_168520
    ctx->pc = 0x169C0Cu;
    SET_GPR_U32(ctx, 31, 0x169C14u);
    ctx->pc = 0x169C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C0Cu;
            // 0x169c10: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C14u; }
        if (ctx->pc != 0x169C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C14u; }
        if (ctx->pc != 0x169C14u) { return; }
    }
    ctx->pc = 0x169C14u;
label_169c14:
    // 0x169c14: 0xc05a5ba  jal         func_1696E8
    ctx->pc = 0x169C14u;
    SET_GPR_U32(ctx, 31, 0x169C1Cu);
    ctx->pc = 0x1696E8u;
    if (runtime->hasFunction(0x1696E8u)) {
        auto targetFn = runtime->lookupFunction(0x1696E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C1Cu; }
        if (ctx->pc != 0x169C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001696E8_0x1696e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C1Cu; }
        if (ctx->pc != 0x169C1Cu) { return; }
    }
    ctx->pc = 0x169C1Cu;
label_169c1c:
    // 0x169c1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x169c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x169c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c24: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x169c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x169c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c30: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x169C30u;
    {
        const bool branch_taken_0x169c30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C30u;
            // 0x169c34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c30) {
            ctx->pc = 0x169C54u;
            goto label_169c54;
        }
    }
    ctx->pc = 0x169C38u;
    // 0x169c38: 0xc05a6c0  jal         func_169B00
    ctx->pc = 0x169C38u;
    SET_GPR_U32(ctx, 31, 0x169C40u);
    ctx->pc = 0x169B00u;
    if (runtime->hasFunction(0x169B00u)) {
        auto targetFn = runtime->lookupFunction(0x169B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C40u; }
        if (ctx->pc != 0x169C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169B00_0x169b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C40u; }
        if (ctx->pc != 0x169C40u) { return; }
    }
    ctx->pc = 0x169C40u;
label_169c40:
    // 0x169c40: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169C40u;
    {
        const bool branch_taken_0x169c40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x169C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C40u;
            // 0x169c44: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c40) {
            ctx->pc = 0x169C58u;
            goto label_169c58;
        }
    }
    ctx->pc = 0x169C48u;
    // 0x169c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c4c: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169C4Cu;
    SET_GPR_U32(ctx, 31, 0x169C54u);
    ctx->pc = 0x169C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C4Cu;
            // 0x169c50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C54u; }
        if (ctx->pc != 0x169C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C54u; }
        if (ctx->pc != 0x169C54u) { return; }
    }
    ctx->pc = 0x169C54u;
label_169c54:
    // 0x169c54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x169c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_169c58:
    // 0x169c58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x169c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169c64: 0xc05a148  jal         func_168520
    ctx->pc = 0x169C64u;
    SET_GPR_U32(ctx, 31, 0x169C6Cu);
    ctx->pc = 0x169C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C64u;
            // 0x169c68: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C6Cu; }
        if (ctx->pc != 0x169C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C6Cu; }
        if (ctx->pc != 0x169C6Cu) { return; }
    }
    ctx->pc = 0x169C6Cu;
label_169c6c:
    // 0x169c6c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x169c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169c78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x169c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169c7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x169c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x169c80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169c84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x169c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169c88: 0x3e00008  jr          $ra
    ctx->pc = 0x169C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C88u;
            // 0x169c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169C90u;
}
