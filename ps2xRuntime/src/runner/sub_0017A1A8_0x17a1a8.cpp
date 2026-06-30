#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A1A8
// Address: 0x17a1a8 - 0x17a2f8
void sub_0017A1A8_0x17a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A1A8_0x17a1a8");
#endif

    switch (ctx->pc) {
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1acu: goto label_17a1ac;
        case 0x17a1b0u: goto label_17a1b0;
        case 0x17a1b4u: goto label_17a1b4;
        case 0x17a1b8u: goto label_17a1b8;
        case 0x17a1bcu: goto label_17a1bc;
        case 0x17a1c0u: goto label_17a1c0;
        case 0x17a1c4u: goto label_17a1c4;
        case 0x17a1c8u: goto label_17a1c8;
        case 0x17a1ccu: goto label_17a1cc;
        case 0x17a1d0u: goto label_17a1d0;
        case 0x17a1d4u: goto label_17a1d4;
        case 0x17a1d8u: goto label_17a1d8;
        case 0x17a1dcu: goto label_17a1dc;
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        case 0x17a258u: goto label_17a258;
        case 0x17a25cu: goto label_17a25c;
        case 0x17a260u: goto label_17a260;
        case 0x17a264u: goto label_17a264;
        case 0x17a268u: goto label_17a268;
        case 0x17a26cu: goto label_17a26c;
        case 0x17a270u: goto label_17a270;
        case 0x17a274u: goto label_17a274;
        case 0x17a278u: goto label_17a278;
        case 0x17a27cu: goto label_17a27c;
        case 0x17a280u: goto label_17a280;
        case 0x17a284u: goto label_17a284;
        case 0x17a288u: goto label_17a288;
        case 0x17a28cu: goto label_17a28c;
        case 0x17a290u: goto label_17a290;
        case 0x17a294u: goto label_17a294;
        case 0x17a298u: goto label_17a298;
        case 0x17a29cu: goto label_17a29c;
        case 0x17a2a0u: goto label_17a2a0;
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2a8u: goto label_17a2a8;
        case 0x17a2acu: goto label_17a2ac;
        case 0x17a2b0u: goto label_17a2b0;
        case 0x17a2b4u: goto label_17a2b4;
        case 0x17a2b8u: goto label_17a2b8;
        case 0x17a2bcu: goto label_17a2bc;
        case 0x17a2c0u: goto label_17a2c0;
        case 0x17a2c4u: goto label_17a2c4;
        case 0x17a2c8u: goto label_17a2c8;
        case 0x17a2ccu: goto label_17a2cc;
        case 0x17a2d0u: goto label_17a2d0;
        case 0x17a2d4u: goto label_17a2d4;
        case 0x17a2d8u: goto label_17a2d8;
        case 0x17a2dcu: goto label_17a2dc;
        case 0x17a2e0u: goto label_17a2e0;
        case 0x17a2e4u: goto label_17a2e4;
        case 0x17a2e8u: goto label_17a2e8;
        case 0x17a2ecu: goto label_17a2ec;
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        default: break;
    }

    ctx->pc = 0x17a1a8u;

label_17a1a8:
    // 0x17a1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a1ac:
    // 0x17a1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17a1b0:
    // 0x17a1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a1b4:
    // 0x17a1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a1b8:
    // 0x17a1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a1bc:
    // 0x17a1bc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_17a1c0:
    if (ctx->pc == 0x17A1C0u) {
        ctx->pc = 0x17A1C0u;
            // 0x17a1c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x17A1C4u;
        goto label_17a1c4;
    }
    ctx->pc = 0x17A1BCu;
    {
        const bool branch_taken_0x17a1bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1BCu;
            // 0x17a1c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1bc) {
            ctx->pc = 0x17A1D8u;
            goto label_17a1d8;
        }
    }
    ctx->pc = 0x17A1C4u;
label_17a1c4:
    // 0x17a1c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17a1c8:
    // 0x17a1c8: 0xc05e0a6  jal         func_178298
label_17a1cc:
    if (ctx->pc == 0x17A1CCu) {
        ctx->pc = 0x17A1CCu;
            // 0x17a1cc: 0x24845788  addiu       $a0, $a0, 0x5788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22408));
        ctx->pc = 0x17A1D0u;
        goto label_17a1d0;
    }
    ctx->pc = 0x17A1C8u;
    SET_GPR_U32(ctx, 31, 0x17A1D0u);
    ctx->pc = 0x17A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1C8u;
            // 0x17a1cc: 0x24845788  addiu       $a0, $a0, 0x5788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1D0u; }
        if (ctx->pc != 0x17A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A1D0u; }
        if (ctx->pc != 0x17A1D0u) { return; }
    }
    ctx->pc = 0x17A1D0u;
label_17a1d0:
    // 0x17a1d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_17a1d4:
    if (ctx->pc == 0x17A1D4u) {
        ctx->pc = 0x17A1D4u;
            // 0x17a1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A1D8u;
        goto label_17a1d8;
    }
    ctx->pc = 0x17A1D0u;
    {
        const bool branch_taken_0x17a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1D0u;
            // 0x17a1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1d0) {
            ctx->pc = 0x17A22Cu;
            goto label_17a22c;
        }
    }
    ctx->pc = 0x17A1D8u;
label_17a1d8:
    // 0x17a1d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a1dc:
    // 0x17a1dc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x17a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_17a1e0:
    // 0x17a1e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17a1e4:
    if (ctx->pc == 0x17A1E4u) {
        ctx->pc = 0x17A1E4u;
            // 0x17a1e4: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x17A1E8u;
        goto label_17a1e8;
    }
    ctx->pc = 0x17A1E0u;
    {
        const bool branch_taken_0x17a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1E0u;
            // 0x17a1e4: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1e0) {
            ctx->pc = 0x17A228u;
            goto label_17a228;
        }
    }
    ctx->pc = 0x17A1E8u;
label_17a1e8:
    // 0x17a1e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17a1ec:
    // 0x17a1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a1f0:
    // 0x17a1f0: 0x40f809  jalr        $v0
label_17a1f4:
    if (ctx->pc == 0x17A1F4u) {
        ctx->pc = 0x17A1F4u;
            // 0x17a1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A1F8u;
        goto label_17a1f8;
    }
    ctx->pc = 0x17A1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A1F8u);
        ctx->pc = 0x17A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1F0u;
            // 0x17a1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A1F8u; }
            if (ctx->pc != 0x17A1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x17A1F8u;
label_17a1f8:
    // 0x17a1f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a1fc:
    // 0x17a1fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a200:
    // 0x17a200: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17a204:
    // 0x17a204: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_17a208:
    // 0x17a208: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x17a208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_17a20c:
    // 0x17a20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a210:
    // 0x17a210: 0x40f809  jalr        $v0
label_17a214:
    if (ctx->pc == 0x17A214u) {
        ctx->pc = 0x17A214u;
            // 0x17a214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A218u;
        goto label_17a218;
    }
    ctx->pc = 0x17A210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A218u);
        ctx->pc = 0x17A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A210u;
            // 0x17a214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A218u; }
            if (ctx->pc != 0x17A218u) { return; }
        }
        }
    }
    ctx->pc = 0x17A218u;
label_17a218:
    // 0x17a218: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_17a21c:
    // 0x17a21c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17a220:
    // 0x17a220: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17a224:
    // 0x17a224: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x17a224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_17a228:
    // 0x17a228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a22c:
    // 0x17a22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a230:
    // 0x17a230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17a234:
    // 0x17a234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a238:
    // 0x17a238: 0x3e00008  jr          $ra
label_17a23c:
    if (ctx->pc == 0x17A23Cu) {
        ctx->pc = 0x17A23Cu;
            // 0x17a23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17A240u;
        goto label_17a240;
    }
    ctx->pc = 0x17A238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A238u;
            // 0x17a23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A240u;
label_17a240:
    // 0x17a240: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x17a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_17a244:
    // 0x17a244: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x17a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_17a248:
    // 0x17a248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a24c:
    // 0x17a24c: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x17a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_17a250:
    // 0x17a250: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x17a250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_17a254:
    // 0x17a254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a258:
    // 0x17a258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a25c:
    // 0x17a25c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a260:
    // 0x17a260: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x17a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_17a264:
    // 0x17a264: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x17a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_17a268:
    // 0x17a268: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x17a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_17a26c:
    // 0x17a26c: 0xc05e2b4  jal         func_178AD0
label_17a270:
    if (ctx->pc == 0x17A270u) {
        ctx->pc = 0x17A270u;
            // 0x17a270: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A274u;
        goto label_17a274;
    }
    ctx->pc = 0x17A26Cu;
    SET_GPR_U32(ctx, 31, 0x17A274u);
    ctx->pc = 0x17A270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A26Cu;
            // 0x17a270: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A274u; }
        if (ctx->pc != 0x17A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A274u; }
        if (ctx->pc != 0x17A274u) { return; }
    }
    ctx->pc = 0x17A274u;
label_17a274:
    // 0x17a274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a278:
    // 0x17a278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a27c:
    // 0x17a27c: 0xc05e222  jal         func_178888
label_17a280:
    if (ctx->pc == 0x17A280u) {
        ctx->pc = 0x17A280u;
            // 0x17a280: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A284u;
        goto label_17a284;
    }
    ctx->pc = 0x17A27Cu;
    SET_GPR_U32(ctx, 31, 0x17A284u);
    ctx->pc = 0x17A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A27Cu;
            // 0x17a280: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A284u; }
        if (ctx->pc != 0x17A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A284u; }
        if (ctx->pc != 0x17A284u) { return; }
    }
    ctx->pc = 0x17A284u;
label_17a284:
    // 0x17a284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a288:
    // 0x17a288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17a288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a28c:
    // 0x17a28c: 0x240500ca  addiu       $a1, $zero, 0xCA
    ctx->pc = 0x17a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_17a290:
    // 0x17a290: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_17a294:
    // 0x17a294: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17a294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a298:
    // 0x17a298: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_17a29c:
    if (ctx->pc == 0x17A29Cu) {
        ctx->pc = 0x17A29Cu;
            // 0x17a29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A2A0u;
        goto label_17a2a0;
    }
    ctx->pc = 0x17A298u;
    {
        const bool branch_taken_0x17a298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A298u;
            // 0x17a29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a298) {
            ctx->pc = 0x17A2D4u;
            goto label_17a2d4;
        }
    }
    ctx->pc = 0x17A2A0u;
label_17a2a0:
    // 0x17a2a0: 0x40f809  jalr        $v0
label_17a2a4:
    if (ctx->pc == 0x17A2A4u) {
        ctx->pc = 0x17A2A8u;
        goto label_17a2a8;
    }
    ctx->pc = 0x17A2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A2A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A2A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A2A8u; }
            if (ctx->pc != 0x17A2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x17A2A8u;
label_17a2a8:
    // 0x17a2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a2ac:
    // 0x17a2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a2b0:
    // 0x17a2b0: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x17a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_17a2b4:
    // 0x17a2b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17a2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a2b8:
    // 0x17a2b8: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x17a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_17a2bc:
    // 0x17a2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2c0:
    // 0x17a2c0: 0x40f809  jalr        $v0
label_17a2c4:
    if (ctx->pc == 0x17A2C4u) {
        ctx->pc = 0x17A2C4u;
            // 0x17a2c4: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x17A2C8u;
        goto label_17a2c8;
    }
    ctx->pc = 0x17A2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A2C8u);
        ctx->pc = 0x17A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A2C0u;
            // 0x17a2c4: 0x10803c  dsll32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A2C8u; }
            if (ctx->pc != 0x17A2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x17A2C8u;
label_17a2c8:
    // 0x17a2c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_17a2cc:
    // 0x17a2cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17a2d0:
    // 0x17a2d0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x17a2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_17a2d4:
    // 0x17a2d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a2d8:
    // 0x17a2d8: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x17a2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_17a2dc:
    // 0x17a2dc: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x17a2dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_17a2e0:
    // 0x17a2e0: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x17a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_17a2e4:
    // 0x17a2e4: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x17a2e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_17a2e8:
    // 0x17a2e8: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x17a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_17a2ec:
    // 0x17a2ec: 0x3e00008  jr          $ra
label_17a2f0:
    if (ctx->pc == 0x17A2F0u) {
        ctx->pc = 0x17A2F0u;
            // 0x17a2f0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x17A2F4u;
        goto label_17a2f4;
    }
    ctx->pc = 0x17A2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A2ECu;
            // 0x17a2f0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A2F4u;
label_17a2f4:
    // 0x17a2f4: 0x0  nop
    ctx->pc = 0x17a2f4u;
    // NOP
}
