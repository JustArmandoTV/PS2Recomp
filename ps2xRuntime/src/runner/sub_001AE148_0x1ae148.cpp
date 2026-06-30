#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE148
// Address: 0x1ae148 - 0x1ae228
void sub_001AE148_0x1ae148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE148_0x1ae148");
#endif

    switch (ctx->pc) {
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1f0u: goto label_1ae1f0;
        default: break;
    }

    ctx->pc = 0x1ae148u;

    // 0x1ae148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae14c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ae14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ae150: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ae150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae154: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae15c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae160: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae16c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AE16Cu;
    SET_GPR_U32(ctx, 31, 0x1AE174u);
    ctx->pc = 0x1AE170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE16Cu;
            // 0x1ae170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE174u; }
        if (ctx->pc != 0x1AE174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE174u; }
        if (ctx->pc != 0x1AE174u) { return; }
    }
    ctx->pc = 0x1AE174u;
label_1ae174:
    // 0x1ae174: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AE174u;
    {
        const bool branch_taken_0x1ae174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE174u;
            // 0x1ae178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae174) {
            ctx->pc = 0x1AE20Cu;
            goto label_1ae20c;
        }
    }
    ctx->pc = 0x1AE17Cu;
    // 0x1ae17c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae180: 0x26120950  addiu       $s2, $s0, 0x950
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1ae184: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE184u;
    {
        const bool branch_taken_0x1ae184 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE184u;
            // 0x1ae188: 0x2604090c  addiu       $a0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae184) {
            ctx->pc = 0x1AE1C8u;
            goto label_1ae1c8;
        }
    }
    ctx->pc = 0x1AE18Cu;
    // 0x1ae18c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae190: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ae190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ae194: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ae198: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1ae198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ae19c: 0x3012  mflo        $a2
    ctx->pc = 0x1ae19cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1ae1a0: 0xc064c4e  jal         func_193138
    ctx->pc = 0x1AE1A0u;
    SET_GPR_U32(ctx, 31, 0x1AE1A8u);
    ctx->pc = 0x1AE1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1A0u;
            // 0x1ae1a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193138u;
    if (runtime->hasFunction(0x193138u)) {
        auto targetFn = runtime->lookupFunction(0x193138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A8u; }
        if (ctx->pc != 0x1AE1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193138_0x193138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1A8u; }
        if (ctx->pc != 0x1AE1A8u) { return; }
    }
    ctx->pc = 0x1AE1A8u;
label_1ae1a8:
    // 0x1ae1a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae1a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1ac: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AE1ACu;
    {
        const bool branch_taken_0x1ae1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1ACu;
            // 0x1ae1b0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1ac) {
            ctx->pc = 0x1AE20Cu;
            goto label_1ae20c;
        }
    }
    ctx->pc = 0x1AE1B4u;
    // 0x1ae1b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ae1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae1bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE1BCu;
    {
        const bool branch_taken_0x1ae1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1BCu;
            // 0x1ae1c0: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1bc) {
            ctx->pc = 0x1AE208u;
            goto label_1ae208;
        }
    }
    ctx->pc = 0x1AE1C4u;
    // 0x1ae1c4: 0x0  nop
    ctx->pc = 0x1ae1c4u;
    // NOP
label_1ae1c8:
    // 0x1ae1c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae1cc: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AE1CCu;
    {
        const bool branch_taken_0x1ae1cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1CCu;
            // 0x1ae1d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1cc) {
            ctx->pc = 0x1AE208u;
            goto label_1ae208;
        }
    }
    ctx->pc = 0x1AE1D4u;
    // 0x1ae1d4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae1d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ae1dc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ae1e0: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1ae1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ae1e4: 0x3012  mflo        $a2
    ctx->pc = 0x1ae1e4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1ae1e8: 0xc064d78  jal         func_1935E0
    ctx->pc = 0x1AE1E8u;
    SET_GPR_U32(ctx, 31, 0x1AE1F0u);
    ctx->pc = 0x1AE1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1E8u;
            // 0x1ae1ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1935E0u;
    if (runtime->hasFunction(0x1935E0u)) {
        auto targetFn = runtime->lookupFunction(0x1935E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1F0u; }
        if (ctx->pc != 0x1AE1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001935E0_0x1935e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE1F0u; }
        if (ctx->pc != 0x1AE1F0u) { return; }
    }
    ctx->pc = 0x1AE1F0u;
label_1ae1f0:
    // 0x1ae1f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE1F4u;
    {
        const bool branch_taken_0x1ae1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1F4u;
            // 0x1ae1f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1f4) {
            ctx->pc = 0x1AE20Cu;
            goto label_1ae20c;
        }
    }
    ctx->pc = 0x1AE1FCu;
    // 0x1ae1fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1ae200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae204: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1ae204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1ae208:
    // 0x1ae208: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ae208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ae20c:
    // 0x1ae20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ae218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae220: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE220u;
            // 0x1ae224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE228u;
}
