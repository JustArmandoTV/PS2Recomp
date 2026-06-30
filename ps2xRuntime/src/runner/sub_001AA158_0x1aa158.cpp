#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA158
// Address: 0x1aa158 - 0x1aa288
void sub_001AA158_0x1aa158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA158_0x1aa158");
#endif

    switch (ctx->pc) {
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa23cu: goto label_1aa23c;
        default: break;
    }

    ctx->pc = 0x1aa158u;

    // 0x1aa158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa16c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aa170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aa174: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1aa174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa17c: 0x26301fe4  addiu       $s0, $s1, 0x1FE4
    ctx->pc = 0x1aa17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8164));
    // 0x1aa180: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1aa180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa184: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA184u;
    {
        const bool branch_taken_0x1aa184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AA188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA184u;
            // 0x1aa188: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa184) {
            ctx->pc = 0x1AA198u;
            goto label_1aa198;
        }
    }
    ctx->pc = 0x1AA18Cu;
    // 0x1aa18c: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AA18Cu;
    SET_GPR_U32(ctx, 31, 0x1AA194u);
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA194u; }
        if (ctx->pc != 0x1AA194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA194u; }
        if (ctx->pc != 0x1AA194u) { return; }
    }
    ctx->pc = 0x1AA194u;
label_1aa194:
    // 0x1aa194: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa198:
    // 0x1aa198: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1aa19c: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA19Cu;
    {
        const bool branch_taken_0x1aa19c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x1aa19c) {
            ctx->pc = 0x1AA1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA19Cu;
            // 0x1aa1a0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA1B4u;
            goto label_1aa1b4;
        }
    }
    ctx->pc = 0x1AA1A4u;
    // 0x1aa1a4: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AA1A4u;
    SET_GPR_U32(ctx, 31, 0x1AA1ACu);
    ctx->pc = 0x1AA1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1A4u;
            // 0x1aa1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1ACu; }
        if (ctx->pc != 0x1AA1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1ACu; }
        if (ctx->pc != 0x1AA1ACu) { return; }
    }
    ctx->pc = 0x1AA1ACu;
label_1aa1ac:
    // 0x1aa1ac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1aa1acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1aa1b0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aa1b4:
    // 0x1aa1b4: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA1B4u;
    {
        const bool branch_taken_0x1aa1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AA1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1B4u;
            // 0x1aa1b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1b4) {
            ctx->pc = 0x1AA1CCu;
            goto label_1aa1cc;
        }
    }
    ctx->pc = 0x1AA1BCu;
    // 0x1aa1bc: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AA1BCu;
    SET_GPR_U32(ctx, 31, 0x1AA1C4u);
    ctx->pc = 0x1AA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1BCu;
            // 0x1aa1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1C4u; }
        if (ctx->pc != 0x1AA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1C4u; }
        if (ctx->pc != 0x1AA1C4u) { return; }
    }
    ctx->pc = 0x1AA1C4u;
label_1aa1c4:
    // 0x1aa1c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1aa1c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1aa1c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1aa1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1cc:
    // 0x1aa1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa1d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aa1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa1dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1E0u;
            // 0x1aa1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA1E8u;
label_1aa1e8:
    // 0x1aa1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa1f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa1f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aa1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa1f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa1fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aa200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aa204: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa20c: 0x26501fe4  addiu       $s0, $s2, 0x1FE4
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8164));
    // 0x1aa210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aa210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa214: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1aa214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa218: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA218u;
    {
        const bool branch_taken_0x1aa218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA218u;
            // 0x1aa21c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa218) {
            ctx->pc = 0x1AA228u;
            goto label_1aa228;
        }
    }
    ctx->pc = 0x1AA220u;
    // 0x1aa220: 0xc06993c  jal         func_1A64F0
    ctx->pc = 0x1AA220u;
    SET_GPR_U32(ctx, 31, 0x1AA228u);
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA228u; }
        if (ctx->pc != 0x1AA228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA228u; }
        if (ctx->pc != 0x1AA228u) { return; }
    }
    ctx->pc = 0x1AA228u;
label_1aa228:
    // 0x1aa228: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1aa228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1aa22c: 0x10b30003  beq         $a1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA22Cu;
    {
        const bool branch_taken_0x1aa22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AA230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA22Cu;
            // 0x1aa230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa22c) {
            ctx->pc = 0x1AA23Cu;
            goto label_1aa23c;
        }
    }
    ctx->pc = 0x1AA234u;
    // 0x1aa234: 0xc06993c  jal         func_1A64F0
    ctx->pc = 0x1AA234u;
    SET_GPR_U32(ctx, 31, 0x1AA23Cu);
    ctx->pc = 0x1AA238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA234u;
            // 0x1aa238: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA23Cu; }
        if (ctx->pc != 0x1AA23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA23Cu; }
        if (ctx->pc != 0x1AA23Cu) { return; }
    }
    ctx->pc = 0x1AA23Cu;
label_1aa23c:
    // 0x1aa23c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aa23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1aa240: 0x10b30009  beq         $a1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA240u;
    {
        const bool branch_taken_0x1aa240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA240u;
            // 0x1aa244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa240) {
            ctx->pc = 0x1AA268u;
            goto label_1aa268;
        }
    }
    ctx->pc = 0x1AA248u;
    // 0x1aa248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa24c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aa24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa258: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aa258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa260: 0x806993c  j           func_1A64F0
    ctx->pc = 0x1AA260u;
    ctx->pc = 0x1AA264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA260u;
            // 0x1aa264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A64F0u;
    if (runtime->hasFunction(0x1A64F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A64F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A64F0_0x1a64f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA268u;
label_1aa268:
    // 0x1aa268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa26c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa270: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa274: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aa274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa27c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA27Cu;
            // 0x1aa280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA284u;
    // 0x1aa284: 0x0  nop
    ctx->pc = 0x1aa284u;
    // NOP
}
