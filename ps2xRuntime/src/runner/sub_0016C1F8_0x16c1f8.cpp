#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C1F8
// Address: 0x16c1f8 - 0x16c2f8
void sub_0016C1F8_0x16c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C1F8_0x16c1f8");
#endif

    switch (ctx->pc) {
        case 0x16c260u: goto label_16c260;
        case 0x16c274u: goto label_16c274;
        case 0x16c280u: goto label_16c280;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2dcu: goto label_16c2dc;
        default: break;
    }

    ctx->pc = 0x16c1f8u;

    // 0x16c1f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c208: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c20c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c210: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16c210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c214: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16c218: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16c218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c220: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C220u;
    {
        const bool branch_taken_0x16c220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C220u;
            // 0x16c224: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c220) {
            ctx->pc = 0x16C230u;
            goto label_16c230;
        }
    }
    ctx->pc = 0x16C228u;
    // 0x16c228: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x16C228u;
    {
        const bool branch_taken_0x16c228 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c228) {
            ctx->pc = 0x16C22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16C228u;
            // 0x16c22c: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16C258u;
            goto label_16c258;
        }
    }
    ctx->pc = 0x16C230u;
label_16c230:
    // 0x16c230: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16c234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c23c: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x16c240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c244: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c248: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c24c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16c24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c250: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16C250u;
    ctx->pc = 0x16C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C250u;
            // 0x16c254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C258u;
label_16c258:
    // 0x16c258: 0xc06011a  jal         func_180468
    ctx->pc = 0x16C258u;
    SET_GPR_U32(ctx, 31, 0x16C260u);
    ctx->pc = 0x16C25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C258u;
            // 0x16c25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C260u; }
        if (ctx->pc != 0x16C260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C260u; }
        if (ctx->pc != 0x16C260u) { return; }
    }
    ctx->pc = 0x16C260u;
label_16c260:
    // 0x16c260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c264: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16c264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c268: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16c268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c26c: 0xc05af98  jal         func_16BE60
    ctx->pc = 0x16C26Cu;
    SET_GPR_U32(ctx, 31, 0x16C274u);
    ctx->pc = 0x16C270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C26Cu;
            // 0x16c270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BE60u;
    if (runtime->hasFunction(0x16BE60u)) {
        auto targetFn = runtime->lookupFunction(0x16BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C274u; }
        if (ctx->pc != 0x16C274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BE60_0x16be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C274u; }
        if (ctx->pc != 0x16C274u) { return; }
    }
    ctx->pc = 0x16C274u;
label_16c274:
    // 0x16c274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c278: 0xc0602fe  jal         func_180BF8
    ctx->pc = 0x16C278u;
    SET_GPR_U32(ctx, 31, 0x16C280u);
    ctx->pc = 0x16C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C278u;
            // 0x16c27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180BF8u;
    if (runtime->hasFunction(0x180BF8u)) {
        auto targetFn = runtime->lookupFunction(0x180BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C280u; }
        if (ctx->pc != 0x16C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180BF8_0x180bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C280u; }
        if (ctx->pc != 0x16C280u) { return; }
    }
    ctx->pc = 0x16C280u;
label_16c280:
    // 0x16c280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c28c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c290: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16c298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c29c: 0x805b006  j           func_16C018
    ctx->pc = 0x16C29Cu;
    ctx->pc = 0x16C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C29Cu;
            // 0x16c2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C018u;
    if (runtime->hasFunction(0x16C018u)) {
        auto targetFn = runtime->lookupFunction(0x16C018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016C018_0x16c018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C2A4u;
    // 0x16c2a4: 0x0  nop
    ctx->pc = 0x16c2a4u;
    // NOP
    // 0x16c2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c2b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16c2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c2c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c2c4: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C2C4u;
    SET_GPR_U32(ctx, 31, 0x16C2CCu);
    ctx->pc = 0x16C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2C4u;
            // 0x16c2c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2CCu; }
        if (ctx->pc != 0x16C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2CCu; }
        if (ctx->pc != 0x16C2CCu) { return; }
    }
    ctx->pc = 0x16C2CCu;
label_16c2cc:
    // 0x16c2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2d4: 0xc05b0be  jal         func_16C2F8
    ctx->pc = 0x16C2D4u;
    SET_GPR_U32(ctx, 31, 0x16C2DCu);
    ctx->pc = 0x16C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2D4u;
            // 0x16c2d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C2F8u;
    if (runtime->hasFunction(0x16C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x16C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2DCu; }
        if (ctx->pc != 0x16C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C2F8_0x16c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2DCu; }
        if (ctx->pc != 0x16C2DCu) { return; }
    }
    ctx->pc = 0x16C2DCu;
label_16c2dc:
    // 0x16c2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c2e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c2e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c2ec: 0x80599e0  j           func_166780
    ctx->pc = 0x16C2ECu;
    ctx->pc = 0x16C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C2ECu;
            // 0x16c2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C2F4u;
    // 0x16c2f4: 0x0  nop
    ctx->pc = 0x16c2f4u;
    // NOP
}
