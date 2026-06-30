#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164338
// Address: 0x164338 - 0x1643d0
void sub_00164338_0x164338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164338_0x164338");
#endif

    switch (ctx->pc) {
        case 0x164338u: goto label_164338;
        case 0x16433cu: goto label_16433c;
        case 0x164340u: goto label_164340;
        case 0x164344u: goto label_164344;
        case 0x164348u: goto label_164348;
        case 0x16434cu: goto label_16434c;
        case 0x164350u: goto label_164350;
        case 0x164354u: goto label_164354;
        case 0x164358u: goto label_164358;
        case 0x16435cu: goto label_16435c;
        case 0x164360u: goto label_164360;
        case 0x164364u: goto label_164364;
        case 0x164368u: goto label_164368;
        case 0x16436cu: goto label_16436c;
        case 0x164370u: goto label_164370;
        case 0x164374u: goto label_164374;
        case 0x164378u: goto label_164378;
        case 0x16437cu: goto label_16437c;
        case 0x164380u: goto label_164380;
        case 0x164384u: goto label_164384;
        case 0x164388u: goto label_164388;
        case 0x16438cu: goto label_16438c;
        case 0x164390u: goto label_164390;
        case 0x164394u: goto label_164394;
        case 0x164398u: goto label_164398;
        case 0x16439cu: goto label_16439c;
        case 0x1643a0u: goto label_1643a0;
        case 0x1643a4u: goto label_1643a4;
        case 0x1643a8u: goto label_1643a8;
        case 0x1643acu: goto label_1643ac;
        case 0x1643b0u: goto label_1643b0;
        case 0x1643b4u: goto label_1643b4;
        case 0x1643b8u: goto label_1643b8;
        case 0x1643bcu: goto label_1643bc;
        case 0x1643c0u: goto label_1643c0;
        case 0x1643c4u: goto label_1643c4;
        case 0x1643c8u: goto label_1643c8;
        case 0x1643ccu: goto label_1643cc;
        default: break;
    }

    ctx->pc = 0x164338u;

label_164338:
    // 0x164338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16433c:
    // 0x16433c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164340:
    // 0x164340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164344:
    // 0x164344: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
label_164348:
    // 0x164348: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16434c:
    if (ctx->pc == 0x16434Cu) {
        ctx->pc = 0x16434Cu;
            // 0x16434c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x164350u;
        goto label_164350;
    }
    ctx->pc = 0x164348u;
    {
        const bool branch_taken_0x164348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164348u;
            // 0x16434c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164348) {
            ctx->pc = 0x164360u;
            goto label_164360;
        }
    }
    ctx->pc = 0x164350u;
label_164350:
    // 0x164350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164354:
    // 0x164354: 0x8059064  j           func_164190
label_164358:
    if (ctx->pc == 0x164358u) {
        ctx->pc = 0x164358u;
            // 0x164358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16435Cu;
        goto label_16435c;
    }
    ctx->pc = 0x164354u;
    ctx->pc = 0x164358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164354u;
            // 0x164358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164190u;
    {
        auto targetFn = runtime->lookupFunction(0x164190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16435Cu;
label_16435c:
    // 0x16435c: 0x0  nop
    ctx->pc = 0x16435cu;
    // NOP
label_164360:
    // 0x164360: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_164364:
    if (ctx->pc == 0x164364u) {
        ctx->pc = 0x164364u;
            // 0x164364: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x164368u;
        goto label_164368;
    }
    ctx->pc = 0x164360u;
    {
        const bool branch_taken_0x164360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164360u;
            // 0x164364: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164360) {
            ctx->pc = 0x164370u;
            goto label_164370;
        }
    }
    ctx->pc = 0x164368u;
label_164368:
    // 0x164368: 0x8059004  j           func_164010
label_16436c:
    if (ctx->pc == 0x16436Cu) {
        ctx->pc = 0x16436Cu;
            // 0x16436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164370u;
        goto label_164370;
    }
    ctx->pc = 0x164368u;
    ctx->pc = 0x16436Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164368u;
            // 0x16436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164010u;
    {
        auto targetFn = runtime->lookupFunction(0x164010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164370u;
label_164370:
    // 0x164370: 0x8058f9e  j           func_163E78
label_164374:
    if (ctx->pc == 0x164374u) {
        ctx->pc = 0x164374u;
            // 0x164374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x164378u;
        goto label_164378;
    }
    ctx->pc = 0x164370u;
    ctx->pc = 0x164374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164370u;
            // 0x164374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163E78u;
    {
        auto targetFn = runtime->lookupFunction(0x163E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164378u;
label_164378:
    // 0x164378: 0x3e00008  jr          $ra
label_16437c:
    if (ctx->pc == 0x16437Cu) {
        ctx->pc = 0x16437Cu;
            // 0x16437c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164380u;
        goto label_164380;
    }
    ctx->pc = 0x164378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164378u;
            // 0x16437c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164380u;
label_164380:
    // 0x164380: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_164384:
    // 0x164384: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x164384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_164388:
    // 0x164388: 0xac4461e0  sw          $a0, 0x61E0($v0)
    ctx->pc = 0x164388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25056), GPR_U32(ctx, 4));
label_16438c:
    // 0x16438c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16438cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164390:
    // 0x164390: 0x3e00008  jr          $ra
label_164394:
    if (ctx->pc == 0x164394u) {
        ctx->pc = 0x164394u;
            // 0x164394: 0xac6561e4  sw          $a1, 0x61E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25060), GPR_U32(ctx, 5));
        ctx->pc = 0x164398u;
        goto label_164398;
    }
    ctx->pc = 0x164390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164390u;
            // 0x164394: 0xac6561e4  sw          $a1, 0x61E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25060), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164398u;
label_164398:
    // 0x164398: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_16439c:
    // 0x16439c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16439cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1643a0:
    // 0x1643a0: 0x8c4361e0  lw          $v1, 0x61E0($v0)
    ctx->pc = 0x1643a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25056)));
label_1643a4:
    // 0x1643a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1643a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1643a8:
    // 0x1643a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1643ac:
    if (ctx->pc == 0x1643ACu) {
        ctx->pc = 0x1643ACu;
            // 0x1643ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1643B0u;
        goto label_1643b0;
    }
    ctx->pc = 0x1643A8u;
    {
        const bool branch_taken_0x1643a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1643A8u;
            // 0x1643ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643a8) {
            ctx->pc = 0x1643BCu;
            goto label_1643bc;
        }
    }
    ctx->pc = 0x1643B0u;
label_1643b0:
    // 0x1643b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1643b4:
    // 0x1643b4: 0x60f809  jalr        $v1
label_1643b8:
    if (ctx->pc == 0x1643B8u) {
        ctx->pc = 0x1643B8u;
            // 0x1643b8: 0x8c4461e4  lw          $a0, 0x61E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25060)));
        ctx->pc = 0x1643BCu;
        goto label_1643bc;
    }
    ctx->pc = 0x1643B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1643BCu);
        ctx->pc = 0x1643B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1643B4u;
            // 0x1643b8: 0x8c4461e4  lw          $a0, 0x61E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25060)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1643BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
            if (ctx->pc != 0x1643BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1643BCu;
label_1643bc:
    // 0x1643bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1643bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1643c0:
    // 0x1643c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1643c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1643c4:
    // 0x1643c4: 0x3e00008  jr          $ra
label_1643c8:
    if (ctx->pc == 0x1643C8u) {
        ctx->pc = 0x1643C8u;
            // 0x1643c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1643CCu;
        goto label_1643cc;
    }
    ctx->pc = 0x1643C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1643C4u;
            // 0x1643c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1643CCu;
label_1643cc:
    // 0x1643cc: 0x0  nop
    ctx->pc = 0x1643ccu;
    // NOP
}
