#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C2F8
// Address: 0x16c2f8 - 0x16c3e8
void sub_0016C2F8_0x16c2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C2F8_0x16c2f8");
#endif

    switch (ctx->pc) {
        case 0x16c368u: goto label_16c368;
        case 0x16c378u: goto label_16c378;
        case 0x16c384u: goto label_16c384;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d4u: goto label_16c3d4;
        default: break;
    }

    ctx->pc = 0x16c2f8u;

    // 0x16c2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c304: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c308: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16c308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c30c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c310: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16c310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c318: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C318u;
    {
        const bool branch_taken_0x16c318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C318u;
            // 0x16c31c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c318) {
            ctx->pc = 0x16C338u;
            goto label_16c338;
        }
    }
    ctx->pc = 0x16C320u;
    // 0x16c320: 0x5e400006  bgtzl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C320u;
    {
        const bool branch_taken_0x16c320 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x16c320) {
            ctx->pc = 0x16C324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16C320u;
            // 0x16c324: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16C33Cu;
            goto label_16c33c;
        }
    }
    ctx->pc = 0x16C328u;
    // 0x16c328: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x16c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x16c32c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x16c32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x16c330: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16C330u;
            // 0x16c334: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16C360u;
            goto label_16c360;
        }
    }
    ctx->pc = 0x16C338u;
label_16c338:
    // 0x16c338: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16c33c:
    // 0x16c33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c344: 0x24843dd8  addiu       $a0, $a0, 0x3DD8
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15832));
    // 0x16c348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c34c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c34cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c354: 0x8059f4e  j           func_167D38
    ctx->pc = 0x16C354u;
    ctx->pc = 0x16C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C354u;
            // 0x16c358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C35Cu;
    // 0x16c35c: 0x0  nop
    ctx->pc = 0x16c35cu;
    // NOP
label_16c360:
    // 0x16c360: 0xc06011a  jal         func_180468
    ctx->pc = 0x16C360u;
    SET_GPR_U32(ctx, 31, 0x16C368u);
    ctx->pc = 0x16C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C360u;
            // 0x16c364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C368u; }
        if (ctx->pc != 0x16C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C368u; }
        if (ctx->pc != 0x16C368u) { return; }
    }
    ctx->pc = 0x16C368u;
label_16c368:
    // 0x16c368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c36c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16c36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c370: 0xc05afc8  jal         func_16BF20
    ctx->pc = 0x16C370u;
    SET_GPR_U32(ctx, 31, 0x16C378u);
    ctx->pc = 0x16C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C370u;
            // 0x16c374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BF20u;
    if (runtime->hasFunction(0x16BF20u)) {
        auto targetFn = runtime->lookupFunction(0x16BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C378u; }
        if (ctx->pc != 0x16C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BF20_0x16bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C378u; }
        if (ctx->pc != 0x16C378u) { return; }
    }
    ctx->pc = 0x16C378u;
label_16c378:
    // 0x16c378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c37c: 0xc0602fe  jal         func_180BF8
    ctx->pc = 0x16C37Cu;
    SET_GPR_U32(ctx, 31, 0x16C384u);
    ctx->pc = 0x16C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C37Cu;
            // 0x16c380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180BF8u;
    if (runtime->hasFunction(0x180BF8u)) {
        auto targetFn = runtime->lookupFunction(0x180BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C384u; }
        if (ctx->pc != 0x16C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180BF8_0x180bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C384u; }
        if (ctx->pc != 0x16C384u) { return; }
    }
    ctx->pc = 0x16C384u;
label_16c384:
    // 0x16c384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c38c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c390: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c394: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c39c: 0x805b006  j           func_16C018
    ctx->pc = 0x16C39Cu;
    ctx->pc = 0x16C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C39Cu;
            // 0x16c3a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C018u;
    if (runtime->hasFunction(0x16C018u)) {
        auto targetFn = runtime->lookupFunction(0x16C018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016C018_0x16c018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C3A4u;
    // 0x16c3a4: 0x0  nop
    ctx->pc = 0x16c3a4u;
    // NOP
    // 0x16c3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C3B0u;
    // 0x16c3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c3b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c3bc: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C3BCu;
    SET_GPR_U32(ctx, 31, 0x16C3C4u);
    ctx->pc = 0x16C3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3BCu;
            // 0x16c3c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3C4u; }
        if (ctx->pc != 0x16C3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3C4u; }
        if (ctx->pc != 0x16C3C4u) { return; }
    }
    ctx->pc = 0x16C3C4u;
label_16c3c4:
    // 0x16c3c4: 0xc05b0fa  jal         func_16C3E8
    ctx->pc = 0x16C3C4u;
    SET_GPR_U32(ctx, 31, 0x16C3CCu);
    ctx->pc = 0x16C3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3C4u;
            // 0x16c3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C3E8u;
    if (runtime->hasFunction(0x16C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x16C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3CCu; }
        if (ctx->pc != 0x16C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C3E8_0x16c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3CCu; }
        if (ctx->pc != 0x16C3CCu) { return; }
    }
    ctx->pc = 0x16C3CCu;
label_16c3cc:
    // 0x16c3cc: 0xc0599e0  jal         func_166780
    ctx->pc = 0x16C3CCu;
    SET_GPR_U32(ctx, 31, 0x16C3D4u);
    ctx->pc = 0x16C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3CCu;
            // 0x16c3d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3D4u; }
        if (ctx->pc != 0x16C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3D4u; }
        if (ctx->pc != 0x16C3D4u) { return; }
    }
    ctx->pc = 0x16C3D4u;
label_16c3d4:
    // 0x16c3d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c3d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3E0u;
            // 0x16c3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C3E8u;
}
